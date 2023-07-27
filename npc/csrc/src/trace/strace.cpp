#include "trace/trace.h"
#include "ve.h"
#include "cpu/reg.h"
#include "syscall_num.h"

__attribute_maybe_unused__ static Sring_t sring[SRING_SIZE] = {};
__attribute_maybe_unused__ static int sring_pos = 0;

#define s_pos sring[sring_pos]
void sring_init(){
	sring_pos = 0;
	for (int i = 0; i < SRING_SIZE; i++)
		sring[i].NO = NULL;
}

char *NO2syscall(){
	char *s = (char *)malloc(sizeof(char) * 60);
	switch (GPR1) {
	case SYS_exit:
		sprintf(s, "exit   ret:%2d  gpr2:%2d  gpr3:%2d", GPRx, GPR2, GPR3);
		return s;
	case SYS_yield:
		sprintf(s, "yield  gpr1:%2d  gpr2:%2d  gpr3:%2d", GPR1, GPR2, GPR3);
		return s;
	case SYS_write:
		sprintf(s, "write  fd:%2d  buf:%x  count:%d", GPR2, GPR3, GPR4);
		return s;
	case SYS_brk:
		sprintf(s, "brk    increment:%d  gpr2:%2d  gpr3:%2d", GPR2, GPR3, GPR4);
		return s;
	default:
		return NULL;
	}

	return NULL;
}

extern "C" void record_syscall(char ex, int pc){
#ifdef CONFIG_ETRACE
	if (0 == (int)ex)
		return;
	if (s_pos.NO != NULL)
		free(s_pos.NO);
	s_pos.NO = NO2syscall();
	if (s_pos.NO == NULL)
		return;
	log_write("Strace pc %08x %s\n", pc, s_pos.NO);
	s_pos.pc = pc;
	sring_pos = sring_pos == SRING_SIZE - 1 ? 0 : sring_pos + 1;
#endif
	return;
}

void display_sring(){
	int pos = sring_pos;
	for (int i=0; i < SRING_SIZE; i++){
		if (sring[pos].NO != NULL)
			printf("%08x %s\n",sring[pos].pc, sring[pos].NO);
		pos = pos == (SRING_SIZE - 1) ? 0 : pos + 1;
	}
}