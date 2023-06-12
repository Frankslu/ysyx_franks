/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

void record_dev_read(vaddr_t addr, const char *name, word_t data);
void record_dev_write(vaddr_t addr, const char *name, word_t data);

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
	uint8_t *p = p_space;
	// page aligned;
	size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
	p_space += size;
	assert(p_space - io_space < IO_SPACE_MAX);
	return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
	if (map == NULL) {
		Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
	} else {
		Assert(addr <= map->high && addr >= map->low,
				"address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
				addr, map->name, map->low, map->high, cpu.pc);
	}
}

static bool sdb_check_bound(IOMap *map, paddr_t addr) {
	if (map == NULL) {
		printf("1 address (" ANSI_FMT(FMT_PADDR, ANSI_FG_GREEN) ") is out of bound\n", addr);
		return false;
	}
	else if (addr > map->high || addr < map->low){
		printf("2 address (" ANSI_FMT(FMT_PADDR, ANSI_FG_GREEN) ") is out of bound {%s} ["
			ANSI_FMT(FMT_PADDR, ANSI_FG_GREEN) ", " ANSI_FMT(FMT_PADDR, ANSI_FG_GREEN) "]\n",
			addr, map->name, map->low, map->high);
		return false;
	}
	return true;
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
	if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
	io_space = malloc(IO_SPACE_MAX);
	assert(io_space);
	p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
	assert(len >= 1 && len <= 4);
	check_bound(map, addr);
	paddr_t offset = addr - map->low;
	invoke_callback(map->callback, offset, len, false); // prepare data to read
	word_t ret = host_read(map->space + offset, len);
	record_dev_read(addr, map->name, ret);
	return ret;
}

word_t sdb_map_read(paddr_t addr, int len, IOMap *map, bool *suc) {
	if (sdb_check_bound(map, addr) == false){
		*suc = false;
		return 0;
	}
	paddr_t offset = addr - map->low;
	*suc = true;
	return host_read(map->space + offset, 4);
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
	assert(len >= 1 && len <= 8);
	check_bound(map, addr);
	paddr_t offset = addr - map->low;
	host_write(map->space + offset, len, data);
	invoke_callback(map->callback, offset, len, true);
	record_dev_write(addr, map->name, data);
}
