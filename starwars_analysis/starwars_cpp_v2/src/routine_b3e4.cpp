#include "cpu_6809.h"

namespace StarWars {

void routine_b3e4_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b3e4.md
    // Address: 0xB3E4

    // B3E4: LDA $49C0
    cpu.state_.a = cpu.read_memory(0x49C0);

    // B3E7: CMPA #$03
    cpu.compare_a(0x03);

    // B3E9: BCS $000C
    if (cpu.carry_flag()) cpu.state_.pc += 0x000C;

    // B3EB: LDA #$00
    cpu.state_.a = 0x00;

    // B3ED: STA $49C0
    cpu.write_memory(0x49C0, cpu.state_.a);

    // B3F0: LDA #$01
    cpu.state_.a = 0x01;

    // B3F2: STA <$9C
    cpu.write_memory(0x9C, cpu.state_.a);

    // B3F4: LDA #$0B
    cpu.state_.a = 0x0B;

    // B3F6: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B3F8: STA <$9D
    cpu.write_memory(0x9D, cpu.state_.a);

    // B3FA: JSR $CD38
    cpu.call_function(0xCD38);

    // B3FD: JSR $B43F
    cpu.call_function(0xB43F);

    // B400: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B402: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B404: JSR $CD44
    cpu.call_function(0xCD44);

    // B407: JSR $B579
    cpu.call_function(0xB579);

    // B40A: LDA #$02
    cpu.state_.a = 0x02;

    // B40C: STA <$9C
    cpu.write_memory(0x9C, cpu.state_.a);

    // B40E: LDA #$0E
    cpu.state_.a = 0x0E;

    // B410: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B412: STA <$9D
    cpu.write_memory(0x9D, cpu.state_.a);

    // B414: JSR $CD38
    cpu.call_function(0xCD38);

    // B417: JSR $B43F
    cpu.call_function(0xB43F);

    // B41A: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B41C: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B41E: JSR $CD44
    cpu.call_function(0xCD44);

    // B421: JSR $B579
    cpu.call_function(0xB579);

    // B424: LDA #$03
    cpu.state_.a = 0x03;

    // B426: STA <$9C
    cpu.write_memory(0x9C, cpu.state_.a);

    // B428: LDA #$0C
    cpu.state_.a = 0x0C;

    // B42A: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B42C: STA <$9D
    cpu.write_memory(0x9D, cpu.state_.a);

    // B42E: JSR $CD38
    cpu.call_function(0xCD38);

    // B431: JSR $B43F
    cpu.call_function(0xB43F);

    // B434: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B436: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B438: JSR $CD44
    cpu.call_function(0xCD44);

    // B43B: JSR $B579
    cpu.call_function(0xB579);

    // B43F: LDA #$00
    cpu.state_.a = 0x00;

    // B441: STA $49BD
    cpu.write_memory(0x49BD, cpu.state_.a);

    // B444: LDA $49C0
    cpu.state_.a = cpu.read_memory(0x49C0);

    // B447: STA $49BE
    cpu.write_memory(0x49BE, cpu.state_.a);

    // B44A: LDA #$88
    cpu.state_.a = 0x88;

    // B44C: STA $49C1
    cpu.write_memory(0x49C1, cpu.state_.a);

    // B44F: LDB $5040
    cpu.state_.b = cpu.read_memory(0x5040);

    // B455: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // B457: LDX #$4989
    cpu.state_.x = 0x4989;

    // B45B: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // B45D: LDA $5040
    cpu.state_.a = cpu.read_memory(0x5040);

    // B460: ANDA #$F8
    cpu.state_.a &= 0xF8;

    // B462: ADDA #$04
    cpu.state_.a += 0x04;

    // B464: LDB #$00
    cpu.state_.b = 0x00;

    // B466: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // B469: LDD #$FC00
    cpu.state_.d = 0xFC00;

    // B46C: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // B46F: LDD #$F200
    cpu.state_.d = 0xF200;

    // B472: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // B475: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // B477: CMPX #$4999
    cpu.compare_x(0x4999);

    // B47A: BCS $009B
    if (cpu.carry_flag()) cpu.state_.pc += 0x009B;

    // B47C: LEAX -$10,X
    // TODO: Fix comma operator: LEAX -$10,X

