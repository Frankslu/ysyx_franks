#include "trace/trace.h"

__attribute_maybe_unused__ static Mring_t mring;

void mring_init(){
	for (int i=0; i<MRING_BUFSIZE; i++){
		mring.pc[i] = 0;
		mring.addr[i] = 0;
		mring.wr[i] = INVALID;
	}
	mring.pos = 0;
}

#ifdef CONFIG_MTRACE
void record_read(vaddr_t addr){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	log_write_cc("Mtrace: pc %08x read  %08x\n", cpu.pc, addr);
	mring.pc[mring.pos] = cpu.pc;
	mring.addr[mring.pos] = addr;
	mring.wr[mring.pos] = READ;
	mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void record_write(vaddr_t addr){
	if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
		return;
	log_write_cc("Mtrace: pc %08x wrtie %08x\n", cpu.pc, addr);
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

