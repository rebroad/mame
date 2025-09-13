#include "cpu_6809.h"

namespace StarWars {

void routine_656b_6586_impl(CPU6809& cpu) {
    // Converted from rom_disasm_656b_6586.md
    // Address: 0x656B_6586

    label_656B:
    // 656B: RTS 
    return;
    // 656C: LDD #$0100
    cpu.m_d = 0x0100;
    // 656F: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);
    // 6572: LDD #$0000
    cpu.m_d = 0x0000;
    // 6575: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);
    // 6578: STD $48AF
    cpu.write_memory16(0x48AF, cpu.m_d);
    // 657B: LDD #$6480
    cpu.m_d = 0x6480;
    // 657E: STD $4B10
    cpu.write_memory16(0x4B10, cpu.m_d);
    // 6581: JSR $D91A
    cpu.call_function(0xD91A);
    // 6584: LDB #$2C
    cpu.m_b = 0x2C;
    label_6586:
    // 6586: JMP $6586
    goto label_6586;
}

} // namespace StarWars