// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Difftest.h"
#include "VMain__Syms.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle regs);

VL_INLINE_OPT void VMain_Difftest____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__Main__cpucore__ID__reg___difftest(const VlUnpacked<IData/*31:0*/, 32> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Difftest____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__Main__cpucore__ID__reg___difftest\n"); );
    // Body
    static const int regs__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps regs__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, regs__Vopenprops__ulims);
    VerilatedDpiOpenVar regs__Vopenarray (&regs__Vopenprops, &regs);
    set_gpr_ptr(&regs__Vopenarray);
}
