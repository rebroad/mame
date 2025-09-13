#include "cpu_6809.h"

namespace StarWars {

void routine_de52_ded1_impl(CPU6809& cpu) {
    // Converted from rom_disasm_de52_ded1.md
    // Address: 0xDE52_DED1

    // DE58: BRA $DE7A
    goto label_DE7A;

    // DE5A: BRA $DE7C
    goto label_DE7C;

    // DE5C: BRA $DE7E
    goto label_DE7E;

    // DE5E: BRA $DE80
    goto label_DE80;

    // DE60: BRA $DE82
    goto label_DE82;

    // DE62: BRA $DE84
    goto label_DE84;

    // DE64: BRA $DE86
    goto label_DE86;

    // DE66: BRA $DE88
    goto label_DE88;

    // DE68: BRA $DE8A
    goto label_DE8A;

    // DE6A: LEAS -$10,Y
    // TODO: Fix comma operator: LEAS -$10,Y

    // DE6C: SUBA $4C41
    cpu.m_a -= 0x4C41;

    // DE72: BRA $DEC8
    goto label_DEC8;

    // DE79: BRA $DE9B
    goto label_DE9B;

    // DE7B: BRA $DE9D
    goto label_DE9D;

    // DE7D: BRA $DE9F
    goto label_DE9F;

    // DE7F: BRA $DEA1
    goto label_DEA1;

    // DE81: BRA $DEA3
    goto label_DEA3;

    // DE83: BRA $DEA5
    goto label_DEA5;

    // DE85: BRA $DEA7
    goto label_DEA7;

    // DE87: BRA $DEA9
    goto label_DEA9;

    // DE89: BRA $DEAB
    goto label_DEAB;

    // DE8B: BRA $DEBF
    goto label_DEBF;

    // DE8D: LEAX [$5452,W]
    // TODO: Complex indexed addressing: [$5452,W]

    // DE95: BRA $DEEB
    goto label_DEEB;

    // DE9D: BRA $DEBF
    goto label_DEBF;

    // DE9F: BRA $DEC1
    goto label_DEC1;

    // DEA1: BRA $DEC3
    goto label_DEC3;

    // DEA3: BRA $DEC5
    goto label_DEC5;

    // DEA5: BRA $DEC7
    goto label_DEC7;

    // DEA7: BRA $DEC9
    goto label_DEC9;

    // DEA9: BRA $DECB
    goto label_DECB;

    // DEAB: BRA $DECD
    goto label_DECD;

    // DEAD: BRA $DEE0
    goto label_DEE0;

    // DEAF: LEAX [$4649,W]
    // TODO: Complex indexed addressing: [$4649,W]

    // DEBA: BRA $DEDC
    goto label_DEDC;

    // DEBC: BRA $DEDE
    goto label_DEDE;

    // DEBE: BRA $DEE0
    goto label_DEE0;

    // DEC0: BRA $DEE2
    goto label_DEE2;

    // DEC2: BRA $DEE4
    goto label_DEE4;

    // DEC4: BRA $DEE6
    goto label_DEE6;

    // DEC6: BRA $DEE8
    goto label_DEE8;

    // DEC8: BRA $DEEA
    goto label_DEEA;

    // DECA: BRA $DEEC
    goto label_DEEC;

    // DECC: BRA $DEEE
    goto label_DEEE;

    // DECE: BRA $DEF0
    goto label_DEF0;

    // DED0: BRA $DF05
    goto label_DF05;

    // DED2: SUBD $4558
    cpu.m_d -= 0x4558;

    // DEDA: BRA $DF2C
    goto label_DF2C;

    // DEDF: BRA $DF01
    goto label_DF01;

    // DEE1: BRA $DF03
    goto label_DF03;

    // DEE3: BRA $DF05
    goto label_DF05;

    // DEE5: BRA $DF07
    goto label_DF07;

    // DEE7: BRA $DF09
    goto label_DF09;

    // DEE9: BRA $DF0B
    goto label_DF0B;

    // DEEB: BRA $DF0D
    goto label_DF0D;

    // DEED: BRA $DF0F
    goto label_DF0F;

    // DEEF: LEAS -$B,Y
    // TODO: Fix comma operator: LEAS -$B,Y

    // DEF1: BGE $DF23
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDF23;

    // DEF3: LEAX [$4445,W]
    // TODO: Complex indexed addressing: [$4445,W]

    // DEFF: BRA $DF42
    goto label_DF42;

    // DF03: BRA $DF59
    goto label_DF59;

    // DF09: BRA $DF5F
    goto label_DF5F;

    // DF0E: BRA $DF30
    goto label_DF30;

    // DF10: BRA $DF47
    goto label_DF47;

    // DF12: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // DF14: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // DF16: SUBA $5345
    cpu.m_a -= 0x5345;

    // DF1D: BRA $DF60
    goto label_DF60;

    // DF1F: BRA $DF65
    goto label_DF65;

    // DF25: BRA $DF7A
    goto label_DF7A;

    // DF29: SBCB <$46
    // TODO: Convert SBCB <$46

    // DF2E: BRA $DF7C
    goto label_DF7C;

    // DF34: BRA $DF77
    goto label_DF77;

    // DF37: BRA $DF7D
    goto label_DF7D;

    // DF3F: BRA $DF85
    goto label_DF85;

    // DF45: BRA $DF9A
    goto label_DF9A;

    // DF49: SBCB <$43
    // TODO: Convert SBCB <$43

    // DF52: LDU #$4541
    cpu.m_u = 0x4541;

    // DF56: ADCB <$4D
    // TODO: Convert ADCB <$4D

    // DF60: ANDB #$57
    cpu.m_b &= 0x57;

    // DF65: BRA $DF18
    goto label_DF18;

    // DF6B: BRA $DF20
    goto label_DF20;

    // DF71: BRA $DF28
    goto label_DF28;

    // DF77: ADDD <$4E
    cpu.m_d += 0x4E;

    // DF7A: BRA $DFBE
    goto label_DFBE;

    // DF7F: ADDD <$34
    cpu.m_d += 0x34;

    // DF81: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // DF83: BGE $DFB5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDFB5;

    // DF85: LEAX [$3830,W]
    // TODO: Complex indexed addressing: [$3830,W]

    // DF89: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // DF8B: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // DF8D: SUBA $4D45
    cpu.m_a -= 0x4D45;

    // DF95: BRA $DFDD
    goto label_DFDD;

    // DF9A: BRA $DFEE
    goto label_DFEE;

    // DFA0: BRA $DFE5
    goto label_DFE5;

    // DFA8: BRA $DFFA
    goto label_DFFA;

    // DFAC: ANDB <$59
    cpu.m_b &= 0x59;

    // DFB0: BRA $DFF3
    goto label_DFF3;

    // DFB4: BRA $DFF7
    goto label_DFF7;

    // DFB6: BRA $E00C
    goto label_E00C;

    // DFBB: BRA $E00F
    goto label_E00F;

    // DFC1: BRA $E013
    goto label_E013;

    // DFC6: ANDB <$54
    cpu.m_b &= 0x54;

    // DFCA: BRA $E012
    goto label_E012;

    // DFD0: BRA $E01B
    goto label_E01B;

    // DFD3: BRA $E02C
    goto label_E02C;

    // DFD8: BRA $E033
    goto label_E033;

    // DFDB: BITB <$53
    // TODO: Convert BITB <$53

    // DFE1: BRA $E03C
    goto label_E03C;

    // DFE6: BRA $E031
    goto label_E031;

    // DFEE: ADDD <$50
    cpu.m_d += 0x50;

    // DFF7: BRA $E045
    goto label_E045;

    // DFFC: BEQ $E051
    if (cpu.zero_flag()) cpu.m_pc = 0xE051;

    // DFFE: BRA $E052
    goto label_E052;

    // E004: BRA $E04C
    goto label_E04C;

    // E009: BITB #$50
    // TODO: Convert BITB #$50

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

}

} // namespace StarWars