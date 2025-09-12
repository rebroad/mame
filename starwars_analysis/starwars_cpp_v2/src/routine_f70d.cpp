void StarWarsCPU::routine_f70d() {
    // Converted from rom_disasm_auto_f70d.md
    // Address: 0xROUTINE_F70D

    // F70D: LDD #$2020
    state_.d = 2020;

    // F710: STD ,Y++
    write_memory(,Y++, state_.d);

    // F712: STD ,Y++
    write_memory(,Y++, state_.d);

    // F714: STA $4600
    write_memory(4600, state_.a);

    // F717: LDA $4300
    state_.a = 4300;

    // F71A: ANDA #$10
    state_.a &= 10;

    // F71C: LBEQ $F65C
    // TODO: Convert LBEQ $F65C

    // F720: JMP $F720
    state_.pc = F720;

    // F723: STB $4FF7
    write_memory(4FF7, state_.b);

    // F726: CLR $F958
    write_memory(F958, 0);

    // F729: EORB $8CF8
    state_.b ^= 8CF8;

    // F72C: ANDA #$F8
    state_.a &= F8;

    // F72E: ANDA <$F8
    state_.a &= $F8;

    // F730: ORA [-$34,S]
    state_.a |= [-$34,S];

    // F733: ADCB $3F64
    // TODO: Convert ADCB $3F64

    // F736: SUBA #$62
    state_.a -= 62;

    // F738: SUBA #$61
    state_.a -= 61;

    // F73A: SUBA #$65
    state_.a -= 65;

    // F73C: SUBA #$67
    state_.a -= 67;

    // F73E: SUBA #$66
    state_.a -= 66;

    // F740: SUBA #$63
    state_.a -= 63;

    // F742: SUBA #$1F
    state_.a -= 1F;

    // F744: XANDCC #$1F
    // TODO: Convert XANDCC #$1F

    // F746: ROR <$1E
    // TODO: Convert ROR <$1E

    // F748: ANDB <$1E
    state_.b &= $1E;

    // F74A: SBCA -$2,X
    // TODO: Convert SBCA -$2,X

    // F74C: NEG $1F6A
    // TODO: Convert NEG $1F6A

    // F74F: DEC <$D6
    // TODO: Convert DEC <$D6

    // F751: BPL $F77C
    if (!negative_flag()) state_.pc += F77C;

    // F753: LDA #$10
    state_.a = 10;

    // F755: STA <$D6
    write_memory($D6, state_.a);

    // F757: LDX <$D4
    state_.x = $D4;

    // F759: LDD <$D2
    state_.d = $D2;

    // F75B: ANDA ,X
    state_.a &= ,X;

    // F75D: BNE $F767
    if (!zero_flag()) state_.pc += F767;

    // F75F: ANDB $1,X
    state_.b &= $1,X;

    // F761: BNE $F767
    if (!zero_flag()) state_.pc += F767;

    // F763: LDA #$3B
    state_.a = 3B;

    // F765: BRA $F769
    state_.pc += F769;

    // F767: LDA #$29
    state_.a = 29;

    // F769: STA $4400
    write_memory(4400, state_.a);

    // F76C: LEAX $2,X
    state_.x += $2,X;

    // F76E: CMPX #$F36E
    compare_x(F36E);

    // F771: BCS $F77A
    if (carry_flag()) state_.pc += F77A;

    // F773: LDA #$20
    state_.a = 20;

    // F775: STA <$D6
    write_memory($D6, state_.a);

    // F777: LDX #$F34E
    state_.x = F34E;

    // F77A: STX <$D4
    write_memory($D4, state_.x);

    // F77C: JMP $F714
    state_.pc = F714;

    // F77F: STA $46C0
    write_memory(46C0, state_.a);

    // F782: STA $46C0
    write_memory(46C0, state_.a);

    // F785: LDD #$BFAE
    state_.d = BFAE;

    // F788: STD ,Y++
    write_memory(,Y++, state_.d);

    // F78A: LDD #$8040
    state_.d = 8040;

    // F78D: STD ,Y++
    write_memory(,Y++, state_.d);

    // F78F: LDS #$4FFF
    state_.sp = 4FFF;

    // F793: LDB #$9E
    state_.b = 9E;

    // F795: JSR $E7C7
    call_function(E7C7);

    // F798: LDB #$D3
    state_.b = D3;

    // F79A: JSR $E7C7
    call_function(E7C7);

    // F79D: LDB #$9F
    state_.b = 9F;

    // F79F: STB <$CE
    write_memory($CE, state_.b);

    // F7A1: LDA $4300
    state_.a = 4300;

    // F7A4: LDB $4320
    state_.b = 4320;

    // F7A7: ORB #$C7
    state_.b |= C7;

    // F7A9: STD <$CC
    write_memory($CC, state_.d);

    // F7AD: STD <$CC
    write_memory($CC, state_.d);

    // F7AF: BCS $F7B6
    if (carry_flag()) state_.pc += F7B6;

    // F7B1: LDB <$CE
    state_.b = $CE;

    // F7B3: JSR $E7C7
    call_function(E7C7);

    // F7B6: INC <$CE
    // TODO: Convert INC <$CE

    // F7B8: LDD <$CC
    state_.d = $CC;

    // F7BA: BNE $F7AB
    if (!zero_flag()) state_.pc += F7AB;

    // F7BC: LDD <$C8
    state_.d = $C8;

    // F7BE: STD <$CA
    write_memory($CA, state_.d);

    // F7C0: LDA $4300
    state_.a = 4300;

    // F7C3: ANDA #$CF
    state_.a &= CF;

    // F7C5: LDB $4320
    state_.b = 4320;

    // F7C8: ANDB #$3A
    state_.b &= 3A;

    // F7CA: STD <$C8
    write_memory($C8, state_.d);

    // F7CC: EORA <$CA
    state_.a ^= $CA;

    // F7CE: ANDA <$CA
    state_.a &= $CA;

    // F7D0: EORB <$CB
    state_.b ^= $CB;

    // F7D2: ANDB <$CB
    state_.b &= $CB;

    // F7D4: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // F7D8: BEQ $F7DF
    if (zero_flag()) state_.pc += F7DF;

    // F7DA: LDA #$3B
    state_.a = 3B;

    // F7DC: STA $4400
    write_memory(4400, state_.a);

    // F7DF: LDD #$1EA2
    state_.d = 1EA2;

    // F7E2: STD ,Y++
    write_memory(,Y++, state_.d);

    // F7E4: LDD #$1F74
    state_.d = 1F74;

    // F7E7: STD ,Y++
    write_memory(,Y++, state_.d);

    // F7E9: LDA #$10
    state_.a = 10;

    // F7EB: JSR $E790
    call_function(E790);

    // F7EE: LDD $301E
    state_.d = 301E;

    // F7F1: STD ,Y++
    write_memory(,Y++, state_.d);

    // F7F3: LDD $3002
    state_.d = 3002;

    // F7F6: STD ,Y++
    write_memory(,Y++, state_.d);

    // F7F8: LDA $4340
    state_.a = 4340;

    // F7FB: JSR $F86C
    call_function(F86C);

    // F7FE: LDD #$1E70
    state_.d = 1E70;

    // F801: STD ,Y++
    write_memory(,Y++, state_.d);

    // F803: LDD #$1F5C
    state_.d = 1F5C;

    // F806: STD ,Y++
    write_memory(,Y++, state_.d);

    // F808: LDA #$10
    state_.a = 10;

    // F80A: JSR $E790
    call_function(E790);

    // F80D: LDD $3020
    state_.d = 3020;

    // F810: STD ,Y++
    write_memory(,Y++, state_.d);

    // F812: LDD $3022
    state_.d = 3022;

    // F815: STD ,Y++
    write_memory(,Y++, state_.d);

    // F817: LDD $3002
    state_.d = 3002;

    // F81A: STD ,Y++
    write_memory(,Y++, state_.d);

    // F81C: LDA $4360
    state_.a = 4360;

    // F81F: JSR $F86C
    call_function(F86C);

    // F822: LDB #$AF
    state_.b = AF;

    // F824: JSR $E7C7
    call_function(E7C7);

    // F827: LDD #$BFD5
    state_.d = BFD5;

    // F82A: STD ,Y++
    write_memory(,Y++, state_.d);

    // F82C: LDD #$0000
    state_.d = 0000;

    // F82F: STD ,Y++
    write_memory(,Y++, state_.d);

    // F831: LDD #$0140
    state_.d = 0140;

    // F834: STD ,Y++
    write_memory(,Y++, state_.d);

    // F836: LDB $4380
    state_.b = 4380;

    // F839: SUBB #$80
    state_.b -= 80;

    // F83C: TFR D,U
    state_.U = state_.D;

    // F840: LEAU D,U
    state_.u += D,U;

    // F842: TFR U,D
    state_.D = state_.U;

    // F844: ANDA #$1F
    state_.a &= 1F;

    // F846: STD ,Y++
    write_memory(,Y++, state_.d);

    // F848: STA $46C1
    write_memory(46C1, state_.a);

    // F84B: STA $46C1
    write_memory(46C1, state_.a);

    // F84E: LDX #$0014
    state_.x = 0014;

    // F851: LEAX -$1,X
    state_.x += -$1,X;

    // F853: BNE $F851
    if (!zero_flag()) state_.pc += F851;

    // F855: LDB $4380
    state_.b = 4380;

    // F858: SUBB #$80
    state_.b -= 80;

    // F85B: ANDA #$1F
    state_.a &= 1F;

    // F85D: ORA #$E0
    state_.a |= E0;

    // F85F: STD ,Y++
    write_memory(,Y++, state_.d);

    // F861: LDD #$8040
    state_.d = 8040;

    // F864: STD ,Y++
    write_memory(,Y++, state_.d);

    // F866: LDU #$F725
    state_.u = F725;

    // F869: JMP $F70D
    state_.pc = F70D;

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