#include "cpu_6809.h"

namespace StarWars {

void routine_fd00_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_fd00.md
    // Address: 0xFD00

    // FD00: CMPX [$FFAF,PCR]
    // TODO: Complex indexed addressing: [$FFAF,PCR]

    // FD03: LDD $ACFC
    cpu.state_.d = cpu.read_memory_word(0xACFC);

    // FD06: CMPX [A,Y]
    // TODO: Complex indexed addressing: [A,Y]

    // FD09: NEG <$84
    // TODO: Convert NEG <$84

    // FD0B: LDB $4320
    cpu.state_.b = cpu.read_memory(0x4320);

    // FD0F: ANDB #$04
    cpu.state_.b &= 0x04;

    // FD11: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FD15: BEQ $001A
    if (cpu.zero_flag()) cpu.state_.pc = 0xFD31;

    // FD17: JMP $F720
    cpu.state_.pc = 0xF720;

    // FD1A: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FD1D: LDA #$FF
    cpu.state_.a = 0xFF;

    // FD1F: STA $4686
    cpu.write_memory(0x4686, cpu.state_.a);

    // FD22: STA $4683
    cpu.write_memory(0x4683, cpu.state_.a);

    // FD25: STA $4682
    cpu.write_memory(0x4682, cpu.state_.a);

    // FD28: LDB $4340
    cpu.state_.b = cpu.read_memory(0x4340);

    // FD2C: LDU #$FD9A
    cpu.state_.u = 0xFD9A;

    // FD2F: CMPB ,U+
    // TODO: Complex indexed addressing: ,U+

    // FD31: BNE $005A
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFD8D;

    // FD33: STA $4620
    cpu.write_memory(0x4620, cpu.state_.a);

    // FD36: LDY #$0000
    cpu.state_.y = 0x0000;

    // FD3A: LDD #$BFAE
    cpu.state_.d = 0xBFAE;

    // FD3D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD3F: LDD #$8040
    cpu.state_.d = 0x8040;

    // FD42: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD44: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // FD46: LDS #$4FFF
    cpu.state_.sp = 0x4FFF;

    // FD4A: JSR $E790
    cpu.call_function(0xE790);

    // FD4D: LDD #$2020
    cpu.state_.d = 0x2020;

    // FD50: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD52: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD54: STA $4600
    cpu.write_memory(0x4600, cpu.state_.a);

    // FD57: LDU #$FDBC
    cpu.state_.u = 0xFDBC;

    // FD5A: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // FD5C: CMPU #$FDBC
    // TODO: Convert CMPU #$FDBC

    // FD60: BCS $002F
    if (cpu.carry_flag()) cpu.state_.pc = 0xFD91;

    // FD62: LDB $4340
    cpu.state_.b = cpu.read_memory(0x4340);

    // FD66: TFR B,A
    cpu.state_.a = cpu.state_.b;

    // FD68: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // FD6A: ANDA #$F8
    cpu.state_.a &= 0xF8;

    // FD6C: CMPA #$C0
    cpu.compare_a(0xC0);

    // FD6E: BEQ $0072
    if (cpu.zero_flag()) cpu.state_.pc = 0xFDE2;

    // FD70: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // FD72: LDX #$FD85
    cpu.state_.x = 0xFD85;

    // FD75: CMPA ,X+
    // TODO: Complex indexed addressing: ,X+

    // FD77: BNE $007B
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFDF4;

    // FD79: JMP [,X]
    // TODO: Complex indexed addressing: [,X]

    // FD7B: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // FD7D: CMPX #$FD9A
    cpu.compare_x(0xFD9A);

    // FD80: BCS $0075
    if (cpu.carry_flag()) cpu.state_.pc = 0xFDF7;

    // FD82: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FD85: NEG <$FD
    // TODO: Convert NEG <$FD

    // FD87: CMPX $80FD
    cpu.compare_x(cpu.read_memory_word(0x80FD));

    // FD8A: STB <$C0
    cpu.write_memory(0xC0, cpu.state_.b);

    // FD8C: STD $F2E0
    cpu.write_memory(0xF2E0, cpu.state_.d);

    // FD8F: LDU $4FE8
    cpu.state_.u = cpu.read_memory_word(0x4FE8);

    // FD92: LDU $4FF0
    cpu.state_.u = cpu.read_memory_word(0x4FF0);

    // FD95: LDU $7CF8
    cpu.state_.u = cpu.read_memory_word(0x7CF8);

    // FD98: LDU $A7E0
    cpu.state_.u = cpu.read_memory_word(0xA7E0);

    // FD9B: CMPB -$F,X
    // TODO: Fix comma operator: CMPB -$F,X

    // FD9E: SBCB -$E,X
    // TODO: Convert SBCB -$E,X

    // FDA0: ADDD -$D,X
    // TODO: Fix comma operator: ADDD -$D,X

    // FDA2: ANDB -$C,X
    // TODO: Fix comma operator: ANDB -$C,X

    // FDA4: BITB -$B,X
    // TODO: Convert BITB -$B,X

