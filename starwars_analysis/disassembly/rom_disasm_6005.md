6005: 8e 00 00     LDX    #$0000
6008: cc f8 00     LDD    #$F800
600b: 86 48        LDA    #$48
600d: 1f 8b        TFR    A,DP
600f: 04 3d        LSR    <$3D
6011: 24 f2        BCC    $0000
6013: 11 8c 4f ff  CMPS   #$4FFF
6017: 27 01        BEQ    $0015
6019: 39           RTS
601a: 96 28        LDA    <$28
601c: 26 11        BNE    $002A
601e: b6 48 24     LDA    $4824
6021: 84 80        ANDA   #$80
6023: 26 0a        BNE    $002A
6025: 96 31        LDA    <$31
6027: 85 80        BITA   #$80
6029: 27 da        BEQ    $0000
602b: 84 7f        ANDA   #$7F
602d: 97 31        STA    <$31
602f: bd 60 be     JSR    $60BE
6032: 96 3f        LDA    <$3F
6034: 2b fc        BMI    $002D
6036: 96 41        LDA    <$41
6038: 81 3d        CMPA   #$3D
603a: 24 fe        BCC    $0035
603c: 48           ASLA
603d: 8e 60 44     LDX    #$6044
6040: ad 96        JSR    [A,X]
6042: 20 c1        BRA    $0000
6044: 62 75        XNC    -$B,S
6046: 64 e2        LSR    ,-S
6048: 64 f1        LSR    [,S++]
604a: 65 13        LSR    -$D,X
604c: 65 32        LSR    -$E,Y
604e: 67 08        ASR    $8,X
6050: 67 6b        ASR    $B,S
6052: 62 e4        XNC    ,S
6054: 63 06        COM    $6,X
6056: 63 26        COM    $6,Y
6058: 63 48        COM    $8,U
605a: 64 59        LSR    -$7,U
605c: 64 83        LSR    ,--X
605e: 65 6c        LSR    $C,S
6060: 65 9f 66 70  LSR    [$6670]
6064: 66 ac 6d     ROR    $00CF,PCR
6067: 3b           RTI
6068: 6d 54        TST    -$C,U
606a: 6d 80        TST    ,X+
606c: 6d 86        TST    A,X
606e: 6d 95        TST    [B,X]
6070: 6d 98 67     TST    [$67,X]
6073: 08 67        ASL    <$67
6075: 6b 67        XDEC   $7,S
6077: 87 67        XSTA   #$67
6079: 9a 67        ORA    <$67
607b: e5 67        BITB   $7,S
607d: fd 68 02     STD    $6802
6080: 68 2f        ASL    $F,Y
6082: 68 38        ASL    -$8,Y
6084: 68 59        ASL    -$7,U
6086: 68 d0        ASL    [,W++]
6088: 68 d5        ASL    [B,U]
608a: 69 12        ROL    -$E,X
608c: 69 33        ROL    -$D,Y
608e: 69 53        ROL    -$D,U
6090: 69 68        ROL    $8,S
6092: 6a 50        DEC    -$10,U
6094: 6a 7e        DEC    -$2,S
6096: 69 a9 69 f4  ROL    $69F4,Y
609a: 6a 50        DEC    -$10,U
609c: 6a 89 6a ab  DEC    $6AAB,X
60a0: 6a bf 6b 22  DEC    [$6B22]
60a4: 6b 32        XDEC   -$E,Y
60a6: 6a ff 6b 1d  DEC    [$6B1D]
60aa: 6b db        XDEC   [D,U]
60ac: 6b f1        XDEC   [,S++]
60ae: 6c 76        INC    -$A,S
60b0: 6c 84        INC    ,X
60b2: 6c b6        INC    [A,Y]
60b4: 6c c4        INC    ,U
60b6: 6c e1        INC    ,S++
60b8: 6c ef        INC    ,--W
60ba: 6d 0c        TST    $C,X
60bc: 6d 15        TST    -$B,X
60be: 0c 43        INC    <$43
60c0: 26 08        BNE    $00C5
60c2: 0c 42        INC    <$42
60c4: 26 04        BNE    $00C5
60c6: 86 80        LDA    #$80
60c8: 97 42        STA    <$42
60ca: b6 48 14     LDA    $4814
60cd: 26 05        BNE    $00CF
60cf: b7 4b 31     STA    $4B31
60d2: 20 20        BRA    $00EF
60d4: b6 4b 31     LDA    $4B31
60d7: 26 0b        BNE    $00DF
60d9: bd bd 12     JSR    $BD12
60dc: b6 48 14     LDA    $4814
60df: b7 4b 31     STA    $4B31
60e2: 20 10        BRA    $00EF
60e4: b6 4b 31     LDA    $4B31
60e7: b1 48 14     CMPA   $4814
60ea: 24 08        BCC    $00EF
60ec: bd bd 03     JSR    $BD03
60ef: 86 ff        LDA    #$FF
60f1: b7 4b 31     STA    $4B31
60f4: bd 70 db     JSR    $70DB
60f7: 96 ab        LDA    <$AB
60f9: 97 aa        STA    <$AA
60fb: 96 21        LDA    <$21
60fd: 84 30        ANDA   #$30
60ff: 34 02        PSHS   A
6101: 96 1e        LDA    <$1E
6103: 84 cf        ANDA   #$CF
6105: aa e0        ORA    ,S+
6107: 84 f4        ANDA   #$F4
6109: 97 ab        STA    <$AB
610b: 98 aa        EORA   <$AA
610d: 94 aa        ANDA   <$AA
610f: 97 ac        STA    <$AC
6111: 39           RTS
6112: 96 3f        LDA    <$3F
6114: c6 70        LDB    #$70
6116: 1f 02        TFR    D,Y
6118: cc b9 9e     LDD    #$B99E
611b: ed a1        STD    ,Y++
611d: 39           RTS
611e: 8e ce de     LDX    #$CEDE
6121: ce 28 00     LDU    #$2800
6124: ec 81        LDD    ,X++
6126: ed c1        STD    ,U++
6128: 11 83 30 00  CMPU   #$3000
612c: 25 f6        BCS    $011F
612e: 39           RTS
612f: cc 80 40     LDD    #$8040
6132: ed a1        STD    ,Y++
6134: cc 20 20     LDD    #$2020
6137: ed a1        STD    ,Y++
6139: ed a0        STD    ,Y+
613b: 1f 20        TFR    Y,D
613d: 90 3f        SUBA   <$3F
613f: 80 14        SUBA   #$14
6141: 25 12        BCS    $0150
6143: bd 61 1e     JSR    $611E
6146: cc 20 20     LDD    #$2020
6149: fd 13 fe     STD    $13FE
614c: fd 13 fc     STD    $13FC
614f: fd 27 fe     STD    $27FE
6152: fd 27 fc     STD    $27FC
6155: 86 ff        LDA    #$FF
6157: 97 3f        STA    <$3F
6159: 39           RTS
615a: bd 61 61     JSR    $6161
615d: bd 7a 48     JSR    $7A48
6160: 39           RTS
6161: b6 47 03     LDA    $4703
6164: b0 47 03     SUBA   $4703
6167: 26 08        BNE    $016C
6169: b7 46 85     STA    $4685
616c: 86 80        LDA    #$80
616e: b7 46 85     STA    $4685
6171: 86 80        LDA    #$80
6173: 97 83        STA    <$83
6175: 8e 49 00     LDX    #$4900
6178: ce 50 f0     LDU    #$50F0
617b: c6 1c        LDB    #$1C
617d: ef 84        STU    ,X
617f: e7 02        STB    $2,X
6181: 33 c8 20     LEAU   $20,U
6184: cb 04        ADDB   #$04
6186: 30 88 19     LEAX   $19,X
6189: 8c 49 4b     CMPX   #$494B
618c: 25 ef        BCS    $0178
618e: 8e 49 4b     LDX    #$494B
6191: ce 51 60     LDU    #$5160
6194: c6 2c        LDB    #$2C
6196: ef 84        STU    ,X
6198: e7 02        STB    $2,X
619a: 6f 03        CLR    $3,X
619c: 33 48        LEAU   $8,U
619e: cb 01        ADDB   #$01
61a0: 30 06        LEAX   $6,X
61a2: 8c 49 6f     CMPX   #$496F
61a5: 25 ef        BCS    $0191
61a7: bd 8e d6     JSR    $8ED6
61aa: c6 04        LDB    #$04
61ac: bd cc cc     JSR    $CCCC
61af: c6 07        LDB    #$07
61b1: bd cc cc     JSR    $CCCC
61b4: 39           RTS
61b5: cc 00 00     LDD    #$0000
61b8: fd 50 1e     STD    $501E
61bb: cc 40 00     LDD    #$4000
61be: fd 50 20     STD    $5020
61c1: cc e0 00     LDD    #$E000
61c4: fd 50 26     STD    $5026
61c7: cc 00 80     LDD    #$0080
61ca: fd 50 6a     STD    $506A
61cd: cc 00 40     LDD    #$0040
61d0: fd 50 68     STD    $5068
61d3: cc 02 1f     LDD    #$021F
61d6: fd 50 22     STD    $5022
61d9: cc 3f f7     LDD    #$3FF7
61dc: fd 50 24     STD    $5024
61df: cc 40 00     LDD    #$4000
61e2: fd 50 6c     STD    $506C
61e5: cc 02 00     LDD    #$0200
61e8: fd 47 06     STD    $4706
61eb: 39           RTS
61ec: 86 80        LDA    #$80
61ee: 97 83        STA    <$83
61f0: 8e 5c 60     LDX    #$5C60
61f3: b6 47 03     LDA    $4703
61f6: f6 47 03     LDB    $4703
61f9: ed 84        STD    ,X
61fb: 3d           MUL
61fc: b6 47 03     LDA    $4703
61ff: ed 02        STD    $2,X
6201: 3d           MUL
6202: b6 47 03     LDA    $4703
