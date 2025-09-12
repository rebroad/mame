void StarWarsCPU::routine_e790() {
    // Converted from rom_disasm_auto_e790.md
    // Address: 0xROUTINE_E790

    // E790: TFR A,B
    state_.B = state_.A;

    // E795: ANDB #$1E
    state_.b &= 1E;

    // E797: BNE $E7A2
    if (!zero_flag()) state_.pc += E7A2;

    // E799: TST <$AD
    // TODO: Convert TST <$AD

    // E79B: BLE $E7A2
    // TODO: Convert BLE $E7A2

    // E79D: LDU $3002
    state_.u = 3002;

    // E7A0: BRA $E7A9
    state_.pc += E7A9;

    // E7A2: CLR <$AD
    write_memory($AD, 0);

    // E7A4: LDU #$3004
    state_.u = 3004;

    // E7A7: LDU B,U
    state_.u = B,U;

    // E7A9: DEC <$AD
    // TODO: Convert DEC <$AD

    // E7AB: STU ,Y++
    write_memory(,Y++, state_.u);

    // E7AE: ANDA #$1E
    state_.a &= 1E;

    // E7B0: BNE $E7BB
    if (!zero_flag()) state_.pc += E7BB;

    // E7B2: TST <$AD
    // TODO: Convert TST <$AD

    // E7B4: BLE $E7BB
    // TODO: Convert BLE $E7BB

    // E7B6: LDU $3002
    state_.u = 3002;

    // E7B9: BRA $E7C2
    state_.pc += E7C2;

    // E7BB: CLR <$AD
    write_memory($AD, 0);

    // E7BD: LDU #$3004
    state_.u = 3004;

    // E7C0: LDU A,U
    state_.u = A,U;

    // E7C2: DEC <$AD
    // TODO: Convert DEC <$AD

    // E7C4: STU ,Y++
    write_memory(,Y++, state_.u);

}