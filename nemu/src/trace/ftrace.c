#include <trace/trace.h>
#include <assert.h>
#include <elf.h>

__attribute__((unused)) static Func_array_t *func_array = NULL;
__attribute__((unused)) static Fring_t fring[FRING_SIZE] = {};
__attribute__((unused)) static int fring_pos = 0;
extern uint64_t g_nr_guest_inst;

void fring_init(){
	for (int i = 0; i < FRING_SIZE; i++){
		fring[i].func_name[0] = '\0';
	}
	fring_pos = 0;	
}

void ftrace_init(char *elf_file){
	Func_array_t *p = func_array;
	if (func_array == NULL){
		func_array = (Func_array_t *)malloc(sizeof(Func_array_t));
		func_array->next = NULL;
		func_array->cnt = 0;
		p = func_array;
	}
	else {
		while (p->next != NULL){
			p = p->next;
		}
		p->next = (Func_array_t *)malloc(sizeof(Func_array_t));
		p = p->next;
		p->next = NULL;
		p->cnt = 0;
	}

typedef MUXDEF(CONFIG_ISA64, Elf64_Shdr, Elf32_Shdr) Elf_Shdr;
typedef MUXDEF(CONFIG_ISA64, Elf64_Ehdr, Elf32_Ehdr) Elf_Ehdr;
typedef MUXDEF(CONFIG_ISA64, Elf64_Sym , Elf32_Sym ) Elf_Sym;
	
	if(elf_file == NULL)
		return;

	char *filename_start = strstr(elf_file, "build/") + strlen("build/");
	char *filename_end = strstr(elf_file, "-loongarch32r");
	strncpy(p->filename, filename_start, filename_end - filename_start);
	p->filename[filename_end - filename_start] = '\0';

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

	for (int i = 0; i < symtab->sh_size / sizeof(Elf_Sym); i++){
		Elf_Sym sym;
		fseek(fp, symtab->sh_offset + i * sizeof(sym), SEEK_SET);
		res = fread(&sym, sizeof(sym), 1, fp);
		if (ELF32_ST_TYPE(sym.st_info) == STT_FUNC)
			p->cnt++;
	}

	p->func = (Func_t *)malloc(p->cnt * sizeof(Func_t));
	p->cnt = 0;

	for (int i = 0; i < symtab->sh_size / sizeof(Elf_Sym); i++){
		Elf_Sym sym;
		fseek(fp, symtab->sh_offset + i * sizeof(sym), SEEK_SET);
		res = fread(&sym, sizeof(sym), 1, fp);
		if (ELF32_ST_TYPE(sym.st_info) == STT_FUNC) {
			p->func[p->cnt].addr = sym.st_value;
			p->func[p->cnt].size = sym.st_size;
			fseek(fp, strtab->sh_offset + sym.st_name, SEEK_SET);
			res = fscanf(fp, "%23s", p->func[p->cnt].name);
			p->cnt++;
		}
	}
	
	fclose(fp);

	return;
}

vaddr_t func2addr(char *func_name, char *file_name, bool *success){
	Func_t *func = NULL;
	*success = true;
	if (file_name == NULL){
		if (streq(func_name, "main")){
			for (Func_array_t *p = func_array->next; p != NULL; p = p->next){
				func = p->func;
				for (int i = 0; i < p->cnt; i++)
					if (streq(func_name, func[i].name))
						return func[i].addr;
			}
		}
		else {
			for (Func_array_t *p = func_array; p != NULL; p = p->next){
				func = p->func;
				for (int i = 0; i < p->cnt; i++)
					if (streq(func_name, func[i].name))
						return func[i].addr;
			}
		}
	}
	else{
		for (Func_array_t *p = func_array; p != NULL; p = p->next){
			if (streq(file_name, p->filename)){
				func = p->func;
				for (int i = 0; i < p->cnt; i++)
					if (streq(func_name, func[i].name))
						return func[i].addr;
				break;
			}
		}
	}

	*success = false;
	return 0;
}

