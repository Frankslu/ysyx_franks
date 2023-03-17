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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ = 257, TK_NE = 258, NUM = 259, HEXNUM,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
	{"0x[0-9|a-f|A-F]", HEXNUM},
  {"[0-9]+", NUM},
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},          // plus
  {"-", '-'},
  {"\\*", '*'},
  {"/", '/'},
  {"\\(", '('},
  {"\\)", ')'},
  {"==", TK_EQ},        // equal
  {"!=", TK_NE},        // not_equal
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

static Token tokens[128] __attribute__((used)) = {};
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

 //       Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
 //           i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
					case TK_NOTYPE:break;
					case NUM:
						strncpy(tokens[nr_token].str, substr_start, substr_len);
						if(substr_len < 32)
							tokens[nr_token].str[substr_len] = '\0';
					case '+':
					case '-':
					case '*':
					case '/':
					case '(':
					case ')':
					case TK_EQ:
					case TK_NE:
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

int found_main_op(int p, int q){
	int pos1 = -1;
	int i=q;
	while(i >= p){
		if(tokens[i].type == '+' || tokens[i].type == '-'){
			return i;//found '+' or '-'
		}
		else if(pos1 == -1 && (tokens[i].type == '*' || tokens[i].type == '/')){
			pos1 = i;
		}else if(tokens[i].type == ')'){
			i = skip_brackets(p,i);
		}
		i--;
	}

	return pos1;
}
//return -1:main op not found

uint32_t eval(int p, int q, int *err){
	if(p > q){
		*err = 0;
		return 1;
	}
	else if(p == q){
		if(tokens[p].type == NUM){
			uint32_t i;
			sscanf(tokens[p].str, "%d", &i);
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
	
	uint32_t val1 = eval(p, main_op_pos - 1, err);
	uint32_t val2 = eval(main_op_pos + 1, q, err);

	switch (tokens[main_op_pos].type){
		case '+': return val1 + val2;
		case '-': return val1 - val2;
		case '*': return val1 * val2;
		case '/': 
			if(val2 == 0){
				if(*err != 0 && *err != -1 && *err != -2){
					*err = -3;
				}
				return 0xffffffff;
			}
			return val1 / val2;
	}
	return 1;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  int invalid_expr=1;
	uint32_t result = eval(0, nr_token - 1, &invalid_expr);
	if(invalid_expr == -0){
		printf("err = 0: p > q\n");
		*success = false;
	}
	else if(invalid_expr == -1){
		printf("err = -1: brackets not match\n");
		*success = false;
	}
	else if(invalid_expr == -2){
		printf("err = -2: main op not found\n");
		*success = false;
	}
	else if(invalid_expr == -3){
		printf("err = -3: divided by 0\n");
		*success = false;
	}
  return (word_t)result;
}
