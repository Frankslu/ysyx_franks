// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmem__Syms.h"


void Vmem___024root__trace_chg_sub_0(Vmem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_chg_top_0\n"); );
    // Init
    Vmem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem___024root*>(voidSelf);
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmem___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmem___024root__trace_chg_sub_0(Vmem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->io_r_en));
    bufp->chgBit(oldp+3,(vlSelf->io_r_wr));
    bufp->chgIData(oldp+4,(vlSelf->io_r_addr),32);
    bufp->chgIData(oldp+5,(vlSelf->io_r_wdata),32);
    bufp->chgCData(oldp+6,(vlSelf->io_r_wstrb),4);
    bufp->chgIData(oldp+7,(vlSelf->io_w_rdata),32);
    bufp->chgIData(oldp+8,(vlSelf->mem__DOT__Memory_w_rdata),32);
}

void Vmem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_cleanup\n"); );
    // Init
    Vmem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem___024root*>(voidSelf);
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
