
#include "isa.h"
#include "paddr.h"
#include "ve.h"
#include "cpu/cpu.h"

extern VMain *top;

void record_read(vaddr_t addr);
void record_write(vaddr_t addr);

extern "C" void vaddr_fetch(int raddr, int *rdata){
#ifdef CONFIG_BREAKPOINT
	extern word_t replaced_inst;
	if (cpu.is_break == true){
		*rdata = replaced_inst;
		return;
	}
#endif
	*rdata = paddr_read(raddr, 4);
}

extern "C" void vaddr_read_npc(int raddr, int *rdata){
	IFDEF(CONFIG_MTRACE, record_read(raddr));
	*rdata = paddr_read(raddr, 4);
}
extern "C" void vaddr_write_npc(int waddr, int wdata, char wmask, int *rdata){
	IFDEF(CONFIG_MTRACE, record_write(waddr));
	*rdata = 0xbeef;
	int len;
	if (1 == (uint32_t)wmask){
		len = 1;
	}
	else if (3 == (uint32_t)wmask){
		len = 2;
	}
	else if (7 == (uint32_t)wmask){
		len = 4;
	}
	else {
		set_npc_state(NPC_ABORT, cpu.pc, 1);
		return;
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