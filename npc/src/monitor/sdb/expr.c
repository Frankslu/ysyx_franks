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

#include "isa.h"
#include "vaddr.h"
#include "sdb.h"

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

word_t isa_reg_str2val(const char *s, bool *success);

enum {
	TK_NOTYPE = 256, TK_EQ = 257, TK_NE = 258, NUM = 259, HEXNUM = 260, 
	REG = 261, LAND = 262, NEG = 263, POINTER = 264,

	/* TODO: Add more token types */

};

static struct rule {
	const char *regex;
	int token_type;
} rules[] = {

	/* TODO: Add more rules.
	 * Pay attention to the precedence level of different rules.
	 */
	{"0[xX][0-9a-fA-F]+", HEXNUM},
	{"[0-9]+", NUM},
	{"\\$\\w++", REG},		
	{" +", TK_NOTYPE},		// spaces
	{"\\+", '+'},			// plus
	{"-", '-'},
	{"\\*", '*'},
	{"/", '/'},
	{"\\(", '('},
	{"\\)", ')'},
	{"&&", LAND},			//&&
	{"==", TK_EQ},			// equal
	{"!=", TK_NE},			// not_equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
	int i;
	char error_msg[128];
	int ret;

	for (i = 0; i < NR_REGEX; i ++) {
		ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
		if (ret != 0) {
			regerror(ret, &re[i], error_msg, 128);
			panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
		}
	}
}

typedef struct token {
	int type;
	char str[32];
} Token;

static Token tokens[512] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
	int position = 0;
	int i;
	regmatch_t pmatch;

	nr_token = 0;
	while (e[position] != '\0') {
		/* Try all rules one by one. */
		for (i = 0; i < NR_REGEX; i ++) {
			if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
				char *substr_start = e + position;
				int substr_len = pmatch.rm_eo;

//				Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
//						i, rules[i].regex, position, substr_len, substr_len, substr_start);

				position += substr_len;

				/* TODO: Now a new token is recognized with rules[i]. Add codes
				 * to record the token in the array `tokens'. For certain types
				 * of tokens, some extra actions should be performed.
				 */

				switch (rules[i].token_type) {
					case TK_NOTYPE:break;
					case NUM:
					case HEXNUM:
					case REG:
								   strncpy(tokens[nr_token].str, substr_start, substr_len);
								   if(substr_len < 32)
									   tokens[nr_token].str[substr_len] = '\0';
								   tokens[nr_token].type = rules[i].token_type;
								   nr_token++;
								   break;
					case '+':
					case '-':
					case '*':
					case '/':
					case '(':
					case ')':
					case TK_EQ:
					case TK_NE:
					case LAND:
								   tokens[nr_token].type = rules[i].token_type;
								   nr_token++;break;
					default:
								   break;
				}

				break;
			}
		}

		if (i == NR_REGEX) {
			printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
			return false;
		}
	}

	return true;
}

int skip_brackets(int p, int q){
	int i,left,right;
	left=0;right=1;

	for(i = q-1; i>=p; i--){
		if(tokens[i].type == '('){
			left++;
			if(left == right){
				return i;
			}
		}
		else if(tokens[i].type == ')'){
			right++;
		}
	}

	if(left != right)
		return -1;
	else
		return i;
}

int left_op_priority(int type){
	switch (type){
		case LAND:
			return 0;
		case TK_EQ:
		case TK_NE:
			return 1;
		case '+':
		case '-':
			return 2;
		case '*':
		case '/':
			return 3;
		default:
			return 256;
	}
}

int found_main_op(int p, int q){
	int op_pos = -1;
	int op_level = 256;
	int i=q;
	int a;
	while(i >= p){
		if(tokens[i].type == ')')
			i = skip_brackets(p,i);
		if((a = left_op_priority(tokens[i].type)) < op_level){
			op_pos = i;
			op_level = a;
		}
		i--;
	}
	if(op_level <= 3)
		return op_pos;
	
	i=p;
	while(i<=q){
		if(tokens[i].type == NEG || tokens[i].type == POINTER){
			return i;
		}
		i++;
	}
	return op_pos;
}
//return -1:main op not found

word_t eval(int p, int q, int *err){
	if(p > q){
		return 1;
	}
	else if(p == q){
		if(tokens[p].type == NUM){
			word_t i;
			sscanf(tokens[p].str, "%d", &i);
			return i;
		}
		else if(tokens[p].type == HEXNUM){
			word_t i;
			sscanf(tokens[p].str, "%x", &i);
			return i;
		}
		else if(tokens[p].type == REG){
			word_t i;
			bool success;
			i = isa_reg_str2val((const char *)tokens[p].str, &success);
			if(success == false){
				*err = 0;
				return 1;
			}
			return i;
		}
	}
	else if(tokens[q].type == ')'){
		int i=skip_brackets(p,q);
		if(i==p){
			return eval(p+1, q-1, err);
		}
		else if(i==-1){
			*err = -1;
			return 1;
		}
	}

	int main_op_pos = found_main_op(p, q);
	if(main_op_pos == -1){
		*err = -1;
		return 1;
	}

	word_t val1 = eval(p, main_op_pos - 1, err);
	word_t val2 = eval(main_op_pos + 1, q, err);

	switch (tokens[main_op_pos].type){
		case '+': 
			return val1 + val2;
		case '-': 
			return val1 - val2;
		case '*': 
			return val1 * val2;
		case '/': 
			if(val2 == 0){
				if(*err != 0 && *err != -1 && *err != -2){
					*err = -3;
				}
				return 0xffffffff;
			}
			return val1 / val2;
		case LAND:
			return val1 && val2;
		case TK_EQ:
			return val1 == val2;
		case TK_NE:
			return val1 != val2;
		case NEG:
			return (word_t)(-((int)val2));
		case POINTER:
			return sdb_vaddr_read(val2, 4);
	}
	return 1;
}

//turn '-' into negative num or '*' into pointer
void trans(){
	int i;
	for(i = nr_token-1; i>=1;i--){
		if(tokens[i-1].type != REG && tokens[i-1].type != NUM 
				&& tokens[i-1].type != HEXNUM && tokens[i-1].type != ')'){
			if(tokens[i].type=='-')
				tokens[i].type = NEG;
			else if(tokens[i].type == '*')
				tokens[i].type = POINTER;
		}
	}	
	if(tokens[0].type=='-')
		tokens[0].type = NEG;
	else if(tokens[0].type == '*')
		tokens[0].type = POINTER;

	return;
}

word_t expr(char *e, bool *success) {
	if (!make_token(e)) {
		*success = false;
		return 0;
	}
	trans();
	/* TODO: Insert codes to evaluate the expression. */
	int invalid_expr=1;
	word_t result = eval(0, nr_token - 1, &invalid_expr);
	if(invalid_expr == 0){
		printf("err = 0: reg name\n");
		*success = false;
	}
	else if(invalid_expr == -1){
		printf("err = -1: brackets not match\n");
		*success = false;
	}
	else if(invalid_expr == -3){
		printf("err = -3: divided by 0\n");
		*success = false;
	}
	return (word_t)result;
}
