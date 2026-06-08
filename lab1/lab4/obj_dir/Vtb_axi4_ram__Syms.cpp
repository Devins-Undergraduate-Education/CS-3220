// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_axi4_ram__pch.h"
#include "Vtb_axi4_ram.h"
#include "Vtb_axi4_ram___024root.h"
#include "Vtb_axi4_ram_tb_axi4_ram.h"

// FUNCTIONS
Vtb_axi4_ram__Syms::~Vtb_axi4_ram__Syms()
{
}

Vtb_axi4_ram__Syms::Vtb_axi4_ram__Syms(VerilatedContext* contextp, const char* namep, Vtb_axi4_ram* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_axi4_ram{this, Verilated::catName(namep, "tb_axi4_ram")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_axi4_ram = &TOP__tb_axi4_ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_axi4_ram.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_axi4_ram.configure(this, name(), "tb_axi4_ram", "tb_axi4_ram", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_axi4_ram.varInsert(__Vfinal,"correct_V", &(TOP__tb_axi4_ram.correct_V), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb_axi4_ram.varInsert(__Vfinal,"correct_V_ap_vld", &(TOP__tb_axi4_ram.correct_V_ap_vld), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
