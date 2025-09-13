#include "cpu_6809.h"

namespace StarWars {

void routine_ccc0_cccc_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ccc0_cccc.md
    // Address: 0xCCC0_CCCC

    // CCC0: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCC2: ROR $4684
    // TODO: Convert ROR $4684

    // CCC5: JSR $670D
    cpu.call_function(0x670D);

    // CCC8: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCCC: JMP $cccc
    goto label_CCCC;

}

} // namespace StarWars