#include "cpu_6809.h"

namespace StarWars {

void routine_bdfd_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_bdfd.md
    // Address: 0xBDFD

    // BDFD: LDA #$35
    cpu.state_.a = 0x35;

    // BDFF: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BE02: LDA #$36
    cpu.state_.a = 0x36;

    // BE04: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BE07: LDA #$37
    cpu.state_.a = 0x37;

    // BE09: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BE0C: LDA #$38
    cpu.state_.a = 0x38;

    // BE0E: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BE11: LDA #$39
    cpu.state_.a = 0x39;

    // BE13: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BE16: LDA #$3A
    cpu.state_.a = 0x3A;

    // BE18: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BE1B: LDA #$3B
    cpu.state_.a = 0x3B;

    // BE1D: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BE20: LDA #$59
    cpu.state_.a = 0x59;

    // BE22: JSR $D8DF
    cpu.call_function(0xD8DF);

    // BE26: CMPA #$65
    cpu.compare_a(0x65);

    // BE28: BCS $0025
    if (cpu.carry_flag()) cpu.state_.pc = 0xBE4F;

    // BE2A: LDA #$D3
    cpu.state_.a = 0xD3;

    // BE2C: JSR $D8DF
    cpu.call_function(0xD8DF);

    // BE2F: LDD #$6480
    cpu.state_.d = 0x6480;

    // BE32: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BE34: LDX #$453C
    cpu.state_.x = 0x453C;

    // BE37: LDU #$C7BB
    cpu.state_.u = 0xC7BB;

    // BE3A: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // BE3C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BE3E: LDD #$0030
    cpu.state_.d = 0x0030;

    // BE41: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BE43: STU $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.u);

    // BE46: LDB #$05
    cpu.state_.b = 0x05;

    // BE48: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // BE4A: LDB #$05
    cpu.state_.b = 0x05;

    // BE4C: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // BE4E: JSR $E7AD
    cpu.call_function(0xE7AD);

    // BE52: BPL $004F
    if (!cpu.negative_flag()) cpu.state_.pc = 0xBEA3;

    // BE54: LDD #$8040
    cpu.state_.d = 0x8040;

    // BE57: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BE59: LDU $4AFA
    cpu.state_.u = cpu.read_memory_word(0x4AFA);

    // BE5C: CMPX #$4554
    cpu.compare_x(0x4554);

    // BE5F: BCS $003D
    if (cpu.carry_flag()) cpu.state_.pc = 0xBE9E;

    // BE61: LDD $C7C1
    cpu.state_.d = cpu.read_memory_word(0xC7C1);

    // BE64: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BE66: LDD #$013C
    cpu.state_.d = 0x013C;

    // BE69: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BE6B: LDA #$01
    cpu.state_.a = 0x01;

    // BE6D: STA <$AD
    cpu.write_memory(0xAD, cpu.state_.a);

    // BE6F: LDA $4588
    cpu.state_.a = cpu.read_memory(0x4588);

    // BE72: JSR $E7AD
    cpu.call_function(0xE7AD);

    // BE75: LDA $4589
    cpu.state_.a = cpu.read_memory(0x4589);

    // BE78: JSR $E7AD
    cpu.call_function(0xE7AD);

    // BE7B: LDD #$8040
    cpu.state_.d = 0x8040;

    // BE7E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BE80: LDX #$4548
    cpu.state_.x = 0x4548;

    // BE83: JSR $C6D4
    cpu.call_function(0xC6D4);

    // BE86: LDU #$4AFE
    cpu.state_.u = 0x4AFE;

    // BE89: LDX #$4542
    cpu.state_.x = 0x4542;

    // BE8C: JSR $C6D7
    cpu.call_function(0xC6D7);

    // BE8F: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // BE92: ADDA $4B00
    cpu.state_.a += 0x4B00;

    // BE96: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.state_.a);

    // BE99: LDA $4AFB
    cpu.state_.a = cpu.read_memory(0x4AFB);

    // BE9C: ADCA $4AFF
    // TODO: Convert ADCA $4AFF

    // BEA0: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.a);