    // B47F: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // B481: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // B483: STA <$9E
    cpu.write_memory(0x9E, cpu.state_.a);

    // B485: ANDA #$03
    cpu.state_.a &= 0x03;

    // B487: CMPA <$9C
    cpu.compare_a(cpu.read_memory(0x9C));

    // B489: LBNE $0132
    // TODO: Convert LBNE $0132

    // B48D: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B48F: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B491: LDD #$000F
    cpu.state_.d = 0x000F;

    // B494: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // B497: LDA #$67
    cpu.state_.a = 0x67;

    // B499: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B49C: LDA <$9C
    cpu.state_.a = cpu.read_memory(0x9C);

    // B49E: CMPA #$02
    cpu.compare_a(0x02);

    // B4A0: BNE $00D1
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00D1;

    // B4A2: INC $49BD
    // TODO: Convert INC $49BD

    // B4A5: LDB $49BE
    cpu.state_.b = cpu.read_memory(0x49BE);

    // B4A9: LDX #$B6B3
    cpu.state_.x = 0xB6B3;

    // B4AC: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // B4AE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B4B0: LDA $49C1
    cpu.state_.a = cpu.read_memory(0x49C1);

    // B4B3: STA -$1,Y
    // TODO: Handle indexed addressing: STA -$1,Y

    // B4B5: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B4B8: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B4BB: CMPD #$1000
    // TODO: Convert CMPD #$1000

    // B4BF: BGT $012C
    // TODO: Convert BGT $012C

    // B4C1: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B4C3: CMPA #$0E
    cpu.compare_a(0x0E);

    // B4C5: BNE $0127
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0127;

    // B4C7: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // B4CA: SUBD #$0000
    cpu.state_.d -= 0x0000;

    // B4CD: BLT $0132
    // TODO: Convert BLT $0132

    // B4CF: LDD $5042
    cpu.state_.d = cpu.read_memory_word(0x5042);

    // B4D2: BGT $0127
    // TODO: Convert BGT $0127

    // B4D4: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // B4D7: ADDD #$0200
    cpu.state_.d += 0x0200;

    // B4DA: SUBD $5044
    cpu.state_.d -= 0x5044;

    // B4DD: BLT $0127
    // TODO: Convert BLT $0127

    // B4DF: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B4E2: BGT $0127
    // TODO: Convert BGT $0127

    // B4E4: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B4E7: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B4EA: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B4ED: BHI $0127
    // TODO: Convert BHI $0127

    // B4EF: LDA #$0F
    cpu.state_.a = 0x0F;

    // B4F1: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B4F3: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // B4F5: BLT $0119
    // TODO: Convert BLT $0119

    // B4F7: JSR $9874
    cpu.call_function(0x9874);

    // B4FA: JSR $BDB2
    cpu.call_function(0xBDB2);

    // B4FD: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // B4FF: BNE $0127
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0127;

    // B501: LDA #$4E
    cpu.state_.a = 0x4E;

    // B503: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B506: BPL $0125
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0125;

    // B509: STA <$63
    cpu.write_memory(0x63, cpu.state_.a);

    // B50B: JSR $CD5C
    cpu.call_function(0xCD5C);

    // B50E: BRA $012F
    cpu.state_.pc += 0x012F;

    // B510: JSR $CD50
    cpu.call_function(0xCD50);

    // B513: JSR $CD74
    cpu.call_function(0xCD74);

    // B516: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // B519: ADDD #$0400
    cpu.state_.d += 0x0400;

    // B51C: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // B51F: LDA <$9E
    cpu.state_.a = cpu.read_memory(0x9E);

    // B523: LBNE $009F
    // TODO: Convert LBNE $009F

    // B527: LDA <$9C
    cpu.state_.a = cpu.read_memory(0x9C);

    // B529: CMPA #$02
    cpu.compare_a(0x02);

    // B52B: BNE $0181
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0181;

    // B52D: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // B52F: LDA $000F,X
    // TODO: Fix comma operator: LDA $000F,X

    // B534: BCC $0159
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0159;

    // B536: BMI $0159
    if (cpu.negative_flag()) cpu.state_.pc += 0x0159;

    // B538: INC $49BD
    // TODO: Convert INC $49BD

    // B53B: BRA $015C
    cpu.state_.pc += 0x015C;

    // B53E: BNE $014F
    if (!cpu.zero_flag()) cpu.state_.pc += 0x014F;

