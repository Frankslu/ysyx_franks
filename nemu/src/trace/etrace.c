#include "trace/trace.h"
#include <stdio.h>

char *NO2exception(word_t NO);
__attribute_maybe_unused__ static Ering_t ering[ERING_SIZE] = {};
__attribute_maybe_unused__ static int ering_pos = 0;

#ifdef CONFIG_ETRACE
#define e_pos ering[ering_pos]
char sys[] = "sys";

void ering_init(){
	ering_pos = 0;
	for (int i = 0; i < ERING_SIZE; i++)
		ering[i].NO = NULL;
}

char *NO2exception(word_t NO){
	if (NO == SYS){
		return sys;
	}
	return NULL;
}

void record_exception(word_t NO){
	e_pos.NO = NO2exception(NO);
	if (e_pos.NO == NULL)
		return;
	log_write("Etrace pc %08x exception %s\n", cpu.pc, e_pos.NO);
	e_pos.pc = cpu.pc;
	ering_pos = ering_pos == ERING_SIZE - 1 ? 0 : ering_pos + 1;
}

void display_ering(){
	int pos = ering_pos;
	for (int i=0; i < ERING_SIZE; i++){
		if (ering[pos].NO != NULL)
			printf("%08x exception %s\n",ering[pos].pc, ering[pos].NO);
		pos = pos == (ERING_SIZE - 1) ? 0 : pos + 1;
	}
}
#endif

