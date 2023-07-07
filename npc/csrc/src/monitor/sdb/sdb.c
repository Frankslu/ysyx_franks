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

#include "vaddr.h"
#include "isa.h"
#include "cpu/cpu.h"
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;


bool ref_newbp(vaddr_t pc);
bool ref_freebp(int i);
void verilator_finish();
IFDEF(CONFIG_DIFFTEST, void whether_check_csr(bool yn);)

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
	static char *line_read = NULL;

	if (line_read) {
		free(line_read);
		line_read = NULL;
	}

	line_read = readline(ANSI_FMT("(npc) ", ANSI_FG_GREEN));

	if (line_read && *line_read) {
		add_history(line_read);
	}

	return line_read;
}

static int cmd_c(char *args) {
	cpu_exec(-1);
	return 0;
}

static int cmd_rst(char *args){
	reset_monitor();
	return 0;
}

static int cmd_q(char *args) {
	npc_state.state = NPC_QUIT;
	verilator_finish();
	return -1;
}

static int cmd_si(char *args){
	uint64_t step;
	if(NULL == args){
		step = 1;
	}else{
		int tmp = atoi(args);
		if (tmp <= 0){
			printf(ANSI_FMT("command error\n", ANSI_FG_RED));
			return 0;
		}else
			step = (uint64_t)tmp;
	}
	cpu_exec(step);
	return 0;
}

static int cmd_info(char *args){
	if(args == NULL){
			printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		printf("Invalid input\nUse info r or info w\n");
		return 0;
	}
	char c[3];
	sscanf(args, "%s", c);
	if(c[0] == 'r' && c[1] == '\0'){
		isa_reg_display();
	}
	else if(c[0] == 'w' && c[1] == '\0'){
		MUXDEF(CONFIG_WATCHPOINT, print_watchpoint(), printf(ANSI_FMT("Watchpoint disabled\n", ANSI_FG_RED)));
	}
	else if(strcmp(c, "b") == 0){
		MUXDEF(CONFIG_BREAKPOINT, display_breakpoint(), printf(ANSI_FMT("Breakpoint disabled\n", ANSI_FG_RED)));
	}
	else if(strcmp(c, "mr") == 0){
		MUXDEF(CONFIG_MTRACE, display_mring(), printf(ANSI_FMT("Mtrace disabled\n", ANSI_FG_RED)));
	}
	else if(strcmp(c, "ir") == 0){
		MUXDEF(CONFIG_IRING, display_iring(), printf(ANSI_FMT("Iring disabled\n", ANSI_FG_RED)));
	}
	else if(strcmp(c, "fr") == 0){
		MUXDEF(CONFIG_FTRACE, display_fring(), printf(ANSI_FMT("Fring disabled\n", ANSI_FG_RED)));
	}
	else if(streq(c, "er")){
		MUXDEF(CONFIG_ETRACE, display_ering(), printf(ANSI_FMT("Ering disabled\n", ANSI_FG_RED)));
	}
	else if(streq(c, "dr")){
		MUXDEF(CONFIG_DTRACE, display_dring(), printf(ANSI_FMT("Dring disabled\n", ANSI_FG_RED)));
	}
	else {
			printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		printf("Invalid Input\n");
	}
	return 0;
}

static int cmd_x(char *args){
	if (NULL == args){
		printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		return 0;
	}
	char *e = (char *)malloc(128*sizeof(char));
	int n;
	bool success = true;
	if(sscanf(args, "%d %[^\n]", &n, e) != 2){
			printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		printf("command error\n");
		return 0;
	}
	word_t result = expr(e,&success);
	if(success == false)
		return 0;
	
	for (int i = 0;i < n;i++){
		printf("0x%08x  0x%08x\n",result + 4*i, vaddr_read(result + 4*i, 4));
	}
	free(e);
	return 0;
}

static int cmd_p(char *args){
	char *e = (char *)malloc(128*sizeof(char));
	if(args == NULL){
			printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		printf("command error\n");
		free(e);
		return 0;
	}
	sscanf(args, "%[^\n]", e);
	bool success = true;
	word_t result = expr(e,&success);
	if(success == false){
		free(e);
		return 0;
	}
	printf("%s = 0x%08x\n", e, result);
	free(e);
	return 0;
}

#ifdef CONFIG_WATCHPOINT
static int cmd_w(char *args){
	if (args == NULL){
		printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		return 0;
	}
	new_wp(args);
	return 0;
}
#endif

static int cmd_d(char *args){
	if (NULL == args){
		printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		return 0;
	}

	int i;
	char c[16];
	int argc;
	if((argc = sscanf(args, "%s %d", c, &i)) == 0){
		printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		return 0;
	}
	else if(argc == 1){
		if(strcmp(c, "w") == 0){
#ifdef CONFIG_WATCHPOINT
			printf("delete all watchpoint? (y,n)\n");
			int sss = scanf("%s",c);//unused res
			sss = sss+1;
			if(strcmp(c, "y") == 0){
				for(int i=0; i < NR_WP; i++){
					free_wp(i);
				}
			}
#else		
			printf("Watchpoint disabled\n");
#endif
		}
		else if(strcmp(c, "b") == 0){
#ifdef CONFIG_BREAKPOINT
			printf("delete all breakpoint? (y,n)\n");
			int sss = scanf("%s",c);//unused res
			sss = sss + 1;
			if(strcmp(c, "y") == 0){
				for(int i=0; i < NR_BP; i++){
					free_bp(i);
				}
			}
#else		
			printf("Breakpoint disabled\n");
#endif
		}
	}
	else if(argc == 2){
		if(strcmp(c, "w") == 0){
			MUXDEF(CONFIG_WATCHPOINT, bool success = free_wp(i), printf("Watchpoint disabled\n"));
			IFDEF(CONFIG_WATCHPOINT, if (success == false) printf("Watchpoint doesn't exist\n"));
		}
		else if(strcmp(c, "b") == 0){
			MUXDEF(CONFIG_BREAKPOINT, bool success = free_bp(i), printf("Breakpoint disabled\n"));
			IFDEF(CONFIG_BREAKPOINT, if(success == false) printf("Breakpoint doesn't exist\n"));
		}
	}
	return 0;
}

