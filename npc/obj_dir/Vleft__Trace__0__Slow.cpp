// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vleft__Syms.h"


VL_ATTR_COLD void Vleft___024root__trace_init_sub__TOP__0(Vleft___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vleft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleft___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+2,"b", false,-1, 31,0);
    tracep->declBus(c+3,"c", false,-1, 31,0);
    tracep->pushNamePrefix("left ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+2,"b", false,-1, 31,0);
    tracep->declBus(c+3,"c", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vleft___024root__trace_init_top(Vleft___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vleft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleft___024root__trace_init_top\n"); );
    // Body
    Vleft___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vleft___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vleft___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vleft___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vleft___024root__trace_register(Vleft___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vleft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleft___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vleft___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vleft___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vleft___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vleft___024root__trace_full_sub_0(Vleft___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vleft___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleft___024root__trace_full_top_0\n"); );
    // Init
    Vleft___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vleft___024root*>(voidSelf);
    Vleft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vleft___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vleft___024root__trace_full_sub_0(Vleft___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vleft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleft___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->a),32);
    bufp->fullIData(oldp+2,(vlSelf->b),32);
    bufp->fullIData(oldp+3,(vlSelf->c),32);
}
