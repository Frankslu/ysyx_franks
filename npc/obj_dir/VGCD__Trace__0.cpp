// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCD__Syms.h"


void VGCD___024root__trace_chg_sub_0(VGCD___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VGCD___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_chg_top_0\n"); );
    // Init
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VGCD___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VGCD___024root__trace_chg_sub_0(VGCD___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgSData(oldp+2,(vlSelf->io_value1),16);
    bufp->chgSData(oldp+3,(vlSelf->io_value2),16);
    bufp->chgBit(oldp+4,(vlSelf->io_loadingValues));
    bufp->chgSData(oldp+5,(vlSelf->io_outputGCD),16);
    bufp->chgBit(oldp+6,(vlSelf->io_outputValid));
    bufp->chgSData(oldp+7,(vlSelf->GCD__DOT__x),16);
    bufp->chgSData(oldp+8,(vlSelf->GCD__DOT__y),16);
}

void VGCD___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_cleanup\n"); );
    // Init
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
