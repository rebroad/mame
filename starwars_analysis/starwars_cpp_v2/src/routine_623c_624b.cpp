#include "cpu_6809.h"

namespace StarWars {

void routine_623c_624b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_623c_624b.md
    // Address: 0x623C_624B

    label_623C:
    // 623C: BRA $624B
    goto label_624B;
    // 623E: CMPB #$60
    cpu.compare_b(0x60);
    // 6240: BLT $624B
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x624B;
    // 6242: LDA #$0C
    cpu.m_a = 0x0C;
    // 6244: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));
    // 6246: BEQ $624B
    if (cpu.zero_flag()) cpu.m_pc = 0x624B;
    // 6248: DECA 
    cpu.m_a--;
    // 6249: STA <$41
    cpu.write_memory(0x41, cpu.m_a);
    label_624B:
    // 624B: JMP $624b
    goto label_624B;
}

} // namespace StarWars