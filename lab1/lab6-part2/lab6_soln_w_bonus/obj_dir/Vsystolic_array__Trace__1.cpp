// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


void Vsystolic_array___024root__trace_chg_0_sub_1(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7092);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                             [7U][6U]));
        bufp->chgCData(oldp+1,(vlSelf->systolic_array__DOT__mac_row_data_in
                               [6U][7U]),8);
        bufp->chgCData(oldp+2,(vlSelf->systolic_array__DOT__mac_col_data_in
                               [7U][6U]),8);
        bufp->chgCData(oldp+3,(vlSelf->systolic_array__DOT__bypass_data_in
                               [7U][6U]),8);
        bufp->chgBit(oldp+4,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][6U])));
        bufp->chgCData(oldp+5,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__row_data_out),8);
        bufp->chgCData(oldp+6,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__col_data_out),8);
        bufp->chgBit(oldp+7,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__rst_accumulator_out));
        bufp->chgBit(oldp+8,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__stream_out_rdy_out));
        bufp->chgCData(oldp+9,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__psum_out),8);
        bufp->chgCData(oldp+10,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[0]),8);
        bufp->chgCData(oldp+11,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[1]),8);
        bufp->chgCData(oldp+12,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[2]),8);
        bufp->chgCData(oldp+13,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[3]),8);
        bufp->chgCData(oldp+14,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[4]),8);
        bufp->chgCData(oldp+15,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[5]),8);
        bufp->chgCData(oldp+16,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[6]),8);
        bufp->chgCData(oldp+17,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[7]),8);
        bufp->chgCData(oldp+18,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[8]),8);
        bufp->chgCData(oldp+19,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[9]),8);
        bufp->chgCData(oldp+20,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[10]),8);
        bufp->chgCData(oldp+21,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[11]),8);
        bufp->chgCData(oldp+22,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[12]),8);
        bufp->chgCData(oldp+23,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[13]),8);
        bufp->chgCData(oldp+24,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[14]),8);
        bufp->chgCData(oldp+25,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[15]),8);
        bufp->chgCData(oldp+26,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mult_out),8);
        bufp->chgCData(oldp+27,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+28,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done));
        bufp->chgCData(oldp+29,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                 [7U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+30,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+31,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+32,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full));
        bufp->chgBit(oldp+33,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty));
        bufp->chgCData(oldp+34,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                                [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+35,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter))));
        bufp->chgCData(oldp+36,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter),4);
        bufp->chgBit(oldp+37,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__stream_started));
        bufp->chgBit(oldp+38,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+39,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done))));
        bufp->chgBit(oldp+40,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+41,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+42,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+43,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+44,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+45,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+46,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+47,(((~ (IData)((0U != ((
                                                   (vlSelf->systolic_array__DOT__flat_array[0U] 
                                                    | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                   | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                  | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                               & vlSelf->systolic_array__DOT__stream_out_rdy_in
                               [7U][6U])));
        bufp->chgBit(oldp+48,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter)) 
                                        | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty))))));
        bufp->chgCData(oldp+49,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum
                                [9U]),8);
        bufp->chgBit(oldp+50,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+51,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+52,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+53,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+54,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+55,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+56,(vlSelf->systolic_array__DOT__rst_accumulator_in
                              [7U][7U]));
        bufp->chgBit(oldp+57,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][7U]));
        bufp->chgCData(oldp+58,(vlSelf->systolic_array__DOT__mac_row_data_in
                                [7U][7U]),8);
        bufp->chgCData(oldp+59,(vlSelf->systolic_array__DOT__mac_col_data_in
                                [7U][7U]),8);
        bufp->chgCData(oldp+60,(vlSelf->systolic_array__DOT__bypass_data_in
                                [7U][7U]),8);
        bufp->chgBit(oldp+61,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
                               & vlSelf->systolic_array__DOT__stream_out_rdy_in
                               [7U][7U])));
        bufp->chgCData(oldp+62,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__row_data_out),8);
        bufp->chgCData(oldp+63,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__col_data_out),8);
        bufp->chgBit(oldp+64,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__rst_accumulator_out));
        bufp->chgBit(oldp+65,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__stream_out_rdy_out));
        bufp->chgCData(oldp+66,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__psum_out),8);
        bufp->chgCData(oldp+67,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[0]),8);
        bufp->chgCData(oldp+68,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[1]),8);
        bufp->chgCData(oldp+69,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[2]),8);
        bufp->chgCData(oldp+70,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[3]),8);
        bufp->chgCData(oldp+71,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[4]),8);
        bufp->chgCData(oldp+72,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[5]),8);
        bufp->chgCData(oldp+73,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[6]),8);
        bufp->chgCData(oldp+74,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[7]),8);
        bufp->chgCData(oldp+75,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[8]),8);
        bufp->chgCData(oldp+76,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[9]),8);
        bufp->chgCData(oldp+77,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[10]),8);
        bufp->chgCData(oldp+78,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[11]),8);
        bufp->chgCData(oldp+79,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[12]),8);
        bufp->chgCData(oldp+80,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[13]),8);
        bufp->chgCData(oldp+81,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[14]),8);
        bufp->chgCData(oldp+82,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[15]),8);
        bufp->chgCData(oldp+83,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mult_out),8);
        bufp->chgCData(oldp+84,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+85,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done));
        bufp->chgCData(oldp+86,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                 [7U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+87,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+88,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+89,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full));
        bufp->chgBit(oldp+90,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty));
        bufp->chgCData(oldp+91,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                                [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+92,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter))));
        bufp->chgCData(oldp+93,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter),4);
        bufp->chgBit(oldp+94,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__stream_started));
        bufp->chgBit(oldp+95,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+96,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done))));
        bufp->chgBit(oldp+97,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+98,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+99,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+100,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+101,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+102,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+103,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+104,(((~ (IData)((0U != (
                                                   ((vlSelf->systolic_array__DOT__flat_array[0U] 
                                                     | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                    | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                                & vlSelf->systolic_array__DOT__stream_out_rdy_in
                                [7U][7U])));
        bufp->chgBit(oldp+105,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter)) 
                                         | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty))))));
        bufp->chgCData(oldp+106,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum
                                 [8U]),8);
        bufp->chgBit(oldp+107,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                   - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+108,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+109,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+110,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+111,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+112,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+113,(vlSelf->systolic_array__DOT__rst_accumulator_in
                               [7U][8U]));
        bufp->chgBit(oldp+114,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                               [7U][8U]));
        bufp->chgCData(oldp+115,(vlSelf->systolic_array__DOT__mac_row_data_in
                                 [8U][7U]),8);
        bufp->chgCData(oldp+116,(vlSelf->systolic_array__DOT__mac_col_data_in
                                 [7U][8U]),8);
        bufp->chgCData(oldp+117,(vlSelf->systolic_array__DOT__bypass_data_in
                                 [7U][8U]),8);
        bufp->chgBit(oldp+118,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
                                & vlSelf->systolic_array__DOT__stream_out_rdy_in
                                [7U][8U])));
        bufp->chgCData(oldp+119,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__row_data_out),8);
        bufp->chgCData(oldp+120,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__col_data_out),8);
        bufp->chgBit(oldp+121,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__rst_accumulator_out));
        bufp->chgBit(oldp+122,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__stream_out_rdy_out));
        bufp->chgCData(oldp+123,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__psum_out),8);
        bufp->chgCData(oldp+124,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[0]),8);
        bufp->chgCData(oldp+125,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[1]),8);
        bufp->chgCData(oldp+126,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[2]),8);
        bufp->chgCData(oldp+127,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[3]),8);
        bufp->chgCData(oldp+128,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[4]),8);
        bufp->chgCData(oldp+129,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[5]),8);
        bufp->chgCData(oldp+130,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[6]),8);
        bufp->chgCData(oldp+131,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[7]),8);
        bufp->chgCData(oldp+132,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[8]),8);
        bufp->chgCData(oldp+133,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[9]),8);
        bufp->chgCData(oldp+134,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[10]),8);
        bufp->chgCData(oldp+135,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[11]),8);
        bufp->chgCData(oldp+136,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[12]),8);
        bufp->chgCData(oldp+137,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[13]),8);
        bufp->chgCData(oldp+138,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[14]),8);
        bufp->chgCData(oldp+139,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[15]),8);
        bufp->chgCData(oldp+140,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mult_out),8);
        bufp->chgCData(oldp+141,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+142,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done));
        bufp->chgCData(oldp+143,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                  [7U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+144,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+145,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+146,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full));
        bufp->chgBit(oldp+147,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty));
        bufp->chgCData(oldp+148,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                                 [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+149,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter))));
        bufp->chgCData(oldp+150,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter),4);
        bufp->chgBit(oldp+151,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__stream_started));
        bufp->chgBit(oldp+152,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+153,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done))));
        bufp->chgBit(oldp+154,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+155,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+156,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+157,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+158,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+159,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+160,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+161,(((~ (IData)((0U != (
                                                   ((vlSelf->systolic_array__DOT__flat_array[0U] 
                                                     | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                    | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                                & vlSelf->systolic_array__DOT__stream_out_rdy_in
                                [7U][8U])));
        bufp->chgBit(oldp+162,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter)) 
                                         | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty))))));
        bufp->chgCData(oldp+163,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum
                                 [7U]),8);
        bufp->chgBit(oldp+164,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                   - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+165,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+166,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+167,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+168,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+169,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+170,(vlSelf->systolic_array__DOT__rst_accumulator_in
                               [7U][9U]));
        bufp->chgBit(oldp+171,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                               [7U][9U]));
        bufp->chgCData(oldp+172,(vlSelf->systolic_array__DOT__mac_row_data_in
                                 [9U][7U]),8);
        bufp->chgCData(oldp+173,(vlSelf->systolic_array__DOT__mac_col_data_in
                                 [7U][9U]),8);
        bufp->chgCData(oldp+174,(vlSelf->systolic_array__DOT__bypass_data_in
                                 [7U][9U]),8);
        bufp->chgBit(oldp+175,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
                                & vlSelf->systolic_array__DOT__stream_out_rdy_in
                                [7U][9U])));
        bufp->chgCData(oldp+176,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__row_data_out),8);
        bufp->chgCData(oldp+177,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__col_data_out),8);
        bufp->chgBit(oldp+178,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__rst_accumulator_out));
        bufp->chgBit(oldp+179,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__stream_out_rdy_out));
        bufp->chgCData(oldp+180,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__psum_out),8);
        bufp->chgCData(oldp+181,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[0]),8);
        bufp->chgCData(oldp+182,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[1]),8);
        bufp->chgCData(oldp+183,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[2]),8);
        bufp->chgCData(oldp+184,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[3]),8);
        bufp->chgCData(oldp+185,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[4]),8);
        bufp->chgCData(oldp+186,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[5]),8);
        bufp->chgCData(oldp+187,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[6]),8);
        bufp->chgCData(oldp+188,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[7]),8);
        bufp->chgCData(oldp+189,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[8]),8);
        bufp->chgCData(oldp+190,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[9]),8);
        bufp->chgCData(oldp+191,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[10]),8);
        bufp->chgCData(oldp+192,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[11]),8);
        bufp->chgCData(oldp+193,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[12]),8);
        bufp->chgCData(oldp+194,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[13]),8);
        bufp->chgCData(oldp+195,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[14]),8);
        bufp->chgCData(oldp+196,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[15]),8);
        bufp->chgCData(oldp+197,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mult_out),8);
        bufp->chgCData(oldp+198,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+199,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done));
        bufp->chgCData(oldp+200,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                  [7U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+201,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+202,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+203,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full));
        bufp->chgBit(oldp+204,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty));
        bufp->chgCData(oldp+205,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                                 [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+206,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter))));
        bufp->chgCData(oldp+207,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter),4);
        bufp->chgBit(oldp+208,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__stream_started));
        bufp->chgBit(oldp+209,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+210,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done))));
        bufp->chgBit(oldp+211,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+212,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+213,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+214,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+215,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+216,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+217,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+218,(((~ (IData)((0U != (
                                                   ((vlSelf->systolic_array__DOT__flat_array[0U] 
                                                     | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                    | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                   | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                                & vlSelf->systolic_array__DOT__stream_out_rdy_in
                                [7U][9U])));
        bufp->chgBit(oldp+219,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter)) 
                                         | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty))))));
        bufp->chgCData(oldp+220,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum
                                 [6U]),8);
        bufp->chgBit(oldp+221,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                   - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+222,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+223,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+224,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+225,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+226,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
    }
    bufp->chgBit(oldp+227,(vlSelf->clk));
    bufp->chgBit(oldp+228,(vlSelf->rst_in));
    bufp->chgBit(oldp+229,(vlSelf->rst_accumulator_rdy_in));
    bufp->chgBit(oldp+230,(vlSelf->stream_out_rdy_in_in));
    bufp->chgQData(oldp+231,(vlSelf->row_data_in_in),64);
    bufp->chgWData(oldp+233,(vlSelf->col_data_in_in),128);
    bufp->chgQData(oldp+237,(vlSelf->row_data_out),64);
}

void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_cleanup\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
