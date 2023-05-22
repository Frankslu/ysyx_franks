// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMAIN__DPI_H_
#define VERILATED_VMAIN__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/Exec.v:8:30
    extern void inst_exec_once(char valid, int inst, int pc);
    // DPI import at vsrc/npc_break.v:6:30
    extern void npc_break(char is_break);
    // DPI import at vsrc/Difftest.v:36:30
    extern void set_gpr_ptr(const svOpenArrayHandle regs);
    // DPI import at vsrc/i_mem.v:12:31
    extern void vaddr_fetch(int raddr, int* rdata);
    // DPI import at vsrc/d_mem.v:12:31
    extern void vaddr_read(int raddr, int* rdata);
    // DPI import at vsrc/d_mem.v:14:31
    extern void vaddr_write(int waddr, int wdata, char wmask, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
