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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

void print_func(char s[], vaddr_t npc, vaddr_t pc, word_t inst);
void func_call_ret(vaddr_t next_pc, vaddr_t pc);
void func_call(vaddr_t next_pc, vaddr_t pc);
void func_ret(vaddr_t next_pc, vaddr_t pc);

int scan_bp(vaddr_t pc);
void reload_bp();
IFDEF(CONFIG_BREAKPOINT, int break_flag = 0);
IFDEF(CONFIG_BREAKPOINT, static int in_kernel = 0);

#ifdef CONFIG_BREAKPOINT
void reload_bp_after_left_kernel(vaddr_t next_pc){
	if (next_pc >= (vaddr_t)0x1f000000 && in_kernel == 1){
		in_kernel = 0;
		reload_bp();
	}
	else if (next_pc < (vaddr_t)0x1f000000 && in_kernel == 0){
		in_kernel = 1;
	}
}
#endif

enum {
	TYPE_2RI12, TYPE_2RI12U, TYPE_1RI20, TYPE_3R,
	TYPE_OFFS26, TYPE_2RO16, TYPE_2RI5, TYPE_CSR,
	TYPE_N, // none
};

#define src1R()   do { *src1 = R(*rj); } while (0)
#define src2R()   do { *src2 = R(*rk); } while (0)
#define simm12()  do { *imm = SEXT(BITS(i, 21, 10), 12); } while (0)
#define simm12u() do { *imm = BITS(i, 21, 10); } while (0)
#define simm20()  do { *imm = SEXT(BITS(i, 24, 5), 20) << 12; } while (0)
#define offs26()  do { *imm = SEXT((BITS(i, 25, 10) << 2 | BITS(i, 9, 0) << 18), 28);} while (0)
#define offs16()  do { *imm = SEXT(BITS(i, 25, 10), 16) << 2;} while (0)

static inline void decode_operand(Decode *s, int *rj, int *rk, int *rd_, int *csr_num,
	word_t *src1, word_t *src2, word_t *imm, int type) {
	uint32_t i = s->isa.inst.val;
	*rj = BITS(i, 9, 5);
	*rk = BITS(i, 14, 10);
	*rd_ = BITS(i, 4, 0);
	*csr_num = BITS(i, 23, 10);
	switch (type) {
	case TYPE_1RI20: simm20(); src1R(); break;
	case TYPE_2RI12: simm12(); src1R(); break;
	case TYPE_2RI12U: simm12u(); src1R(); break;
	case TYPE_3R: src1R();  src2R(); break;
	case TYPE_OFFS26: offs26();break;
	case TYPE_2RO16: offs16(); src1R(); break;
	case TYPE_2RI5: src1R(); *src2 = *rk; break;
	case TYPE_CSR: src1R(); break;
	}
}

static inline void csr_exchange(int rd, int csr_num, int mask){
	int temp = R(rd);
	R(rd) = csr(csr_num);
	csr(csr_num) = (csr(csr_num) & ~mask) | (temp & mask);
}

static inline void csr_wr(int rd, int csr_num){
	csr_exchange(rd, csr_num, 0xffffffff);
}

static int decode_exec(Decode *s) {
	int rj = 0, rk = 0, rd = 0, csr_num = 0;
	word_t src1 = 0, src2 = 0, imm = 0;//imm also used as offset
	vaddr_t old_pc = s->pc;
	s->dnpc = s->snpc;
#ifdef CONFIG_loongarch32r_ITRACE
	char *as = s->disas;
#define simm (signed)imm
#endif 

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
	decode_operand(s, &rj, &rk, &rd, &csr_num, &src1, &src2, &imm, concat(TYPE_, type)); \
	__VA_ARGS__ ; \
}

#define br_sprintf(str) sprintf(as, "%s\t$r%d: %d(%x), $r%d: %d(%x), %d(%x) # %x", str, rd, (signed)R(rd), R(rd), rj, (signed)src1, src1, simm, imm, s->dnpc)
#define ubr_sprintf(str) sprintf(as, "%s\t$r%d: %d(%x), $r%d: %d(%x), %d(%x) # %x", str, rd, R(rd), R(rd), rj, src1, src1, simm, imm, s->dnpc)
#define R1I20_sp(str) sprintf(as, "%s\t$r%d, %d(%x)", str, rd, simm, imm)			
#define slt_sp(str) sprintf(as, "%s\t$r%d:(%x), $r%d:%d(%x), $r%d:%d(%x)", str, rd, R(rd), rj, (signed)src1, src1, rk,  (signed)src2, src2)			
#define add_sp(str) sprintf(as, "%s\t$r%d:(%x), $r%d:(%x), $r%d:(%x)", str, rd, R(rd), rj, src1, rk, src2)			
#define ls_sp(str) sprintf(as, "%s\t$r%d:(%x), $r%d:(%x) (%x) # %x", str, rd, R(rd), rj, src1, imm, src1 + imm)			
#define addi_sp(str) sprintf(as, "%s\t$r%d, $r%d:(%x), (%x) # %x", str, rd, rj, src1, imm, R(rd))
#define slli_sp(str) sprintf(as, "%s\t$r%d:(%x), $r%d:(%x), %x", str, rd, R(rd), rj, src1, src2)			
#define slti_sp(str) sprintf(as, "%s\t$r%d, $r%d:%d(%x), %d(%x) # %x", str, rd, rj, (signed)src1, src1, simm, imm, R(rd))

