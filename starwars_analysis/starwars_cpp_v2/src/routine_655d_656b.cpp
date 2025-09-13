#include "cpu_6809.h"

namespace StarWars {

void routine_655d_656b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_655d_656b.md
    // Address: 0x655D_656B

    // 655D: LDA $481E
    cpu.m_a = cpu.read_memory(0x481E);

    // 6560: ANDA #$10
    cpu.m_a &= 0x10;

    // 6562: BEQ $656B
    if (cpu.zero_flag()) cpu.m_pc = 0x656B;

    // 6564: JSR $D91A
    cpu.call_function(0xD91A);

    // 6567: LDA #$05
    cpu.m_a = 0x05;

    // 6569: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 656B: JMP $656b
    goto label_656B;

}

} // namespace StarWars