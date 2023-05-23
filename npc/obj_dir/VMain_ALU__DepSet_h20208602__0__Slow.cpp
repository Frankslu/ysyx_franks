// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_ALU.h"

VL_ATTR_COLD void VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__0(VMain_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__0\n"); );
    // Body
    vlSelf->__PVT__op_add = (1U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_and = (5U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_or = (7U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_nor = (6U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_xor = (8U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_sll = (9U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_srl = (0xaU == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_lui = (0xcU == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_mul = (0xdU == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_mulh = (0xeU == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_mulhu = (0xfU == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_div = (0x10U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_mod = (0x12U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_divu = (0x11U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_modu = (0x13U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_sra = (0xbU == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_sub = (2U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_slt = (3U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT__op_sltu = (4U == (IData)(vlSelf->__PVT__io_alu_op));
    vlSelf->__PVT___io_res_T_1 = ((IData)(vlSelf->__PVT__op_sra) 
                                  | (IData)(vlSelf->__PVT__op_srl));
    vlSelf->__PVT___io_res_T = ((IData)(vlSelf->__PVT__op_add) 
                                | (IData)(vlSelf->__PVT__op_sub));
    vlSelf->__PVT__add_sub = (((IData)(vlSelf->__PVT__op_sub) 
                               | (IData)(vlSelf->__PVT__op_slt)) 
                              | (IData)(vlSelf->__PVT__op_sltu));
    vlSelf->__PVT___GEN_0 = VL_EXTEND_QI(33,1, (IData)(vlSelf->__PVT__add_sub));
}

VL_ATTR_COLD void VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__1(VMain_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__1\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = VL_EXTEND_QI(63,32, vlSelf->__PVT__io_src1);
    vlSelf->__PVT___sr_T_3 = ((VL_BITSEL_IIII(32, vlSelf->__PVT__io_src1, 0x1fU) 
                               & (IData)(vlSelf->__PVT__op_sra))
                               ? 0xffffffffU : 0U);
    vlSelf->__PVT__and_res = (vlSelf->__PVT__io_src1 
                              & vlSelf->__PVT__io_src2);
    vlSelf->__PVT__xor_res = (vlSelf->__PVT__io_src1 
                              ^ vlSelf->__PVT__io_src2);
    vlSelf->__PVT___mulh_res_T_2 = VL_MULS_QQQ(64, 
                                               VL_EXTENDS_QI(64,32, vlSelf->__PVT__io_src1), 
                                               VL_EXTENDS_QI(64,32, vlSelf->__PVT__io_src2));
    vlSelf->__PVT___div_res_T_3 = (0x1ffffffffULL & 
                                   VL_DIVS_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & VL_EXTENDS_QI(33,32, vlSelf->__PVT__io_src1)), 
                                               (0x1ffffffffULL 
                                                & VL_EXTENDS_QI(33,32, vlSelf->__PVT__io_src2))));
    vlSelf->__PVT__mod_res = VL_MODDIVS_III(32, vlSelf->__PVT__io_src1, vlSelf->__PVT__io_src2);
    vlSelf->__PVT__divu_res = VL_DIV_III(32, vlSelf->__PVT__io_src1, vlSelf->__PVT__io_src2);
    vlSelf->__PVT__modu_res = VL_MODDIV_III(32, vlSelf->__PVT__io_src1, vlSelf->__PVT__io_src2);
    vlSelf->__PVT__or_res = (vlSelf->__PVT__io_src1 
                             | vlSelf->__PVT__io_src2);
    vlSelf->__PVT__mul_pre = (VL_EXTEND_QI(64,32, vlSelf->__PVT__io_src1) 
                              * VL_EXTEND_QI(64,32, vlSelf->__PVT__io_src2));
    vlSelf->__PVT___add_res_T = (~ vlSelf->__PVT__io_src2);
    vlSelf->__PVT__sll_res = (0x7fffffffffffffffULL 
                              & (vlSelf->__PVT___GEN_1 
                                 << (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__io_src2, 0U, 5U))));
    vlSelf->__PVT__sr = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___sr_T_3, vlSelf->__PVT__io_src1);
    vlSelf->__PVT__mulh_res = VL_SEL_IQII(64, vlSelf->__PVT___mulh_res_T_2, 0x20U, 0x20U);
    vlSelf->__PVT__div_res = VL_SEL_IQII(33, vlSelf->__PVT___div_res_T_3, 0U, 0x20U);
    vlSelf->__PVT___io_res_T_2 = ((IData)(vlSelf->__PVT__op_modu)
                                   ? vlSelf->__PVT__modu_res
                                   : 0xdeadbeefU);
    vlSelf->__PVT__nor_res = (~ vlSelf->__PVT__or_res);
    vlSelf->__PVT__mul_res = VL_SEL_IQII(64, vlSelf->__PVT__mul_pre, 0U, 0x20U);
    vlSelf->__PVT__mulhu_res = VL_SEL_IQII(64, vlSelf->__PVT__mul_pre, 0x20U, 0x20U);
    vlSelf->__PVT___add_res_T_1 = ((IData)(vlSelf->__PVT__add_sub)
                                    ? vlSelf->__PVT___add_res_T
                                    : vlSelf->__PVT__io_src2);
    vlSelf->__PVT__sr_res = (vlSelf->__PVT__sr >> (0x1fU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__io_src2, 0U, 5U)));
    vlSelf->__PVT___io_res_T_3 = ((IData)(vlSelf->__PVT__op_divu)
                                   ? vlSelf->__PVT__divu_res
                                   : vlSelf->__PVT___io_res_T_2);
    vlSelf->__PVT___add_res_T_2 = (0x1ffffffffULL & 
                                   (VL_EXTEND_QI(33,32, vlSelf->__PVT__io_src1) 
                                    + VL_EXTEND_QI(33,32, vlSelf->__PVT___add_res_T_1)));
    vlSelf->__PVT___io_res_T_4 = ((IData)(vlSelf->__PVT__op_mod)
                                   ? vlSelf->__PVT__mod_res
                                   : vlSelf->__PVT___io_res_T_3);
    vlSelf->__PVT__add_res = (0x1ffffffffULL & (vlSelf->__PVT___add_res_T_2 
                                                + vlSelf->__PVT___GEN_0));
    vlSelf->__PVT___io_res_T_5 = ((IData)(vlSelf->__PVT__op_div)
                                   ? vlSelf->__PVT__div_res
                                   : vlSelf->__PVT___io_res_T_4);
    vlSelf->__PVT__slt_res = (1U & ((VL_BITSEL_IIII(32, vlSelf->__PVT__io_src1, 0x1fU) 
                                     & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__io_src2, 0x1fU))) 
                                    | ((~ (VL_BITSEL_IIII(32, vlSelf->__PVT__io_src1, 0x1fU) 
                                           ^ VL_BITSEL_IIII(32, vlSelf->__PVT__io_src2, 0x1fU))) 
                                       & VL_BITSEL_IQII(33, vlSelf->__PVT__add_res, 0x1fU))));
    vlSelf->__PVT__sltu_res = (1U & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__add_res, 0x20U)));
    vlSelf->__PVT___io_res_T_6 = ((IData)(vlSelf->__PVT__op_mulhu)
                                   ? vlSelf->__PVT__mulhu_res
                                   : vlSelf->__PVT___io_res_T_5);
    vlSelf->__PVT___io_res_T_7 = ((IData)(vlSelf->__PVT__op_mulh)
                                   ? vlSelf->__PVT__mulh_res
                                   : vlSelf->__PVT___io_res_T_6);
    vlSelf->__PVT___io_res_T_8 = ((IData)(vlSelf->__PVT__op_mul)
                                   ? vlSelf->__PVT__mul_res
                                   : vlSelf->__PVT___io_res_T_7);
    vlSelf->__PVT___io_res_T_9 = ((IData)(vlSelf->__PVT__op_lui)
                                   ? vlSelf->__PVT__io_src2
                                   : vlSelf->__PVT___io_res_T_8);
    vlSelf->__PVT___io_res_T_10 = ((IData)(vlSelf->__PVT___io_res_T_1)
                                    ? vlSelf->__PVT__sr_res
                                    : VL_EXTEND_QI(64,32, vlSelf->__PVT___io_res_T_9));
    vlSelf->__PVT___io_res_T_11 = ((IData)(vlSelf->__PVT__op_sll)
                                    ? VL_EXTEND_QQ(64,63, vlSelf->__PVT__sll_res)
                                    : vlSelf->__PVT___io_res_T_10);
    vlSelf->__PVT___io_res_T_12 = ((IData)(vlSelf->__PVT__op_xor)
                                    ? VL_EXTEND_QI(64,32, vlSelf->__PVT__xor_res)
                                    : vlSelf->__PVT___io_res_T_11);
    vlSelf->__PVT___io_res_T_13 = ((IData)(vlSelf->__PVT__op_nor)
                                    ? VL_EXTEND_QI(64,32, vlSelf->__PVT__nor_res)
                                    : vlSelf->__PVT___io_res_T_12);
    vlSelf->__PVT___io_res_T_14 = ((IData)(vlSelf->__PVT__op_or)
                                    ? VL_EXTEND_QI(64,32, vlSelf->__PVT__or_res)
                                    : vlSelf->__PVT___io_res_T_13);
    vlSelf->__PVT___io_res_T_15 = ((IData)(vlSelf->__PVT__op_and)
                                    ? VL_EXTEND_QI(64,32, vlSelf->__PVT__and_res)
                                    : vlSelf->__PVT___io_res_T_14);
    vlSelf->__PVT___io_res_T_16 = ((IData)(vlSelf->__PVT__op_sltu)
                                    ? VL_EXTEND_QI(64,1, (IData)(vlSelf->__PVT__sltu_res))
                                    : vlSelf->__PVT___io_res_T_15);
    vlSelf->__PVT___io_res_T_17 = ((IData)(vlSelf->__PVT__op_slt)
                                    ? VL_EXTEND_QI(64,1, (IData)(vlSelf->__PVT__slt_res))
                                    : vlSelf->__PVT___io_res_T_16);
    vlSelf->__PVT___io_res_T_18 = ((IData)(vlSelf->__PVT___io_res_T)
                                    ? VL_EXTEND_QQ(64,33, vlSelf->__PVT__add_res)
                                    : vlSelf->__PVT___io_res_T_17);
    vlSelf->__PVT__io_res = VL_SEL_IQII(64, vlSelf->__PVT___io_res_T_18, 0U, 0x20U);
}

VL_ATTR_COLD void VMain_ALU___ctor_var_reset(VMain_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_ALU___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_src1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op_add = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_slt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_sltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_and = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_nor = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_or = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_xor = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_sll = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_srl = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_sra = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_lui = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_mulh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_mulhu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_mod = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_divu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_modu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT___add_res_T = VL_RAND_RESET_I(32);
    vlSelf->__PVT___add_res_T_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___add_res_T_2 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT___GEN_0 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__add_res = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__slt_res = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sltu_res = VL_RAND_RESET_I(1);
    vlSelf->__PVT__and_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__or_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__nor_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__xor_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT___GEN_1 = VL_RAND_RESET_Q(63);
    vlSelf->__PVT__sll_res = VL_RAND_RESET_Q(63);
    vlSelf->__PVT___sr_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sr_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_pre = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mulhu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT___mulh_res_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mulh_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__divu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__modu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT___div_res_T_3 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__mod_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT___io_res_T_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___io_res_T_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___io_res_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_11 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_12 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_13 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_14 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_15 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_16 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_17 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___io_res_T_18 = VL_RAND_RESET_Q(64);
}
