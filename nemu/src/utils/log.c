/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include "debug.h"
#include <common.h>

extern uint64_t g_nr_guest_inst;

#ifndef CONFIG_TARGET_AM
FILE *log_fp[Trace_type_count] = {};
char *filename[Trace_type_count] = {"nemu.log", "inst.log", "mem.log",
                                    "func.log", "exc.log",  "sys.log"};

void init_log(const char *log_dir) {
  for (int i = 0; i < Trace_type_count; i++) {
    log_fp[i] = stdout;
    char log_file[256];
    if (log_dir != NULL) {
      strcat(strncpy(log_file, log_dir, 246), filename[i]);
      FILE *fp = fopen(log_file, "w");
      Assert(fp, "Can not open '%s'", log_file);
      log_fp[i] = fp;
    }
  }
  Log("Log is written to directory %s", log_dir ? log_dir : "stdout");
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE,
                (g_nr_guest_inst >= CONFIG_TRACE_START) &&
                    (g_nr_guest_inst <= CONFIG_TRACE_END),
                false);
}
#endif
