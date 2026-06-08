// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_burst.h for the primary calling header

#include "Vtb_axi4_ram_burst__pch.h"
#include "Vtb_axi4_ram_burst_tb_axi4_ram_burst.h"

VL_ATTR_COLD void Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_static__TOP__tb_axi4_ram_burst(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_static__TOP__tb_axi4_ram_burst\n"); );
    // Body
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf = 0ULL;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n = 1U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp = 0ULL;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf = 0ULL;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf = 0ULL;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n = 1U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp = 0ULL;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf = 0ULL;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg = 0U;
}

extern const VlWide<13>/*415:0*/ Vtb_axi4_ram_burst__ConstPool__CONST_h4a511b9d_0;
extern const VlWide<15>/*479:0*/ Vtb_axi4_ram_burst__ConstPool__CONST_hfafb0242_0;

VL_ATTR_COLD void Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_initial__TOP__tb_axi4_ram_burst(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_initial__TOP__tb_axi4_ram_burst\n"); );
    // Body
    vlSelf->axi4_tester_inst__DOT____Vxrand_hcc53a3be__0 
        = (0xffffffU & VL_RAND_RESET_I(24));
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8d93d6a6__2 
        = (0x3ffU & VL_RAND_RESET_I(10));
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8d93d6a6__1 
        = (0x3ffU & VL_RAND_RESET_I(10));
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8d93d6a6__0 
        = (0x3ffU & VL_RAND_RESET_I(10));
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm = 1U;
    VL_READMEM_N(true, 10, 1024, 0, VL_CVT_PACK_STR_NW(13, Vtb_axi4_ram_burst__ConstPool__CONST_h4a511b9d_0)
                 ,  &(vlSelf->__PVT__axi4_tester_inst__DOT__addr_U__DOT__axi4_tester_addr_rom_U__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(15, Vtb_axi4_ram_burst__ConstPool__CONST_hfafb0242_0)
                 ,  &(vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_U__DOT__axi4_tester_test_data_V_rom_U__DOT__ram)
                 , 0, ~0ULL);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vxrand_h7d28236b__0 
        = VL_RAND_RESET_Q(64);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vxrand_h8d9647ad__0 
        = (3U & VL_RAND_RESET_I(2));
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vxrand_h8d9647ad__0 
        = (3U & VL_RAND_RESET_I(2));
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vxrand_h8d94df49__0 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vxrand_h7d28236b__0 
        = VL_RAND_RESET_Q(64);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vxrand_h8d9647ad__0 
        = (3U & VL_RAND_RESET_I(2));
    vlSelf->__PVT__axi_ram_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000U, vlSelf->__PVT__axi_ram_inst__DOT__i)) {
        vlSelf->__PVT__axi_ram_inst__DOT__j = vlSelf->__PVT__axi_ram_inst__DOT__i;
        while (VL_LTS_III(32, vlSelf->__PVT__axi_ram_inst__DOT__j, 
                          ((IData)(0x80U) + vlSelf->__PVT__axi_ram_inst__DOT__i))) {
            vlSelf->__PVT__axi_ram_inst__DOT__mem[(0x3fffU 
                                                   & vlSelf->__PVT__axi_ram_inst__DOT__j)] = 0U;
            vlSelf->__PVT__axi_ram_inst__DOT__j = ((IData)(1U) 
                                                   + vlSelf->__PVT__axi_ram_inst__DOT__j);
        }
        vlSelf->__PVT__axi_ram_inst__DOT__i = ((IData)(0x80U) 
                                               + vlSelf->__PVT__axi_ram_inst__DOT__i);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_axi4_ram_burst__ConstPool__TABLE_he20e718b_0;

VL_ATTR_COLD void Vtb_axi4_ram_burst_tb_axi4_ram_burst___stl_sequent__TOP__tb_axi4_ram_burst__0(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_burst_tb_axi4_ram_burst___stl_sequent__TOP__tb_axi4_ram_burst__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->correct_V_ap_vld = (1U & (vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 0x17U));
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0 
        = (IData)((0U != (0x300000U & vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
    vlSelf->correct_V = vlSelf->__PVT__axi4_tester_inst__DOT__storemerge_reg_199;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
           & (0U == (IData)((vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                             >> 0x20U))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
           & (IData)((vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                      >> 0x3fU)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect 
        = (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
           == (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
               >> 0xcU));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect 
        = (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
           == (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
               >> 0xcU));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata 
        = (((QData)((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_reg)) 
            << 0x22U) | (QData)((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_reg)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata 
        = (((QData)((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf)) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf)));
    vlSelf->__PVT__axi_ram_inst__DOT__mem_wr_en = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__mem_rd_en = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp)) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0 
        = (0x3ffU & ((0x200000U & vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                      ? (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__i2_0_reg_188)
                      : ((0x100000U & vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                          ? (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335)
                          : (IData)(vlSelf->axi4_tester_inst__DOT____Vxrand_h8d93d6a6__1))));
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__read_size_reg;
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__read_burst_reg;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awaddr_tmp 
        = ((0U == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
            ? vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
            : (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
               + VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)), 2U)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__araddr_tmp 
        = ((0U == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
            ? vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
            : (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
               + VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)), 2U)));
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__read_id_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_state_reg)))) {
        if (((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_reg) 
             & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) {
            vlSelf->__PVT__axi_ram_inst__DOT__read_size_next = 2U;
            vlSelf->__PVT__axi_ram_inst__DOT__read_burst_next = 1U;
            vlSelf->__PVT__axi_ram_inst__DOT__read_id_next 
                = vlSelf->__PVT__s_axi_arid;
        }
    }
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_reg;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_reg;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_next = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_next = 0U;
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n) 
           & (vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
              >> 4U));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n) 
           & (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg) 
           & (~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready)));
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg;
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY 
        = ((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 9U) & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp) 
           & ((IData)((0U != (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))) 
              & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp)));
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg))) {
            if (((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_reg) 
                 & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy))) {
                vlSelf->__PVT__axi_ram_inst__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg)) 
                     | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy))) {
                    if ((1U & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) 
                               | (~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg))))) {
                        vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_next = 1U;
                        vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_next 
                            = vlSelf->__PVT__axi_ram_inst__DOT__write_id_reg;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg))) {
            if ((1U & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) 
                       | (~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg))))) {
                vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_next = 1U;
                vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_next 
                    = vlSelf->__PVT__axi_ram_inst__DOT__write_id_reg;
            }
        }
    }
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__read_addr_reg;
    if (vlSelf->__PVT__axi_ram_inst__DOT__read_state_reg) {
        if (vlSelf->__PVT__axi_ram_inst__DOT__read_state_reg) {
            if ((1U & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n) 
                       | (~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg))))) {
                vlSelf->__PVT__axi_ram_inst__DOT__mem_rd_en = 1U;
                vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_next = 1U;
                vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_next 
                    = vlSelf->__PVT__axi_ram_inst__DOT__read_id_reg;
                if ((0U >= (IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg))) {
                    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_next = 1U;
                    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_next = 1U;
                } else {
                    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_next = 0U;
                }
                if ((0U < (IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg))) {
                    vlSelf->__PVT__axi_ram_inst__DOT__read_count_next 
                        = (0xffU & ((IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg) 
                                    - (IData)(1U)));
                    if ((0U != (IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_burst_reg))) {
                        vlSelf->__PVT__axi_ram_inst__DOT__read_addr_next 
                            = (0xffffU & ((IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                          + ((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_size_reg))));
                    }
                }
            }
            vlSelf->__PVT__axi_ram_inst__DOT__read_state_next 
                = ((1U & (~ ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n) 
                             | (~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg))))) 
                   || (0U < (IData)(vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg)));
        }
    } else {
        vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_reg) 
             & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) {
            vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_next = 0U;
            vlSelf->__PVT__axi_ram_inst__DOT__read_count_next 
                = vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf;
            vlSelf->__PVT__axi_ram_inst__DOT__read_addr_next 
                = (0xffffU & vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf);
            vlSelf->__PVT__axi_ram_inst__DOT__read_state_next = 1U;
        } else {
            vlSelf->__PVT__axi_ram_inst__DOT__read_state_next = 0U;
        }
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID 
        = ((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 0xcU) & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY 
        = (1U & ((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                  >> 0x13U) & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)));
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID 
        = ((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 3U) & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
    vlSelf->__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2 
        = (vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0 
           == vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_q0);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect 
        = (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
           == (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
               >> 0xcU));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect 
        = (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
           == (vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
               >> 0xcU));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt) 
           == (0x3fU & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf) 
                        >> 4U)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t)) 
                    & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_reg)) 
                    & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt) 
           == (0x3fU & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf) 
                        >> 4U)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                  & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
              & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy 
        = ((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_reg) 
           & (0U == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt)));
    vlSelf->__PVT__s_axi_awvalid = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy) 
                                    & (0U == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__wnext 
        = (0xffU & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                     ? ((0xffU == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                     : (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__wnext 
        = (0xffU & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                     ? ((0xffU == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                     : (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY)) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match));
    __Vtableidx5 = (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                     << 4U) | (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID) 
                                           << 2U) | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next 
        = Vtb_axi4_ram_burst__ConstPool__TABLE_he20e718b_0
        [__Vtableidx5];
    __Vtableidx7 = (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY) 
                     << 4U) | (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                                           << 2U) | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next 
        = Vtb_axi4_ram_burst__ConstPool__TABLE_he20e718b_0
        [__Vtableidx7];
    __Vtableidx3 = (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                     << 4U) | (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID) 
                                           << 2U) | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next 
        = Vtb_axi4_ram_burst__ConstPool__TABLE_he20e718b_0
        [__Vtableidx3];
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_NS_fsm 
        = (((((((((1U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                  | (2U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                 | (4U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                | (8U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
               | (0x10U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
              | (0x20U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
             | (0x40U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
            | (0x80U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm))
            ? ((1U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                ? 2U : ((2U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                         ? (((0x400U == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__i_0_reg_166)) 
                             & (vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                >> 1U)) ? 0x400U : 4U)
                         : ((4U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                             ? 8U : ((8U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                      ? (((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                           >> 3U) & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t))
                                          ? 0x10U : 8U)
                                      : ((0x10U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                          ? (((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                               >> 4U) 
                                              & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n))
                                              ? 0x20U
                                              : 0x10U)
                                          : ((0x20U 
                                              == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                              ? 0x40U
                                              : ((0x40U 
                                                  == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? 0x80U
                                                  : 0x100U)))))))
            : (((((((((0x100U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                      | (0x200U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                     | (0x400U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                    | (0x800U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                   | (0x1000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                  | (0x2000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                 | (0x4000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                | (0x8000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm))
                ? ((0x100U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                    ? 0x200U : ((0x200U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                 ? (((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 9U) & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID))
                                     ? 2U : 0x200U)
                                 : ((0x400U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                     ? (((0x400U == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__i1_0_reg_177)) 
                                         & (vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                            >> 0xaU))
                                         ? 0x200000U
                                         : 0x800U) : 
                                    ((0x800U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                      ? 0x1000U : (
                                                   (0x1000U 
                                                    == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                    ? 
                                                   (((vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t))
                                                     ? 0x2000U
                                                     : 0x1000U)
                                                    : 
                                                   ((0x2000U 
                                                     == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                     ? 0x4000U
                                                     : 
                                                    ((0x4000U 
                                                      == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                      ? 0x8000U
                                                      : 0x10000U)))))))
                : (((((((((0x10000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                          | (0x20000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                         | (0x40000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                        | (0x80000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                       | (0x100000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                      | (0x200000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                     | (0x400000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                    | (0x800000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm))
                    ? ((0x10000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                        ? 0x20000U : ((0x20000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                       ? 0x40000U : 
                                      ((0x40000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                        ? 0x80000U : 
                                       ((0x80000U == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? ((1U & (
                                                   (vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                    >> 0x13U) 
                                                   & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)))
                                             ? 0x100000U
                                             : 0x80000U)
                                         : ((0x100000U 
                                             == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? 0x400U
                                             : ((0x200000U 
                                                 == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                 ? 
                                                (((0x400U 
                                                   == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__i2_0_reg_188)) 
                                                  & (vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                     >> 0x15U))
                                                  ? 0x800000U
                                                  : 0x400000U)
                                                 : 
                                                ((0x400000U 
                                                  == vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2)) 
                                                      & (vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                         >> 0x16U)))
                                                   ? 0x800000U
                                                   : 0x200000U)
                                                  : 1U)))))))
                    : vlSelf->axi4_tester_inst__DOT____Vxrand_hcc53a3be__0)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid) 
           & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data) 
              & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
            ? (0xfU & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf))
            : 0xfU);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect 
        = ((~ ((~ ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                   & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r))) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                  & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
              & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                 & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready))));
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__write_burst_reg;
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__write_size_reg;
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__write_id_reg;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_next = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg;
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 0U;
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_next 
        = vlSelf->__PVT__axi_ram_inst__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg))) {
        vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_reg) 
             & (IData)(vlSelf->__PVT__s_axi_awvalid))) {
            vlSelf->__PVT__axi_ram_inst__DOT__write_burst_next = 1U;
            vlSelf->__PVT__axi_ram_inst__DOT__write_size_next = 2U;
            vlSelf->__PVT__axi_ram_inst__DOT__write_id_next 
                = vlSelf->__PVT__s_axi_awid;
            vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_next = 1U;
            vlSelf->__PVT__axi_ram_inst__DOT__write_count_next 
                = vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf;
            vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = 0U;
            vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 1U;
            vlSelf->__PVT__axi_ram_inst__DOT__write_addr_next 
                = (0xffffU & vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf);
        } else {
            vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg))) {
        vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_reg) 
             & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy))) {
            if (((0U == (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg)) 
                 | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy))) {
                vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_next = 0U;
                if ((1U & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) 
                           | (~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg))))) {
                    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = 1U;
                    vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 0U;
                } else {
                    vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 2U;
                }
            } else {
                vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 1U;
            }
            if ((0U < (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg))) {
                vlSelf->__PVT__axi_ram_inst__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((0U != (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_burst_reg))) {
                    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg))) {
        if ((1U & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) 
                   | (~ (IData)(vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg))))) {
            vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = 1U;
            vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 0U;
        } else {
            vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = 2U;
        }
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n) 
           & ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid)) 
              | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2 
        = (((IData)((vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                     >> 0x22U)) & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid)) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n) 
           & ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid)) 
              | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst 
        = (((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len) 
            == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt)) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect) 
                        & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect))) 
                    & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
           & ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
              & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect 
        = ((~ ((~ ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                   & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext 
        = (0xffU & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop)
                     ? ((0xffU == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr)))
                     : (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2)) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext 
        = (0xffU & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop)
                     ? ((0xffU == (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr)))
                     : (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst)) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq) 
           & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
              | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect) 
                        & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect))) 
                    & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling))));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read)) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read 
        = ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq) 
           & ((IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
              | (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf)));
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read)) 
               & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid))) 
           & (IData)(vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
}

VL_ATTR_COLD void Vtb_axi4_ram_burst_tb_axi4_ram_burst___ctor_var_reset(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_burst_tb_axi4_ram_burst___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_awid = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_arid = VL_RAND_RESET_I(8);
    vlSelf->correct_V = VL_RAND_RESET_I(1);
    vlSelf->correct_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->axi4_tester_inst__DOT____Vxrand_hcc53a3be__0 = VL_RAND_RESET_I(24);
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8d93d6a6__2 = VL_RAND_RESET_I(10);
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8d93d6a6__1 = VL_RAND_RESET_I(10);
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8d93d6a6__0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_RUSER = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_BUSER = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__addr_q0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_q0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm = VL_RAND_RESET_I(24);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__reg_213 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_reg_301 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_1_reg_330 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_addr_1_1_reg_351 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_2_reg_359 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_0_reg_166 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__i1_0_reg_177 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__i2_0_reg_188 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__storemerge_reg_199 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_NS_fsm = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__addr_U__DOT__axi4_tester_addr_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_U__DOT__axi4_tester_test_data_V_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__m = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__calc_data_width__Vstatic__y = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__m = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awaddr_tmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt = VL_RAND_RESET_I(20);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vxrand_h7d28236b__0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vlvbound_hcbc101d0__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__mem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__wnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vxrand_h8d9647ad__0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vlvbound_h00160a68__0 = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vxrand_h8d9647ad__0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vlvbound_h8e8175aa__0 = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vxrand_h8d94df49__0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vlvbound_hb1ce6693__0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__calc_data_width__Vstatic__y = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__m = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__araddr_tmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt = VL_RAND_RESET_I(20);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_resp_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__len_cnt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__burst_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vxrand_h7d28236b__0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vlvbound_hcbc101d0__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__mem[__Vi0] = VL_RAND_RESET_Q(35);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__wnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vxrand_h8d9647ad__0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vlvbound_h00160a68__0 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__mem_wr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_reg = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_reg = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__axi_ram_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__j = VL_RAND_RESET_I(32);
}
