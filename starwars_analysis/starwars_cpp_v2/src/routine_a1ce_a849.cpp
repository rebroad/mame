#include "cpu_6809.h"

namespace StarWars {

void routine_a1ce_a849_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a1ce_a849.md
    // Address: 0xA1CE_A849

    label_A1CE:
    // A1CE: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A1D1: LDA #$00
    cpu.m_a = 0x00;

    // A1D3: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A1D5: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // A1D7: CMPU #$49E2
    // TODO: Convert CMPU #$49E2

    // A1DB: BCS $A1D1
    if (cpu.carry_flag()) cpu.m_pc = 0xA1D1;

    // A1DD: LDA $4B13
    cpu.m_a = cpu.read_memory(0x4B13);

    // A1E0: CMPA #$13
    cpu.compare_a(0x13);

    // A1E2: BCS $A1EF
    if (cpu.carry_flag()) cpu.m_pc = 0xA1EF;

    // A1E4: LDB #$06
    cpu.m_b = 0x06;

    // A1E6: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A1EA: ADDA #$0D
    cpu.m_a += 0x0D;

    // A1EC: STA $4B13
    cpu.write_memory(0x4B13, cpu.m_a);

    // A1EF: LDB $4B13
    cpu.m_b = cpu.read_memory(0x4B13);

    // A1F2: LDX #$98CB
    cpu.m_x = 0x98CB;

    // A1F6: CMPX #$98DE
    cpu.compare_x(0x98DE);

    // A1F9: BCS $A1FE
    if (cpu.carry_flag()) cpu.m_pc = 0xA1FE;

    // A1FB: LDX #$98DD
    cpu.m_x = 0x98DD;

    // A1FE: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // A200: STA $4B1A
    cpu.write_memory(0x4B1A, cpu.m_a);

    // A203: LDD $9856
    cpu.m_d = cpu.read_memory16(0x9856);

    // A206: STD $4B2E
    cpu.write_memory16(0x4B2E, cpu.m_d);

    // A209: LDA $9858
    cpu.m_a = cpu.read_memory(0x9858);

    // A20C: STA $4B30
    cpu.write_memory(0x4B30, cpu.m_a);

    // A20F: LDA #$00
    cpu.m_a = 0x00;

    // A211: STA <$A7
    cpu.write_memory(0xA7, cpu.m_a);

    // A214: LDB #$07
    cpu.m_b = 0x07;

    // A216: STB <$DC
    cpu.write_memory(0xDC, cpu.m_b);

    // A218: JSR $CD38
    cpu.call_function(0xCD38);

    // A21B: LDD #$0000
    cpu.m_d = 0x0000;

    // A21E: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // A221: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // A224: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // A227: JSR $A40A
    cpu.call_function(0xA40A);

    // A22A: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // A22D: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // A230: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // A233: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // A236: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // A239: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // A23C: LDB $4B13
    cpu.m_b = cpu.read_memory(0x4B13);

    // A241: LDX #$A182
    cpu.m_x = 0xA182;

    // A245: CMPX #$A1CE
    cpu.compare_x(0xA1CE);

    // A248: BCS $A24D
    if (cpu.carry_flag()) cpu.m_pc = 0xA24D;

    // A24A: LDX #$A1CA
    cpu.m_x = 0xA1CA;

    // A24D: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A24F: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // A251: LDA <$A7
    cpu.m_a = cpu.read_memory(0xA7);

    // A253: CMPA $5,X
    // TODO: Fix comma operator: CMPA $5,X

    // A255: LBLT $A2DA
    // TODO: Convert LBLT $A2DA

    // A259: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A25B: STD $5E00
    cpu.write_memory16(0x5E00, cpu.m_d);

    // A25E: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A260: STD $5E02
    cpu.write_memory16(0x5E02, cpu.m_d);

    // A263: LDD #$1E00
    cpu.m_d = 0x1E00;

    // A266: STD $5E04
    cpu.write_memory16(0x5E04, cpu.m_d);

    // A269: LDD #$01C0
    cpu.m_d = 0x01C0;

    // A26C: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // A26F: LDA #$67
    cpu.m_a = 0x67;

