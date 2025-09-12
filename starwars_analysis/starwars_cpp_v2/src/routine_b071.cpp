#include "cpu_6809.h"

namespace StarWars {

void routine_b071_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b071.md
    // Address: 0xB071

    // B071: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // B073: BEQ $0023
    if (cpu.zero_flag()) cpu.m_pc = 0xB098;

    // B075: JSR $B095
    cpu.call_function(0xB095);

    // B078: LDD #$0200
    cpu.m_d = 0x0200;

    // B07B: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B07E: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B080: BMI $0018
    if (cpu.negative_flag()) cpu.m_pc = 0xB09A;

    // B082: LDA #$04
    cpu.m_a = 0x04;

    // B084: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B086: JSR $AD20
    cpu.call_function(0xAD20);

    // B089: LDA <$44
    cpu.m_a = cpu.read_memory(0x44);

    // B08B: BLE $0023
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB0B0;

    // B08D: LDA #$FF
    cpu.m_a = 0xFF;

    // B08F: STA <$44
    cpu.write_memory(0x44, cpu.m_a);

    // B091: JSR $AD3E
    cpu.call_function(0xAD3E);

    // B095: LDD #$7000
    cpu.m_d = 0x7000;

    // B098: ADDD $5040
    cpu.m_d += 0x5040;

    // B09B: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B09D: LDD #$0000
    cpu.m_d = 0x0000;

    // B0A0: SUBD <$B8
    cpu.m_d -= 0xB8;

    // B0A2: JSR $CDA2
    cpu.call_function(0xCDA2);

    // B0A5: ADDD <$B8
    cpu.m_d += 0xB8;

    // B0A7: ADDD $5042
    cpu.m_d += 0x5042;

    // B0AA: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B0AC: LDD #$0000
    cpu.m_d = 0x0000;

    // B0AF: SUBD <$BA
    cpu.m_d -= 0xBA;

    // B0B1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // B0B4: ADDD <$BA
    cpu.m_d += 0xBA;

    // B0B6: ADDD $5044
    cpu.m_d += 0x5044;

    // B0B9: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);

    // B0BB: LDD #$F000
    cpu.m_d = 0xF000;

    // B0BE: SUBD <$05
    cpu.m_d -= 0x05;

    // B0C0: LBLT $00E7
    // TODO: Convert LBLT $00E7

    // B0C4: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B0C7: LDD $5044
    cpu.m_d = cpu.read_memory16(0x5044);

    // B0CA: SUBD <$05
    cpu.m_d -= 0x05;

    // B0CC: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // B0CF: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B0D1: SUBD $5042
    cpu.m_d -= 0x5042;

    // B0D4: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // B0D7: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B0D9: SUBD $5040
    cpu.m_d -= 0x5040;

    // B0DC: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // B0DF: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // B0E2: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // B0E5: LDA #$86
    cpu.m_a = 0x86;

    // B0E7: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B0EA: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B0EC: SUBD $5002
    cpu.m_d -= 0x5002;

    // B0EF: BMI $0088
    if (cpu.negative_flag()) cpu.m_pc = 0xB079;

    // B0F1: CMPD #$0400
    // TODO: Convert CMPD #$0400

    // B0F5: BGT $00E7
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB0DE;

    // B0F7: BRA $008E
    cpu.m_pc = 0xB087;

    // B0F9: CMPD #$FC00
    // TODO: Convert CMPD #$FC00

    // B0FD: BLT $00E7
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB0E6;

    // B0FF: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B101: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B103: SUBD $5004
    cpu.m_d -= 0x5004;

    // B106: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B108: STD <$C0
    cpu.write_memory16(0xC0, cpu.m_d);

    // B10A: LDD #$F000
    cpu.m_d = 0xF000;

    // B10D: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);

    // B10F: LDA #$FF
    cpu.m_a = 0xFF;

    // B111: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B113: LDA #$03
    cpu.m_a = 0x03;

    // B115: STA $4B23
    cpu.write_memory(0x4B23, cpu.m_a);

    // B118: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B11A: SUBA $5040
    cpu.m_a -= 0x5040;

