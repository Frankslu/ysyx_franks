// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCD__Syms.h"


VL_ATTR_COLD void VGCD___024root__trace_init_sub__TOP__0(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_value1", false,-1, 15,0);
    tracep->declBus(c+4,"io_value2", false,-1, 15,0);
    tracep->declBit(c+5,"io_loadingValues", false,-1);
    tracep->declBus(c+6,"io_outputGCD", false,-1, 15,0);
    tracep->declBit(c+7,"io_outputValid", false,-1);
    tracep->pushNamePrefix("GCD ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_value1", false,-1, 15,0);
    tracep->declBus(c+4,"io_value2", false,-1, 15,0);
    tracep->declBit(c+5,"io_loadingValues", false,-1);
    tracep->declBus(c+6,"io_outputGCD", false,-1, 15,0);
    tracep->declBit(c+7,"io_outputValid", false,-1);
    tracep->declBus(c+8,"x", false,-1, 15,0);
    tracep->declBus(c+9,"y", false,-1, 15,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VGCD___024root__trace_init_top(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_init_top\n"); );
    // Body
    VGCD___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VGCD___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VGCD___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VGCD___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VGCD___024root__trace_register(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VGCD___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VGCD___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VGCD___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VGCD___024root__trace_full_sub_0(VGCD___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VGCD___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_full_top_0\n"); );
    // Init
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VGCD___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VGCD___024root__trace_full_sub_0(VGCD___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullSData(oldp+3,(vlSelf->io_value1),16);
    bufp->fullSData(oldp+4,(vlSelf->io_value2),16);
    bufp->fullBit(oldp+5,(vlSelf->io_loadingValues));
    bufp->fullSData(oldp+6,(vlSelf->io_outputGCD),16);
    bufp->fullBit(oldp+7,(vlSelf->io_outputValid));
    bufp->fullSData(oldp+8,(vlSelf->GCD__DOT__x),16);
    bufp->fullSData(oldp+9,(vlSelf->GCD__DOT__y),16);
}
