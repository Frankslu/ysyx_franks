
#include "isa.h"
#include "paddr.h"

void record_read(vaddr_t addr);
void record_write(vaddr_t addr);

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