    // B540: LDA $49BD
    cpu.state_.a = cpu.read_memory(0x49BD);

    // B543: BEQ $0181
    if (cpu.zero_flag()) cpu.state_.pc += 0x0181;

    // B545: LDA $49BE
    cpu.state_.a = cpu.read_memory(0x49BE);

    // B549: CMPA #$03
    cpu.compare_a(0x03);

    // B54B: BCS $016B
    if (cpu.carry_flag()) cpu.state_.pc += 0x016B;

    // B54D: LDA #$00
    cpu.state_.a = 0x00;

    // B54F: STA $49BE
    cpu.write_memory(0x49BE, cpu.state_.a);

    // B552: LDA $49C1
    cpu.state_.a = cpu.read_memory(0x49C1);

    // B555: SUBA #$08
    cpu.state_.a -= 0x08;

    // B557: CMPA #$40
    cpu.compare_a(0x40);

    // B559: BCC $0179
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0179;

    // B55B: LDA #$40
    cpu.state_.a = 0x40;

    // B55D: STA $49C1
    cpu.write_memory(0x49C1, cpu.state_.a);

    // B560: LDA #$00
    cpu.state_.a = 0x00;

    // B562: STA $49BD
    cpu.write_memory(0x49BD, cpu.state_.a);

    // B565: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B568: ADDD #$0800
    cpu.state_.d += 0x0800;

    // B56B: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // B56E: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B571: SUBD #$7000
    cpu.state_.d -= 0x7000;

    // B574: LBCS $008B
    // TODO: Convert LBCS $008B

    // B579: LDA #$00
    cpu.state_.a = 0x00;

    // B57B: STA $49BD
    cpu.write_memory(0x49BD, cpu.state_.a);

    // B57E: LDA $49C0
    cpu.state_.a = cpu.read_memory(0x49C0);

    // B581: STA $49BE
    cpu.write_memory(0x49BE, cpu.state_.a);

    // B584: LDA #$88
    cpu.state_.a = 0x88;

    // B586: STA $49C1
    cpu.write_memory(0x49C1, cpu.state_.a);

    // B589: LDB $5040
    cpu.state_.b = cpu.read_memory(0x5040);

    // B58F: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // B591: LDX #$4999
    cpu.state_.x = 0x4999;

    // B595: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // B597: LDA $5040
    cpu.state_.a = cpu.read_memory(0x5040);

    // B59A: ANDA #$F8
    cpu.state_.a &= 0xF8;

    // B59C: ADDA #$04
    cpu.state_.a += 0x04;

    // B59E: LDB #$00
    cpu.state_.b = 0x00;

    // B5A0: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // B5A3: LDD #$0400
    cpu.state_.d = 0x0400;

    // B5A6: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // B5A9: LDD #$F200
    cpu.state_.d = 0xF200;

    // B5AC: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // B5AF: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // B5B1: CMPX #$49A9
    cpu.compare_x(0x49A9);

    // B5B4: BCS $01D5
    if (cpu.carry_flag()) cpu.state_.pc += 0x01D5;

    // B5B6: LEAX -$10,X
    // TODO: Fix comma operator: LEAX -$10,X

    // B5B9: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // B5BB: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // B5BD: STA <$9E
    cpu.write_memory(0x9E, cpu.state_.a);

    // B5BF: ANDA #$03
    cpu.state_.a &= 0x03;

    // B5C1: CMPA <$9C
    cpu.compare_a(cpu.read_memory(0x9C));

    // B5C3: LBNE $026C
    // TODO: Convert LBNE $026C

    // B5C7: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B5C9: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B5CB: LDD #$000F
    cpu.state_.d = 0x000F;

    // B5CE: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // B5D1: LDA #$67
    cpu.state_.a = 0x67;

    // B5D3: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B5D6: LDA <$9C
    cpu.state_.a = cpu.read_memory(0x9C);

    // B5D8: CMPA #$02
    cpu.compare_a(0x02);

    // B5DA: BNE $020B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x020B;

    // B5DC: INC $49BD
    // TODO: Convert INC $49BD

    // B5DF: LDB $49BE
    cpu.state_.b = cpu.read_memory(0x49BE);

    // B5E3: LDX #$0000
    cpu.state_.x = 0x0000;

}

} // namespace StarWars