    // BEA3: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BEA6: ADCA $4AFE
    // TODO: Convert ADCA $4AFE

    // BEAA: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // BEAD: LDD $C7C3
    cpu.state_.d = cpu.read_memory_word(0xC7C3);

    // BEB0: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BEB2: LDD #$0030
    cpu.state_.d = 0x0030;

    // BEB5: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BEB7: LDB #$05
    cpu.state_.b = 0x05;

    // BEB9: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // BEBB: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BEBE: JSR $E790
    cpu.call_function(0xE790);

    // BEC1: LDA $4AFB
    cpu.state_.a = cpu.read_memory(0x4AFB);

    // BEC4: JSR $E790
    cpu.call_function(0xE790);

    // BEC7: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // BECA: JSR $E790
    cpu.call_function(0xE790);

    // BECD: LDD #$8040
    cpu.state_.d = 0x8040;

    // BED0: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BED2: LDX #$4554
    cpu.state_.x = 0x4554;

    // BED5: JSR $C6D4
    cpu.call_function(0xC6D4);

    // BED8: JSR $C087
    cpu.call_function(0xC087);

    // BEDB: LDD $C7C9
    cpu.state_.d = cpu.read_memory_word(0xC7C9);

    // BEDE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BEE0: LDD #$0030
    cpu.state_.d = 0x0030;

    // BEE3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BEE5: LDB #$07
    cpu.state_.b = 0x07;

    // BEE7: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // BEE9: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BEEC: JSR $E790
    cpu.call_function(0xE790);

    // BEEF: LDA $4AFB
    cpu.state_.a = cpu.read_memory(0x4AFB);

    // BEF2: JSR $E790
    cpu.call_function(0xE790);

    // BEF5: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // BEF8: JSR $E790
    cpu.call_function(0xE790);

    // BEFB: LDA $4AFD
    cpu.state_.a = cpu.read_memory(0x4AFD);

    // BEFE: JSR $E790
    cpu.call_function(0xE790);

    // BF01: LDD #$8040
    cpu.state_.d = 0x8040;

    // BF04: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BF06: LDX #$455C
    cpu.state_.x = 0x455C;

    // BF09: JSR $C6D4
    cpu.call_function(0xC6D4);

    // BF0C: JSR $C087
    cpu.call_function(0xC087);

    // BF0F: LDD $C7CB
    cpu.state_.d = cpu.read_memory_word(0xC7CB);

    // BF12: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BF14: LDD #$0030
    cpu.state_.d = 0x0030;

    // BF17: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BF19: LDB #$07
    cpu.state_.b = 0x07;

    // BF1B: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // BF1D: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BF20: JSR $E790
    cpu.call_function(0xE790);

    // BF23: LDA $4AFB
    cpu.state_.a = cpu.read_memory(0x4AFB);

    // BF26: JSR $E790
    cpu.call_function(0xE790);

    // BF29: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // BF2C: JSR $E790
    cpu.call_function(0xE790);

    // BF2F: LDA $4AFD
    cpu.state_.a = cpu.read_memory(0x4AFD);

    // BF32: JSR $E790
    cpu.call_function(0xE790);

    // BF35: LDD #$8040
    cpu.state_.d = 0x8040;

    // BF38: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BF3A: LDX #$454C
    cpu.state_.x = 0x454C;

    // BF3D: JSR $C6D4
    cpu.call_function(0xC6D4);

    // BF40: CLR $4AFA
    cpu.write_memory(0x4AFA, 0);

    // BF43: LDA $4AFB
    cpu.state_.a = cpu.read_memory(0x4AFB);

    // BF46: ORA $4AFC
    cpu.state_.a |= 0x4AFC;

    // BF49: ORA $4AFD
    cpu.state_.a |= 0x4AFD;

    // BF4C: BEQ $017F
    if (cpu.zero_flag()) cpu.state_.pc = 0xBFCD;

    // BF4E: LDX #$4554
    cpu.state_.x = 0x4554;

    // BF51: LDU #$4AFE
    cpu.state_.u = 0x4AFE;

    // BF54: JSR $C6D7
    cpu.call_function(0xC6D7);

    // BF57: JSR $C02F
    cpu.call_function(0xC02F);

