#include "cpu_6809.h"

namespace StarWars {

void routine_b1a6_b307_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b1a6_b307.md
    // Address: 0xB1A6_B307

    label_B1A6:
    // B1A6: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);

    // B1A8: ADDD #$1000
    cpu.m_d += 0x1000;

    // B1AB: STD <$BE
    cpu.write_memory16(0xBE, cpu.m_d);

    // B1AD: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B1AF: SUBD $5002
    cpu.m_d -= 0x5002;

    // B1B2: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B1B4: STD <$C0
    cpu.write_memory16(0xC0, cpu.m_d);

    // B1B6: LDD #$FC00
    cpu.m_d = 0xFC00;

    // B1B9: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B1BB: LDA #$FF
    cpu.m_a = 0xFF;

    // B1BD: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B1BF: LDA #$09
    cpu.m_a = 0x09;

    // B1C1: STA $4B23
    cpu.write_memory(0x4B23, cpu.m_a);

    // B1C4: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B1C6: SUBA $5040
    cpu.m_a -= 0x5040;

    // B1C9: LDB #$03
    cpu.m_b = 0x03;

    // B1CC: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B1D0: BCS $B1D4
    if (cpu.carry_flag()) cpu.m_pc = 0xB1D4;

    // B1D2: LDB #$E0
    cpu.m_b = 0xE0;

    // B1D4: STB $4B22
    cpu.write_memory(0x4B22, cpu.m_b);

    // B1D7: LDD #$6280
    cpu.m_d = 0x6280;

    // B1DA: STD $4B20
    cpu.write_memory16(0x4B20, cpu.m_d);

    // B1DD: LDX #$4989
    cpu.m_x = 0x4989;

    // B1E0: JMP $B261
    goto label_B261;

    // B1E3: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B1E6: BLT $B260
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB260;

    // B1E8: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B1EB: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B1ED: SUBD $5042
    cpu.m_d -= 0x5042;

    // B1F0: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // B1F3: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);

    // B1F5: SUBD $5044
    cpu.m_d -= 0x5044;

    // B1F8: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // B1FB: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B1FD: SUBD $5040
    cpu.m_d -= 0x5040;

    // B200: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // B203: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // B206: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // B209: LDA #$86
    cpu.m_a = 0x86;

    // B20B: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B20E: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);

    // B210: SUBD $5004
    cpu.m_d -= 0x5004;

    // B213: BMI $B21D
    if (cpu.negative_flag()) cpu.m_pc = 0xB21D;

    // B215: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // B219: BGT $B260
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB260;

    // B21B: BRA $B223
    goto label_B223;

    // B21D: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // B221: BLT $B260
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB260;

    label_B223:
    // B223: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);

    // B225: ADDD #$1000
    cpu.m_d += 0x1000;

    // B228: STD <$BE
    cpu.write_memory16(0xBE, cpu.m_d);

    // B22A: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B22C: SUBD $5002
    cpu.m_d -= 0x5002;

    // B22F: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B231: STD <$C0
    cpu.write_memory16(0xC0, cpu.m_d);

    // B233: LDD #$0400
    cpu.m_d = 0x0400;

    // B236: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B238: LDA #$FF
    cpu.m_a = 0xFF;

    // B23A: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B23C: LDA #$06
    cpu.m_a = 0x06;

    // B23E: STA $4B23
    cpu.write_memory(0x4B23, cpu.m_a);

    // B241: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B243: SUBA $5040
    cpu.m_a -= 0x5040;

    // B246: LDB #$03
    cpu.m_b = 0x03;

    // B249: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B24D: BCS $B251
    if (cpu.carry_flag()) cpu.m_pc = 0xB251;

    // B24F: LDB #$E0
    cpu.m_b = 0xE0;

    // B251: STB $4B22
    cpu.write_memory(0x4B22, cpu.m_b);

    // B254: LDD #$6280
    cpu.m_d = 0x6280;

    // B257: STD $4B20
    cpu.write_memory16(0x4B20, cpu.m_d);

    // B25A: LDX #$4999
    cpu.m_x = 0x4999;

    // B25D: JMP $B261
    goto label_B261;

    label_B261:
    // B261: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // B263: BNE $B266
    if (!cpu.zero_flag()) cpu.m_pc = 0xB266;

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

    // B275: BLT $B29B
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB29B;

    // B277: SUBD #$0480
    cpu.m_d -= 0x0480;

    // B27A: BGT $B29B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB29B;

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

    // B288: BGT $B292
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB292;

    // B28A: SUBD #$FC80
    cpu.m_d -= 0xFC80;

    // B28D: BLT $B29B
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB29B;

    // B28F: JMP $B29C
    goto label_B29C;

    // B292: SUBD #$0080
    cpu.m_d -= 0x0080;

    // B295: ASL <$01
    // TODO: Convert ASL <$01

    // B297: ASL <$01
    // TODO: Convert ASL <$01

    // B299: BNE $B285
    if (!cpu.zero_flag()) cpu.m_pc = 0xB285;

    label_B29C:
    // B29C: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B29E: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // B2A0: BEQ $B2D1
    if (cpu.zero_flag()) cpu.m_pc = 0xB2D1;

    // B2A2: STA <$02
    cpu.write_memory(0x02, cpu.m_a);

    // B2A4: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B2A7: ANDA <$01
    cpu.m_a &= 0x01;

    // B2A9: CMPA <$02
    cpu.compare_a(cpu.read_memory(0x02));

    // B2AB: BEQ $B2D1
    if (cpu.zero_flag()) cpu.m_pc = 0xB2D1;

    // B2AD: BLS $B2C1
    // TODO: Convert BLS $B2C1

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

    // B2BF: BRA $B2D1
    goto label_B2D1;

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

    // B2D4: BEQ $B2E3
    if (cpu.zero_flag()) cpu.m_pc = 0xB2E3;

    // B2D6: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B2D8: BMI $B2E1
    if (cpu.negative_flag()) cpu.m_pc = 0xB2E1;

    // B2DA: LDA #$04
    cpu.m_a = 0x04;

    // B2DC: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2DE: JSR $AD20
    cpu.call_function(0xAD20);

    // B2E1: BRA $B2E4
    goto label_B2E4;

    label_B2E4:
    // B2E4: LDD <$C4
    cpu.m_d = cpu.read_memory16(0xC4);

    // B2E6: BMI $B2F8
    if (cpu.negative_flag()) cpu.m_pc = 0xB2F8;

    // B2E8: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // B2EB: BHI $B2F8
    // TODO: Convert BHI $B2F8

    // B2ED: SUBD <$D0
    cpu.m_d -= 0xD0;

    // B2EF: BHI $B307
    // TODO: Convert BHI $B307

    // B2F1: LDA #$04
    cpu.m_a = 0x04;

    // B2F3: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B2F5: JMP $8ACF
    goto label_8ACF;

    // B2F8: LDD <$C8
    cpu.m_d = cpu.read_memory16(0xC8);

    // B2FA: BMI $B307
    if (cpu.negative_flag()) cpu.m_pc = 0xB307;

    // B2FC: SUBD <$D0
    cpu.m_d -= 0xD0;

    // B2FE: BHI $B307
    // TODO: Convert BHI $B307

    // B300: LDA #$04
    cpu.m_a = 0x04;

    // B302: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B304: JMP $A54B
    goto label_A54B;

    label_B307:
    // B307: JMP $b307
    goto label_B307;

}

} // namespace StarWars