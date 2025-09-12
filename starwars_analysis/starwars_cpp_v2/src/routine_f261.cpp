void StarWarsCPU::routine_f261() {
    // Converted from rom_disasm_auto_f261.md
    // Address: 0xROUTINE_F261

    // F261: ORCC #$10
    state_.cc |= 10;

    // F263: CLR $4684
    write_memory(4684, 0);

    // F266: LDA #$00
    state_.a = 00;

    // F268: STA $4686
    write_memory(4686, state_.a);

    // F26B: STA $4683
    write_memory(4683, state_.a);

    // F26E: STA $4682
    write_memory(4682, state_.a);

    // F271: LDA #$00
    state_.a = 00;

    // F273: STA $4685
    write_memory(4685, state_.a);

    // F276: LDA #$80
    state_.a = 80;

    // F278: STA $4685
    write_memory(4685, state_.a);

    // F27B: STA $4620
    write_memory(4620, state_.a);

    // F27E: LDU #$0000
    state_.u = 0000;

    // F281: STA $4640
    write_memory(4640, state_.a);

    // F284: LEAU -$1,U
    state_.u += -$1,U;

    // F286: CMPU #$0000
    // TODO: Convert CMPU #$0000

    // F28A: BNE $F281
    if (!zero_flag()) state_.pc += F281;

    // F28C: LDS #$4FFF
    state_.sp = 4FFF;

    // F290: LDA #$48
    state_.a = 48;

    // F292: TFR A,DP
    state_.DP = state_.A;

    // F294: STA $46E0
    write_memory(46E0, state_.a);

    // F297: LDA #$00
    state_.a = 00;

    // F299: STA $4400
    write_memory(4400, state_.a);

    // F29C: LDX #$4800
    state_.x = 4800;

    // F29F: LDD #$0000
    state_.d = 0000;

    // F2A2: STD ,X++
    write_memory(,X++, state_.d);

    // F2A4: CMPX #$5000
    compare_x(5000);

    // F2A7: BCS $F2A2
    if (carry_flag()) state_.pc += F2A2;

    // F2A9: STA $4640
    write_memory(4640, state_.a);

    // F2AC: LDX #$5000
    state_.x = 5000;

    // F2AF: LDD #$0000
    state_.d = 0000;

    // F2B2: STD ,X++
    write_memory(,X++, state_.d);

    // F2B4: STA $4640
    write_memory(4640, state_.a);

    // F2B7: CMPX #$6000
    compare_x(6000);

    // F2BA: BCS $F2B2
    if (carry_flag()) state_.pc += F2B2;

    // F2BC: LDX #$0000
    state_.x = 0000;

    // F2BF: LDD #$0000
    state_.d = 0000;

    // F2C2: STD ,X++
    write_memory(,X++, state_.d);

    // F2C4: STA $4640
    write_memory(4640, state_.a);

    // F2C7: CMPX #$3000
    compare_x(3000);

    // F2CA: BCS $F2C2
    if (carry_flag()) state_.pc += F2C2;

    // F2CC: LDA $4300
    state_.a = 4300;

    // F2CF: ANDA #$10
    state_.a &= 10;

    // F2D1: BNE $F2D6
    if (!zero_flag()) state_.pc += F2D6;

    // F2D3: JMP $F36E
    state_.pc = F36E;

}