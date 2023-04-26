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

#include <common.h>
#include <stdio.h>
#include <trace/trace.h>


void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
void init_regex();
void display_iring();

#ifdef TEST
word_t expr(char *e, bool *success);

int main(int argc, char *argv[]){
	init_monitor(argc, argv);
	char e[2048] = {};
	bool success = true;
	uint32_t result;

	FILE *fp;
	char filename[] = "/home/franks/ysyx-workbench/nemu/tools/gen-expr/build/input.txt";
	fp = fopen(filename,"r");

	int cal=0;
	int err=0;
	while(fscanf(fp,"%u %[^\n]",&result,e) == 2){
		uint32_t i = expr(e,&success);
		if((uint32_t)result != (uint32_t)i && success != true){
			printf("expr: %s  i=%u result=%u\n",e,i,result);
			err++;
		}
		cal++;
	}
	printf("finish:%d, err:%d\n",cal, err);
	return 0;
}

/*int main(int argc, char *argv[]){
  init_monitor(argc, argv);
  char e[128] = {};
  bool success = true;

  while(scanf("%[^\n]",e) == 1){
  uint32_t i = expr(e,&success);
  printf("expr: %s  i=%d\n",e,i);
  }
  return 0;
  }*/

#else
int main(int argc, char *argv[]) {
	/* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
	am_init_monitor();
#else
	init_monitor(argc, argv);
#endif

	/* Start engine. */
	engine_start();

	display_iring();
	return is_exit_status_bad();
}
#endif