#define exec_break (scan_bp(old_pc) == 1) ? (NEMUBREAK(s->pc), break_flag = 1) : NEMUTRAP(s->pc, R(4))

#define I26 26
#define I16_2R 26
#define I20_R 25
#define I12_2R 22
#define R3 15

	INSTPAT_START();

	INSTPAT("010100 ???????????????? ??????????", b, OFFS26, s->dnpc = s->pc + imm
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "b\t%d(0x%x) # %x", simm, imm, s->dnpc))
		IFDEF(CONFIG_FTRACE, ,
			MUXDEF(CONFIG_JIRL_RET,
				func_call(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)
			)
		)
		IFDEF(CONFIG_BREAKPOINT, , reload_bp_after_left_kernel(s->dnpc))
	);

	INSTPAT("010101 ???????????????? ??????????", bl, OFFS26, s->dnpc = s->pc + imm, R(1) = s->snpc
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "bl\t%d(0x%x) # %x", simm, imm, s->dnpc))
		IFDEF(CONFIG_FTRACE, ,
			MUXDEF(CONFIG_JIRL_RET,
				func_call(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)
			)
		)
		IFDEF(CONFIG_BREAKPOINT, , reload_bp_after_left_kernel(s->dnpc))
	);

	INSTPAT("010011 0000000000000000 00001 00000", ret, 2RO16, s->dnpc = src1 + imm, R(rd) = s->snpc
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "ret\t$r%d, $r%d:%x, %x # %x", rd, rj, src1, imm, s->dnpc))
		IFDEF(CONFIG_FTRACE, ,
			MUXDEF(CONFIG_JIRL_RET,
				func_ret(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)
			)
		)
		IFDEF(CONFIG_BREAKPOINT, , reload_bp_after_left_kernel(s->dnpc))
	);

	INSTPAT("010011 ???????????????? ????? ?????", jirl, 2RO16, s->dnpc = src1 + imm, R(rd) = s->snpc
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "jirl\t$r%d, $r%d:%x, %x # %x", rd, rj, src1, imm, s->dnpc))
		IFDEF(CONFIG_FTRACE, ,
			MUXDEF(CONFIG_JIRL_RET,
				func_call(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)
			)
		)
		IFDEF(CONFIG_BREAKPOINT, , reload_bp_after_left_kernel(s->dnpc))
	);

	INSTPAT("010110 ???????????????? ????? ?????", beq, 2RO16, s->dnpc = s->pc + (src1 == R(rd) ? imm : 4)
		IFDEF(CONFIG_loongarch32r_ITRACE, , br_sprintf("beq")));

	INSTPAT("010111 ???????????????? ????? ?????", bne, 2RO16, s->dnpc = s->pc + (src1 != R(rd) ? imm : 4)
		IFDEF(CONFIG_loongarch32r_ITRACE, , br_sprintf("bne")));

	INSTPAT("011000 ???????????????? ????? ?????", blt, 2RO16, s->dnpc = s->pc + ((signed)src1 < (signed)R(rd) ? imm : 4)
		IFDEF(CONFIG_loongarch32r_ITRACE, , br_sprintf("blt")));

	INSTPAT("011001 ???????????????? ????? ?????", bge, 2RO16, s->dnpc = s->pc + ((signed)src1 >= (signed)R(rd) ? imm : 4)
		IFDEF(CONFIG_loongarch32r_ITRACE, , br_sprintf("bge")));

	INSTPAT("011010 ???????????????? ????? ?????", bltu, 2RO16, s->dnpc = s->pc + ((unsigned)src1 < (unsigned)R(rd) ? imm : 4)
		IFDEF(CONFIG_loongarch32r_ITRACE, , ubr_sprintf("bltu")));

	INSTPAT("011011 ???????????????? ????? ?????", bgeu, 2RO16, s->dnpc = s->pc + ((unsigned)src1 >= (unsigned)R(rd) ? imm : 4)
		IFDEF(CONFIG_loongarch32r_ITRACE, , ubr_sprintf("bgeu")));

	INSTPAT("0001010 ????? ????? ????? ????? ?????", lu12i.w, 1RI20, R(rd) = imm
		IFDEF(CONFIG_loongarch32r_ITRACE, , R1I20_sp("lu12i.w")));

	INSTPAT("0001110 ????? ????? ????? ????? ?????", pcaddu12i, 1RI20, R(rd) = s->pc + imm
		IFDEF(CONFIG_loongarch32r_ITRACE, , R1I20_sp("pcaddu12i.w")));

	INSTPAT("0000001000 ???????????? ????? ?????", slti, 2RI12, R(rd) = (signed)src1 < (signed)imm ? 1 : 0
		IFDEF(CONFIG_loongarch32r_ITRACE, , slti_sp("slti")));

	INSTPAT("0000001001 ???????????? ????? ?????", sltui, 2RI12, R(rd) = (unsigned)src1 < (unsigned)imm ? 1 : 0
		IFDEF(CONFIG_loongarch32r_ITRACE, , addi_sp("sltui")));

	INSTPAT("0000001010 ???????????? ????? ?????", addi.w, 2RI12, R(rd) = imm + src1
		IFDEF(CONFIG_loongarch32r_ITRACE, , addi_sp("addi.w")));

	INSTPAT("0000001101 ???????????? ????? ?????", andi, 2RI12U, R(rd) = imm & src1
		IFDEF(CONFIG_loongarch32r_ITRACE, , addi_sp("andi")));

	INSTPAT("0000001110 ???????????? ????? ?????", ori, 2RI12U, R(rd) = imm | src1
		IFDEF(CONFIG_loongarch32r_ITRACE, , addi_sp("ori")));

	INSTPAT("0000001111 ???????????? ????? ?????", xori, 2RI12U, R(rd) = imm ^ src1
		IFDEF(CONFIG_loongarch32r_ITRACE, , addi_sp("xori")));

	INSTPAT("0010100000 ???????????? ????? ?????", ld.b, 2RI12, R(rd) = (int8_t)Mr(src1 + imm, 1)
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("ld.b")));

	INSTPAT("0010100001 ???????????? ????? ?????", ld.h, 2RI12, R(rd) = (int16_t)Mr(src1 + imm, 2)
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("ld.h")));

	INSTPAT("0010100010 ???????????? ????? ?????", ld.w, 2RI12, R(rd) = Mr(src1 + imm, 4)
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("ld.w")));

	INSTPAT("0010100100 ???????????? ????? ?????", st.b, 2RI12, Mw(src1 + imm, 1, R(rd))
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("st.b")));

	INSTPAT("0010100101 ???????????? ????? ?????", st.h, 2RI12, Mw(src1 + imm, 2, R(rd))
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("st.h")));

	INSTPAT("0010100110 ???????????? ????? ?????", st.w, 2RI12, Mw(src1 + imm, 4, R(rd))
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("st.w")));

	INSTPAT("0010101000 ???????????? ????? ?????", ld.bu, 2RI12, R(rd) = (uint8_t)Mr(src1 + imm, 1)
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("ld.bu")));

	INSTPAT("0010101001 ???????????? ????? ?????", ld.hu, 2RI12, R(rd) = (uint16_t)Mr(src1 + imm, 2)
		IFDEF(CONFIG_loongarch32r_ITRACE, , ls_sp("ld.hu")));

	INSTPAT("00000000000100000 ????? ????? ?????", add.w, 3R, R(rd) = src1 + src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("add.w")));

	INSTPAT("00000000000100010 ????? ????? ?????", sub.w, 3R, R(rd) = src1 - src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("sub.w")));

	INSTPAT("00000000000100100 ????? ????? ?????", slt, 3R, R(rd) = (signed)src1 < (signed)src2 ? 1 : 0
		IFDEF(CONFIG_loongarch32r_ITRACE, , slt_sp("slt")));

	INSTPAT("00000000000100101 ????? ????? ?????", sltu, 3R, R(rd) = (unsigned)src1 < (unsigned)src2 ? 1 : 0
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("sltu")));

	INSTPAT("00000000000101000 ????? ????? ?????", nor, 3R, R(rd) = ~(src1 | src2)
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("nor")));

	INSTPAT("00000000000101001 ????? ????? ?????", and, 3R, R(rd) = src1 & src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("and")));

	INSTPAT("00000000000101010 ????? ????? ?????", move(or ), 3R, R(rd) = src1 | src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("move")));

	INSTPAT("00000000000101011 ????? ????? ?????", xor, 3R, R(rd) = src1 ^ src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("xor")));

	INSTPAT("00000000000101110 ????? ????? ?????", sll.w, 3R, R(rd) = src1 << (src2 & 0x1f)
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("sll.w")));

	INSTPAT("00000000000101111 ????? ????? ?????", srl.w, 3R, R(rd) = (unsigned)src1 >> (src2 & 0x1f)
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("srl.w")));

	INSTPAT("00000000000110000 ????? ????? ?????", sra.w, 3R, R(rd) = (signed)src1 >> (src2 & 0x1f)
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("sra.w")));

	INSTPAT("00000000000111000 ????? ????? ?????", mul.w, 3R, R(rd) = (int32_t)((int64_t)src1 * (int64_t)src2)
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("mul.w")));

	INSTPAT("00000000000111001 ????? ????? ?????", mulh.w, 3R, R(rd) = (int32_t)(((int64_t)(signed)src1 * (int64_t)(signed)src2) >> 32)
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("mulh.w")));

	INSTPAT("00000000000111010 ????? ????? ?????", mulh.wu, 3R, R(rd) = (uint32_t)(((uint64_t)src1 * (uint64_t)src2) >> 32)
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("mulh.wu")));

	INSTPAT("00000000001000000 ????? ????? ?????", div.w, 3R, R(rd) = (signed)src1 / (signed)src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("div.w")));

	INSTPAT("00000000001000001 ????? ????? ?????", mod.w, 3R, R(rd) = (signed)src1 % (signed)src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("mod.w")));

	INSTPAT("00000000001000010 ????? ????? ?????", div.wu, 3R, R(rd) = (unsigned)src1 / (unsigned)src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("div.wu")));

	INSTPAT("00000000001000011 ????? ????? ?????", mod.wu, 3R, R(rd) = (unsigned)src1 % (unsigned)src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , add_sp("mod.wu")));

	INSTPAT("00000000010000001 ????? ????? ?????", slli.w, 2RI5, R(rd) = src1 << src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , slli_sp("slli.w")));

	INSTPAT("00000000010001001 ????? ????? ?????", srli.w, 2RI5, R(rd) = (unsigned)src1 >> src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , slli_sp("srli.w")));

	INSTPAT("00000000010010001 ????? ????? ?????", srai.w, 2RI5, R(rd) = (signed)src1 >> src2
		IFDEF(CONFIG_loongarch32r_ITRACE, , slli_sp("srai.w")));

	INSTPAT("0000 0000 0010 10100 ????? ????? ?????", break, N, MUXDEF(CONFIG_BREAKPOINT, exec_break, NEMUTRAP(s->pc, R(4)))
		, s->dnpc = old_pc
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "break"))); // R(4) is $a0
	
	INSTPAT("0000 0000 0010 10110 00000 00000 00001", syscall, N, record_info()
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "syscall 0x1")));

	INSTPAT("0000 0000 0010 10110 ????? ????? ?????", syscall, N, s->dnpc = isa_raise_intr(SYS, s->pc)
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "syscall 0")));
	
	INSTPAT("0000 0110 0100 10000 01110 00000 00000", ertn, N, s->dnpc = exception_return()
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "ertn")));
	
	INSTPAT("0000 0100 ???? ????? ????? 00000 ?????", csrrd, CSR, R(rd) = csr(csr_num)
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "csrrd\tr%d:(%x), %x", rd, R(rd), csr_num)));
	
	INSTPAT("0000 0100 ???? ????? ????? 00001 ?????", csrwr, CSR, csr_wr(rd, csr_num)
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "csrwr\tr%d:(%x), %x:(%x)", rd, R(rd), csr_num, csr(csr_num))));
	
	INSTPAT("0000 0100 ???? ????? ????? ????? ?????", csrxchg, CSR, csr_exchange(rd, csr_num, src1)
		IFDEF(CONFIG_loongarch32r_ITRACE, , sprintf(as, "csrxchg\tr%d:(%x), r%d:(%x), %x(%x)", rd, R(rd), rj, src1, csr_num, csr(csr_num))));

	INSTPAT("????????????????? ????? ????? ?????", inv, N, INV(s->pc));
	INSTPAT_END();

	R(0) = 0; // reset $zero to 0

	return 0;
}

int isa_exec_once(Decode *s) {
#ifdef CONFIG_BREAKPOINT
	extern word_t replaced_inst;
	if (break_flag == 0){
		s->isa.inst.val = inst_fetch(&s->snpc, 4);
	}
	else {
		break_flag = 0;
		s->isa.inst.val = replaced_inst;
		s->snpc += 4;
	}
#else
	s->isa.inst.val = inst_fetch(&s->snpc, 4);
#endif

	return decode_exec(s);
}
