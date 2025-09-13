#include "cpu_6809.h"

namespace StarWars {

void routine_c3ee_c409_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c3ee_c409.md
    // Address: 0xC3EE_C409

    // C3EE: LDX #$C7B7
    cpu.m_x = 0xC7B7;

    // C3F1: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C3F3: LDX #$4500
    cpu.m_x = 0x4500;

    // C3F7: STX $4AFA
    cpu.write_memory16(0x4AFA, cpu.m_x);

    // C3FA: LDX #$C7B6
    cpu.m_x = 0xC7B6;

    // C3FD: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C3FF: LDX #$4C00
    cpu.m_x = 0x4C00;

    // C403: TFR X,U
    cpu.m_u = cpu.m_x;

    // C405: LDX #$4500
    cpu.m_x = 0x4500;

    // C409: JMP $c409
    goto label_C409;

}

} // namespace StarWars