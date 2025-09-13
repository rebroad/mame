#include "cpu_6809.h"

namespace StarWars {

void routine_cccc_ccd7_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cccc_ccd7.md
    // Address: 0xCCCC_CCD7

    label_CCCC:
    // CCCC: ORCC #$01
    cpu.m_cc |= 0x01;
    // CCCE: ROR $4684
    // TODO: Convert ROR $4684
    // CCD1: JSR $6724
    cpu.call_function(0x6724);
    // CCD4: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CCD7: RTS 
    return;
}

} // namespace StarWars