    // A271: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A274: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // A277: BPL $A27E
    if (!cpu.negative_flag()) cpu.m_pc = 0xA27E;

    // A279: ANDA #$3F
    cpu.m_a &= 0x3F;

    // A27B: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A27E: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // A281: CMPD #$0100
    // TODO: Convert CMPD #$0100

    // A285: BLT $A2B0
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA2B0;

    // A287: CMPD #$3C00
    // TODO: Convert CMPD #$3C00

    // A28B: BCC $A2B0
    if (!cpu.carry_flag()) cpu.m_pc = 0xA2B0;

    // A28D: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // A290: BPL $A296
    if (!cpu.negative_flag()) cpu.m_pc = 0xA296;

    // A294: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A296: SUBD $5000
    cpu.m_d -= 0x5000;

    // A299: BCC $A2B0
    if (!cpu.carry_flag()) cpu.m_pc = 0xA2B0;

    // A29B: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A29E: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A2A0: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A2A2: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A2A4: BITA #$02
    // TODO: Convert BITA #$02

    // A2A6: BEQ $A2AE
    if (cpu.zero_flag()) cpu.m_pc = 0xA2AE;

    // A2A8: JSR $A2F8
    cpu.call_function(0xA2F8);

    // A2AB: JSR $A591
    cpu.call_function(0xA591);

    // A2AE: BRA $A2DA
    goto label_A2DA;

    // A2B0: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A2B2: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A2B5: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A2B7: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A2B9: LDA $4B3D
    cpu.m_a = cpu.read_memory(0x4B3D);

    // A2BC: BEQ $A2C2
    if (cpu.zero_flag()) cpu.m_pc = 0xA2C2;

    // A2BE: CLR ,U
    // TODO: Complex indexed addressing: ,U

    // A2C0: BRA $A2DA
    goto label_A2DA;

    // A2C2: LDA #$0B
    cpu.m_a = 0x0B;

    // A2C4: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // A2C6: BITB #$04
    // TODO: Convert BITB #$04

    // A2C8: BEQ $A2D6
    if (cpu.zero_flag()) cpu.m_pc = 0xA2D6;

    // A2CA: ORA #$04
    cpu.m_a |= 0x04;

    // A2CC: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A2CE: CMPB #$03
    cpu.compare_b(0x03);

    // A2D0: BNE $A2D4
    if (!cpu.zero_flag()) cpu.m_pc = 0xA2D4;

    // A2D2: ANDA #$FD
    cpu.m_a &= 0xFD;

    // A2D4: BRA $A2D8
    goto label_A2D8;

    // A2D6: ORA #$10
    cpu.m_a |= 0x10;

    label_A2D8:
    // A2D8: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    label_A2DA:
    // A2DA: LDB $4B13
    cpu.m_b = cpu.read_memory(0x4B13);

    // A2DF: LDX #$A182
    cpu.m_x = 0xA182;

    // A2E3: CMPX #$A1CE
    cpu.compare_x(0xA1CE);

    // A2E6: BCS $A2EB
    if (cpu.carry_flag()) cpu.m_pc = 0xA2EB;

    // A2E8: LDX #$A1CA
    cpu.m_x = 0xA1CA;

    // A2EB: TFR X,U
    cpu.m_u = cpu.m_x;

    // A2ED: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A2EF: LEAX $7,X
    // TODO: Fix comma operator: LEAX $7,X

    // A2F1: CMPX $2,U
    // TODO: Fix comma operator: CMPX $2,U

    // A2F3: LBCS $A24F
    // TODO: Convert LBCS $A24F

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
    goto label_A306;

    // A304: LDB #$08
    cpu.m_b = 0x08;

    label_A306:
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
    goto label_A331;

    // A32E: LDD #$6780
    cpu.m_d = 0x6780;

    label_A331:
    // A331: BRA $A33F
    goto label_A33F;

    // A333: BITA #$04
    // TODO: Convert BITA #$04

    // A335: BNE $A33C
    if (!cpu.zero_flag()) cpu.m_pc = 0xA33C;

    // A337: LDD #$6460
    cpu.m_d = 0x6460;

