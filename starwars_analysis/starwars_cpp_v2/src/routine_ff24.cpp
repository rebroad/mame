void StarWarsCPU::routine_ff24() {
    // Converted from rom_disasm_auto_ff24.md
    // Address: 0xROUTINE_FF24

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