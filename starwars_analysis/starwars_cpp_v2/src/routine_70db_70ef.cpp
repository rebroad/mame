#include "cpu_6809.h"

namespace StarWars {

void routine_70db_70ef_impl(CPU6809& cpu) {
    // Converted from rom_disasm_70db_70ef.md
    // Address: 0x70DB_70EF

    label_70DB:
    // 70DB: ORCC #$10
    cpu.m_cc |= 0x10;
    // 70DD: LDD <$6B
    cpu.m_d = cpu.read_memory16(0x6B);
    // 70DF: STD <$7F
    cpu.write_memory16(0x7F, cpu.m_d);
    // 70E1: LDD <$74
    cpu.m_d = cpu.read_memory16(0x74);
    // 70E3: STD <$7D
    cpu.write_memory16(0x7D, cpu.m_d);
    // 70E5: LDD <$2F
    cpu.m_d = cpu.read_memory16(0x2F);
    // 70E7: STD <$7B
    cpu.write_memory16(0x7B, cpu.m_d);
    // 70E9: LDD <$2D
    cpu.m_d = cpu.read_memory16(0x2D);
    // 70EB: STD <$79
    cpu.write_memory16(0x79, cpu.m_d);
    // 70ED: ANDCC #$EF
    // TODO: Convert ANDCC #$EF
    // 70EF: RTS 
    return;
}

} // namespace StarWars