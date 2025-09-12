76d3: b6 4b 13     LDA    $4B13
76d6: 2f 24        BLE    $0029
76d8: cc 00 41     LDD    #$0041
76db: bd e7 c7     JSR    $E7C7
76de: cc 62 80     LDD    #$6280
76e1: ed a1        STD    ,Y++
76e3: cc 01 98     LDD    #$0198
76e6: ed a1        STD    ,Y++
76e8: cc 01 68     LDD    #$0168
76eb: ed a1        STD    ,Y++
76ed: 86 01        LDA    #$01
76ef: 97 ad        STA    <$AD
76f1: b6 4b 1a     LDA    $4B1A
76f4: bd e7 90     JSR    $E790
76f7: cc 80 40     LDD    #$8040
76fa: ed a1        STD    ,Y++
76fc: b6 4b 35     LDA    $4B35
76ff: 27 05        BEQ    $0033
7701: c6 42        LDB    #$42
7703: bd e7 c7     JSR    $E7C7
7706: 39           RTS
7707: b6 4b 0f     LDA    $4B0F
770a: 81 20        CMPA   #$20
770c: 23 02        BLS    $003D
770e: 86 20        LDA    #$20
7710: c6 06        LDB    #$06
7712: 3d           MUL
7713: 50           NEGB
7714: cb c0        ADDB   #$C0
7716: 86 70        LDA    #$70
7718: ed a1        STD    ,Y++
771a: c6 04        LDB    #$04
771c: bd e7 c7     JSR    $E7C7
771f: 39           RTS
7720: fd 4a d7     STD    $4AD7
7723: cc 00 00     LDD    #$0000
7726: fd 4a d4     STD    $4AD4
7729: b7 4a d6     STA    $4AD6
772c: 78 4a d8     ASL    $4AD8
772f: 79 4a d7     ROL    $4AD7
7732: b6 4a d6     LDA    $4AD6
7735: b9 4a d6     ADCA   $4AD6
7738: 19           DAA
7739: b7 4a d6     STA    $4AD6
773c: b6 4a d5     LDA    $4AD5
773f: b9 4a d5     ADCA   $4AD5
7742: 19           DAA
7743: b7 4a d5     STA    $4AD5
7746: 79 4a d4     ROL    $4AD4
7749: 30 1f        LEAX   -$1,X
774b: 26 df        BNE    $0059
774d: 39           RTS
774e: b7 4a d7     STA    $4AD7
7751: 84 f0        ANDA   #$F0
7753: c6 a0        LDB    #$A0
7755: 3d           MUL
7756: f6 4a d7     LDB    $4AD7
7759: c4 0f        ANDB   #$0F
775b: f7 4a d7     STB    $4AD7
775e: bb 4a d7     ADDA   $4AD7
7761: b7 4a d7     STA    $4AD7
7764: 39           RTS
7765: fc 50 28     LDD    $5028
7768: 2f 39        BLE    $00D0
776a: fd 47 04     STD    $4704
776d: fc 50 2a     LDD    $502A
7770: fd 50 02     STD    $5002
7773: 4d           TSTA
7774: 2a 04        BPL    $00A7
7776: 43           COMA
7777: 50           NEGB
7778: 82 ff        SBCA   #$FF
777a: b3 50 28     SUBD   $5028
777d: 2c 24        BGE    $00D0
777f: fc 50 2c     LDD    $502C
7782: fd 50 04     STD    $5004
7785: 4d           TSTA
7786: 2a 04        BPL    $00B9
7788: 43           COMA
7789: 50           NEGB
778a: 82 ff        SBCA   #$FF
778c: b3 50 28     SUBD   $5028
778f: 2c 12        BGE    $00D0
7791: bd cc f0     JSR    $CCF0
7794: cc 73 00     LDD    #$7300
7797: ed a1        STD    ,Y++
7799: cc be 50     LDD    #$BE50
779c: ed a1        STD    ,Y++
779e: cc 72 00     LDD    #$7200
77a1: ed a1        STD    ,Y++
77a3: 39           RTS
77a4: fc 50 28     LDD    $5028
77a7: 2f 2a        BLE    $0100
77a9: fd 47 04     STD    $4704
77ac: fc 50 2a     LDD    $502A
77af: fd 50 02     STD    $5002
77b2: 4d           TSTA
77b3: 2a 04        BPL    $00E6
77b5: 43           COMA
77b6: 50           NEGB
77b7: 82 ff        SBCA   #$FF
77b9: b3 50 28     SUBD   $5028
77bc: 2c 15        BGE    $0100
77be: fc 50 2c     LDD    $502C
77c1: fd 50 04     STD    $5004
77c4: 4d           TSTA
77c5: 2a 04        BPL    $00F8
77c7: 43           COMA
77c8: 50           NEGB
77c9: 82 ff        SBCA   #$FF
77cb: b3 50 28     SUBD   $5028
77ce: 2c 03        BGE    $0100
77d0: bd 77 d4     JSR    $77D4
77d3: 39           RTS
77d4: bd cc f0     JSR    $CCF0
77d7: ec 3c        LDD    -$4,Y
77d9: dd 05        STD    <$05
77db: ec 3e        LDD    -$2,Y
77dd: dd 03        STD    <$03
77df: dc 56        LDD    <$56
77e1: dd 01        STD    <$01
77e3: ce bd 68     LDU    #$BD68
77e6: bd 78 63     JSR    $7863
77e9: ce bd a6     LDU    #$BDA6
77ec: bd 78 5b     JSR    $785B
77ef: ce bd b2     LDU    #$BDB2
77f2: bd 78 5b     JSR    $785B
77f5: ce bd da     LDU    #$BDDA
77f8: bd 78 5b     JSR    $785B
77fb: ce be 06     LDU    #$BE06
77fe: bd 78 5b     JSR    $785B
7801: dc 56        LDD    <$56
7803: 80 03        SUBA   #$03
7805: 10 83 70 00  CMPD   #$7000
7809: 24 03        BCC    $013B
780b: cc 70 00     LDD    #$7000
780e: dd 01        STD    <$01
7810: 81 70        CMPA   #$70
7812: 26 05        BNE    $0146
7814: cc 66 60     LDD    #$6660
7817: 20 03        BRA    $0149
7819: cc 66 30     LDD    #$6630
781c: ed a1        STD    ,Y++
781e: b6 4b 14     LDA    $4B14
7821: 85 01        BITA   #$01
7823: 26 05        BNE    $0157
7825: ce b7 28     LDU    #$B728
7828: 20 0f        BRA    $0166
782a: ce b7 3c     LDU    #$B73C
782d: bd 78 5b     JSR    $785B
7830: ce b7 49     LDU    #$B749
7833: bd 78 5b     JSR    $785B
7836: ce b7 54     LDU    #$B754
7839: bd 78 5b     JSR    $785B
783c: b6 4b 14     LDA    $4B14
783f: 85 01        BITA   #$01
7841: 26 05        BNE    $0175
7843: ce b7 5e     LDU    #$B75E
7846: 20 0f        BRA    $0184
7848: ce b7 70     LDU    #$B770
784b: bd 78 5b     JSR    $785B
784e: ce b7 7c     LDU    #$B77C
7851: bd 78 5b     JSR    $785B
7854: ce b7 88     LDU    #$B788
7857: bd 78 5b     JSR    $785B
785a: 39           RTS
785b: dc 05        LDD    <$05
785d: ed a1        STD    ,Y++
785f: dc 03        LDD    <$03
7861: ed a1        STD    ,Y++
7863: dc 01        LDD    <$01
7865: ed a1        STD    ,Y++
7867: ef a1        STU    ,Y++
7869: 39           RTS
786a: 8e 49 00     LDX    #$4900
786d: 9f 64        STX    <$64
786f: a6 03        LDA    $3,X
7871: 27 03        BEQ    $01A3
7873: bd 78 81     JSR    $7881
7876: 9e 64        LDX    <$64
7878: 30 88 19     LEAX   $19,X
787b: 8c 49 4b     CMPX   #$494B
787e: 25 ed        BCS    $019A
7880: 39           RTS
7881: 9e 64        LDX    <$64
7883: 4f           CLRA
7884: e6 02        LDB    $2,X
7886: cb 03        ADDB   #$03
7888: fd 47 01     STD    $4701
788b: 86 67        LDA    #$67
788d: bd cd ba     JSR    $CDBA
7890: b6 50 00     LDA    $5000
7893: 48           ASLA
7894: 29 73        BVS    $0236
7896: b6 50 02     LDA    $5002
7899: 48           ASLA
789a: 29 6d        BVS    $0236
789c: b6 50 04     LDA    $5004
789f: 48           ASLA
78a0: 29 67        BVS    $0236
78a2: fc 50 70     LDD    $5070
78a5: f3 50 72     ADDD   $5072
78a8: f3 50 74     ADDD   $5074
78ab: 1f 03        TFR    D,U
78ad: 11 83 09 00  CMPU   #$0900
78b1: 22 08        BHI    $01E8
78b3: ec 88 15     LDD    $15,X
78b6: 8a 20        ORA    #$20
78b8: ed 88 15     STD    $15,X
78bb: 11 83 01 00  CMPU   #$0100
78bf: 22 08        BHI    $01F6
78c1: ec 88 15     LDD    $15,X
78c4: 8a 04        ORA    #$04
78c6: ed 88 15     STD    $15,X
78c9: 11 83 00 a0  CMPU   #$00A0
78cd: 22 30        BHI    $022C
78cf: b6 4b 38     LDA    $4B38
78d2: 26 b6        BNE    $0201
