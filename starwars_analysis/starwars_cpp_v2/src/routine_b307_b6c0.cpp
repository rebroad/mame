#include "cpu_6809.h"

namespace StarWars {

void routine_b307_b6c0_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b307_b6c0.md
    // Address: 0xB307_B6C0

    // B307: LDD <$D0
    cpu.m_d = cpu.read_memory16(0xD0);

    // B309: BMI $B32A
    if (cpu.negative_flag()) cpu.m_pc = 0xB32A;

    // B30B: LDA #$FF
    cpu.m_a = 0xFF;

    // B30D: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B30F: LDA #$0F
    cpu.m_a = 0x0F;

    // B311: STA $4B23
    cpu.write_memory(0x4B23, cpu.m_a);

    // B314: LDA <$D0
    cpu.m_a = cpu.read_memory(0xD0);

    // B316: LDB #$03
    cpu.m_b = 0x03;

    // B319: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B31D: BCS $B321
    if (cpu.carry_flag()) cpu.m_pc = 0xB321;

    // B31F: LDB #$E0
    cpu.m_b = 0xE0;

    // B321: STB $4B22
    cpu.write_memory(0x4B22, cpu.m_b);

    // B324: LDD #$6680
    cpu.m_d = 0x6680;

    // B327: STD $4B20
    cpu.write_memory16(0x4B20, cpu.m_d);

    // B32B: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // B32D: BEQ $B33D
    if (cpu.zero_flag()) cpu.m_pc = 0xB33D;

    // B32F: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B331: BMI $B339
    if (cpu.negative_flag()) cpu.m_pc = 0xB339;

    // B333: SUBD <$C4
    cpu.m_d -= 0xC4;

    // B335: BCS $B33E
    if (cpu.carry_flag()) cpu.m_pc = 0xB33E;

    // B337: BRA $B345
    goto label_B345;

    // B339: LDA <$C4
    cpu.m_a = cpu.read_memory(0xC4);

    // B33B: BGE $B345
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB345;

    // B33E: LDA #$04
    cpu.m_a = 0x04;

    // B340: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B342: JMP $AD20
    goto label_AD20;

    // B345: LDA #$04
    cpu.m_a = 0x04;

    // B347: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B349: JMP $8ACF
    goto label_8ACF;

    // B34C: ADCA $94FF
    // TODO: Convert ADCA $94FF

    // B34F: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B352: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B355: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B358: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B35B: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B35E: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B361: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B364: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B367: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B36A: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B36D: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B370: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B373: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B376: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B379: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B37C: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B37F: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B382: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B385: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B388: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B38B: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B38E: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B391: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B394: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B397: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B39A: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B39D: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B3A0: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B3A3: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B3A6: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B3A9: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B3AC: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B3AF: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // B3BB: BRA $B3EE
    goto label_B3EE;

    // B3BE: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // B3C0: BRA $B403
    goto label_B403;

    // B3C6: LSR <$BC
    // TODO: Convert LSR <$BC

    // B3C8: LDA <$FA
    cpu.m_a = cpu.read_memory(0xFA);

    // B3CB: BVC $B40E
    // TODO: Convert BVC $B40E

    // B3D0: BRA $B429
    goto label_B429;

    // B3D4: BRA $B42A
    goto label_B42A;

    // B3D8: BRA $B431
    goto label_B431;

    // B3E4: LDA $49C0
    cpu.m_a = cpu.read_memory(0x49C0);

    // B3E7: CMPA #$03
    cpu.compare_a(0x03);

    // B3E9: BCS $B3F0
    if (cpu.carry_flag()) cpu.m_pc = 0xB3F0;

    // B3EB: LDA #$00
    cpu.m_a = 0x00;

    // B3ED: STA $49C0
    cpu.write_memory(0x49C0, cpu.m_a);

    // B3F0: LDA #$01
    cpu.m_a = 0x01;

    // B3F2: STA <$9C
    cpu.write_memory(0x9C, cpu.m_a);

    // B3F4: LDA #$0B
    cpu.m_a = 0x0B;

    // B3F6: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B3F8: STA <$9D
    cpu.write_memory(0x9D, cpu.m_a);

    // B3FA: JSR $CD38
    cpu.call_function(0xCD38);

    // B3FD: JSR $B43F
    cpu.call_function(0xB43F);

    // B400: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B402: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B404: JSR $CD44
    cpu.call_function(0xCD44);

    // B407: JSR $B579
    cpu.call_function(0xB579);

