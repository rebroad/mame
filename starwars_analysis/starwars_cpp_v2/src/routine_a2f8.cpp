#include "cpu_6809.h"

namespace StarWars {

void routine_a2f8_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a2f8.md
    // Address: 0xA2F8

    // A2F8: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A2FA: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A2FC: CMPB #$03
    cpu.compare_b(0x03);

    // A2FE: BNE $A304
    if (!cpu.zero_flag()) cpu.m_pc = 0xA304;

    // A300: LDB #$09
    cpu.m_b = 0x09;

    // A302: BRA $A306
    cpu.m_pc = 0xA306;

    // A304: LDB #$08
    cpu.m_b = 0x08;

    // A306: STB <$DC
    cpu.write_memory(0xDC, cpu.m_b);

    // A308: LDD #$6680
    cpu.m_d = 0x6680;

    // A30B: STD $5E02
    cpu.write_memory16(0x5E02, cpu.m_d);

    // A30E: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A311: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A313: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A315: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A317: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A319: CMPB #$03
    cpu.compare_b(0x03);

    // A31B: BEQ $A333
    if (cpu.zero_flag()) cpu.m_pc = 0xA333;

    // A31D: BITA #$04
    // TODO: Convert BITA #$04

    // A31F: BNE $A325
    if (!cpu.zero_flag()) cpu.m_pc = 0xA325;

    // A321: BITA #$10
    // TODO: Convert BITA #$10

    // A323: BNE $A32E
    if (!cpu.zero_flag()) cpu.m_pc = 0xA32E;

    // A325: LDB #$0A
    cpu.m_b = 0x0A;

    // A327: STB <$DC
    cpu.write_memory(0xDC, cpu.m_b);

    // A329: LDD #$6080
    cpu.m_d = 0x6080;

    // A32C: BRA $A331
    cpu.m_pc = 0xA331;

    // A32E: LDD #$6780
    cpu.m_d = 0x6780;

    // A331: BRA $A33F
    cpu.m_pc = 0xA33F;

    // A333: BITA #$04
    // TODO: Convert BITA #$04

    // A335: BNE $A33C
    if (!cpu.zero_flag()) cpu.m_pc = 0xA33C;

    // A337: LDD #$6460
    cpu.m_d = 0x6460;

    // A33A: BRA $A33F
    cpu.m_pc = 0xA33F;

    // A33C: LDD #$6080
    cpu.m_d = 0x6080;

    // A33F: STD $5E00
    cpu.write_memory16(0x5E00, cpu.m_d);

    // A342: LDA #$72
    cpu.m_a = 0x72;

    // A344: STA $5E04
    cpu.write_memory(0x5E04, cpu.m_a);

    // A347: LDA $5000
    cpu.m_a = cpu.read_memory(0x5000);

    // A34C: STA $5E05
    cpu.write_memory(0x5E05, cpu.m_a);

    // A34F: LDB #$40
    cpu.m_b = 0x40;

    // A353: ADDA #$40
    cpu.m_a += 0x40;

    // A355: STA $5E03
    cpu.write_memory(0x5E03, cpu.m_a);

    // A358: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // A35D: ADDD #$0400
    cpu.m_d += 0x0400;

    // A360: SUBD $5000
    cpu.m_d -= 0x5000;

    // A363: LBLT $A3F4
    // TODO: Convert LBLT $A3F4

    // A367: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A369: CMPA #$03
    cpu.compare_a(0x03);

    // A36B: BEQ $A3A7
    if (cpu.zero_flag()) cpu.m_pc = 0xA3A7;

    // A36D: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // A36F: BLT $A374
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA374;

    // A371: JSR $BDD0
    cpu.call_function(0xBDD0);

    // A374: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // A377: SUBD #$0200
    cpu.m_d -= 0x0200;

    // A37A: SUBD $5086
    cpu.m_d -= 0x5086;

    // A37D: BGT $A3A5
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA3A5;

    // A37F: LDD #$A018
    cpu.m_d = 0xA018;

