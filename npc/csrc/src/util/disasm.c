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

#define FUCK_GCC
#ifdef FUCK_GCC

#include "cpu/reg.h"
#include "cpu/cpu.h"
#include "cpu/ifetch.h"
#include "cpu/decode.h"

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

void func_call_ret(vaddr_t next_pc, vaddr_t pc);
void func_call(vaddr_t next_pc, vaddr_t pc);
void func_ret(vaddr_t next_pc, vaddr_t pc);

int scan_bp(vaddr_t pc);
IFDEF(CONFIG_BREAKPOINT, static int break_flag = 0);

enum {
	TYPE_2RI12, TYPE_2RI12U,TYPE_1RI20, TYPE_3R, TYPE_OFFS26, TYPE_2RO16, TYPE_2RI5,	
	TYPE_N, // none
};

#define src1R()   do { *src1 = R(*rj); } while (0)
#define src2R()   do { *src2 = R(*rk); } while (0)
#define simm12()  do { *imm = SEXT(BITS(i, 21, 10), 12); } while (0)
#define simm12u() do { *imm = BITS(i, 21, 10); } while (0)
#define simm20()  do { *imm = SEXT(BITS(i, 24, 5), 20) << 12; } while (0)
#define offs26()  do { *imm = SEXT((BITS(i, 25, 10) << 2 | BITS(i, 9, 0) << 18), 28);} while (0)
#define offs16()  do { *imm = SEXT(BITS(i, 25, 10), 16) << 2;} while (0)

static void decode_operand(Decode *s, int *rj, int *rk, int *rd_, word_t *imm, int32_t *simm, int type) {
	uint32_t i = s->isa.inst.val;
	*rj = BITS(i, 9, 5);
	*rk = BITS(i, 14, 10);
	*rd_ = BITS(i, 4, 0);
	switch (type) {
		case TYPE_1RI20 : simm20(); break;
		case TYPE_2RI12 : simm12(); break;
		case TYPE_2RI12U: simm12u(); break;
		case TYPE_3R    : break;
		case TYPE_OFFS26: offs26(); break;
		case TYPE_2RO16 : offs16(); break;
		case TYPE_2RI5  : break;
	}
	*simm = (signed)*imm;
}

int decode_exec(Decode *s) {
	int rj = 0, rk = 0, rd = 0;
	word_t imm = 0;//imm also used as offset
	char *as = s->disas;
	int32_t simm = 0;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
	decode_operand(s, &rj, &rk, &rd, &imm, &simm, concat(TYPE_, type)); \
	__VA_ARGS__ ; \
}

#define br_sprintf(str) sprintf(as, "%s\t$r%d, $r%d, %d(%x) # %x", str, rd, rj, simm, imm, s->dnpc)
#define R1I20_sp(str) sprintf(as, "%s\t$r%d, %x", str, rd, imm)			
#define slt_sp(str) sprintf(as, "%s\t$r%d, $r%d, $r%d", str, rd, rj, rk)			
#define add_sp(str) sprintf(as, "%s\t$r%d, $r%d, $r%d", str, rd, rj, rk)			
#define ls_sp(str) sprintf(as, "%s\t$r%d, $r%d %d(%x)", str, rd, rj, simm, imm)			
#define addi_sp(str) sprintf(as, "%s\t$r%d, $r%d, %d(%x)", str, rd, rj, simm, imm)
#define slli_sp(str) sprintf(as, "%s\t$r%d, $r%d, %x", str, rd, rj, rk)			
#define slti_sp(str) sprintf(as, "%s\t$r%d, $r%d, %d(%x)", str, rd, rj, simm, imm)

