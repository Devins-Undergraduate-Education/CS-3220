// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo.h"
#include "Vtb_axis_fifo___024root.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

// FUNCTIONS
Vtb_axis_fifo__Syms::~Vtb_axis_fifo__Syms()
{
}

Vtb_axis_fifo__Syms::Vtb_axis_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_axis_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_axis_fifo{this, Verilated::catName(namep, "tb_axis_fifo")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_axis_fifo = &TOP__tb_axis_fifo;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_axis_fifo.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_axis_fifo.configure(this, name(), "tb_axis_fifo", "tb_axis_fifo", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_axis_fifo.varInsert(__Vfinal,"din_0_rsc_dat", &(TOP__tb_axis_fifo.din_0_rsc_dat), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_axis_fifo.varInsert(__Vfinal,"din_0_rsc_rdy", &(TOP__tb_axis_fifo.din_0_rsc_rdy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb_axis_fifo.varInsert(__Vfinal,"din_0_rsc_vld", &(TOP__tb_axis_fifo.din_0_rsc_vld), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb_axis_fifo.varInsert(__Vfinal,"dout_0_rsc_dat", &(TOP__tb_axis_fifo.dout_0_rsc_dat), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_axis_fifo.varInsert(__Vfinal,"dout_0_rsc_rdy", &(TOP__tb_axis_fifo.dout_0_rsc_rdy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb_axis_fifo.varInsert(__Vfinal,"dout_0_rsc_vld", &(TOP__tb_axis_fifo.dout_0_rsc_vld), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
