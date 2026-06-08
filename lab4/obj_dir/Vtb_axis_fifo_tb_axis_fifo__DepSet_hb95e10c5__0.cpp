// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

VL_INLINE_OPT void Vtb_axis_fifo_tb_axis_fifo___ico_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___ico_sequent__TOP__tb_axis_fifo__0\n"); );
    // Body
    vlSelf->__PVT__axis_fifo_inst__DOT__write = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__store_output = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    if ((1U & ((~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg)) 
               | (IData)(vlSelf->dout_0_rsc_rdy)))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__store_output = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
            = vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__read = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
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
}
