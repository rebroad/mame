#include "cpu_6809.h"

namespace StarWars {

void routine_6911_692a_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6911_692a.md
    // Address: 0x6911_692A

    // 6912: LDD #$7780
    cpu.m_d = 0x7780;

    // 6915: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // 6917: LDD #$0100
    cpu.m_d = 0x0100;

    // 691A: STD <$58
    cpu.write_memory16(0x58, cpu.m_d);

    // 691C: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 691F: BNE $692A
    if (!cpu.zero_flag()) cpu.m_pc = 0x692A;

    // 6921: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 6924: CMPA #$04
    cpu.compare_a(0x04);

    // 6926: BNE $692A
    if (!cpu.zero_flag()) cpu.m_pc = 0x692A;

    // 6928: BRA $6930
    goto label_6930;

    // 692A: JMP $692a
    goto label_692A;

}

} // namespace StarWars