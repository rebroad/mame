9886: d6 62     LDB    <$62
9888: c1 08     CMPB   #$08
988a: 23 04     BLS    $9890
988c: c6 08     LDB    #$08
988e: d7 62     STB    <$62
9890: d6 62     LDB    <$62
9892: 27 03     BEQ    $9897
9894: 5a        DECB
9895: d7 62     STB    <$62
9897: 39        RTS
9898: 96 43     LDA    <$43
989a: 84 00     ANDA   #$00
989c: 26 11     BNE    $98AF
989e: 8e 49 00  LDX    #$4900
98a1: 6a 06     DEC    $6,X
98a3: 2a 02     BPL    $98A7
98a5: 6f 06     CLR    $6,X
98a7: 30 88 19  LEAX   $19,X
98aa: 8c 49 4b  CMPX   #$494B
98ad: 25 f2     BCS    $98A1
98af: 39        RTS
98b0: d6 62     LDB    <$62
98b2: c4 03     ANDB   #$03
98b4: 27 14     BEQ    $98CA
98b6: cc 71 00  LDD    #$7100
98b9: ed a1     STD    ,Y++
98bb: cc 67 ff  LDD    #$67FF
98be: ed a1     STD    ,Y++
98c0: cc b9 b3  LDD    #$B9B3
98c3: ed a1     STD    ,Y++
98c5: cc 72 00  LDD    #$7200
98c8: ed a1     STD    ,Y++
98ca: 39        RTS
98cb: 00 16     NEG    <$16
98cd: 16 20 20  LBRA   $B8F0
98d0: 20 21     BRA    $98F3
98d2: 21 27     BRN    $98FB
98d4: 28 20     BVC    $98F6
98d6: 20 24     BRA    $98FC
98d8: 24 24     BCC    $98FE
98da: 25 25     BCS    $9901
98dc: 31 32     LEAY   -$E,Y
98de: 10 00 b0  NEG    <$B0
98e1: 00 03     NEG    <$03
98e3: 01 00     NEG    <$00
98e5: 10 00 e0  NEG    <$E0
98e8: 00 03     NEG    <$03
98ea: 01 01     NEG    <$01
98ec: 10 00 20  NEG    <$20
98ef: 00 03     NEG    <$03
98f1: 01 02     NEG    <$02
98f3: 10 00 50  NEG    <$50
98f6: 00 03     NEG    <$03
98f8: 01 03     NEG    <$03
98fa: 18        X18
98fb: 00 a0     NEG    <$A0
98fd: 00 01     NEG    <$01
98ff: 03 04     COM    <$04
9901: 18        X18
9902: 00 60     NEG    <$60
9904: 00 01     NEG    <$01
9906: 02 05     XNC    <$05
9908: 20 00     BRA    $990A
990a: b8 00 01  EORA   >$0001
990d: 02 06     XNC    <$06
990f: 20 00     BRA    $9911
9911: 48        ASLA
9912: 00 01     NEG    <$01
9914: 02 07     XNC    <$07
9916: 30 00     LEAX   $0,X
9918: c0 00     SUBB   #$00
991a: 03 02     COM    <$02
991c: 08 30     ASL    <$30
991e: 00 00     NEG    <$00
9920: 00 01     NEG    <$01
9922: 00 09     NEG    <$09
9924: 30 00     LEAX   $0,X
9926: 40        NEGA
9927: 00 03     NEG    <$03
9929: 02 0a     XNC    <$0A
992b: 38 00     XANDCC #$00
992d: 98 00     EORA   <$00
992f: 01 03     NEG    <$03
9931: 0b 38     XDEC   <$38
9933: 00 f0     NEG    <$F0
9935: 00 01     NEG    <$01
9937: 00 0c     NEG    <$0C
9939: 38 00     XANDCC #$00
993b: 10 00 01  NEG    <$01
993e: 00 0d     NEG    <$0D
9940: 38 00     XANDCC #$00
9942: 68 00     ASL    $0,X
9944: 01 03     NEG    <$03
9946: 0e 40     JMP    <$40
9948: 00 90     NEG    <$90
994a: 00 03     NEG    <$03
994c: 03 0f     COM    <$0F
994e: 40        NEGA
994f: 00 70     NEG    <$70
9951: 00 03     NEG    <$03
9953: 03 10     COM    <$10
9955: 50        NEGB
9956: 00 90     NEG    <$90
9958: 00 01     NEG    <$01
995a: 01 11     NEG    <$11
995c: 50        NEGB
995d: 00 00     NEG    <$00
995f: 00 02     NEG    <$02
9961: 01 12     NEG    <$12
9963: 50        NEGB
9964: 00 70     NEG    <$70
9966: 00 01     NEG    <$01
9968: 01 13     NEG    <$13
996a: 54        LSRB
996b: 00 e4     NEG    <$E4
996d: 00 01     NEG    <$01
996f: 01 14     NEG    <$14
9971: 54        LSRB
9972: 00 1c     NEG    <$1C
9974: 00 01     NEG    <$01
9976: 01 15     NEG    <$15
9978: 58        ASLB
9979: 00 c0     NEG    <$C0
997b: 00 01     NEG    <$01
997d: 00 16     NEG    <$16
997f: 58        ASLB
9980: 00 40     NEG    <$40
9982: 00 01     NEG    <$01
9984: 00 17     NEG    <$17
9986: 68 00     ASL    $0,X
9988: d8 00     EORB   <$00
998a: 01 00     NEG    <$00
998c: 18        X18
998d: 68 00     ASL    $0,X
998f: 28 00     BVC    $9991
9991: 01 00     NEG    <$00
9993: 19        DAA
9994: 70 00 f0  NEG    >$00F0
9997: 00 02     NEG    <$02
9999: 02 1a     XNC    <$1A
999b: 70 00 10  NEG    >$0010
999e: 00 02     NEG    <$02
99a0: 02 1b     XNC    <$1B
99a2: 80 00     SUBA   #$00
99a4: 90 00     SUBA   <$00
99a6: 01 03     NEG    <$03
99a8: 1c 80     ANDCC  #$80
99aa: 00 d8     NEG    <$D8
99ac: 00 01     NEG    <$01
99ae: 00 1d     NEG    <$1D
99b0: 80 00     SUBA   #$00
99b2: 28 00     BVC    $99B4
99b4: 01 00     NEG    <$00
99b6: 1e 80     EXG    A,D
99b8: 00 70     NEG    <$70
99ba: 00 01     NEG    <$01
99bc: 02 1f     XNC    <$1F
99be: 30 00     LEAX   $0,X
99c0: 88 00     EORA   #$00
99c2: 01 02     NEG    <$02
99c4: 00 30     NEG    <$30
99c6: 00 98     NEG    <$98
99c8: 00 03     NEG    <$03
99ca: 02 01     XNC    <$01
99cc: 30 00     LEAX   $0,X
99ce: a8 00     EORA   $0,X
99d0: 03 02     COM    <$02
99d2: 02 30     XNC    <$30
99d4: 00 b8     NEG    <$B8
99d6: 00 01     NEG    <$01
99d8: 02 03     XNC    <$03
99da: 30 00     LEAX   $0,X
99dc: e8 00     EORB   $0,X
99de: 01 00     NEG    <$00
99e0: 04 30     LSR    <$30
99e2: 00 f8     NEG    <$F8
99e4: 00 03     NEG    <$03
99e6: 00 05     NEG    <$05
99e8: 30 00     LEAX   $0,X
99ea: 08 00     ASL    <$00
99ec: 03 00     COM    <$00
99ee: 06 30     ROR    <$30
99f0: 00 18     NEG    <$18
99f2: 00 01     NEG    <$01
99f4: 00 07     NEG    <$07
99f6: 30 00     LEAX   $0,X
99f8: 48        ASLA
99f9: 00 01     NEG    <$01
99fb: 03 08     COM    <$08
99fd: 30 00     LEAX   $0,X
99ff: 58        ASLB
9a00: 00 03     NEG    <$03
9a02: 03 09     COM    <$09
9a04: 30 00     LEAX   $0,X
9a06: 68 00     ASL    $0,X
9a08: 03 03     COM    <$03
9a0a: 0a 30     DEC    <$30
9a0c: 00 78     NEG    <$78
9a0e: 00 01     NEG    <$01
9a10: 03 0b     COM    <$0B
9a12: 40        NEGA
9a13: 00 90     NEG    <$90
9a15: 00 01     NEG    <$01
9a17: 02 0c     XNC    <$0C
9a19: 40        NEGA
9a1a: 00 a0     NEG    <$A0
9a1c: 00 03     NEG    <$03
9a1e: 02 0d     XNC    <$0D
9a20: 40        NEGA
9a21: 00 b0     NEG    <$B0
9a23: 00 01     NEG    <$01
9a25: 02 0e     XNC    <$0E
9a27: 40        NEGA
9a28: 00 f0     NEG    <$F0
9a2a: 00 01     NEG    <$01
9a2c: 00 0f     NEG    <$0F
9a2e: 40        NEGA
9a2f: 00 10     NEG    <$10
9a31: 00 01     NEG    <$01
9a33: 00 10     NEG    <$10
9a35: 40        NEGA
9a36: 00 50     NEG    <$50
9a38: 00 01     NEG    <$01
9a3a: 03 11     COM    <$11
9a3c: 40        NEGA
9a3d: 00 60     NEG    <$60
9a3f: 00 03     NEG    <$03
9a41: 03 12     COM    <$12
9a43: 40        NEGA
9a44: 00 70     NEG    <$70
9a46: 00 01     NEG    <$01
9a48: 03 13     COM    <$13
9a4a: 54        LSRB
9a4b: 00 cc     NEG    <$CC
9a4d: 00 03     NEG    <$03
9a4f: 01 14     NEG    <$14
9a51: 54        LSRB
9a52: 00 34     NEG    <$34
9a54: 00 03     NEG    <$03
9a56: 01 15     NEG    <$15
9a58: 60 00     NEG    $0,X
9a5a: a0 00     SUBA   $0,X
9a5c: 01 01     NEG    <$01
9a5e: 16 60 00  LBRA   $FA61
9a61: e0 00     SUBB   $0,X
9a63: 03 00     COM    <$00
9a65: 17 60 00  LBSR   $FA68
9a68: 20 00     BRA    $9A6A
9a6a: 03 00     COM    <$00
9a6c: 18        X18
9a6d: 60 00     NEG    $0,X
9a6f: 60 00     NEG    $0,X
9a71: 01 01     NEG    <$01
9a73: 19        DAA
9a74: 74 00 e0  LSR    >$00E0
9a77: 00 01     NEG    <$01
9a79: 01 1a     NEG    <$1A
9a7b: 74 00 20  LSR    >$0020
9a7e: 00 01     NEG    <$01
9a80: 01 1b     NEG    <$1B
9a82: 80 00     SUBA   #$00
9a84: 98 00     EORA   <$00
