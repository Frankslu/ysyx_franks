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
#include <memory/paddr.h>

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