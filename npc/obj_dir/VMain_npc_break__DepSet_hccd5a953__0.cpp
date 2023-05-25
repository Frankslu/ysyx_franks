// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_npc_break.h"

extern "C" void npc_break(char is_break);

VL_INLINE_OPT void VMain_npc_break____Vdpiimwrap_npc_break_TOP__Main__cpucore__ID__reg___npc_brk(CData/*7:0*/ is_break) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_npc_break____Vdpiimwrap_npc_break_TOP__Main__cpucore__ID__reg___npc_brk\n"); );
    // Body
    char is_break__Vcvt;
    for (size_t is_break__Vidx = 0; is_break__Vidx < 1; ++is_break__Vidx) is_break__Vcvt = is_break;
    npc_break(is_break__Vcvt);
}
