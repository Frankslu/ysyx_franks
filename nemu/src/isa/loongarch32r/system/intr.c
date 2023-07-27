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
#include <syscall_num.h>
#include <memory/vaddr.h>

vaddr_t isa_raise_intr(word_t NO, vaddr_t epc) {
#ifdef CONFIG_ETRACE
	extern void record_exception(word_t NO);
	record_exception(NO);
#endif
#ifdef CONFIG_STRACE
	extern void record_syscall();
	record_syscall();
#endif
	/* TODO: Trigger an interrupt/exception with ``NO''.
	 * Then return the address of the interrupt/exception vector.
	 */
	 //move IE(2) and PLV(1:0) in CRMD to PRMD,then set them in 0
	csr(PRMD) = BIT(csr(PRMD), 31, 3) | BIT(csr(CRMD), 2, 0);
	csr(CRMD) = BIT(csr(CRMD), 31, 3) | 0;
	csr(ESTAT) = BIT(csr(ESTAT), 31, 31) | NO | BIT(csr(ESTAT), 15, 0);
	csr(ERA) = epc;
	return csr(EENTRY);
}

vaddr_t exception_return(){
	csr(CRMD) = BIT(csr(CRMD), 31, 3) | BIT(csr(PRMD), 2, 0);
	return csr(ERA);
}

word_t isa_query_intr() {
	return INTR_EMPTY;
}
