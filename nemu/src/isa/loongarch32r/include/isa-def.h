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

#ifndef __ISA_LOONGARCH32R_H__
#define __ISA_LOONGARCH32R_H__

#include <common.h>

typedef struct {
	word_t gpr[32];
	vaddr_t pc;
	word_t csr[0x182];//crmd, prmd, era, estat, eentry
	// vaddr_t ref_pc;
} loongarch32r_CPU_state;

#ifndef ECODE
#define ECODE
enum Ecode{
	SYS = 0xB << 16
};

enum csr_name {
	CRMD = 0, PRMD = 0x1, ESTAT = 0x5,
	ERA = 0x6, EENTRY = 0xc,
};
#endif

// decode
typedef struct {
	union {
		uint32_t val;
	} inst;
} loongarch32r_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