    // A33A: BRA $A33F
    goto label_A33F;

    // A33C: LDD #$6080
    cpu.m_d = 0x6080;

    label_A33F:
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
    goto label_A3F4;

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

    label_A3F4:
    // A3F4: LDA $5000
    cpu.m_a = cpu.read_memory(0x5000);

    // A3F7: SUBA #$08
    cpu.m_a -= 0x08;

    // A3F9: BGT $A400
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA400;

    // A3FB: JSR $CD68
    cpu.call_function(0xCD68);

    // A3FE: BRA $A403
    goto label_A403;

    // A400: JSR $CD50
    cpu.call_function(0xCD50);

    label_A403:
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
    goto label_A4BA;

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

    label_A4BA:
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

    // A4F8: CMPA #$03
    cpu.compare_a(0x03);

    // A4FA: BNE $A50A
    if (!cpu.zero_flag()) cpu.m_pc = 0xA50A;

    // A4FC: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A4FF: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A502: BCC $A508
    if (!cpu.carry_flag()) cpu.m_pc = 0xA508;

    // A504: STD <$C8
    cpu.write_memory16(0xC8, cpu.m_d);

    // A506: STX <$C6
    cpu.write_memory16(0xC6, cpu.m_x);

    // A508: BRA $A54A
    goto label_A54A;

    // A50A: LDD #$4CE0
    cpu.m_d = 0x4CE0;

    // A50D: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A510: LDA #$86
    cpu.m_a = 0x86;

    // A512: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A515: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // A518: ADDD #$000A
    cpu.m_d += 0x000A;

    // A51B: SUBD $501C
    cpu.m_d -= 0x501C;

    // A51E: SUBD $5002
    cpu.m_d -= 0x5002;

    // A521: BLT $A53E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA53E;

    // A523: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A526: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A528: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A52A: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A52C: BITA #$04
    // TODO: Convert BITA #$04

    // A52E: BNE $A54A
    if (!cpu.zero_flag()) cpu.m_pc = 0xA54A;

    // A530: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A533: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A536: BCC $A53C
    if (!cpu.carry_flag()) cpu.m_pc = 0xA53C;

    // A538: STD <$C8
    cpu.write_memory16(0xC8, cpu.m_d);

    // A53A: STX <$C6
    cpu.write_memory16(0xC6, cpu.m_x);

    // A53C: BRA $A54A
    goto label_A54A;

    // A53E: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A541: CMPD <$D0
    // TODO: Convert CMPD <$D0

    // A544: BCC $A54A
    if (!cpu.carry_flag()) cpu.m_pc = 0xA54A;

    // A546: STD <$D0
    cpu.write_memory16(0xD0, cpu.m_d);

    // A548: STX <$CE
    cpu.write_memory16(0xCE, cpu.m_x);

    // A54B: LDX <$C6
    cpu.m_x = cpu.read_memory16(0xC6);

    // A54D: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A54F: SUBD $5098
    cpu.m_d -= 0x5098;

    // A552: ANDA #$7F
    cpu.m_a &= 0x7F;

    // A554: ADDD $5098
    cpu.m_d += 0x5098;

    // A557: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // A55A: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A55C: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // A55F: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A562: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A564: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A566: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A568: ORA #$04
    cpu.m_a |= 0x04;

    // A56A: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A56C: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A56E: CMPA #$03
    cpu.compare_a(0x03);

    // A570: BNE $A580
    if (!cpu.zero_flag()) cpu.m_pc = 0xA580;

    // A572: LDD #$02D0
    cpu.m_d = 0x02D0;

    // A575: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // A578: JSR $B852
    cpu.call_function(0xB852);

    // A57B: JSR $97F7
    cpu.call_function(0x97F7);

    // A57E: BRA $A58C
    goto label_A58C;

    // A580: LDD #$5460
    cpu.m_d = 0x5460;

    // A583: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // A586: JSR $B85E
    cpu.call_function(0xB85E);

    // A589: JSR $973A
    cpu.call_function(0x973A);

    label_A58C:
    // A58C: JSR $BDFD
    cpu.call_function(0xBDFD);

