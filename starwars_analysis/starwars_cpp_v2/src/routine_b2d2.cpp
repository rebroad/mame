#include "cpu_6809.h"

namespace StarWars {

void routine_b2d2_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b2d2.md
    // Address: 0xB2D2

    // B2D2: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // B2D4: BEQ $0011
    if (cpu.zero_flag()) cpu.m_pc = 0xB2E7;

    // B2D6: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B2D8: BMI $000F
    if (cpu.negative_flag()) cpu.m_pc = 0xB2E9;

    // B2DA: LDA #$04
    cpu.m_a = 0x04;

    // B2DC: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2DE: JSR $AD20
    cpu.call_function(0xAD20);

    // B2E1: BRA $0012
    cpu.m_pc = 0xB2F5;

    // B2E4: LDD <$C4
    cpu.m_d = cpu.read_memory16(0xC4);

    // B2E6: BMI $0026
    if (cpu.negative_flag()) cpu.m_pc = 0xB30E;

    // B2E8: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // B2EB: BHI $0026
    // TODO: Convert BHI $0026

    // B2ED: SUBD <$D0
    cpu.m_d -= 0xD0;

    // B2EF: BHI $0035
    // TODO: Convert BHI $0035

    // B2F1: LDA #$04
    cpu.m_a = 0x04;

    // B2F3: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2F5: JMP $8ACF
    cpu.m_pc = 0x8ACF;

    // B2F8: LDD <$C8
    cpu.m_d = cpu.read_memory16(0xC8);

    // B2FA: BMI $0035
    if (cpu.negative_flag()) cpu.m_pc = 0xB331;

    // B2FC: SUBD <$D0
    cpu.m_d -= 0xD0;

    // B2FE: BHI $0035
    // TODO: Convert BHI $0035

    // B300: LDA #$04
    cpu.m_a = 0x04;

    // B302: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B304: JMP $A54B
    cpu.m_pc = 0xA54B;

    // B307: LDD <$D0
    cpu.m_d = cpu.read_memory16(0xD0);

    // B309: BMI $0058
    if (cpu.negative_flag()) cpu.m_pc = 0xB363;

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

    // B31D: BCS $004F
    if (cpu.carry_flag()) cpu.m_pc = 0xB36E;

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

    // B32D: BEQ $006B
    if (cpu.zero_flag()) cpu.m_pc = 0xB39A;

    // B32F: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B331: BMI $0067
    if (cpu.negative_flag()) cpu.m_pc = 0xB39A;

    // B333: SUBD <$C4
    cpu.m_d -= 0xC4;

    // B335: BCS $006C
    if (cpu.carry_flag()) cpu.m_pc = 0xB3A3;

    // B337: BRA $0073
    cpu.m_pc = 0xB3AC;

    // B339: LDA <$C4
    cpu.m_a = cpu.read_memory(0xC4);

    // B33B: BGE $0073
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB3B0;

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

    // B3BB: BRA $011C
    cpu.m_pc = 0xB3D9;

    // B3BE: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // B3C0: BRA $0131
    cpu.m_pc = 0xB3F3;

    // B3C6: LSR <$BC
    // TODO: Convert LSR <$BC

    // B3C8: LDA <$FA
    cpu.m_a = cpu.read_memory(0xFA);

    // B3CB: BVC $013C
    // TODO: Convert BVC $013C

    // B3D0: BRA $0157
    cpu.m_pc = 0xB429;

    // B3D4: BRA $0158
    cpu.m_pc = 0xB42E;

    // B3D8: BRA $015F
    cpu.m_pc = 0xB439;

    // B3E4: LDA $49C0
    cpu.m_a = cpu.read_memory(0x49C0);

    // B3E7: CMPA #$03
    cpu.compare_a(0x03);

    // B3E9: BCS $011E
    if (cpu.carry_flag()) cpu.m_pc = 0xB409;

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

    // B47A: BCS $01AD
    if (cpu.carry_flag()) cpu.m_pc = 0xB429;

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

    // B489: LBNE $0244
    // TODO: Convert LBNE $0244

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

    // B4A0: BNE $01E3
    if (!cpu.zero_flag()) cpu.m_pc = 0xB485;

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

    // B4BF: BGT $023E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB4FF;

    // B4C1: LDA <$9D
    cpu.m_a = cpu.read_memory(0x9D);

    // B4C3: CMPA #$0E
    cpu.compare_a(0x0E);

    // B4C5: BNE $0239
    if (!cpu.zero_flag()) cpu.m_pc = 0xB500;

    // B4C7: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // B4CA: SUBD #$0000
    cpu.m_d -= 0x0000;

    // B4CD: BLT $0244
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB513;

    // B4CF: LDD $5042
    cpu.m_d = cpu.read_memory16(0x5042);

}

} // namespace StarWars