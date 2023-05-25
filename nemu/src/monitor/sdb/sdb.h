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

#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

#define NR_BP 16
#define NR_WP 16

typedef struct watchpoint {
	int NO;
	struct watchpoint *next;
	char *str;
	word_t result;
	/* TODO: Add more members if necessary */

} WP;

typedef struct breakpoint {
	int NO;
	struct breakpoint *next;
	vaddr_t pc;
	word_t inst;
} BP;


word_t expr(char *e, bool *success);

#endif
