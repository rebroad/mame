#include "cpu_6809.h"

namespace StarWars {

void routine_e0d8_e765_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e0d8_e765.md
    // Address: 0xE0D8_E765

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
    // E147: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E148: BLT $E1A1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE1A1;
    // E14A: NEGA 
    cpu.m_a = -cpu.m_a;
    // E14B: XCLRA 
    // TODO: Convert XCLRA 
    // E14C: BRA $E199
    goto label_E199;
    // E14E: LSRA 
    cpu.m_a >>= 1;
    // E14F: XCLRA 
    // TODO: Convert XCLRA 
    // E150: CLRA 
    cpu.m_a = 0;
    // E151: XNCA 
    // TODO: Convert XNCA 
    // E152: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E153: BRA $E19E
    goto label_E19E;
    label_E155:
    // E155: COMB 
    cpu.m_b = ~cpu.m_b;
    // E156: BRA $E19F
    goto label_E19F;
    // E158: CLRA 
    cpu.m_a = 0;
    // E159: XCLRA 
    // TODO: Convert XCLRA 
    // E15A: LSRA 
    cpu.m_a >>= 1;
    // E15B: BRA $E19F
    goto label_E19F;
    // E15D: LSRB 
    cpu.m_b >>= 1;
    // E15E: LSRB 
    cpu.m_b >>= 1;
    label_E15F:
    // E15F: BRA $E1A9
    goto label_E1A9;
    // E161: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E162: ADDD <$50
    cpu.m_d += 0x50;
    // E164: XNCB 
    // TODO: Convert XNCB 
    // E165: LSRA 
    cpu.m_a >>= 1;
    // E166: COMB 
    cpu.m_b = ~cpu.m_b;
    // E167: LSRA 
    cpu.m_a >>= 1;
    // E168: XCLRA 
    // TODO: Convert XCLRA 
    // E169: COMA 
    cpu.m_a = ~cpu.m_a;
    // E16A: LSRA 
    cpu.m_a >>= 1;
    // E16B: BRA $E1B6
    goto label_E1B6;
    // E16D: COMB 
    cpu.m_b = ~cpu.m_b;
    // E16E: BRA $E1B6
    goto label_E1B6;
    // E170: LSRA 
    cpu.m_a >>= 1;
    // E171: INCA 
    cpu.m_a++;
    // E172: LSRB 
    cpu.m_b >>= 1;
    label_E173:
    // E173: BRA $E1CC
    goto label_E1CC;
    // E175: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E176: LSRB 
    cpu.m_b >>= 1;
    // E177: ASLA 
    cpu.m_a <<= 1;
    // E178: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E179: XCLRA 
    // TODO: Convert XCLRA 
    // E17A: BRA $E1D0
    goto label_E1D0;
    // E17C: ASLA 
    cpu.m_a <<= 1;
    label_E17D:
    // E17D: LSRA 
    cpu.m_a >>= 1;
    // E17E: BRA $E1C6
    goto label_E1C6;
    // E180: CLRA 
    cpu.m_a = 0;
    // E181: XNCB 
    // TODO: Convert XNCB 
    // E182: COMA 
    cpu.m_a = ~cpu.m_a;
    // E183: LSRA 
    cpu.m_a >>= 1;
    // E184: LDX -$C,U
    // TODO: Fix comma operator: LDX -$C,U
    // E186: ASLA 
    cpu.m_a <<= 1;
    label_E187:
    // E187: LSRA 
    cpu.m_a >>= 1;
    // E188: BRA $E1CF
    goto label_E1CF;
    // E18A: TSTA 
    cpu.test_a();
    // E18B: NEGB 
    cpu.m_b = -cpu.m_b;
    label_E18C:
    // E18C: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E18D: XNCB 
    // TODO: Convert XNCB 
    // E18E: LSRA 
    cpu.m_a >>= 1;
    // E18F: BEQ $E1E4
    if (cpu.zero_flag()) cpu.m_pc = 0xE1E4;
    label_E191:
    // E191: BRA $E1D7
    goto label_E1D7;
    // E193: LSRA 
    cpu.m_a >>= 1;
    // E194: NEGA 
    cpu.m_a = -cpu.m_a;
    // E195: LSRB 
    cpu.m_b >>= 1;
    // E196: ASLA 
    cpu.m_a <<= 1;
    // E197: BRA $E1EC
    goto label_E1EC;
    label_E199:
    // E199: LSRB 
    cpu.m_b >>= 1;
    // E19A: NEGA 
    cpu.m_a = -cpu.m_a;
    // E19B: XNCB 
    // TODO: Convert XNCB 
    // E19C: BGE $E1BE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1BE;
    label_E19E:
    // E19E: LSRB 
    cpu.m_b >>= 1;
    label_E19F:
    // E19F: XCLRA 
    // TODO: Convert XCLRA 
    // E1A0: LSRA 
    cpu.m_a >>= 1;
    // E1A1: LSRA 
    cpu.m_a >>= 1;
    // E1A2: XNCB 
    // TODO: Convert XNCB 
    // E1A3: BRA $E1F9
    goto label_E1F9;
    // E1A5: ASLA 
    cpu.m_a <<= 1;
    // E1A6: BITB #$43
    // TODO: Convert BITB #$43
    // E1A8: CLRA 
    cpu.m_a = 0;
    label_E1A9:
    // E1A9: TSTA 
    cpu.test_a();
    // E1AA: TSTA 
    cpu.test_a();
    // E1AB: NEGA 
    cpu.m_a = -cpu.m_a;
    // E1AC: XCLRA 
    // TODO: Convert XCLRA 
    // E1AD: LSRA 
    cpu.m_a >>= 1;
    // E1AE: BRA $E1FF
    goto label_E1FF;
    // E1B0: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E1B1: BRA $E1F7
    goto label_E1F7;
    // E1B3: NEGA 
    cpu.m_a = -cpu.m_a;
    // E1B4: XNCB 
    // TODO: Convert XNCB 
    // E1B5: LSRB 
    cpu.m_b >>= 1;
    label_E1B6:
    // E1B6: ASLA 
    cpu.m_a <<= 1;
    // E1B7: BRA $E20F
    goto label_E20F;
    // E1B9: NEGA 
    cpu.m_a = -cpu.m_a;
    // E1BA: LSRA 
    cpu.m_a >>= 1;
    // E1BB: LSRA 
    cpu.m_a >>= 1;
    // E1BC: XNCB 
    // TODO: Convert XNCB 
    // E1BD: BGE $E1DF
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1DF;
    // E1BF: XCLRA 
    // TODO: Convert XCLRA 
    // E1C0: LSRA 
    cpu.m_a >>= 1;
    // E1C1: NEGA 
    cpu.m_a = -cpu.m_a;
    // E1C2: XNCB 
    // TODO: Convert XNCB 
    // E1C3: COMB 
    cpu.m_b = ~cpu.m_b;
    // E1C4: BRA $E21A
    goto label_E21A;
    label_E1C6:
    // E1C6: ASLA 
    cpu.m_a <<= 1;
    // E1C7: BITB #$52
    // TODO: Convert BITB #$52
    // E1C9: LSRA 
    cpu.m_a >>= 1;
    // E1CA: XNCA 
    // TODO: Convert XNCA 
    // E1CB: LSRA 
    cpu.m_a >>= 1;
    label_E1CC:
    // E1CC: INCA 
    cpu.m_a++;
    // E1CD: BRA $E21F
    goto label_E21F;
    label_E1CF:
    // E1CF: INCA 
    cpu.m_a++;
    label_E1D0:
    // E1D0: NEGA 
    cpu.m_a = -cpu.m_a;
    // E1D1: XCLRA 
    // TODO: Convert XCLRA 
    // E1D2: LSRA 
    cpu.m_a >>= 1;
    // E1D3: LSRB 
    cpu.m_b >>= 1;
    // E1D4: BGT $E1F6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1F6;
    // E1D6: BRA $E231
    goto label_E231;
    // E1D8: CLRA 
    cpu.m_a = 0;
    // E1D9: LSRB 
    cpu.m_b >>= 1;
    // E1DA: BRA $E229
    goto label_E229;
    // E1DC: LSRB 
    cpu.m_b >>= 1;
    // E1DD: COMB 
    cpu.m_b = ~cpu.m_b;
    // E1DE: LSRB 
    cpu.m_b >>= 1;
    // E1DF: BRA $E22B
    goto label_E22B;
    // E1E1: CLRA 
    cpu.m_a = 0;
    // E1E2: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E1E3: XCLRA 
    // TODO: Convert XCLRA 
    // E1E4: BRA $E23A
    goto label_E23A;
    // E1E6: ASLA 
    cpu.m_a <<= 1;
    // E1E7: BITB #$52
    // TODO: Convert BITB #$52
    // E1E9: LSRA 
    cpu.m_a >>= 1;
    // E1EA: XNCA 
    // TODO: Convert XNCA 
    // E1EB: LSRA 
    cpu.m_a >>= 1;
    label_E1EC:
    // E1EC: INCA 
    cpu.m_a++;
    // E1ED: INCA 
    cpu.m_a++;
    // E1EE: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E1EF: CLRA 
    cpu.m_a = 0;
    // E1F0: XCLRA 
    // TODO: Convert XCLRA 
    // E1F1: BRA $E247
    goto label_E247;
    // E1F3: CLRA 
    cpu.m_a = 0;
    // E1F4: BRA $E249
    goto label_E249;
    // E1F6: LSRB 
    cpu.m_b >>= 1;
    label_E1F7:
    // E1F7: CLRA 
    cpu.m_a = 0;
    // E1F8: NEGB 
    cpu.m_b = -cpu.m_b;
    label_E1F9:
    // E1F9: BRA $E24F
    goto label_E24F;
    // E1FB: ASLA 
    cpu.m_a <<= 1;
    // E1FC: LSRA 
    cpu.m_a >>= 1;
    // E1FD: BRA $E244
    goto label_E244;
    label_E1FF:
    // E1FF: TSTA 
    cpu.test_a();
    // E200: NEGB 
    cpu.m_b = -cpu.m_b;
    // E201: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E202: XNCB 
    // TODO: Convert XNCB 
    // E203: LSRA 
    cpu.m_a >>= 1;
    // E204: LDX -$C,U
    // TODO: Fix comma operator: LDX -$C,U
    // E206: ASLA 
    cpu.m_a <<= 1;
    // E207: LSRA 
    cpu.m_a >>= 1;
    // E208: BRA $E250
    goto label_E250;
    // E20A: CLRA 
    cpu.m_a = 0;
    // E20B: XNCB 
    // TODO: Convert XNCB 
    // E20C: COMA 
    cpu.m_a = ~cpu.m_a;
    // E20D: LSRA 
    cpu.m_a >>= 1;
    // E20E: BRA $E267
    goto label_E267;
    // E210: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E211: INCA 
    cpu.m_a++;
    // E212: INCA 
    cpu.m_a++;
    // E213: BRA $E257
    goto label_E257;
    // E215: LSRA 
    cpu.m_a >>= 1;
    // E216: BRA $E26F
    goto label_E26F;
    // E218: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E219: LSRB 
    cpu.m_b >>= 1;
    label_E21A:
    // E21A: ASLA 
    cpu.m_a <<= 1;
    // E21B: BRA $E276
    goto label_E276;
    // E21D: CLRA 
    cpu.m_a = 0;
    // E21E: LSRB 
    cpu.m_b >>= 1;
    label_E21F:
    // E21F: LDX $1,U
    // TODO: Fix comma operator: LDX $1,U
    // E221: INCA 
    cpu.m_a++;
    // E222: ASRB 
    // TODO: Convert ASRB 
    // E223: NEGA 
    cpu.m_a = -cpu.m_a;
    // E224: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E225: ADDD <$41
    cpu.m_d += 0x41;
    // E227: COMA 
    cpu.m_a = ~cpu.m_a;
    // E228: COMA 
    cpu.m_a = ~cpu.m_a;
    label_E229:
    // E229: CLRA 
    cpu.m_a = 0;
    // E22A: LSRB 
    cpu.m_b >>= 1;
    label_E22B:
    // E22B: XCLRA 
    // TODO: Convert XCLRA 
    // E22C: LSRB 
    cpu.m_b >>= 1;
    // E22D: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E22E: XCLRA 
    // TODO: Convert XCLRA 
    // E22F: ASRA 
    // TODO: Convert ASRA 
    // E230: BRA $E27B
    goto label_E27B;
    // E232: XCLRA 
    // TODO: Convert XCLRA 
    // E233: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E234: CLRA 
    cpu.m_a = 0;
    // E235: XNCB 
    // TODO: Convert XNCB 
    // E236: TSTA 
    cpu.test_a();
    // E237: NEGA 
    cpu.m_a = -cpu.m_a;
    // E238: LSRB 
    cpu.m_b >>= 1;
    // E239: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E23A:
    // E23A: CLRA 
    cpu.m_a = 0;
    // E23B: LDU #$4155
    cpu.m_u = 0x4155;
    // E23E: ASLB 
    cpu.m_b <<= 1;
    // E23F: BRA $E284
    goto label_E284;
    // E241: CLRA 
    cpu.m_a = 0;
    // E242: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E243: XCLRA 
    // TODO: Convert XCLRA 
    label_E244:
    // E244: ADDD <$4C
    cpu.m_d += 0x4C;
    // E246: LSRA 
    cpu.m_a >>= 1;
    label_E247:
    // E247: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E248: LSRB 
    cpu.m_b >>= 1;
    label_E249:
    // E249: BRA $E298
    goto label_E298;
    // E24B: LSRA 
    cpu.m_a >>= 1;
    // E24C: COMA 
    cpu.m_a = ~cpu.m_a;
    // E24D: ASLA 
    cpu.m_a <<= 1;
    // E24E: BRA $E293
    goto label_E293;
    label_E250:
    // E250: CLRA 
    cpu.m_a = 0;
    // E251: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E252: XCLRA 
    // TODO: Convert XCLRA 
    // E253: ADDD <$52
    cpu.m_d += 0x52;
    // E255: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E256: ASRA 
    // TODO: Convert ASRA 
    label_E257:
    // E257: ASLA 
    cpu.m_a <<= 1;
    // E258: LSRB 
    cpu.m_b >>= 1;
    // E259: BRA $E2A8
    goto label_E2A8;
    // E25B: LSRA 
    cpu.m_a >>= 1;
    // E25C: COMA 
    cpu.m_a = ~cpu.m_a;
    // E25D: ASLA 
    cpu.m_a <<= 1;
    // E25E: BRA $E2A3
    goto label_E2A3;
    // E260: CLRA 
    cpu.m_a = 0;
    // E261: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E262: XCLRA 
    // TODO: Convert XCLRA 
    // E263: ADDD <$54
    cpu.m_d += 0x54;
    // E265: CLRA 
    cpu.m_a = 0;
    // E266: LSRB 
    cpu.m_b >>= 1;
    label_E267:
    // E267: NEGA 
    cpu.m_a = -cpu.m_a;
    // E268: INCA 
    cpu.m_a++;
    // E269: BRA $E2AE
    goto label_E2AE;
    // E26B: CLRA 
    cpu.m_a = 0;
    // E26C: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E26D: XCLRA 
    // TODO: Convert XCLRA 
    // E26E: COMB 
    cpu.m_b = ~cpu.m_b;
    label_E26F:
    // E26F: BRA $E2C1
    goto label_E2C1;
    // E271: NEGA 
    cpu.m_a = -cpu.m_a;
    // E272: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E273: ANDB #$47
    cpu.m_b &= 0x47;
    // E275: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E276:
    // E276: TSTA 
    cpu.test_a();
    // E277: LSRA 
    cpu.m_a >>= 1;
    // E278: COMB 
    cpu.m_b = ~cpu.m_b;
    // E279: BRA $E2CB
    goto label_E2CB;
    label_E27B:
    // E27B: INCA 
    cpu.m_a++;
    // E27C: NEGA 
    cpu.m_a = -cpu.m_a;
    // E27D: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E27E: LSRA 
    cpu.m_a >>= 1;
    // E27F: ANDB #$48
    cpu.m_b &= 0x48;
    // E281: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E282: ASRA 
    // TODO: Convert ASRA 
    // E283: ASLA 
    cpu.m_a <<= 1;
    label_E284:
    // E284: BRA $E2DD
    goto label_E2DD;
    // E286: NEGA 
    cpu.m_a = -cpu.m_a;
    // E287: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E288: BITB #$54
    // TODO: Convert BITB #$54
    // E28A: CLRA 
    cpu.m_a = 0;
    // E28B: LSRB 
    cpu.m_b >>= 1;
    // E28C: NEGA 
    cpu.m_a = -cpu.m_a;
    // E28D: INCA 
    cpu.m_a++;
    // E28E: BRA $E2D7
    goto label_E2D7;
    // E290: NEGA 
    cpu.m_a = -cpu.m_a;
    // E291: TSTA 
    cpu.test_a();
    // E292: LSRA 
    cpu.m_a >>= 1;
    label_E293:
    // E293: BRA $E2E9
    goto label_E2E9;
    // E295: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E296: TSTA 
    cpu.test_a();
    // E297: LSRA 
    cpu.m_a >>= 1;
    label_E298:
    // E298: BRA $E2BA
    goto label_E2BA;
    // E29A: BRA $E2BC
    goto label_E2BC;
    // E29C: BRA $E2BE
    goto label_E2BE;
    // E29E: BRA $E2C0
    goto label_E2C0;
    // E2A0: BRA $E2C2
    goto label_E2C2;
    // E2A2: BRA $E2F7
    goto label_E2F7;
    // E2A4: LSRA 
    cpu.m_a >>= 1;
    // E2A5: COMA 
    cpu.m_a = ~cpu.m_a;
    // E2A6: CLRA 
    cpu.m_a = 0;
    // E2A7: XCLRA 
    // TODO: Convert XCLRA 
    label_E2A8:
    // E2A8: LSRA 
    cpu.m_a >>= 1;
    // E2A9: ADDD <$41
    cpu.m_d += 0x41;
    // E2AB: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E2AC: LSRA 
    cpu.m_a >>= 1;
    // E2AD: XNCB 
    // TODO: Convert XNCB 
    label_E2AE:
    // E2AE: NEGA 
    cpu.m_a = -cpu.m_a;
    // E2AF: ASRA 
    // TODO: Convert ASRA 
    // E2B0: LSRA 
    cpu.m_a >>= 1;
    // E2B1: BRA $E2FA
    goto label_E2FA;
    // E2B3: NEGA 
    cpu.m_a = -cpu.m_a;
    // E2B4: TSTA 
    cpu.test_a();
    // E2B5: LSRA 
    cpu.m_a >>= 1;
    // E2B6: BRA $E30C
    goto label_E30C;
    // E2B8: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E2B9: TSTA 
    cpu.test_a();
    label_E2BA:
    // E2BA: BITB #$54
    // TODO: Convert BITB #$54
    label_E2BC:
    // E2BC: CLRA 
    cpu.m_a = 0;
    // E2BD: LSRB 
    cpu.m_b >>= 1;
    label_E2BE:
    // E2BE: NEGA 
    cpu.m_a = -cpu.m_a;
    // E2BF: INCA 
    cpu.m_a++;
    label_E2C0:
    // E2C0: BRA $E316
    goto label_E316;
    label_E2C2:
    // E2C2: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E2C3: TSTA 
    cpu.test_a();
    // E2C4: LSRA 
    cpu.m_a >>= 1;
    // E2C5: BRA $E316
    goto label_E316;
    // E2C7: XCLRA 
    // TODO: Convert XCLRA 
    // E2C8: BRA $E2EA
    goto label_E2EA;
    // E2CA: BRA $E2EC
    goto label_E2EC;
    // E2CC: BRA $E2EE
    goto label_E2EE;
    // E2CE: BRA $E2F0
    goto label_E2F0;
    // E2D0: BRA $E2F2
    goto label_E2F2;
    // E2D2: BRA $E327
    goto label_E327;
    // E2D4: LSRA 
    cpu.m_a >>= 1;
    // E2D5: COMA 
    cpu.m_a = ~cpu.m_a;
    // E2D6: CLRA 
    cpu.m_a = 0;
    label_E2D7:
    // E2D7: XCLRA 
    // TODO: Convert XCLRA 
    // E2D8: LSRA 
    cpu.m_a >>= 1;
    // E2D9: ADDD <$50
    cpu.m_d += 0x50;
    // E2DB: LSRA 
    cpu.m_a >>= 1;
    // E2DC: XNCB 
    // TODO: Convert XNCB 
    label_E2DD:
    // E2DD: COMA 
    cpu.m_a = ~cpu.m_a;
    // E2DE: LSRA 
    cpu.m_a >>= 1;
    // E2DF: XCLRA 
    // TODO: Convert XCLRA 
    // E2E0: LSRB 
    cpu.m_b >>= 1;
    // E2E1: NEGA 
    cpu.m_a = -cpu.m_a;
    // E2E2: ASRA 
    // TODO: Convert ASRA 
    // E2E3: LSRA 
    cpu.m_a >>= 1;
    // E2E4: BRA $E335
    goto label_E335;
    // E2E6: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E2E7: BRA $E339
    goto label_E339;
    label_E2E9:
    // E2E9: INCA 
    cpu.m_a++;
    label_E2EA:
    // E2EA: NEGA 
    cpu.m_a = -cpu.m_a;
    // E2EB: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E2EC:
    // E2EC: BRA $E30E
    goto label_E30E;
    label_E2EE:
    // E2EE: BRA $E310
    goto label_E310;
    label_E2F0:
    // E2F0: BRA $E342
    goto label_E342;
    label_E2F2:
    // E2F2: LSRA 
    cpu.m_a >>= 1;
    // E2F3: XNCB 
    // TODO: Convert XNCB 
    // E2F4: COMA 
    cpu.m_a = ~cpu.m_a;
    // E2F5: LSRA 
    cpu.m_a >>= 1;
    // E2F6: XCLRA 
    // TODO: Convert XCLRA 
    label_E2F7:
    // E2F7: ANDB <$48
    cpu.m_b &= 0x48;
    // E2F9: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E2FA:
    // E2FA: COMB 
    cpu.m_b = ~cpu.m_b;
    // E2FB: LSRB 
    cpu.m_b >>= 1;
    // E2FC: CLRA 
    cpu.m_a = 0;
    // E2FD: XNCB 
    // TODO: Convert XNCB 
    // E2FE: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E2FF: BRA $E350
    goto label_E350;
    // E301: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E302: BRA $E34B
    goto label_E34B;
    // E304: NEGA 
    cpu.m_a = -cpu.m_a;
    // E305: TSTA 
    cpu.test_a();
    // E306: LSRA 
    cpu.m_a >>= 1;
    // E307: BRA $E35D
    goto label_E35D;
    // E309: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E30A: TSTA 
    cpu.test_a();
    // E30B: LSRA 
    cpu.m_a >>= 1;
    label_E30C:
    // E30C: ADDD <$47
    cpu.m_d += 0x47;
    label_E30E:
    // E30E: NEGA 
    cpu.m_a = -cpu.m_a;
    // E30F: TSTA 
    cpu.test_a();
    label_E310:
    // E310: LSRA 
    cpu.m_a >>= 1;
    // E311: BRA $E362
    goto label_E362;
    // E313: NEGB 
    cpu.m_b = -cpu.m_b;
    // E314: LSRB 
    cpu.m_b >>= 1;
    // E315: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E316:
    // E316: CLRA 
    cpu.m_a = 0;
    // E317: XCLRA 
    // TODO: Convert XCLRA 
    // E318: ADDD <$56
    cpu.m_d += 0x56;
    // E31A: NEGA 
    cpu.m_a = -cpu.m_a;
    // E31B: INCA 
    cpu.m_a++;
    // E31C: LSRB 
    cpu.m_b >>= 1;
    // E31D: LSRA 
    cpu.m_a >>= 1;
    // E31E: BRA $E36F
    goto label_E36F;
    // E320: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E321: BRA $E364
    goto label_E364;
    // E323: BRA $E368
    goto label_E368;
    // E325: CLRA 
    cpu.m_a = 0;
    // E326: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E327:
    // E327: LDU #$4C45
    cpu.m_u = 0x4C45;
    // E32A: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E32B: LSRB 
    cpu.m_b >>= 1;
    // E32C: BRA $E37B
    goto label_E37B;
    // E32E: LSRA 
    cpu.m_a >>= 1;
    // E32F: COMA 
    cpu.m_a = ~cpu.m_a;
    // E330: ASLA 
    cpu.m_a <<= 1;
    // E331: BRA $E389
    goto label_E389;
    // E333: NEGA 
    cpu.m_a = -cpu.m_a;
    // E334: INCA 
    cpu.m_a++;
    label_E335:
    // E335: LSRB 
    cpu.m_b >>= 1;
    // E336: BITB #$52
    // TODO: Convert BITB #$52
    // E338: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E339:
    // E339: ASRA 
    // TODO: Convert ASRA 
    // E33A: ASLA 
    cpu.m_a <<= 1;
    // E33B: LSRB 
    cpu.m_b >>= 1;
    // E33C: BRA $E38B
    goto label_E38B;
    // E33E: LSRA 
    cpu.m_a >>= 1;
    // E33F: COMA 
    cpu.m_a = ~cpu.m_a;
    // E340: ASLA 
    cpu.m_a <<= 1;
    // E341: BRA $E399
    goto label_E399;
    // E343: NEGA 
    cpu.m_a = -cpu.m_a;
    // E344: INCA 
    cpu.m_a++;
    // E345: LSRB 
    cpu.m_b >>= 1;
    // E346: BITB #$42
    // TODO: Convert BITB #$42
    // E348: CLRA 
    cpu.m_a = 0;
    // E349: XCLRA 
    // TODO: Convert XCLRA 
    // E34A: LSRB 
    cpu.m_b >>= 1;
    label_E34B:
    // E34B: COMB 
    cpu.m_b = ~cpu.m_b;
    // E34C: BRA $E38F
    goto label_E38F;
    // E34E: LSRA 
    cpu.m_a >>= 1;
    // E34F: LSRA 
    cpu.m_a >>= 1;
    label_E350:
    // E350: LSRA 
    cpu.m_a >>= 1;
    // E351: SBCB <$53
    // TODO: Convert SBCB <$53
    // E353: LSRB 
    cpu.m_b >>= 1;
    // E354: NEGA 
    cpu.m_a = -cpu.m_a;
    // E355: XNCB 
    // TODO: Convert XNCB 
    // E356: LSRB 
    cpu.m_b >>= 1;
    // E357: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E358: XCLRA 
    // TODO: Convert XCLRA 
    // E359: ASRA 
    // TODO: Convert ASRA 
    // E35A: BRA $E3AF
    goto label_E3AF;
    // E35C: ASLA 
    cpu.m_a <<= 1;
    label_E35D:
    // E35D: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E35E: LSRA 
    cpu.m_a >>= 1;
    // E35F: INCA 
    cpu.m_a++;
    // E360: ANDB #$50
    cpu.m_b &= 0x50;
    label_E362:
    // E362: INCA 
    cpu.m_a++;
    // E363: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E364:
    // E364: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E365: BRA $E3AB
    goto label_E3AB;
    // E367: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E368:
    // E368: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E369: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E36A: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E36B: COMA 
    cpu.m_a = ~cpu.m_a;
    // E36C: LSRB 
    cpu.m_b >>= 1;
    // E36D: INCA 
    cpu.m_a++;
    // E36E: LSRB 
    cpu.m_b >>= 1;
    label_E36F:
    // E36F: ADCB <$42
    // TODO: Convert ADCB <$42
    // E371: CLRA 
    cpu.m_a = 0;
    // E372: XCLRA 
    // TODO: Convert XCLRA 
    // E373: LSRB 
    cpu.m_b >>= 1;
    // E374: COMB 
    cpu.m_b = ~cpu.m_b;
    // E375: BRA $E3CA
    goto label_E3CA;
    // E377: ASLA 
    cpu.m_a <<= 1;
    // E378: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E379: LSRA 
    cpu.m_a >>= 1;
    // E37A: INCA 
    cpu.m_a++;
    label_E37B:
    // E37B: ANDB #$4D
    cpu.m_b &= 0x4D;
    // E37D: LSRB 
    cpu.m_b >>= 1;
    // E37E: COMB 
    cpu.m_b = ~cpu.m_b;
    // E37F: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E380: COMA 
    cpu.m_a = ~cpu.m_a;
    // E381: BRA $E3CC
    goto label_E3CC;
    // E383: XCLRA 
    // TODO: Convert XCLRA 
    // E384: BRA $E3C7
    goto label_E3C7;
    // E386: LSRB 
    cpu.m_b >>= 1;
    // E387: LSRB 
    cpu.m_b >>= 1;
    // E388: XNCB 
    // TODO: Convert XNCB 
    label_E389:
    // E389: NEGA 
    cpu.m_a = -cpu.m_a;
    // E38A: COMA 
    cpu.m_a = ~cpu.m_a;
    label_E38B:
    // E38B: ANDB <$52
    cpu.m_b &= 0x52;
    // E38D: LSRA 
    cpu.m_a >>= 1;
    // E38E: COMB 
    cpu.m_b = ~cpu.m_b;
    label_E38F:
    // E38F: LSRA 
    cpu.m_a >>= 1;
    // E390: LSRB 
    cpu.m_b >>= 1;
    // E391: BRA $E3DB
    goto label_E3DB;
    // E393: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E394: ASRA 
    // TODO: Convert ASRA 
    // E395: ASLA 
    cpu.m_a <<= 1;
    // E396: BRA $E3EB
    goto label_E3EB;
    // E398: COMA 
    cpu.m_a = ~cpu.m_a;
    label_E399:
    // E399: CLRA 
    cpu.m_a = 0;
    // E39A: XNCB 
    // TODO: Convert XNCB 
    // E39B: LSRA 
    cpu.m_a >>= 1;
    // E39C: ADDD <$52
    cpu.m_d += 0x52;
    // E39E: LSRA 
    cpu.m_a >>= 1;
    // E39F: COMB 
    cpu.m_b = ~cpu.m_b;
    // E3A0: LSRA 
    cpu.m_a >>= 1;
    // E3A1: LSRB 
    cpu.m_b >>= 1;
    // E3A2: BRA $E3F8
    goto label_E3F8;
    // E3A4: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E3A5: TSTA 
    cpu.test_a();
    // E3A6: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E3A7: XCLRA 
    // TODO: Convert XCLRA 
    // E3A8: ASRA 
    // TODO: Convert ASRA 
    // E3A9: BRA $E3F4
    goto label_E3F4;
    label_E3AB:
    // E3AB: XCLRA 
    // TODO: Convert XCLRA 
    // E3AC: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E3AD: XSTU #$5245
    // TODO: Convert XSTU #$5245
    // E3B0: COMB 
    cpu.m_b = ~cpu.m_b;
    // E3B1: LSRA 
    cpu.m_a >>= 1;
    // E3B2: LSRB 
    cpu.m_b >>= 1;
    // E3B3: BRA $E404
    goto label_E404;
    // E3B5: NEGB 
    cpu.m_b = -cpu.m_b;
    // E3B6: LSRB 
    cpu.m_b >>= 1;
    // E3B7: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E3B8: CLRA 
    cpu.m_a = 0;
    // E3B9: XCLRA 
    // TODO: Convert XCLRA 
    // E3BA: ADDD <$54
    cpu.m_d += 0x54;
    // E3BC: LSRA 
    cpu.m_a >>= 1;
    // E3BD: COMB 
    cpu.m_b = ~cpu.m_b;
    // E3BE: LSRB 
    cpu.m_b >>= 1;
    // E3BF: BRA $E40F
    goto label_E40F;
    // E3C1: CLRA 
    cpu.m_a = 0;
    // E3C2: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E3C3: XNCB 
    // TODO: Convert XNCB 
    // E3C4: NEGA 
    cpu.m_a = -cpu.m_a;
    // E3C5: XHCF 
    // TODO: Convert XHCF 
    // E3C6: LSRB 
    cpu.m_b >>= 1;
    label_E3C7:
    // E3C7: NEGB 
    cpu.m_b = -cpu.m_b;
    // E3C8: BGE $E40E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE40E;
    label_E3CA:
    // E3CA: CLRA 
    cpu.m_a = 0;
    // E3CB: ASRB 
    // TODO: Convert ASRB 
    label_E3CC:
    // E3CC: XCLRA 
    // TODO: Convert XCLRA 
    // E3CD: BRA $E423
    goto label_E423;
    // E3CF: CLRA 
    cpu.m_a = 0;
    // E3D0: BRA $E425
    goto label_E425;
    // E3D2: LSRA 
    cpu.m_a >>= 1;
    // E3D3: INCA 
    cpu.m_a++;
    // E3D4: LSRA 
    cpu.m_a >>= 1;
    // E3D5: COMA 
    cpu.m_a = ~cpu.m_a;
    // E3D6: LSRB 
    cpu.m_b >>= 1;
    // E3D7: BRA $E422
    goto label_E422;
    // E3D9: LSRB 
    cpu.m_b >>= 1;
    // E3DA: LSRA 
    cpu.m_a >>= 1;
    label_E3DB:
    // E3DB: XHCF 
    // TODO: Convert XHCF 
    // E3DC: NEGB 
    cpu.m_b = -cpu.m_b;
    // E3DD: LSRB 
    cpu.m_b >>= 1;
    // E3DE: INCA 
    cpu.m_a++;
    // E3DF: INCA 
    cpu.m_a++;
    // E3E0: BRA $E42E
    goto label_E42E;
    label_E3E2:
    // E3E2: LSRA 
    cpu.m_a >>= 1;
    // E3E3: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E3E4: LSRB 
    cpu.m_b >>= 1;
    // E3E5: BRA $E42D
    goto label_E42D;
    // E3E7: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E3E8: XNCB 
    // TODO: Convert XNCB 
    // E3E9: LSRA 
    cpu.m_a >>= 1;
    // E3EA: BRA $E440
    goto label_E440;
    // E3EC: CLRA 
    cpu.m_a = 0;
    // E3ED: BRA $E432
    goto label_E432;
    // E3EF: ASLA 
    cpu.m_a <<= 1;
    // E3F0: NEGA 
    cpu.m_a = -cpu.m_a;
    // E3F1: XCLRA 
    // TODO: Convert XCLRA 
    // E3F2: ASRA 
    // TODO: Convert ASRA 
    // E3F3: LSRA 
    cpu.m_a >>= 1;
    label_E3F4:
    // E3F4: BRA $E449
    goto label_E449;
    // E3F6: LSRA 
    cpu.m_a >>= 1;
    // E3F7: LSRB 
    cpu.m_b >>= 1;
    label_E3F8:
    // E3F8: LSRB 
    cpu.m_b >>= 1;
    // E3F9: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E3FA: XCLRA 
    // TODO: Convert XCLRA 
    // E3FB: XSTB #$46
    // TODO: Convert XSTB #$46
    label_E3FD:
    // E3FD: XNCB 
    // TODO: Convert XNCB 
    // E3FE: LSRA 
    cpu.m_a >>= 1;
    // E3FF: LSRA 
    cpu.m_a >>= 1;
    // E400: BRA $E452
    goto label_E452;
    // E402: INCA 
    cpu.m_a++;
    // E403: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E404:
    // E404: ADCB <$32
    // TODO: Convert ADCB <$32
    label_E406:
    // E406: BRA $E44B
    goto label_E44B;
    // E408: XNCB 
    // TODO: Convert XNCB 
    // E409: LSRA 
    cpu.m_a >>= 1;
    // E40A: LSRA 
    cpu.m_a >>= 1;
    // E40B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E40C: LSRB 
    cpu.m_b >>= 1;
    // E40D: ADDD <$31
    cpu.m_d += 0x31;
    label_E40F:
    // E40F: BRA $E454
    goto label_E454;
    // E411: XNCB 
    // TODO: Convert XNCB 
    // E412: LSRA 
    cpu.m_a >>= 1;
    // E413: LSRA 
    cpu.m_a >>= 1;
    // E414: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E415: ANDB <$25
    cpu.m_b &= 0x25;
    // E417: BRA $E45C
    goto label_E45C;
    // E419: XNCB 
    // TODO: Convert XNCB 
    // E41A: LSRA 
    cpu.m_a >>= 1;
    // E41B: LSRA 
    cpu.m_a >>= 1;
    // E41C: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E41D: ANDB <$B1
    cpu.m_b &= 0xB1;
    // E41F: SBCA $B1B4
    // TODO: Convert SBCA $B1B4
    label_E422:
    // E422: BITA $B64E
    // TODO: Convert BITA $B64E
    label_E425:
    // E425: CLRA 
    cpu.m_a = 0;
    // E426: XCLRA 
    // TODO: Convert XCLRA 
    // E427: BITB #$32
    // TODO: Convert BITB #$32
    // E429: BRA $E472
    goto label_E472;
    // E42B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E42C: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    label_E42D:
    // E42D: LSRA 
    cpu.m_a >>= 1;
    label_E42E:
    // E42E: COMB 
    cpu.m_b = ~cpu.m_b;
    // E42F: BRA $E3E2
    goto label_E3E2;
    // E431: PSHS Y
    // TODO: Convert PSHS Y
    // E433: ASRA 
    // TODO: Convert ASRA 
    // E434: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E435: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E436: LSRA 
    cpu.m_a >>= 1;
    // E437: COMB 
    cpu.m_b = ~cpu.m_b;
    // E438: BRA $E3EB
    goto label_E3EB;
    // E43A: PSHS Y
    // TODO: Convert PSHS Y
    // E43C: ASRA 
    // TODO: Convert ASRA 
    // E43D: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E43E: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E43F: LSRA 
    cpu.m_a >>= 1;
    label_E440:
    // E440: COMB 
    cpu.m_b = ~cpu.m_b;
    // E441: BRA $E3F5
    goto label_E3F5;
    // E443: PULS Y
    // TODO: Convert PULS Y
    // E445: ASRA 
    // TODO: Convert ASRA 
    // E446: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E447: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E448: LSRA 
    cpu.m_a >>= 1;
    label_E449:
    // E449: COMB 
    cpu.m_b = ~cpu.m_b;
    // E44A: BRA $E3FD
    goto label_E3FD;
    // E44C: LEAU $0,Y
    // TODO: Fix comma operator: LEAU $0,Y
    // E44E: ASRA 
    // TODO: Convert ASRA 
    // E44F: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E450: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E451: LSRA 
    cpu.m_a >>= 1;
    label_E452:
    // E452: COMB 
    cpu.m_b = ~cpu.m_b;
    // E453: BRA $E406
    goto label_E406;
    // E455: XCLRA 
    // TODO: Convert XCLRA 
    // E456: CLRA 
    cpu.m_a = 0;
    // E457: XCLRA 
    // TODO: Convert XCLRA 
    // E458: BITB #$B6
    // TODO: Convert BITB #$B6
    // E45A: STA $B8B9
    cpu.write_memory(0xB8B9, cpu.m_a);
    // E45D: LSRA 
    cpu.m_a >>= 1;
    // E45E: NEGA 
    cpu.m_a = -cpu.m_a;
    // E45F: COMB 
    cpu.m_b = ~cpu.m_b;
    // E460: ADCB <$4D
    // TODO: Convert ADCB <$4D
    // E462: CLRA 
    cpu.m_a = 0;
    // E463: LSRA 
    cpu.m_a >>= 1;
    // E464: LSRA 
    cpu.m_a >>= 1;
    // E465: XNCB 
    // TODO: Convert XNCB 
    // E466: NEGA 
    cpu.m_a = -cpu.m_a;
    // E467: LSRB 
    cpu.m_b >>= 1;
    // E468: BITB #$48
    // TODO: Convert BITB #$48
    // E46A: NEGA 
    cpu.m_a = -cpu.m_a;
    // E46B: XNCB 
    // TODO: Convert XNCB 
    // E46C: ANDB #$48
    cpu.m_b &= 0x48;
    // E46E: NEGA 
    cpu.m_a = -cpu.m_a;
    // E46F: XNCB 
    // TODO: Convert XNCB 
    // E470: LSRA 
    cpu.m_a >>= 1;
    // E471: LSRA 
    cpu.m_a >>= 1;
    label_E472:
    // E472: COMB 
    cpu.m_b = ~cpu.m_b;
    // E473: ANDB <$B0
    cpu.m_b &= 0xB0;
    // E475: CMPA $B2B3
    cpu.compare_a(cpu.read_memory(0xB2B3));
    label_E478:
    // E478: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E479: LSRA 
    cpu.m_a >>= 1;
    // E47A: ADDD <$4E
    cpu.m_d += 0x4E;
    // E47C: XSTU #$4ECF
    // TODO: Convert XSTU #$4ECF
    // E47F: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E480: LSRA 
    cpu.m_a >>= 1;
    // E481: ADDD <$4E
    cpu.m_d += 0x4E;
    // E483: XSTU #$5945
    // TODO: Convert XSTU #$5945
    // E486: ADDD <$4E
    cpu.m_d += 0x4E;
    // E488: XSTU #$5945
    // TODO: Convert XSTU #$5945
    // E48B: ADDD <$4E
    cpu.m_d += 0x4E;
    // E48D: XSTU #$5945
    // TODO: Convert XSTU #$5945
    // E490: ADDD <$4E
    cpu.m_d += 0x4E;
    // E492: CLRA 
    cpu.m_a = 0;
    // E493: BRA $E4DA
    goto label_E4DA;
    // E495: XNCB 
    // TODO: Convert XNCB 
    // E496: XNCB 
    // TODO: Convert XNCB 
    // E497: CLRA 
    cpu.m_a = 0;
    // E498: XNCB 
    // TODO: Convert XNCB 
    // E499: ADDD <$45
    cpu.m_d += 0x45;
    // E49B: XNCB 
    // TODO: Convert XNCB 
    // E49C: XNCB 
    // TODO: Convert XNCB 
    // E49D: CLRA 
    cpu.m_a = 0;
    // E49E: XNCB 
    // TODO: Convert XNCB 
    // E49F: BRA $E4E2
    goto label_E4E2;
    // E4A1: ANDB <$53
    cpu.m_b &= 0x53;
    // E4A3: ASRB 
    // TODO: Convert ASRB 
    // E4A4: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E4A5: LSRB 
    cpu.m_b >>= 1;
    // E4A6: COMA 
    cpu.m_a = ~cpu.m_a;
    // E4A7: ASLA 
    cpu.m_a <<= 1;
    // E4A8: BRA $E4FE
    goto label_E4FE;
    // E4AA: LSRA 
    cpu.m_a >>= 1;
    // E4AB: COMB 
    cpu.m_b = ~cpu.m_b;
    // E4AC: ANDB <$4C
    cpu.m_b &= 0x4C;
    // E4AE: LSRA 
    cpu.m_a >>= 1;
    // E4AF: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E4B0: LSRB 
    cpu.m_b >>= 1;
    // E4B1: BRA $E4F9
    goto label_E4F9;
    // E4B3: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E4B4: XNCB 
    // TODO: Convert XNCB 
    // E4B5: BITB #$52
    // TODO: Convert BITB #$52
    // E4B7: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E4B8: ASRA 
    // TODO: Convert ASRA 
    // E4B9: ASLA 
    cpu.m_a <<= 1;
    // E4BA: LSRB 
    cpu.m_b >>= 1;
    // E4BB: BRA $E503
    goto label_E503;
    // E4BD: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_E4BE:
    // E4BE: XNCB 
    // TODO: Convert XNCB 
    // E4BF: BITB #$53
    // TODO: Convert BITB #$53
    // E4C1: NEGB 
    cpu.m_b = -cpu.m_b;
    // E4C2: NEGA 
    cpu.m_a = -cpu.m_a;
    // E4C3: XNCB 
    // TODO: Convert XNCB 
    // E4C4: LSRA 
    cpu.m_a >>= 1;
    // E4C5: BRA $E478
    goto label_E478;
    // E4C7: COMB 
    cpu.m_b = ~cpu.m_b;
    // E4C8: LSRA 
    cpu.m_a >>= 1;
    // E4C9: INCA 
    cpu.m_a++;
    // E4CA: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E4CB: BRA $E521
    goto label_E521;
    // E4CD: LSRA 
    cpu.m_a >>= 1;
    // E4CE: COMB 
    cpu.m_b = ~cpu.m_b;
    // E4CF: ANDB <$53
    cpu.m_b &= 0x53;
    // E4D1: INCA 
    cpu.m_a++;
    // E4D2: NEGA 
    cpu.m_a = -cpu.m_a;
    // E4D3: XHCF 
    // TODO: Convert XHCF 
    // E4D4: NEGA 
    cpu.m_a = -cpu.m_a;
    // E4D5: LSRB 
    cpu.m_b >>= 1;
    // E4D6: ASLB 
    cpu.m_b <<= 1;
    // E4D7: BRA $E51C
    goto label_E51C;
    // E4D9: CLRA 
    cpu.m_a = 0;
    label_E4DA:
    // E4DA: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E4DB: LDU #$4C45
    cpu.m_u = 0x4C45;
    // E4DE: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E4DF: LSRB 
    cpu.m_b >>= 1;
    // E4E0: BRA $E525
    goto label_E525;
    label_E4E2:
    // E4E2: CLRA 
    cpu.m_a = 0;
    // E4E3: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E4E4: LDU #$5249
    cpu.m_u = 0x5249;
    // E4E7: ASRA 
    // TODO: Convert ASRA 
    // E4E8: ASLA 
    cpu.m_a <<= 1;
    // E4E9: LSRB 
    cpu.m_b >>= 1;
    // E4EA: BRA $E52F
    goto label_E52F;
    // E4EC: CLRA 
    cpu.m_a = 0;
    // E4ED: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E4EE: LDU #$A04C
    cpu.m_u = 0xA04C;
    // E4F1: LSRA 
    cpu.m_a >>= 1;
    // E4F2: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E4F3: LSRB 
    cpu.m_b >>= 1;
    // E4F4: BRA $E54A
    goto label_E54A;
    // E4F6: ASLA 
    cpu.m_a <<= 1;
    // E4F7: LSRB 
    cpu.m_b >>= 1;
    // E4F8: TSTA 
    cpu.test_a();
    label_E4F9:
    // E4F9: SBCB #$52
    // TODO: Convert SBCB #$52
    // E4FB: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E4FC: ASRA 
    // TODO: Convert ASRA 
    // E4FD: ASLA 
    cpu.m_a <<= 1;
    label_E4FE:
    // E4FE: LSRB 
    cpu.m_b >>= 1;
    // E4FF: BRA $E555
    goto label_E555;
    // E501: ASLA 
    cpu.m_a <<= 1;
    // E502: LSRB 
    cpu.m_b >>= 1;
    label_E503:
    // E503: TSTA 
    cpu.test_a();
    // E504: SBCB #$53
    // TODO: Convert SBCB #$53
    // E506: NEGB 
    cpu.m_b = -cpu.m_b;
    // E507: NEGA 
    cpu.m_a = -cpu.m_a;
    // E508: XNCB 
    // TODO: Convert XNCB 
    // E509: LSRA 
    cpu.m_a >>= 1;
    // E50A: BRA $E4BE
    goto label_E4BE;
    // E50C: SUBA -$10,U
    // TODO: Fix comma operator: SUBA -$10,U
    // E50E: CLRA 
    cpu.m_a = 0;
    // E50F: LSRB 
    cpu.m_b >>= 1;
    // E510: BRA $E566
    goto label_E566;
    // E512: LSRA 
    cpu.m_a >>= 1;
    // E513: COMB 
    cpu.m_b = ~cpu.m_b;
    // E514: ANDB <$48
    cpu.m_b &= 0x48;
    // E516: NEGA 
    cpu.m_a = -cpu.m_a;
    // E517: XNCB 
    // TODO: Convert XNCB 
    // E518: LSRA 
    cpu.m_a >>= 1;
    // E519: ASRB 
    // TODO: Convert ASRB 
    // E51A: NEGA 
    cpu.m_a = -cpu.m_a;
    // E51B: XNCB 
    // TODO: Convert XNCB 
    label_E51C:
    // E51C: LSRA 
    cpu.m_a >>= 1;
    // E51D: BRA $E564
    goto label_E564;
    // E51F: XNCB 
    // TODO: Convert XNCB 
    // E520: XNCB 
    // TODO: Convert XNCB 
    label_E521:
    // E521: CLRA 
    cpu.m_a = 0;
    // E522: XNCB 
    // TODO: Convert XNCB 
    // E523: ADDD <$4E
    cpu.m_d += 0x4E;
    label_E525:
    // E525: CLRA 
    cpu.m_a = 0;
    // E526: BRA $E56D
    goto label_E56D;
    // E528: XNCB 
    // TODO: Convert XNCB 
    // E529: XNCB 
    // TODO: Convert XNCB 
    // E52A: CLRA 
    cpu.m_a = 0;
    // E52B: XNCB 
    // TODO: Convert XNCB 
    // E52C: COMB 
    cpu.m_b = ~cpu.m_b;
    // E52D: BRA $E573
    goto label_E573;
    label_E52F:
    // E52F: LSRA 
    cpu.m_a >>= 1;
    // E530: LSRB 
    cpu.m_b >>= 1;
    // E531: LSRA 
    cpu.m_a >>= 1;
    // E532: COMA 
    cpu.m_a = ~cpu.m_a;
    // E533: LSRB 
    cpu.m_b >>= 1;
    // E534: LSRA 
    cpu.m_a >>= 1;
    // E535: ANDB #$50
    cpu.m_b &= 0x50;
    // E537: XNCB 
    // TODO: Convert XNCB 
    // E538: CLRA 
    cpu.m_a = 0;
    // E539: ASRA 
    // TODO: Convert ASRA 
    // E53A: XNCB 
    // TODO: Convert XNCB 
    // E53B: NEGA 
    cpu.m_a = -cpu.m_a;
    // E53C: TSTA 
    cpu.test_a();
    // E53D: BRA $E591
    goto label_E591;
    // E53F: NEGA 
    cpu.m_a = -cpu.m_a;
    // E540: TSTA 
    cpu.test_a();
    // E541: BRA $E584
    goto label_E584;
    // E543: LSRB 
    cpu.m_b >>= 1;
    // E544: BRA $E578
    goto label_E578;
    // E546: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E547: EORB #$4D
    cpu.m_b ^= 0x4D;
    // E549: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E54A:
    // E54A: LSRB 
    cpu.m_b >>= 1;
    // E54B: ASLA 
    cpu.m_a <<= 1;
    // E54C: BRA $E5A0
    goto label_E5A0;
    // E54E: NEGA 
    cpu.m_a = -cpu.m_a;
    // E54F: TSTA 
    cpu.test_a();
    // E550: BRA $E593
    goto label_E593;
    // E552: LSRB 
    cpu.m_b >>= 1;
    // E553: BRA $E58A
    goto label_E58A;
    label_E555:
    // E555: LDB #$4D
    cpu.m_b = 0x4D;
    // E557: NEGA 
    cpu.m_a = -cpu.m_a;
    // E558: LSRB 
    cpu.m_b >>= 1;
    // E559: ASLA 
    cpu.m_a <<= 1;
    // E55A: BRA $E5AE
    goto label_E5AE;
    // E55C: NEGA 
    cpu.m_a = -cpu.m_a;
    // E55D: TSTA 
    cpu.test_a();
    // E55E: BRA $E5A1
    goto label_E5A1;
    // E560: LSRB 
    cpu.m_b >>= 1;
    // E561: BRA $E598
    goto label_E598;
    // E563: EORB #$56
    cpu.m_b ^= 0x56;
    // E565: ASRA 
    // TODO: Convert ASRA 
    label_E566:
    // E566: BRA $E5BA
    goto label_E5BA;
    // E568: NEGA 
    cpu.m_a = -cpu.m_a;
    // E569: TSTA 
    cpu.test_a();
    // E56A: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y
    // E56C: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E56D:
    // E56D: LSRB 
    cpu.m_b >>= 1;
    // E56E: BRA $E5A3
    goto label_E5A3;
    // E570: LDD #$5647
    cpu.m_d = 0x5647;
    label_E573:
    // E573: BRA $E5C7
    goto label_E5C7;
    // E575: NEGA 
    cpu.m_a = -cpu.m_a;
    // E576: TSTA 
    cpu.test_a();
    // E577: LEAY $0,Y
    // TODO: Fix comma operator: LEAY $0,Y
    // E579: NEGA 
    cpu.m_a = -cpu.m_a;
    // E57A: LSRB 
    cpu.m_b >>= 1;
    // E57B: BRA $E5B0
    goto label_E5B0;
    // E57D: XHCF 
    // TODO: Convert XHCF 
    // E57E: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E57F: ASRA 
    // TODO: Convert ASRA 
    // E580: BRA $E5D4
    goto label_E5D4;
    // E582: NEGA 
    cpu.m_a = -cpu.m_a;
    // E583: TSTA 
    cpu.test_a();
    label_E584:
    // E584: LEAS $0,Y
    // TODO: Fix comma operator: LEAS $0,Y
    // E586: NEGA 
    cpu.m_a = -cpu.m_a;
    // E587: LSRB 
    cpu.m_b >>= 1;
    // E588: BRA $E5BD
    goto label_E5BD;
    label_E58A:
    // E58A: SUBB <$56
    cpu.m_b -= 0x56;
    // E58C: ASRA 
    // TODO: Convert ASRA 
    // E58D: BRA $E5E1
    goto label_E5E1;
    // E58F: NEGA 
    cpu.m_a = -cpu.m_a;
    // E590: TSTA 
    cpu.test_a();
    label_E591:
    // E591: LEAU $0,Y
    // TODO: Fix comma operator: LEAU $0,Y
    label_E593:
    // E593: NEGA 
    cpu.m_a = -cpu.m_a;
    // E594: LSRB 
    cpu.m_b >>= 1;
    // E595: BRA $E5CB
    goto label_E5CB;
    // E597: LDD #$5647
    cpu.m_d = 0x5647;
    // E59A: BRA $E5EE
    goto label_E5EE;
    // E59C: NEGA 
    cpu.m_a = -cpu.m_a;
    // E59D: TSTA 
    cpu.test_a();
    // E59E: PSHS Y
    // TODO: Convert PSHS Y
    label_E5A0:
    // E5A0: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E5A1:
    // E5A1: LSRB 
    cpu.m_b >>= 1;
    // E5A2: BRA $E5D8
    goto label_E5D8;
    // E5A4: XHCF 
    // TODO: Convert XHCF 
    // E5A5: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E5A6: ASRA 
    // TODO: Convert ASRA 
    // E5A7: BRA $E5FB
    goto label_E5FB;
    // E5A9: NEGA 
    cpu.m_a = -cpu.m_a;
    // E5AA: TSTA 
    cpu.test_a();
    // E5AB: PULS Y
    // TODO: Convert PULS Y
    // E5AD: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E5AE:
    // E5AE: LSRB 
    cpu.m_b >>= 1;
    // E5AF: BRA $E5E5
    goto label_E5E5;
    // E5B1: SUBB <$4E
    cpu.m_b -= 0x4E;
    // E5B3: CLRA 
    cpu.m_a = 0;
    // E5B4: XCLRA 
    // TODO: Convert XCLRA 
    // E5B5: BRA $E60D
    goto label_E60D;
    // E5B7: CLRA 
    cpu.m_a = 0;
    // E5B8: INCA 
    cpu.m_a++;
    // E5B9: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E5BA:
    // E5BA: LSRB 
    cpu.m_b >>= 1;
    // E5BB: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E5BC: INCA 
    cpu.m_a++;
    label_E5BD:
    // E5BD: LSRA 
    cpu.m_a >>= 1;
    // E5BE: BRA $E612
    goto label_E612;
    // E5C0: NEGA 
    cpu.m_a = -cpu.m_a;
    // E5C1: TSTA 
    cpu.test_a();
    // E5C2: BRA $E605
    goto label_E605;
    // E5C4: LSRB 
    cpu.m_b >>= 1;
    // E5C5: BRA $E5F8
    goto label_E5F8;
    label_E5C7:
    // E5C7: BITB #$50
    // TODO: Convert BITB #$50
    // E5C9: XNCB 
    // TODO: Convert XNCB 
    // E5CA: CLRA 
    cpu.m_a = 0;
    label_E5CB:
    // E5CB: ASRA 
    // TODO: Convert ASRA 
    // E5CC: XNCB 
    // TODO: Convert XNCB 
    // E5CD: NEGA 
    cpu.m_a = -cpu.m_a;
    // E5CE: TSTA 
    cpu.test_a();
    // E5CF: BRA $E623
    goto label_E623;
    // E5D1: CLRA 
    cpu.m_a = 0;
    // E5D2: TSTA 
    cpu.test_a();
    // E5D3: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y
    // E5D5: NEGA 
    cpu.m_a = -cpu.m_a;
    // E5D6: LSRB 
    cpu.m_b >>= 1;
    // E5D7: BRA $E60A
    goto label_E60A;
    // E5D9: LDB #$50
    cpu.m_b = 0x50;
    // E5DB: XNCB 
    // TODO: Convert XNCB 
    // E5DC: CLRA 
    cpu.m_a = 0;
    // E5DD: ASRA 
    // TODO: Convert ASRA 
    // E5DE: XNCB 
    // TODO: Convert XNCB 
    // E5DF: NEGA 
    cpu.m_a = -cpu.m_a;
    // E5E0: TSTA 
    cpu.test_a();
    label_E5E1:
    // E5E1: BRA $E635
    goto label_E635;
    // E5E3: CLRA 
    cpu.m_a = 0;
    // E5E4: TSTA 
    cpu.test_a();
    label_E5E5:
    // E5E5: LEAY $0,Y
    // TODO: Fix comma operator: LEAY $0,Y
    // E5E7: NEGA 
    cpu.m_a = -cpu.m_a;
    // E5E8: LSRB 
    cpu.m_b >>= 1;
    // E5E9: BRA $E61C
    goto label_E61C;
    // E5EB: ASLA 
    cpu.m_a <<= 1;
    // E5EC: ORB #$50
    cpu.m_b |= 0x50;
    label_E5EE:
    // E5EE: XNCB 
    // TODO: Convert XNCB 
    // E5EF: CLRA 
    cpu.m_a = 0;
    // E5F0: ASRA 
    // TODO: Convert ASRA 
    // E5F1: XNCB 
    // TODO: Convert XNCB 
    // E5F2: NEGA 
    cpu.m_a = -cpu.m_a;
    // E5F3: TSTA 
    cpu.test_a();
    // E5F4: BRA $E648
    goto label_E648;
    // E5F6: CLRA 
    cpu.m_a = 0;
    // E5F7: TSTA 
    cpu.test_a();
    label_E5F8:
    // E5F8: LEAS $0,Y
    // TODO: Fix comma operator: LEAS $0,Y
    // E5FA: NEGA 
    cpu.m_a = -cpu.m_a;
    label_E5FB:
    // E5FB: LSRB 
    cpu.m_b >>= 1;
    // E5FC: BRA $E62F
    goto label_E62F;
    // E5FE: DECA 
    cpu.m_a--;
    // E5FF: ADDB #$50
    cpu.m_b += 0x50;
    // E601: XNCB 
    // TODO: Convert XNCB 
    // E602: CLRA 
    cpu.m_a = 0;
    // E603: ASRA 
    // TODO: Convert ASRA 
    // E604: XNCB 
    // TODO: Convert XNCB 
    label_E605:
    // E605: NEGA 
    cpu.m_a = -cpu.m_a;
    // E606: TSTA 
    cpu.test_a();
    // E607: BRA $E65B
    goto label_E65B;
    // E609: CLRA 
    cpu.m_a = 0;
    label_E60A:
    // E60A: TSTA 
    cpu.test_a();
    // E60B: LEAU $0,Y
    // TODO: Fix comma operator: LEAU $0,Y
    label_E60D:
    // E60D: NEGA 
    cpu.m_a = -cpu.m_a;
    // E60E: LSRB 
    cpu.m_b >>= 1;
    // E60F: BRA $E642
    goto label_E642;
    // E611: XDECA 
    // TODO: Convert XDECA 
    label_E612:
    // E612: LDD #$5052
    cpu.m_d = 0x5052;
    // E615: CLRA 
    cpu.m_a = 0;
    // E616: ASRA 
    // TODO: Convert ASRA 
    // E617: XNCB 
    // TODO: Convert XNCB 
    // E618: NEGA 
    cpu.m_a = -cpu.m_a;
    // E619: TSTA 
    cpu.test_a();
    // E61A: BRA $E66E
    goto label_E66E;
    label_E61C:
    // E61C: CLRA 
    cpu.m_a = 0;
    // E61D: TSTA 
    cpu.test_a();
    // E61E: PSHS Y
    // TODO: Convert PSHS Y
    // E620: NEGA 
    cpu.m_a = -cpu.m_a;
    // E621: LSRB 
    cpu.m_b >>= 1;
    // E622: BRA $E655
    goto label_E655;
    // E624: XHCF 
    // TODO: Convert XHCF 
    // E625: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E626: ASRA 
    // TODO: Convert ASRA 
    // E627: BRA $E67B
    goto label_E67B;
    // E629: CLRA 
    cpu.m_a = 0;
    // E62A: TSTA 
    cpu.test_a();
    // E62B: BRA $E66E
    goto label_E66E;
    // E62D: LSRB 
    cpu.m_b >>= 1;
    // E62E: BRA $E661
    goto label_E661;
    // E630: LDD #$4D41
    cpu.m_d = 0x4D41;
    // E633: LSRB 
    cpu.m_b >>= 1;
    // E634: ASLA 
    cpu.m_a <<= 1;
    label_E635:
    // E635: XNCA 
    // TODO: Convert XNCA 
    // E636: CLRA 
    cpu.m_a = 0;
    // E637: ASLB 
    cpu.m_b <<= 1;
    // E638: BRA $E68E
    goto label_E68E;
    // E63A: LSRA 
    cpu.m_a >>= 1;
    // E63B: COMB 
    cpu.m_b = ~cpu.m_b;
    // E63C: LSRB 
    cpu.m_b >>= 1;
    // E63D: ADDD <$42
    cpu.m_d += 0x42;
    // E63F: NEGA 
    cpu.m_a = -cpu.m_a;
    // E640: LSRA 
    cpu.m_a >>= 1;
    // E641: BRA $E690
    goto label_E690;
    // E643: NEGA 
    cpu.m_a = -cpu.m_a;
    // E644: LSRB 
    cpu.m_b >>= 1;
    // E645: ASLA 
    cpu.m_a <<= 1;
    // E646: XNCA 
    // TODO: Convert XNCA 
    // E647: CLRA 
    cpu.m_a = 0;
    label_E648:
    // E648: ASLB 
    cpu.m_b <<= 1;
    // E649: BRA $E69D
    goto label_E69D;
    // E64B: LSRA 
    cpu.m_a >>= 1;
    // E64C: NEGA 
    cpu.m_a = -cpu.m_a;
    // E64D: LSRA 
    cpu.m_a >>= 1;
    // E64E: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E64F: BRA $E69D
    goto label_E69D;
    // E651: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E652: XCLRA 
    // TODO: Convert XCLRA 
    // E653: BITB #$44
    // TODO: Convert BITB #$44
    label_E655:
    // E655: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E656: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E657: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E658: LSRA 
    cpu.m_a >>= 1;
    // E659: LSRA 
    cpu.m_a >>= 1;
    // E65A: XNCB 
    // TODO: Convert XNCB 
    label_E65B:
    // E65B: BRA $E6A2
    goto label_E6A2;
    // E65D: XNCB 
    // TODO: Convert XNCB 
    // E65E: XNCB 
    // TODO: Convert XNCB 
    // E65F: CLRA 
    cpu.m_a = 0;
    // E660: XNCB 
    // TODO: Convert XNCB 
    label_E661:
    // E661: ADDD <$4E
    cpu.m_d += 0x4E;
    // E663: CLRA 
    cpu.m_a = 0;
    // E664: BRA $E6AA
    goto label_E6AA;
    // E666: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E667: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E668: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E669: LSRA 
    cpu.m_a >>= 1;
    // E66A: LSRA 
    cpu.m_a >>= 1;
    // E66B: XNCB 
    // TODO: Convert XNCB 
    // E66C: BRA $E6B3
    goto label_E6B3;
    label_E66E:
    // E66E: XNCB 
    // TODO: Convert XNCB 
    // E66F: XNCB 
    // TODO: Convert XNCB 
    // E670: CLRA 
    cpu.m_a = 0;
    // E671: XNCB 
    // TODO: Convert XNCB 
    // E672: ADDD <$4F
    cpu.m_d += 0x4F;
    // E674: NEGB 
    cpu.m_b = -cpu.m_b;
    // E675: LSRB 
    cpu.m_b >>= 1;
    // E676: BRA $E6CB
    goto label_E6CB;
    // E678: ASRB 
    // TODO: Convert ASRB 
    // E679: BRA $E69B
    goto label_E69B;
    label_E67B:
    // E67B: BRA $E69D
    goto label_E69D;
    // E67D: XCLRA 
    // TODO: Convert XCLRA 
    // E67E: LSRB 
    cpu.m_b >>= 1;
    // E67F: TSTA 
    cpu.test_a();
    // E680: BRA $E6C6
    goto label_E6C6;
    // E682: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E683: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E684: BRA $E6CA
    goto label_E6CA;
    // E686: LSRA 
    cpu.m_a >>= 1;
    // E687: XCLRA 
    // TODO: Convert XCLRA 
    // E688: BRA $E6D3
    goto label_E6D3;
    // E68A: COMB 
    cpu.m_b = ~cpu.m_b;
    // E68B: BRA $E6D2
    goto label_E6D2;
    // E68D: XNCB 
    // TODO: Convert XNCB 
    label_E68E:
    // E68E: XNCB 
    // TODO: Convert XNCB 
    // E68F: CLRA 
    cpu.m_a = 0;
    label_E690:
    // E690: SBCB <$4D
    // TODO: Convert SBCB <$4D
    // E692: NEGA 
    cpu.m_a = -cpu.m_a;
    // E693: LSRB 
    cpu.m_b >>= 1;
    // E694: XNCB 
    // TODO: Convert XNCB 
    // E695: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E696: ASLB 
    cpu.m_b <<= 1;
    // E697: BRA $E6DE
    goto label_E6DE;
    // E699: XNCB 
    // TODO: Convert XNCB 
    // E69A: XNCB 
    // TODO: Convert XNCB 
    label_E69B:
    // E69B: CLRA 
    cpu.m_a = 0;
    // E69C: XNCB 
    // TODO: Convert XNCB 
    label_E69D:
    // E69D: ADDD <$4E
    cpu.m_d += 0x4E;
    // E69F: CLRA 
    cpu.m_a = 0;
    // E6A0: BRA $E6EF
    goto label_E6EF;
    label_E6A2:
    // E6A2: NEGA 
    cpu.m_a = -cpu.m_a;
    // E6A3: LSRB 
    cpu.m_b >>= 1;
    // E6A4: XNCB 
    // TODO: Convert XNCB 
    // E6A5: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6A6: ASLB 
    cpu.m_b <<= 1;
    // E6A7: BRA $E6EE
    goto label_E6EE;
    // E6A9: XNCB 
    // TODO: Convert XNCB 
    label_E6AA:
    // E6AA: XNCB 
    // TODO: Convert XNCB 
    // E6AB: CLRA 
    cpu.m_a = 0;
    // E6AC: XNCB 
    // TODO: Convert XNCB 
    // E6AD: ADDD <$42
    cpu.m_d += 0x42;
    // E6AF: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6B0: NEGB 
    cpu.m_b = -cpu.m_b;
    // E6B1: BRA $E707
    goto label_E707;
    label_E6B3:
    // E6B3: LSRA 
    cpu.m_a >>= 1;
    // E6B4: COMB 
    cpu.m_b = ~cpu.m_b;
    // E6B5: ANDB <$41
    cpu.m_b &= 0x41;
    // E6B7: INCA 
    cpu.m_a++;
    // E6B8: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6B9: ASRA 
    // TODO: Convert ASRA 
    // E6BA: XCLRA 
    // TODO: Convert XCLRA 
    // E6BB: BRA $E711
    goto label_E711;
    // E6BD: ASLA 
    cpu.m_a <<= 1;
    // E6BE: LSRA 
    cpu.m_a >>= 1;
    // E6BF: BRA $E703
    goto label_E703;
    // E6C1: CLRA 
    cpu.m_a = 0;
    // E6C2: ASLB 
    cpu.m_b <<= 1;
    // E6C3: LSRA 
    cpu.m_a >>= 1;
    // E6C4: ADDD <$53
    cpu.m_d += 0x53;
    label_E6C6:
    // E6C6: COMA 
    cpu.m_a = ~cpu.m_a;
    // E6C7: NEGA 
    cpu.m_a = -cpu.m_a;
    // E6C8: INCA 
    cpu.m_a++;
    // E6C9: LSRA 
    cpu.m_a >>= 1;
    label_E6CA:
    // E6CA: BRA $E720
    goto label_E720;
    // E6CC: LSRA 
    cpu.m_a >>= 1;
    // E6CD: COMB 
    cpu.m_b = ~cpu.m_b;
    // E6CE: ANDB <$4C
    cpu.m_b &= 0x4C;
    // E6D0: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6D1: XCLRA 
    // TODO: Convert XCLRA 
    label_E6D2:
    // E6D2: LSRA 
    cpu.m_a >>= 1;
    label_E6D3:
    // E6D3: NEGA 
    cpu.m_a = -cpu.m_a;
    // E6D4: SBCB <$4C
    // TODO: Convert SBCB <$4C
    // E6D6: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6D7: XCLRA 
    // TODO: Convert XCLRA 
    // E6D8: LSRA 
    cpu.m_a >>= 1;
    // E6D9: NEGA 
    cpu.m_a = -cpu.m_a;
    // E6DA: XNCB 
    // TODO: Convert XNCB 
    // E6DB: BRA $E71E
    goto label_E71E;
    // E6DD: XCLRA 
    // TODO: Convert XCLRA 
    label_E6DE:
    // E6DE: LSRA 
    cpu.m_a >>= 1;
    // E6DF: BRA $E723
    goto label_E723;
    // E6E1: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6E2: XCLRA 
    // TODO: Convert XCLRA 
    // E6E3: NEGA 
    cpu.m_a = -cpu.m_a;
    // E6E4: XNCB 
    // TODO: Convert XNCB 
    // E6E5: ADCB <$30
    // TODO: Convert ADCB <$30
    // E6E7: BGT $E709
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE709;
    // E6E9: CLRA 
    cpu.m_a = 0;
    // E6EA: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E6EB: LDB #$31
    cpu.m_b = 0x31;
    // E6ED: BGT $E70F
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE70F;
    label_E6EF:
    // E6EF: LSRA 
    cpu.m_a >>= 1;
    // E6F0: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6F1: XHCF 
    // TODO: Convert XHCF 
    // E6F2: LEAS $E,Y
    // TODO: Fix comma operator: LEAS $E,Y
    // E6F4: BRA $E742
    goto label_E742;
    // E6F6: CLRA 
    cpu.m_a = 0;
    // E6F7: STB <$33
    cpu.write_memory(0x33, cpu.m_b);
    // E6F9: BGT $E71B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE71B;
    // E6FB: ASLA 
    cpu.m_a <<= 1;
    // E6FC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E6FD: ASRA 
    // TODO: Convert ASRA 
    // E6FE: EORB #$49
    cpu.m_b ^= 0x49;
    // E700: XCLRA 
    // TODO: Convert XCLRA 
    // E701: LSRB 
    cpu.m_b >>= 1;
    // E702: LSRA 
    cpu.m_a >>= 1;
    label_E703:
    // E703: XCLRA 
    // TODO: Convert XCLRA 
    // E704: COMB 
    cpu.m_b = ~cpu.m_b;
    // E705: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E706: LSRB 
    cpu.m_b >>= 1;
    label_E707:
    // E707: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // E708: BRA $E75E
    goto label_E75E;
    // E70A: LSRA 
    cpu.m_a >>= 1;
    // E70B: COMB 
    cpu.m_b = ~cpu.m_b;
    // E70C: ANDB <$50
    cpu.m_b &= 0x50;
    // E70E: XNCB 
    // TODO: Convert XNCB 
    // E70F: LSRA 
    cpu.m_a >>= 1;
    // E710: COMB 
    cpu.m_b = ~cpu.m_b;
    label_E711:
    // E711: COMB 
    cpu.m_b = ~cpu.m_b;
    // E712: BRA $E755
    goto label_E755;
    // E714: LSRB 
    cpu.m_b >>= 1;
    // E715: ASLB 
    cpu.m_b <<= 1;
    // E716: BRA $E75B
    goto label_E75B;
    // E718: CLRA 
    cpu.m_a = 0;
    // E719: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E71A: XCLRA 
    // TODO: Convert XCLRA 
    // E71B: BRA $E771
    goto label_E771;
    // E71D: CLRA 
    cpu.m_a = 0;
    label_E71E:
    // E71E: BRA $E763
    goto label_E763;
    label_E720:
    // E720: CLRA 
    cpu.m_a = 0;
    // E721: XCLRA 
    // TODO: Convert XCLRA 
    // E722: LSRB 
    cpu.m_b >>= 1;
    label_E723:
    // E723: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E724: XCLRA 
    // TODO: Convert XCLRA 
    // E725: LSRB 
    cpu.m_b >>= 1;
    // E726: BITB #$50
    // TODO: Convert BITB #$50
    // E728: XNCB 
    // TODO: Convert XNCB 
    // E729: LSRA 
    cpu.m_a >>= 1;
    // E72A: COMB 
    cpu.m_b = ~cpu.m_b;
    // E72B: COMB 
    cpu.m_b = ~cpu.m_b;
    // E72C: BRA $E76F
    goto label_E76F;
    // E72E: LSRB 
    cpu.m_b >>= 1;
    // E72F: ASLB 
    cpu.m_b <<= 1;
    // E730: BRA $E775
    goto label_E775;
    // E732: CLRA 
    cpu.m_a = 0;
    // E733: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E734: XCLRA 
    // TODO: Convert XCLRA 
    // E735: BRA $E77D
    goto label_E77D;
    // E737: CLRA 
    cpu.m_a = 0;
    // E738: XNCB 
    // TODO: Convert XNCB 
    // E739: BRA $E78E
    goto label_E78E;
    // E73B: LSRA 
    cpu.m_a >>= 1;
    // E73C: INCA 
    cpu.m_a++;
    // E73D: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E73E: BRA $E794
    goto label_E794;
    // E740: LSRA 
    cpu.m_a >>= 1;
    // E741: COMB 
    cpu.m_b = ~cpu.m_b;
    label_E742:
    // E742: ANDB <$50
    cpu.m_b &= 0x50;
    // E744: LSRB 
    cpu.m_b >>= 1;
    // E745: INCA 
    cpu.m_a++;
    // E746: INCA 
    cpu.m_a++;
    // E747: BRA $E79B
    goto label_E79B;
    // E749: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E74A: ASRA 
    // TODO: Convert ASRA 
    // E74B: ASLA 
    cpu.m_a <<= 1;
    // E74C: LSRB 
    cpu.m_b >>= 1;
    // E74D: BRA $E795
    goto label_E795;
    // E74F: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E750: XNCB 
    // TODO: Convert XNCB 
    // E751: LSRA 
    cpu.m_a >>= 1;
    // E752: BRA $E7A8
    goto label_E7A8;
    // E754: CLRA 
    cpu.m_a = 0;
    label_E755:
    // E755: BRA $E7A7
    goto label_E7A7;
    // E757: LSRA 
    cpu.m_a >>= 1;
    // E758: XNCB 
    // TODO: Convert XNCB 
    // E759: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // E75A: CLRA 
    cpu.m_a = 0;
    label_E75B:
    // E75B: XNCB 
    // TODO: Convert XNCB 
    // E75C: TSTA 
    cpu.test_a();
    // E75D: BRA $E7B1
    goto label_E7B1;
    // E75F: LSRA 
    cpu.m_a >>= 1;
    // E760: COMB 
    cpu.m_b = ~cpu.m_b;
    // E761: LSRA 
    cpu.m_a >>= 1;
    // E762: LSRB 
    cpu.m_b >>= 1;
    label_E763:
    // E763: ADDD <$A6
    cpu.m_d += 0xA6;
    // E765: JMP $e764
    goto label_E764;
}

} // namespace StarWars