    // B40A: LDA #$02
    cpu.m_a = 0x02;

    // B40C: STA <$9C
    cpu.write_memory(0x9C, cpu.m_a);

    // B40E: LDA #$0E
    cpu.m_a = 0x0E;

    // B410: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B412: STA <$9D
    cpu.write_memory(0x9D, cpu.m_a);

    // B414: JSR $CD38
    cpu.call_function(0xCD38);

    // B417: JSR $B43F
    cpu.call_function(0xB43F);

    // B41A: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B41C: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B41E: JSR $CD44
    cpu.call_function(0xCD44);

    // B421: JSR $B579
    cpu.call_function(0xB579);

    // B424: LDA #$03
    cpu.m_a = 0x03;

    // B426: STA <$9C
    cpu.write_memory(0x9C, cpu.m_a);

    // B428: LDA #$0C
    cpu.m_a = 0x0C;

    // B42A: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B42C: STA <$9D
    cpu.write_memory(0x9D, cpu.m_a);

    // B42E: JSR $CD38
    cpu.call_function(0xCD38);

    // B431: JSR $B43F
    cpu.call_function(0xB43F);

    // B434: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B436: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B438: JSR $CD44
    cpu.call_function(0xCD44);

    // B43B: JSR $B579
    cpu.call_function(0xB579);

    // B43F: LDA #$00
    cpu.m_a = 0x00;

    // B441: STA $49BD
    cpu.write_memory(0x49BD, cpu.m_a);

    // B444: LDA $49C0
    cpu.m_a = cpu.read_memory(0x49C0);

    // B447: STA $49BE
    cpu.write_memory(0x49BE, cpu.m_a);

    // B44A: LDA #$88
    cpu.m_a = 0x88;

    // B44C: STA $49C1
    cpu.write_memory(0x49C1, cpu.m_a);

    // B44F: LDB $5040
    cpu.m_b = cpu.read_memory(0x5040);

    // B455: ANDB #$0F
    cpu.m_b &= 0x0F;

    // B457: LDX #$4989
    cpu.m_x = 0x4989;

    // B45B: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // B45D: LDA $5040
    cpu.m_a = cpu.read_memory(0x5040);

    // B460: ANDA #$F8
    cpu.m_a &= 0xF8;

    // B462: ADDA #$04
    cpu.m_a += 0x04;

    // B464: LDB #$00
    cpu.m_b = 0x00;

    // B466: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // B469: LDD #$FC00
    cpu.m_d = 0xFC00;

    // B46C: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // B46F: LDD #$F200
    cpu.m_d = 0xF200;

    // B472: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // B475: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // B477: CMPX #$4999
    cpu.compare_x(0x4999);

    // B47A: BCS $B47F
    if (cpu.carry_flag()) cpu.m_pc = 0xB47F;

    // B47C: LEAX -$10,X
    // TODO: Fix comma operator: LEAX -$10,X

    // B47F: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // B481: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // B483: STA <$9E
    cpu.write_memory(0x9E, cpu.m_a);

    // B485: ANDA #$03
    cpu.m_a &= 0x03;

    // B487: CMPA <$9C
    cpu.compare_a(cpu.read_memory(0x9C));

    // B489: LBNE $B516
    // TODO: Convert LBNE $B516

    // B48D: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B48F: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B491: LDD #$000F
    cpu.m_d = 0x000F;

    // B494: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // B497: LDA #$67
    cpu.m_a = 0x67;

    // B499: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B49C: LDA <$9C
    cpu.m_a = cpu.read_memory(0x9C);

    // B49E: CMPA #$02
    cpu.compare_a(0x02);

    // B4A0: BNE $B4B5
    if (!cpu.zero_flag()) cpu.m_pc = 0xB4B5;

    // B4A2: INC $49BD
    // TODO: Convert INC $49BD

    // B4A5: LDB $49BE
    cpu.m_b = cpu.read_memory(0x49BE);

    // B4A9: LDX #$B6B3
    cpu.m_x = 0xB6B3;

    // B4AC: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // B4AE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B4B0: LDA $49C1
    cpu.m_a = cpu.read_memory(0x49C1);

    // B4B3: STA -$1,Y
    // TODO: Handle indexed addressing: STA -$1,Y

    // B4B5: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // B4B8: SUBD $5040
    cpu.m_d -= 0x5040;

    // B4BB: CMPD #$1000
    // TODO: Convert CMPD #$1000

