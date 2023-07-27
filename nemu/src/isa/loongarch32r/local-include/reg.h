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

#ifndef __LOONGARCH32R_REG_H__
#define __LOONGARCH32R_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx){
	IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
	return idx;
}

#define gpr(idx) cpu.gpr[check_reg_idx(idx)]

static inline const char* reg_name(int idx, int width){
	extern const char* regs[2][32];
	return regs[0][check_reg_idx(idx)];
}

static inline int check_csr_idx(int idx){
#ifdef CONFIG_RT_CHECK
	switch (idx){
	case CRMD:
	case PRMD:
	case ERA:
	case ESTAT:
	case EENTRY:
		return idx;
	default:
		assert(0);
	}
#else
	return idx;
#endif
}
#define csr(idx) cpu.csr[check_csr_idx(idx)]

#define csr_write(csr1, y, mask) do{(csr1) = (((csr1) & ~(mask)) | ((y) & (mask)))}while(0)
// #define csrr(idx, bit) csrr_##idx##_##bit
// #define csrw(idx, bit, num) csrw_##idx##_##bit(num)

// #define csrr_CRMD_PLV BITS(csr[CRMD], 1, 0)
// #define csrw_CRMD_PLV (num) csr[CRMD] = (((num) & 0x3) | (csr[CRMD] & ~0x3))
// #define csrr_CRMD_IE (csr[CRMD] & 0x3)
// #define csrw_CRMD_IE (num) csr[CRMD] = (((num) & 0x3) | (csr[CRMD] & ~0x3))

// #define csrr_ERA_PC csr[ERA]
// #define csrw_ERA_PC(num) csr[ERA] = (num)
#define GPR1 gpr(11)
#define GPR2 gpr(4)
#define GPR3 gpr(5)
#define GPR4 gpr(6)
#define GPRx gpr(4)

#endif
