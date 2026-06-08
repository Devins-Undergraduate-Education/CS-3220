// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo__Syms.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

VL_INLINE_OPT void Vtb_axis_fifo_tb_axis_fifo___nba_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___nba_sequent__TOP__tb_axis_fifo__0\n"); );
    // Init
    VlWide<5>/*128:0*/ __Vdly__cycle_count_reg;
    VL_ZERO_W(129, __Vdly__cycle_count_reg);
    CData/*3:0*/ __Vdlyvdim0__axis_fifo_inst__DOT__mem__v0;
    __Vdlyvdim0__axis_fifo_inst__DOT__mem__v0 = 0;
    QData/*32:0*/ __Vdlyvval__axis_fifo_inst__DOT__mem__v0;
    __Vdlyvval__axis_fifo_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axis_fifo_inst__DOT__mem__v0;
    __Vdlyvset__axis_fifo_inst__DOT__mem__v0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    if (VL_UNLIKELY(((0x20U == vlSelf->__PVT__in_0_ptr) 
                     & (0x20U == vlSelf->__PVT__out_0_ptr)))) {
        VL_STOP_MT("tb_axis_fifo.v", 119, "");
    }
    __Vdly__cycle_count_reg[0U] = vlSelf->__PVT__cycle_count_reg[0U];
    __Vdly__cycle_count_reg[1U] = vlSelf->__PVT__cycle_count_reg[1U];
    __Vdly__cycle_count_reg[2U] = vlSelf->__PVT__cycle_count_reg[2U];
    __Vdly__cycle_count_reg[3U] = vlSelf->__PVT__cycle_count_reg[3U];
    __Vdly__cycle_count_reg[4U] = vlSelf->__PVT__cycle_count_reg[4U];
    __Vdlyvset__axis_fifo_inst__DOT__mem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__din_0_rsc_dat_reg = 0U;
        vlSelf->__PVT__in_0_ptr = 0U;
        vlSelf->__PVT__out_0_ptr = 0U;
    } else {
        if ((0x400U == vlSelf->__PVT__in_0_ptr)) {
            vlSelf->__PVT__in_0_ptr = 0x400U;
        } else if (((IData)(vlSelf->din_0_rsc_rdy) 
                    & (IData)(vlSelf->__PVT__din_0_rsc_vld_reg))) {
            vlSelf->__PVT__in_0_ptr = ((IData)(1U) 
                                       + vlSelf->__PVT__in_0_ptr);
            vlSelf->__PVT__din_0_rsc_dat_reg = vlSelf->__PVT__din_0_rsc_dat_all_reg
                [(0x3ffU & vlSelf->__PVT__in_0_ptr)];
        } else {
            vlSelf->__PVT__din_0_rsc_dat_reg = vlSelf->__PVT__din_0_rsc_dat_all_reg
                [(0x3ffU & vlSelf->__PVT__in_0_ptr)];
        }
        vlSelf->__PVT__out_0_ptr = ((0x400U == vlSelf->__PVT__out_0_ptr)
                                     ? 0x400U : (((IData)(vlSelf->dout_0_rsc_vld) 
                                                  & (IData)(vlSelf->__PVT__dout_0_rsc_rdy_reg))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + vlSelf->__PVT__out_0_ptr)
                                                  : vlSelf->__PVT__out_0_ptr));
    }
    __Vtemp_4[0U] = 1U;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    VL_ADD_W(5, __Vtemp_5, __Vtemp_4, vlSelf->__PVT__cycle_count_reg);
    __Vdly__cycle_count_reg[0U] = __Vtemp_5[0U];
    __Vdly__cycle_count_reg[1U] = __Vtemp_5[1U];
    __Vdly__cycle_count_reg[2U] = __Vtemp_5[2U];
    __Vdly__cycle_count_reg[3U] = __Vtemp_5[3U];
    __Vdly__cycle_count_reg[4U] = (1U & __Vtemp_5[4U]);
    if (vlSelf->__PVT__axis_fifo_inst__DOT__write) {
        __Vdlyvval__axis_fifo_inst__DOT__mem__v0 = vlSelf->__PVT__axis_fifo_inst__DOT__mem_write_data;
        __Vdlyvset__axis_fifo_inst__DOT__mem__v0 = 1U;
        __Vdlyvdim0__axis_fifo_inst__DOT__mem__v0 = 
            (0xfU & (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_addr_reg));
    }
    if (vlSelf->__PVT__axis_fifo_inst__DOT__store_output) {
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_data_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_reg;
    }
    vlSelf->din_0_rsc_dat = vlSelf->__PVT__din_0_rsc_dat_reg;
    if (vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg) {
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg = 0U;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg = 0U;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg = 0U;
    } else {
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg;
    }
    if (vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg) {
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg = 0U;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg = 0U;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg = 0U;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg = 0U;
    } else {
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next;
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg 
        = ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg)
            ? 0U : (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next));
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg 
        = ((1U & (~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg))) 
           && (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next));
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg 
        = ((1U & (~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg))) 
           && (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next));
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_write_data 
        = ((0x100000000ULL & vlSelf->__PVT__axis_fifo_inst__DOT__mem_write_data) 
           | (IData)((IData)(vlSelf->__PVT__din_0_rsc_dat_reg)));
    vlSelf->__PVT__din_0_rsc_vld_reg = ((0x400U != vlSelf->__PVT__in_0_ptr) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __Vtemp_6[0U] = 0x200U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    vlSelf->__PVT__dout_0_rsc_rdy_reg = (((0x400U != vlSelf->__PVT__out_0_ptr) 
                                          & (~ (IData)(vlSymsp->TOP.reset))) 
                                         & VL_LTE_W(5, __Vtemp_6, vlSelf->__PVT__cycle_count_reg));
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_addr_reg 
        = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next;
    vlSelf->dout_0_rsc_dat = (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_data_reg);
    if (vlSelf->__PVT__axis_fifo_inst__DOT__read) {
        vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_reg 
            = vlSelf->__PVT__axis_fifo_inst__DOT__mem
            [(0xfU & (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_addr_reg))];
    }
    vlSelf->__PVT__cycle_count_reg[0U] = __Vdly__cycle_count_reg[0U];
    vlSelf->__PVT__cycle_count_reg[1U] = __Vdly__cycle_count_reg[1U];
    vlSelf->__PVT__cycle_count_reg[2U] = __Vdly__cycle_count_reg[2U];
    vlSelf->__PVT__cycle_count_reg[3U] = __Vdly__cycle_count_reg[3U];
    vlSelf->__PVT__cycle_count_reg[4U] = __Vdly__cycle_count_reg[4U];
    vlSelf->dout_0_rsc_vld = vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    if (__Vdlyvset__axis_fifo_inst__DOT__mem__v0) {
        vlSelf->__PVT__axis_fifo_inst__DOT__mem[__Vdlyvdim0__axis_fifo_inst__DOT__mem__v0] 
            = __Vdlyvval__axis_fifo_inst__DOT__mem__v0;
    }
    vlSelf->din_0_rsc_vld = vlSelf->__PVT__din_0_rsc_vld_reg;
    vlSelf->dout_0_rsc_rdy = vlSelf->__PVT__dout_0_rsc_rdy_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_addr_reg 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next;
    vlSelf->__PVT__axis_fifo_inst__DOT__store_output = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    if ((1U & ((~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg)) 
               | (IData)(vlSelf->dout_0_rsc_rdy)))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__store_output = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
            = vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__empty = ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg) 
                                                 == (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg));
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg 
        = ((IData)(vlSymsp->TOP.reset) || (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg));
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg 
        = ((IData)(vlSymsp->TOP.reset) || (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg));
    vlSelf->__PVT__axis_fifo_inst__DOT__read = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
    if ((1U & (((~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg)) 
                & (~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__empty))) 
               & (((~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg)) 
                   | (~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg))) 
                  | (IData)(vlSelf->dout_0_rsc_rdy))))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__read = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg)));
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
            = (0x1fU & ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next) 
                        ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next), 1U)));
    } else if ((1U & ((~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg)) 
                      | (IData)(vlSelf->dout_0_rsc_rdy)))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = 0U;
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg 
        = ((IData)(vlSymsp->TOP.reset) || ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg) 
                                           | (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg)));
    vlSelf->din_0_rsc_rdy = (1U & (~ (((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg) 
                                       == ((0x18U & 
                                            ((~ ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg) 
                                                 >> 3U)) 
                                             << 3U)) 
                                           | (7U & (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg)))) 
                                      | (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg))));
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg 
        = ((IData)(vlSymsp->TOP.reset) || ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg) 
                                           | (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg)));
    vlSelf->__PVT__axis_fifo_inst__DOT__write = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg;
    if (((IData)(vlSelf->din_0_rsc_vld) & (IData)(vlSelf->din_0_rsc_rdy))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__write = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg)));
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
            = (0x1fU & ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next) 
                        ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next), 1U)));
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg 
        = vlSymsp->TOP.reset;
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg 
        = vlSymsp->TOP.reset;
}
