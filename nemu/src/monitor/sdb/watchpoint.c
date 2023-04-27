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

#define NR_WP 16

static WP wp_pool[NR_WP] = {};
static WP *wp_free = NULL;
WP *head = NULL;

void init_wp_pool() {
	int i;
	for (i = 0; i < NR_WP; i ++) {
		wp_pool[i].NO = i;
		wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
	}

	head = NULL;
	wp_free = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP *new_wp(char *s){
	bool success = true;
	word_t res = expr(s,&success);
	if(success == true){
		if(wp_free != NULL){
			WP *new = wp_free;
			wp_free = wp_free->next;
			new->next = NULL;
			WP *p = head;
			if(head != NULL){
				p = head;
				if(p->NO >= new->NO){
					new->next = p;
					head = new;
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
				head = new;
			}
			new->str = malloc(strlen(s)+1);
			strcpy(new->str, s);
			new->result = res;
			printf("New watchpoint: %s = %u\n", s, res);
			return new;
		}
		else{
			printf("Watch_point pool is full!\n");
			return NULL;
		}
		printf("Invalid expression\n");
		return NULL;
	}
	return NULL;
}

bool free_wp(int NO){
	WP *p = head;
	WP *back = p;
	if(p != NULL && p->NO != NO){
		while(p != NULL && p->NO != NO){
			back = p;
			p = p->next;
		}
	}

	if(p != NULL){
		printf("delete watchpoint %d: %s value=%d\n", NO, p->str, p->result);
		if(p == head){
			head = p->next;
		}
		back->next = p->next;
		p->next = NULL;
		free(p->str);
		
		back = wp_free;
		if(wp_free != NULL){
			back = wp_free;
			if(back->NO >= NO){
				p->next = wp_free;
				wp_free = p;
			}
			else{
				while(back->next != NULL && back->next->NO <= NO)
					back = back->next;
				if(back->next != NULL){
					p->next = back->next;
					back->next = p;
				}
				else{
					//new->next = NULL;
					back->next = p;
				}
			}
		}
		else{
			wp_free = p;
		}
	}
	else{
		printf("Watchpoint not found\n");
		return false;
	}
	return false;
}

void print_watchpoint(){
	WP *p = head;
	word_t res;
	bool success = true;
	int res_changed;
	if(p==NULL){
		printf("No watchpoint exist\n");
		return;
	}
	printf("           NO: expr                               pre_res    res        changed\n");
	while(p != NULL){
		res = expr(p->str, &success);
		res_changed = p->result == res ? 0 : 1;
		printf("watchpoint %02d: %-32s   %08x   %08x   %d\n", p->NO, p->str, p->result, res, res_changed);
		p->result = res;
		p = p->next;
	}
	return;
}

int scan_wp(){
	WP *p = head;
	word_t i=0;
	int changed = 0;
	bool success = true;
	while(p!=NULL){
		i = expr(p->str, &success);
		if(i != p->result){
			printf("watchpoint %d changed: %-32s  old_res=%08x  res=%08x\n", p->NO, p->str, p->result, i);
			p->result = i;
			changed = 1;
		}
		p = p->next;
	}
	return changed;
}
