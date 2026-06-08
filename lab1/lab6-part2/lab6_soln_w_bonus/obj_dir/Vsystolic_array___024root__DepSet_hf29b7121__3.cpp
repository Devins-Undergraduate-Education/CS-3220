// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "Vsystolic_array__pch.h"
#include "Vsystolic_array___024root.h"

VL_INLINE_OPT void Vsystolic_array___024root___nba_sequent__TOP__6(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][8U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][7U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][6U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][5U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[4U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][0xfU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][0xeU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][0xdU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][0xcU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][0xbU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][0xaU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][9U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][8U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][7U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][6U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][5U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[3U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][0xfU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][0xeU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][0xdU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][0xcU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][0xbU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][0xaU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][9U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][8U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][7U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][6U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][5U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[2U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][0xfU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][0xeU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][0xdU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][0xcU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][0xbU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][0xaU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][9U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][8U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][7U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][6U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][5U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[1U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][0xfU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][0xeU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][0xdU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][0xcU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][0xbU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][0xaU] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][9U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][8U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][7U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][6U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][5U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_en 
        = (0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__bypass_counter));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty 
        = ((0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr)) 
           == (0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)));
    vlSelf->systolic_array__DOT__bypass_data_out[0U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__psum_out;
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][0U] 
        = (1U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][1U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 1U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][2U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 2U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][3U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 3U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][4U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 4U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][5U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 5U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][6U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 6U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][7U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 7U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][8U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 8U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][9U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 9U));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][0xaU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 0xaU));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][0xbU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 0xbU));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][0xcU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 0xcU));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][0xdU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 0xdU));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][0xeU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 0xeU));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[0U][0xfU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 0xfU));
    vlSelf->systolic_array__DOT__rst = vlSelf->rst_in;
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][0U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][0U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][1U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][1U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][2U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][2U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][3U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][3U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][4U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][4U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][5U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][5U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][6U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][6U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][7U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][7U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][8U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][8U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][9U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][9U];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][0xaU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][0xaU];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][0xbU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][0xbU];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][0xcU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][0xcU];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][0xdU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][0xdU];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][0xeU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][0xeU];
    vlSelf->systolic_array__DOT__mac_col_data_in[1U][0xfU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [0U][0xfU];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][0U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][0U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][1U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][1U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][2U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][2U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][3U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][3U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][4U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][4U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][5U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][5U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][6U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][6U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][7U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][7U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][8U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][8U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][9U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][9U];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][0xaU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][0xaU];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][0xbU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][0xbU];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][0xcU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][0xcU];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][0xdU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][0xdU];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][0xeU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][0xeU];
    vlSelf->systolic_array__DOT__mac_col_data_in[2U][0xfU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [1U][0xfU];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][0U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][0U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][1U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][1U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][2U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][2U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][3U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][3U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][4U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][4U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][5U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][5U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][6U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][6U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][7U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][7U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][8U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][8U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][9U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][9U];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][0xaU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][0xaU];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][0xbU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][0xbU];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][0xcU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][0xcU];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][0xdU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][0xdU];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][0xeU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][0xeU];
    vlSelf->systolic_array__DOT__mac_col_data_in[3U][0xfU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [2U][0xfU];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][0U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][0U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][1U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][1U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][2U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][2U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][3U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][3U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][4U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][4U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][5U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][5U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][6U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][6U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][7U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][7U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][8U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][8U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][9U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][9U];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][0xaU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][0xaU];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][0xbU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][0xbU];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][0xcU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][0xcU];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][0xdU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][0xdU];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][0xeU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][0xeU];
    vlSelf->systolic_array__DOT__mac_col_data_in[4U][0xfU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [3U][0xfU];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][0U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][0U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][1U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][1U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][2U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][2U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][3U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][3U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][4U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][4U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][5U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][5U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][6U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][6U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][7U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][7U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][8U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][8U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][9U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][9U];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][0xaU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][0xaU];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][0xbU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][0xbU];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][0xcU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][0xcU];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][0xdU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][0xdU];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][0xeU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][0xeU];
    vlSelf->systolic_array__DOT__mac_col_data_in[5U][0xfU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [4U][0xfU];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][0U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][0U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][1U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][1U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][2U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][2U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][3U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][3U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][4U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][4U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][5U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][5U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][6U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][6U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][7U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][7U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][8U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][8U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][9U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][9U];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][0xaU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][0xaU];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][0xbU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][0xbU];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][0xcU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][0xcU];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][0xdU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][0xdU];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][0xeU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][0xeU];
    vlSelf->systolic_array__DOT__mac_col_data_in[6U][0xfU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [5U][0xfU];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][0U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][0U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][1U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][1U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][2U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][2U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][3U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][3U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][4U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][4U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][5U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][5U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][6U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][6U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][7U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][7U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][8U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][8U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][9U] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][9U];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][0xaU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][0xaU];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][0xbU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][0xbU];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][0xcU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][0xcU];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][0xdU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][0xdU];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][0xeU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][0xeU];
    vlSelf->systolic_array__DOT__mac_col_data_in[7U][0xfU] 
        = vlSelf->systolic_array__DOT__mac_col_data_out
        [6U][0xfU];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][0U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][0U];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][1U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][1U];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][2U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][2U];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][3U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][3U];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][4U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][4U];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][5U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][5U];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][6U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][6U];
    vlSelf->systolic_array__DOT__mac_row_data_in[1U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[2U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [1U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[3U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [2U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[4U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [3U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[5U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [4U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[6U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [5U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[7U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [6U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[8U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [7U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[9U][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [8U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xaU][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [9U][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xbU][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xaU][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xcU][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xbU][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xdU][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xcU][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xeU][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xdU][7U];
    vlSelf->systolic_array__DOT__mac_row_data_in[0xfU][7U] 
        = vlSelf->systolic_array__DOT__mac_row_data_out
        [0xeU][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][0U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][0U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][1U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][1U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][2U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][2U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][3U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][3U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][4U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][4U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][5U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][5U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][6U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][6U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][7U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][8U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][8U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][9U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][9U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][0xaU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][0xaU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][0xbU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][0xbU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][0xcU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][0xcU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][0xdU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][0xdU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][0xeU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][0xeU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[1U][0xfU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [0U][0xfU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][0U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][0U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][1U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][1U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][2U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][2U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][3U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][3U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][4U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][4U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][5U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][5U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][6U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][6U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][7U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][8U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][8U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][9U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][9U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][0xaU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][0xaU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][0xbU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][0xbU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][0xcU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][0xcU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][0xdU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][0xdU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][0xeU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][0xeU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[2U][0xfU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [1U][0xfU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][0U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][0U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][1U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][1U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][2U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][2U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][3U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][3U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][4U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][4U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][5U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][5U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][6U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][6U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][7U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][8U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][8U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][9U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][9U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][0xaU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][0xaU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][0xbU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][0xbU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][0xcU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][0xcU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][0xdU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][0xdU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][0xeU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][0xeU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[3U][0xfU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [2U][0xfU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][0U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][0U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][1U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][1U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][2U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][2U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][3U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][3U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][4U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][4U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][5U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][5U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][6U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][6U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][7U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][8U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][8U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][9U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][9U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][0xaU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][0xaU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][0xbU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][0xbU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][0xcU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][0xcU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][0xdU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][0xdU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][0xeU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][0xeU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[4U][0xfU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [3U][0xfU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][0U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][0U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][1U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][1U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][2U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][2U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][3U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][3U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][4U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][4U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][5U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][5U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][6U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][6U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][7U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][8U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][8U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][9U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][9U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][0xaU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][0xaU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][0xbU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][0xbU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][0xcU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][0xcU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][0xdU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][0xdU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][0xeU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][0xeU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[5U][0xfU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [4U][0xfU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][0U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][0U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][1U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][1U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][2U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][2U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][3U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][3U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][4U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][4U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][5U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][5U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][6U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][6U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][7U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][8U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][8U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][9U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][9U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][0xaU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][0xaU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][0xbU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][0xbU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][0xcU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][0xcU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][0xdU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][0xdU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][0xeU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][0xeU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[6U][0xfU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [5U][0xfU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][0U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][0U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][1U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][1U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][2U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][2U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][3U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][3U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][4U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][4U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][5U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][5U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][6U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][6U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][7U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][7U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][8U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][8U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][9U] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][9U];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][0xaU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][0xaU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][0xbU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][0xbU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][0xcU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][0xcU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][0xdU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][0xdU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][0xeU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][0xeU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[7U][0xfU] 
        = vlSelf->systolic_array__DOT__rst_accumulator_out
        [6U][0xfU];
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][0U] 
        = (1U & (IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][1U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 1U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][2U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 2U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][3U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 3U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][4U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 4U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][5U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 5U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][6U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 6U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][7U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 7U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][8U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 8U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][9U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 9U));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][0xaU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 0xaU));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][0xbU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 0xbU));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][0xcU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 0xcU));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][0xdU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 0xdU));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][0xeU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 0xeU));
    vlSelf->systolic_array__DOT__rst_accumulator_in[0U][0xfU] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 0xfU));
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][0U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][0U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][1U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][1U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][2U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][2U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][3U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][3U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][4U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][4U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][5U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][5U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][6U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][6U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][7U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][7U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][8U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][8U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][9U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][9U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][0xaU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][0xaU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][0xbU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][0xbU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][0xcU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][0xcU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][0xdU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][0xdU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][0xeU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][0xeU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[1U][0xfU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [0U][0xfU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][0U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][0U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][1U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][1U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][2U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][2U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][3U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][3U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][4U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][4U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][5U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][5U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][6U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][6U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][7U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][7U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][8U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][8U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][9U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][9U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][0xaU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][0xaU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][0xbU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][0xbU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][0xcU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][0xcU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][0xdU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][0xdU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][0xeU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][0xeU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[2U][0xfU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [1U][0xfU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][0U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][0U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][1U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][1U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][2U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][2U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][3U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][3U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][4U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][4U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][5U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][5U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][6U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][6U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][7U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][7U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][8U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][8U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][9U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][9U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][0xaU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][0xaU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][0xbU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][0xbU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][0xcU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][0xcU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][0xdU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][0xdU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][0xeU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][0xeU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[3U][0xfU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [2U][0xfU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][0U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][0U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][1U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][1U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][2U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][2U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][3U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][3U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][4U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][4U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][5U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][5U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][6U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][6U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][7U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][7U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][8U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][8U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][9U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][9U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][0xaU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][0xaU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][0xbU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][0xbU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][0xcU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][0xcU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][0xdU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][0xdU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][0xeU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][0xeU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[4U][0xfU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [3U][0xfU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][0U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][0U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][1U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][1U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][2U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][2U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][3U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][3U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][4U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][4U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][5U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][5U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][6U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][6U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][7U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][7U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][8U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][8U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][9U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][9U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][0xaU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][0xaU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][0xbU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][0xbU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][0xcU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][0xcU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][0xdU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][0xdU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][0xeU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][0xeU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[5U][0xfU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [4U][0xfU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][0U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][0U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][1U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][1U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][2U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][2U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][3U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][3U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][4U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][4U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][5U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][5U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][6U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][6U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][7U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][7U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][8U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][8U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][9U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][9U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][0xaU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][0xaU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][0xbU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][0xbU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][0xcU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][0xcU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][0xdU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][0xdU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][0xeU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][0xeU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[6U][0xfU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [5U][0xfU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][0U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][0U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][1U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][1U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][2U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][2U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][3U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][3U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][4U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][4U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][5U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][5U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][6U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][6U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][7U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][7U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][8U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][8U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][9U] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][9U];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][0xaU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][0xaU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][0xbU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][0xbU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][0xcU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][0xcU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][0xdU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][0xdU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][0xeU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][0xeU];
    vlSelf->systolic_array__DOT__stream_out_rdy_in[7U][0xfU] 
        = vlSelf->systolic_array__DOT__stream_out_rdy_out
        [6U][0xfU];
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_empty 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full 
        = ((~ (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    vlSelf->systolic_array__DOT__row_data_out_tmp = 
        ((0xffffffffffff0000ULL & vlSelf->systolic_array__DOT__row_data_out_tmp) 
         | (IData)((IData)(((vlSelf->systolic_array__DOT__bypass_data_out
                             [1U][0U] << 8U) | vlSelf->systolic_array__DOT__bypass_data_out
                            [0U][0U]))));
    vlSelf->systolic_array__DOT__row_data_out_tmp = 
        ((0xffffffff0000ffffULL & vlSelf->systolic_array__DOT__row_data_out_tmp) 
         | ((QData)((IData)(((vlSelf->systolic_array__DOT__bypass_data_out
                              [3U][0U] << 8U) | vlSelf->systolic_array__DOT__bypass_data_out
                             [2U][0U]))) << 0x10U));
    vlSelf->systolic_array__DOT__row_data_out_tmp = 
        ((0xffff0000ffffffffULL & vlSelf->systolic_array__DOT__row_data_out_tmp) 
         | ((QData)((IData)(((vlSelf->systolic_array__DOT__bypass_data_out
                              [5U][0U] << 8U) | vlSelf->systolic_array__DOT__bypass_data_out
                             [4U][0U]))) << 0x20U));
    vlSelf->systolic_array__DOT__row_data_out_tmp = 
        ((0xffffffffffffULL & vlSelf->systolic_array__DOT__row_data_out_tmp) 
         | ((QData)((IData)(((vlSelf->systolic_array__DOT__bypass_data_out
                              [7U][0U] << 8U) | vlSelf->systolic_array__DOT__bypass_data_out
                             [6U][0U]))) << 0x30U));
    vlSelf->systolic_array__DOT__bypass_data_in[0U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[0U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [0U][0x10U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[1U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [1U][0x10U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[2U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [2U][0x10U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[3U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [3U][0x10U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[4U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [4U][0x10U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[5U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [5U][0x10U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[6U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [6U][0x10U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][0U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][1U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][1U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][2U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][2U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][3U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][3U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][4U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][4U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][5U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][5U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][6U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][6U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][7U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][7U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][8U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][8U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][9U];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][9U] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][0xaU];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][0xaU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][0xbU];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][0xbU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][0xcU];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][0xcU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][0xdU];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][0xdU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][0xeU];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][0xeU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][0xfU];
    vlSelf->systolic_array__DOT__bypass_data_in[7U][0xfU] 
        = vlSelf->systolic_array__DOT__bypass_data_out
        [7U][0x10U];
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [0U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [1U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [2U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [3U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [4U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [5U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [6U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][4U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][5U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][0xaU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][0xbU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][0xcU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][0xdU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][0xeU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__adder_in_B 
        = (vlSelf->systolic_array__DOT__rst_accumulator_in
           [7U][0xfU] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[7U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [7U][0U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[6U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [6U][0U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[5U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [5U][0U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[4U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [4U][0U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[3U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [3U][0U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[2U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [2U][0U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[1U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [1U][0U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][0xfU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][0xfU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][0xeU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][0xeU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][0xdU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][0xdU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][0xcU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][0xcU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][0xbU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][0xbU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][0xaU] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][0xaU]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][9U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][9U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][8U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][8U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][7U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][7U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][6U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][6U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][5U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][5U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][4U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][4U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][3U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][3U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][2U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][2U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][1U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][1U]);
    vlSelf->systolic_array__DOT__mac_array_full_flag[0U][0U] 
        = ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__fifo_full) 
           & vlSelf->systolic_array__DOT__stream_out_rdy_in
           [0U][0U]);
    vlSelf->row_data_out = vlSelf->systolic_array__DOT__row_data_out_tmp;
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__4__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__5__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__6__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__5__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__10__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__11__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__12__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__13__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__14__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__15__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                       [0U]
                                                       [1U] 
                                                       << 1U) 
                                                      | vlSelf->systolic_array__DOT__mac_array_full_flag
                                                      [0U]
                                                      [0U]));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xfffffff3U 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xfffffffcU 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [0U]
                                                          [3U] 
                                                          << 3U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [0U]
                                                            [2U] 
                                                            << 2U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xffffffcfU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xfffffff0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [0U]
                                                          [5U] 
                                                          << 5U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [0U]
                                                            [4U] 
                                                            << 4U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xffffff3fU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xffffffc0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [0U]
                                                          [7U] 
                                                          << 7U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [0U]
                                                            [6U] 
                                                            << 6U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xfffffcffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xffffff00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [0U]
                                                          [9U] 
                                                          << 9U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [0U]
                                                            [8U] 
                                                            << 8U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xfffff3ffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xfffffc00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [0U]
                                                          [0xbU] 
                                                          << 0xbU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [0U]
                                                            [0xaU] 
                                                            << 0xaU))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xffffcfffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xfffff000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [0U]
                                                          [0xdU] 
                                                          << 0xdU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [0U]
                                                            [0xcU] 
                                                            << 0xcU))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xffff3fffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xffffc000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [0U]
                                                          [0xfU] 
                                                          << 0xfU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [0U]
                                                            [0xeU] 
                                                            << 0xeU))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xfffcffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xffff0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [1U] 
                                                          << 0x11U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [0U] 
                                                            << 0x10U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xfff3ffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xfffc0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [3U] 
                                                          << 0x13U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [2U] 
                                                            << 0x12U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xffcfffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xfff00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [5U] 
                                                          << 0x15U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [4U] 
                                                            << 0x14U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xff3fffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xffc00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [7U] 
                                                          << 0x17U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [6U] 
                                                            << 0x16U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xfcffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [9U] 
                                                          << 0x19U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [8U] 
                                                            << 0x18U))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xf3ffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xfc000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [0xbU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [0xaU] 
                                                            << 0x1aU))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0xcfffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xf0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [0xdU] 
                                                          << 0x1dU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [0xcU] 
                                                            << 0x1cU))));
    vlSelf->systolic_array__DOT__flat_array[0U] = (
                                                   (0x3fffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[0U]) 
                                                   | (0xc0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [1U]
                                                          [0xfU] 
                                                          << 0x1fU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [1U]
                                                            [0xeU] 
                                                            << 0x1eU))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                       [2U]
                                                       [1U] 
                                                       << 1U) 
                                                      | vlSelf->systolic_array__DOT__mac_array_full_flag
                                                      [2U]
                                                      [0U]));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xfffffff3U 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xfffffffcU 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [2U]
                                                          [3U] 
                                                          << 3U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [2U]
                                                            [2U] 
                                                            << 2U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xffffffcfU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xfffffff0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [2U]
                                                          [5U] 
                                                          << 5U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [2U]
                                                            [4U] 
                                                            << 4U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xffffff3fU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xffffffc0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [2U]
                                                          [7U] 
                                                          << 7U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [2U]
                                                            [6U] 
                                                            << 6U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xfffffcffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xffffff00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [2U]
                                                          [9U] 
                                                          << 9U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [2U]
                                                            [8U] 
                                                            << 8U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xfffff3ffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xfffffc00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [2U]
                                                          [0xbU] 
                                                          << 0xbU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [2U]
                                                            [0xaU] 
                                                            << 0xaU))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xffffcfffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xfffff000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [2U]
                                                          [0xdU] 
                                                          << 0xdU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [2U]
                                                            [0xcU] 
                                                            << 0xcU))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xffff3fffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xffffc000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [2U]
                                                          [0xfU] 
                                                          << 0xfU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [2U]
                                                            [0xeU] 
                                                            << 0xeU))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xfffcffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xffff0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [1U] 
                                                          << 0x11U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [0U] 
                                                            << 0x10U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xfff3ffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xfffc0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [3U] 
                                                          << 0x13U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [2U] 
                                                            << 0x12U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xffcfffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xfff00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [5U] 
                                                          << 0x15U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [4U] 
                                                            << 0x14U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xff3fffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xffc00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [7U] 
                                                          << 0x17U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [6U] 
                                                            << 0x16U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xfcffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [9U] 
                                                          << 0x19U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [8U] 
                                                            << 0x18U))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xf3ffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xfc000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [0xbU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [0xaU] 
                                                            << 0x1aU))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0xcfffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xf0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [0xdU] 
                                                          << 0x1dU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [0xcU] 
                                                            << 0x1cU))));
    vlSelf->systolic_array__DOT__flat_array[1U] = (
                                                   (0x3fffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | (0xc0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [3U]
                                                          [0xfU] 
                                                          << 0x1fU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [3U]
                                                            [0xeU] 
                                                            << 0x1eU))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                       [4U]
                                                       [1U] 
                                                       << 1U) 
                                                      | vlSelf->systolic_array__DOT__mac_array_full_flag
                                                      [4U]
                                                      [0U]));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xfffffff3U 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xfffffffcU 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [4U]
                                                          [3U] 
                                                          << 3U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [4U]
                                                            [2U] 
                                                            << 2U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xffffffcfU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xfffffff0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [4U]
                                                          [5U] 
                                                          << 5U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [4U]
                                                            [4U] 
                                                            << 4U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xffffff3fU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xffffffc0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [4U]
                                                          [7U] 
                                                          << 7U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [4U]
                                                            [6U] 
                                                            << 6U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xfffffcffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xffffff00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [4U]
                                                          [9U] 
                                                          << 9U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [4U]
                                                            [8U] 
                                                            << 8U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xfffff3ffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xfffffc00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [4U]
                                                          [0xbU] 
                                                          << 0xbU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [4U]
                                                            [0xaU] 
                                                            << 0xaU))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xffffcfffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xfffff000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [4U]
                                                          [0xdU] 
                                                          << 0xdU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [4U]
                                                            [0xcU] 
                                                            << 0xcU))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xffff3fffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xffffc000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [4U]
                                                          [0xfU] 
                                                          << 0xfU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [4U]
                                                            [0xeU] 
                                                            << 0xeU))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xfffcffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xffff0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [1U] 
                                                          << 0x11U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [0U] 
                                                            << 0x10U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xfff3ffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xfffc0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [3U] 
                                                          << 0x13U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [2U] 
                                                            << 0x12U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xffcfffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xfff00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [5U] 
                                                          << 0x15U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [4U] 
                                                            << 0x14U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xff3fffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xffc00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [7U] 
                                                          << 0x17U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [6U] 
                                                            << 0x16U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xfcffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [9U] 
                                                          << 0x19U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [8U] 
                                                            << 0x18U))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xf3ffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xfc000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [0xbU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [0xaU] 
                                                            << 0x1aU))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0xcfffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xf0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [0xdU] 
                                                          << 0x1dU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [0xcU] 
                                                            << 0x1cU))));
    vlSelf->systolic_array__DOT__flat_array[2U] = (
                                                   (0x3fffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | (0xc0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [5U]
                                                          [0xfU] 
                                                          << 0x1fU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [5U]
                                                            [0xeU] 
                                                            << 0x1eU))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                       [6U]
                                                       [1U] 
                                                       << 1U) 
                                                      | vlSelf->systolic_array__DOT__mac_array_full_flag
                                                      [6U]
                                                      [0U]));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xfffffff3U 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xfffffffcU 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [6U]
                                                          [3U] 
                                                          << 3U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [6U]
                                                            [2U] 
                                                            << 2U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xffffffcfU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xfffffff0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [6U]
                                                          [5U] 
                                                          << 5U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [6U]
                                                            [4U] 
                                                            << 4U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xffffff3fU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xffffffc0U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [6U]
                                                          [7U] 
                                                          << 7U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [6U]
                                                            [6U] 
                                                            << 6U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xfffffcffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xffffff00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [6U]
                                                          [9U] 
                                                          << 9U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [6U]
                                                            [8U] 
                                                            << 8U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xfffff3ffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xfffffc00U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [6U]
                                                          [0xbU] 
                                                          << 0xbU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [6U]
                                                            [0xaU] 
                                                            << 0xaU))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xffffcfffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xfffff000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [6U]
                                                          [0xdU] 
                                                          << 0xdU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [6U]
                                                            [0xcU] 
                                                            << 0xcU))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xffff3fffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xffffc000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [6U]
                                                          [0xfU] 
                                                          << 0xfU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [6U]
                                                            [0xeU] 
                                                            << 0xeU))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xfffcffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xffff0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [1U] 
                                                          << 0x11U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [0U] 
                                                            << 0x10U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xfff3ffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xfffc0000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [3U] 
                                                          << 0x13U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [2U] 
                                                            << 0x12U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xffcfffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xfff00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [5U] 
                                                          << 0x15U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [4U] 
                                                            << 0x14U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xff3fffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xffc00000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [7U] 
                                                          << 0x17U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [6U] 
                                                            << 0x16U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xfcffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [9U] 
                                                          << 0x19U) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [8U] 
                                                            << 0x18U))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xf3ffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xfc000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [0xbU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [0xaU] 
                                                            << 0x1aU))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0xcfffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xf0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [0xdU] 
                                                          << 0x1dU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [0xcU] 
                                                            << 0x1cU))));
    vlSelf->systolic_array__DOT__flat_array[3U] = (
                                                   (0x3fffffffU 
                                                    & vlSelf->systolic_array__DOT__flat_array[3U]) 
                                                   | (0xc0000000U 
                                                      & ((vlSelf->systolic_array__DOT__mac_array_full_flag
                                                          [7U]
                                                          [0xfU] 
                                                          << 0x1fU) 
                                                         | (vlSelf->systolic_array__DOT__mac_array_full_flag
                                                            [7U]
                                                            [0xeU] 
                                                            << 0x1eU))));
}

