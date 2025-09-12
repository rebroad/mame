#include "cpu_6809.h"

namespace StarWars {

void routine_fb74_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_fb74.md
    // Address: 0xFB74

    // Converted from rom_disasm_auto_fb74.md
    // Address: 0xROUTINE_FB74
    // FB74: ANDB $FBCC,PCR
    cpu.state_.b &= $FBCC,PCR;
    // FB78: STD $501E
    cpu.write_memory(501E, cpu.state_.d);
    // FB7B: LDA #$57
    cpu.state_.a = 57;
    // FB7D: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FB80: BRA $FB73
    cpu.state_.pc += FB73;
    // FB82: LDD #$AAAA
    cpu.state_.d = AAAA;
    // FB85: STD $501E
    cpu.write_memory(501E, cpu.state_.d);
    // FB88: LDA #$58
    cpu.state_.a = 58;
    // FB8A: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FB8D: BRA $FB73
    cpu.state_.pc += FB73;
    // FB8F: LDD #$5555
    cpu.state_.d = 5555;
    // FB92: STD $501E
    cpu.write_memory(501E, cpu.state_.d);
    // FB95: LDA #$59
    cpu.state_.a = 59;
    // FB97: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FB9A: BRA $FB73
    cpu.state_.pc += FB73;
    // FB9C: LDA #$5A
    cpu.state_.a = 5A;
    // FB9E: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FBA1: BRA $FB73
    cpu.state_.pc += FB73;
    // FBA3: LDA #$5B
    cpu.state_.a = 5B;
    // FBA5: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FBA8: BRA $FB73
    cpu.state_.pc += FB73;
    // FBAA: LDD #$5555
    cpu.state_.d = 5555;
    // FBAD: STD $5000
    cpu.write_memory(5000, cpu.state_.d);
    // FBB0: LDA #$5C
    cpu.state_.a = 5C;
    // FBB2: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FBB6: LDD $5002
    cpu.state_.d = 5002;
    // FBB9: CMPD #$5555
    // TODO: Convert CMPD #$5555
    // FBBD: BRA $FB73
    cpu.state_.pc += FB73;
    // FBBF: LDD #$AAAA
    cpu.state_.d = AAAA;
    // FBC2: STD $5000
    cpu.write_memory(5000, cpu.state_.d);
    // FBC5: LDA #$5C
    cpu.state_.a = 5C;
    // FBC7: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FBCB: LDD $5002
    cpu.state_.d = 5002;
    // FBCE: CMPD #$AAAA
    // TODO: Convert CMPD #$AAAA
    // FBD2: BRA $FB73
    cpu.state_.pc += FB73;
    // FBD4: LDD #$2696
    cpu.state_.d = 2696;
    // FBD7: STD $5018
    cpu.write_memory(5018, cpu.state_.d);
    // FBDA: LDD #$1B2C
    cpu.state_.d = 1B2C;
    // FBDD: STD $501A
    cpu.write_memory(501A, cpu.state_.d);
    // FBE0: LDD #$4000
    cpu.state_.d = 4000;
    // FBE3: STD $501C
    cpu.write_memory(501C, cpu.state_.d);
    // FBE6: LDA #$5D
    cpu.state_.a = 5D;
    // FBE8: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FBEC: LDD $5000
    cpu.state_.d = 5000;
    // FBEF: CMPD #$0B6A
    // TODO: Convert CMPD #$0B6A
    // FBF3: JMP $FB73
    cpu.state_.pc = FB73;
    // FBF6: LDA #$5A
    cpu.state_.a = 5A;
    // FBF8: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FBFB: LDD #$0000
    cpu.state_.d = 0000;
    // FBFE: STD $501A
    cpu.write_memory(501A, cpu.state_.d);
    // FC01: LDD #$4000
    cpu.state_.d = 4000;
    // FC04: STD $501C
    cpu.write_memory(501C, cpu.state_.d);
    // FC07: LDD #$0001
    cpu.state_.d = 0001;
    // FC0A: STD $5018
    cpu.write_memory(5018, cpu.state_.d);
    // FC0D: STD $5018
    cpu.write_memory(5018, cpu.state_.d);
    // FC10: LDA #$5E
    cpu.state_.a = 5E;
    // FC12: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FC16: LDD $5000
    cpu.state_.d = 5000;
    // FC19: JMP $FB73
    cpu.state_.pc = FB73;
    // FC1C: LDU #$5028
    cpu.state_.u = 5028;
    // FC1F: LDD #$0005
    cpu.state_.d = 0005;
    // FC22: STD ,U
    cpu.write_memory(,U, cpu.state_.d);
    // FC24: ADDD #$0001
    cpu.state_.d += 0001;
    // FC27: LEAU $8,U
    cpu.state_.u += $8,U;
    // FC29: CMPU #$6000
    // TODO: Convert CMPU #$6000
    // FC2D: BCS $FC22
    if (cpu.carry_flag()) cpu.state_.pc += FC22;
    // FC2F: LDD #$0000
    cpu.state_.d = 0000;
    // FC32: STD $501E
    cpu.write_memory(501E, cpu.state_.d);
    // FC35: LDD #$4000
    cpu.state_.d = 4000;
    // FC38: STD $5020
    cpu.write_memory(5020, cpu.state_.d);
    // FC3B: LDD #$0004
    cpu.state_.d = 0004;
    // FC3E: STD $4701
    cpu.write_memory(4701, cpu.state_.d);
    // FC41: LDU #$0008
    cpu.state_.u = 0008;
    // FC44: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FC47: TFR U,D
    cpu.state_.D = cpu.state_.U;
    // FC4B: LDA #$5B
    cpu.state_.a = 5B;
    // FC4D: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FC51: BNE $FC4B
    if (!cpu.zero_flag()) cpu.state_.pc += FC4B;
    // FC53: LDA #$5F
    cpu.state_.a = 5F;
    // FC55: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FC59: CMPU $5000
    // TODO: Convert CMPU $5000
    // FC5D: BEQ $FC62
    if (cpu.zero_flag()) cpu.state_.pc += FC62;
    // FC5F: JMP $FB73
    cpu.state_.pc = FB73;
    // FC62: TFR U,D
    cpu.state_.D = cpu.state_.U;
    // FC64: LEAU D,U
    cpu.state_.u += D,U;
    // FC66: CMPU #$0200
    // TODO: Convert CMPU #$0200
    // FC6A: BCS $FC44
    if (cpu.carry_flag()) cpu.state_.pc += FC44;
    // FC6C: LDD #$0000
    cpu.state_.d = 0000;
    // FC6F: JMP $FB73
    cpu.state_.pc = FB73;
    // FC72: LDD #$1B2C
    cpu.state_.d = 1B2C;
    // FC75: STD $5018
    cpu.write_memory(5018, cpu.state_.d);
    // FC78: LDD #$0000
    cpu.state_.d = 0000;
    // FC7B: STD $501A
    cpu.write_memory(501A, cpu.state_.d);
    // FC7E: LDD #$4000
    cpu.state_.d = 4000;
    // FC81: STD $501C
    cpu.write_memory(501C, cpu.state_.d);
    // FC84: LDA #$5D
    cpu.state_.a = 5D;
    // FC86: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FC8A: LDD #$196A
    cpu.state_.d = 196A;
    // FC8D: STD $5018
    cpu.write_memory(5018, cpu.state_.d);
    // FC90: LDD #$0000
    cpu.state_.d = 0000;
    // FC93: STD $501A
    cpu.write_memory(501A, cpu.state_.d);
    // FC96: LDD #$4000
    cpu.state_.d = 4000;
    // FC99: STD $501C
    cpu.write_memory(501C, cpu.state_.d);
    // FC9C: LDA #$5E
    cpu.state_.a = 5E;
    // FC9E: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FCA2: LDD $5000
    cpu.state_.d = 5000;
    // FCA5: CMPD #$3496
    // TODO: Convert CMPD #$3496
    // FCA9: JMP $FB73
    cpu.state_.pc = FB73;
    // FCAE: LDU #$FCD1
    cpu.state_.u = FCD1;
    // FCB1: LEAU B,U
    cpu.state_.u += B,U;
    // FCB3: LDD ,U
    cpu.state_.d = ,U;
    // FCB5: STD $5018
    cpu.write_memory(5018, cpu.state_.d);
    // FCB8: LDD $2,U
    cpu.state_.d = $2,U;
    // FCBA: STD $501A
    cpu.write_memory(501A, cpu.state_.d);
    // FCBD: LDD $4,U
    cpu.state_.d = $4,U;
    // FCBF: STD $501C
    cpu.write_memory(501C, cpu.state_.d);
    // FCC2: LDA #$5D
    cpu.state_.a = 5D;
    // FCC4: STA $4700
    cpu.write_memory(4700, cpu.state_.a);
    // FCC8: LDD $5000
    cpu.state_.d = 5000;
    // FCCB: CMPD $6,U
    // TODO: Convert CMPD $6,U
    // FCCE: JMP $FB73
    cpu.state_.pc = FB73;
    // FCD3: NEG <$00
    // TODO: Convert NEG <$00
    // FCD6: NEG <$55
    // TODO: Convert NEG <$55
    // FCD9: NEG <$00
    // TODO: Convert NEG <$00
    // FCDD: SUBB #$00
    cpu.state_.b -= 00;
    // FCE1: BPL $FC8D
    if (!cpu.negative_flag()) cpu.state_.pc += FC8D;
    // FCE3: NEG <$00
    // TODO: Convert NEG <$00
    // FCE6: NEG <$2A
    // TODO: Convert NEG <$2A
    // FCE8: ORA $0,X
    cpu.state_.a |= $0,X;
    // FCEA: NEG <$2A
    // TODO: Convert NEG <$2A
    // FCEC: ORA ,U+
    cpu.state_.a |= ,U+;
    // FCEE: NEG <$2A
    // TODO: Convert NEG <$2A
    // FCF0: ORA [D,S]
    cpu.state_.a |= [D,S];
    // FCF2: LSR $FB82
    // TODO: Convert LSR $FB82
    // FCF5: ADDB $8FFB
    cpu.state_.b += 8FFB;
    // FCF8: CMPX <$FB
    cpu.compare_x($FB);
    // FCFA: SUBD [D,S]
    cpu.state_.d -= [D,S];
    // FCFC: ORA [D,S]
    cpu.state_.a |= [D,S];
    // FCFE: STX $FCAC
    cpu.write_memory(FCAC, cpu.state_.x);
    // FD01: LDD $ACFC
    cpu.state_.d = ACFC;
    // FD04: CMPX [$FCB3,PCR]
    cpu.compare_x([$FCB3,PCR]);
    // FD07: LDA $4300
    cpu.state_.a = 4300;
    // FD0A: ANDA #$10
    cpu.state_.a &= 10;
    // FD0C: LDB $4320
    cpu.state_.b = 4320;
    // FD0F: ANDB #$04
    cpu.state_.b &= 04;
    // FD11: CMPD #$0000
    // TODO: Convert CMPD #$0000
    // FD15: BEQ $FD1A
    if (cpu.zero_flag()) cpu.state_.pc += FD1A;
    // FD17: JMP $F720
    cpu.state_.pc = F720;
    // FD1A: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FD1D: LDA #$FF
    cpu.state_.a = FF;
    // FD1F: STA $4686
    cpu.write_memory(4686, cpu.state_.a);
    // FD22: STA $4683
    cpu.write_memory(4683, cpu.state_.a);
    // FD25: STA $4682
    cpu.write_memory(4682, cpu.state_.a);
    // FD28: LDB $4340
    cpu.state_.b = 4340;
    // FD2C: LDU #$FD9A
    cpu.state_.u = FD9A;
    // FD2F: CMPB ,U+
    cpu.compare_b(,U+);
    // FD31: BNE $FD5A
    if (!cpu.zero_flag()) cpu.state_.pc += FD5A;
    // FD33: STA $4620
    cpu.write_memory(4620, cpu.state_.a);
    // FD36: LDY #$0000
    cpu.state_.y = 0000;
    // FD3A: LDD #$BFAE
    cpu.state_.d = BFAE;
    // FD3D: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // FD3F: LDD #$8040
    cpu.state_.d = 8040;
    // FD42: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // FD44: LDA ,U
    cpu.state_.a = ,U;
    // FD46: LDS #$4FFF
    cpu.state_.sp = 4FFF;
    // FD4A: JSR $E790
    cpu.call_function(E790);
    // FD4D: LDD #$2020
    cpu.state_.d = 2020;
    // FD50: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // FD52: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // FD54: STA $4600
    cpu.write_memory(4600, cpu.state_.a);
    // FD57: LDU #$FDBC
    cpu.state_.u = FDBC;
    // FD5A: LEAU $1,U
    cpu.state_.u += $1,U;
    // FD5C: CMPU #$FDBC
    // TODO: Convert CMPU #$FDBC
    // FD60: BCS $FD2F
    if (cpu.carry_flag()) cpu.state_.pc += FD2F;
    // FD62: LDB $4340
    cpu.state_.b = 4340;
    // FD66: TFR B,A
    cpu.state_.A = cpu.state_.B;
    // FD68: ANDB #$0F
    cpu.state_.b &= 0F;
    // FD6A: ANDA #$F8
    cpu.state_.a &= F8;
    // FD6C: CMPA #$C0
    cpu.compare_a(C0);
    // FD6E: BEQ $FD72
    if (cpu.zero_flag()) cpu.state_.pc += FD72;
    // FD70: CLR <$D1
    cpu.write_memory($D1, 0);
    // FD72: LDX #$FD85
    cpu.state_.x = FD85;
    // FD75: CMPA ,X+
    cpu.compare_a(,X+);
    // FD77: BNE $FD7B
    if (!cpu.zero_flag()) cpu.state_.pc += FD7B;
    // FD79: JMP [,X]
    cpu.state_.pc = [,X];
    // FD7B: LEAX $2,X
    cpu.state_.x += $2,X;
    // FD7D: CMPX #$FD9A
    cpu.compare_x(FD9A);
    // FD80: BCS $FD75
    if (cpu.carry_flag()) cpu.state_.pc += FD75;
    // FD82: JMP $FF24
    cpu.state_.pc = FF24;
    // FD85: NEG <$FD
    // TODO: Convert NEG <$FD
    // FD87: CMPX $80FD
    cpu.compare_x(80FD);
    // FD8A: STB <$C0
    cpu.write_memory($C0, cpu.state_.b);
    // FD8C: STD $F2E0
    cpu.write_memory(F2E0, cpu.state_.d);
    // FD8F: LDU $4FE8
    cpu.state_.u = 4FE8;
    // FD92: LDU $4FF0
    cpu.state_.u = 4FF0;
    // FD95: LDU $7CF8
    cpu.state_.u = 7CF8;
    // FD98: LDU $A7E0
    cpu.state_.u = A7E0;
    // FD9B: CMPB -$F,X
    cpu.compare_b(-$F,X);
    // FD9E: SBCB -$E,X
    // TODO: Convert SBCB -$E,X
    // FDA0: ADDD -$D,X
    cpu.state_.d += -$D,X;
    // FDA2: ANDB -$C,X
    cpu.state_.b &= -$C,X;
    // FDA4: BITB -$B,X
    // TODO: Convert BITB -$B,X
    // FDA6: LDB -$A,X
    cpu.state_.b = -$A,X;
    // FDA8: STB -$9,X
    cpu.write_memory(-$9,X, cpu.state_.b);
    // FDAA: EORB -$8,X
    cpu.state_.b ^= -$8,X;
    // FDAC: ADCB -$7,X
    // TODO: Convert ADCB -$7,X
    // FDAE: ORB $0,Y
    cpu.state_.b |= $0,Y;
    // FDB0: SUBB $21F1
    cpu.state_.b -= 21F1;
    // FDB3: BHI $FDA7
    // TODO: Convert BHI $FDA7
    // FDB5: BLS $FDAA
    // TODO: Convert BLS $FDAA
    // FDB7: BCC $FDAD
    if (!cpu.carry_flag()) cpu.state_.pc += FDAD;
    // FDB9: BCS $FDB3
    if (cpu.carry_flag()) cpu.state_.pc += FDB3;
    // FDBB: BNE $FE1A
    if (!cpu.zero_flag()) cpu.state_.pc += FE1A;
    // FDBD: BEQ $FDC2
    if (cpu.zero_flag()) cpu.state_.pc += FDC2;
    // FDBF: JMP $FF24
    cpu.state_.pc = FF24;
    // FDC2: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // FDC4: ANDA #$40
    cpu.state_.a &= 40;
    // FDC6: ANDB #$01
    cpu.state_.b &= 01;
    // FDC8: CMPD #$0000
    // TODO: Convert CMPD #$0000
    // FDCC: BNE $FDD4
    if (!cpu.zero_flag()) cpu.state_.pc += FDD4;
    // FDCE: LDU #$4686
    cpu.state_.u = 4686;
    // FDD1: JMP $FEFF
    cpu.state_.pc = FEFF;
    // FDD4: JMP $FD07
    cpu.state_.pc = FD07;
    // FDD8: BEQ $FDDD
    if (cpu.zero_flag()) cpu.state_.pc += FDDD;
    // FDDA: JMP $FF24
    cpu.state_.pc = FF24;
    // FDDD: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // FDDF: ANDA #$81
    cpu.state_.a &= 81;
    // FDE1: ANDB #$F8
    cpu.state_.b &= F8;
    // FDE3: CMPD #$0000
    // TODO: Convert CMPD #$0000
    // FDE7: BNE $FDEF
    if (!cpu.zero_flag()) cpu.state_.pc += FDEF;
    // FDE9: LDU #$4683
    cpu.state_.u = 4683;
    // FDEC: JMP $FEFF
    cpu.state_.pc = FEFF;
    // FDEF: JMP $FD07
    cpu.state_.pc = FD07;
    // FDF2: CMPB #$06
    cpu.compare_b(06);
    // FDF4: BNE $FE0E
    if (!cpu.zero_flag()) cpu.state_.pc += FE0E;
    // FDF6: TST <$D1
    // TODO: Convert TST <$D1
    // FDF8: BNE $FE0C
    if (!cpu.zero_flag()) cpu.state_.pc += FE0C;
    // FDFA: LDX #$0800
    cpu.state_.x = 0800;
    // FDFD: LDA #$00
    cpu.state_.a = 00;
    // FDFF: STA ,X+
    cpu.write_memory(,X+, cpu.state_.a);
    // FE01: ADDA #$05
    cpu.state_.a += 05;
    // FE03: CMPX #$1000
    cpu.compare_x(1000);
    // FE06: BCS $FDFF
    if (cpu.carry_flag()) cpu.state_.pc += FDFF;
    // FE08: LDA #$FF
    cpu.state_.a = FF;
    // FE0A: STA <$D1
    cpu.write_memory($D1, cpu.state_.a);
    // FE0C: BRA $FE34
    cpu.state_.pc += FE34;
    // FE0E: CLR <$D1
    cpu.write_memory($D1, 0);
    // FE10: STA $4620
    cpu.write_memory(4620, cpu.state_.a);
    // FE13: LDX #$FE37
    cpu.state_.x = FE37;
    // FE19: CMPX #$FE4F
    cpu.compare_x(FE4F);
    // FE1C: BCS $FE21
    if (cpu.carry_flag()) cpu.state_.pc += FE21;
    // FE1E: JMP $FF24
    cpu.state_.pc = FF24;
    // FE21: LDD ,X
    cpu.state_.d = ,X;
    // FE23: STD >$0000
    cpu.write_memory($0000, cpu.state_.d);
    // FE26: LDD $2,X
    cpu.state_.d = $2,X;
    // FE28: STD >$0002
    cpu.write_memory($0002, cpu.state_.d);
    // FE2B: LDD #$2020
    cpu.state_.d = 2020;
    // FE2E: STD >$0004
    cpu.write_memory($0004, cpu.state_.d);
    // FE31: STA $4600
    cpu.write_memory(4600, cpu.state_.a);
    // FE34: JMP $FD07
    cpu.state_.pc = FD07;
    // FE37: BRA $FE59
    cpu.state_.pc += FE59;
    // FE39: BRA $FE5B
    cpu.state_.pc += FE5B;
    // FE3B: NEG <$00
    // TODO: Convert NEG <$00
    // FE3D: NEG <$00
    // TODO: Convert NEG <$00
    // FE40: XLBRA $1EC4
    // TODO: Convert XLBRA $1EC4
    // FE45: BRA $FE67
    cpu.state_.pc += FE67;
    // FE47: XNC $4020
    // TODO: Convert XNC $4020
    // FE4A: BRA $FEB3
    cpu.state_.pc += FEB3;
    // FE4C: SUBA #$20
    cpu.state_.a -= 20;
    // FE4E: BRA $FDDE
    cpu.state_.pc += FDDE;
    // FE50: LDD $F158
    cpu.state_.d = F158;
    // FE54: LDY #$0000
    cpu.state_.y = 0000;
    // FE58: CMPX #$FD07
    cpu.compare_x(FD07);
    // FE5B: BCS $FE60
    if (cpu.carry_flag()) cpu.state_.pc += FE60;
    // FE5D: JMP $FF24
    cpu.state_.pc = FF24;
    // FE60: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FE63: LEAY $1,Y
    cpu.state_.y += $1,Y;
    // FE65: CMPY #$0200
    // TODO: Convert CMPY #$0200
    // FE69: BCS $FE71
    if (cpu.carry_flag()) cpu.state_.pc += FE71;
    // FE6B: LDS #$FD07
    cpu.state_.sp = FD07;
    // FE6F: BRA $FE75
    cpu.state_.pc += FE75;
    // FE71: LDS #$FE58
    cpu.state_.sp = FE58;
    // FE75: TFR X,D
    cpu.state_.D = cpu.state_.X;
    // FE77: SUBD #$FCFF
    cpu.state_.d -= FCFF;
    // FE7A: JMP [,X]
    cpu.state_.pc = [,X];
    // FE7C: LDX #$FB4B
    cpu.state_.x = FB4B;
    // FE83: LDY #$0000
    cpu.state_.y = 0000;
    // FE87: CMPX #$FB73
    cpu.compare_x(FB73);
    // FE8A: BCS $FE8F
    if (cpu.carry_flag()) cpu.state_.pc += FE8F;
    // FE8C: JMP $FF24
    cpu.state_.pc = FF24;
    // FE8F: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FE92: LEAY $1,Y
    cpu.state_.y += $1,Y;
    // FE94: CMPY #$0200
    // TODO: Convert CMPY #$0200
    // FE98: BCS $FEA0
    if (cpu.carry_flag()) cpu.state_.pc += FEA0;
    // FE9A: LDS #$FD07
    cpu.state_.sp = FD07;
    // FE9E: BRA $FEA4
    cpu.state_.pc += FEA4;
    // FEA0: LDS #$FE87
    cpu.state_.sp = FE87;
    // FEA4: JMP $FB38
    cpu.state_.pc = FB38;
    // FEA7: ANDB #$07
    cpu.state_.b &= 07;
    // FEA9: BEQ $FEAE
    if (cpu.zero_flag()) cpu.state_.pc += FEAE;
    // FEAB: JMP $FF24
    cpu.state_.pc = FF24;
    // FEAE: LDA #$01
    cpu.state_.a = 01;
    // FEB0: STB $46E0
    cpu.write_memory(46E0, cpu.state_.b);
    // FEB3: TFR X,U
    cpu.state_.U = cpu.state_.X;
    // FEB5: LDB $4400
    cpu.state_.b = 4400;
    // FEB8: LDB $4401
    cpu.state_.b = 4401;
    // FEBB: ANDB #$40
    cpu.state_.b &= 40;
    // FEBD: BNE $FF03
    if (!cpu.zero_flag()) cpu.state_.pc += FF03;
    // FEBF: LDB #$80
    cpu.state_.b = 80;
    // FEC2: BMI $FF03
    if (cpu.negative_flag()) cpu.state_.pc += FF03;
    // FEC4: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FEC7: TST $4401
    // TODO: Convert TST $4401
    // FECA: BMI $FEC1
    if (cpu.negative_flag()) cpu.state_.pc += FEC1;
    // FECC: STA $4400
    cpu.write_memory(4400, cpu.state_.a);
    // FECF: LDB $4401
    cpu.state_.b = 4401;
    // FED2: BPL $FF03
    if (!cpu.negative_flag()) cpu.state_.pc += FF03;
    // FED4: LDX #$0100
    cpu.state_.x = 0100;
    // FED7: LEAX -$1,X
    cpu.state_.x += -$1,X;
    // FED9: BEQ $FF03
    if (cpu.zero_flag()) cpu.state_.pc += FF03;
    // FEDB: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FEDE: LDB $4401
    cpu.state_.b = 4401;
    // FEE1: ANDB #$40
    cpu.state_.b &= 40;
    // FEE3: BEQ $FED7
    if (cpu.zero_flag()) cpu.state_.pc += FED7;
    // FEE5: TST $4401
    // TODO: Convert TST $4401
    // FEE8: BMI $FF03
    if (cpu.negative_flag()) cpu.state_.pc += FF03;
    // FEEA: CMPA $4400
    cpu.compare_a(4400);
    // FEED: BNE $FF03
    if (!cpu.zero_flag()) cpu.state_.pc += FF03;
    // FEEF: LDB $4401
    cpu.state_.b = 4401;
    // FEF2: ANDB #$40
    cpu.state_.b &= 40;
    // FEF4: BMI $FF03
    if (cpu.negative_flag()) cpu.state_.pc += FF03;
    // FEF7: BCC $FEB0
    if (!cpu.carry_flag()) cpu.state_.pc += FEB0;
    // FEF9: LDU #$4682
    cpu.state_.u = 4682;
    // FEFC: JMP $FEFF
    cpu.state_.pc = FEFF;
    // FEFF: LDA #$00
    cpu.state_.a = 00;
    // FF01: STA ,U
    cpu.write_memory(,U, cpu.state_.a);
    // FF03: LDX #$0000
    cpu.state_.x = 0000;
    // FF06: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FF09: LEAX $1,X
    cpu.state_.x += $1,X;
    // FF0B: CMPX #$AC55
    cpu.compare_x(AC55);
    // FF0E: BCS $FF06
    if (cpu.carry_flag()) cpu.state_.pc += FF06;
    // FF10: LDA #$FF
    cpu.state_.a = FF;
    // FF12: STA ,U
    cpu.write_memory(,U, cpu.state_.a);
    // FF14: LDX #$0000
    cpu.state_.x = 0000;
    // FF17: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FF1A: LEAX $1,X
    cpu.state_.x += $1,X;
    // FF1C: CMPX #$AC55
    cpu.compare_x(AC55);
    // FF1F: BCS $FF17
    if (cpu.carry_flag()) cpu.state_.pc += FF17;
    // FF21: JMP $FD07
    cpu.state_.pc = FD07;
    // FF24: LDA #$00
    cpu.state_.a = 00;
    // FF26: STA $4686
    cpu.write_memory(4686, cpu.state_.a);
    // FF29: STA $4683
    cpu.write_memory(4683, cpu.state_.a);
    // FF2C: STA $4682
    cpu.write_memory(4682, cpu.state_.a);
    // FF2F: LDX #$0000
    cpu.state_.x = 0000;
    // FF32: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FF35: LEAX $1,X
    cpu.state_.x += $1,X;
    // FF37: CMPX #$5600
    cpu.compare_x(5600);
    // FF3A: BCS $FF32
    if (cpu.carry_flag()) cpu.state_.pc += FF32;
    // FF3C: LDA #$FF
    cpu.state_.a = FF;
    // FF3E: STA $4686
    cpu.write_memory(4686, cpu.state_.a);
    // FF41: STA $4683
    cpu.write_memory(4683, cpu.state_.a);
    // FF44: STA $4682
    cpu.write_memory(4682, cpu.state_.a);
    // FF47: LDX #$0000
    cpu.state_.x = 0000;
    // FF4A: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // FF4D: LEAX $1,X
    cpu.state_.x += $1,X;
    // FF4F: CMPX #$5600
    cpu.compare_x(5600);
    // FF52: BCS $FF4A
    if (cpu.carry_flag()) cpu.state_.pc += FF4A;
    // FF54: JMP $FD07
    cpu.state_.pc = FD07;
    // FF57: LDA [$C840]
    cpu.state_.a = [$C840];
    // FF5B: LDA <$1F
    cpu.state_.a = $1F;
    // FF5D: LSR -$10,X
    // TODO: Convert LSR -$10,X
    // FF60: SUBA -$C,S
    cpu.state_.a -= -$C,S;
    // FF62: LDA $0,Y
    cpu.state_.a = $0,Y;
    // FF64: XDEC $6EE0
    // TODO: Convert XDEC $6EE0
    // FF67: TST $E8AE
    // TODO: Convert TST $E8AE
    // FF6B: ASL $9207
    // TODO: Convert ASL $9207
    // FF6E: ANDB >$0018
    cpu.state_.b &= $0018;
    // FF71: ADCB $0,U
    // TODO: Convert ADCB $0,U
    // FF73: ORA <$F5
    cpu.state_.a |= $F5;
    // FF75: SUBA $3807
    cpu.state_.a -= 3807;
    // FF78: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF7B: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF7E: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF81: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF84: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF87: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF8A: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF8D: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF90: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF93: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF96: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF99: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF9C: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FF9F: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFA2: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFA5: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFA8: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFAB: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFAE: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFB1: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFB4: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFB7: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFBA: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFBD: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFC0: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFC3: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFC6: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFC9: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFCC: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFCF: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFD2: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFD5: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFD8: STU $FFFF
    cpu.write_memory(FFFF, cpu.state_.u);
    // FFDB: STU $434F
    cpu.write_memory(434F, cpu.state_.u);
    // FFE5: BRA $0018
    cpu.state_.pc += 0018;
}

} // namespace StarWars
