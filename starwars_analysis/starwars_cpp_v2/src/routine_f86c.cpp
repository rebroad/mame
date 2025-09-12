void StarWarsCPU::routine_f86c() {
    // Converted from rom_disasm_auto_f86c.md
    // Address: 0xROUTINE_F86C

    // F86C: LDB #$07
    state_.b = 07;

    // F86F: BCC $F876
    if (!carry_flag()) state_.pc += F876;

    // F871: LDX $3022
    state_.x = 3022;

    // F874: BRA $F879
    state_.pc += F879;

    // F876: LDX $3032
    state_.x = 3032;

    // F879: STX ,Y++
    write_memory(,Y++, state_.x);

    // F87C: BPL $F86E
    if (!negative_flag()) state_.pc += F86E;

    // F87E: LDD #$8040
    state_.d = 8040;

    // F881: STD ,Y++
    write_memory(,Y++, state_.d);

}