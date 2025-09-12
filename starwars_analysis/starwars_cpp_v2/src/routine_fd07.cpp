#include "cpu_6809.h"

namespace StarWars {

void routine_fd07_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_fd07.md
    // Address: 0xFD07

    // FD07: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // FD0A: ANDA #$10
    cpu.state_.a &= 0x10;

    // FD0C: LDB $4320
    cpu.state_.b = cpu.read_memory(0x4320);

    // FD0F: ANDB #$04
    cpu.state_.b &= 0x04;

    // FD11: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FD15: BEQ $0013
    if (cpu.zero_flag()) cpu.state_.pc = 0xFD2A;

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

    // FD31: BNE $0053
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFD86;

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

    // FD60: BCS $0028
    if (cpu.carry_flag()) cpu.state_.pc = 0xFD8A;

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

    // FD6E: BEQ $006B
    if (cpu.zero_flag()) cpu.state_.pc = 0xFDDB;

    // FD70: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // FD72: LDX #$FD85
    cpu.state_.x = 0xFD85;

    // FD75: CMPA ,X+
    // TODO: Complex indexed addressing: ,X+

    // FD77: BNE $0074
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFDED;

    // FD79: JMP [,X]
    // TODO: Complex indexed addressing: [,X]

    // FD7B: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // FD7D: CMPX #$FD9A
    cpu.compare_x(0xFD9A);

    // FD80: BCS $006E
    if (cpu.carry_flag()) cpu.state_.pc = 0xFDF0;

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

    // FDB3: BHI $00A0
    // TODO: Convert BHI $00A0

    // FDB5: BLS $00A3
    // TODO: Convert BLS $00A3

    // FDB7: BCC $00A6
    if (!cpu.carry_flag()) cpu.state_.pc = 0xFE5F;

    // FDB9: BCS $00AC
    if (cpu.carry_flag()) cpu.state_.pc = 0xFE67;

    // FDBB: BNE $0113
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFED0;

    // FDBD: BEQ $00BB
    if (cpu.zero_flag()) cpu.state_.pc = 0xFE7A;

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

    // FDCC: BNE $00CD
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFE9B;

    // FDCE: LDU #$4686
    cpu.state_.u = 0x4686;

    // FDD1: JMP $FEFF
    cpu.state_.pc = 0xFEFF;

    // FDD4: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // FDD8: BEQ $00D6
    if (cpu.zero_flag()) cpu.state_.pc = 0xFEB0;

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

    // FDE7: BNE $00E8
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFED1;

    // FDE9: LDU #$4683
    cpu.state_.u = 0x4683;

    // FDEC: JMP $FEFF
    cpu.state_.pc = 0xFEFF;

    // FDEF: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // FDF2: CMPB #$06
    cpu.compare_b(0x06);

    // FDF4: BNE $0107
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFEFD;

    // FDF6: TST <$D1
    // TODO: Convert TST <$D1

    // FDF8: BNE $0105
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFEFF;

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

    // FE06: BCS $00F8
    if (cpu.carry_flag()) cpu.state_.pc = 0xFF00;

    // FE08: LDA #$FF
    cpu.state_.a = 0xFF;

    // FE0A: STA <$D1
    cpu.write_memory(0xD1, cpu.state_.a);

    // FE0C: BRA $012D
    cpu.state_.pc = 0xFF3B;

    // FE0E: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // FE10: STA $4620
    cpu.write_memory(0x4620, cpu.state_.a);

    // FE13: LDX #$FE37
    cpu.state_.x = 0xFE37;

    // FE19: CMPX #$FE4F
    cpu.compare_x(0xFE4F);

    // FE1C: BCS $011A
    if (cpu.carry_flag()) cpu.state_.pc = 0xFF38;

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

    // FE37: BRA $0152
    cpu.state_.pc = 0xFF8B;

    // FE39: BRA $0154
    cpu.state_.pc = 0xFF8F;

    // FE3B: NEG <$00
    // TODO: Convert NEG <$00

    // FE3D: NEG <$00
    // TODO: Convert NEG <$00

    // FE40: XLBRA $21BD
    // TODO: Convert XLBRA $21BD

    // FE45: BRA $0160
    cpu.state_.pc = 0xFFA7;

    // FE47: XNC $4020
    // TODO: Convert XNC $4020

    // FE4A: BRA $01AC
    cpu.state_.pc = 0xFFF8;

    // FE4C: SUBA #$20
    cpu.state_.a -= 0x20;

