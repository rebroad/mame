#include "cpu_6809.h"

namespace StarWars {

void routine_9890_9898_impl(CPU6809& cpu) {
    // Converted from rom_disasm_9890_9898.md
    // Address: 0x9890_9898

    // 9890: LDB <$62
    cpu.m_b = cpu.read_memory(0x62);

    // 9892: BEQ $9897
    if (cpu.zero_flag()) cpu.m_pc = 0x9897;

    // 9895: STB <$62
    cpu.write_memory(0x62, cpu.m_b);

    // 9898: JMP $9898
    goto label_9898;

}

} // namespace StarWars