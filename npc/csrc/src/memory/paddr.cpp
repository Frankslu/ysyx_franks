
#include "host.h"
#include "paddr.h"
#include "device/mmio.h"
#include "isa.h"

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
void difftest_skip_ref();
#ifdef CONFIG_DTRACE
void record_dev_read(vaddr_t addr, const char *name, word_t data);
void record_dev_write(vaddr_t addr, const char *name, word_t data);
#endif

static word_t pmem_read(paddr_t addr, int len) {
	word_t ret = host_read(guest_to_host(addr), len);
	return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
	host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
	printf("fault is in npc\n");
	panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
			addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
	pmem = malloc(CONFIG_MSIZE);
	assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
	uint32_t *p = (uint32_t *)pmem;
	int i;
	for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
		p[i] = rand();
	}
#endif
	Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
	if (likely(in_pmem(addr))) return pmem_read(addr, len);
	// IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
	if (addr >= CONFIG_RTC_MMIO && addr < CONFIG_RTC_MMIO + 8){
		IFDEF(CONFIG_DIFFTEST, difftest_skip_ref());
		uint64_t time = get_time();
		int shift = (addr - CONFIG_RTC_MMIO) * 8;
		record_dev_read(addr, "TIMER", time >> shift);
		return time >> shift;
	}
	out_of_bound(addr);
	return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
	if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
	// IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
	if (addr == CONFIG_SERIAL_MMIO) {
		putchar((int)data);
		record_dev_write(addr, "serial", data);
		return;
	}
	out_of_bound(addr);
}