    // FE4E: BRA $00D7
    cpu.state_.pc = 0xFF27;

    // FE50: LDD $F158
    cpu.state_.d = cpu.read_memory_word(0xF158);

    // FE54: LDY #$0000
    cpu.state_.y = 0x0000;

    // FE58: CMPX #$FD07
    cpu.compare_x(0xFD07);

    // FE5B: BCS $0159
    if (cpu.carry_flag()) cpu.state_.pc = 0xFFB6;

    // FE5D: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FE60: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FE63: LEAY $1,Y
    // TODO: Fix comma operator: LEAY $1,Y

    // FE65: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE69: BCS $016A
    if (cpu.carry_flag()) cpu.state_.pc = 0xFFD5;

    // FE6B: LDS #$FD07
    cpu.state_.sp = 0xFD07;

    // FE6F: BRA $016E
    cpu.state_.pc = 0xFFDF;

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

    // FE8A: BCS $0188
    if (cpu.carry_flag()) cpu.state_.pc = 0x10014;

    // FE8C: JMP $FF24
    cpu.state_.pc = 0xFF24;

    // FE8F: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FE92: LEAY $1,Y
    // TODO: Fix comma operator: LEAY $1,Y

    // FE94: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE98: BCS $0199
    if (cpu.carry_flag()) cpu.state_.pc = 0x10033;

    // FE9A: LDS #$FD07
    cpu.state_.sp = 0xFD07;

    // FE9E: BRA $019D
    cpu.state_.pc = 0x1003D;

    // FEA0: LDS #$FE87
    cpu.state_.sp = 0xFE87;

    // FEA4: JMP $FB38
    cpu.state_.pc = 0xFB38;

    // FEA7: ANDB #$07
    cpu.state_.b &= 0x07;

    // FEA9: BEQ $01A7
    if (cpu.zero_flag()) cpu.state_.pc = 0x10052;

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

    // FEBD: BNE $01FC
    if (!cpu.zero_flag()) cpu.state_.pc = 0x100BB;

    // FEBF: LDB #$80
    cpu.state_.b = 0x80;

    // FEC2: BMI $01FC
    if (cpu.negative_flag()) cpu.state_.pc = 0x100C0;

    // FEC4: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FEC7: TST $4401
    // TODO: Convert TST $4401

    // FECA: BMI $01BA
    if (cpu.negative_flag()) cpu.state_.pc = 0x10086;

    // FECC: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // FECF: LDB $4401
    cpu.state_.b = cpu.read_memory(0x4401);

    // FED2: BPL $01FC
    if (!cpu.negative_flag()) cpu.state_.pc = 0x100D0;

    // FED4: LDX #$0100
    cpu.state_.x = 0x0100;

    // FED7: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // FED9: BEQ $01FC
    if (cpu.zero_flag()) cpu.state_.pc = 0x100D7;

    // FEDB: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FEDE: LDB $4401
    cpu.state_.b = cpu.read_memory(0x4401);

    // FEE1: ANDB #$40
    cpu.state_.b &= 0x40;

    // FEE3: BEQ $01D0
    if (cpu.zero_flag()) cpu.state_.pc = 0x100B5;

    // FEE5: TST $4401
    // TODO: Convert TST $4401

    // FEE8: BMI $01FC
    if (cpu.negative_flag()) cpu.state_.pc = 0x100E6;

    // FEEA: CMPA $4400
    cpu.compare_a(cpu.read_memory(0x4400));

    // FEED: BNE $01FC
    if (!cpu.zero_flag()) cpu.state_.pc = 0x100EB;

    // FEEF: LDB $4401
    cpu.state_.b = cpu.read_memory(0x4401);

    // FEF2: ANDB #$40
    cpu.state_.b &= 0x40;

    // FEF4: BMI $01FC
    if (cpu.negative_flag()) cpu.state_.pc = 0x100F2;

    // FEF7: BCC $01A9
    if (!cpu.carry_flag()) cpu.state_.pc = 0x100A2;

    // FEF9: LDU #$4682
    cpu.state_.u = 0x4682;

    // FEFC: JMP $FEFF
    cpu.state_.pc = 0xFEFF;

    // FEFF: LDA #$00
    cpu.state_.a = 0x00;

    // FF01: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // FF03: LDX #$0000
    cpu.state_.x = 0x0000;

    // FF06: STA >$0000
    cpu.write_memory(0x0000, cpu.state_.a);

}

} // namespace StarWars