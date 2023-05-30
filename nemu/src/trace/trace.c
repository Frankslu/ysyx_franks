#include "trace/trace.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <elf.h>
#include <assert.h>

#ifdef CONFIG_TRACE

__attribute__((unused)) static Iring_t iring;
__attribute__((unused)) static Mring_t mring;

__attribute__((unused)) static Func_t func[FLIST_SIZE] = {};
// __attribute__((unused)) static int func_cnt1 = 0;
__attribute__((unused)) static int func_cnt = 0;

__attribute__((unused)) static Fring_t fring[FRING_SIZE] = {};
__attribute__((unused)) static int fring_pos = 0;

__attribute__((unused)) extern char* elf_file;
__attribute__((unused)) extern CPU_state cpu;


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
	int pos = iring.pos;
	for (int i=0; i<IRING_BUFSIZE; i++){
		if (iring.buf[pos][0] != '\0'){
			printf("%s\n", iring.buf[pos]);
		}
		pos = pos == (IRING_BUFSIZE - 1) ? 0 : (pos + 1);
	}
}
#endif

#ifdef CONFIG_MTRACE
void record_read(vaddr_t addr){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	log_write("Mtrace: pc %08x read  %08x\n", cpu.pc, addr);
	mring.pc[mring.pos] = cpu.pc;
	mring.addr[mring.pos] = addr;
	mring.wr[mring.pos] = READ;
	mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void record_write(vaddr_t addr){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	log_write("Mtrace: pc %08x wrtie %08x\n", cpu.pc, addr);
	mring.pc[mring.pos] = cpu.pc;
	mring.addr[mring.pos] = addr;
	mring.wr[mring.pos] = WRITE;
	mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void display_mring(){
	int pos = mring.pos;
	for (int i=0; i<MRING_BUFSIZE; i++){
		if (mring.wr[pos] != INVALID){
			printf("%x  %s %x\n", mring.pc[pos], mring.wr[pos] == READ ? "read " : "write", mring.addr[pos]);
		}
		pos = pos == (MRING_BUFSIZE - 1) ? 0 : (pos + 1);
	}
}
#endif


#ifdef CONFIG_FTRACE

void ftrace_init(char *elf_file){
	func_cnt = 0;
	
typedef MUXDEF(CONFIG_ISA64, Elf64_Shdr, Elf32_Shdr) Elf_Shdr;
typedef MUXDEF(CONFIG_ISA64, Elf64_Ehdr, Elf32_Ehdr) Elf_Ehdr;
typedef MUXDEF(CONFIG_ISA64, Elf64_Sym , Elf32_Sym ) Elf_Sym;
	
	if(elf_file == NULL)
		return;

	FILE *fp = fopen(elf_file, "rb");
	Assert(fp, "Can not open %s\n", elf_file);

	Elf_Ehdr section_header;
	__attribute__((unused)) int res;
	res = fread(&section_header, sizeof(section_header), 1, fp);

	Assert(section_header.e_ident[EI_MAG0] == ELFMAG0 &&
		section_header.e_ident[EI_MAG1] == ELFMAG1 &&
		section_header.e_ident[EI_MAG2] == ELFMAG2 &&
		section_header.e_ident[EI_MAG3] == ELFMAG3,
		"%s is not elf\n", elf_file);

	Elf_Shdr section_table[section_header.e_shnum];
	fseek(fp, section_header.e_shoff, SEEK_SET);
	res = fread(section_table, sizeof(section_table), 1, fp);

	__attribute__((unused)) Elf_Shdr *symtab = NULL, *strtab = NULL;
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
	
	for (int i = 0; i < symtab->sh_size / sizeof(Elf_Sym); i++) {
		Elf_Sym sym;
		fseek(fp, symtab->sh_offset + i * sizeof(sym), SEEK_SET);
		res = fread(&sym, sizeof(sym), 1, fp);
		if (ELF32_ST_TYPE(sym.st_info) == STT_FUNC) {
			func[func_cnt].addr = sym.st_value;
			func[func_cnt].size = sym.st_size;
			fseek(fp, strtab->sh_offset + sym.st_name, SEEK_SET);
			res = fscanf(fp, "%23s", func[func_cnt].name);
			func_cnt++;
			if (func_cnt == FLIST_SIZE)
				break;
		}
	}
	
	fclose(fp);

	for (int i = 0; i < FRING_SIZE; i++){
		fring[i].func_name[0] = '\0';
	}
	fring_pos = 0;

	return;
}

void func_call(vaddr_t next_pc, vaddr_t pc){
	printf("func call\n");
	for (int i = 0; i < func_cnt; i++){
		if (next_pc == func[i].addr){
			strcpy(fring[fring_pos].func_name, func[i].name);
			fring[fring_pos].next_pc = func[i].addr;
			fring[fring_pos].pc = pc;
			fring[fring_pos].dir = CALL;
			fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
			log_write("Ftrace: PC %08x call %s\t%08x\n", pc, func[i].name, next_pc);
			return;
		}
	}
}

void func_ret(vaddr_t next_pc, vaddr_t pc){
	printf("func ret\n");
	for (int i = 0; i < func_cnt; i++){
		if (next_pc > func[i].addr && next_pc < func[i].addr + func[i].size){
			strcpy(fring[fring_pos].func_name, func[i].name);
			fring[fring_pos].next_pc = func[i].addr;
			fring[fring_pos].pc = pc;
			fring[fring_pos].dir = RET;
			fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
			log_write("Ftrace: PC %08x ret %s\t%08x\n", pc, func[i].name, next_pc);
			return;
		}
	}
}

void func_call_ret(vaddr_t next_pc, vaddr_t pc){
	printf("func\n");
	for (int i = 0; i < func_cnt; i++){
		if (next_pc == func[i].addr){
			strcpy(fring[fring_pos].func_name, func[i].name);
			fring[fring_pos].next_pc = func[i].addr;
			fring[fring_pos].pc = pc;
			fring[fring_pos].dir = CALL;
			fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
			log_write("Ftrace: PC %08x call %s\t%08x\n", pc, func[i].name, next_pc);
			return;
		}
		else if (next_pc > func[i].addr && next_pc < func[i].addr + func[i].size){
			strcpy(fring[fring_pos].func_name, func[i].name);
			fring[fring_pos].next_pc = func[i].addr;
			fring[fring_pos].pc = pc;
			fring[fring_pos].dir = RET;
			fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
			log_write("Ftrace: PC %08x ret %s\t%08x\n", pc, func[i].name, next_pc);
			return;
		}
	}
}

void display_fring(){
	int pos = fring_pos;
	for (int i=0; i < FRING_SIZE; i++){
		if (fring[pos].func_name[0] != '\0'){
			if (fring[pos].dir == CALL){
				printf("Ftrace: PC %08x call %s\t%08x\n", fring[pos].pc, fring[pos].func_name, fring[pos].next_pc);
			}
			else {
				printf("Ftrace: PC %08x ret  %s\t%08x\n", fring[pos].pc, fring[pos].func_name, fring[pos].next_pc);
			}
		}
		pos = pos == FRING_SIZE ? 0 : pos + 1;
	}
}
#endif

#ifdef CONFIG_DTRACE

#endif

void init_trace(){
	IFDEF(CONFIG_IRING, iring_init());
	IFDEF(CONFIG_MTRACE, mring_init());
	__attribute__((unused)) extern char *elf_file;
	IFDEF(CONFIG_FTRACE, ftrace_init(elf_file));
}

#endif


