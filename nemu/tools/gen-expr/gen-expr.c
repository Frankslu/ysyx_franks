/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
  int seed = time(0);
  srand(seed);
  int seed = time(0);
  srand(seed);
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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char buf1[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format1 =
"#include <stdio.h>\n"
"#include <stdint.h>\n"
"int main() { \n"
"  uint32_t result = %s;\n";
static char *code_format2 =
"  printf(\"%u\", result); \n"
"  return 0; \n"
"}";
int buf_pos = 0;
int buf1_pos = 0;
int token_num = 0;
char uint_my[] = "(uint32_t)";
char s[33] = {};
char fuc_num=0;

static void gen_num(){
//	uint32_t num = rand()%0x80000000;
	uint32_t num = rand()%0x8000;
	sprintf(s, "%d", num);
	strcpy(buf+buf_pos, uint_my);
	buf_pos += strlen(uint_my);
	strcpy(buf+buf_pos, s);
	buf_pos += strlen(s);
	
	strcpy(buf1+buf1_pos, s);
	buf1_pos += strlen(s);
	token_num++;
	return;
}

static void gen(char s){
	buf[buf_pos] = s;
	
	buf1[buf1_pos] = s;
	token_num++;
	buf_pos++;
	
	buf1_pos++;
	return;
}

static void gen_rand_op(){
	int op = rand()%4;
	switch(op){
		case 0: buf[buf_pos] = '+';break;
		case 1:	buf[buf_pos] = '-';break;
		case 2: buf[buf_pos] = '*';break;
		case 3: buf[buf_pos] = '/';break;
	}
	
	switch(op){
		case 0: buf1[buf1_pos] = '+';break;
		case 1:	buf1[buf1_pos] = '-';break;
		case 2: buf1[buf1_pos] = '*';break;
		case 3: buf1[buf1_pos] = '/';break;
	}
	buf_pos++;
	buf1_pos++;
	token_num++;
	return;
}

static void gen_rand_expr() {
//  int seed = time(0);
//  srand(seed);
	fuc_num++;
	if(fuc_num >= 64){
		gen_num();
		fuc_num--;
		return;
	}
	switch(rand()%5){	
		case 0:gen_num();break;
		case 1:gen('(');gen_rand_expr();gen(')');break;
		case 2:gen((char)32);gen_rand_expr();break;
		case 3:gen_rand_expr();gen((char)32);break;
		default:gen_rand_expr();gen_rand_op();gen_rand_expr();break;
	}
	fuc_num--;
	return;
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
	int fuckgcc;
  for (i = 0; i < loop; i ++) {
    buf_pos = 0;token_num = 0;
    buf1_pos = 0;fuc_num=0;
		gen_rand_expr();
		buf[buf_pos] = '\0';
		
		buf1[buf1_pos] = '\0';
		if(token_num <= 16 || token_num >= 127){
			continue;
		}

    sprintf(code_buf, code_format1, buf);
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fputs(code_format2, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -Wall -Werror -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fuckgcc = fscanf(fp, "%d", &result);
		fuckgcc++;
    pclose(fp);

    printf("%u %s\n", result, buf1);
  }
  return 0;
}
