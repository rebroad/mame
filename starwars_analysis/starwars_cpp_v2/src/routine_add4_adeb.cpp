#include "cpu_6809.h"

namespace StarWars {

void routine_add4_adeb_impl(CPU6809& cpu) {
    // Converted from rom_disasm_add4_adeb.md
    // Address: 0xADD4_ADEB

    label_ADD4:
    // ADD4: LDD #$000F
    cpu.m_d = 0x000F;

    // ADD7: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // ADDA: LDA #$67
    cpu.m_a = 0x67;

    // ADDC: JSR $CDBA
    cpu.call_function(0xCDBA);

    // ADDF: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // ADE2: SUBD #$E000
    cpu.m_d -= 0xE000;

    // ADE5: BGT $ADEB
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xADEB;

    // ADE7: LDA #$00
    cpu.m_a = 0x00;

    // ADE9: STA <$45
    cpu.write_memory(0x45, cpu.m_a);

    label_ADEB:
    // ADEB: JMP $adeb
    goto label_ADEB;

}

} // namespace StarWars