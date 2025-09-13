#include "cpu_6809.h"

namespace StarWars {

void routine_de52_ded1_impl(CPU6809& cpu) {
    // Converted from rom_disasm_de52_ded1.md
    // Address: 0xDE52_DED1

    label_DE52:
    // DE52: LSRB 
    cpu.m_b >>= 1;
    // DE53: XCLRA 
    // TODO: Convert XCLRA 
    // DE54: XDECA 
    // TODO: Convert XDECA 
    // DE55: LSRA 
    cpu.m_a >>= 1;
    label_DE56:
    // DE56: XNCB 
    // TODO: Convert XNCB 
    // DE57: COMB 
    cpu.m_b = ~cpu.m_b;
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
    // DE6F: COMB 
    cpu.m_b = ~cpu.m_b;
    // DE70: LSRA 
    cpu.m_a >>= 1;
    // DE71: XNCB 
    // TODO: Convert XNCB 
    // DE72: BRA $DEC8
    goto label_DEC8;
    // DE74: CLRA 
    cpu.m_a = 0;
    // DE75: ASRB 
    // TODO: Convert ASRB 
    // DE76: LSRA 
    cpu.m_a >>= 1;
    // DE77: XNCB 
    // TODO: Convert XNCB 
    // DE78: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DE79:
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
    label_DE8B:
    // DE8B: BRA $DEBF
    goto label_DEBF;
    // DE8D: LEAX [$5452,W]
    // TODO: Complex indexed addressing: [$5452,W]
    // DE91: LSRA 
    cpu.m_a >>= 1;
    // DE92: XCLRA 
    // TODO: Convert XCLRA 
    // DE93: COMA 
    cpu.m_a = ~cpu.m_a;
    label_DE94:
    // DE94: ASLA 
    cpu.m_a <<= 1;
    // DE95: BRA $DEEB
    goto label_DEEB;
    // DE97: LSRB 
    cpu.m_b >>= 1;
    // DE98: XNCB 
    // TODO: Convert XNCB 
    // DE99: XNCB 
    // TODO: Convert XNCB 
    // DE9A: LSRA 
    cpu.m_a >>= 1;
    label_DE9B:
    // DE9B: LSRB 
    cpu.m_b >>= 1;
    // DE9C: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DE9D:
    // DE9D: BRA $DEBF
    goto label_DEBF;
    label_DE9F:
    // DE9F: BRA $DEC1
    goto label_DEC1;
    label_DEA1:
    // DEA1: BRA $DEC3
    goto label_DEC3;
    label_DEA3:
    // DEA3: BRA $DEC5
    goto label_DEC5;
    label_DEA5:
    // DEA5: BRA $DEC7
    goto label_DEC7;
    label_DEA7:
    // DEA7: BRA $DEC9
    goto label_DEC9;
    label_DEA9:
    // DEA9: BRA $DECB
    goto label_DECB;
    label_DEAB:
    // DEAB: BRA $DECD
    goto label_DECD;
    // DEAD: BRA $DEE0
    goto label_DEE0;
    // DEAF: LEAX [$4649,W]
    // TODO: Complex indexed addressing: [$4649,W]
    // DEB3: XNCB 
    // TODO: Convert XNCB 
    // DEB4: LSRA 
    cpu.m_a >>= 1;
    // DEB5: XNCA 
    // TODO: Convert XNCA 
    // DEB6: NEGA 
    cpu.m_a = -cpu.m_a;
    // DEB7: INCA 
    cpu.m_a++;
    // DEB8: INCA 
    cpu.m_a++;
    // DEB9: COMB 
    cpu.m_b = ~cpu.m_b;
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
    label_DEC8:
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
    // DED5: ASLA 
    cpu.m_a <<= 1;
    // DED6: NEGA 
    cpu.m_a = -cpu.m_a;
    // DED7: LSRB 
    cpu.m_b >>= 1;
    // DED8: COMB 
    cpu.m_b = ~cpu.m_b;
    // DED9: LSRB 
    cpu.m_b >>= 1;
    // DEDA: BRA $DF2C
    goto label_DF2C;
    label_DEDC:
    // DEDC: CLRA 
    cpu.m_a = 0;
    // DEDD: XNCB 
    // TODO: Convert XNCB 
    label_DEDE:
    // DEDE: LSRB 
    cpu.m_b >>= 1;
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
    label_DEEB:
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
    // DEF7: COMB 
    cpu.m_b = ~cpu.m_b;
    // DEF8: LSRB 
    cpu.m_b >>= 1;
    // DEF9: XNCB 
    // TODO: Convert XNCB 
    // DEFA: CLRA 
    cpu.m_a = 0;
    // DEFB: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // DEFC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DEFD: XCLRA 
    // TODO: Convert XCLRA 
    // DEFE: ASRA 
    // TODO: Convert ASRA 
    // DEFF: BRA $DF42
    goto label_DF42;
    label_DF01:
    // DF01: INCA 
    cpu.m_a++;
    label_DF02:
    // DF02: INCA 
    cpu.m_a++;
    label_DF03:
    // DF03: BRA $DF59
    goto label_DF59;
    label_DF05:
    // DF05: CLRA 
    cpu.m_a = 0;
    label_DF06:
    // DF06: ASRB 
    // TODO: Convert ASRB 
    label_DF07:
    // DF07: LSRA 
    cpu.m_a >>= 1;
    label_DF08:
    // DF08: XNCB 
    // TODO: Convert XNCB 
    label_DF09:
    // DF09: BRA $DF5F
    goto label_DF5F;
    label_DF0B:
    // DF0B: CLRA 
    cpu.m_a = 0;
    label_DF0C:
    // DF0C: NEGB 
    cpu.m_b = -cpu.m_b;
    label_DF0D:
    // DF0D: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DF0E:
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
    // DF19: INCA 
    cpu.m_a++;
    // DF1A: LSRA 
    cpu.m_a >>= 1;
    // DF1B: COMA 
    cpu.m_a = ~cpu.m_a;
    // DF1C: LSRB 
    cpu.m_b >>= 1;
    // DF1D: BRA $DF60
    goto label_DF60;
    // DF1F: BRA $DF65
    goto label_DF65;
    // DF21: LSRA 
    cpu.m_a >>= 1;
    label_DF22:
    // DF22: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF23: LSRB 
    cpu.m_b >>= 1;
    // DF24: ASLA 
    cpu.m_a <<= 1;
    // DF25: BRA $DF7A
    goto label_DF7A;
    // DF27: LSRB 
    cpu.m_b >>= 1;
    label_DF28:
    // DF28: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF29: SBCB <$46
    // TODO: Convert SBCB <$46
    // DF2B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_DF2C:
    // DF2C: XNCB 
    // TODO: Convert XNCB 
    // DF2D: LSRA 
    cpu.m_a >>= 1;
    // DF2E: BRA $DF7C
    goto label_DF7C;
    label_DF30:
    // DF30: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF31: COMB 
    cpu.m_b = ~cpu.m_b;
    // DF32: LSRA 
    cpu.m_a >>= 1;
    // DF33: XNCB 
    // TODO: Convert XNCB 
    // DF34: BRA $DF77
    goto label_DF77;
    // DF36: LSRB 
    cpu.m_b >>= 1;
    // DF37: BRA $DF7D
    goto label_DF7D;
    // DF39: LSRA 
    cpu.m_a >>= 1;
    // DF3A: COMB 
    cpu.m_b = ~cpu.m_b;
    // DF3B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DF3C: XNCB 
    // TODO: Convert XNCB 
    // DF3D: LSRA 
    cpu.m_a >>= 1;
    // DF3E: LSRA 
    cpu.m_a >>= 1;
    // DF3F: BRA $DF85
    goto label_DF85;
    // DF41: LSRA 
    cpu.m_a >>= 1;
    label_DF42:
    // DF42: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF43: LSRB 
    cpu.m_b >>= 1;
    // DF44: ASLA 
    cpu.m_a <<= 1;
    // DF45: BRA $DF9A
    goto label_DF9A;
    label_DF47:
    // DF47: LSRB 
    cpu.m_b >>= 1;
    // DF48: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF49: SBCB <$43
    // TODO: Convert SBCB <$43
    // DF4B: CLRA 
    cpu.m_a = 0;
    // DF4C: LSRB 
    cpu.m_b >>= 1;
    // DF4D: XCLRA 
    // TODO: Convert XCLRA 
    // DF4E: LSRB 
    cpu.m_b >>= 1;
    // DF4F: LSRA 
    cpu.m_a >>= 1;
    // DF50: CLRA 
    cpu.m_a = 0;
    // DF51: ASRB 
    // TODO: Convert ASRB 
    // DF52: LDU #$4541
    cpu.m_u = 0x4541;
    // DF55: COMB 
    cpu.m_b = ~cpu.m_b;
    // DF56: ADCB <$4D
    // TODO: Convert ADCB <$4D
    // DF58: LSRA 
    cpu.m_a >>= 1;
    label_DF59:
    // DF59: LSRA 
    cpu.m_a >>= 1;
    // DF5A: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DF5B: LSRB 
    cpu.m_b >>= 1;
    // DF5C: XHCF 
    // TODO: Convert XHCF 
    // DF5D: ASLA 
    cpu.m_a <<= 1;
    // DF5E: NEGA 
    cpu.m_a = -cpu.m_a;
    label_DF5F:
    // DF5F: XNCB 
    // TODO: Convert XNCB 
    label_DF60:
    // DF60: ANDB #$57
    cpu.m_b &= 0x57;
    // DF62: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF63: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DF64: LSRA 
    cpu.m_a >>= 1;
    label_DF65:
    // DF65: BRA $DF18
    goto label_DF18;
    // DF67: ASRB 
    // TODO: Convert ASRB 
    // DF68: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF69: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DF6A: LSRA 
    cpu.m_a >>= 1;
    // DF6B: BRA $DF20
    goto label_DF20;
    // DF6D: ASRB 
    // TODO: Convert ASRB 
    // DF6E: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF6F: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DF70: LSRA 
    cpu.m_a >>= 1;
    // DF71: BRA $DF28
    goto label_DF28;
    // DF73: XNCA 
    // TODO: Convert XNCA 
    // DF74: CLRA 
    cpu.m_a = 0;
    // DF75: XCLRA 
    // TODO: Convert XCLRA 
    // DF76: LSRB 
    cpu.m_b >>= 1;
    label_DF77:
    // DF77: ADDD <$4E
    cpu.m_d += 0x4E;
    // DF79: CLRA 
    cpu.m_a = 0;
    label_DF7A:
    // DF7A: BRA $DFBE
    goto label_DFBE;
    label_DF7C:
    // DF7C: CLRA 
    cpu.m_a = 0;
    label_DF7D:
    // DF7D: XCLRA 
    // TODO: Convert XCLRA 
    // DF7E: LSRB 
    cpu.m_b >>= 1;
    // DF7F: ADDD <$34
    cpu.m_d += 0x34;
    // DF81: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y
    // DF83: BGE $DFB5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDFB5;
    label_DF85:
    // DF85: LEAX [$3830,W]
    // TODO: Complex indexed addressing: [$3830,W]
    // DF89: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y
    // DF8B: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y
    // DF8D: SUBA $4D45
    cpu.m_a -= 0x4D45;
    // DF90: COMB 
    cpu.m_b = ~cpu.m_b;
    // DF91: COMB 
    cpu.m_b = ~cpu.m_b;
    // DF92: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF93: ASRA 
    // TODO: Convert ASRA 
    // DF94: LSRA 
    cpu.m_a >>= 1;
    // DF95: BRA $DFDD
    goto label_DFDD;
    // DF97: XNCB 
    // TODO: Convert XNCB 
    // DF98: CLRA 
    cpu.m_a = 0;
    // DF99: TSTA 
    cpu.test_a();
    label_DF9A:
    // DF9A: BRA $DFEE
    goto label_DFEE;
    // DF9C: LSRA 
    cpu.m_a >>= 1;
    // DF9D: XNCA 
    // TODO: Convert XNCA 
    // DF9E: LSRA 
    cpu.m_a >>= 1;
    // DF9F: INCA 
    cpu.m_a++;
    // DFA0: BRA $DFE5
    goto label_DFE5;
    // DFA2: CLRA 
    cpu.m_a = 0;
    // DFA3: TSTA 
    cpu.test_a();
    // DFA4: TSTA 
    cpu.test_a();
    // DFA5: NEGA 
    cpu.m_a = -cpu.m_a;
    // DFA6: XCLRA 
    // TODO: Convert XCLRA 
    // DFA7: LSRA 
    cpu.m_a >>= 1;
    // DFA8: BRA $DFFA
    goto label_DFFA;
    // DFAA: CLRA 
    cpu.m_a = 0;
    // DFAB: COMB 
    cpu.m_b = ~cpu.m_b;
    // DFAC: ANDB <$59
    cpu.m_b &= 0x59;
    // DFAE: CLRA 
    cpu.m_a = 0;
    // DFAF: LSRB 
    cpu.m_b >>= 1;
    // DFB0: BRA $DFF3
    goto label_DFF3;
    // DFB2: XNCB 
    // TODO: Convert XNCB 
    // DFB3: LSRA 
    cpu.m_a >>= 1;
    // DFB4: BRA $DFF7
    goto label_DFF7;
    // DFB6: BRA $E00C
    goto label_E00C;
    // DFB8: XNCB 
    // TODO: Convert XNCB 
    // DFB9: LSRB 
    cpu.m_b >>= 1;
    // DFBA: LSRA 
    cpu.m_a >>= 1;
    // DFBB: BRA $E00F
    goto label_E00F;
    // DFBD: LSRA 
    cpu.m_a >>= 1;
    label_DFBE:
    // DFBE: XNCA 
    // TODO: Convert XNCA 
    // DFBF: LSRA 
    cpu.m_a >>= 1;
    // DFC0: INCA 
    cpu.m_a++;
    // DFC1: BRA $E013
    goto label_E013;
    // DFC3: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFC4: INCA 
    cpu.m_a++;
    // DFC5: CLRA 
    cpu.m_a = 0;
    // DFC6: ANDB <$54
    cpu.m_b &= 0x54;
    // DFC8: ASLA 
    cpu.m_a <<= 1;
    // DFC9: LSRA 
    cpu.m_a >>= 1;
    // DFCA: BRA $E012
    goto label_E012;
    // DFCC: CLRA 
    cpu.m_a = 0;
    // DFCD: XNCB 
    // TODO: Convert XNCB 
    // DFCE: COMA 
    cpu.m_a = ~cpu.m_a;
    // DFCF: LSRA 
    cpu.m_a >>= 1;
    // DFD0: BRA $E01B
    goto label_E01B;
    // DFD2: COMB 
    cpu.m_b = ~cpu.m_b;
    // DFD3: BRA $E02C
    goto label_E02C;
    // DFD5: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFD6: LSRB 
    cpu.m_b >>= 1;
    // DFD7: ASLA 
    cpu.m_a <<= 1;
    // DFD8: BRA $E033
    goto label_E033;
    // DFDA: CLRA 
    cpu.m_a = 0;
    // DFDB: BITB <$53
    // TODO: Convert BITB <$53
    label_DFDD:
    // DFDD: ASLA 
    cpu.m_a <<= 1;
    // DFDE: CLRA 
    cpu.m_a = 0;
    // DFDF: CLRA 
    cpu.m_a = 0;
    // DFE0: LSRB 
    cpu.m_b >>= 1;
    // DFE1: BRA $E03C
    goto label_E03C;
    // DFE3: CLRA 
    cpu.m_a = 0;
    // DFE4: LSRB 
    cpu.m_b >>= 1;
    label_DFE5:
    // DFE5: XNCB 
    // TODO: Convert XNCB 
    // DFE6: BRA $E031
    goto label_E031;
    // DFE8: XCLRA 
    // TODO: Convert XCLRA 
    // DFE9: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFEA: LSRB 
    cpu.m_b >>= 1;
    // DFEB: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFEC: NEGA 
    cpu.m_a = -cpu.m_a;
    // DFED: INCA 
    cpu.m_a++;
    label_DFEE:
    // DFEE: ADDD <$50
    cpu.m_d += 0x50;
    // DFF0: XNCB 
    // TODO: Convert XNCB 
    // DFF1: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFF2: XCLRA 
    // TODO: Convert XCLRA 
    label_DFF3:
    // DFF3: COMA 
    cpu.m_a = ~cpu.m_a;
    // DFF4: LSRA 
    cpu.m_a >>= 1;
    // DFF5: COMB 
    cpu.m_b = ~cpu.m_b;
    // DFF6: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DFF7:
    // DFF7: BRA $E045
    goto label_E045;
    // DFF9: LSRA 
    cpu.m_a >>= 1;
    label_DFFA:
    // DFFA: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFFB: NEGA 
    cpu.m_a = -cpu.m_a;
    // DFFC: BEQ $E051
    if (cpu.zero_flag()) cpu.m_pc = 0xE051;
    // DFFE: BRA $E052
    goto label_E052;
    label_E000:
    // E000: LSRA 
    cpu.m_a >>= 1;
    // E001: XNCA 
    // TODO: Convert XNCA 
    // E002: LSRA 
    cpu.m_a >>= 1;
    // E003: INCA 
    cpu.m_a++;
    // E004: BRA $E04C
    goto label_E04C;
    // E006: CLRA 
    cpu.m_a = 0;
    // E007: XNCB 
    // TODO: Convert XNCB 
    // E008: COMA 
    cpu.m_a = ~cpu.m_a;
    // E009: BITB #$50
    // TODO: Convert BITB #$50
    // E00B: CLRA 
    cpu.m_a = 0;
    label_E00C:
    // E00C: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E00D: XCLRA 
    // TODO: Convert XCLRA 
    // E00E: LSRB 
    cpu.m_b >>= 1;
    label_E00F:
    // E00F: COMB 
    cpu.m_b = ~cpu.m_b;
    // E010: BRA $E060
    goto label_E060;
    label_E012:
    // E012: LSRA 
    cpu.m_a >>= 1;
    label_E013:
    // E013: ASLB 
    cpu.m_b <<= 1;
    // E014: LSRB 
    cpu.m_b >>= 1;
    // E015: BRA $E06B
    goto label_E06B;
    // E017: CLRA 
    cpu.m_a = 0;
    // E018: ASRB 
    // TODO: Convert ASRB 
    // E019: LSRA 
    cpu.m_a >>= 1;
    // E01A: SBCB <$54
    // TODO: Convert SBCB <$54
    // E01C: CLRA 
    cpu.m_a = 0;
    // E01D: ASRB 
    // TODO: Convert ASRB 
    // E01E: LSRA 
    cpu.m_a >>= 1;
    // E01F: XNCB 
    // TODO: Convert XNCB 
    // E020: ADDD <$43
    cpu.m_d += 0x43;
    // E022: INCA 
    cpu.m_a++;
    // E023: LSRA 
    cpu.m_a >>= 1;
    // E024: NEGA 
    cpu.m_a = -cpu.m_a;
    // E025: XNCB 
    // TODO: Convert XNCB 
    // E026: LSRA 
    cpu.m_a >>= 1;
    // E027: LSRA 
    cpu.m_a >>= 1;
    // E028: BRA $E06B
    goto label_E06B;
    // E02A: INCA 
    cpu.m_a++;
    // E02B: INCA 
    cpu.m_a++;
    label_E02C:
    // E02C: BRA $E07A
    goto label_E07A;
    // E02E: NEGA 
    cpu.m_a = -cpu.m_a;
    // E02F: COMB 
    cpu.m_b = ~cpu.m_b;
    // E030: LSRA 
    cpu.m_a >>= 1;
    label_E031:
    // E031: XNCB 
    // TODO: Convert XNCB 
    // E032: BRA $E088
    goto label_E088;
    // E034: CLRA 
    cpu.m_a = 0;
    // E035: ASRB 
    // TODO: Convert ASRB 
    // E036: LSRA 
    cpu.m_a >>= 1;
    // E037: XNCB 
    // TODO: Convert XNCB 
    // E038: ADDD <$35
    cpu.m_d += 0x35;
    // E03A: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y
    label_E03C:
    // E03C: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y
    // E03E: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y
    // E040: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E041: CLRA 
    cpu.m_a = 0;
    // E042: XNCB 
    // TODO: Convert XNCB 
    // E043: BRA $E098
    goto label_E098;
    label_E045:
    // E045: ASLA 
    cpu.m_a <<= 1;
    // E046: CLRA 
    cpu.m_a = 0;
    // E047: CLRA 
    cpu.m_a = 0;
    // E048: LSRB 
    cpu.m_b >>= 1;
    // E049: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E04A: XCLRA 
    // TODO: Convert XCLRA 
    // E04B: ASRA 
    // TODO: Convert ASRA 
    label_E04C:
    // E04C: BRA $E08F
    goto label_E08F;
    // E04E: INCA 
    cpu.m_a++;
    // E04F: INCA 
    cpu.m_a++;
    // E050: BRA $E0A6
    goto label_E0A6;
}

} // namespace StarWars