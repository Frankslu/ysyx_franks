// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

extern "C" void set_gpr_ptr(int pc, const svOpenArrayHandle regs);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__set_gpr_ptr__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    static const int regs__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps regs__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, regs__Vopenprops__ulims);
    VerilatedDpiOpenVar regs__Vopenarray (&regs__Vopenprops, &regs);
    set_gpr_ptr(pc__Vcvt, &regs__Vopenarray);
}

extern "C" void npc_break();

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__WB__DOT__npc_brk__DOT__npc_break_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__WB__DOT__npc_brk__DOT__npc_break_TOP\n"); );
    // Body
    npc_break();
}

extern "C" void pmem_read(int raddr, int* rdata);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask, int* rdata);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    int rdata__Vcvt;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_fetch(int raddr, int* rdata);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__pmem_fetch_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__pmem_fetch_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    pmem_fetch(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__act(VMain___024root* vlSelf);
#endif  // VL_DEBUG

void VMain___024root___eval_triggers__act(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMain___024root___dump_triggers__act(vlSelf);
    }
#endif
}
