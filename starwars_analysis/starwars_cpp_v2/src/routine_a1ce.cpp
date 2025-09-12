#include "cpu_6809.h"

namespace StarWars {

void routine_a1ce_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a1ce.md
    // Address: 0xA1CE

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

    // A1DB: BCS $0003
    if (cpu.carry_flag()) cpu.m_pc = 0xA1E0;

    // A1DD: LDA $4B13
    cpu.m_a = cpu.read_memory(0x4B13);

    // A1E0: CMPA #$13
    cpu.compare_a(0x13);

    // A1E2: BCS $0021
    if (cpu.carry_flag()) cpu.m_pc = 0xA205;

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

    // A1F9: BCS $0030
    if (cpu.carry_flag()) cpu.m_pc = 0xA22B;

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

    // A248: BCS $007F
    if (cpu.carry_flag()) cpu.m_pc = 0xA2C9;

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

    // A255: LBLT $010C
    // TODO: Convert LBLT $010C

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

    // A277: BPL $00B0
    if (!cpu.negative_flag()) cpu.m_pc = 0xA229;

    // A279: ANDA #$3F
    cpu.m_a &= 0x3F;

    // A27B: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A27E: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // A281: CMPD #$0100
    // TODO: Convert CMPD #$0100

    // A285: BLT $00E2
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA269;

    // A287: CMPD #$3C00
    // TODO: Convert CMPD #$3C00

    // A28B: BCC $00E2
    if (!cpu.carry_flag()) cpu.m_pc = 0xA26F;

    // A28D: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // A290: BPL $00C8
    if (!cpu.negative_flag()) cpu.m_pc = 0xA25A;

    // A294: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A296: SUBD $5000
    cpu.m_d -= 0x5000;

    // A299: BCC $00E2
    if (!cpu.carry_flag()) cpu.m_pc = 0xA27D;

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

    // A2A6: BEQ $00E0
    if (cpu.zero_flag()) cpu.m_pc = 0xA288;

    // A2A8: JSR $A2F8
    cpu.call_function(0xA2F8);

    // A2AB: JSR $A591
    cpu.call_function(0xA591);

    // A2AE: BRA $010C
    cpu.m_pc = 0xA2BC;

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

    // A2BC: BEQ $00F4
    if (cpu.zero_flag()) cpu.m_pc = 0xA2B2;

    // A2BE: CLR ,U
    // TODO: Complex indexed addressing: ,U

    // A2C0: BRA $010C
    cpu.m_pc = 0xA2CE;

    // A2C2: LDA #$0B
    cpu.m_a = 0x0B;

    // A2C4: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // A2C6: BITB #$04
    // TODO: Convert BITB #$04

    // A2C8: BEQ $0108
    if (cpu.zero_flag()) cpu.m_pc = 0xA2D2;

    // A2CA: ORA #$04
    cpu.m_a |= 0x04;

    // A2CC: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A2CE: CMPB #$03
    cpu.compare_b(0x03);

    // A2D0: BNE $0106
    if (!cpu.zero_flag()) cpu.m_pc = 0xA2D8;

    // A2D2: ANDA #$FD
    cpu.m_a &= 0xFD;

    // A2D4: BRA $010A
    cpu.m_pc = 0xA2E0;

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

    // A2E6: BCS $011D
    if (cpu.carry_flag()) cpu.m_pc = 0xA305;

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

    // A2F3: LBCS $0081
    // TODO: Convert LBCS $0081

    // A2F8: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A2FA: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A2FC: CMPB #$03
    cpu.compare_b(0x03);

    // A2FE: BNE $0136
    if (!cpu.zero_flag()) cpu.m_pc = 0xA336;

    // A300: LDB #$09
    cpu.m_b = 0x09;

    // A302: BRA $0138
    cpu.m_pc = 0xA33C;

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

    // A31B: BEQ $0165
    if (cpu.zero_flag()) cpu.m_pc = 0xA382;

    // A31D: BITA #$04
    // TODO: Convert BITA #$04

    // A31F: BNE $0157
    if (!cpu.zero_flag()) cpu.m_pc = 0xA378;

    // A321: BITA #$10
    // TODO: Convert BITA #$10

    // A323: BNE $0160
    if (!cpu.zero_flag()) cpu.m_pc = 0xA385;

    // A325: LDB #$0A
    cpu.m_b = 0x0A;

    // A327: STB <$DC
    cpu.write_memory(0xDC, cpu.m_b);

    // A329: LDD #$6080
    cpu.m_d = 0x6080;

    // A32C: BRA $0163
    cpu.m_pc = 0xA391;

    // A32E: LDD #$6780
    cpu.m_d = 0x6780;

    // A331: BRA $0171
    cpu.m_pc = 0xA3A4;

    // A333: BITA #$04
    // TODO: Convert BITA #$04

    // A335: BNE $016E
    if (!cpu.zero_flag()) cpu.m_pc = 0xA3A5;

    // A337: LDD #$6460
    cpu.m_d = 0x6460;

    // A33A: BRA $0171
    cpu.m_pc = 0xA3AD;

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

    // A363: LBLT $0226
    // TODO: Convert LBLT $0226

    // A367: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A369: CMPA #$03
    cpu.compare_a(0x03);

    // A36B: BEQ $01D9
    if (cpu.zero_flag()) cpu.m_pc = 0xA346;

    // A36D: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // A36F: BLT $01A6
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA317;

    // A371: JSR $BDD0
    cpu.call_function(0xBDD0);

    // A374: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // A377: SUBD #$0200
    cpu.m_d -= 0x0200;

    // A37A: SUBD $5086
    cpu.m_d -= 0x5086;

    // A37D: BGT $01D7
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA356;

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

    // A38D: BLT $01C7
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA356;

    // A38F: JSR $9874
    cpu.call_function(0x9874);

    // A392: JSR $BDB2
    cpu.call_function(0xBDB2);

    // A395: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // A397: BNE $01CF
    if (!cpu.zero_flag()) cpu.m_pc = 0xA368;

    // A399: LDA $5002
    cpu.m_a = cpu.read_memory(0x5002);

    // A39D: LDB #$20
    cpu.m_b = 0x20;

    // A3A0: BPL $01D5
    if (!cpu.negative_flag()) cpu.m_pc = 0xA377;

    // A3A3: STB <$63
    cpu.write_memory(0x63, cpu.m_b);

    // A3A5: BRA $0226
    cpu.m_pc = 0xA3CD;

    // A3A7: LDD $5044
    cpu.m_d = cpu.read_memory16(0x5044);

    // A3AA: SUBD #$07A0
    cpu.m_d -= 0x07A0;

    // A3AD: BGT $0226
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA3D5;

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

    // A3BF: BNE $0226
    if (!cpu.zero_flag()) cpu.m_pc = 0xA3E7;

    // A3C1: LDD $5044
    cpu.m_d = cpu.read_memory16(0x5044);

    // A3C4: SUBD #$05A0
    cpu.m_d -= 0x05A0;

    // A3C7: BGE $0226
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA3EF;

    // A3C9: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // A3CC: SUBD #$0400
    cpu.m_d -= 0x0400;

}

} // namespace StarWars