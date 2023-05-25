// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Exec.h"
#include "VMain__Syms.h"

extern "C" void inst_exec_once(char valid, int inst, int pc);

VL_INLINE_OPT void VMain_Exec____Vdpiimwrap_inst_exec_once_TOP__Main__cpucore__ID__reg___inst_exec_once(CData/*7:0*/ valid, IData/*31:0*/ inst, IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Exec____Vdpiimwrap_inst_exec_once_TOP__Main__cpucore__ID__reg___inst_exec_once\n"); );
    // Body
    char valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    inst_exec_once(valid__Vcvt, inst__Vcvt, pc__Vcvt);
}