    // FDA6: LDB -$A,X
    // TODO: Fix comma operator: LDB -$A,X

    // FDA8: STB -$9,X
    // TODO: Handle indexed addressing: STB -$9,X

    // FDAA: EORB -$8,X
    // TODO: Fix comma operator: EORB -$8,X

    // FDAC: ADCB -$7,X
    // TODO: Convert ADCB -$7,X

    // FDAE: ORB $0,Y
    // TODO: Fix comma operator: ORB $0,Y

    // FDB0: SUBB $21F1
    cpu.state_.b -= 0x21F1;

    // FDB3: BHI $00A7
    // TODO: Convert BHI $00A7

    // FDB5: BLS $00AA
    // TODO: Convert BLS $00AA

    // FDB7: BCC $00AD
    if (!cpu.carry_flag()) cpu.state_.pc = 0xFE66;

    // FDB9: BCS $00B3
    if (cpu.carry_flag()) cpu.state_.pc = 0xFE6E;

    // FDBB: BNE $011A
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFED7;

    // FDBD: BEQ $00C2
    if (cpu.zero_flag()) cpu.state_.pc = 0xFE81;

    // FDBF: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FDC2: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // FDC4: ANDA #$40
    cpu.state_.a &= 0x40;

    // FDC6: ANDB #$01
    cpu.state_.b &= 0x01;

    // FDC8: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FDCC: BNE $00D4
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFEA2;

    // FDCE: LDU #$4686
    cpu.state_.u = 0x4686;

    // FDD1: JMP $FEFF
    cpu.state_.pc = 0xFEFF;

    // FDD4: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // FDD8: BEQ $00DD
    if (cpu.zero_flag()) cpu.state_.pc = 0xFEB7;

    // FDDA: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FDDD: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // FDDF: ANDA #$81
    cpu.state_.a &= 0x81;

    // FDE1: ANDB #$F8
    cpu.state_.b &= 0xF8;

    // FDE3: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FDE7: BNE $00EF
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFED8;

    // FDE9: LDU #$4683
    cpu.state_.u = 0x4683;

    // FDEC: JMP $FEFF
    cpu.state_.pc = 0xFEFF;

    // FDEF: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // FDF2: CMPB #$06
    cpu.compare_b(0x06);

    // FDF4: BNE $010E
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFF04;

    // FDF6: TST <$D1
    // TODO: Convert TST <$D1

    // FDF8: BNE $010C
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFF06;

    // FDFA: LDX #$0800
    cpu.state_.x = 0x0800;

    // FDFD: LDA #$00
    cpu.state_.a = 0x00;

    // FDFF: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // FE01: ADDA #$05
    cpu.state_.a += 0x05;

    // FE03: CMPX #$1000
    cpu.compare_x(0x1000);

    // FE06: BCS $00FF
    if (cpu.carry_flag()) cpu.state_.pc = 0xFF07;

    // FE08: LDA #$FF
    cpu.state_.a = 0xFF;

    // FE0A: STA <$D1
    cpu.write_memory(0xD1, cpu.state_.a);

    // FE0C: BRA $0134
    cpu.state_.pc = 0xFF42;

    // FE0E: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // FE10: STA $4620
    cpu.write_memory(0x4620, cpu.state_.a);

    // FE13: LDX #$FE37
    cpu.state_.x = 0xFE37;

    // FE19: CMPX #$FE4F
    cpu.compare_x(0xFE4F);

    // FE1C: BCS $0121
    if (cpu.carry_flag()) cpu.state_.pc = 0xFF3F;

    // FE1E: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FE21: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // FE23: STD >$0000
    cpu.write_memory(0x0000, cpu.state_.d);

    // FE26: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // FE28: STD >$0002
    cpu.write_memory(0x0002, cpu.state_.d);

    // FE2B: LDD #$2020
    cpu.state_.d = 0x2020;

    // FE2E: STD >$0004
    cpu.write_memory(0x0004, cpu.state_.d);

    // FE31: STA $4600
    cpu.write_memory(0x4600, cpu.state_.a);

    // FE34: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // FE37: BRA $0159
    cpu.state_.pc = 0xFF92;

    // FE39: BRA $015B
    cpu.state_.pc = 0xFF96;

    // FE3B: NEG <$00
    // TODO: Convert NEG <$00

    // FE3D: NEG <$00
    // TODO: Convert NEG <$00

    // FE40: XLBRA $21C4
    // TODO: Convert XLBRA $21C4

    // FE45: BRA $0167
    cpu.state_.pc = 0xFFAE;

    // FE47: XNC $4020
    // TODO: Convert XNC $4020

    // FE4A: BRA $01B3
    cpu.state_.pc = 0xFFFF;

    // FE4C: SUBA #$20
    cpu.state_.a -= 0x20;

    // FE4E: BRA $00DE
    cpu.state_.pc = 0xFF2E;

    // FE50: LDD $F158
    cpu.state_.d = cpu.read_memory_word(0xF158);

    // FE54: LDY #$0000
    cpu.state_.y = 0x0000;

