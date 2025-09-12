void StarWarsCPU::routine_fd07() {
    // Converted from rom_disasm_auto_fd07.md
    // Address: 0xROUTINE_FD07

    // FD07: LDA $4300
    state_.a = 4300;

    // FD0A: ANDA #$10
    state_.a &= 10;

    // FD0C: LDB $4320
    state_.b = 4320;

    // FD0F: ANDB #$04
    state_.b &= 04;

    // FD11: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FD15: BEQ $FD1A
    if (zero_flag()) state_.pc += FD1A;

    // FD17: JMP $F720
    state_.pc = F720;

    // FD1A: STA $4640
    write_memory(4640, state_.a);

    // FD1D: LDA #$FF
    state_.a = FF;

    // FD1F: STA $4686
    write_memory(4686, state_.a);

    // FD22: STA $4683
    write_memory(4683, state_.a);

    // FD25: STA $4682
    write_memory(4682, state_.a);

    // FD28: LDB $4340
    state_.b = 4340;

    // FD2C: LDU #$FD9A
    state_.u = FD9A;

    // FD2F: CMPB ,U+
    compare_b(,U+);

    // FD31: BNE $FD5A
    if (!zero_flag()) state_.pc += FD5A;

    // FD33: STA $4620
    write_memory(4620, state_.a);

    // FD36: LDY #$0000
    state_.y = 0000;

    // FD3A: LDD #$BFAE
    state_.d = BFAE;

    // FD3D: STD ,Y++
    write_memory(,Y++, state_.d);

    // FD3F: LDD #$8040
    state_.d = 8040;

    // FD42: STD ,Y++
    write_memory(,Y++, state_.d);

    // FD44: LDA ,U
    state_.a = ,U;

    // FD46: LDS #$4FFF
    state_.sp = 4FFF;

    // FD4A: JSR $E790
    call_function(E790);

    // FD4D: LDD #$2020
    state_.d = 2020;

    // FD50: STD ,Y++
    write_memory(,Y++, state_.d);

    // FD52: STD ,Y++
    write_memory(,Y++, state_.d);

    // FD54: STA $4600
    write_memory(4600, state_.a);

    // FD57: LDU #$FDBC
    state_.u = FDBC;

    // FD5A: LEAU $1,U
    state_.u += $1,U;

    // FD5C: CMPU #$FDBC
    // TODO: Convert CMPU #$FDBC

    // FD60: BCS $FD2F
    if (carry_flag()) state_.pc += FD2F;

    // FD62: LDB $4340
    state_.b = 4340;

    // FD66: TFR B,A
    state_.A = state_.B;

    // FD68: ANDB #$0F
    state_.b &= 0F;

    // FD6A: ANDA #$F8
    state_.a &= F8;

    // FD6C: CMPA #$C0
    compare_a(C0);

    // FD6E: BEQ $FD72
    if (zero_flag()) state_.pc += FD72;

    // FD70: CLR <$D1
    write_memory($D1, 0);

    // FD72: LDX #$FD85
    state_.x = FD85;

    // FD75: CMPA ,X+
    compare_a(,X+);

    // FD77: BNE $FD7B
    if (!zero_flag()) state_.pc += FD7B;

    // FD79: JMP [,X]
    state_.pc = [,X];

    // FD7B: LEAX $2,X
    state_.x += $2,X;

    // FD7D: CMPX #$FD9A
    compare_x(FD9A);

    // FD80: BCS $FD75
    if (carry_flag()) state_.pc += FD75;

    // FD82: JMP $FF24
    state_.pc = FF24;

    // FD85: NEG <$FD
    // TODO: Convert NEG <$FD

    // FD87: CMPX $80FD
    compare_x(80FD);

    // FD8A: STB <$C0
    write_memory($C0, state_.b);

    // FD8C: STD $F2E0
    write_memory(F2E0, state_.d);

    // FD8F: LDU $4FE8
    state_.u = 4FE8;

    // FD92: LDU $4FF0
    state_.u = 4FF0;

    // FD95: LDU $7CF8
    state_.u = 7CF8;

    // FD98: LDU $A7E0
    state_.u = A7E0;

    // FD9B: CMPB -$F,X
    compare_b(-$F,X);

    // FD9E: SBCB -$E,X
    // TODO: Convert SBCB -$E,X

    // FDA0: ADDD -$D,X
    state_.d += -$D,X;

    // FDA2: ANDB -$C,X
    state_.b &= -$C,X;

    // FDA4: BITB -$B,X
    // TODO: Convert BITB -$B,X

    // FDA6: LDB -$A,X
    state_.b = -$A,X;

    // FDA8: STB -$9,X
    write_memory(-$9,X, state_.b);

    // FDAA: EORB -$8,X
    state_.b ^= -$8,X;

    // FDAC: ADCB -$7,X
    // TODO: Convert ADCB -$7,X

    // FDAE: ORB $0,Y
    state_.b |= $0,Y;

    // FDB0: SUBB $21F1
    state_.b -= 21F1;

    // FDB3: BHI $FDA7
    // TODO: Convert BHI $FDA7

    // FDB5: BLS $FDAA
    // TODO: Convert BLS $FDAA

    // FDB7: BCC $FDAD
    if (!carry_flag()) state_.pc += FDAD;

    // FDB9: BCS $FDB3
    if (carry_flag()) state_.pc += FDB3;

    // FDBB: BNE $FE1A
    if (!zero_flag()) state_.pc += FE1A;

    // FDBD: BEQ $FDC2
    if (zero_flag()) state_.pc += FDC2;

    // FDBF: JMP $FF24
    state_.pc = FF24;

    // FDC2: TFR S,D
    state_.D = state_.S;

    // FDC4: ANDA #$40
    state_.a &= 40;

    // FDC6: ANDB #$01
    state_.b &= 01;

    // FDC8: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FDCC: BNE $FDD4
    if (!zero_flag()) state_.pc += FDD4;

    // FDCE: LDU #$4686
    state_.u = 4686;

    // FDD1: JMP $FEFF
    state_.pc = FEFF;

    // FDD4: JMP $FD07
    state_.pc = FD07;

    // FDD8: BEQ $FDDD
    if (zero_flag()) state_.pc += FDDD;

    // FDDA: JMP $FF24
    state_.pc = FF24;

    // FDDD: TFR S,D
    state_.D = state_.S;

    // FDDF: ANDA #$81
    state_.a &= 81;

    // FDE1: ANDB #$F8
    state_.b &= F8;

    // FDE3: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FDE7: BNE $FDEF
    if (!zero_flag()) state_.pc += FDEF;

    // FDE9: LDU #$4683
    state_.u = 4683;

    // FDEC: JMP $FEFF
    state_.pc = FEFF;

    // FDEF: JMP $FD07
    state_.pc = FD07;

    // FDF2: CMPB #$06
    compare_b(06);

    // FDF4: BNE $FE0E
    if (!zero_flag()) state_.pc += FE0E;

    // FDF6: TST <$D1
    // TODO: Convert TST <$D1

    // FDF8: BNE $FE0C
    if (!zero_flag()) state_.pc += FE0C;

    // FDFA: LDX #$0800
    state_.x = 0800;

    // FDFD: LDA #$00
    state_.a = 00;

    // FDFF: STA ,X+
    write_memory(,X+, state_.a);

    // FE01: ADDA #$05
    state_.a += 05;

    // FE03: CMPX #$1000
    compare_x(1000);

    // FE06: BCS $FDFF
    if (carry_flag()) state_.pc += FDFF;

    // FE08: LDA #$FF
    state_.a = FF;

    // FE0A: STA <$D1
    write_memory($D1, state_.a);

    // FE0C: BRA $FE34
    state_.pc += FE34;

    // FE0E: CLR <$D1
    write_memory($D1, 0);

    // FE10: STA $4620
    write_memory(4620, state_.a);

    // FE13: LDX #$FE37
    state_.x = FE37;

    // FE19: CMPX #$FE4F
    compare_x(FE4F);

    // FE1C: BCS $FE21
    if (carry_flag()) state_.pc += FE21;

    // FE1E: JMP $FF24
    state_.pc = FF24;

    // FE21: LDD ,X
    state_.d = ,X;

    // FE23: STD >$0000
    write_memory($0000, state_.d);

    // FE26: LDD $2,X
    state_.d = $2,X;

    // FE28: STD >$0002
    write_memory($0002, state_.d);

    // FE2B: LDD #$2020
    state_.d = 2020;

    // FE2E: STD >$0004
    write_memory($0004, state_.d);

    // FE31: STA $4600
    write_memory(4600, state_.a);

    // FE34: JMP $FD07
    state_.pc = FD07;

    // FE37: BRA $FE59
    state_.pc += FE59;

    // FE39: BRA $FE5B
    state_.pc += FE5B;

    // FE3B: NEG <$00
    // TODO: Convert NEG <$00

    // FE3D: NEG <$00
    // TODO: Convert NEG <$00

    // FE40: XLBRA $1EC4
    // TODO: Convert XLBRA $1EC4

    // FE45: BRA $FE67
    state_.pc += FE67;

    // FE47: XNC $4020
    // TODO: Convert XNC $4020

    // FE4A: BRA $FEB3
    state_.pc += FEB3;

    // FE4C: SUBA #$20
    state_.a -= 20;

    // FE4E: BRA $FDDE
    state_.pc += FDDE;

    // FE50: LDD $F158
    state_.d = F158;

    // FE54: LDY #$0000
    state_.y = 0000;

    // FE58: CMPX #$FD07
    compare_x(FD07);

    // FE5B: BCS $FE60
    if (carry_flag()) state_.pc += FE60;

    // FE5D: JMP $FF24
    state_.pc = FF24;

    // FE60: STA $4640
    write_memory(4640, state_.a);

    // FE63: LEAY $1,Y
    state_.y += $1,Y;

    // FE65: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE69: BCS $FE71
    if (carry_flag()) state_.pc += FE71;

    // FE6B: LDS #$FD07
    state_.sp = FD07;

    // FE6F: BRA $FE75
    state_.pc += FE75;

    // FE71: LDS #$FE58
    state_.sp = FE58;

    // FE75: TFR X,D
    state_.D = state_.X;

    // FE77: SUBD #$FCFF
    state_.d -= FCFF;

    // FE7A: JMP [,X]
    state_.pc = [,X];

    // FE7C: LDX #$FB4B
    state_.x = FB4B;

    // FE83: LDY #$0000
    state_.y = 0000;

    // FE87: CMPX #$FB73
    compare_x(FB73);

    // FE8A: BCS $FE8F
    if (carry_flag()) state_.pc += FE8F;

    // FE8C: JMP $FF24
    state_.pc = FF24;

    // FE8F: STA $4640
    write_memory(4640, state_.a);

    // FE92: LEAY $1,Y
    state_.y += $1,Y;

    // FE94: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE98: BCS $FEA0
    if (carry_flag()) state_.pc += FEA0;

    // FE9A: LDS #$FD07
    state_.sp = FD07;

    // FE9E: BRA $FEA4
    state_.pc += FEA4;

    // FEA0: LDS #$FE87
    state_.sp = FE87;

    // FEA4: JMP $FB38
    state_.pc = FB38;

    // FEA7: ANDB #$07
    state_.b &= 07;

    // FEA9: BEQ $FEAE
    if (zero_flag()) state_.pc += FEAE;

    // FEAB: JMP $FF24
    state_.pc = FF24;

    // FEAE: LDA #$01
    state_.a = 01;

    // FEB0: STB $46E0
    write_memory(46E0, state_.b);

    // FEB3: TFR X,U
    state_.U = state_.X;

    // FEB5: LDB $4400
    state_.b = 4400;

    // FEB8: LDB $4401
    state_.b = 4401;

    // FEBB: ANDB #$40
    state_.b &= 40;

    // FEBD: BNE $FF03
    if (!zero_flag()) state_.pc += FF03;

    // FEBF: LDB #$80
    state_.b = 80;

    // FEC2: BMI $FF03
    if (negative_flag()) state_.pc += FF03;

    // FEC4: STA $4640
    write_memory(4640, state_.a);

    // FEC7: TST $4401
    // TODO: Convert TST $4401

    // FECA: BMI $FEC1
    if (negative_flag()) state_.pc += FEC1;

    // FECC: STA $4400
    write_memory(4400, state_.a);

    // FECF: LDB $4401
    state_.b = 4401;

    // FED2: BPL $FF03
    if (!negative_flag()) state_.pc += FF03;

    // FED4: LDX #$0100
    state_.x = 0100;

    // FED7: LEAX -$1,X
    state_.x += -$1,X;

    // FED9: BEQ $FF03
    if (zero_flag()) state_.pc += FF03;

    // FEDB: STA $4640
    write_memory(4640, state_.a);

    // FEDE: LDB $4401
    state_.b = 4401;

    // FEE1: ANDB #$40
    state_.b &= 40;

    // FEE3: BEQ $FED7
    if (zero_flag()) state_.pc += FED7;

    // FEE5: TST $4401
    // TODO: Convert TST $4401

    // FEE8: BMI $FF03
    if (negative_flag()) state_.pc += FF03;

    // FEEA: CMPA $4400
    compare_a(4400);

    // FEED: BNE $FF03
    if (!zero_flag()) state_.pc += FF03;

    // FEEF: LDB $4401
    state_.b = 4401;

    // FEF2: ANDB #$40
    state_.b &= 40;

    // FEF4: BMI $FF03
    if (negative_flag()) state_.pc += FF03;

    // FEF7: BCC $FEB0
    if (!carry_flag()) state_.pc += FEB0;

    // FEF9: LDU #$4682
    state_.u = 4682;

    // FEFC: JMP $FEFF
    state_.pc = FEFF;

    // FEFF: LDA #$00
    state_.a = 00;

    // FF01: STA ,U
    write_memory(,U, state_.a);

    // FF03: LDX #$0000
    state_.x = 0000;

    // FF06: STA $4640
    write_memory(4640, state_.a);

    // FF09: LEAX $1,X
    state_.x += $1,X;

    // FF0B: CMPX #$AC55
    compare_x(AC55);

    // FF0E: BCS $FF06
    if (carry_flag()) state_.pc += FF06;

    // FF10: LDA #$FF
    state_.a = FF;

    // FF12: STA ,U
    write_memory(,U, state_.a);

    // FF14: LDX #$0000
    state_.x = 0000;

    // FF17: STA $4640
    write_memory(4640, state_.a);

    // FF1A: LEAX $1,X
    state_.x += $1,X;

    // FF1C: CMPX #$AC55
    compare_x(AC55);

    // FF1F: BCS $FF17
    if (carry_flag()) state_.pc += FF17;

    // FF21: JMP $FD07
    state_.pc = FD07;

    // FF24: LDA #$00
    state_.a = 00;

    // FF26: STA $4686
    write_memory(4686, state_.a);

    // FF29: STA $4683
    write_memory(4683, state_.a);

    // FF2C: STA $4682
    write_memory(4682, state_.a);

    // FF2F: LDX #$0000
    state_.x = 0000;

    // FF32: STA $4640
    write_memory(4640, state_.a);

    // FF35: LEAX $1,X
    state_.x += $1,X;

    // FF37: CMPX #$5600
    compare_x(5600);

    // FF3A: BCS $FF32
    if (carry_flag()) state_.pc += FF32;

    // FF3C: LDA #$FF
    state_.a = FF;

    // FF3E: STA $4686
    write_memory(4686, state_.a);

    // FF41: STA $4683
    write_memory(4683, state_.a);

    // FF44: STA $4682
    write_memory(4682, state_.a);

    // FF47: LDX #$0000
    state_.x = 0000;

    // FF4A: STA $4640
    write_memory(4640, state_.a);

    // FF4D: LEAX $1,X
    state_.x += $1,X;

    // FF4F: CMPX #$5600
    compare_x(5600);

    // FF52: BCS $FF4A
    if (carry_flag()) state_.pc += FF4A;

    // FF54: JMP $FD07
    state_.pc = FD07;

    // FF57: LDA [$C840]
    state_.a = [$C840];

    // FF5B: LDA <$1F
    state_.a = $1F;

    // FF5D: LSR -$10,X
    // TODO: Convert LSR -$10,X

    // FF60: SUBA -$C,S
    state_.a -= -$C,S;

    // FF62: LDA $0,Y
    state_.a = $0,Y;

    // FF64: XDEC $6EE0
    // TODO: Convert XDEC $6EE0

    // FF67: TST $E8AE
    // TODO: Convert TST $E8AE

    // FF6B: ASL $9207
    // TODO: Convert ASL $9207

    // FF6E: ANDB >$0018
    state_.b &= $0018;

    // FF71: ADCB $0,U
    // TODO: Convert ADCB $0,U

    // FF73: ORA <$F5
    state_.a |= $F5;

    // FF75: SUBA $3807
    state_.a -= 3807;

    // FF78: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF7B: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF7E: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF81: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF84: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF87: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF8A: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF8D: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF90: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF93: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF96: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF99: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF9C: STU $FFFF
    write_memory(FFFF, state_.u);

    // FF9F: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFA2: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFA5: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFA8: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFAB: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFAE: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFB1: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFB4: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFB7: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFBA: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFBD: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFC0: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFC3: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFC6: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFC9: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFCC: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFCF: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFD2: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFD5: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFD8: STU $FFFF
    write_memory(FFFF, state_.u);

    // FFDB: STU $434F
    write_memory(434F, state_.u);

    // FFE5: BRA $0018
    state_.pc += 0018;

}