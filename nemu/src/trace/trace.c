#include "trace/trace.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <elf.h>
#include <assert.h>

char *NO2exception(word_t NO), *NO2syscall();
extern uint64_t g_nr_guest_inst;

__attribute__((unused)) extern CPU_state cpu;

__attribute__((unused)) static Iring_t iring;
__attribute__((unused)) static Mring_t mring;

__attribute__((unused)) static Func_array_t *func_array = NULL;

__attribute__((unused)) static Fring_t fring[FRING_SIZE] = {};
__attribute__((unused)) static int fring_pos = 0;

__attribute__((unused)) static Dring_t dring[DRING_SIZE] = {};
__attribute__((unused)) static int dring_pos = 0;

__attribute_maybe_unused__ static Ering_t ering[ERING_SIZE] = {};
__attribute_maybe_unused__ static int ering_pos = 0;

__attribute_maybe_unused__ static Sring_t sring[ERING_SIZE] = {};
__attribute_maybe_unused__ static int sring_pos = 0;

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

#ifdef CONFIG_TRACE

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

//------------------------------------------------------
#ifdef CONFIG_MTRACE
void record_read(vaddr_t addr, word_t data){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	log_write("Mtrace: pc %08x read  %08x data %08x\n", cpu.pc, addr, data);
	mring.pc[mring.pos] = cpu.pc;
	mring.addr[mring.pos] = addr;
	mring.data[mring.pos] = data;
	mring.wr[mring.pos] = READ;
	mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void record_write(vaddr_t addr, word_t data){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	log_write("Mtrace: pc %08x write %08x data %08x\n", cpu.pc, addr, data);
	mring.pc[mring.pos] = cpu.pc;
	mring.addr[mring.pos] = addr;
	mring.data[mring.pos] = data;
	mring.wr[mring.pos] = WRITE;
	mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void display_mring(){
	int pos = mring.pos;
	for (int i=0; i<MRING_BUFSIZE; i++){
		if (mring.wr[pos] != INVALID){
			printf("%08x  %s %08x %08x\n", mring.pc[pos], mring.wr[pos] == READ ? "read " : "write", mring.addr[pos], mring.data[pos]);
		}
		pos = pos == (MRING_BUFSIZE - 1) ? 0 : (pos + 1);
	}
}
#endif

//-------------------------------------------------------
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

//------------------------------------------------------------
#ifdef CONFIG_DTRACE
#define d_pos dring[dring_pos]
void dring_init(){
	for (int i = 0; i < DRING_SIZE; i++){
		dring[i].dev_name[0] = '\0';
	}
	dring_pos = 0;
}

void record_dev_read(vaddr_t addr, const char *name, word_t data){
	log_write("Dtrace pc %08x read  %08x data %08x %s\n", cpu.pc, addr, data, name);
	d_pos.pc = cpu.pc;
	d_pos.addr = addr;
	strcpy(d_pos.dev_name, name);
	d_pos.wr = READ;
	d_pos.data = data;
	dring_pos = dring_pos == (DRING_SIZE - 1) ? 0 : dring_pos + 1;
}

void record_dev_write(vaddr_t addr, const char *name, word_t data){
	log_write("Dtrace pc %08x write  %08x data %08x %s\n", cpu.pc, addr, data, name);
	d_pos.pc = cpu.pc;
	d_pos.addr = addr;
	strcpy(d_pos.dev_name, name);
	d_pos.wr = WRITE;
	d_pos.data = data;
	dring_pos = dring_pos == (DRING_SIZE - 1) ? 0 : dring_pos + 1;
}

void display_dring(){
	int pos = dring_pos;
	for (int i=0; i < DRING_SIZE; i++){
		if (dring[pos].dev_name[0] != '\0'){
			printf("%08x  %s %08x %08x %s\n",
				dring[pos].pc, dring[pos].wr == READ ? "read " : "write", dring[pos].addr, dring[pos].data, dring[pos].dev_name);
		}
		pos = pos == (DRING_SIZE - 1) ? 0 : pos + 1;
	}
}
#endif

//-----------------------------------------------------------------
#ifdef CONFIG_ETRACE
#define e_pos ering[ering_pos]
void ering_init(){
	ering_pos = 0;
	for (int i = 0; i < ERING_SIZE; i++)
		ering[i].NO = NULL;
}

void record_exception(word_t NO){
	e_pos.NO = NO2exception(NO);
	if (e_pos.NO == NULL)
		return;
	log_write("Etrace pc %08x exception %s\n", cpu.pc, e_pos.NO);
	e_pos.pc = cpu.pc;
	ering_pos = ering_pos == ERING_SIZE - 1 ? 0 : ering_pos + 1;
}

void display_ering(){
	int pos = ering_pos;
	for (int i=0; i < ERING_SIZE; i++){
		if (ering[pos].NO != NULL)
			printf("%08x exception %s\n",ering[pos].pc, ering[pos].NO);
		pos = pos == (ERING_SIZE - 1) ? 0 : pos + 1;
	}
}
#endif

//--------------------------------------------------
#ifdef CONFIG_STRACE
#define s_pos sring[sring_pos]
void sring_init(){
	sring_pos = 0;
	for (int i = 0; i < SRING_SIZE; i++)
		sring[i].NO = NULL;
}

void record_syscall(){
	if (s_pos.NO != NULL)
		free(s_pos.NO);
	s_pos.NO = NO2syscall();
	if (s_pos.NO == NULL)
		return;
	log_write("Strace pc %08x %s\n", cpu.pc, s_pos.NO);
	s_pos.pc = cpu.pc;
	sring_pos = sring_pos == SRING_SIZE - 1 ? 0 : sring_pos + 1;
}

void display_sring(){
	int pos = sring_pos;
	for (int i=0; i < SRING_SIZE; i++){
		if (sring[pos].NO != NULL)
			printf("%08x %s\n",sring[pos].pc, sring[pos].NO);
		pos = pos == (SRING_SIZE - 1) ? 0 : pos + 1;
	}
}
#endif

#endif

void init_trace(){
	IFDEF(CONFIG_IRING, iring_init());
	IFDEF(CONFIG_MTRACE, mring_init());
	IFDEF(CONFIG_FTRACE, fring_init());
	IFDEF(CONFIG_DTRACE, dring_init());
	IFDEF(CONFIG_ETRACE, ering_init());
	IFDEF(CONFIG_STRACE, sring_init());
}
