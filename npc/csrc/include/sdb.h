#ifndef __SDB_H__
#define __SDB_H__

#include "common.h"

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