    // A382: STD $5E02
    cpu.write_memory16(0x5E02, cpu.m_d);

    // A385: LDD #$6080
    cpu.m_d = 0x6080;

    // A388: STD $5E00
    cpu.write_memory16(0x5E00, cpu.m_d);

    // A38B: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // A38D: BLT $A395
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA395;

    // A38F: JSR $9874
    cpu.call_function(0x9874);

    // A392: JSR $BDB2
    cpu.call_function(0xBDB2);

    // A395: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // A397: BNE $A39D
    if (!cpu.zero_flag()) cpu.m_pc = 0xA39D;

    // A399: LDA $5002
    cpu.m_a = cpu.read_memory(0x5002);

    // A39D: LDB #$20
    cpu.m_b = 0x20;

    // A3A0: BPL $A3A3
    if (!cpu.negative_flag()) cpu.m_pc = 0xA3A3;

    // A3A3: STB <$63
    cpu.write_memory(0x63, cpu.m_b);

    // A3A5: BRA $A3F4
    cpu.m_pc = 0xA3F4;

    // A3A7: LDD $5044
    cpu.m_d = cpu.read_memory16(0x5044);

    // A3AA: SUBD #$07A0
    cpu.m_d -= 0x07A0;

    // A3AD: BGT $A3F4
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA3F4;

    // A3AF: JSR $BDD0
    cpu.call_function(0xBDD0);

    // A3B2: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A3B4: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A3B7: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A3B9: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A3BB: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A3BD: BITA #$04
    // TODO: Convert BITA #$04

    // A3BF: BNE $A3F4
    if (!cpu.zero_flag()) cpu.m_pc = 0xA3F4;

    // A3C1: LDD $5044
    cpu.m_d = cpu.read_memory16(0x5044);

    // A3C4: SUBD #$05A0
    cpu.m_d -= 0x05A0;

    // A3C7: BGE $A3F4
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA3F4;

    // A3C9: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // A3CC: SUBD #$0400
    cpu.m_d -= 0x0400;

    // A3CF: SUBD $5086
    cpu.m_d -= 0x5086;

    // A3D2: BGT $A3F4
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA3F4;

    // A3D4: LDD #$A018
    cpu.m_d = 0xA018;

    // A3D7: STD $5E00
    cpu.write_memory16(0x5E00, cpu.m_d);

    // A3DA: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // A3DC: BLT $A3E4
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA3E4;

    // A3DE: JSR $9874
    cpu.call_function(0x9874);

    // A3E1: JSR $BDB2
    cpu.call_function(0xBDB2);

    // A3E4: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // A3E6: BNE $A3F4
    if (!cpu.zero_flag()) cpu.m_pc = 0xA3F4;

    // A3E8: LDA #$13
    cpu.m_a = 0x13;

    // A3EA: LDB $5002
    cpu.m_b = cpu.read_memory(0x5002);

    // A3ED: BMI $A3F0
    if (cpu.negative_flag()) cpu.m_pc = 0xA3F0;

    // A3F0: ADDA <$63
    cpu.m_a += 0x63;

    // A3F2: STA <$63
    cpu.write_memory(0x63, cpu.m_a);

    // A3F4: LDA $5000
    cpu.m_a = cpu.read_memory(0x5000);

    // A3F7: SUBA #$08
    cpu.m_a -= 0x08;

    // A3F9: BGT $A400
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA400;

    // A3FB: JSR $CD68
    cpu.call_function(0xCD68);

    // A3FE: BRA $A403
    cpu.m_pc = 0xA403;

    // A400: JSR $CD50
    cpu.call_function(0xCD50);

    // A403: JSR $CD74
    cpu.call_function(0xCD74);

    // A406: JSR $A459
    cpu.call_function(0xA459);

    // A40A: JSR $CDE7
    cpu.call_function(0xCDE7);

    // A40D: LDD #$0000
    cpu.m_d = 0x0000;

