// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmem___024root.h"

VL_ATTR_COLD void Vmem___024root___eval_static(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmem___024root___eval_initial(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vmem___024root___eval_final(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmem___024root___eval_triggers__stl(Vmem___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__stl(Vmem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmem___024root___eval_stl(Vmem___024root* vlSelf);

VL_ATTR_COLD void Vmem___024root___eval_settle(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmem___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmem___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/mem.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmem___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__stl(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmem___024root___ico_sequent__TOP__0(Vmem___024root* vlSelf);

VL_ATTR_COLD void Vmem___024root___eval_stl(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vmem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__ico(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__act(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__nba(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmem___024root___ctor_var_reset(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_r_en = VL_RAND_RESET_I(1);
    vlSelf->io_r_wr = VL_RAND_RESET_I(1);
    vlSelf->io_r_addr = VL_RAND_RESET_I(32);
    vlSelf->io_r_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_r_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_w_rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mem__DOT__Memory__DOT__pmem_read__0__rdata = 0;
}
