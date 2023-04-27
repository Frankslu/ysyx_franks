// /***************************************************************************************
//  * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
//  *
//  * NEMU is licensed under Mulan PSL v2.
//  * You can use this software according to the terms and conditions of the Mulan PSL v2.
//  * You may obtain a copy of Mulan PSL v2 at:
//  *          http://license.coscl.org.cn/MulanPSL2
//  *
//  * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
//  * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
//  * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
//  *
//  * See the Mulan PSL v2 for more details.
//  ***************************************************************************************/

// #include "sdb.h"

// #define NR_BP 16

// static BP bp_pool[NR_BP] = {};
// static BP *bp_free = NULL;
// BP *bp_head = NULL;

// void init_bp_pool() {
// 	int i;
// 	for (i = 0; i < NR_BP; i ++) {
// 		bp_pool[i].NO = i;
// 		bp_pool[i].next = (i == NR_BP - 1 ? NULL : &bp_pool[i + 1]);
// 	}

// 	bp_head = NULL;
// 	bp_free = bp_pool;
// }

// /* TODO: Implement the functionality of watchpoint */
// BP *new_bp(uint32_t pc){
// 	if (bp_free != NULL){
// 		BP *new = bp_free;
// 		bp_free = bp_free->next;
// 		new->next = NULL;
// 		BP *p = bp_head;
// 		if(bp_head != NULL){
// 			p = bp_head;
// 			if(p->NO >= new->NO){
// 				new->next = p;
// 				bp_head = new;
// 			}
// 			else{
// 				while(p->next != NULL && p->next->NO <= new->NO)
// 					p = p->next;
// 				if(p->next != NULL){
// 					new->next = p->next;
// 					p->next = new;
// 				}
// 				else{
// 					//new->next = NULL;
// 					p->next = new;
// 				}
// 			}
// 		}
// 		else{
// 			//new->next = NULL;
// 			bp_head = new;
// 		}
// 		new->pc = pc;
// 		printf("New breakpoint %d: %x\n", new->NO, pc);
// 		return new;
// 	}
// 	else{
// 		printf("Breakpoint pool is full!\n");
// 		return NULL;
// 	}
// }

// bool bp_freebp(int NO){
// 	BP *p = bp_head;
// 	BP *back = p;
// 	if(p != NULL && p->NO != NO){
// 		while(p != NULL && p->NO != NO){
// 			back = p;
// 			p = p->next;
// 		}
// 	}

// 	if(p != NULL){
// 		printf("delete watchpoint %d: %x\n", NO, p->pc);
// 		if(p == bp_head){
// 			bp_head = p->next;
// 		}
// 		back->next = p->next;
// 		p->next = NULL;
		
// 		back = bp_free;
// 		if(bp_free != NULL){
// 			back = bp_free;
// 			if(back->NO >= NO){
// 				p->next = bp_free;
// 				bp_free = p;
// 			}
// 			else{
// 				while(back->next != NULL && back->next->NO <= NO)
// 					back = back->next;
// 				if(back->next != NULL){
// 					p->next = back->next;
// 					back->next = p;
// 				}
// 				else{
// 					//new->next = NULL;
// 					back->next = p;
// 				}
// 			}
// 		}
// 		else{
// 			bp_free = p;
// 		}
// 	}
// 	else{
// 		printf("Breakpoint not found\n");
// 		return false;
// 	}
// 	return false;
// }

// void display_breakpoint(){
// 	BP *p = bp_head;
// 	word_t res;
// 	int res_changed;
// 	if(p==NULL){
// 		printf("No watchpoint exist\n");
// 		return;
// 	}
// 	printf("           NO: expr                               pre_res    res        changed\n");
// 	while(p != NULL){
// 		printf("watchpoint %02d: %x\n", p->NO, p->pc);
// 	}
// 	return;
// }

// int scan_bp(){
// 	BP *p = bp_head;
// 	word_t i=0;
// 	int changed = 0;
// 	bool success = true;
// 	while(p!=NULL){
// 		i = expr(p->str, &success);
// 		if(i != p->result){
// 			printf("watchpoint %d changed: %-32s  old_res=%08x  res=%08x\n", p->NO, p->str, p->result, i);
// 			p->result = i;
// 			changed = 1;
// 		}
// 		p = p->next;
// 	}
// 	return changed;
// }
