#include "cpu_6809.h"

namespace StarWars {

void routine_e00f_e08f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e00f_e08f.md
    // Address: 0xE00F_E08F

    // E010: BRA $E060
    goto label_E060;

    // E015: BRA $E06B
    goto label_E06B;

    // E01A: SBCB <$54
    // TODO: Convert SBCB <$54

    // E020: ADDD <$43
    cpu.m_d += 0x43;

    // E028: BRA $E06B
    goto label_E06B;

    // E02C: BRA $E07A
    goto label_E07A;

    // E032: BRA $E088
    goto label_E088;

    // E038: ADDD <$35
    cpu.m_d += 0x35;

    // E03A: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // E03C: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E03E: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y

    // E043: BRA $E098
    goto label_E098;

    // E04C: BRA $E08F
    goto label_E08F;

    // E050: BRA $E0A6
    goto label_E0A6;

    // E056: ADDD <$45
    cpu.m_d += 0x45;

    // E05E: BRA $E0B0
    goto label_E0B0;

    // E063: BRA $E0A6
    goto label_E0A6;

    // E068: ANDB #$44
    cpu.m_b &= 0x44;

    // E06E: BRA $E0C3
    goto label_E0C3;

    // E073: BRA $E0B9
    goto label_E0B9;

    // E07C: ANDB #$45
    cpu.m_b &= 0x45;

    // E084: BRA $E0D6
    goto label_E0D6;

    // E089: BRA $E0D8
    goto label_E0D8;

    label_E08F:
    // E08F: JMP $e08f
    goto label_E08F;

}

} // namespace StarWars