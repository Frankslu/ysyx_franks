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

#include "isa.h"
#include "reg.h"

const char *regs[2][32] = { {
	"$0", "ra", "tp", "sp", "a0", "a1", "a2", "a3",
	"a4", "a5", "a6", "a7", "t0", "t1", "t2", "t3",
	"t4", "t5", "t6", "t7", "t8", "rs", "fp", "s0",
	"s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8"
	},{
	"r0",  "r1",  "r2",  "r3",  "r4",  "r5",  "r6",  "r7",
	"r8",  "r9",  "r10", "r11", "r12", "r13", "r14", "r15",
	"r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23",
	"r24", "r25", "r26", "r27", "r28", "r29", "r30", "r31"
	}
};

void isa_reg_display(char *args) {
	for (int i = 0; i < 32; i++){
		printf("%02d %s  0x%08x\n", i, regs[1][i], cpu.gpr[i]);
	}
	return;
}

word_t isa_reg_str2val(const char *s, bool *success) {
	if (strcmp(s, "$pc") == 0){
		*success = true;
		return cpu.pc;
	}
	if (strcmp(s, "$0") == 0){
		*success = true;
		return cpu.gpr[0];
	}
	char reg_n[10];
	sscanf(s, "$%s", reg_n);
	for (int i = 1; i < 32;i++){
		if (strcmp(reg_n, regs[0][i]) == 0 || strcmp(reg_n, regs[1][i]) == 0){
			*success = true;
			return cpu.gpr[i];
		}
	}
	*success = false;
	return 0;
}
