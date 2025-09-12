#include "cpu_6809.h"

namespace StarWars {

void routine_b43f_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b43f.md
    // Address: 0xB43F

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

    // B47A: BCS $0040
    if (cpu.carry_flag()) cpu.state_.pc = 0xB4BC;

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

    // B489: LBNE $00D7
    // TODO: Convert LBNE $00D7

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

    // B4A0: BNE $0076
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB518;

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

    // B4BF: BGT $00D1
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB492;

    // B4C1: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B4C3: CMPA #$0E
    cpu.compare_a(0x0E);

    // B4C5: BNE $00CC
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB493;

    // B4C7: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // B4CA: SUBD #$0000
    cpu.state_.d -= 0x0000;

    // B4CD: BLT $00D7
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB4A6;

    // B4CF: LDD $5042
    cpu.state_.d = cpu.read_memory_word(0x5042);

    // B4D2: BGT $00CC
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB4A0;

    // B4D4: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // B4D7: ADDD #$0200
    cpu.state_.d += 0x0200;

    // B4DA: SUBD $5044
    cpu.state_.d -= 0x5044;

    // B4DD: BLT $00CC
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB4AB;

    // B4DF: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B4E2: BGT $00CC
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB4B0;

    // B4E4: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B4E7: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B4EA: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B4ED: BHI $00CC
    // TODO: Convert BHI $00CC

    // B4EF: LDA #$0F
    cpu.state_.a = 0x0F;

    // B4F1: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B4F3: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // B4F5: BLT $00BE
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB4B5;

    // B4F7: JSR $9874
    cpu.call_function(0x9874);

    // B4FA: JSR $BDB2
    cpu.call_function(0xBDB2);

    // B4FD: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // B4FF: BNE $00CC
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB4CD;

    // B501: LDA #$4E
    cpu.state_.a = 0x4E;

    // B503: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B506: BPL $00CA
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB4D2;

    // B509: STA <$63
    cpu.write_memory(0x63, cpu.state_.a);

    // B50B: JSR $CD5C
    cpu.call_function(0xCD5C);

    // B50E: BRA $00D4
    cpu.state_.pc = 0xB4E4;

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

    // B523: LBNE $0044
    // TODO: Convert LBNE $0044

    // B527: LDA <$9C
    cpu.state_.a = cpu.read_memory(0x9C);

    // B529: CMPA #$02
    cpu.compare_a(0x02);

    // B52B: BNE $0126
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB553;

    // B52D: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // B52F: LDA $000F,X
    // TODO: Fix comma operator: LDA $000F,X

    // B534: BCC $00FE
    if (!cpu.carry_flag()) cpu.state_.pc = 0xB534;

    // B536: BMI $00FE
    if (cpu.negative_flag()) cpu.state_.pc = 0xB536;

    // B538: INC $49BD
    // TODO: Convert INC $49BD

    // B53B: BRA $0101
    cpu.state_.pc = 0xB53E;

    // B53E: BNE $00F4
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB534;

    // B540: LDA $49BD
    cpu.state_.a = cpu.read_memory(0x49BD);

    // B543: BEQ $0126
    if (cpu.zero_flag()) cpu.state_.pc = 0xB56B;

    // B545: LDA $49BE
    cpu.state_.a = cpu.read_memory(0x49BE);

    // B549: CMPA #$03
    cpu.compare_a(0x03);

    // B54B: BCS $0110
    if (cpu.carry_flag()) cpu.state_.pc = 0xB55D;

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

    // B559: BCC $011E
    if (!cpu.carry_flag()) cpu.state_.pc = 0xB579;

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

    // B574: LBCS $0030
    // TODO: Convert LBCS $0030

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

    // B5B4: BCS $017A
    if (cpu.carry_flag()) cpu.state_.pc = 0xB630;

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

    // B5C3: LBNE $0211
    // TODO: Convert LBNE $0211

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

    // B5DA: BNE $01B0
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB58C;

    // B5DC: INC $49BD
    // TODO: Convert INC $49BD

    // B5DF: LDB $49BE
    cpu.state_.b = cpu.read_memory(0x49BE);

    // B5E3: LDX #$B6B3
    cpu.state_.x = 0xB6B3;

    // B5E6: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // B5E8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B5EA: LDA $49C1
    cpu.state_.a = cpu.read_memory(0x49C1);

    // B5ED: STA -$1,Y
    // TODO: Handle indexed addressing: STA -$1,Y

    // B5EF: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B5F2: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B5F5: CMPD #$1000
    // TODO: Convert CMPD #$1000

    // B5F9: BGT $020B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB606;

    // B5FB: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B5FD: CMPA #$0E
    cpu.compare_a(0x0E);

    // B5FF: BNE $0206
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB607;

    // B601: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // B604: SUBD #$0000
    cpu.state_.d -= 0x0000;

    // B607: BLT $0211
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB61A;

    // B609: LDD $5042
    cpu.state_.d = cpu.read_memory_word(0x5042);

    // B60C: BLT $0206
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB614;

    // B60E: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // B611: ADDD #$0200
    cpu.state_.d += 0x0200;

    // B614: SUBD $5044
    cpu.state_.d -= 0x5044;

    // B617: BLT $0206
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB61F;

    // B619: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B61C: BGT $0206
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB624;

    // B61E: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B621: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B624: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B627: BHI $0206
    // TODO: Convert BHI $0206

    // B629: LDA #$0F
    cpu.state_.a = 0x0F;

    // B62B: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B62D: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // B62F: BLT $01F8
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB629;

    // B631: JSR $9874
    cpu.call_function(0x9874);

    // B634: JSR $BDB2
    cpu.call_function(0xBDB2);

    // B637: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // B639: BNE $0206
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB641;

    // B63B: LDA #$4E
    cpu.state_.a = 0x4E;

    // B63D: LDB $4700
    cpu.state_.b = cpu.read_memory(0x4700);

}

} // namespace StarWars