#include "trace/trace.h"
#include <stdio.h>

#ifdef CONFIG_MTRACE

__attribute__((unused)) static Mring_t mring;

void mring_init(){
	for (int i=0; i<MRING_BUFSIZE; i++){
		mring.pc[i] = 0;
		mring.addr[i] = 0;
		mring.wr[i] = INVALID;
	}
	mring.pos = 0;
}

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