    // B11D: LDB #$03
    cpu.m_b = 0x03;

    // B120: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B124: BCS $00B7
    if (cpu.carry_flag()) cpu.m_pc = 0xB0DD;

    // B126: LDB #$E0
    cpu.m_b = 0xE0;

    // B128: STB $4B22
    cpu.write_memory(0x4B22, cpu.m_b);

    // B12B: LDD #$6280
    cpu.m_d = 0x6280;

    // B12E: STD $4B20
    cpu.write_memory16(0x4B20, cpu.m_d);

    // B131: LDA <$95
    cpu.m_a = cpu.read_memory(0x95);

    // B133: BEQ $00E6
    if (cpu.zero_flag()) cpu.m_pc = 0xB11B;

    // B135: LDA <$44
    cpu.m_a = cpu.read_memory(0x44);

    // B137: BNE $00E6
    if (!cpu.zero_flag()) cpu.m_pc = 0xB11F;

    // B139: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B13B: ADDD #$0200
    cpu.m_d += 0x0200;

    // B13E: BLT $00E6
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB126;

    // B140: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B143: BGT $00E6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB12B;

    // B145: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B147: SUBD <$96
    cpu.m_d -= 0x96;

    // B149: ADDD #$0200
    cpu.m_d += 0x0200;

    // B14C: BLT $00E6
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB134;

    // B14E: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B151: BGT $00E6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB139;

    // B153: LDA #$01
    cpu.m_a = 0x01;

    // B155: STA <$44
    cpu.write_memory(0x44, cpu.m_a);

    // B158: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B15A: LBPL $0172
    // TODO: Convert LBPL $0172

    // B15E: LDD #$FC00
    cpu.m_d = 0xFC00;

    // B161: SUBD <$03
    cpu.m_d -= 0x03;

    // B163: LBLT $01EF
    // TODO: Convert LBLT $01EF

    // B167: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B16A: LDD $5042
    cpu.m_d = cpu.read_memory16(0x5042);

    // B16D: SUBD <$03
    cpu.m_d -= 0x03;

    // B16F: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // B172: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);

    // B174: SUBD $5044
    cpu.m_d -= 0x5044;

    // B177: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // B17A: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B17C: SUBD $5040
    cpu.m_d -= 0x5040;

    // B17F: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // B182: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // B185: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // B188: LDA #$86
    cpu.m_a = 0x86;

    // B18A: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B18D: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);

    // B18F: SUBD $5004
    cpu.m_d -= 0x5004;

    // B192: BMI $012D
    if (cpu.negative_flag()) cpu.m_pc = 0xB1C1;

    // B194: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // B198: LBGT $01EF
    // TODO: Convert LBGT $01EF

    // B19C: BRA $0135
    cpu.m_pc = 0xB1D3;

    // B19E: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // B1A2: LBLT $01EF
    // TODO: Convert LBLT $01EF

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

    // B1D0: BCS $0163
    if (cpu.carry_flag()) cpu.m_pc = 0xB235;

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
    cpu.m_pc = 0xB261;

    // B1E3: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B1E6: BLT $01EF
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB1D7;

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

    // B213: BMI $01AC
    if (cpu.negative_flag()) cpu.m_pc = 0xB1C1;

    // B215: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // B219: BGT $01EF
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB20A;

    // B21B: BRA $01B2
    cpu.m_pc = 0xB1CF;

    // B21D: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // B221: BLT $01EF
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB212;

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

    // B24D: BCS $01E0
    if (cpu.carry_flag()) cpu.m_pc = 0xB22F;

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
    cpu.m_pc = 0xB261;

    // B261: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // B263: BNE $01F5
    if (!cpu.zero_flag()) cpu.m_pc = 0xB25A;

    // B266: LDB <$C0
    cpu.m_b = cpu.read_memory(0xC0);

    // B26B: ANDB #$0F
    cpu.m_b &= 0x0F;

    // B26E: LDD <$C0
    cpu.m_d = cpu.read_memory16(0xC0);

    // B270: ANDA #$00
    cpu.m_a &= 0x00;

}

} // namespace StarWars