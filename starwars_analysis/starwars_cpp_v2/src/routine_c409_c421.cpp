#include "cpu_6809.h"

namespace StarWars {

void routine_c409_c421_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c409_c421.md
    // Address: 0xC409_C421

    // C409: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // C40B: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // C40D: CMPX $4AFA
    cpu.compare_x(cpu.read_memory16(0x4AFA));

    // C410: BCS $C409
    if (cpu.carry_flag()) cpu.m_pc = 0xC409;

    // C413: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C416: BEQ $C44F
    if (cpu.zero_flag()) cpu.m_pc = 0xC44F;

    // C418: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C41B: LDX #$4500
    cpu.m_x = 0x4500;

    // C41E: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C421: JMP $c421
    goto label_C421;

}

} // namespace StarWars