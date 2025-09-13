d486: 5a           DECB
d487: 1c b9        ANDCC  #$B9
d489: ef 4a        STU    $A,U
d48b: 3e           XRES
d48c: b9 ef 41     ADCA   $EF41
d48f: 25 b9        BCS    $D44A
d491: ef 5c        STU    -$4,U
d493: 26 b9        BNE    $D44E
d495: ef 5a        STU    -$6,U
d497: 3c b9        CWAI   #$B9
d499: ef 5f        STU    -$1,U
d49b: 3b           RTI
d49c: 48           ASLA
d49d: 0e c0        JMP    <$C0
d49f: 00 5a        NEG    <$5A
d4a1: 1c b9        ANDCC  #$B9
d4a3: ef 4a        STU    $A,U
d4a5: 3e           XRES
d4a6: b9 ef 58     ADCA   $EF58
d4a9: 2c f7        BGE    $D4A2
d4ab: 1a b9        ORCC   #$B9
d4ad: ef 5a        STU    -$6,U
d4af: 1c b9        ANDCC  #$B9
d4b1: ef 4a        STU    $A,U
d4b3: 3e           XRES
d4b4: b9 ef 5b     ADCA   $EF5B
d4b7: 01 b9        NEG    <$B9
d4b9: ef 42        STU    $2,U
d4bb: 2a b9        BPL    $D476
d4bd: ef 45        STU    $5,U
d4bf: 1f f6        TFR    inv,inv
d4c1: f9 5a 1c     ADCB   $5A1C
d4c4: b9 ef 4a     ADCA   $EF4A
d4c7: 3e           XRES
d4c8: b9 ef 5c     ADCA   $EF5C
d4cb: 26 b9        BNE    $D486
d4cd: ef 46        STU    $6,U
d4cf: 24 b9        BCC    $D48A
d4d1: ef 56        STU    -$A,U
d4d3: 22 f6        BHI    $D4CB
d4d5: 75 b9 ef     LSR    $B9EF
d4d8: 5a           DECB
d4d9: 1c b9        ANDCC  #$B9
d4db: ef 42        STU    $2,U
d4dd: 2a b9        BPL    $D498
d4df: ef 45        STU    $5,U
d4e1: 3f           SWI
d4e2: b9 ef 5e     ADCA   $EF5E
d4e5: 36 b9        PSHU   PC,Y,X,DP,CC
d4e7: ef 45        STU    $5,U
d4e9: 3f           SWI
d4ea: b9 ef 42     ADCA   $EF42
d4ed: 2a f7        BPL    $D4E6
d4ef: 25 44        BCS    $D535
d4f1: 1a b9        ORCC   #$B9
d4f3: ef 5b        STU    -$5,U
d4f5: 21 b9        BRN    $D4B0
d4f7: ef 5c        STU    -$4,U
d4f9: 26 b9        BNE    $D4B4
d4fb: ef 46        STU    $6,U
d4fd: 24 b9        BCC    $D4B8
d4ff: ef 45        STU    $5,U
d501: 3f           SWI
d502: f7 25 44     STB    $2544
d505: 1a b9        ORCC   #$B9
d507: ef 56        STU    -$A,U
d509: 22 b9        BHI    $D4C4
d50b: ef 46        STU    $6,U
d50d: 24 b9        BCC    $D4C8
d50f: ef 5c        STU    -$4,U
d511: 26 b9        BNE    $D4CC
d513: ef 4a        STU    $A,U
d515: 3e           XRES
d516: f7 25 5b     STB    $255B
d519: 01 b9        NEG    <$B9
d51b: ef 45        STU    $5,U
d51d: 3f           SWI
d51e: b9 ef 44     ADCA   $EF44
d521: 3a           ABX
d522: b9 ef 5c     ADCA   $EF5C
d525: 06 46        ROR    <$46
d527: 24 b9        BCC    $D4E2
d529: ef 5c        STU    -$4,U
d52b: 06 c0        ROR    <$C0
d52d: 00 00        NEG    <$00
d52f: 96 1f        LDA    <$1F
d531: 9c b6        CMPX   <$B6
d533: f2 b6 c5     SBCB   $B6C5
d536: b7 1d 1f     STA    $1D1F
d539: be 1f d8     LDX    $1FD8
d53c: b6 8f b6     LDA    $8FB6
d53f: e7 b6        STB    [A,Y]
d541: ad 1f        JSR    -$1,X
d543: a6 1f        LDA    -$1,X
d545: b0 b6 a1     SUBA   $B6A1
d548: b6 7c b6     LDA    $7CB6
d54b: bd b6 78     JSR    $B678
d54e: b6 ad 72     LDA    $AD72
d551: 00 80        NEG    <$80
d553: 40           NEGA
d554: c0 00        SUBB   #$00
d556: 00 1e        NEG    <$1E
d558: 1f 9c        TFR    B,inv
d55a: b6 f2 b6     LDA    $F2B6
d55d: c5 b6        BITB   #$B6
d55f: bd b6 84     JSR    $B684
d562: b6 7c b6     LDA    $7CB6
d565: 70 b6 9a     NEG    $B69A
d568: b6 e1 72     LDA    $E172
d56b: 00 80        NEG    <$80
d56d: 40           NEGA
d56e: c0 00        SUBB   #$00
d570: 00 5a        NEG    <$5A
d572: 1f b0        TFR    DP,D
d574: b6 bd b6     LDA    $BDB6
d577: 9a b7        ORA    <$B7
d579: 09 b6        ROL    <$B6
d57b: ad b6        JSR    [A,Y]
d57d: bd b6 c5     JSR    $B6C5
d580: 72 00 80     XNC    >$0080
d583: 40           NEGA
d584: c0 00        SUBB   #$00
d586: 00 96        NEG    <$96
d588: 1f c4        TFR    inv,S
d58a: b6 e7 b6     LDA    $E7B6
d58d: c5 b6        BITB   #$B6
d58f: 70 b6 70     NEG    $B670
d592: b7 1d 72     STA    $1D72
d595: 00 80        NEG    <$80
d597: 40           NEGA
d598: c0 00        SUBB   #$00
d59a: 1f a0        TFR    CC,D
d59c: 1f b0        TFR    DP,D
d59e: b6 7f b6     LDA    $7FB6
d5a1: ad 1f        JSR    -$1,X
d5a3: da 00        ORB    <$00
d5a5: 14           XHCF
d5a6: b7 13 b6     STA    $13B6
d5a9: 9a b6        ORA    <$B6
d5ab: 8f b6 e7     XSTX   #$B6E7
d5ae: 1f ae        TFR    CC,inv
d5b0: 1f 9c        TFR    B,inv
d5b2: b7 1d b6     STA    $1DB6
d5b5: 7c b6 8a     INC    $B68A
d5b8: 72 00 80     XNC    >$0080
d5bb: 40           NEGA
d5bc: c0 00        SUBB   #$00
d5be: 1f 88        TFR    A,A
d5c0: 1f b0        TFR    DP,D
d5c2: b6 c5 b7     LDA    $C5B7
d5c5: 09 b6        ROL    <$B6
d5c7: ad b6        JSR    [A,Y]
d5c9: 70 b6 70     NEG    $B670
d5cc: b6 c5 b6     LDA    $C5B6
d5cf: bd 72 00     JSR    $7200
d5d2: 80 40        SUBA   #$40
d5d4: c0 00        SUBB   #$00
d5d6: 1f 5e        TFR    PC,inv
d5d8: 1f c4        TFR    inv,S
d5da: b7 09 b6     STA    $09B6
d5dd: 9a b6        ORA    <$B6
d5df: 78 b6 b1     ASL    $B6B1
d5e2: b6 ad b6     LDA    $ADB6
d5e5: bd b6 fc     JSR    $B6FC
d5e8: 72 00 80     XNC    >$0080
d5eb: 40           NEGA
d5ec: c0 00        SUBB   #$00
d5ee: 1f 2e        TFR    Y,inv
d5f0: 1f d8        TFR    inv,A
d5f2: b6 d4 b6     LDA    $D4B6
d5f5: 8a b6        ORA    #$B6
d5f7: bd b6 a1     JSR    $B6A1
d5fa: b6 ad b7     LDA    $ADB7
d5fd: 1d           SEX
d5fe: 72 00 80     XNC    >$0080
d601: 40           NEGA
d602: c0 00        SUBB   #$00
d604: 61 ff 62 ff  NEG    [$62FF]
d608: 63 ff 64 ff  COM    [$64FF]
d60c: 65 ff 66 ff  LSR    [$66FF]
d610: 67 ff 61 80  ASR    [$6180]
d614: 62 80        XNC    ,X+
d616: 63 80        COM    ,X+
d618: 64 80        LSR    ,X+
d61a: 65 80        LSR    ,X+
d61c: 66 80        ROR    ,X+
d61e: 67 80        ASR    ,X+
d620: f9 17 f9     ADCB   $17F9
d623: 19           DAA
d624: f9 1b f9     ADCB   $1BF9
d627: 1d           SEX
d628: f9 1f f9     ADCB   $1FF9
d62b: 21 f9        BRN    $D626
d62d: 23 f9        BLS    $D628
d62f: 25 f9        BCS    $D62A
d631: 27 f9        BEQ    $D62C
d633: 29 f9        BVS    $D62E
d635: 2b f9        BMI    $D630
d637: 2d f9        BLT    $D632
d639: 2f f9        BLE    $D634
d63b: 31 f9 33 f9  LEAY   [$33F9,S]
d63f: 35 f9        PULS   CC,DP,X,Y,U,PC
d641: 37 f9        PULU   CC,DP,X,Y,S,PC
d643: 39           RTS
d644: f9 3b f9     ADCB   $3BF9
d647: 3d           MUL
d648: f5 1e f5     BITB   $1EF5
d64b: 61 f5        NEG    [B,S]
d64d: a3 f5        SUBD   [B,S]
d64f: e5 f9 3f f9  BITB   [$3FF9,S]
d653: 4f           CLRA
d654: f9 5f f9     ADCB   $5FF9
d657: 6f f6        CLR    [A,S]
d659: 28 f6        BVC    $D651
d65b: 3a           ABX
d65c: f6 4c f6     LDB    $4CF6
d65f: 5e           XCLRB
d660: bd d6 8d     JSR    $D68D
d663: bd d6 90     JSR    $D690
d666: cc c0 00     LDD    #$C000
d669: ed c1        STD    ,U++
d66b: bd d6 a0     JSR    $D6A0
d66e: bd d6 a3     JSR    $D6A3
d671: cc c0 00     LDD    #$C000
d674: ed c1        STD    ,U++
d676: bd d6 bc     JSR    $D6BC
d679: bd d6 bf     JSR    $D6BF
d67c: cc c0 00     LDD    #$C000
d67f: ed c1        STD    ,U++
d681: bd d6 e7     JSR    $D6E7
d684: bd d6 ea     JSR    $D6EA
d687: cc c0 00     LDD    #$C000
d68a: ed c1        STD    ,U++
d68c: 39           RTS
d68d: ce 00 38     LDU    #$0038
d690: bd d7 09     JSR    $D709
d693: ec 81        LDD    ,X++
d695: ed c1        STD    ,U++
d697: ec 81        LDD    ,X++
d699: ed c1        STD    ,U++
d69b: ec 84        LDD    ,X
d69d: ed c1        STD    ,U++
d69f: 39           RTS
d6a0: ce 00 46     LDU    #$0046
d6a3: bd d7 09     JSR    $D709
d6a6: ec 81        LDD    ,X++
d6a8: 50           NEGB
d6a9: c4 1f        ANDB   #$1F
d6ab: ed c1        STD    ,U++
d6ad: ec 81        LDD    ,X++
d6af: 50           NEGB
d6b0: ca e0        ORB    #$E0
d6b2: ed c1        STD    ,U++
d6b4: ec 84        LDD    ,X
d6b6: 50           NEGB
d6b7: c4 1f        ANDB   #$1F
d6b9: ed c1        STD    ,U++
d6bb: 39           RTS
d6bc: ce 00 54     LDU    #$0054
d6bf: bd d7 09     JSR    $D709
d6c2: ec 81        LDD    ,X++
d6c4: 40           NEGA
d6c5: 84 1f        ANDA   #$1F
d6c7: 8a 40        ORA    #$40
d6c9: 50           NEGB
d6ca: c4 1f        ANDB   #$1F
d6cc: ed c1        STD    ,U++
d6ce: ec 81        LDD    ,X++
d6d0: 40           NEGA
d6d1: 84 1f        ANDA   #$1F
d6d3: 8a 40        ORA    #$40
d6d5: 50           NEGB
d6d6: ca e0        ORB    #$E0
d6d8: ed c1        STD    ,U++
d6da: ec 84        LDD    ,X
d6dc: 40           NEGA
d6dd: 84 1f        ANDA   #$1F
d6df: 8a 40        ORA    #$40
d6e1: 50           NEGB
d6e2: c4 1f        ANDB   #$1F
d6e4: ed c1        STD    ,U++
d6e6: 39           RTS
d6e7: ce 00 62     LDU    #$0062
d6ea: bd d7 09     JSR    $D709
d6ed: ec 81        LDD    ,X++
d6ef: 40           NEGA
d6f0: 84 1f        ANDA   #$1F
d6f2: 8a 40        ORA    #$40
d6f4: ed c1        STD    ,U++
d6f6: ec 81        LDD    ,X++
d6f8: 40           NEGA
d6f9: 84 1f        ANDA   #$1F
d6fb: 8a 40        ORA    #$40
d6fd: ed c1        STD    ,U++
d6ff: ec 84        LDD    ,X
d701: 40           NEGA
d702: 84 1f        ANDA   #$1F
d704: 8a 40        ORA    #$40
d706: ed c1        STD    ,U++
d708: 39           RTS
d709: b6 47 03     LDA    $4703
d70c: 84 0f        ANDA   #$0F
d70e: c6 06        LDB    #$06
d710: 3d           MUL
d711: 8e d7 16     LDX    #$D716
d714: 3a           ABX
d715: 39           RTS
d716: 42           XNCA
d717: 00 4d        NEG    <$4D
d719: e1 51        CMPB   -$F,U
d71b: 1f 46        TFR    S,inv
d71d: 01 46        NEG    <$46
d71f: e1 54        CMPB   -$C,U
d721: 1e 49        EXG    S,B
d723: 02 43        XNC    <$43
d725: e1 54        CMPB   -$C,U
d727: 1d           SEX
d728: 43           COMA
d729: 01 4c        NEG    <$4C
d72b: e3 51        ADDD   -$F,U
d72d: 1c 42        ANDCC  #$42
d72f: 01 48        NEG    <$48
d731: e4 56        ANDB   -$A,U
d733: 1b           NOP
d734: 43           COMA
d735: 02 48        XNC    <$48
d737: e6 55        LDB    -$B,U
d739: 18           X18
d73a: 45           LSRA
d73b: 04 43        LSR    <$43
d73d: e2 58        SBCB   -$8,U
d73f: 1a 46        ORCC   #$46
d741: 05 45        LSR    <$45
d743: e4 55        ANDB   -$B,U
d745: 17 42 02     LBSR   $194A
d748: 46           RORA
d749: e6 58        LDB    -$8,U
d74b: 18           X18
d74c: 44           LSRA
d74d: 05 44        LSR    <$44
d74f: e5 58        BITB   -$8,U
d751: 16 42 03     LBRA   $1957
d754: 48           ASLA
d755: ec 56        LDD    -$A,U
d757: 11 41        NEGA
d759: 02 45        XNC    <$45
d75b: ea 5a        ORB    -$6,U
d75d: 14           XHCF
d75e: 41           NEGA
d75f: 03 42        COM    <$42
d761: e6 5d        LDB    -$3,U
d763: 17 42 08     LBSR   $196E
d766: 41           NEGA
d767: e4 5d        ANDB   -$3,U
d769: 14           XHCF
d76a: 41           NEGA
d76b: 06 41        ROR    <$41
d76d: e6 5e        LDB    -$2,U
d76f: 14           XHCF
d770: 40           NEGA
d771: 02 41        XNC    <$41
d773: ed 5f        STD    -$1,U
d775: 11 b6 43 00  LDA    $4300
d779: 84 0f        ANDA   #$0F
d77b: 81 0f        CMPA   #$0F
d77d: 27 04        BEQ    $D783
d77f: 86 ff        LDA    #$FF
d781: 97 18        STA    <$18
d783: 96 18        LDA    <$18
d785: 26 01        BNE    $D788
d787: 39           RTS
d788: 0a 18        DEC    <$18
d78a: 86 12        LDA    #$12
d78c: 91 14        CMPA   <$14
d78e: 24 02        BCC    $D792
d790: 97 14        STA    <$14
d792: 96 17        LDA    <$17
d794: b7 46 81     STA    $4681
d797: d6 16        LDB    <$16
d799: f7 46 80     STB    $4680
d79c: 9a 16        ORA    <$16
d79e: 9a 15        ORA    <$15
d7a0: 27 04        BEQ    $D7A6
d7a2: 86 ff        LDA    #$FF
d7a4: 97 18        STA    <$18
d7a6: b6 43 00     LDA    $4300
d7a9: 84 10        ANDA   #$10
d7ab: 26 03        BNE    $D7B0
d7ad: 7e d8 ae     JMP    $D8AE
d7b0: b6 45 90     LDA    $4590
d7b3: 48           ASLA
d7b4: 48           ASLA
d7b5: 48           ASLA
d7b6: 48           ASLA
d7b7: 97 09        STA    <$09
d7b9: b6 45 91     LDA    $4591
d7bc: 84 0f        ANDA   #$0F
d7be: 9a 09        ORA    <$09
d7c0: 97 09        STA    <$09
d7c2: 96 0a        LDA    <$0A
d7c4: 84 03        ANDA   #$03
d7c6: 26 03        BNE    $D7CB
d7c8: bd c0 9d     JSR    $C09D
d7cb: 8e 48 0e     LDX    #$480E
d7ce: b6 43 00     LDA    $4300
d7d1: 8c 48 0d     CMPX   #$480D
d7d4: 27 03        BEQ    $D7D9
d7d6: 24 02        BCC    $D7DA
d7d8: 44           LSRA
d7d9: 44           LSRA
d7da: 44           LSRA
d7db: a6 84        LDA    ,X
d7dd: 84 1f        ANDA   #$1F
d7df: 25 31        BCS    $D812
d7e1: 27 0c        BEQ    $D7EF
d7e3: 81 1b        CMPA   #$1B
d7e5: 24 06        BCC    $D7ED
d7e7: d6 0a        LDB    <$0A
d7e9: c4 01        ANDB   #$01
d7eb: 26 02        BNE    $D7EF
d7ed: 80 01        SUBA   #$01
d7ef: a7 84        STA    ,X
d7f1: b6 43 00     LDA    $4300
d7f4: 84 08        ANDA   #$08
d7f6: 26 04        BNE    $D7FC
d7f8: 86 f0        LDA    #$F0
d7fa: 97 0b        STA    <$0B
d7fc: 96 0b        LDA    <$0B
d7fe: 27 08        BEQ    $D808
d800: 7e d800     JMP    $d800
