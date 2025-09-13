#include "cpu_6809.h"

namespace StarWars {

void routine_c2c3_c306_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c2c3_c306.md
    // Address: 0xC2C3_C306

    // C2C3: LEAS -$3,S
    // TODO: Fix comma operator: LEAS -$3,S

    // C2C5: LDX #$C7B7
    cpu.m_x = 0xC7B7;

    // C2C8: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C2CA: LDX #$C7B6
    cpu.m_x = 0xC7B6;

    // C2CD: SUBB A,X
    // TODO: Fix comma operator: SUBB A,X

    // C2CF: SUBB #$02
    cpu.m_b -= 0x02;

    // C2D1: STB ,S
    // TODO: Handle indexed addressing: STB ,S

    // C2D3: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C2D5: LDX #$4500
    cpu.m_x = 0x4500;

    // C2D9: LDB #$00
    cpu.m_b = 0x00;

    // C2DB: STB $1,S
    // TODO: Handle indexed addressing: STB $1,S

    // C2DD: ORCC #$01
    cpu.m_cc |= 0x01;

    // C2DF: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // C2E1: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C2E3: ADCB $1,S
    // TODO: Convert ADCB $1,S

    // C2E5: STB $1,S
    // TODO: Handle indexed addressing: STB $1,S

    // C2E7: DEC ,S
    // TODO: Convert DEC ,S

    // C2E9: BNE $C2DF
    if (!cpu.zero_flag()) cpu.m_pc = 0xC2DF;

    // C2EB: ADCB #$00
    // TODO: Convert ADCB #$00

    // C2ED: STB $1,S
    // TODO: Handle indexed addressing: STB $1,S

    // C2EF: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // C2F5: STB $2,S
    // TODO: Handle indexed addressing: STB $2,S

    // C2F7: LDB $1,X
    // TODO: Fix comma operator: LDB $1,X

    // C2F9: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C2FB: ADDB $2,S
    // TODO: Fix comma operator: ADDB $2,S

    // C2FD: STB $2,S
    // TODO: Handle indexed addressing: STB $2,S

    // C2FF: LDB $1,S
    // TODO: Fix comma operator: LDB $1,S

    // C301: CMPB $2,S
    // TODO: Fix comma operator: CMPB $2,S

    // C303: LEAS $3,S
    // TODO: Fix comma operator: LEAS $3,S

    // C306: JMP $c306
    goto label_C306;

}

} // namespace StarWars