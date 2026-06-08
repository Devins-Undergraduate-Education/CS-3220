// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


VL_ATTR_COLD void Vsystolic_array___024root__trace_full_0_sub_1(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+7092,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                             [7U][6U]));
    bufp->fullCData(oldp+7093,(vlSelf->systolic_array__DOT__mac_row_data_in
                               [6U][7U]),8);
    bufp->fullCData(oldp+7094,(vlSelf->systolic_array__DOT__mac_col_data_in
                               [7U][6U]),8);
    bufp->fullCData(oldp+7095,(vlSelf->systolic_array__DOT__bypass_data_in
                               [7U][6U]),8);
    bufp->fullBit(oldp+7096,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][6U])));
    bufp->fullCData(oldp+7097,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__row_data_out),8);
    bufp->fullCData(oldp+7098,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__col_data_out),8);
    bufp->fullBit(oldp+7099,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__rst_accumulator_out));
    bufp->fullBit(oldp+7100,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__stream_out_rdy_out));
    bufp->fullCData(oldp+7101,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__psum_out),8);
    bufp->fullCData(oldp+7102,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[0]),8);
    bufp->fullCData(oldp+7103,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[1]),8);
    bufp->fullCData(oldp+7104,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[2]),8);
    bufp->fullCData(oldp+7105,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[3]),8);
    bufp->fullCData(oldp+7106,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[4]),8);
    bufp->fullCData(oldp+7107,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[5]),8);
    bufp->fullCData(oldp+7108,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[6]),8);
    bufp->fullCData(oldp+7109,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[7]),8);
    bufp->fullCData(oldp+7110,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[8]),8);
    bufp->fullCData(oldp+7111,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[9]),8);
    bufp->fullCData(oldp+7112,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[10]),8);
    bufp->fullCData(oldp+7113,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[11]),8);
    bufp->fullCData(oldp+7114,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[12]),8);
    bufp->fullCData(oldp+7115,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[13]),8);
    bufp->fullCData(oldp+7116,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[14]),8);
    bufp->fullCData(oldp+7117,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum[15]),8);
    bufp->fullCData(oldp+7118,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mult_out),8);
    bufp->fullCData(oldp+7119,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+7120,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done));
    bufp->fullCData(oldp+7121,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                [7U][6U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+7122,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+7123,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+7124,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_full));
    bufp->fullBit(oldp+7125,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty));
    bufp->fullCData(oldp+7126,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                               [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+7127,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter))));
    bufp->fullCData(oldp+7128,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter),4);
    bufp->fullBit(oldp+7129,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__stream_started));
    bufp->fullBit(oldp+7130,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
    bufp->fullBit(oldp+7131,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__multiplier_done))));
    bufp->fullBit(oldp+7132,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+7133,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+7134,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+7135,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+7136,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+7137,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+7138,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+7139,(((~ (IData)((0U != (((
                                                   vlSelf->systolic_array__DOT__flat_array[0U] 
                                                   | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                  | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                 | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][6U])));
    bufp->fullBit(oldp+7140,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__bypass_counter)) 
                                       | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__fifo_empty))))));
    bufp->fullCData(oldp+7141,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__psum
                               [9U]),8);
    bufp->fullBit(oldp+7142,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+7143,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+7144,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+7145,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+7146,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+7147,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                         - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__6__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+7148,(vlSelf->systolic_array__DOT__rst_accumulator_in
                             [7U][7U]));
    bufp->fullBit(oldp+7149,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                             [7U][7U]));
    bufp->fullCData(oldp+7150,(vlSelf->systolic_array__DOT__mac_row_data_in
                               [7U][7U]),8);
    bufp->fullCData(oldp+7151,(vlSelf->systolic_array__DOT__mac_col_data_in
                               [7U][7U]),8);
    bufp->fullCData(oldp+7152,(vlSelf->systolic_array__DOT__bypass_data_in
                               [7U][7U]),8);
    bufp->fullBit(oldp+7153,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][7U])));
    bufp->fullCData(oldp+7154,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__row_data_out),8);
    bufp->fullCData(oldp+7155,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__col_data_out),8);
    bufp->fullBit(oldp+7156,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__rst_accumulator_out));
    bufp->fullBit(oldp+7157,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__stream_out_rdy_out));
    bufp->fullCData(oldp+7158,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__psum_out),8);
    bufp->fullCData(oldp+7159,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[0]),8);
    bufp->fullCData(oldp+7160,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[1]),8);
    bufp->fullCData(oldp+7161,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[2]),8);
    bufp->fullCData(oldp+7162,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[3]),8);
    bufp->fullCData(oldp+7163,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[4]),8);
    bufp->fullCData(oldp+7164,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[5]),8);
    bufp->fullCData(oldp+7165,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[6]),8);
    bufp->fullCData(oldp+7166,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[7]),8);
    bufp->fullCData(oldp+7167,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[8]),8);
    bufp->fullCData(oldp+7168,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[9]),8);
    bufp->fullCData(oldp+7169,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[10]),8);
    bufp->fullCData(oldp+7170,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[11]),8);
    bufp->fullCData(oldp+7171,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[12]),8);
    bufp->fullCData(oldp+7172,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[13]),8);
    bufp->fullCData(oldp+7173,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[14]),8);
    bufp->fullCData(oldp+7174,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum[15]),8);
    bufp->fullCData(oldp+7175,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mult_out),8);
    bufp->fullCData(oldp+7176,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+7177,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done));
    bufp->fullCData(oldp+7178,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                [7U][7U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+7179,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+7180,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+7181,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_full));
    bufp->fullBit(oldp+7182,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty));
    bufp->fullCData(oldp+7183,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                               [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+7184,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter))));
    bufp->fullCData(oldp+7185,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter),4);
    bufp->fullBit(oldp+7186,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__stream_started));
    bufp->fullBit(oldp+7187,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
    bufp->fullBit(oldp+7188,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__multiplier_done))));
    bufp->fullBit(oldp+7189,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+7190,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+7191,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+7192,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+7193,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+7194,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+7195,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+7196,(((~ (IData)((0U != (((
                                                   vlSelf->systolic_array__DOT__flat_array[0U] 
                                                   | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                  | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                 | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][7U])));
    bufp->fullBit(oldp+7197,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__bypass_counter)) 
                                       | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__fifo_empty))))));
    bufp->fullCData(oldp+7198,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__psum
                               [8U]),8);
    bufp->fullBit(oldp+7199,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+7200,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+7201,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+7202,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+7203,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+7204,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                         - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__7__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+7205,(vlSelf->systolic_array__DOT__rst_accumulator_in
                             [7U][8U]));
    bufp->fullBit(oldp+7206,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                             [7U][8U]));
    bufp->fullCData(oldp+7207,(vlSelf->systolic_array__DOT__mac_row_data_in
                               [8U][7U]),8);
    bufp->fullCData(oldp+7208,(vlSelf->systolic_array__DOT__mac_col_data_in
                               [7U][8U]),8);
    bufp->fullCData(oldp+7209,(vlSelf->systolic_array__DOT__bypass_data_in
                               [7U][8U]),8);
    bufp->fullBit(oldp+7210,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][8U])));
    bufp->fullCData(oldp+7211,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__row_data_out),8);
    bufp->fullCData(oldp+7212,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__col_data_out),8);
    bufp->fullBit(oldp+7213,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__rst_accumulator_out));
    bufp->fullBit(oldp+7214,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__stream_out_rdy_out));
    bufp->fullCData(oldp+7215,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__psum_out),8);
    bufp->fullCData(oldp+7216,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[0]),8);
    bufp->fullCData(oldp+7217,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[1]),8);
    bufp->fullCData(oldp+7218,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[2]),8);
    bufp->fullCData(oldp+7219,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[3]),8);
    bufp->fullCData(oldp+7220,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[4]),8);
    bufp->fullCData(oldp+7221,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[5]),8);
    bufp->fullCData(oldp+7222,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[6]),8);
    bufp->fullCData(oldp+7223,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[7]),8);
    bufp->fullCData(oldp+7224,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[8]),8);
    bufp->fullCData(oldp+7225,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[9]),8);
    bufp->fullCData(oldp+7226,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[10]),8);
    bufp->fullCData(oldp+7227,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[11]),8);
    bufp->fullCData(oldp+7228,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[12]),8);
    bufp->fullCData(oldp+7229,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[13]),8);
    bufp->fullCData(oldp+7230,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[14]),8);
    bufp->fullCData(oldp+7231,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum[15]),8);
    bufp->fullCData(oldp+7232,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mult_out),8);
    bufp->fullCData(oldp+7233,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+7234,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done));
    bufp->fullCData(oldp+7235,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                [7U][8U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+7236,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+7237,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+7238,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_full));
    bufp->fullBit(oldp+7239,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty));
    bufp->fullCData(oldp+7240,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                               [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+7241,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter))));
    bufp->fullCData(oldp+7242,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter),4);
    bufp->fullBit(oldp+7243,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__stream_started));
    bufp->fullBit(oldp+7244,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
    bufp->fullBit(oldp+7245,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__multiplier_done))));
    bufp->fullBit(oldp+7246,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+7247,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+7248,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+7249,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+7250,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+7251,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+7252,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+7253,(((~ (IData)((0U != (((
                                                   vlSelf->systolic_array__DOT__flat_array[0U] 
                                                   | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                  | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                 | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][8U])));
    bufp->fullBit(oldp+7254,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__bypass_counter)) 
                                       | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__fifo_empty))))));
    bufp->fullCData(oldp+7255,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__psum
                               [7U]),8);
    bufp->fullBit(oldp+7256,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+7257,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+7258,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+7259,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+7260,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+7261,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                         - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__8__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+7262,(vlSelf->systolic_array__DOT__rst_accumulator_in
                             [7U][9U]));
    bufp->fullBit(oldp+7263,(vlSelf->systolic_array__DOT__stream_out_rdy_in
                             [7U][9U]));
    bufp->fullCData(oldp+7264,(vlSelf->systolic_array__DOT__mac_row_data_in
                               [9U][7U]),8);
    bufp->fullCData(oldp+7265,(vlSelf->systolic_array__DOT__mac_col_data_in
                               [7U][9U]),8);
    bufp->fullCData(oldp+7266,(vlSelf->systolic_array__DOT__bypass_data_in
                               [7U][9U]),8);
    bufp->fullBit(oldp+7267,(((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][9U])));
    bufp->fullCData(oldp+7268,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__row_data_out),8);
    bufp->fullCData(oldp+7269,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__col_data_out),8);
    bufp->fullBit(oldp+7270,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__rst_accumulator_out));
    bufp->fullBit(oldp+7271,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__stream_out_rdy_out));
    bufp->fullCData(oldp+7272,(vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__psum_out),8);
    bufp->fullCData(oldp+7273,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[0]),8);
    bufp->fullCData(oldp+7274,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[1]),8);
    bufp->fullCData(oldp+7275,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[2]),8);
    bufp->fullCData(oldp+7276,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[3]),8);
    bufp->fullCData(oldp+7277,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[4]),8);
    bufp->fullCData(oldp+7278,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[5]),8);
    bufp->fullCData(oldp+7279,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[6]),8);
    bufp->fullCData(oldp+7280,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[7]),8);
    bufp->fullCData(oldp+7281,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[8]),8);
    bufp->fullCData(oldp+7282,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[9]),8);
    bufp->fullCData(oldp+7283,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[10]),8);
    bufp->fullCData(oldp+7284,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[11]),8);
    bufp->fullCData(oldp+7285,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[12]),8);
    bufp->fullCData(oldp+7286,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[13]),8);
    bufp->fullCData(oldp+7287,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[14]),8);
    bufp->fullCData(oldp+7288,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum[15]),8);
    bufp->fullCData(oldp+7289,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mult_out),8);
    bufp->fullCData(oldp+7290,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+7291,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done));
    bufp->fullCData(oldp+7292,((vlSelf->systolic_array__DOT__rst_accumulator_in
                                [7U][9U] ? 0U : (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+7293,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+7294,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+7295,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_full));
    bufp->fullBit(oldp+7296,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty));
    bufp->fullCData(oldp+7297,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__fifo
                               [(0x3fU & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+7298,((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter))));
    bufp->fullCData(oldp+7299,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter),4);
    bufp->fullBit(oldp+7300,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__stream_started));
    bufp->fullBit(oldp+7301,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__stream_out_rdy_in_reg));
    bufp->fullBit(oldp+7302,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                              & (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__multiplier_done))));
    bufp->fullBit(oldp+7303,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+7304,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+7305,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+7306,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+7307,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+7308,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+7309,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+7310,(((~ (IData)((0U != (((
                                                   vlSelf->systolic_array__DOT__flat_array[0U] 
                                                   | vlSelf->systolic_array__DOT__flat_array[1U]) 
                                                  | vlSelf->systolic_array__DOT__flat_array[2U]) 
                                                 | vlSelf->systolic_array__DOT__flat_array[3U])))) 
                              & vlSelf->systolic_array__DOT__stream_out_rdy_in
                              [7U][9U])));
    bufp->fullBit(oldp+7311,((1U & (~ ((0U != (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__bypass_counter)) 
                                       | (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__fifo_empty))))));
    bufp->fullCData(oldp+7312,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__psum
                               [6U]),8);
    bufp->fullBit(oldp+7313,((0x20U <= (0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+7314,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+7315,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+7316,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+7317,(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+7318,((0x3fU & ((IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__w_ptr) 
                                         - (IData)(vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__7__KET____DOT__instantiate_mac_cols__BRA__9__KET____DOT__mac__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+7319,(vlSelf->clk));
    bufp->fullBit(oldp+7320,(vlSelf->rst_in));
    bufp->fullBit(oldp+7321,(vlSelf->rst_accumulator_rdy_in));
    bufp->fullBit(oldp+7322,(vlSelf->stream_out_rdy_in_in));
    bufp->fullQData(oldp+7323,(vlSelf->row_data_in_in),64);
    bufp->fullWData(oldp+7325,(vlSelf->col_data_in_in),128);
    bufp->fullQData(oldp+7329,(vlSelf->row_data_out),64);
}
