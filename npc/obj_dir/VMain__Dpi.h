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
    // DPI import at vsrc/Exec.v:7:30
    extern void inst_exec_once(char valid, int inst);
    // DPI import at vsrc/Break.v:6:30
    extern void npc_break(char is_break);
    // DPI import at vsrc/Difftest.v:37:30
    extern void set_gpr_ptr(int pc, const svOpenArrayHandle regs);
    // DPI import at vsrc/Inst.v:12:31
    extern void vaddr_fetch(int raddr, int* rdata);
    // DPI import at vsrc/Memory.v:12:31
    extern void vaddr_read(int raddr, int* rdata);
    // DPI import at vsrc/Memory.v:14:31
    extern void vaddr_write(int waddr, int wdata, char wmask, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