    // B4BF: BGT $B510
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB510;

    // B4C1: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B4C3: CMPA #$0E
    cpu.compare_a(0x0E);

    // B4C5: BNE $B50B
    if (!cpu.zero_flag()) cpu.m_pc = 0xB50B;

    // B4C7: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // B4CA: SUBD #$0000
    cpu.m_d -= 0x0000;

    // B4CD: BLT $B516
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB516;

    // B4CF: LDD $5042
    cpu.m_d = cpu.read_memory16(0x5042);

    // B4D2: BGT $B50B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB50B;

    // B4D4: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // B4D7: ADDD #$0200
    cpu.m_d += 0x0200;

    // B4DA: SUBD $5044
    cpu.m_d -= 0x5044;

    // B4DD: BLT $B50B
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB50B;

    // B4DF: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B4E2: BGT $B50B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB50B;

    // B4E4: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // B4E7: SUBD $5040
    cpu.m_d -= 0x5040;

    // B4EA: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B4ED: BHI $B50B
    // TODO: Convert BHI $B50B

    // B4EF: LDA #$0F
    cpu.m_a = 0x0F;

    // B4F1: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B4F3: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // B4F5: BLT $B4FD
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB4FD;

    // B4F7: JSR $9874
    cpu.call_function(0x9874);

    // B4FA: JSR $BDB2
    cpu.call_function(0xBDB2);

    // B4FD: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // B4FF: BNE $B50B
    if (!cpu.zero_flag()) cpu.m_pc = 0xB50B;

    // B501: LDA #$4E
    cpu.m_a = 0x4E;

    // B503: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B506: BPL $B509
    if (!cpu.negative_flag()) cpu.m_pc = 0xB509;

    // B509: STA <$63
    cpu.write_memory(0x63, cpu.m_a);

    // B50B: JSR $CD5C
    cpu.call_function(0xCD5C);

    // B50E: BRA $B513
    goto label_B513;

    // B510: JSR $CD50
    cpu.call_function(0xCD50);

    // B513: JSR $CD74
    cpu.call_function(0xCD74);

    // B516: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // B519: ADDD #$0400
    cpu.m_d += 0x0400;

    // B51C: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // B51F: LDA <$9E
    cpu.m_a = cpu.read_memory(0x9E);

    // B523: LBNE $B483
    // TODO: Convert LBNE $B483

    // B527: LDA <$9C
    cpu.m_a = cpu.read_memory(0x9C);

    // B529: CMPA #$02
    cpu.compare_a(0x02);

    // B52B: BNE $B565
    if (!cpu.zero_flag()) cpu.m_pc = 0xB565;

    // B52D: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // B52F: LDA $000F,X
    // TODO: Fix comma operator: LDA $000F,X

    // B534: BCC $B53D
    if (!cpu.carry_flag()) cpu.m_pc = 0xB53D;

    // B536: BMI $B53D
    if (cpu.negative_flag()) cpu.m_pc = 0xB53D;

    // B538: INC $49BD
    // TODO: Convert INC $49BD

    // B53B: BRA $B540
    goto label_B540;

    // B53E: BNE $B533
    if (!cpu.zero_flag()) cpu.m_pc = 0xB533;

    // B540: LDA $49BD
    cpu.m_a = cpu.read_memory(0x49BD);

    // B543: BEQ $B565
    if (cpu.zero_flag()) cpu.m_pc = 0xB565;

    // B545: LDA $49BE
    cpu.m_a = cpu.read_memory(0x49BE);

    // B549: CMPA #$03
    cpu.compare_a(0x03);

    // B54B: BCS $B54F
    if (cpu.carry_flag()) cpu.m_pc = 0xB54F;

    // B54D: LDA #$00
    cpu.m_a = 0x00;

    // B54F: STA $49BE
    cpu.write_memory(0x49BE, cpu.m_a);

    // B552: LDA $49C1
    cpu.m_a = cpu.read_memory(0x49C1);

    // B555: SUBA #$08
    cpu.m_a -= 0x08;

    // B557: CMPA #$40
    cpu.compare_a(0x40);

    // B559: BCC $B55D
    if (!cpu.carry_flag()) cpu.m_pc = 0xB55D;

    // B55B: LDA #$40
    cpu.m_a = 0x40;

    // B55D: STA $49C1
    cpu.write_memory(0x49C1, cpu.m_a);

    // B560: LDA #$00
    cpu.m_a = 0x00;

