#include "cpu_6809.h"

namespace StarWars {

void routine_a214_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a214.md
    // Address: 0xA214

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
    cpu.m_pc = 0xA2DA;

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
    cpu.m_pc = 0xA2DA;

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
    cpu.m_pc = 0xA2D8;

    // A2D6: ORA #$10
    cpu.m_a |= 0x10;

    // A2D8: STA ,U
    // TODO: Handle indexed addressing: STA ,U

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

    // A413: LDD <$00
    cpu.m_d = cpu.read_memory16(0x00);

}

} // namespace StarWars