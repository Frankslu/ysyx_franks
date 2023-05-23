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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

extern CPU_state cpu;

typedef struct {
	word_t *gpr;
	vaddr_t pc;
	bool valid;
	word_t inst;
	bool is_break;
} npc_CPU_state;

void init_mem();
void init_rand();

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	word_t *buffer = (word_t *)buf;
	if (direction == DIFFTEST_TO_DUT){
		while (n >= 4){
			*buffer = paddr_read(addr, 4);
			n -= 4;
			addr += 4;
			buffer++;
		}

		uint16_t *buf1 = (uint16_t *)buffer;
		while (n >= 2){
			*buf1 = (uint16_t)paddr_read(addr, 2);
			n -= 2;
			addr += 2;
			buf1++;
		}

		uint8_t *buf2 = (uint8_t *)buf1;
		while (n >= 1){
			*buf2 = (uint8_t)paddr_read(addr, 1);
		}
	}
	else {
		while (n >= 4){
			paddr_write(addr, 4, *buffer);
			n -= 4;
			addr += 4;
			buffer++;
		}

		uint16_t *buf1 = (uint16_t *)buffer;
		while (n >= 2){
			paddr_write(addr, 2, *buf1);
			n -= 2;
			addr += 2;
			buf1++;
		}

		uint8_t *buf2 = (uint8_t *)buf1;
		while (n >= 1){
			paddr_write(addr, 1, *buf2);
		}
	}
}

void difftest_regcpy(void *dut, bool direction) {
	if (direction == DIFFTEST_TO_DUT){
		for (int i = 0; i < 32; i++)
			((npc_CPU_state *)dut)->gpr[i] = cpu.gpr[i];
		((npc_CPU_state *)dut)->pc = cpu.ref_pc;
	}
	else {
		for (int i = 0; i < 32; i++){
			cpu.gpr[i] = ((npc_CPU_state *)dut)->gpr[i];
		}
		cpu.pc = ((npc_CPU_state *)dut)->pc;
		cpu.ref_pc = ((npc_CPU_state *)dut)->pc;
		printf("nemu pc = %x\n", ((npc_CPU_state *)dut)->pc);
	}
}

bool difftest_regcmp(void *dut){
	bool err = true;
	if (((CPU_state *)dut)->pc != cpu.ref_pc){
		printf("PC wrong: ref = ");
		printf(ANSI_FMT("0x%x", ANSI_FG_GREEN), cpu.ref_pc);
		printf("dut = ");
		printf(ANSI_FMT("0x%x", ANSI_FG_GREEN), ((npc_CPU_state *)dut)->pc);
		printf("\n");
		err = false;
	}

	for (int i = 0; i < 32; i++){
		if (((npc_CPU_state *)dut)->gpr[i] != cpu.gpr[i]){
			printf("$r");
			printf(ANSI_FMT("%d", ANSI_FG_GREEN), i);
			printf(" wrong: ref = ");
			printf(ANSI_FMT("0x%x", ANSI_FG_GREEN), cpu.gpr[i]);
			printf("dut = ");
			printf(ANSI_FMT("0x%x", ANSI_FG_GREEN), ((npc_CPU_state *)dut)->gpr[i]);
			printf("\n");
			err = false;
		}
	}

	return err;
}

void difftest_exec(uint64_t n) {
	cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
	assert(0);
}

void difftest_init() {
	/* Perform ISA dependent initialization. */
	init_rand();
	init_isa();
	init_mem();
}