    // A591: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // A593: BLT $A5B2
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA5B2;

    // A595: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A597: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A59A: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A59C: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A59E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5A0: BITA #$04
    // TODO: Convert BITA #$04

    // A5A2: BNE $A5B2
    if (!cpu.zero_flag()) cpu.m_pc = 0xA5B2;

    // A5A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A5A6: CMPA #$02
    cpu.compare_a(0x02);

    // A5A8: LBEQ $A608
    // TODO: Convert LBEQ $A608

    // A5AC: LBHI $A655
    // TODO: Convert LBHI $A655

    // A5B0: BRA $A5B3
    goto label_A5B3;

    label_A5B3:
    // A5B3: LDD #$4000
    cpu.m_d = 0x4000;

    // A5B6: SUBD $507C
    cpu.m_d -= 0x507C;

    // A5BB: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A5BE: LDD #$2940
    cpu.m_d = 0x2940;

    // A5C1: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A5C4: LDD #$02D0
    cpu.m_d = 0x02D0;

    // A5C7: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A5CA: LDA #$86
    cpu.m_a = 0x86;

    // A5CC: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A5CF: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A5D2: SUBD $5044
    cpu.m_d -= 0x5044;

    // A5D5: BGE $A5DE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA5DE;

    // A5D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5D9: ORA #$08
    cpu.m_a |= 0x08;

    // A5DB: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5DE: SUBD $5002
    cpu.m_d -= 0x5002;

    // A5E1: BLE $A5E9
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA5E9;

    // A5E3: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5E5: BITA #$08
    // TODO: Convert BITA #$08

    // A5E7: BEQ $A607
    if (cpu.zero_flag()) cpu.m_pc = 0xA607;

    // A5E9: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5EB: ANDA #$F7
    cpu.m_a &= 0xF7;

    // A5ED: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5EF: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A5F2: BPL $A5F7
    if (!cpu.negative_flag()) cpu.m_pc = 0xA5F7;

    // A5F4: JSR $A7B6
    cpu.call_function(0xA7B6);

    // A5F7: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A5FA: BPL $A5FF
    if (!cpu.negative_flag()) cpu.m_pc = 0xA5FF;

    // A5FC: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A5FF: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A602: BPL $A607
    if (!cpu.negative_flag()) cpu.m_pc = 0xA607;

    // A604: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A608: LDD #$4000
    cpu.m_d = 0x4000;

    // A60B: SUBD $507C
    cpu.m_d -= 0x507C;

    // A610: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A613: LDD #$2940
    cpu.m_d = 0x2940;

    // A616: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A619: LDD #$02D0
    cpu.m_d = 0x02D0;

    // A61C: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A61F: LDA #$86
    cpu.m_a = 0x86;

    // A621: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A624: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A627: SUBD $5044
    cpu.m_d -= 0x5044;

    // A62A: BGE $A633
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA633;

    // A62C: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A62E: ORA #$08
    cpu.m_a |= 0x08;

    // A630: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A633: SUBD $5002
    cpu.m_d -= 0x5002;

    // A636: BLE $A63E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA63E;

    // A638: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A63A: BITA #$08
    // TODO: Convert BITA #$08

    // A63C: BEQ $A654
    if (cpu.zero_flag()) cpu.m_pc = 0xA654;

    // A63E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A640: ANDA #$F7
    cpu.m_a &= 0xF7;

    // A642: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A644: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A647: BPL $A64C
    if (!cpu.negative_flag()) cpu.m_pc = 0xA64C;

    // A649: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A64C: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A64F: BPL $A654
    if (!cpu.negative_flag()) cpu.m_pc = 0xA654;

    // A651: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A655: LDA #$40
    cpu.m_a = 0x40;

    // A657: SUBA $507C
    cpu.m_a -= 0x507C;

    // A65A: CMPA $4703
    cpu.compare_a(cpu.read_memory(0x4703));

    // A65D: BCS $A674
    if (cpu.carry_flag()) cpu.m_pc = 0xA674;

    // A65F: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A662: CMPA #$50
    cpu.compare_a(0x50);

