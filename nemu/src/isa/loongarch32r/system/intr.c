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
#include <../local-include/reg.h>
#include <memory/vaddr.h>

typedef struct _f_table__ {
	char *filename;
	int fd;
	struct _f_table__ *next;	
} f_table_t;

f_table_t *f_table = NULL;
int pre_fd;
char errorname[] = "/error/name";
char sys[] = "sys";
char std_out[] = "stdout";
char std_in[] = "stdin";
char std_err[] = "stderr";

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

char *NO2exception(word_t NO){
	if (NO == SYS){
		return sys;
	}

	return NULL;
}

void set_filename(char *s);
void set_fd(int fd);
void delete_file(int fd);
char *get_filename(int fd);

char *NO2syscall(){
	char *s = malloc(sizeof(char) * 60);
	char *s1;
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
		vaddr_t i = 0;
		while ((c = vaddr_read((vaddr_t)GPR2 + i, 1)) != '\0'){
			i++;
		}
		s1 = (char *)malloc(sizeof(char) * i);
		i = 0;
		while ((c = vaddr_read((vaddr_t)GPR2 + i, 1)) != '\0'){
			s1[i] = c;
			i++;
		}
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

void record_info(){
#ifdef CONDIF_STRACE
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

//--------------------------------------
void set_filename(char *s){
	f_table_t *p;
	if (f_table == NULL){
		f_table = (f_table_t *)malloc(sizeof(f_table_t));
		p = f_table;
		p->next = NULL;
	}
	else{
		p = f_table;
		while (p->next != NULL){
			p = p->next;
		}
		p->next = (f_table_t *)malloc(sizeof(f_table_t));
		p = p->next;
		p->next = NULL;
	}

	p->filename = s;
}

void set_fd(int fd){
	f_table_t *p = f_table;
	assert(f_table);
	while (p->next != NULL){
		p = p->next;
	}

	p->fd = fd;
}

void delete_file(int fd){
	if (fd == 0 || fd == 1 || fd == 2)
		return;

	f_table_t *p = f_table;
	assert(f_table);
	while (p != NULL && p->fd != fd){
		p = p->next;
	}

	if (p == NULL)
		return ;

	if (p->fd == fd){
		if (p == f_table){
			f_table = f_table->next;
			free(p->filename);
			free(p);
		}
		else{
			f_table_t *p1 = f_table;
			while (p1->next != p){
				p1 = p1->next;
			}
			p1->next = p->next;
			free(p->filename);
			free(p);
		}
	}
}

char *get_filename(int fd){
	if (fd == 0)
		return std_in;
	else if (fd == 1)
		return std_out;
	else if (fd == 2)
		return std_err;

	assert(f_table);
	f_table_t *p = f_table;
	while (p != NULL && p->fd != fd){
		p = p->next;
	}

	if (p == NULL)
		return errorname;

	if (p->fd == fd){
		return p->filename;
	}
	Assert(0, "file not found\n");
	return errorname;
}