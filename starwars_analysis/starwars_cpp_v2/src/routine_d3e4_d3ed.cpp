#include "cpu_6809.h"

namespace StarWars {

void routine_d3e4_d3ed_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d3e4_d3ed.md
    // Address: 0xD3E4_D3ED

    label_D3E4:
    // D3E4: LDB $7C5C
    cpu.m_b = cpu.read_memory(0x7C5C);

    // D3E7: ROR <$45
    // TODO: Convert ROR <$45

    // D3EA: ADCA $EF5F
    // TODO: Convert ADCA $EF5F

    // D3ED: JMP $d3ec
    goto label_D3EC;

}

} // namespace StarWars