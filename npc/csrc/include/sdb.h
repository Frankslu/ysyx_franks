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

void init_regex();
void init_wp_pool();
void init_bp_pool();

void print_watchpoint();
void display_iring();
void display_breakpoint();
void display_mring();
void display_fring();

WP *new_wp(char *s);
bool free_wp(int i);
BP *new_bp(vaddr_t pc);
bool free_bp(int i);

void reset_monitor();

#endif
