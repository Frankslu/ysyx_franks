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
#include "local-include/reg.h"

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

static inline void p_crmd(){
	printf("CRMD PLV: %01llx, IE: %01llx, DA: %01llx, PG: %01llx, DATF: %02llx, DATM: %02llx, 0: %6llx\n",
		BITS(csr(CRMD), 1, 0), BITS(csr(CRMD), 2, 2), BITS(csr(CRMD), 3, 3), BITS(csr(CRMD), 4, 4),
		BITS(csr(CRMD), 6, 5), BITS(csr(CRMD), 8, 7), BITS(csr(CRMD), 31, 9));
}

static inline void p_prmd(){
	printf("PRMD PPLV: %01llx, PIE: %01llx, 0:%07llx\n",
		BITS(csr(PRMD), 1, 0), BITS(csr(PRMD), 3, 2), BITS(csr(PRMD), 31, 4));
}

static inline void p_estat(){
	printf("ESTAT IS: %04llx, 0: %01llx, Ecode: %02llx, Esubcode: %03llx, 0: %01llx\n",
		BITS(csr(ESTAT), 12, 0), BITS(csr(ESTAT), 15, 13), BITS(csr(ESTAT), 21, 16), BITS(csr(ESTAT), 30, 22),
		BITS(csr(ESTAT), 31, 31));
}

static inline void p_era(){
	printf("ERA PC:%08x\n", csr(ERA));
}

static inline void p_eentry(){
	// printf("EENTRY 0:%02llx, PC:%07llx\n", BITS(csr(EENTRY), 5, 0), BITS(csr(EENTRY), 31, 6));
	printf("EENTRY PC:%08x\n", csr(EENTRY));
}

void display_csr(const char *s){
	if (streq(s, "crmd")){
		p_crmd();
		return;
	}
	else if (streq(s, "prmd")){
		p_prmd();
		return;
	}
	else if (streq(s, "era")){
		p_era();
		return;
	}
	else if (streq(s, "estat")){
		p_estat();
		return;
	}
	else if (streq(s, "eentry")){
		p_eentry();
		return;
	}

	int csr_num;
	if (s[0] == '0' && s[1] == 'x'){
		sscanf(s, "%x", &csr_num);
	}
	
	if (csr_num == CRMD){
		p_crmd();
		return;
	}
	else if (csr_num == PRMD){
		p_prmd();
		return;
	}
	else if (csr_num == ERA){
		p_era();
		return;
	}
	else if (csr_num == ESTAT){
		p_estat();
		return;
	}
	else if (csr_num == EENTRY){
		p_eentry();
		return;
	}

	printf("wrong csr reg");
	return;
}

void display_all_csr(){
	p_crmd();
	p_prmd();
	p_era();
	p_estat();
	p_eentry();
}

void isa_reg_display() {
	for (int i = 0; i < 32; i++){
		printf("%02d %s  0x%08x\n", i, regs[1][i], cpu.gpr[i]);
	}
	display_all_csr();
	return;
}