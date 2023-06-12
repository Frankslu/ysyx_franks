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

#include <locale.h>
#include "isa.h"
#include "cpu/cpu.h"
#include "cpu/decode.h"

 /* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
NPCState npc_state;
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

extern int scan_wp();
void iring_write(char *buf);
int decode_exec(Decode *s);
void difftest_step(vaddr_t pc, vaddr_t npc);
void verilator_finish();
// void trace_log_write();

__attribute__((unused)) static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
	log_write("%s\n", _this->logbuf);
#endif
	if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
	IFDEF(CONFIG_DIFFTEST, difftest_step(cpu.pc, dnpc));
	
	IFDEF(CONFIG_IRING, iring_write(_this->logbuf));

#ifdef CONFIG_WATCHPOINT
	int i=scan_wp();
	if(i == 1 && npc_state.state != NPC_END){
		npc_state.state = NPC_STOP;
	}
#endif
}

static void exec_once(Decode *s) {
	s->pc = cpu.pc;
	s->snpc = s->pc + 4;
	npc_exec_once();
	s->isa.inst.val = cpu.inst;
	decode_exec(s);

#ifdef CONFIG_ITRACE
#ifdef CONFIG_BREAKPOINT
	if (cpu.is_break == true && npc_state.state == NPC_STOP){
		s->logbuf[0] = '\0';
		return;
	}
#endif

	char *p = s->logbuf;
	p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
#define ilen 4
	int i;
	uint8_t *inst = (uint8_t *)&s->isa.inst.val;
	for (i = ilen - 1; i >= 0; i --) {
		p += snprintf(p, 4, " %02x", inst[i]);
	}
#define ilen_max MUXDEF(CONFIG_ISA_x86, 8, 4);
	int space_len = ilen_max - ilen;
	if (space_len < 0) space_len = 0;
	space_len = space_len * 3 + 1;
	memset(p, ' ', space_len);
	p += space_len;

	p[0] = '\t';
	p++;
	strcpy(p, s->disas);
	p += strlen(s->disas);
	p[0] = '\0';
#endif
}

static void execute(uint64_t n) {
	Decode s;
	for (;n > 0; n--) {
		exec_once(&s);
		g_nr_guest_inst ++;

		IFDEF(CONFIG_DIFF_TRACE,
			if (cpu.is_break == false || npc_state.state == NPC_END && cpu.is_break == true)
				trace_and_difftest(&s, cpu.pc)
		);

		if (npc_state.state != NPC_RUNNING) break;
		// IFDEF(CONFIG_DEVICE, device_update());
	}
}

static void statistic() {
	IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
	Log("host time spent = " NUMBERIC_FMT " us", g_timer);
	Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
	if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
	else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
	verilator_finish();
}

void assert_fail_msg() {
	isa_reg_display();
	statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
	g_print_step = (n < MAX_INST_TO_PRINT);
	switch (npc_state.state) {
		case NPC_END: case NPC_ABORT:
			printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
			return;
		default: npc_state.state = NPC_RUNNING;
	}

	uint64_t timer_start = get_time();

	execute(n);

	uint64_t timer_end = get_time();
	g_timer += timer_end - timer_start;

	switch (npc_state.state) {
		case NPC_RUNNING: npc_state.state = NPC_STOP; break;
		case NPC_END: case NPC_ABORT:
						   	Log("npc: %s at pc = " FMT_WORD,
								   (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
									(npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
									 ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
								   npc_state.halt_pc);
						   	// fall through
		case NPC_QUIT: 
			// trace_log_write();
			statistic();
	}
}