    // B562: STA $49BD
    cpu.write_memory(0x49BD, cpu.m_a);

    // B565: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // B568: ADDD #$0800
    cpu.m_d += 0x0800;

    // B56B: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // B56E: SUBD $5040
    cpu.m_d -= 0x5040;

    // B571: SUBD #$7000
    cpu.m_d -= 0x7000;

    // B574: LBCS $B46F
    // TODO: Convert LBCS $B46F

    // B579: LDA #$00
    cpu.m_a = 0x00;

    // B57B: STA $49BD
    cpu.write_memory(0x49BD, cpu.m_a);

    // B57E: LDA $49C0
    cpu.m_a = cpu.read_memory(0x49C0);

    // B581: STA $49BE
    cpu.write_memory(0x49BE, cpu.m_a);

    // B584: LDA #$88
    cpu.m_a = 0x88;

    // B586: STA $49C1
    cpu.write_memory(0x49C1, cpu.m_a);

    // B589: LDB $5040
    cpu.m_b = cpu.read_memory(0x5040);

    // B58F: ANDB #$0F
    cpu.m_b &= 0x0F;

    // B591: LDX #$4999
    cpu.m_x = 0x4999;

    // B595: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // B597: LDA $5040
    cpu.m_a = cpu.read_memory(0x5040);

    // B59A: ANDA #$F8
    cpu.m_a &= 0xF8;

    // B59C: ADDA #$04
    cpu.m_a += 0x04;

    // B59E: LDB #$00
    cpu.m_b = 0x00;

    // B5A0: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // B5A3: LDD #$0400
    cpu.m_d = 0x0400;

    // B5A6: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // B5A9: LDD #$F200
    cpu.m_d = 0xF200;

    // B5AC: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // B5AF: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // B5B1: CMPX #$49A9
    cpu.compare_x(0x49A9);

    // B5B4: BCS $B5B9
    if (cpu.carry_flag()) cpu.m_pc = 0xB5B9;

    // B5B6: LEAX -$10,X
    // TODO: Fix comma operator: LEAX -$10,X

    // B5B9: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // B5BB: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // B5BD: STA <$9E
    cpu.write_memory(0x9E, cpu.m_a);

    // B5BF: ANDA #$03
    cpu.m_a &= 0x03;

    // B5C1: CMPA <$9C
    cpu.compare_a(cpu.read_memory(0x9C));

    // B5C3: LBNE $B650
    // TODO: Convert LBNE $B650

    // B5C7: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B5C9: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B5CB: LDD #$000F
    cpu.m_d = 0x000F;

    // B5CE: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // B5D1: LDA #$67
    cpu.m_a = 0x67;

    // B5D3: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B5D6: LDA <$9C
    cpu.m_a = cpu.read_memory(0x9C);

    // B5D8: CMPA #$02
    cpu.compare_a(0x02);

    // B5DA: BNE $B5EF
    if (!cpu.zero_flag()) cpu.m_pc = 0xB5EF;

    // B5DC: INC $49BD
    // TODO: Convert INC $49BD

    // B5DF: LDB $49BE
    cpu.m_b = cpu.read_memory(0x49BE);

    // B5E3: LDX #$B6B3
    cpu.m_x = 0xB6B3;

    // B5E6: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // B5E8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B5EA: LDA $49C1
    cpu.m_a = cpu.read_memory(0x49C1);

    // B5ED: STA -$1,Y
    // TODO: Handle indexed addressing: STA -$1,Y

    // B5EF: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // B5F2: SUBD $5040
    cpu.m_d -= 0x5040;

    // B5F5: CMPD #$1000
    // TODO: Convert CMPD #$1000

    // B5F9: BGT $B64A
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB64A;

    // B5FB: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B5FD: CMPA #$0E
    cpu.compare_a(0x0E);

    // B5FF: BNE $B645
    if (!cpu.zero_flag()) cpu.m_pc = 0xB645;

    // B601: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // B604: SUBD #$0000
    cpu.m_d -= 0x0000;

    // B607: BLT $B650
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB650;

    // B609: LDD $5042
    cpu.m_d = cpu.read_memory16(0x5042);

    // B60C: BLT $B645
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB645;

    // B60E: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // B611: ADDD #$0200
    cpu.m_d += 0x0200;

    // B614: SUBD $5044
    cpu.m_d -= 0x5044;

    // B617: BLT $B645
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB645;

    // B619: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B61C: BGT $B645
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB645;

