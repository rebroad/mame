#include "cpu_6809.h"

namespace StarWars {

void routine_df47_dfc6_impl(CPU6809& cpu) {
    // Converted from rom_disasm_df47_dfc6.md
    // Address: 0xDF47_DFC6

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
    label_E052:
    // E052: CLRA 
    cpu.m_a = 0;
    // E053: ASRB 
    // TODO: Convert ASRB 
    // E054: LSRA 
    cpu.m_a >>= 1;
    // E055: XNCB 
    // TODO: Convert XNCB 
    // E056: ADDD <$45
    cpu.m_d += 0x45;
    // E058: ASLB 
    cpu.m_b <<= 1;
    // E059: ASLA 
    cpu.m_a <<= 1;
    // E05A: NEGA 
    cpu.m_a = -cpu.m_a;
    // E05B: LSRB 
    cpu.m_b >>= 1;
    // E05C: COMB 
    cpu.m_b = ~cpu.m_b;
    // E05D: LSRB 
    cpu.m_b >>= 1;
    // E05E: BRA $E0B0
    goto label_E0B0;
    label_E060:
    // E060: CLRA 
    cpu.m_a = 0;
    // E061: XNCB 
    // TODO: Convert XNCB 
    // E062: LSRB 
    cpu.m_b >>= 1;
    // E063: BRA $E0A6
    goto label_E0A6;
    // E065: ASLA 
    cpu.m_a <<= 1;
    // E066: LSRA 
    cpu.m_a >>= 1;
    // E067: NEGA 
    cpu.m_a = -cpu.m_a;
    // E068: ANDB #$44
    cpu.m_b &= 0x44;
    // E06A: LSRA 
    cpu.m_a >>= 1;
    label_E06B:
    // E06B: NEGA 
    cpu.m_a = -cpu.m_a;
    // E06C: LSRB 
    cpu.m_b >>= 1;
    // E06D: ASLA 
    cpu.m_a <<= 1;
    // E06E: BRA $E0C3
    goto label_E0C3;
    // E070: LSRB 
    cpu.m_b >>= 1;
    // E071: NEGA 
    cpu.m_a = -cpu.m_a;
    // E072: XNCB 
    // TODO: Convert XNCB 
    // E073: BRA $E0B9
    goto label_E0B9;
    // E075: LSRA 
    cpu.m_a >>= 1;
    // E076: COMB 
    cpu.m_b = ~cpu.m_b;
    // E077: LSRB 
    cpu.m_b >>= 1;
    // E078: XNCB 
    // TODO: Convert XNCB 
    // E079: CLRA 
    cpu.m_a = 0;
    label_E07A:
    // E07A: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E07B: LSRA 
    cpu.m_a >>= 1;
    // E07C: ANDB #$45
    cpu.m_b &= 0x45;
    // E07E: ASLB 
    cpu.m_b <<= 1;
    // E07F: ASLA 
    cpu.m_a <<= 1;
    // E080: NEGA 
    cpu.m_a = -cpu.m_a;
    // E081: LSRB 
    cpu.m_b >>= 1;
    // E082: COMB 
    cpu.m_b = ~cpu.m_b;
    // E083: LSRB 
    cpu.m_b >>= 1;
    // E084: BRA $E0D6
    goto label_E0D6;
    // E086: CLRA 
    cpu.m_a = 0;
    // E087: XNCB 
    // TODO: Convert XNCB 
    label_E088:
    // E088: LSRB 
    cpu.m_b >>= 1;
    // E089: BRA $E0D8
    goto label_E0D8;
    // E08B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E08C: COMB 
    cpu.m_b = ~cpu.m_b;
    // E08D: COMB 
    cpu.m_b = ~cpu.m_b;
    // E08E: LSRA 
    cpu.m_a >>= 1;
    label_E08F:
    // E08F: ANDB #$42
    cpu.m_b &= 0x42;
    // E091: CLRA 
    cpu.m_a = 0;
    // E092: XCLRA 
    // TODO: Convert XCLRA 
    // E093: LSRB 
    cpu.m_b >>= 1;
    // E094: COMB 
    cpu.m_b = ~cpu.m_b;
    // E095: BRA $E0DD
    goto label_E0DD;
    // E097: CLRA 
    cpu.m_a = 0;
    label_E098:
    // E098: XNCB 
    // TODO: Convert XNCB 
    // E099: BRA $E0ED
    goto label_E0ED;
    // E09B: LSRA 
    cpu.m_a >>= 1;
    // E09C: TSTA 
    cpu.test_a();
    // E09D: NEGA 
    cpu.m_a = -cpu.m_a;
    // E09E: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E09F: XCLRA 
    // TODO: Convert XCLRA 
    // E0A0: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E0A1: XCLRA 
    // TODO: Convert XCLRA 
    // E0A2: ASRA 
    // TODO: Convert ASRA 
    // E0A3: BRA $E0EA
    goto label_E0EA;
    // E0A5: XCLRA 
    // TODO: Convert XCLRA 
    label_E0A6:
    // E0A6: LSRA 
    cpu.m_a >>= 1;
    // E0A7: XNCB 
    // TODO: Convert XNCB 
    // E0A8: ASRA 
    // TODO: Convert ASRA 
    // E0A9: ADCB <$35
    // TODO: Convert ADCB <$35
    // E0AB: BGE $E0DD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE0DD;
    // E0AD: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y
    // E0AF: BRA $E0D1
    goto label_E0D1;
    // E0B1: EORB <$41
    cpu.m_b ^= 0x41;
    // E0B3: LSRA 
    cpu.m_a >>= 1;
    // E0B4: LSRA 
    cpu.m_a >>= 1;
    // E0B5: LSRA 
    cpu.m_a >>= 1;
    // E0B6: LSRA 
    cpu.m_a >>= 1;
    // E0B7: BRA $E10D
    goto label_E10D;
    label_E0B9:
    // E0B9: CLRA 
    cpu.m_a = 0;
    // E0BA: BRA $E100
    goto label_E100;
    // E0BC: LSRA 
    cpu.m_a >>= 1;
    // E0BD: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E0BE: INCA 
    cpu.m_a++;
    // E0BF: LSRA 
    cpu.m_a >>= 1;
    // E0C0: COMA 
    cpu.m_a = ~cpu.m_a;
    // E0C1: LSRB 
    cpu.m_b >>= 1;
    // E0C2: CLRA 
    cpu.m_a = 0;
    label_E0C3:
    // E0C3: XNCB 
    // TODO: Convert XNCB 
    // E0C4: BRA $E119
    goto label_E119;
    // E0C6: ASLA 
    cpu.m_a <<= 1;
    // E0C7: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E0C8: LSRA 
    cpu.m_a >>= 1;
    // E0C9: INCA 
    cpu.m_a++;
    // E0CA: ANDB #$53
    cpu.m_b &= 0x53;
    // E0CC: ASLA 
    cpu.m_a <<= 1;
    // E0CD: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E0CE: LSRA 
    cpu.m_a >>= 1;
    // E0CF: INCA 
    cpu.m_a++;
    // E0D0: LSRA 
    cpu.m_a >>= 1;
    label_E0D1:
    // E0D1: BRA $E114
    goto label_E114;
    // E0D3: LSRB 
    cpu.m_b >>= 1;
    // E0D4: BRA $E11C
    goto label_E11C;
    label_E0D6:
    // E0D6: LSRB 
    cpu.m_b >>= 1;
    // E0D7: INCA 
    cpu.m_a++;
    label_E0D8:
    // E0D8: INCA 
    cpu.m_a++;
    // E0D9: BRA $E12E
    goto label_E12E;
    // E0DB: LSRB 
    cpu.m_b >>= 1;
    // E0DC: XNCB 
    // TODO: Convert XNCB 
    label_E0DD:
    // E0DD: LSRA 
    cpu.m_a >>= 1;
    // E0DE: XCLRA 
    // TODO: Convert XCLRA 
    // E0DF: ASRA 
    // TODO: Convert ASRA 
    // E0E0: LSRB 
    cpu.m_b >>= 1;
    // E0E1: EORB #$53
    cpu.m_b ^= 0x53;
    // E0E3: LSRB 
    cpu.m_b >>= 1;
    // E0E4: NEGA 
    cpu.m_a = -cpu.m_a;
    // E0E5: XNCB 
    // TODO: Convert XNCB 
    // E0E6: LSRB 
    cpu.m_b >>= 1;
    // E0E7: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E0E8: XCLRA 
    // TODO: Convert XCLRA 
    // E0E9: ASRA 
    // TODO: Convert ASRA 
    label_E0EA:
    // E0EA: BRA $E143
    goto label_E143;
    // E0EC: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E0ED:
    // E0ED: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E0EE: LSRA 
    cpu.m_a >>= 1;
    // E0EF: BRA $E133
    goto label_E133;
    // E0F1: CLRA 
    cpu.m_a = 0;
    // E0F2: XCLRA 
    // TODO: Convert XCLRA 
    // E0F3: LSRB 
    cpu.m_b >>= 1;
    // E0F4: ADDD <$53
    cpu.m_d += 0x53;
    // E0F6: ASLA 
    cpu.m_a <<= 1;
    // E0F7: CLRA 
    cpu.m_a = 0;
    // E0F8: CLRA 
    cpu.m_a = 0;
    // E0F9: LSRB 
    cpu.m_b >>= 1;
    // E0FA: BRA $E142
    goto label_E142;
    // E0FC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E0FD: XNCB 
    // TODO: Convert XNCB 
    // E0FE: LSRA 
    cpu.m_a >>= 1;
    // E0FF: XNCA 
    // TODO: Convert XNCA 
    label_E100:
    // E100: NEGA 
    cpu.m_a = -cpu.m_a;
    // E101: INCA 
    cpu.m_a++;
    // E102: INCA 
    cpu.m_a++;
    // E103: ADDD <$53
    cpu.m_d += 0x53;
    // E105: ASLA 
    cpu.m_a <<= 1;
    // E106: CLRA 
    cpu.m_a = 0;
    // E107: CLRA 
    cpu.m_a = 0;
    // E108: LSRB 
    cpu.m_b >>= 1;
    // E109: BRA $E15F
    goto label_E15F;
    // E10B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E10C: LSRA 
    cpu.m_a >>= 1;
    label_E10D:
    // E10D: BRA $E155
    goto label_E155;
    // E10F: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E110: ASRA 
    // TODO: Convert ASRA 
    // E111: ASLA 
    cpu.m_a <<= 1;
    // E112: LSRB 
    cpu.m_b >>= 1;
    // E113: LSRA 
    cpu.m_a >>= 1;
    label_E114:
    // E114: XNCB 
    // TODO: Convert XNCB 
    // E115: ADDD <$41
    cpu.m_d += 0x41;
    // E117: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E118: CLRA 
    cpu.m_a = 0;
    label_E119:
    // E119: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E11A: LSRA 
    cpu.m_a >>= 1;
    // E11B: BRA $E160
    goto label_E160;
    // E11D: NEGA 
    cpu.m_a = -cpu.m_a;
    // E11E: LSRB 
    cpu.m_b >>= 1;
    // E11F: ASRB 
    // TODO: Convert ASRB 
    // E120: NEGA 
    cpu.m_a = -cpu.m_a;
    // E121: INCA 
    cpu.m_a++;
    // E122: XDECA 
    // TODO: Convert XDECA 
    // E123: ADDD <$55
    cpu.m_d += 0x55;
    // E125: COMB 
    cpu.m_b = ~cpu.m_b;
    // E126: LSRA 
    cpu.m_a >>= 1;
    // E127: BRA $E17D
    goto label_E17D;
    // E129: ASLA 
    cpu.m_a <<= 1;
    // E12A: LSRA 
    cpu.m_a >>= 1;
    // E12B: BRA $E173
    goto label_E173;
    // E12D: CLRA 
    cpu.m_a = 0;
    label_E12E:
    // E12E: XNCB 
    // TODO: Convert XNCB 
    // E12F: COMA 
    cpu.m_a = ~cpu.m_a;
    // E130: BITB #$20
    // TODO: Convert BITB #$20
    // E132: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    label_E133:
    // E133: CLRA 
    cpu.m_a = 0;
    // E134: XNCB 
    // TODO: Convert XNCB 
    // E135: BRA $E18C
    goto label_E18C;
    // E137: COMB 
    cpu.m_b = ~cpu.m_b;
    // E138: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E139: XCLRA 
    // TODO: Convert XCLRA 
    // E13A: ASRA 
    // TODO: Convert ASRA 
    // E13B: BRA $E191
    goto label_E191;
    // E13D: ASLA 
    cpu.m_a <<= 1;
    // E13E: LSRA 
    cpu.m_a >>= 1;
    // E13F: BRA $E187
    goto label_E187;
    // E141: CLRA 
    cpu.m_a = 0;
    label_E142:
    // E142: XNCB 
    // TODO: Convert XNCB 
    label_E143:
    // E143: COMA 
    cpu.m_a = ~cpu.m_a;
    // E144: BITB #$4F
    // TODO: Convert BITB #$4F
    // E146: XNCA 
    // TODO: Convert XNCA 
}

} // namespace StarWars