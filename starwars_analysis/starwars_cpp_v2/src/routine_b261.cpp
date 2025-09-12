#include "cpu_6809.h"

namespace StarWars {

void routine_b261_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b261.md
    // Address: 0xB261

    // B261: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // B263: BNE $0005
    if (!cpu.zero_flag()) cpu.m_pc = 0xB26A;

    // B266: LDB <$C0
    cpu.m_b = cpu.read_memory(0xC0);

    // B26B: ANDB #$0F
    cpu.m_b &= 0x0F;

    // B26E: LDD <$C0
    cpu.m_d = cpu.read_memory16(0xC0);

    // B270: ANDA #$07
    cpu.m_a &= 0x07;

    // B272: SUBD #$01C0
    cpu.m_d -= 0x01C0;

    // B275: BLT $003A
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB2B1;

    // B277: SUBD #$0480
    cpu.m_d -= 0x0480;

    // B27A: BGT $003A
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB2B6;

    // B27C: LDA #$03
    cpu.m_a = 0x03;

    // B27E: STA <$01
    cpu.write_memory(0x01, cpu.m_a);

    // B280: LDD <$BE
    cpu.m_d = cpu.read_memory16(0xBE);

    // B282: SUBD #$0040
    cpu.m_d -= 0x0040;

    // B285: SUBD #$0380
    cpu.m_d -= 0x0380;

    // B288: BGT $0031
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB2BB;

    // B28A: SUBD #$FC80
    cpu.m_d -= 0xFC80;

    // B28D: BLT $003A
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB2C9;

    // B28F: JMP $B29C
    cpu.m_pc = 0xB29C;

    // B292: SUBD #$0080
    cpu.m_d -= 0x0080;

    // B295: ASL <$01
    // TODO: Convert ASL <$01

    // B297: ASL <$01
    // TODO: Convert ASL <$01

    // B299: BNE $0024
    if (!cpu.zero_flag()) cpu.m_pc = 0xB2BF;

    // B29C: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B29E: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // B2A0: BEQ $0070
    if (cpu.zero_flag()) cpu.m_pc = 0xB312;

    // B2A2: STA <$02
    cpu.write_memory(0x02, cpu.m_a);

    // B2A4: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B2A7: ANDA <$01
    cpu.m_a &= 0x01;

    // B2A9: CMPA <$02
    cpu.compare_a(cpu.read_memory(0x02));

    // B2AB: BEQ $0070
    if (cpu.zero_flag()) cpu.m_pc = 0xB31D;

    // B2AD: BLS $0060
    // TODO: Convert BLS $0060

    // B2AF: LDA #$04
    cpu.m_a = 0x04;

    // B2B1: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2B3: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // B2B5: EORA <$02
    cpu.m_a ^= 0x02;

    // B2B7: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // B2B9: JSR $97F2
    cpu.call_function(0x97F2);

    // B2BC: JSR $BDFD
    cpu.call_function(0xBDFD);

    // B2BF: BRA $0070
    cpu.m_pc = 0xB331;

    // B2C1: LDA #$04
    cpu.m_a = 0x04;

    // B2C3: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2C5: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // B2C7: EORA <$02
    cpu.m_a ^= 0x02;

    // B2C9: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // B2CB: JSR $97FC
    cpu.call_function(0x97FC);

    // B2CE: JSR $BDFD
    cpu.call_function(0xBDFD);

    // B2D2: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // B2D4: BEQ $0082
    if (cpu.zero_flag()) cpu.m_pc = 0xB258;

    // B2D6: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B2D8: BMI $0080
    if (cpu.negative_flag()) cpu.m_pc = 0xB25A;

    // B2DA: LDA #$04
    cpu.m_a = 0x04;

    // B2DC: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2DE: JSR $AD20
    cpu.call_function(0xAD20);

    // B2E1: BRA $0083
    cpu.m_pc = 0xB266;

    // B2E4: LDD <$C4
    cpu.m_d = cpu.read_memory16(0xC4);

    // B2E6: BMI $0097
    if (cpu.negative_flag()) cpu.m_pc = 0xB27F;

    // B2E8: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // B2EB: BHI $0097
    // TODO: Convert BHI $0097

    // B2ED: SUBD <$D0
    cpu.m_d -= 0xD0;

    // B2EF: BHI $00A6
    // TODO: Convert BHI $00A6

    // B2F1: LDA #$04
    cpu.m_a = 0x04;

    // B2F3: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2F5: JMP $8ACF
    cpu.m_pc = 0x8ACF;

    // B2F8: LDD <$C8
    cpu.m_d = cpu.read_memory16(0xC8);

    // B2FA: BMI $00A6
    if (cpu.negative_flag()) cpu.m_pc = 0xB2A2;

    // B2FC: SUBD <$D0
    cpu.m_d -= 0xD0;

    // B2FE: BHI $00A6
    // TODO: Convert BHI $00A6

    // B300: LDA #$04
    cpu.m_a = 0x04;

    // B302: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B304: JMP $A54B
    cpu.m_pc = 0xA54B;

    // B307: LDD <$D0
    cpu.m_d = cpu.read_memory16(0xD0);

    // B309: BMI $00C9
    if (cpu.negative_flag()) cpu.m_pc = 0xB2D4;

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

    // B31D: BCS $00C0
    if (cpu.carry_flag()) cpu.m_pc = 0xB2DF;

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

    // B32D: BEQ $00DC
    if (cpu.zero_flag()) cpu.m_pc = 0xB30B;

    // B32F: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B331: BMI $00D8
    if (cpu.negative_flag()) cpu.m_pc = 0xB30B;

    // B333: SUBD <$C4
    cpu.m_d -= 0xC4;

    // B335: BCS $00DD
    if (cpu.carry_flag()) cpu.m_pc = 0xB314;

    // B337: BRA $00E4
    cpu.m_pc = 0xB31D;

    // B339: LDA <$C4
    cpu.m_a = cpu.read_memory(0xC4);

    // B33B: BGE $00E4
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB321;

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

    // B3BB: BRA $018D
    cpu.m_pc = 0xB34A;

    // B3BE: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // B3C0: BRA $01A2
    cpu.m_pc = 0xB364;

    // B3C6: LSR <$BC
    // TODO: Convert LSR <$BC

    // B3C8: LDA <$FA
    cpu.m_a = cpu.read_memory(0xFA);

    // B3CB: BVC $01AD
    // TODO: Convert BVC $01AD

    // B3D0: BRA $01C8
    cpu.m_pc = 0xB39A;

    // B3D4: BRA $01C9
    cpu.m_pc = 0xB39F;

    // B3D8: BRA $01D0
    cpu.m_pc = 0xB3AA;

    // B3E4: LDA $49C0
    cpu.m_a = cpu.read_memory(0x49C0);

    // B3E7: CMPA #$03
    cpu.compare_a(0x03);

    // B3E9: BCS $018F
    if (cpu.carry_flag()) cpu.m_pc = 0xB37A;

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

    // B460: ANDA #$00
    cpu.m_a &= 0x00;

}

} // namespace StarWars