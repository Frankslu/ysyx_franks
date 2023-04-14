// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"

#include "Vmycpu_top___024root.h"

VL_ATTR_COLD void Vmycpu_top___024root___eval_static(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_initial__TOP(Vmycpu_top___024root* vlSelf);

VL_ATTR_COLD void Vmycpu_top___024root___eval_initial(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_initial\n"); );
    // Body
    Vmycpu_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_initial__TOP(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->inst_sram_we = 0U;
    vlSelf->inst_sram_wdata = 0U;
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_final(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_triggers__stl(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__stl(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___eval_stl(Vmycpu_top___024root* vlSelf);

VL_ATTR_COLD void Vmycpu_top___024root___eval_settle(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmycpu_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmycpu_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/mycpu_top.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmycpu_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__stl(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmycpu_top___024root___stl_sequent__TOP__0(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ mycpu_top__DOT__alu_src1;
    mycpu_top__DOT__alu_src1 = 0;
    IData/*31:0*/ mycpu_top__DOT__alu_src2;
    mycpu_top__DOT__alu_src2 = 0;
    CData/*0:0*/ mycpu_top__DOT__rj_eq_rd;
    mycpu_top__DOT__rj_eq_rd = 0;
    CData/*0:0*/ mycpu_top__DOT____VdfgTmp_h7517b185__0;
    mycpu_top__DOT____VdfgTmp_h7517b185__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_alu__DOT__or_result;
    mycpu_top__DOT__u_alu__DOT__or_result = 0;
    IData/*31:0*/ mycpu_top__DOT__u_alu__DOT__adder_b;
    mycpu_top__DOT__u_alu__DOT__adder_b = 0;
    IData/*31:0*/ mycpu_top__DOT__u_alu__DOT__adder_result;
    mycpu_top__DOT__u_alu__DOT__adder_result = 0;
    // Body
    vlSelf->inst_sram_addr = vlSelf->mycpu_top__DOT__pc;
    vlSelf->mycpu_top__DOT__jirl_offs = (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->inst_sram_rdata 
                                                         >> 0x19U)))) 
                                          << 0x12U) 
                                         | (0x3fffcU 
                                            & (vlSelf->inst_sram_rdata 
                                               >> 8U)));
    vlSelf->mycpu_top__DOT__rf_rdata1 = ((0U == (0x1fU 
                                                 & (vlSelf->inst_sram_rdata 
                                                    >> 5U)))
                                          ? 0U : vlSelf->mycpu_top__DOT__u_regfile__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->inst_sram_rdata 
                                            >> 5U))]);
    vlSelf->mycpu_top__DOT__op_31_26_d = ((0x8000000000000000ULL 
                                           & vlSelf->mycpu_top__DOT__op_31_26_d) 
                                          | (((QData)((IData)(
                                                              (0x3eU 
                                                               == 
                                                               (vlSelf->inst_sram_rdata 
                                                                >> 0x1aU)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (0x3dU 
                                                                  == 
                                                                  (vlSelf->inst_sram_rdata 
                                                                   >> 0x1aU)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (0x3cU 
                                                                     == 
                                                                     (vlSelf->inst_sram_rdata 
                                                                      >> 0x1aU)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (0x3bU 
                                                                        == 
                                                                        (vlSelf->inst_sram_rdata 
                                                                         >> 0x1aU)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (0x3aU 
                                                                           == 
                                                                           (vlSelf->inst_sram_rdata 
                                                                            >> 0x1aU)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (0x39U 
                                                                              == 
                                                                              (vlSelf->inst_sram_rdata 
                                                                               >> 0x1aU)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (0x38U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->inst_sram_rdata 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->debug_wb_pc = vlSelf->inst_sram_addr;
    vlSelf->debug_wb_rf_wnum = ((1U & (IData)((vlSelf->mycpu_top__DOT__op_31_26_d 
                                               >> 0x15U)))
                                 ? 1U : (0x1fU & vlSelf->inst_sram_rdata));
    vlSelf->mycpu_top__DOT____VdfgTmp_h1c4a3e54__0 
        = (IData)((0ULL != (0x300000ULL & vlSelf->mycpu_top__DOT__op_31_26_d)));
    vlSelf->mycpu_top__DOT__inst_addi_w = (IData)((vlSelf->mycpu_top__DOT__op_31_26_d 
                                                   & (0x2800000U 
                                                      == 
                                                      (0x3c00000U 
                                                       & vlSelf->inst_sram_rdata))));
    vlSelf->mycpu_top__DOT__need_si20 = (1U & ((~ (vlSelf->inst_sram_rdata 
                                                   >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->mycpu_top__DOT__op_31_26_d 
                                                          >> 5U))));
    vlSelf->mycpu_top__DOT__res_from_mem = (IData)(
                                                   ((vlSelf->mycpu_top__DOT__op_31_26_d 
                                                     >> 0xaU) 
                                                    & (0x800000U 
                                                       == 
                                                       (0x3c00000U 
                                                        & vlSelf->inst_sram_rdata))));
    vlSelf->mycpu_top__DOT____VdfgTmp_h19962199__0 
        = (IData)((0ULL != (0xc00000ULL & vlSelf->mycpu_top__DOT__op_31_26_d)));
    vlSelf->mycpu_top__DOT__src2_is_4 = (IData)((0ULL 
                                                 != 
                                                 (0x280000ULL 
                                                  & vlSelf->mycpu_top__DOT__op_31_26_d)));
    vlSelf->data_sram_we = (IData)(((vlSelf->mycpu_top__DOT__op_31_26_d 
                                     >> 0xaU) & (0x1800000U 
                                                 == 
                                                 (0x3c00000U 
                                                  & vlSelf->inst_sram_rdata))));
    mycpu_top__DOT____VdfgTmp_h7517b185__0 = ((IData)(vlSelf->mycpu_top__DOT__op_31_26_d) 
                                              & (IData)(
                                                        (0x400000U 
                                                         == 
                                                         (0x3f00000U 
                                                          & vlSelf->inst_sram_rdata))));
    vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0 
        = ((IData)(vlSelf->mycpu_top__DOT__op_31_26_d) 
           & (IData)((0x100000U == (0x3f00000U & vlSelf->inst_sram_rdata))));
    mycpu_top__DOT__alu_src1 = ((IData)(vlSelf->mycpu_top__DOT__src2_is_4)
                                 ? vlSelf->mycpu_top__DOT__pc
                                 : vlSelf->mycpu_top__DOT__rf_rdata1);
    vlSelf->mycpu_top__DOT__rf_we = (1U & ((~ (IData)(vlSelf->data_sram_we)) 
                                           & (~ (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0xd00000ULL 
                                                          & vlSelf->mycpu_top__DOT__op_31_26_d))))));
    vlSelf->mycpu_top__DOT__rf_raddr2 = (0x1fU & (((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h19962199__0) 
                                                   | (IData)(vlSelf->data_sram_we))
                                                   ? vlSelf->inst_sram_rdata
                                                   : 
                                                  (vlSelf->inst_sram_rdata 
                                                   >> 0xaU)));
    vlSelf->mycpu_top__DOT__inst_slli_w = ((IData)(mycpu_top__DOT____VdfgTmp_h7517b185__0) 
                                           & (0x8000U 
                                              == (0xf8000U 
                                                  & vlSelf->inst_sram_rdata)));
    vlSelf->mycpu_top__DOT__inst_srli_w = ((IData)(mycpu_top__DOT____VdfgTmp_h7517b185__0) 
                                           & (0x48000U 
                                              == (0xf8000U 
                                                  & vlSelf->inst_sram_rdata)));
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_sra = ((IData)(mycpu_top__DOT____VdfgTmp_h7517b185__0) 
                                                  & (0x88000U 
                                                     == 
                                                     (0xf8000U 
                                                      & vlSelf->inst_sram_rdata)));
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_sub = ((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                                  & (0x10000U 
                                                     == 
                                                     (0xf8000U 
                                                      & vlSelf->inst_sram_rdata)));
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_slt = ((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                                  & (0x20000U 
                                                     == 
                                                     (0xf8000U 
                                                      & vlSelf->inst_sram_rdata)));
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_sltu = ((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                                   & (0x28000U 
                                                      == 
                                                      (0xf8000U 
                                                       & vlSelf->inst_sram_rdata)));
    vlSelf->debug_wb_rf_we = (0xfU & (- (IData)((IData)(vlSelf->mycpu_top__DOT__rf_we))));
    vlSelf->data_sram_wdata = ((0U == (IData)(vlSelf->mycpu_top__DOT__rf_raddr2))
                                ? 0U : vlSelf->mycpu_top__DOT__u_regfile__DOT__rf
                               [vlSelf->mycpu_top__DOT__rf_raddr2]);
    vlSelf->mycpu_top__DOT__u_alu__DOT__adder_cin = 
        ((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_sub) 
         | ((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_slt) 
            | (IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_sltu)));
    mycpu_top__DOT__rj_eq_rd = (vlSelf->mycpu_top__DOT__rf_rdata1 
                                == vlSelf->data_sram_wdata);
    mycpu_top__DOT__alu_src2 = (((IData)(vlSelf->mycpu_top__DOT__inst_slli_w) 
                                 | ((IData)(vlSelf->mycpu_top__DOT__inst_srli_w) 
                                    | ((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_sra) 
                                       | ((IData)(vlSelf->mycpu_top__DOT__inst_addi_w) 
                                          | ((IData)(vlSelf->mycpu_top__DOT__res_from_mem) 
                                             | ((IData)(vlSelf->data_sram_we) 
                                                | ((IData)(vlSelf->mycpu_top__DOT__need_si20) 
                                                   | (IData)(vlSelf->mycpu_top__DOT__src2_is_4))))))))
                                 ? ((IData)(vlSelf->mycpu_top__DOT__src2_is_4)
                                     ? 4U : ((IData)(vlSelf->mycpu_top__DOT__need_si20)
                                              ? (0xfffff000U 
                                                 & (vlSelf->inst_sram_rdata 
                                                    << 7U))
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->inst_sram_rdata 
                                                                 >> 0x15U)))) 
                                                  << 0xcU) 
                                                 | (0xfffU 
                                                    & (vlSelf->inst_sram_rdata 
                                                       >> 0xaU)))))
                                 : vlSelf->data_sram_wdata);
    vlSelf->mycpu_top__DOT__nextpc = ((1U & (((IData)(
                                                      (vlSelf->mycpu_top__DOT__op_31_26_d 
                                                       >> 0x16U)) 
                                              & (IData)(mycpu_top__DOT__rj_eq_rd)) 
                                             | (((~ (IData)(mycpu_top__DOT__rj_eq_rd)) 
                                                 & (IData)(
                                                           (vlSelf->mycpu_top__DOT__op_31_26_d 
                                                            >> 0x17U))) 
                                                | ((IData)(
                                                           (vlSelf->mycpu_top__DOT__op_31_26_d 
                                                            >> 0x13U)) 
                                                   | (IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h1c4a3e54__0)))))
                                       ? (((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h19962199__0) 
                                           | (IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h1c4a3e54__0))
                                           ? (vlSelf->mycpu_top__DOT__pc 
                                              + ((IData)(
                                                         (0ULL 
                                                          != 
                                                          (0x300000ULL 
                                                           & vlSelf->mycpu_top__DOT__op_31_26_d)))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->inst_sram_rdata 
                                                                  >> 9U)))) 
                                                   << 0x1cU) 
                                                  | ((0xffc0000U 
                                                      & (vlSelf->inst_sram_rdata 
                                                         << 0x12U)) 
                                                     | (0x3fffcU 
                                                        & (vlSelf->inst_sram_rdata 
                                                           >> 8U))))
                                                  : vlSelf->mycpu_top__DOT__jirl_offs))
                                           : (vlSelf->mycpu_top__DOT__rf_rdata1 
                                              + vlSelf->mycpu_top__DOT__jirl_offs))
                                       : ((IData)(4U) 
                                          + vlSelf->mycpu_top__DOT__pc));
    mycpu_top__DOT__u_alu__DOT__or_result = (mycpu_top__DOT__alu_src1 
                                             | mycpu_top__DOT__alu_src2);
    mycpu_top__DOT__u_alu__DOT__adder_b = ((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__adder_cin)
                                            ? (~ mycpu_top__DOT__alu_src2)
                                            : mycpu_top__DOT__alu_src2);
    mycpu_top__DOT__u_alu__DOT__adder_result = (mycpu_top__DOT__alu_src1 
                                                + (mycpu_top__DOT__u_alu__DOT__adder_b 
                                                   + (IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__adder_cin)));
    vlSelf->data_sram_addr = (((- (IData)(((((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                             & (0U 
                                                == 
                                                (0xf8000U 
                                                 & vlSelf->inst_sram_rdata))) 
                                            | ((IData)(vlSelf->mycpu_top__DOT__inst_addi_w) 
                                               | ((IData)(vlSelf->mycpu_top__DOT__res_from_mem) 
                                                  | ((IData)(vlSelf->data_sram_we) 
                                                     | (IData)(vlSelf->mycpu_top__DOT__src2_is_4))))) 
                                           | (IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_sub)))) 
                               & mycpu_top__DOT__u_alu__DOT__adder_result) 
                              | ((1U & ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_slt))) 
                                        & (((~ (mycpu_top__DOT__alu_src2 
                                                >> 0x1fU)) 
                                            & (mycpu_top__DOT__alu_src1 
                                               >> 0x1fU)) 
                                           | ((~ ((mycpu_top__DOT__alu_src1 
                                                   ^ mycpu_top__DOT__alu_src2) 
                                                  >> 0x1fU)) 
                                              & (mycpu_top__DOT__u_alu__DOT__adder_result 
                                                 >> 0x1fU))))) 
                                 | ((1U & ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_sltu))) 
                                           & (~ (IData)(
                                                        (1ULL 
                                                         & (((QData)((IData)(mycpu_top__DOT__alu_src1)) 
                                                             + 
                                                             ((QData)((IData)(mycpu_top__DOT__u_alu__DOT__adder_b)) 
                                                              + (QData)((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__adder_cin)))) 
                                                            >> 0x20U)))))) 
                                    | (((- (IData)(
                                                   ((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                                    & (0x48000U 
                                                       == 
                                                       (0xf8000U 
                                                        & vlSelf->inst_sram_rdata))))) 
                                        & (mycpu_top__DOT__alu_src1 
                                           & mycpu_top__DOT__alu_src2)) 
                                       | (((~ mycpu_top__DOT__u_alu__DOT__or_result) 
                                           & (- (IData)(
                                                        ((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                                         & (0x40000U 
                                                            == 
                                                            (0xf8000U 
                                                             & vlSelf->inst_sram_rdata)))))) 
                                          | (((- (IData)(
                                                         ((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                                          & (0x50000U 
                                                             == 
                                                             (0xf8000U 
                                                              & vlSelf->inst_sram_rdata))))) 
                                              & mycpu_top__DOT__u_alu__DOT__or_result) 
                                             | (((- (IData)(
                                                            ((IData)(vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0) 
                                                             & (0x58000U 
                                                                == 
                                                                (0xf8000U 
                                                                 & vlSelf->inst_sram_rdata))))) 
                                                 & (mycpu_top__DOT__alu_src1 
                                                    ^ mycpu_top__DOT__alu_src2)) 
                                                | (((- (IData)((IData)(vlSelf->mycpu_top__DOT__need_si20))) 
                                                    & mycpu_top__DOT__alu_src2) 
                                                   | (((- (IData)((IData)(vlSelf->mycpu_top__DOT__inst_slli_w))) 
                                                       & (mycpu_top__DOT__alu_src1 
                                                          << 
                                                          (0x1fU 
                                                           & mycpu_top__DOT__alu_src2))) 
                                                      | ((- (IData)(
                                                                    ((IData)(vlSelf->mycpu_top__DOT__inst_srli_w) 
                                                                     | (IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_sra)))) 
                                                         & (IData)(
                                                                   ((((QData)((IData)(
                                                                                (- (IData)(
                                                                                ((IData)(vlSelf->mycpu_top__DOT__u_alu__DOT__op_sra) 
                                                                                & (mycpu_top__DOT__alu_src1 
                                                                                >> 0x1fU)))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(mycpu_top__DOT__alu_src1))) 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & mycpu_top__DOT__alu_src2)))))))))))));
    vlSelf->debug_wb_rf_wdata = ((IData)(vlSelf->mycpu_top__DOT__res_from_mem)
                                  ? vlSelf->data_sram_rdata
                                  : vlSelf->data_sram_addr);
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_stl(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vmycpu_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__ico(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__act(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__nba(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmycpu_top___024root___ctor_var_reset(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->inst_sram_we = VL_RAND_RESET_I(1);
    vlSelf->inst_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->inst_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->inst_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->data_sram_we = VL_RAND_RESET_I(1);
    vlSelf->data_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->data_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->data_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->debug_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug_wb_rf_we = VL_RAND_RESET_I(4);
    vlSelf->debug_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->debug_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__nextpc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__jirl_offs = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__op_31_26_d = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__inst_slli_w = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_srli_w = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_addi_w = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__need_si20 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__src2_is_4 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__rf_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__rf_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT____VdfgTmp_h1c4a3e54__0 = 0;
    vlSelf->mycpu_top__DOT____VdfgTmp_h19962199__0 = 0;
    vlSelf->mycpu_top__DOT____VdfgTmp_h78773bd0__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_sub = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_slt = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_sltu = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_alu__DOT__op_sra = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