    // B61E: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // B621: SUBD $5040
    cpu.m_d -= 0x5040;

    // B624: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B627: BHI $B645
    // TODO: Convert BHI $B645

    // B629: LDA #$0F
    cpu.m_a = 0x0F;

    // B62B: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // B62D: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // B62F: BLT $B637
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB637;

    // B631: JSR $9874
    cpu.call_function(0x9874);

    // B634: JSR $BDB2
    cpu.call_function(0xBDB2);

    // B637: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // B639: BNE $B645
    if (!cpu.zero_flag()) cpu.m_pc = 0xB645;

    // B63B: LDA #$4E
    cpu.m_a = 0x4E;

    // B63D: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B640: BPL $B643
    if (!cpu.negative_flag()) cpu.m_pc = 0xB643;

    // B643: STA <$63
    cpu.write_memory(0x63, cpu.m_a);

    // B645: JSR $CD5C
    cpu.call_function(0xCD5C);

    // B648: BRA $B64D
    goto label_B64D;

    // B64A: JSR $CD50
    cpu.call_function(0xCD50);

    // B64D: JSR $CD74
    cpu.call_function(0xCD74);

    // B650: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // B653: ADDD #$0400
    cpu.m_d += 0x0400;

    // B656: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // B659: LDA <$9E
    cpu.m_a = cpu.read_memory(0x9E);

    // B65D: LBNE $B5BD
    // TODO: Convert LBNE $B5BD

    // B661: LDA <$9C
    cpu.m_a = cpu.read_memory(0x9C);

    // B663: CMPA #$02
    cpu.compare_a(0x02);

    // B665: BNE $B69F
    if (!cpu.zero_flag()) cpu.m_pc = 0xB69F;

    // B667: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // B669: LDA -$0011,X
    // TODO: Fix comma operator: LDA -$0011,X

    // B66E: BCC $B677
    if (!cpu.carry_flag()) cpu.m_pc = 0xB677;

    // B670: BMI $B677
    if (cpu.negative_flag()) cpu.m_pc = 0xB677;

    // B672: INC $49BD
    // TODO: Convert INC $49BD

    // B675: BRA $B67A
    goto label_B67A;

    // B678: BNE $B66D
    if (!cpu.zero_flag()) cpu.m_pc = 0xB66D;

    // B67A: LDA $49BD
    cpu.m_a = cpu.read_memory(0x49BD);

    // B67D: BEQ $B69F
    if (cpu.zero_flag()) cpu.m_pc = 0xB69F;

    // B67F: LDA $49BE
    cpu.m_a = cpu.read_memory(0x49BE);

    // B683: CMPA #$03
    cpu.compare_a(0x03);

    // B685: BCS $B689
    if (cpu.carry_flag()) cpu.m_pc = 0xB689;

    // B687: LDA #$00
    cpu.m_a = 0x00;

    // B689: STA $49BE
    cpu.write_memory(0x49BE, cpu.m_a);

    // B68C: LDA $49C1
    cpu.m_a = cpu.read_memory(0x49C1);

    // B68F: SUBA #$08
    cpu.m_a -= 0x08;

    // B691: CMPA #$40
    cpu.compare_a(0x40);

    // B693: BCC $B697
    if (!cpu.carry_flag()) cpu.m_pc = 0xB697;

    // B695: LDA #$40
    cpu.m_a = 0x40;

    // B697: STA $49C1
    cpu.write_memory(0x49C1, cpu.m_a);

    // B69A: LDA #$00
    cpu.m_a = 0x00;

    // B69C: STA $49BD
    cpu.write_memory(0x49BD, cpu.m_a);

    // B69F: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // B6A2: ADDD #$0800
    cpu.m_d += 0x0800;

    // B6A5: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // B6A8: SUBD $5040
    cpu.m_d -= 0x5040;

    // B6AB: SUBD #$7000
    cpu.m_d -= 0x7000;

    // B6AE: LBCS $B5A9
    // TODO: Convert LBCS $B5A9

    // B6B3: ROR ,X+
    // TODO: Convert ROR ,X+

    // B6B5: COM ,X+
    // TODO: Convert COM ,X+

    // B6B7: LSR ,X+
    // TODO: Convert LSR ,X+

    // B6B9: JSR $B6C7
    cpu.call_function(0xB6C7);

    // B6BC: JSR $B6D7
    cpu.call_function(0xB6D7);

    // B6C0: JMP $b6c0
    goto label_B6C0;

}

} // namespace StarWars