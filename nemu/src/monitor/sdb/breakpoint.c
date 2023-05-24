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

#include "sdb.h"

#ifdef CONFIG_BREAKPOINT
static BP bp_pool[NR_BP] = {};
static BP *bp_free = NULL;
BP *bp_head = NULL;
word_t replaced_inst;

word_t break_ifetch(vaddr_t addr, int len);
void break_write(vaddr_t addr, int len, word_t data);

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

static int has_initialed = 0;

void init_bp_pool() {
	if (has_initialed == 1){
		return;
	}
	int i;
	for (i = 0; i < NR_BP; i ++) {
		bp_pool[i].NO = i;
		bp_pool[i].next = (i == NR_BP - 1 ? NULL : &bp_pool[i + 1]);
	}

	bp_head = NULL;
	bp_free = bp_pool;
	has_initialed = 1;
}

/* TODO: Implement the functionality of watchpoint */
void new_bp(vaddr_t pc){
	word_t mask = 0xffff8000;
	word_t brk_inst = 0x2a0000;
	if (in_pmem(pc) == false){
		printf("Out of memory bound\n");
		return;
	}
	word_t get_inst = break_ifetch(pc, 4);
	if ((get_inst & mask) == brk_inst){
		printf("The instruction is already break\n");
		return;
	}

	if (bp_free != NULL){
		BP *new = bp_free;
		bp_free = bp_free->next;
		new->next = NULL;
		BP *p = bp_head;
		if(bp_head != NULL){
			p = bp_head;
			if(p->NO >= new->NO){
				new->next = p;
				bp_head = new;
			}
			else{
				while(p->next != NULL && p->next->NO <= new->NO)
					p = p->next;
				if(p->next != NULL){
					new->next = p->next;
					p->next = new;
				}
				else{
					//new->next = NULL;
					p->next = new;
				}
			}
		}
		else{
			//new->next = NULL;
			bp_head = new;
		}
		new->pc = pc;
		new->inst = get_inst;
		break_write(pc, 4, brk_inst);
		printf("New breakpoint %d: %x\n", new->NO, pc);
		return;
	}
	else{
		printf("Breakpoint pool is full!\n");
		return;
	}
}

void free_bp(int NO){
	BP *p = bp_head;
	BP *back = p;
	if(p != NULL && p->NO != NO){
		while(p != NULL && p->NO != NO){
			back = p;
			p = p->next;
		}
	}

	if(p != NULL){
		break_write(p->pc, 4, p->inst);

		printf("delete watchpoint %d: %x\n", NO, p->pc);
		if(p == bp_head){
			bp_head = p->next;
		}
		back->next = p->next;
		p->next = NULL;
		
		back = bp_free;
		if(bp_free != NULL){
			back = bp_free;
			if(back->NO >= NO){
				p->next = bp_free;
				bp_free = p;
			}
			else{
				while(back->next != NULL && back->next->NO <= NO)
					back = back->next;
				if(back->next != NULL){
					p->next = back->next;
					back->next = p;
				}
				else{
					// new->next = NULL;
					back->next = p;
				}
			}
		}
		else{
			bp_free = p;
		}
	}
	else{
		printf("Breakpoint not found\n");
		return;
	}
	return;
}

void display_breakpoint(){
	BP *p = bp_head;
	if(p==NULL){
		printf("No watchpoint exist\n");
		return;
	}
	printf("           NO: expr\n");
	while(p != NULL){
		printf("watchpoint %02d: %x\n", p->NO, p->pc);
		p = p->next;
	}
	return;
}

int scan_bp(vaddr_t pc){
	BP *p = bp_head;
	int found = 0;
	while(p!=NULL){
		if (pc == p->pc){
			printf("break at %08x\n", pc);
			found = 1;
			replaced_inst = p->inst;
			break;
		}
		p = p->next;
	}
	return found;
}


#endif
