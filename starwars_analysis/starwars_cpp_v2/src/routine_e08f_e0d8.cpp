#include "cpu_6809.h"

namespace StarWars {

void routine_e08f_e0d8_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e08f_e0d8.md
    // Address: 0xE08F_E0D8

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
    // E0D8: JMP $e0d8
    goto label_E0D8;
}

} // namespace StarWars