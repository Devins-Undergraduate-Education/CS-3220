// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_axi4_ram_burst__pch.h"
#include "Vtb_axi4_ram_burst.h"
#include "Vtb_axi4_ram_burst___024root.h"
#include "Vtb_axi4_ram_burst_tb_axi4_ram_burst.h"

// FUNCTIONS
Vtb_axi4_ram_burst__Syms::~Vtb_axi4_ram_burst__Syms()
{
}

Vtb_axi4_ram_burst__Syms::Vtb_axi4_ram_burst__Syms(VerilatedContext* contextp, const char* namep, Vtb_axi4_ram_burst* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_axi4_ram_burst{this, Verilated::catName(namep, "tb_axi4_ram_burst")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_axi4_ram_burst = &TOP__tb_axi4_ram_burst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_axi4_ram_burst.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_axi4_ram_burst.configure(this, name(), "tb_axi4_ram_burst", "tb_axi4_ram_burst", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_axi4_ram_burst.varInsert(__Vfinal,"correct_V", &(TOP__tb_axi4_ram_burst.correct_V), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb_axi4_ram_burst.varInsert(__Vfinal,"correct_V_ap_vld", &(TOP__tb_axi4_ram_burst.correct_V_ap_vld), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
