#include "cpu_6809.h"

namespace StarWars {

void routine_e764_e790_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e764_e790.md
    // Address: 0xE764_E790

    label_E764:
    // E764: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // E766: JSR $E790
    cpu.call_function(0xE790);

    // E769: LDA <$AD
    cpu.m_a = cpu.read_memory(0xAD);

    // E76B: BGT $E772
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE772;

    // E76D: LDD #$B913
    cpu.m_d = 0xB913;

    // E770: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E772: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // E774: JSR $E790
    cpu.call_function(0xE790);

    // E777: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // E77D: JSR $E7AD
    cpu.call_function(0xE7AD);

    // E780: LDA <$AD
    cpu.m_a = cpu.read_memory(0xAD);

    // E782: BGT $E789
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE789;

    // E784: LDD #$B913
    cpu.m_d = 0xB913;

    // E787: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E789: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // E78B: JSR $E7AD
    cpu.call_function(0xE7AD);

    // E78E: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    label_E790:
    // E790: JMP $e790
    goto label_E790;

}

} // namespace StarWars