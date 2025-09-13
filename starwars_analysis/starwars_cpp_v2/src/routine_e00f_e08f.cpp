#include "cpu_6809.h"

namespace StarWars {

void routine_e00f_e08f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e00f_e08f.md
    // Address: 0xE00F_E08F

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
    // E08F: JMP $e08f
    goto label_E08F;
}

} // namespace StarWars