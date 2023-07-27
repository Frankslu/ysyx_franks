#include "trace/trace.h"
#include "ve.h"

__attribute_maybe_unused__ static Ering_t ering[ERING_SIZE] = {};
__attribute_maybe_unused__ static int ering_pos = 0;

#define e_pos ering[ering_pos]
void ering_init(){
	ering_pos = 0;
	for (int i = 0; i < ERING_SIZE; i++)
		ering[i].NO = NULL;
}

char *NO2exception(word_t NO){
	if (NO == SYS){
		char *s = (char *)malloc(4 * sizeof(char));
		strcpy(s, "SYS");
		return s;
	}

	return NULL;
}

extern "C" void record_exception(char ex, char ertn, int ecode, int esubcode, int pc){
#ifdef CONFIG_ETRACE
	if (0 == (int)ex)
		return;
	int NO = ((int)ecode << 16) | ((int)esubcode << 22);
	if (e_pos.NO != NULL)
		free(e_pos.NO);
	e_pos.NO = NO2exception(NO);
	log_write_cc("Etrace pc %08x exception %s\n", (vaddr_t)pc, e_pos.NO);
	e_pos.pc = (vaddr_t)pc;
	ering_pos = ering_pos == ERING_SIZE - 1 ? 0 : ering_pos + 1;
#endif
	return;
}

void display_ering(){
	int pos = ering_pos;
	for (int i = 0; i < ERING_SIZE; i++){
		if (ering[pos].NO != NULL)
			printf("%08x exception %s\n", ering[pos].pc, ering[pos].NO);
		pos = pos == (ERING_SIZE - 1) ? 0 : pos + 1;
	}
}