    // A664: BCC $A669
    if (!cpu.carry_flag()) cpu.m_pc = 0xA669;

    // A666: JMP $A728
    goto label_A728;

    // A669: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A66C: BPL $A671
    if (!cpu.negative_flag()) cpu.m_pc = 0xA671;

    // A66E: JMP $A728
    goto label_A728;

    // A671: JMP $A728
    goto label_A728;

    // A675: EORA $B,S
    // TODO: Fix comma operator: EORA $B,S

    // A677: EORA -$B,S
    // TODO: Fix comma operator: EORA -$B,S

    // A679: EORA E,Y
    // TODO: Complex indexed addressing: E,Y

    // A67B: EORA [F,U]
    // TODO: Complex indexed addressing: [F,U]

    // A67D: EORA A,S
    // TODO: Fix comma operator: EORA A,S

    // A67F: EORA [-$5600,S]
    // TODO: Complex indexed addressing: [-$5600,S]

    // A683: ADCA $6,U
    // TODO: Convert ADCA $6,U

    // A685: ADCA ,--Y
    // TODO: Convert ADCA ,--Y

    // A687: ORA A,X
    // TODO: Fix comma operator: ORA A,X

    // A689: ORA [B,Y]
    // TODO: Complex indexed addressing: [B,Y]

    // A68B: STU <$A8
    cpu.write_memory16(0xA8, cpu.m_u);

    // A68D: LDB #$40
    cpu.m_b = 0x40;

    // A68F: STB $5,U
    // TODO: Handle indexed addressing: STB $5,U

    // A691: LDB #$01
    cpu.m_b = 0x01;

    // A693: STB $3,U
    // TODO: Handle indexed addressing: STB $3,U

    // A695: LDB #$01
    cpu.m_b = 0x01;

    // A697: STB $4,U
    // TODO: Handle indexed addressing: STB $4,U

    // A699: LDA $4B3C
    cpu.m_a = cpu.read_memory(0x4B3C);

    // A69C: BLE $A6AB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA6AB;

    // A69E: CMPX $4B32
    cpu.compare_x(cpu.read_memory16(0x4B32));

    // A6A1: BNE $A6AB
    if (!cpu.zero_flag()) cpu.m_pc = 0xA6AB;

    // A6A3: DEC $4B3C
    // TODO: Convert DEC $4B3C

    // A6A6: BNE $A6AB
    if (!cpu.zero_flag()) cpu.m_pc = 0xA6AB;

    // A6A8: JSR $BD4E
    cpu.call_function(0xBD4E);

    // A6AB: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // A6AD: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A6AF: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // A6B1: SUBD $5098
    cpu.m_d -= 0x5098;

    // A6B4: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A6B6: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // A6B8: SUBD $509A
    cpu.m_d -= 0x509A;

    // A6BB: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A6BD: LDD $C,X
    // TODO: Fix comma operator: LDD $C,X

    // A6BF: SUBD $509C
    cpu.m_d -= 0x509C;

    // A6C2: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A6C4: JSR $BE02
    cpu.call_function(0xBE02);

    // A6C9: ROL $9,U
    // TODO: Convert ROL $9,U

    // A6CB: ROL $9,U
    // TODO: Convert ROL $9,U

    // A6CD: COM $9,U
    // TODO: Convert COM $9,U

    // A6CF: COM $9,U
    // TODO: Convert COM $9,U

    // A6E0: LDB $4B19
    cpu.m_b = cpu.read_memory(0x4B19);

    // A6E3: CMPB #$0C
    cpu.compare_b(0x0C);

    // A6E5: BCS $A6EC
    if (cpu.carry_flag()) cpu.m_pc = 0xA6EC;

    // A6E7: LDX #$A6DE
    cpu.m_x = 0xA6DE;

    // A6EA: BRA $A6F2
    goto label_A6F2;

    // A6ED: LDX #$A6C8
    cpu.m_x = 0xA6C8;

    // A6F0: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    label_A6F2:
    // A6F2: BRA $A708
    goto label_A708;

    // A6F4: LDB $4B19
    cpu.m_b = cpu.read_memory(0x4B19);

