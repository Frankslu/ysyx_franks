// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ ALU__DOT___io_res_T_28;
    ALU__DOT___io_res_T_28 = 0;
    // Body
    vlSelf->ALU__DOT__or_res = (vlSelf->io_src1 | vlSelf->io_src2);
    vlSelf->ALU__DOT__add_sub = ((2U == (IData)(vlSelf->io_alu_op)) 
                                 | ((3U == (IData)(vlSelf->io_alu_op)) 
                                    | (4U == (IData)(vlSelf->io_alu_op))));
    vlSelf->ALU__DOT__mul_pre = ((QData)((IData)(vlSelf->io_src1)) 
                                 * (QData)((IData)(vlSelf->io_src2)));
    vlSelf->ALU__DOT__add_res = (0x1ffffffffULL & (
                                                   ((QData)((IData)(vlSelf->io_src1)) 
                                                    + (QData)((IData)(
                                                                      ((IData)(vlSelf->ALU__DOT__add_sub)
                                                                        ? 
                                                                       (~ vlSelf->io_src2)
                                                                        : vlSelf->io_src2)))) 
                                                   + (QData)((IData)(vlSelf->ALU__DOT__add_sub))));
    ALU__DOT___io_res_T_28 = ((9U == (IData)(vlSelf->io_alu_op))
                               ? (0x7fffffffffffffffULL 
                                  & ((QData)((IData)(vlSelf->io_src1)) 
                                     << (0x1fU & vlSelf->io_src2)))
                               : (((0xbU == (IData)(vlSelf->io_alu_op)) 
                                   | (0xaU == (IData)(vlSelf->io_alu_op)))
                                   ? ((((QData)((IData)(
                                                        (((vlSelf->io_src1 
                                                           >> 0x1fU) 
                                                          & (0xbU 
                                                             == (IData)(vlSelf->io_alu_op)))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->io_src1))) 
                                      >> (0x1fU & vlSelf->io_src2))
                                   : (QData)((IData)(
                                                     ((0xcU 
                                                       == (IData)(vlSelf->io_alu_op))
                                                       ? vlSelf->io_src2
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->io_alu_op))
                                                        ? (IData)(vlSelf->ALU__DOT__mul_pre)
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->io_alu_op))
                                                         ? (IData)(
                                                                   (VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->io_src1), 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->io_src2)) 
                                                                    >> 0x20U))
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->io_alu_op))
                                                          ? (IData)(
                                                                    (vlSelf->ALU__DOT__mul_pre 
                                                                     >> 0x20U))
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(vlSelf->io_alu_op))
                                                           ? (IData)(
                                                                     (0x1ffffffffULL 
                                                                      & VL_DIVS_QQQ(33, 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, vlSelf->io_src1)), 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, vlSelf->io_src2)))))
                                                           : 
                                                          ((0x12U 
                                                            == (IData)(vlSelf->io_alu_op))
                                                            ? 
                                                           VL_MODDIVS_III(32, vlSelf->io_src1, vlSelf->io_src2)
                                                            : 
                                                           ((0x11U 
                                                             == (IData)(vlSelf->io_alu_op))
                                                             ? 
                                                            VL_DIV_III(32, vlSelf->io_src1, vlSelf->io_src2)
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->io_alu_op))
                                                              ? 
                                                             VL_MODDIV_III(32, vlSelf->io_src1, vlSelf->io_src2)
                                                              : 0xdeadbeefU))))))))))));
    vlSelf->io_res = (IData)((((1U == (IData)(vlSelf->io_alu_op)) 
                               | (2U == (IData)(vlSelf->io_alu_op)))
                               ? vlSelf->ALU__DOT__add_res
                               : ((3U == (IData)(vlSelf->io_alu_op))
                                   ? (QData)((IData)(
                                                     (1U 
                                                      & (((~ 
                                                           (vlSelf->io_src2 
                                                            >> 0x1fU)) 
                                                          & (vlSelf->io_src1 
                                                             >> 0x1fU)) 
                                                         | ((~ 
                                                             ((vlSelf->io_src1 
                                                               ^ vlSelf->io_src2) 
                                                              >> 0x1fU)) 
                                                            & (IData)(
                                                                      (vlSelf->ALU__DOT__add_res 
                                                                       >> 0x1fU)))))))
                                   : ((4U == (IData)(vlSelf->io_alu_op))
                                       ? (QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(
                                                                       (vlSelf->ALU__DOT__add_res 
                                                                        >> 0x20U))))))
                                       : ((5U == (IData)(vlSelf->io_alu_op))
                                           ? (QData)((IData)(
                                                             (vlSelf->io_src1 
                                                              & vlSelf->io_src2)))
                                           : ((7U == (IData)(vlSelf->io_alu_op))
                                               ? (QData)((IData)(vlSelf->ALU__DOT__or_res))
                                               : ((6U 
                                                   == (IData)(vlSelf->io_alu_op))
                                                   ? (QData)((IData)(
                                                                     (~ vlSelf->ALU__DOT__or_res)))
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->io_alu_op))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->io_src1 
                                                                       ^ vlSelf->io_src2)))
                                                    : ALU__DOT___io_res_T_28))))))));
}

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VALU___024root___eval_act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_act\n"); );
}

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
}

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG
void VALU___024root___eval_triggers__act(VALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VALU___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ALU.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VALU___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VALU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VALU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ALU.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VALU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ALU.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VALU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_alu_op & 0xe0U))) {
        Verilated::overWidthError("io_alu_op");}
}
#endif  // VL_DEBUG
