f720: 7e f7 20     JMP    $F720
f723: f7 4f f7     STB    $4FF7
f726: 7f f9 58     CLR    $F958
f729: f8 8c f8     EORB   $8CF8
f72c: 84 f8        ANDA   #$F8
f72e: 94 f8        ANDA   <$F8
f730: aa f8 cc     ORA    [-$34,S]
f733: f9 3f 64     ADCB   $3F64
f736: 80 62        SUBA   #$62
f738: 80 61        SUBA   #$61
f73a: 80 65        SUBA   #$65
f73c: 80 67        SUBA   #$67
f73e: 80 66        SUBA   #$66
f740: 80 63        SUBA   #$63
f742: 80 1f        SUBA   #$1F
f744: 38 1f        XANDCC #$1F
f746: 06 1e        ROR    <$1E
f748: d4 1e        ANDB   <$1E
f74a: a2 1e        SBCA   -$2,X
f74c: 70 1f 6a     NEG    $1F6A
f74f: 0a d6        DEC    <$D6
f751: 2a 29        BPL    $F77C
f753: 86 10        LDA    #$10
f755: 97 d6        STA    <$D6
f757: 9e d4        LDX    <$D4
f759: dc d2        LDD    <$D2
f75b: a4 84        ANDA   ,X
f75d: 26 08        BNE    $F767
f75f: e4 01        ANDB   $1,X
f761: 26 04        BNE    $F767
f763: 86 3b        LDA    #$3B
f765: 20 02        BRA    $F769
f767: 86 29        LDA    #$29
f769: b7 44 00     STA    $4400
f76c: 30 02        LEAX   $2,X
f76e: 8c f3 6e     CMPX   #$F36E
f771: 25 07        BCS    $F77A
f773: 86 20        LDA    #$20
f775: 97 d6        STA    <$D6
f777: 8e f3 4e     LDX    #$F34E
f77a: 9f d4        STX    <$D4
f77c: 7e f7 14     JMP    $F714
f77f: b7 46 c0     STA    $46C0
f782: b7 46 c0     STA    $46C0
f785: cc bf ae     LDD    #$BFAE
f788: ed a1        STD    ,Y++
f78a: cc 80 40     LDD    #$8040
f78d: ed a1        STD    ,Y++
f78f: 10 ce 4f ff  LDS    #$4FFF
f793: c6 9e        LDB    #$9E
f795: bd e7 c7     JSR    $E7C7
f798: c6 d3        LDB    #$D3
f79a: bd e7 c7     JSR    $E7C7
f79d: c6 9f        LDB    #$9F
f79f: d7 ce        STB    <$CE
f7a1: b6 43 00     LDA    $4300
f7a4: f6 43 20     LDB    $4320
f7a7: ca c7        ORB    #$C7
f7a9: dd cc        STD    <$CC
f7ab: 58           ASLB
f7ac: 49           ROLA
f7ad: dd cc        STD    <$CC
f7af: 25 05        BCS    $F7B6
f7b1: d6 ce        LDB    <$CE
f7b3: bd e7 c7     JSR    $E7C7
f7b6: 0c ce        INC    <$CE
f7b8: dc cc        LDD    <$CC
f7ba: 26 ef        BNE    $F7AB
f7bc: dc c8        LDD    <$C8
f7be: dd ca        STD    <$CA
f7c0: b6 43 00     LDA    $4300
f7c3: 84 cf        ANDA   #$CF
f7c5: f6 43 20     LDB    $4320
f7c8: c4 3a        ANDB   #$3A
f7ca: dd c8        STD    <$C8
f7cc: 98 ca        EORA   <$CA
f7ce: 94 ca        ANDA   <$CA
f7d0: d8 cb        EORB   <$CB
f7d2: d4 cb        ANDB   <$CB
f7d4: 10 83 00 00  CMPD   #$0000
f7d8: 27 05        BEQ    $F7DF
f7da: 86 3b        LDA    #$3B
f7dc: b7 44 00     STA    $4400
f7df: cc 1e a2     LDD    #$1EA2
f7e2: ed a1        STD    ,Y++
f7e4: cc 1f 74     LDD    #$1F74
f7e7: ed a1        STD    ,Y++
f7e9: 86 10        LDA    #$10
f7eb: bd e7 90     JSR    $E790
f7ee: fc 30 1e     LDD    $301E
f7f1: ed a1        STD    ,Y++
f7f3: fc 30 02     LDD    $3002
f7f6: ed a1        STD    ,Y++
f7f8: b6 43 40     LDA    $4340
f7fb: bd f8 6c     JSR    $F86C
f7fe: cc 1e 70     LDD    #$1E70
f801: ed a1        STD    ,Y++
f803: cc 1f 5c     LDD    #$1F5C
f806: ed a1        STD    ,Y++
f808: 86 10        LDA    #$10
f80a: bd e7 90     JSR    $E790
f80d: fc 30 20     LDD    $3020
f810: ed a1        STD    ,Y++
f812: fc 30 22     LDD    $3022
f815: ed a1        STD    ,Y++
f817: fc 30 02     LDD    $3002
f81a: ed a1        STD    ,Y++
f81c: b6 43 60     LDA    $4360
f81f: bd f8 6c     JSR    $F86C
f822: c6 af        LDB    #$AF
f824: bd e7 c7     JSR    $E7C7
f827: cc bf d5     LDD    #$BFD5
f82a: ed a1        STD    ,Y++
f82c: cc 00 00     LDD    #$0000
f82f: ed a1        STD    ,Y++
f831: cc 01 40     LDD    #$0140
f834: ed a1        STD    ,Y++
f836: f6 43 80     LDB    $4380
f839: c0 80        SUBB   #$80
f83b: 1d           SEX
f83c: 1f 03        TFR    D,U
f83e: 47           ASRA
f83f: 56           RORB
f840: 33 cb        LEAU   D,U
f842: 1f 30        TFR    U,D
f844: 84 1f        ANDA   #$1F
f846: ed a1        STD    ,Y++
f848: b7 46 c1     STA    $46C1
f84b: b7 46 c1     STA    $46C1
f84e: 8e 00 14     LDX    #$0014
f851: 30 1f        LEAX   -$1,X
f853: 26 fc        BNE    $F851
f855: f6 43 80     LDB    $4380
f858: c0 80        SUBB   #$80
f85a: 1d           SEX
f85b: 84 1f        ANDA   #$1F
f85d: 8a e0        ORA    #$E0
f85f: ed a1        STD    ,Y++
f861: cc 80 40     LDD    #$8040
f864: ed a1        STD    ,Y++
f866: ce f7 25     LDU    #$F725
f869: 7e f7 0d     JMP    $F70D
f86c: c6 07        LDB    #$07
f86e: 44           LSRA
f86f: 24 05        BCC    $F876
f871: be 30 22     LDX    $3022
f874: 20 03        BRA    $F879
f876: be 30 32     LDX    $3032
f879: af a1        STX    ,Y++
f87b: 5a           DECB
f87c: 2a f0        BPL    $F86E
f87e: cc 80 40     LDD    #$8040
f881: ed a1        STD    ,Y++
f883: 39           RTS
f884: cc bf 20     LDD    #$BF20
f887: ed a1        STD    ,Y++
f889: 7e f7 0d     JMP    $F70D
f88c: cc be fd     LDD    #$BEFD
f88f: ed a1        STD    ,Y++
f891: 7e f7 0d     JMP    $F70D
f894: cc be a7     LDD    #$BEA7
f897: ed a1        STD    ,Y++
f899: c6 ce        LDB    #$CE
f89b: d7 ce        STB    <$CE
f89d: bd e7 c7     JSR    $E7C7
f8a0: d6 ce        LDB    <$CE
f8a2: 5c           INCB
f8a3: c1 d3        CMPB   #$D3
f8a5: 25 f4        BCS    $F89B
f8a7: 7e f7 0d     JMP    $F70D
f8aa: cc bf ae     LDD    #$BFAE
f8ad: ed a1        STD    ,Y++
f8af: cc bf b3     LDD    #$BFB3
f8b2: ed a1        STD    ,Y++
f8b4: ed a1        STD    ,Y++
f8b6: ed a1        STD    ,Y++
f8b8: ed a1        STD    ,Y++
f8ba: cc 80 40     LDD    #$8040
f8bd: ed a1        STD    ,Y++
f8bf: c6 c9        LDB    #$C9
f8c1: bd e7 c7     JSR    $E7C7
f8c4: c6 ca        LDB    #$CA
f8c6: bd e7 c7     JSR    $E7C7
f8c9: 7e f7 0d     JMP    $F70D
f8cc: 96 c6        LDA    <$C6
f8ce: 81 01        CMPA   #$01
f8d0: 22 07        BHI    $F8D9
f8d2: cc 00 00     LDD    #$0000
f8d5: dd c2        STD    <$C2
f8d7: 97 c4        STA    <$C4
f8d9: cc 60 00     LDD    #$6000
f8dc: ed a1        STD    ,Y++
f8de: cc bf af     LDD    #$BFAF
f8e1: ed a1        STD    ,Y++
f8e3: cc 80 40     LDD    #$8040
f8e6: ed a1        STD    ,Y++
f8e8: dc c2        LDD    <$C2
f8ea: c3 00 01     ADDD   #$0001
f8ed: 0d c4        TST    <$C4
f8ef: 26 0f        BNE    $F900
f8f1: c1 fc        CMPB   #$FC
f8f3: 25 07        BCS    $F8FC
f8f5: 86 01        LDA    #$01
f8f7: 97 c4        STA    <$C4
f8f9: cc 00 00     LDD    #$0000
f8fc: dd c2        STD    <$C2
f8fe: 20 17        BRA    $F917
f900: c1 b0        CMPB   #$B0
f902: 25 02        BCS    $F906
f904: 5f           CLRB
f905: 4c           INCA
f906: 81 08        CMPA   #$08
f908: 25 05        BCS    $F90F
f90a: 0f c4        CLR    <$C4
f90c: cc 00 00     LDD    #$0000
f90f: dd c2        STD    <$C2
f911: c1 7f        CMPB   #$7F
f913: 25 02        BCS    $F917
f915: c6 7f        LDB    #$7F
f917: 8a 70        ORA    #$70
f919: ed a1        STD    ,Y++
f91b: cc 62 80     LDD    #$6280
f91e: ed a1        STD    ,Y++