    // A6F7: CMPB #$07
    cpu.compare_b(0x07);

    // A6F9: BLS $A6FD
    // TODO: Convert BLS $A6FD

    // A6FB: LDB #$07
    cpu.m_b = 0x07;

    // A6FE: LDX #$A718
    cpu.m_x = 0xA718;

    // A701: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A703: BRA $A708
    goto label_A708;

    // A705: LDX #$494B
    cpu.m_x = 0x494B;

    label_A708:
    // A708: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);

    // A70A: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A70C: BEQ $A717
    if (cpu.zero_flag()) cpu.m_pc = 0xA717;

    // A70E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A710: CMPX #$496F
    cpu.compare_x(0x496F);

    // A713: BCS $A708
    if (cpu.carry_flag()) cpu.m_pc = 0xA708;

    // A715: LEAS $2,S
    // TODO: Fix comma operator: LEAS $2,S

    // A719: ROL $9,U
    // TODO: Convert ROL $9,U

    // A71B: ROL $9,U
    // TODO: Convert ROL $9,U

    // A71D: COM $9,U
    // TODO: Convert COM $9,U

    // A71F: COM $9,U
    // TODO: Convert COM $9,U

    label_A728:
    // A728: JSR $A6E0
    cpu.call_function(0xA6E0);

    // A72B: LDA #$70
    cpu.m_a = 0x70;

    // A72D: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A72F: LDA #$05
    cpu.m_a = 0x05;

    // A731: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A733: LDU <$64
    cpu.m_u = cpu.read_memory16(0x64);

    // A735: STX <$01
    cpu.write_memory16(0x01, cpu.m_x);

    // A737: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A739: SUBD $509A
    cpu.m_d -= 0x509A;

    // A73C: BMI $A742
    if (cpu.negative_flag()) cpu.m_pc = 0xA742;

    // A73E: LDA #$08
    cpu.m_a = 0x08;

    // A740: BRA $A744
    goto label_A744;

    // A742: LDA #$07
    cpu.m_a = 0x07;

    label_A744:
    // A744: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A746: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A748: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A74A: SUBA $5098
    cpu.m_a -= 0x5098;

    // A74D: ANDA #$80
    cpu.m_a &= 0x80;

    // A74F: EORA ,U
    // TODO: Complex indexed addressing: ,U

    // A751: LDB $1,U
    // TODO: Fix comma operator: LDB $1,U

    // A753: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // A755: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A757: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // A759: LDD #$0200
    cpu.m_d = 0x0200;

    // A75C: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // A75E: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A760: SUBD $509A
    cpu.m_d -= 0x509A;

    // A763: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // A765: BPL $A76B
    if (!cpu.negative_flag()) cpu.m_pc = 0xA76B;

    // A769: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A76B: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // A76E: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A770: SUBD $5098
    cpu.m_d -= 0x5098;

    // A773: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // A776: LDD #$0200
    cpu.m_d = 0x0200;

    // A779: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // A77C: LDA $4700
    cpu.m_a = cpu.read_memory(0x4700);

    // A781: BCC $A784
    if (!cpu.carry_flag()) cpu.m_pc = 0xA784;

    // A784: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // A786: LDA <$7D
    cpu.m_a = cpu.read_memory(0x7D);

    // A788: EORA $6,X
    // TODO: Fix comma operator: EORA $6,X

    // A78A: BPL $A790
    if (!cpu.negative_flag()) cpu.m_pc = 0xA790;

    // A78C: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A78E: BRA $A7B2
    goto label_A7B2;

    // A790: LDA <$7D
    cpu.m_a = cpu.read_memory(0x7D);

    // A792: BPL $A795
    if (!cpu.negative_flag()) cpu.m_pc = 0xA795;

    // A796: CMPA $7,X
    // TODO: Fix comma operator: CMPA $7,X

    // A798: BHI $A79E
    // TODO: Convert BHI $A79E

    // A79A: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A79C: BRA $A7B2
    goto label_A7B2;

    // A79E: LDA #$FF
    cpu.m_a = 0xFF;

    // A7A0: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // A7A2: LDX <$01
    cpu.m_x = cpu.read_memory16(0x01);

