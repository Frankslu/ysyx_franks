// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_MEM_stage.h"

VL_ATTR_COLD void VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__0(VMain_MEM_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__0\n"); );
    // Body
    vlSelf->__PVT__tows_valid = vlSelf->__PVT__ms_valid;
}

VL_ATTR_COLD void VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__1(VMain_MEM_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__1\n"); );
    // Body
    vlSelf->__PVT__tows_bits_dpi_c_inst = vlSelf->__PVT__ms_bits_dpi_c_inst;
    vlSelf->__PVT__tows_bits_rf_we = vlSelf->__PVT__ms_bits_rf_we;
    vlSelf->__PVT__tows_bits_rf_waddr = vlSelf->__PVT__ms_bits_rf_waddr;
    vlSelf->__PVT__tows_bits_dpi_c_is_break = vlSelf->__PVT__ms_bits_dpi_c_is_break;
}

VL_ATTR_COLD void VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__2(VMain_MEM_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__2\n"); );
    // Body
    vlSelf->__PVT___mem_rdata_sign_T_1 = (0xffffU & 
                                          VL_SEL_IIII(32, vlSelf->__PVT__data_sram_rdata, 0U, 0x10U));
    vlSelf->__PVT___mem_rdata_sign_T = (0xffU & VL_SEL_IIII(32, vlSelf->__PVT__data_sram_rdata, 0U, 8U));
    vlSelf->__PVT__tows_bits_dpi_c_next_pc = vlSelf->__PVT__ms_bits_dpi_c_next_pc;
    vlSelf->__PVT___mem_rdata_T_4 = VL_CONCAT_III(32,16,16, 
                                                  (0xffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT___mem_rdata_sign_T_1), 0xfU)), 0x10U)), (IData)(vlSelf->__PVT___mem_rdata_sign_T_1));
    vlSelf->__PVT___mem_rdata_T_1 = VL_CONCAT_III(32,24,8, 
                                                  (0xffffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT___mem_rdata_sign_T), 7U)), 0x18U)), (IData)(vlSelf->__PVT___mem_rdata_sign_T));
    vlSelf->__PVT___mem_rdata_T_7 = ((6U == (IData)(vlSelf->__PVT__ms_bits_inst_name))
                                      ? vlSelf->__PVT___mem_rdata_T_1
                                      : 0xdeadU);
    vlSelf->__PVT___mem_rdata_T_9 = ((9U == (IData)(vlSelf->__PVT__ms_bits_inst_name))
                                      ? VL_EXTEND_II(32,8, 
                                                     (0xffU 
                                                      & VL_SEL_IIII(32, vlSelf->__PVT__data_sram_rdata, 0U, 8U)))
                                      : vlSelf->__PVT___mem_rdata_T_7);
    vlSelf->__PVT___mem_rdata_T_11 = ((7U == (IData)(vlSelf->__PVT__ms_bits_inst_name))
                                       ? vlSelf->__PVT___mem_rdata_T_4
                                       : vlSelf->__PVT___mem_rdata_T_9);
    vlSelf->__PVT___mem_rdata_T_13 = ((0xaU == (IData)(vlSelf->__PVT__ms_bits_inst_name))
                                       ? VL_EXTEND_II(32,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__data_sram_rdata, 0U, 0x10U)))
                                       : vlSelf->__PVT___mem_rdata_T_11);
    vlSelf->__PVT__mem_rdata = ((8U == (IData)(vlSelf->__PVT__ms_bits_inst_name))
                                 ? vlSelf->__PVT__data_sram_rdata
                                 : vlSelf->__PVT___mem_rdata_T_13);
    vlSelf->__PVT__tows_bits_rf_wdata = ((IData)(vlSelf->__PVT__ms_bits_res_from_mem)
                                          ? vlSelf->__PVT__mem_rdata
                                          : vlSelf->__PVT__ms_bits_alu_res);
}

VL_ATTR_COLD void VMain_MEM_stage___ctor_var_reset(VMain_MEM_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_MEM_stage___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ms_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ms_bits_alu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ms_bits_inst_name = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ms_bits_res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ms_bits_rf_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ms_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ms_bits_dpi_c_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ms_bits_dpi_c_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ms_bits_dpi_c_next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tows_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tows_bits_rf_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tows_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__tows_bits_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tows_bits_dpi_c_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tows_bits_dpi_c_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tows_bits_dpi_c_next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT___mem_rdata_sign_T = VL_RAND_RESET_I(8);
    vlSelf->__PVT___mem_rdata_T_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___mem_rdata_sign_T_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___mem_rdata_T_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___mem_rdata_T_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___mem_rdata_T_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___mem_rdata_T_11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___mem_rdata_T_13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rdata = VL_RAND_RESET_I(32);
}