    // FE58: CMPX #$FD07
    cpu.compare_x(0xFD07);

    // FE5B: BCS $0160
    if (cpu.carry_flag()) cpu.state_.pc = 0xFFBD;

    // FE5D: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FE60: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FE63: LEAY $1,Y
    // TODO: Fix comma operator: LEAY $1,Y

    // FE65: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE69: BCS $0171
    if (cpu.carry_flag()) cpu.state_.pc = 0xFFDC;

    // FE6B: LDS #$FD07
    cpu.state_.sp = 0xFD07;

    // FE6F: BRA $0175
    cpu.state_.pc = 0xFFE6;

    // FE71: LDS #$FE58
    cpu.state_.sp = 0xFE58;

    // FE75: TFR X,D
    cpu.state_.d = cpu.state_.x;

    // FE77: SUBD #$FCFF
    cpu.state_.d -= 0xFCFF;

    // FE7A: JMP [,X]
    // TODO: Complex indexed addressing: [,X]

    // FE7C: LDX #$FB4B
    cpu.state_.x = 0xFB4B;

    // FE83: LDY #$0000
    cpu.state_.y = 0x0000;

    // FE87: CMPX #$FB73
    cpu.compare_x(0xFB73);

    // FE8A: BCS $018F
    if (cpu.carry_flag()) cpu.state_.pc = 0x1001B;

    // FE8C: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FE8F: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FE92: LEAY $1,Y
    // TODO: Fix comma operator: LEAY $1,Y

    // FE94: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE98: BCS $01A0
    if (cpu.carry_flag()) cpu.state_.pc = 0x1003A;

    // FE9A: LDS #$FD07
    cpu.state_.sp = 0xFD07;

    // FE9E: BRA $01A4
    cpu.state_.pc = 0x10044;

    // FEA0: LDS #$FE87
    cpu.state_.sp = 0xFE87;

    // FEA4: JMP $FB38
    cpu.state_.pc = 0xFB38;

    // FEA7: ANDB #$07
    cpu.state_.b &= 0x07;

    // FEA9: BEQ $01AE
    if (cpu.zero_flag()) cpu.state_.pc = 0x10059;

    // FEAB: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FEAE: LDA #$01
    cpu.state_.a = 0x01;

    // FEB0: STB $46E0
    cpu.write_memory(0x46E0, cpu.state_.b);

    // FEB3: TFR X,U
    cpu.state_.u = cpu.state_.x;

    // FEB5: LDB $4400
    cpu.state_.b = cpu.read_memory(0x4400);

    // FEB8: LDB $4401
    cpu.state_.b = cpu.read_memory(0x4401);

    // FEBB: ANDB #$40
    cpu.state_.b &= 0x40;

    // FEBD: BNE $0203
    if (!cpu.zero_flag()) cpu.state_.pc = 0x100C2;

    // FEBF: LDB #$80
    cpu.state_.b = 0x80;

    // FEC2: BMI $0203
    if (cpu.negative_flag()) cpu.state_.pc = 0x100C7;

    // FEC4: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FEC7: TST $4401
    // TODO: Convert TST $4401

    // FECA: BMI $01C1
    if (cpu.negative_flag()) cpu.state_.pc = 0x1008D;

    // FECC: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // FECF: LDB $4401
    cpu.state_.b = cpu.read_memory(0x4401);

    // FED2: BPL $0203
    if (!cpu.negative_flag()) cpu.state_.pc = 0x100D7;

    // FED4: LDX #$0100
    cpu.state_.x = 0x0100;

    // FED7: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // FED9: BEQ $0203
    if (cpu.zero_flag()) cpu.state_.pc = 0x100DE;

    // FEDB: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FEDE: LDB $4401
    cpu.state_.b = cpu.read_memory(0x4401);

    // FEE1: ANDB #$40
    cpu.state_.b &= 0x40;

    // FEE3: BEQ $01D7
    if (cpu.zero_flag()) cpu.state_.pc = 0x100BC;

    // FEE5: TST $4401
    // TODO: Convert TST $4401

    // FEE8: BMI $0203
    if (cpu.negative_flag()) cpu.state_.pc = 0x100ED;

    // FEEA: CMPA $4400
    cpu.compare_a(cpu.read_memory(0x4400));

    // FEED: BNE $0203
    if (!cpu.zero_flag()) cpu.state_.pc = 0x100F2;

    // FEEF: LDB $4401
    cpu.state_.b = cpu.read_memory(0x4401);

    // FEF2: ANDB #$40
    cpu.state_.b &= 0x40;

    // FEF4: BMI $0203
    if (cpu.negative_flag()) cpu.state_.pc = 0x100F9;

    // FEF7: BCC $01B0
    if (!cpu.carry_flag()) cpu.state_.pc = 0x100A9;

    // FEF9: LDU #$4682
    cpu.state_.u = 0x4682;

    // FEFC: JMP $FEFF
    cpu.state_.pc = 0xFEFF;

    // FEFF: LDA #$00
    cpu.state_.a = 0x00;

}

} // namespace StarWars