    // A410: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // A413: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // A415: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // A418: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // A41A: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // A41D: LDD #$000F
    cpu.m_d = 0x000F;

    // A420: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // A423: LDA #$2A
    cpu.m_a = 0x2A;

    // A425: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A428: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // A42B: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // A42E: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A431: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // A434: BPL $A455
    if (!cpu.negative_flag()) cpu.m_pc = 0xA455;

    // A436: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // A438: BEQ $A455
    if (cpu.zero_flag()) cpu.m_pc = 0xA455;

    // A43A: LDA #$FF
    cpu.m_a = 0xFF;

    // A43C: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // A43E: LDA #$03
    cpu.m_a = 0x03;

    // A440: STA $4B23
    cpu.write_memory(0x4B23, cpu.m_a);

    // A443: LDD #$6280
    cpu.m_d = 0x6280;

    // A446: STD $4B20
    cpu.write_memory16(0x4B20, cpu.m_d);

    // A449: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A450: ADDB #$C0
    cpu.m_b += 0xC0;

    // A452: STB $4B22
    cpu.write_memory(0x4B22, cpu.m_b);

    // A455: JSR $CDE7
    cpu.call_function(0xCDE7);

    // A459: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A45B: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A460: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // A463: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A465: SUBD $5042
    cpu.m_d -= 0x5042;

    // A468: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A46B: LDD #$0000
    cpu.m_d = 0x0000;

    // A46E: SUBD $5044
    cpu.m_d -= 0x5044;

    // A471: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A474: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // A477: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A47A: LDA #$86
    cpu.m_a = 0x86;

    // A47C: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A47F: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // A482: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // A485: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A488: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // A48B: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A48D: CMPA #$03
    cpu.compare_a(0x03);

    // A48F: BEQ $A49F
    if (cpu.zero_flag()) cpu.m_pc = 0xA49F;

    // A491: LDD #$03C0
    cpu.m_d = 0x03C0;

    // A494: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A497: LDD #$5280
    cpu.m_d = 0x5280;

    // A49A: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A49D: BRA $A4BA
    cpu.m_pc = 0xA4BA;

    // A49F: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A4A2: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A4A4: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A4A6: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A4A8: BITA #$04
    // TODO: Convert BITA #$04

    // A4AA: LBNE $A54A
    // TODO: Convert LBNE $A54A

    // A4AE: LDD #$0690
    cpu.m_d = 0x0690;

    // A4B1: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A4B4: LDD #$05A0
    cpu.m_d = 0x05A0;

    // A4B7: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A4BA: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // A4BD: SUBD #$0100
    cpu.m_d -= 0x0100;

    // A4C0: BPL $A4C5
    if (!cpu.negative_flag()) cpu.m_pc = 0xA4C5;

    // A4C2: LDD #$0000
    cpu.m_d = 0x0000;

    // A4C5: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A4C8: LDA #$86
    cpu.m_a = 0x86;

    // A4CA: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A4CD: LDD $501A
    cpu.m_d = cpu.read_memory16(0x501A);

    // A4D0: ADDD $5002
    cpu.m_d += 0x5002;

    // A4D3: ADDD #$000A
    cpu.m_d += 0x000A;

    // A4D6: SUBD $5078
    cpu.m_d -= 0x5078;

    // A4D9: LBLT $A54A
    // TODO: Convert LBLT $A54A

    // A4DF: SUBD #$000A
    cpu.m_d -= 0x000A;

    // A4E2: SUBD $5002
    cpu.m_d -= 0x5002;

    // A4E5: LBGT $A54A
    // TODO: Convert LBGT $A54A

    // A4E9: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // A4EC: SUBD $501C
    cpu.m_d -= 0x501C;

    // A4EF: BMI $A54A
    if (cpu.negative_flag()) cpu.m_pc = 0xA54A;

    // A4F1: SUBD $5004
    cpu.m_d -= 0x5004;

    // A4F4: BGT $A54A
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA54A;

    // A4F6: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

}

} // namespace StarWars