void Vsystolic_array___024root___nba_sequent__TOP__0(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___nba_sequent__TOP__1(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___nba_sequent__TOP__2(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___nba_sequent__TOP__3(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___nba_sequent__TOP__4(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___nba_sequent__TOP__5(Vsystolic_array___024root* vlSelf);

void Vsystolic_array___024root___eval_nba(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystolic_array___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vsystolic_array___024root___nba_sequent__TOP__1(vlSelf);
        Vsystolic_array___024root___nba_sequent__TOP__2(vlSelf);
        Vsystolic_array___024root___nba_sequent__TOP__3(vlSelf);
        Vsystolic_array___024root___nba_sequent__TOP__4(vlSelf);
        Vsystolic_array___024root___nba_sequent__TOP__5(vlSelf);
        Vsystolic_array___024root___nba_sequent__TOP__6(vlSelf);
    }
}

void Vsystolic_array___024root___eval_triggers__act(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___eval_act(Vsystolic_array___024root* vlSelf);

bool Vsystolic_array___024root___eval_phase__act(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsystolic_array___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsystolic_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsystolic_array___024root___eval_phase__nba(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsystolic_array___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__nba(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystolic_array___024root___eval(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsystolic_array___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("systolic_array.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsystolic_array___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("systolic_array.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsystolic_array___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsystolic_array___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsystolic_array___024root___eval_debug_assertions(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_in & 0xfeU))) {
        Verilated::overWidthError("rst_in");}
    if (VL_UNLIKELY((vlSelf->rst_accumulator_rdy_in 
                     & 0xfeU))) {
        Verilated::overWidthError("rst_accumulator_rdy_in");}
    if (VL_UNLIKELY((vlSelf->stream_out_rdy_in_in & 0xfeU))) {
        Verilated::overWidthError("stream_out_rdy_in_in");}
}
#endif  // VL_DEBUG