#ifdef CONFIG_ITRACE
	INSTPAT_START();
	INSTPAT("010100 ???????????????? ??????????", b, OFFS26, s->dnpc = s->pc + imm,
		sprintf(as, "b\t%d(0x%x) # %x", simm, imm, s->dnpc));

	INSTPAT("010101 ???????????????? ??????????", bl, OFFS26, s->dnpc = s->pc + imm,
		sprintf(as, "bl\t%d(0x%x) # %x", simm, imm, s->dnpc)
		IFDEF(CONFIG_FTRACE, ,
			MUXDEF(CONFIG_JIRL_RET,
				func_call(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)
			)
		));

	INSTPAT("010011 0000000000000000 00001 00000", ret, 2RO16,
		sprintf(as, "ret\t$r%d, $r%d, %x", rd, rj, imm)
		IFDEF(CONFIG_FTRACE, ,
			MUXDEF(CONFIG_JIRL_RET,
				func_ret(cpu.pc, s->pc), func_call_ret(cpu.pc, s->pc)
			)
		));

	INSTPAT("010011 ???????????????? ????? ?????", jirl, 2RO16,
		sprintf(as, "ret\t$r%d, $r%d, %x", rd, rj, imm)
		IFDEF(CONFIG_FTRACE, ,
			MUXDEF(CONFIG_JIRL_RET,
				func_call(cpu.pc, s->pc), func_call_ret(cpu.pc, s->pc)
			)
		));

	INSTPAT("010110 ???????????????? ????? ?????", beq, 2RO16, s->dnpc = s->pc + imm,
		br_sprintf("beq"));

	INSTPAT("010111 ???????????????? ????? ?????", bne, 2RO16, s->dnpc = s->pc + imm,
		br_sprintf("bne"));

	INSTPAT("011000 ???????????????? ????? ?????", blt, 2RO16, s->dnpc = s->pc + imm,
		br_sprintf("blt"));

	INSTPAT("011001 ???????????????? ????? ?????", bge, 2RO16, s->dnpc = s->pc + imm,
		br_sprintf("bge"));

	INSTPAT("011010 ???????????????? ????? ?????", bltu, 2RO16, s->dnpc = s->pc + imm,
		br_sprintf("bltu"));

	INSTPAT("011011 ???????????????? ????? ?????", bgeu, 2RO16, s->dnpc = s->pc + imm,
		br_sprintf("bgeu"));

	INSTPAT("0001010 ????? ????? ????? ????? ?????", lu12i.w, 1RI20,
		R1I20_sp("lu12i.w"));

	INSTPAT("0001110 ????? ????? ????? ????? ?????", pcaddu12i, 1RI20,
		R1I20_sp("pcaddu12i.w"));

	INSTPAT("0000001000 ???????????? ????? ?????", slti, 2RI12,
		slti_sp("slti"));

	INSTPAT("0000001001 ???????????? ????? ?????", sltui, 2RI12,
		addi_sp("sltui"));

	INSTPAT("0000001010 ???????????? ????? ?????", addi.w, 2RI12,
		addi_sp("addi.w"));

	INSTPAT("0000001101 ???????????? ????? ?????", andi, 2RI12U,
		addi_sp("andi"));

	INSTPAT("0000001110 ???????????? ????? ?????", ori, 2RI12U,
		addi_sp("ori"));

	INSTPAT("0000001111 ???????????? ????? ?????", xori, 2RI12U,
		addi_sp("xori"));

	INSTPAT("0010100000 ???????????? ????? ?????", ld.b, 2RI12,
		ls_sp("ld.b"));

	INSTPAT("0010100001 ???????????? ????? ?????", ld.h, 2RI12,
		ls_sp("ld.h"));

	INSTPAT("0010100010 ???????????? ????? ?????", ld.w, 2RI12,
		ls_sp("ld.w"));

	INSTPAT("0010100100 ???????????? ????? ?????", st.b, 2RI12,
		ls_sp("st.b"));

	INSTPAT("0010100101 ???????????? ????? ?????", st.h, 2RI12,
		ls_sp("st.h"));

	INSTPAT("0010100110 ???????????? ????? ?????", st.w, 2RI12,
		ls_sp("st.w"));

	INSTPAT("0010101000 ???????????? ????? ?????", ld.bu, 2RI12,
		ls_sp("ld.bu"));

	INSTPAT("0010101001 ???????????? ????? ?????", ld.hu, 2RI12,
		ls_sp("ld.hu"));

	INSTPAT("00000000000100000 ????? ????? ?????", add.w, 3R,
		add_sp("add.w"));

	INSTPAT("00000000000100010 ????? ????? ?????", sub.w, 3R,
		add_sp("sub.w"));

	INSTPAT("00000000000100100 ????? ????? ?????", slt, 3R,
		slt_sp("slt"));

	INSTPAT("00000000000100101 ????? ????? ?????", sltu, 3R,
		add_sp("sltu"));

	INSTPAT("00000000000101000 ????? ????? ?????", nor, 3R,
		add_sp("nor"));

	INSTPAT("00000000000101001 ????? ????? ?????", and, 3R,
		add_sp("and"));

	INSTPAT("00000000000101010 ????? ????? ?????", move(or), 3R,
		add_sp("move"));

	INSTPAT("00000000000101011 ????? ????? ?????", xor, 3R,
		add_sp("xor"));

	INSTPAT("00000000000101110 ????? ????? ?????", sll.w, 3R,
		add_sp("sll.w"));

	INSTPAT("00000000000101111 ????? ????? ?????", srl.w, 3R,
		add_sp("srl.w"));

	INSTPAT("00000000000110000 ????? ????? ?????", sra.w, 3R,
		add_sp("sra.w"));

	INSTPAT("00000000000111000 ????? ????? ?????", mul.w, 3R,
		add_sp("mul.w"));

	INSTPAT("00000000000111001 ????? ????? ?????", mulh.w, 3R,
		add_sp("mulh.w"));

	INSTPAT("00000000000111010 ????? ????? ?????", mulh.wu, 3R,
		add_sp("mulh.wu"));

	INSTPAT("00000000001000000 ????? ????? ?????", div.w, 3R,
		add_sp("div.w"));

	INSTPAT("00000000001000001 ????? ????? ?????", mod.w, 3R,
		add_sp("mod.w"));

	INSTPAT("00000000001000010 ????? ????? ?????", div.wu, 3R,
		add_sp("div.wu"));

	INSTPAT("00000000001000011 ????? ????? ?????", mod.wu, 3R,
		add_sp("mod.wu"));

	INSTPAT("00000000010000001 ????? ????? ?????", slli.w, 2RI5,
		slli_sp("slli.w"));

	INSTPAT("00000000010001001 ????? ????? ?????", srli.w, 2RI5,
		slli_sp("srli.w"));

	INSTPAT("00000000010010001 ????? ????? ?????", srai.w, 2RI5,
		slli_sp("srai.w"));

	INSTPAT("0000 0000 0010 10100 ????? ????? ?????", brk, N, sprintf(as, "break")); // R(4) is $a0
	INSTPAT("????????????????? ????? ????? ?????", inv, N, sprintf(as, "invalid instruction"));
	INSTPAT_END();
#else
#ifdef CONFIG_FTRACE
	INSTPAT("010101 ???????????????? ??????????", bl, OFFS26, s->dnpc = s->pc + imm,
		sprintf(as, "bl\t%d(0x%x) # %x", simm, imm, s->dnpc),
			MUXDEF(CONFIG_JIRL_RET, func_call(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)));

	INSTPAT("010011 0000000000000000 00001 00000", ret, 2RO16,
		sprintf(as, "ret\t$r%d, $r%d, %x", rd, rj, imm),
			MUXDEF(CONFIG_JIRL_RET, func_ret(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)));

	INSTPAT("010011 ???????????????? ????? ?????", jirl, 2RO16,
		sprintf(as, "ret\t$r%d, $r%d, %x", rd, rj, imm),
			MUXDEF(CONFIG_JIRL_RET, func_call(s->dnpc, s->pc), func_call_ret(s->dnpc, s->pc)));
#endif
#endif

	return 0;
}

#endif