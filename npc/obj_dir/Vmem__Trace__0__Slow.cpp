// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmem__Syms.h"


VL_ATTR_COLD void Vmem___024root__trace_init_sub__TOP__0(Vmem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"io_r_en", false,-1);
    tracep->declBit(c+4,"io_r_wr", false,-1);
    tracep->declBus(c+5,"io_r_addr", false,-1, 31,0);
    tracep->declBus(c+6,"io_r_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"io_r_wstrb", false,-1, 3,0);
    tracep->declBus(c+8,"io_w_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"io_r_en", false,-1);
    tracep->declBit(c+4,"io_r_wr", false,-1);
    tracep->declBus(c+5,"io_r_addr", false,-1, 31,0);
    tracep->declBus(c+6,"io_r_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"io_r_wstrb", false,-1, 3,0);
    tracep->declBus(c+8,"io_w_rdata", false,-1, 31,0);
    tracep->declBit(c+3,"Memory_r_en", false,-1);
    tracep->declBit(c+4,"Memory_r_wr", false,-1);
    tracep->declBus(c+5,"Memory_r_addr", false,-1, 31,0);
    tracep->declBus(c+6,"Memory_r_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"Memory_r_wstrb", false,-1, 3,0);
    tracep->declBus(c+9,"Memory_w_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("Memory ");
    tracep->declBit(c+3,"r_en", false,-1);
    tracep->declBit(c+4,"r_wr", false,-1);
    tracep->declBus(c+5,"r_addr", false,-1, 31,0);
    tracep->declBus(c+6,"r_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"r_wstrb", false,-1, 3,0);
    tracep->declBus(c+9,"w_rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmem___024root__trace_init_top(Vmem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_init_top\n"); );
    // Body
    Vmem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmem___024root__trace_register(Vmem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmem___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmem___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmem___024root__trace_full_sub_0(Vmem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_full_top_0\n"); );
    // Init
    Vmem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem___024root*>(voidSelf);
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmem___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmem___024root__trace_full_sub_0(Vmem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullBit(oldp+3,(vlSelf->io_r_en));
    bufp->fullBit(oldp+4,(vlSelf->io_r_wr));
    bufp->fullIData(oldp+5,(vlSelf->io_r_addr),32);
    bufp->fullIData(oldp+6,(vlSelf->io_r_wdata),32);
    bufp->fullCData(oldp+7,(vlSelf->io_r_wstrb),4);
    bufp->fullIData(oldp+8,(vlSelf->io_w_rdata),32);
    bufp->fullIData(oldp+9,(vlSelf->mem__DOT__Memory_w_rdata),32);
}
