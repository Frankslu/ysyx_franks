#include <trace/trace.h>

__attribute__((unused)) static Dring_t dring[DRING_SIZE] = {};
__attribute__((unused)) static int dring_pos = 0;

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