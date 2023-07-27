#include "trace/trace.h"
#include "ve.h"
#include "cpu/reg.h"
#include "syscall_num.h"
#include "vaddr.h"

__attribute_maybe_unused__ static Sring_t sring[SRING_SIZE] = {};
__attribute_maybe_unused__ static int sring_pos = 0;

#ifdef CONFIG_STRACE
#define s_pos sring[sring_pos]
void sring_init(){
	sring_pos = 0;
	for (int i = 0; i < SRING_SIZE; i++)
		sring[i].NO = NULL;
}

char *NO2syscall();
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

void set_filename(char *s);
void set_fd(int fd);
void delete_file(int fd);
char *get_filename(int fd);

char *NO2syscall(){
	char *s = (char *)malloc(sizeof(char) * 60);
	char *s1;
	vaddr_t i = 0;
	switch (GPR1) {
	case SYS_exit:
		sprintf(s, "exit   ret:%2d  gpr2:%2d  gpr3:%2d", GPRx, GPR2, GPR3);
		return s;
		
	case SYS_yield:
		sprintf(s, "yield  gpr1:%2d  gpr2:%2d  gpr3:%2d", GPR1, GPR2, GPR3);
		return s;
		
	case SYS_write:
		sprintf(s, "write  fd:%s  buf:%x  count:%d", get_filename(GPR2), GPR3, GPR4);
		return s;
		
	case SYS_brk:
		sprintf(s, "brk    increment:%d  gpr2:%2d  gpr3:%2d", GPR2, GPR3, GPR4);
		return s;
		
	case SYS_open:
		word_t c;
		while ((c = vaddr_read((vaddr_t)GPR2 + i, 1)) != '\0'){
			i++;
		}
		s1 = (char *)malloc(sizeof(char) * i);
		i = 0;
		while ((c = vaddr_read((vaddr_t)GPR2 + i, 1)) != '\0'){
			s1[i] = c;
			i++;
		}
		s1[i] = c;
		set_filename(s1);
		sprintf(s, "open   path:%s  flag:%d  mod:%d", s1, GPR3, GPR4);
		return s;
		
	case SYS_read:
		sprintf(s, "read   fd:%s  buf:%d  len:%d", get_filename(GPR2), GPR3, GPR4);
		return s;
		
	case SYS_close:
		sprintf(s, "close  fd:%s  gpr2:%2d  gpr3:%2d", get_filename(GPR2), GPR3, GPR4);
		delete_file(GPR2);
		return s;
		
	case SYS_lseek:
		sprintf(s, "lseek  fd:%s  offset:%d  whence:%2d", get_filename(GPR2), GPR3, GPR4);
		return s;
		
	default:
		sprintf(s, "unknown Type:%d\n", GPR1);
		return s;
	}
}

#endif

void record_info(){
#ifdef CONFIG_STRACE
	switch (GPR1){
	case SYS_getfilename:
		set_fd(GPRx);
		break;
	
	default:
		break;
	}
#endif
	return;
}
