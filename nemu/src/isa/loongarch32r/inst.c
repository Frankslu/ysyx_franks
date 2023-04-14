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

enum {
	TYPE_2RI12, TYPE_1RI20, TYPE_3R, TYPE_OFFS26, TYPE_2RO16,	
	TYPE_N, // none
};

#define src1R()  do { *src1 = R(rj); } while (0)
#define src2R()  do { *src2 = R(rk); } while (0)
#define simm12() do { *imm = SEXT(BITS(i, 21, 10), 12); } while (0)
#define simm20() do { *imm = SEXT(BITS(i, 24, 5), 20) << 12; } while (0)
#define offs26() do { *imm = SEXT((BITS(i, 25, 10) << 2 | BITS(i, 9, 0) << 18), 28);} while (0)
#define offs16() do { *imm = SEXT(BITS(i, 25, 10), 16) << 2;} while (0)

static void decode_operand(Decode *s, int *rd_, word_t *src1, word_t *src2, word_t *imm, int type) {
	uint32_t i = s->isa.inst.val;
	int rj = BITS(i, 9, 5);
	int rk = BITS(i, 14, 10);
	*rd_ = BITS(i, 4, 0);
	switch (type) {
		case TYPE_1RI20: simm20(); src1R(); break;
		case TYPE_2RI12: simm12(); src1R(); break;
		case TYPE_3R   : src1R();  src2R(); break;
		case TYPE_OFFS26: offs26();break;
		case TYPE_2RO16: offs16(); src1R(); break;
	}
}

static int decode_exec(Decode *s) {
	int rd = 0;
	word_t src1 = 0, src2 = 0, imm = 0;//imm also used as offset
	s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
	decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
	__VA_ARGS__ ; \
}

	INSTPAT_START();
	INSTPAT("010101 ???????????????? ??????????"    , bl       , OFFS26, s->dnpc = s->pc + imm, R(1) = s->snpc, printf("bl, s->pc=%08x, imm=%08x, s->dnpc=%08x\n",s->pc,imm,s->dnpc));
	INSTPAT("010011 ???????????????? ????? ?????"   , jirl     , 2RO16 , s->dnpc = src1 + imm, R(rd) = s->snpc, printf("jirl, src1=%08x, imm=%08x, s->dnpc=%08x\n", src1, imm, s->dnpc));
	INSTPAT("010110 ???????????????? ????? ?????"   , beq      , 2RO16 , s->dnpc = s->pc + (src1 == R(rd) ? imm : 4), printf("beq, src1=%08x, R(rd)=%08x, imm=%08x, s->dnpc=%08x\n", src1, R(rd), imm, s->dnpc));
	INSTPAT("010111 ???????????????? ????? ?????"   , bne      , 2RO16 , s->dnpc = s->pc + (src1 != R(rd) ? imm : 4), printf("bne, src1=%08x, R(rd)=%08x, imm=%08x, s->dnpc=%08x\n", src1, R(rd), imm, s->dnpc));
	INSTPAT("011000 ???????????????? ????? ?????"   , blt      , 2RO16 , s->dnpc = s->pc + ((signed)src1 < (signed)R(rd) ? imm : 4), printf("blt, src1=%08x, R(rd)=%08x, imm=%08x, s->dnpc=%08x\n", src1, R(rd), imm, s->dnpc));
	INSTPAT("011001 ???????????????? ????? ?????"   , bge      , 2RO16 , s->dnpc = s->pc + ((signed)src1 >= (signed)R(rd) ? imm : 4), printf("bge, src1=%08x, R(rd)=%08x, imm=%08x, s->dnpc=%08x\n", src1, R(rd), imm, s->dnpc));
	INSTPAT("011010 ???????????????? ????? ?????"   , bltu     , 2RO16 , s->dnpc = s->pc + ((unsigned)src1 < (unsigned)R(rd) ? imm : 4), printf("bltu, src1=%08x, R(rd)=%08x, imm=%08x, s->dnpc=%08x\n", src1, R(rd), imm, s->dnpc));
	INSTPAT("011011 ???????????????? ????? ?????"   , bgeu     , 2RO16 , s->dnpc = s->pc + ((unsigned)src1 >= (unsigned)R(rd) ? imm : 4), printf("bgeu, src1=%08x, R(rd)=%08x, imm=%08x, s->dnpc=%08x\n", src1, R(rd), imm, s->dnpc));
	INSTPAT("0001110 ????? ????? ????? ????? ?????" , pcaddu12i, 1RI20 , R(rd) = s->pc + imm, printf("pcaddui12i, s->pc=%08x, imm=%08x, R(rd)=%08x\n", s->pc, imm, R(rd)));
	INSTPAT("0010100010 ???????????? ????? ?????"   , ld.w     , 2RI12 , R(rd) = Mr(src1 + imm, 4), printf("ld.w, s->pc=%08x, imm=%08x, addr=%08x, ,R(rd)=%08x\n", s->pc, imm, s->pc + imm, R(rd)));
	INSTPAT("0010100110 ???????????? ????? ?????"   , st.w     , 2RI12 , Mw(src1 + imm, 4, R(rd)), printf("st.w, src1=%08x, imm=%08x, addr=%08x, R(rd)=%08x\n", src1,  imm, s->pc + imm, R(rd)));
	INSTPAT("0000001010 ???????????? ????? ?????"   , addi.w   , 2RI12 , R(rd) = imm + src1, printf("addi.w, src1=%08x, imm=%08x, R(rd)=%08x\n", src1, imm, R(rd)));
	INSTPAT("0000001000 ???????????? ????? ?????"   , slti     , 2RI12 , R(rd) = (signed)src1 < (signed)imm ? 1 : 0, printf("slti, src1=%08x, imm=%08x, R(rd)=%08x\n", src1, imm, R(rd)));
	INSTPAT("0000001001 ???????????? ????? ?????"   , sltui    , 2RI12 , R(rd) = (unsigned)src1 < (unsigned)imm ? 1 : 0, printf("sltui, src1=%08x, imm=%08x, R(rd)=%08x\n", src1, imm, R(rd)));
	INSTPAT("00000000000100000 ????? ????? ?????"   , add.w    , 3R    , R(rd) = src1 + src2, printf("add.w, src1=%08x, src2=%08x, R(rd)=%08x\n", src1, src2, R(rd)));
	INSTPAT("00000000000100010 ????? ????? ?????"   , sub.w    , 3R    , R(rd) = src1 - src2, printf("sub.w, src1=%08x, src2=%08x, R(rd)=%08x\n", src1, src2, R(rd)));
	INSTPAT("00000000000101010 ????? ????? ?????"   , move(or) , 3R    , R(rd) = src1 | src2, printf("or, src1=%08x, src2=%08x, R(rd)=%08x\n", src1, src2, R(rd)));
	INSTPAT("00000000000101011 ????? ????? ?????"   , xor      , 3R    , R(rd) = src1 ^ src2, printf("xor, src1=%08x, src2=%08x, R(rd)=%08x\n", src1, src2, R(rd)));
	INSTPAT("0000 0000 0010 10100 ????? ????? ?????", break    , N     , NEMUTRAP(s->pc, R(4)), printf("break\n")); // R(4) is $a0
	INSTPAT("????????????????? ????? ????? ?????"   , inv      , N     , INV(s->pc));
	INSTPAT_END();

	R(0) = 0; // reset $zero to 0

	return 0;
	}

int isa_exec_once(Decode *s) {
	s->isa.inst.val = inst_fetch(&s->snpc, 4);
	return decode_exec(s);
}