#ifdef CONFIG_BREAKPOINT
static int cmd_b(char *args){
	if (args == NULL){
		printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		return 0;
	}
	
	vaddr_t i;
	char s[50];
	bool success = true;
	if (sscanf(args, "0x%x", &i) == 1){
		if (i % 4 != 0){
			printf(ANSI_FMT("Invalid pc\n", ANSI_FG_RED));
			return 0;
		}
		new_bp(i);
		return 0;
	}

	sscanf(args, "%s", s);
	i = func2addr(s, &success);
	if (success == false){
		printf(ANSI_FMT("func doesn't exist\n", ANSI_FG_RED));
		return 0;
	}
	new_bp(i);
	return 0;
}
#endif

static int cmd_set(char *args){
	if (args == NULL){
		printf(ANSI_FMT("parameters:\ncheckcsr: y\n", ANSI_FG_YELLOW));
		return 0;
	}
	
	char s1[50], s2[20];
	sscanf(args, " %s %s", s1, s2);
	if (streq(s1, "checkcsr")){
#ifdef CONFIG_DIFFTEST
		if (streq(s2, "y"))
			whether_check_csr(true);
		else if (streq(s2, "n"))
			whether_check_csr(false);
		else
			printf(ANSI_FMT("command error\n", ANSI_FG_RED));
#else
		printf(ANSI_FMT("difftest disabled\n", ANSI_FG_RED));
#endif
	}
	else{
		printf(ANSI_FMT("command error\n", ANSI_FG_RED));
	}
	return 0;
}

static int cmd_pc(char *args){
	if (args == NULL){
		printf(ANSI_FMT("command error\n", ANSI_FG_RED));
		return 0;
	}
	
	display_csr(args);
	return 0;
}

static int cmd_help(char *args);

static struct {
	const char *name;
	const char *description;
	int (*handler) (char *);
} cmd_table[] = {
	{ "help", "Display information about all supported commands", cmd_help },
	{ "c", "Continue the execution of the program", cmd_c },
	{ "q", "Exit NEMU", cmd_q },
	{ "si", "Run N instructions in NEMU", cmd_si},
	{ "info", "print the information in reg(r), watchpoint(w), breakpoint(b), iring(ir)", cmd_info},
	{ "x", "scan memory", cmd_x},
	{ "p", "print value of expression", cmd_p},
	{ "d", "delete watchpoint or breakpoint", cmd_d},
	{ "rst", "reset monitor", cmd_rst},
	{ "set", "set system parameter", cmd_set},
	{ "pcsr", "print csr", cmd_pc},
	IFDEF(CONFIG_WATCHPOINT, { "w", "set watchpoint", cmd_w},)
	IFDEF(CONFIG_BREAKPOINT, { "b", "set breakpoint", cmd_b})

	/* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
	/* extract the first argument */
	char *arg = strtok(NULL, " ");
	int i;

	if (arg == NULL) {
		/* no argument given */
		for (i = 0; i < NR_CMD; i ++) {
			printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	}
	else {
		for (i = 0; i < NR_CMD; i ++) {
			if (strcmp(arg, cmd_table[i].name) == 0) {
				printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);
	}
	return 0;
}

void sdb_set_batch_mode() {
	is_batch_mode = true;
}

void sdb_mainloop() {
	if (is_batch_mode) {
		printf("is npc\n\n\n");
		cmd_c(NULL);
		return;
	}

	for (char *str; (str = rl_gets()) != NULL; ) {
		char *str_end = str + strlen(str);

		/* extract the first token as the command */
		char *cmd = strtok(str, " ");
		if (cmd == NULL) { continue; }

		/* treat the remaining string as the arguments,
		 * which may need further parsing
		 */
		char *args = cmd + strlen(cmd) + 1;
		if (args >= str_end) {
			args = NULL;
		}

#ifdef CONFIG_DEVICE
		// extern void sdl_clear_event_queue();
		// sdl_clear_event_queue();
#endif

		int i;
		for (i = 0; i < NR_CMD; i ++) {
			if (strcmp(cmd, cmd_table[i].name) == 0) {
				if (cmd_table[i].handler(args) < 0) { return; }
				break;
			}
		}

		if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
	}
}

void init_sdb() {
	/* Compile the regular expressions. */
	init_regex();

	/* Initialize the watchpoint pool. */
	IFDEF(CONFIG_WATCHPOINT, init_wp_pool());

	/* Initialize the breakpoint pool. */
	IFDEF(CONFIG_BREAKPOINT, init_bp_pool());
}
