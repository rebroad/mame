#include "cpu_6809.h"

namespace StarWars {

void routine_b29c_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b29c.md
    // Address: 0xB29C

    // B29C: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // B29E: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // B2A0: BEQ $0035
    if (cpu.zero_flag()) cpu.state_.pc = 0xB2D7;

    // B2A2: STA <$02
    cpu.write_memory(0x02, cpu.state_.a);

    // B2A4: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // B2A7: ANDA <$01
    cpu.state_.a &= 0x01;

    // B2A9: CMPA <$02
    cpu.compare_a(cpu.read_memory(0x02));

    // B2AB: BEQ $0035
    if (cpu.zero_flag()) cpu.state_.pc = 0xB2E2;

    // B2AD: BLS $0025
    // TODO: Convert BLS $0025

    // B2AF: LDA #$04
    cpu.state_.a = 0x04;

    // B2B1: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B2B3: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // B2B5: EORA <$02
    cpu.state_.a ^= 0x02;

    // B2B7: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // B2B9: JSR $97F2
    cpu.call_function(0x97F2);

    // B2BC: JSR $BDFD
    cpu.call_function(0xBDFD);

    // B2BF: BRA $0035
    cpu.state_.pc = 0xB2F6;

    // B2C1: LDA #$04
    cpu.state_.a = 0x04;

    // B2C3: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B2C5: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // B2C7: EORA <$02
    cpu.state_.a ^= 0x02;

    // B2C9: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // B2CB: JSR $97FC
    cpu.call_function(0x97FC);

    // B2CE: JSR $BDFD
    cpu.call_function(0xBDFD);

    // B2D2: LDA <$BC
    cpu.state_.a = cpu.read_memory(0xBC);

    // B2D4: BEQ $0047
    if (cpu.zero_flag()) cpu.state_.pc = 0xB31D;

    // B2D6: LDD <$CC
    cpu.state_.d = cpu.read_memory_word(0xCC);

    // B2D8: BMI $0045
    if (cpu.negative_flag()) cpu.state_.pc = 0xB31F;

    // B2DA: LDA #$04
    cpu.state_.a = 0x04;

    // B2DC: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B2DE: JSR $AD20
    cpu.call_function(0xAD20);

    // B2E1: BRA $0048
    cpu.state_.pc = 0xB32B;

    // B2E4: LDD <$C4
    cpu.state_.d = cpu.read_memory_word(0xC4);

    // B2E6: BMI $005C
    if (cpu.negative_flag()) cpu.state_.pc = 0xB344;

    // B2E8: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // B2EB: BHI $005C
    // TODO: Convert BHI $005C

    // B2ED: SUBD <$D0
    cpu.state_.d -= 0xD0;

    // B2EF: BHI $006B
    // TODO: Convert BHI $006B

    // B2F1: LDA #$04
    cpu.state_.a = 0x04;

    // B2F3: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B2F5: JMP $8ACF
    cpu.state_.pc = 0x8ACF;

    // B2F8: LDD <$C8
    cpu.state_.d = cpu.read_memory_word(0xC8);

    // B2FA: BMI $006B
    if (cpu.negative_flag()) cpu.state_.pc = 0xB367;

    // B2FC: SUBD <$D0
    cpu.state_.d -= 0xD0;

    // B2FE: BHI $006B
    // TODO: Convert BHI $006B

    // B300: LDA #$04
    cpu.state_.a = 0x04;

    // B302: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B304: JMP $A54B
    cpu.state_.pc = 0xA54B;

    // B307: LDD <$D0
    cpu.state_.d = cpu.read_memory_word(0xD0);

    // B309: BMI $008E
    if (cpu.negative_flag()) cpu.state_.pc = 0xB399;

    // B30B: LDA #$FF
    cpu.state_.a = 0xFF;

    // B30D: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B30F: LDA #$0F
    cpu.state_.a = 0x0F;

    // B311: STA $4B23
    cpu.write_memory(0x4B23, cpu.state_.a);

    // B314: LDA <$D0
    cpu.state_.a = cpu.read_memory(0xD0);

    // B316: LDB #$03
    cpu.state_.b = 0x03;

    // B319: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B31D: BCS $0085
    if (cpu.carry_flag()) cpu.state_.pc = 0xB3A4;

    // B31F: LDB #$E0
    cpu.state_.b = 0xE0;

    // B321: STB $4B22
    cpu.write_memory(0x4B22, cpu.state_.b);

    // B324: LDD #$6680
    cpu.state_.d = 0x6680;

    // B327: STD $4B20
    cpu.write_memory(0x4B20, cpu.state_.d);

    // B32B: LDA <$BC
    cpu.state_.a = cpu.read_memory(0xBC);

    // B32D: BEQ $00A1
    if (cpu.zero_flag()) cpu.state_.pc = 0xB3D0;

    // B32F: LDD <$CC
    cpu.state_.d = cpu.read_memory_word(0xCC);

    // B331: BMI $009D
    if (cpu.negative_flag()) cpu.state_.pc = 0xB3D0;

    // B333: SUBD <$C4
    cpu.state_.d -= 0xC4;

    // B335: BCS $00A2
    if (cpu.carry_flag()) cpu.state_.pc = 0xB3D9;

    // B337: BRA $00A9
    cpu.state_.pc = 0xB3E2;

    // B339: LDA <$C4
    cpu.state_.a = cpu.read_memory(0xC4);

    // B33B: BGE $00A9
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB3E6;

    // B33E: LDA #$04
    cpu.state_.a = 0x04;

    // B340: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B342: JMP $AD20
    cpu.state_.pc = 0xAD20;

    // B345: LDA #$04
    cpu.state_.a = 0x04;

    // B347: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B349: JMP $8ACF
    cpu.state_.pc = 0x8ACF;

    // B34C: ADCA $94FF
    // TODO: Convert ADCA $94FF

    // B34F: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B352: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B355: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B358: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B35B: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B35E: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B361: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B364: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B367: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B36A: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B36D: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B370: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B373: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B376: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B379: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B37C: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B37F: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B382: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B385: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B388: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B38B: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B38E: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B391: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B394: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B397: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B39A: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B39D: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B3A0: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B3A3: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B3A6: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B3A9: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B3AC: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B3AF: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // B3BB: BRA $0152
    cpu.state_.pc = 0xB50F;

    // B3BE: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // B3C0: BRA $0167
    cpu.state_.pc = 0xB529;

    // B3C6: LSR <$BC
    // TODO: Convert LSR <$BC

    // B3C8: LDA <$FA
    cpu.state_.a = cpu.read_memory(0xFA);

    // B3CB: BVC $0172
    // TODO: Convert BVC $0172

    // B3D0: BRA $018D
    cpu.state_.pc = 0xB55F;

    // B3D4: BRA $018E
    cpu.state_.pc = 0xB564;

    // B3D8: BRA $0195
    cpu.state_.pc = 0xB56F;

    // B3E4: LDA $49C0
    cpu.state_.a = cpu.read_memory(0x49C0);

    // B3E7: CMPA #$03
    cpu.compare_a(0x03);

    // B3E9: BCS $0154
    if (cpu.carry_flag()) cpu.state_.pc = 0xB53F;

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

    // B47A: BCS $01E3
    if (cpu.carry_flag()) cpu.state_.pc = 0xB65F;

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

    // B489: LBNE $027A
    // TODO: Convert LBNE $027A

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

}

} // namespace StarWars