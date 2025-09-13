#include "cpu_6809.h"

namespace StarWars {

void routine_681e_6837_impl(CPU6809& cpu) {
    // Converted from rom_disasm_681e_6837.md
    // Address: 0x681E_6837

    label_681E:
    // 681E: STA $4B14
    cpu.write_memory(0x4B14, cpu.m_a);
    // 6821: ADDA $4B18
    cpu.m_a += 0x4B18;
    // 6824: CMPA #$0F
    cpu.compare_a(0x0F);
    // 6826: BLS $682A
    // TODO: Convert BLS $682A
    // 6828: LDA #$0F
    cpu.m_a = 0x0F;
    // 682A: STA $4B19
    cpu.write_memory(0x4B19, cpu.m_a);
    // 682D: INC <$41
    // TODO: Convert INC <$41
    // 682F: LDA #$1F
    cpu.m_a = 0x1F;
    // 6831: STA <$41
    cpu.write_memory(0x41, cpu.m_a);
    // 6833: LDA #$00
    cpu.m_a = 0x00;
    // 6835: STA <$DD
    cpu.write_memory(0xDD, cpu.m_a);
    // 6837: RTS 
    return;
}

} // namespace StarWars