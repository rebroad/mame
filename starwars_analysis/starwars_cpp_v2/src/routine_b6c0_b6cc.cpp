#include "cpu_6809.h"

namespace StarWars {

void routine_b6c0_b6cc_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b6c0_b6cc.md
    // Address: 0xB6C0_B6CC

    // B6C0: JSR $B6CC
    cpu.call_function(0xB6CC);

    // B6C3: JSR $B6D7
    cpu.call_function(0xB6D7);

    // B6C7: LDD #$6380
    cpu.m_d = 0x6380;

    // B6CA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B6CC: JMP $b6cc
    goto label_B6CC;

}

} // namespace StarWars