    // A7A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A7A6: CMPA #$08
    cpu.compare_a(0x08);

    // A7A8: BNE $A7AE
    if (!cpu.zero_flag()) cpu.m_pc = 0xA7AE;

    // A7AA: LDA #$07
    cpu.m_a = 0x07;

    // A7AC: BRA $A7B0
    goto label_A7B0;

    // A7AE: LDA #$08
    cpu.m_a = 0x08;

    label_A7B0:
    // A7B0: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    label_A7B2:
    // A7B2: JSR $BE11
    cpu.call_function(0xBE11);

    // A7B6: JSR $A705
    cpu.call_function(0xA705);

    // A7B9: LDA #$03
    cpu.m_a = 0x03;

    // A7BB: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7BD: BRA $A7D1
    goto label_A7D1;

    // A7BF: JSR $A705
    cpu.call_function(0xA705);

    // A7C2: LDA #$04
    cpu.m_a = 0x04;

    // A7C4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7C6: BRA $A7D1
    goto label_A7D1;

    // A7C8: JSR $A705
    cpu.call_function(0xA705);

    // A7CB: LDA #$05
    cpu.m_a = 0x05;

    // A7CD: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7CF: BRA $A7D1
    goto label_A7D1;

    label_A7D1:
    // A7D1: LDA #$70
    cpu.m_a = 0x70;

    // A7D3: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A7D5: LDA #$05
    cpu.m_a = 0x05;

    // A7D7: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A7D9: LDU <$64
    cpu.m_u = cpu.read_memory16(0x64);

    // A7DB: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A7DD: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A7DF: SUBA $5098
    cpu.m_a -= 0x5098;

    // A7E2: ANDA #$80
    cpu.m_a &= 0x80;

    // A7E4: EORA ,U
    // TODO: Complex indexed addressing: ,U

    // A7E6: LDB $1,U
    // TODO: Fix comma operator: LDB $1,U

    // A7E8: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // A7EA: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A7EC: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // A7EE: LDD $5044
    cpu.m_d = cpu.read_memory16(0x5044);

    // A7F1: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // A7F3: JSR $BE11
    cpu.call_function(0xBE11);

    // A7F7: LDA <$95
    cpu.m_a = cpu.read_memory(0x95);

    // A7F9: BEQ $A800
    if (cpu.zero_flag()) cpu.m_pc = 0xA800;

    // A7FB: JSR $A705
    cpu.call_function(0xA705);

    // A7FE: BRA $A803
    goto label_A803;

    // A800: JSR $A6F4
    cpu.call_function(0xA6F4);

    label_A803:
    // A803: LDA #$09
    cpu.m_a = 0x09;

    // A805: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A807: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A809: BRA $A81F
    goto label_A81F;

    // A80B: LDA <$95
    cpu.m_a = cpu.read_memory(0x95);

    // A80D: BEQ $A814
    if (cpu.zero_flag()) cpu.m_pc = 0xA814;

    // A80F: JSR $A705
    cpu.call_function(0xA705);

    // A812: BRA $A817
    goto label_A817;

    // A814: JSR $A6F4
    cpu.call_function(0xA6F4);

    label_A817:
    // A817: LDA #$0A
    cpu.m_a = 0x0A;

    // A819: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A81B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A81D: BRA $A81F
    goto label_A81F;

    label_A81F:
    // A81F: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // A822: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A824: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // A827: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A829: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A82C: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A82E: LDA #$40
    cpu.m_a = 0x40;

    // A830: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A832: LDA #$05
    cpu.m_a = 0x05;

    // A834: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A836: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A83A: LDB $507C
    cpu.m_b = cpu.read_memory(0x507C);

    // A83D: CMPB #$FC
    cpu.compare_b(0xFC);

    // A83F: BLT $A843
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA843;

    // A841: LDA #$00
    cpu.m_a = 0x00;

    // A843: STA $6,U
    // TODO: Handle indexed addressing: STA $6,U

    // A845: JSR $BE11
    cpu.call_function(0xBE11);

    label_A849:
    // A849: JMP $a849
    goto label_A849;

}

} // namespace StarWars