#include "cpu_6809.h"

namespace StarWars {

void routine_b32b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b32b.md
    // Address: 0xB32B

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
    cpu.m_pc = 0xB345;

    // B339: LDA <$C4
    cpu.m_a = cpu.read_memory(0xC4);

    // B33B: BGE $B345
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB345;

    // B33E: LDA #$04
    cpu.m_a = 0x04;

    // B340: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B342: JMP $AD20
    cpu.m_pc = 0xAD20;

    // B345: LDA #$04
    cpu.m_a = 0x04;

    // B347: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B349: JMP $8ACF
    cpu.m_pc = 0x8ACF;

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
    cpu.m_pc = 0xB3EE;

    // B3BE: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // B3C0: BRA $B403
    cpu.m_pc = 0xB403;

    // B3C6: LSR <$BC
    // TODO: Convert LSR <$BC

    // B3C8: LDA <$FA
    cpu.m_a = cpu.read_memory(0xFA);

    // B3CB: BVC $B40E
    // TODO: Convert BVC $B40E

    // B3D0: BRA $B429
    cpu.m_pc = 0xB429;

    // B3D4: BRA $B42A
    cpu.m_pc = 0xB42A;

    // B3D8: BRA $B431
    cpu.m_pc = 0xB431;

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
    cpu.m_pc = 0xB513;

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

}

} // namespace StarWars