
#include "isa.h"
#include "paddr.h"
#include "ve.h"

void record_read(vaddr_t addr);
void record_write(vaddr_t addr);

extern "C" void vaddr_fetch(int raddr, int *rdata){
	*rdata = paddr_read(raddr, 4);
}

extern "C" void vaddr_read(int raddr, int *rdata){
    IFDEF(CONFIG_MTRACE, record_read(raddr));
	*rdata = paddr_read(raddr, 4);
}
extern "C" void vaddr_write(int waddr, int wdata, char wmask, int *rdata){
    IFDEF(CONFIG_MTRACE, record_write(waddr));
	*rdata = 0xbeef;
	uint32_t mask = (uint32_t)wmask;
	int len;
	if (mask == 1){
		len = 1;
	}
	else if (mask == 3){
		len = 2;
	}
	else if (mask == 7){
		len = 4;
	}
	
	paddr_write(waddr, len, wdata);
}

word_t vaddr_ifetch(vaddr_t addr, int len) {
	return paddr_read(addr, len);
}

word_t break_ifetch(vaddr_t addr, int len) {
	return paddr_read(addr, len);
}

word_t vaddr_read(vaddr_t addr, int len) {
    IFDEF(CONFIG_MTRACE, record_read(addr));
	return paddr_read(addr, len);
}

word_t sdb_vaddr_read(vaddr_t addr, int len) {
	return paddr_read(addr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
    IFDEF(CONFIG_MTRACE, record_write(addr));
	paddr_write(addr, len, data);
}

void break_write(vaddr_t addr, int len, word_t data) {
	paddr_write(addr, len, data);
}