    // BF5A: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BF5D: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // BF5F: CMPA #$0F
    cpu.compare_a(0x0F);

    // BF61: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BF64: BCS $016C
    if (cpu.carry_flag()) cpu.state_.pc = 0xBFD2;

    // BF66: INC $4AFA
    // TODO: Convert INC $4AFA

    // BF6D: ADDA $4AFA
    cpu.state_.a += 0x4AFA;

    // BF70: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // BF73: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // BF75: CMPA #$0F
    cpu.compare_a(0x0F);

    // BF77: BCS $017F
    if (cpu.carry_flag()) cpu.state_.pc = 0xBFF8;

    // BF79: INC $4AFA
    // TODO: Convert INC $4AFA

    // BF7C: LDD $C7C5
    cpu.state_.d = cpu.read_memory_word(0xC7C5);

    // BF7F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BF81: LDD #$0030
    cpu.state_.d = 0x0030;

    // BF84: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BF86: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BF89: JSR $C70E
    cpu.call_function(0xC70E);

    // BF8C: LDD #$8040
    cpu.state_.d = 0x8040;

    // BF8F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BF91: LDX #$455C
    cpu.state_.x = 0x455C;

    // BF94: JSR $C6D4
    cpu.call_function(0xC6D4);

    // BF97: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // BF9A: ORA $4AFB
    cpu.state_.a |= 0x4AFB;

    // BF9D: ORA $4AFC
    cpu.state_.a |= 0x4AFC;

    // BFA0: ORA $4AFD
    cpu.state_.a |= 0x4AFD;

    // BFA3: BEQ $01B7
    if (cpu.zero_flag()) cpu.state_.pc = 0xBF5C;

    // BFA5: LDX #$4556
    cpu.state_.x = 0x4556;

    // BFA8: LDU #$4AFE
    cpu.state_.u = 0x4AFE;

    // BFAB: JSR $C6D7
    cpu.call_function(0xC6D7);

    // BFAE: CLR $4B01
    cpu.write_memory(0x4B01, 0);

    // BFB1: JSR $C02F
    cpu.call_function(0xC02F);

    // BFB4: LDD $C7C7
    cpu.state_.d = cpu.read_memory_word(0xC7C7);

    // BFB7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BFB9: LDD #$0030
    cpu.state_.d = 0x0030;

    // BFBC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BFBF: LDB $4AFA
    cpu.state_.b = cpu.read_memory(0x4AFA);

    // BFC2: LDX #$0010
    cpu.state_.x = 0x0010;

    // BFC5: JSR $7720
    cpu.call_function(0x7720);

    // BFC8: LDB #$01
    cpu.state_.b = 0x01;

    // BFCA: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // BFCC: LDA $4AD6
    cpu.state_.a = cpu.read_memory(0x4AD6);

    // BFCF: JSR $E790
    cpu.call_function(0xE790);

    // BFD2: LDD #$8040
    cpu.state_.d = 0x8040;

    // BFD5: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BFD7: LDB #$11
    cpu.state_.b = 0x11;

    // BFD9: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // BFDC: LDU #$C7CD
    cpu.state_.u = 0xC7CD;

    // BFDF: STU $4AFC
    cpu.write_memory(0x4AFC, cpu.state_.u);

    // BFE2: LDU $4AFC
    cpu.state_.u = cpu.read_memory_word(0x4AFC);

    // BFE5: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // BFE7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BFE9: CMPU #$C7E1
    // TODO: Convert CMPU #$C7E1

    // BFED: BCS $01F7
    if (cpu.carry_flag()) cpu.state_.pc = 0xBFE6;

    // BFEF: LDD #$1ED4
    cpu.state_.d = 0x1ED4;

    // BFF2: BRA $01FA
    cpu.state_.pc = 0xBFEE;

    // BFF4: LDD #$0064
    cpu.state_.d = 0x0064;

    // BFF7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BFF9: STU $4AFC
    cpu.write_memory(0x4AFC, cpu.state_.u);

    // BFFC: LDX #$0000
    cpu.state_.x = 0x0000;

}

} // namespace StarWars