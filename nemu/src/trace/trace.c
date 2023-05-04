#include <trace/trace.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <elf.h>
#include <assert.h>

#ifdef CONFIG_TRACE

Iring_t iring;
Mring_t mring;
Func_t func[24];

void iring_init();
void mring_init();

void init_trace(){
	IFDEF(CONFIG_IRING, iring_init());
	IFDEF(CONFIG_MTRACE, mring_init());
}

void iring_init(){
	for (int i=0; i<IRING_BUFSIZE; i++){
		iring.buf[i][0] = '\0';
	}
	iring.pos = 0;
}

void mring_init(){
	for (int i=0; i<MRING_BUFSIZE; i++){
		mring.pc[i] = 0;
		mring.addr[i] = 0;
		mring.wr[i] = INVALID;
	}
	mring.pos = 0;
}


#ifdef CONFIG_IRING
void iring_write(char *_buf){
	strcpy(iring.buf[iring.pos], _buf);
	iring.pos = iring.pos == (IRING_BUFSIZE - 1) ? 0 : (iring.pos + 1);
}

void display_iring(){
	
	for (int i=0; i<IRING_BUFSIZE; i++){
		if (iring.buf[iring.pos][0] != '\0'){
			printf("%s\n", iring.buf[iring.pos]);
		}
		iring.pos = iring.pos == (IRING_BUFSIZE - 1) ? 0 : (iring.pos + 1);
	}
}
#endif



#ifdef CONFIG_MTRACE
void record_read(vaddr_t addr){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	mring.pc[mring.pos] = cpu.pc;
	mring.addr[mring.pos] = addr;
	mring.wr[mring.pos] = READ;
	mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void record_write(vaddr_t addr){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	mring.pc[mring.pos] = cpu.pc;
	mring.addr[mring.pos] = addr;
	mring.wr[mring.pos] = WRITE;
	mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void display_mring(){
	for (int i=0; i<MRING_BUFSIZE; i++){
		if (mring.wr[mring.pos] != INVALID){
			printf("%x  %s %x\n", mring.pc[mring.pos], mring.wr[mring.pos] == READ ? "read" : "write", mring.addr[mring.pos]);
		}
		mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
	}
}
#endif


#ifdef CONFIG_FTRACE
void init_ftrace(char *elf_file){
typedef MUXDEF(CONFIG_ISA64, Elf64_Shdr, Elf32_Shdr) Elf_Shdr;
typedef MUXDEF(CONFIG_ISA64, Elf64_Ehdr, Elf32_Ehdr) Elf_Ehdr;
typedef MUXDEF(CONFIG_ISA64, Elf64_Sym , Elf32_Sym ) Elf_Sym;
	int res;
	if(elf_file == NULL)
		return;

	FILE *fp = fopen(elf_file, "rb");
	Assert(fp, "Can not open %s\n", elf_file);

	Elf_Ehdr section_header;
	res = fread(&section_header, sizeof(section_header), 1, fp);

	Assert(section_header.e_ident[EI_MAG0] != ELFMAG0 ||
		section_header.e_ident[EI_MAG1] != ELFMAG1 ||
		section_header.e_ident[EI_MAG2] != ELFMAG2 ||
		section_header.e_ident[EI_MAG3] != ELFMAG3,
		"%s is not elf\n", elf_file);

	Elf_Shdr section_table[section_header.e_shnum];
	fseek(fp, section_header.e_shoff, SEEK_SET);
	res = fread(section_table, sizeof(section_table), 1, fp);


	Elf_Shdr *symtab = NULL, *strtab = NULL;
	int a = 0;
	for (int i = 0; i < section_header.e_shnum; i++) {
		if (section_table[i].sh_type == SHT_SYMTAB) {
			symtab = &section_table[i];
			a++;
		}
		if (section_table[i].sh_type == SHT_STRTAB) {
			strtab = &section_table[i];
			a++;
		}
		if (a == 2){
			break;
		}
	} 
	
	for (int i=0; i < symtab->sh_size / sizeof(Elf_Sym); i++) {
		char name[50];
		Elf_Sym sym;
		fseek(fp, symtab->sh_offset + i * sizeof(sym), SEEK_SET);
		res = fread(&sym, sizeof(sym), 1, fp);
		fseek(fp, strtab->sh_offset + sym.st_name, SEEK_SET);
		res = fread(name, 50, 1, fp);
		if (ELF32_ST_TYPE(sym.st_info) == STT_FUNC) {
			printf("Function %s at address %x, %d\n", name, sym.st_value, sym.st_name);
		}
	}
	fclose(fp);
	res++;
	return;
}
#endif

#endif