#ifdef CONFIG_FTRACE
void func_call(vaddr_t next_pc, vaddr_t pc){
	for (Func_array_t *p = func_array; p != NULL; p = p->next){
		Func_t *func = p->func;
		for (int i = 0; i < p->cnt; i++){
			if (next_pc == func[i].addr){
				strcpy(fring[fring_pos].func_name, func[i].name);
				strcpy(fring[fring_pos].file_name, p->filename);
				fring[fring_pos].next_pc = func[i].addr;
				fring[fring_pos].pc = pc;
				fring[fring_pos].dir = CALL;
				fring[fring_pos].clk = g_nr_guest_inst;
				fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
				log_write("Ftrace:%lu PC %08x call %s %s\t%08x\n", g_nr_guest_inst , pc, p->filename, func[i].name, next_pc);
				return;
			}
		}
	}
}

void func_ret(vaddr_t next_pc, vaddr_t pc){
	for (Func_array_t *p = func_array; p != NULL; p = p->next){
		Func_t *func = p->func;
		for (int i = 0; i < p->cnt; i++){
			if (next_pc > func[i].addr && next_pc < func[i].addr + func[i].size){
				strcpy(fring[fring_pos].func_name, func[i].name);
				strcpy(fring[fring_pos].file_name, p->filename);
				fring[fring_pos].next_pc = func[i].addr;
				fring[fring_pos].pc = pc;
				fring[fring_pos].dir = RET;
				fring[fring_pos].clk = g_nr_guest_inst;
				fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
				log_write("Ftrace:%lu PC %08x ret  %s %s\t%08x\n", g_nr_guest_inst, pc, p->filename, func[i].name, next_pc);
				return;
			}
		}
	}
}

void func_call_ret(vaddr_t next_pc, vaddr_t pc){
	for (Func_array_t *p = func_array; p != NULL; p = p->next){
		Func_t *func = p->func;
		for (int i = 0; i < p->cnt; i++){
			if (next_pc == func[i].addr){
				strcpy(fring[fring_pos].func_name, func[i].name);
				strcpy(fring[fring_pos].file_name, p->filename);
				fring[fring_pos].next_pc = func[i].addr;
				fring[fring_pos].pc = pc;
				fring[fring_pos].dir = CALL;
				fring[fring_pos].clk = g_nr_guest_inst;
				fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
				log_write("Ftrace:%lu PC %08x call %s %s\t%08x\n", g_nr_guest_inst, pc, p->filename, func[i].name, next_pc);
				return;
			}
			else if (next_pc > func[i].addr && next_pc < func[i].addr + func[i].size){
				strcpy(fring[fring_pos].func_name, func[i].name);
				strcpy(fring[fring_pos].file_name, p->filename);
				fring[fring_pos].next_pc = func[i].addr;
				fring[fring_pos].pc = pc;
				fring[fring_pos].dir = RET;
				fring[fring_pos].clk = g_nr_guest_inst;
				fring_pos = fring_pos == FRING_SIZE - 1 ? 0 : fring_pos + 1;
				log_write("Ftrace:%lu PC %08x ret  %s %s\t%08x\n", g_nr_guest_inst, pc, p->filename, func[i].name, next_pc);
				return;
			}
		}
	}
}

void display_fring(){
	int pos = fring_pos;
	for (int i=0; i < FRING_SIZE; i++){
		if (fring[pos].func_name[0] != '\0'){
			if (fring[pos].dir == CALL){
				printf("Ftrace:%lu PC %08x call %s %s\t%08x\n", fring[pos].clk, fring[pos].pc, fring[pos].file_name, fring[pos].func_name, fring[pos].next_pc);
			}
			else {
				printf("Ftrace:%lu PC %08x ret  %s %s\t%08x\n", fring[pos].clk, fring[pos].pc, fring[pos].file_name, fring[pos].func_name, fring[pos].next_pc);
			}
		}
		pos = pos == FRING_SIZE - 1 ? 0 : pos + 1;
	}
}
#endif


