60be: 0c 43        INC    <$43
60c0: 26 08        BNE    $000C
60c2: 0c 42        INC    <$42
60c4: 26 04        BNE    $000C
60c6: 86 80        LDA    #$80
60c8: 97 42        STA    <$42
60ca: b6 48 14     LDA    $4814
60cd: 26 05        BNE    $0016
60cf: b7 4b 31     STA    $4B31
60d2: 20 20        BRA    $0036
60d4: b6 4b 31     LDA    $4B31
60d7: 26 0b        BNE    $0026
60d9: bd bd 12     JSR    $BD12
60dc: b6 48 14     LDA    $4814
60df: b7 4b 31     STA    $4B31
60e2: 20 10        BRA    $0036
60e4: b6 4b 31     LDA    $4B31
60e7: b1 48 14     CMPA   $4814
60ea: 24 08        BCC    $0036
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
612c: 25 f6        BCS    $0066
612e: 39           RTS
612f: cc 80 40     LDD    #$8040
6132: ed a1        STD    ,Y++
6134: cc 20 20     LDD    #$2020
6137: ed a1        STD    ,Y++
6139: ed a0        STD    ,Y+
613b: 1f 20        TFR    Y,D
613d: 90 3f        SUBA   <$3F
613f: 80 14        SUBA   #$14
6141: 25 12        BCS    $0097
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
6167: 26 08        BNE    $00B3
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
618c: 25 ef        BCS    $00BF
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
61a5: 25 ef        BCS    $00D8
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
6205: ed 04        STD    $4,X
6207: 30 08        LEAX   $8,X
6209: 8c 5d f0     CMPX   #$5DF0
620c: 25 e5        BCS    $0135
620e: 39           RTS
620f: 8e 5c 60     LDX    #$5C60
6212: b6 47 03     LDA    $4703
6215: f6 47 03     LDB    $4703
6218: ed 84        STD    ,X
621a: 3d           MUL
621b: b6 47 03     LDA    $4703
621e: ed 02        STD    $2,X
6220: cc 00 00     LDD    #$0000
6223: ed 04        STD    $4,X
6225: 30 08        LEAX   $8,X
6227: 8c 5d f0     CMPX   #$5DF0
622a: 25 e6        BCS    $0154
622c: 39           RTS
622d: d6 7d        LDB    <$7D
622f: c1 a0        CMPB   #$A0
6231: 2e 0b        BGT    $0180
6233: 86 08        LDA    #$08
6235: 91 41        CMPA   <$41
6237: 27 03        BEQ    $017E
6239: 4a           DECA
623a: 97 41        STA    <$41
623c: 20 0d        BRA    $018D
623e: c1 60        CMPB   #$60
6240: 2d 09        BLT    $018D
6242: 86 0c        LDA    #$0C
6244: 91 41        CMPA   <$41
6246: 27 03        BEQ    $018D
6248: 4a           DECA
6249: 97 41        STA    <$41
624b: b6 45 91     LDA    $4591
624e: 84 03        ANDA   #$03
6250: 26 05        BNE    $0199
6252: 86 01        LDA    #$01
6254: b7 48 14     STA    $4814
6257: b6 48 14     LDA    $4814
625a: 27 0d        BEQ    $01AB
625c: 96 ac        LDA    <$AC
625e: 84 f0        ANDA   #$F0
6260: 27 07        BEQ    $01AB
6262: 86 19        LDA    #$19
6264: 97 41        STA    <$41
6266: 7a 48 14     DEC    $4814
6269: b6 48 1e     LDA    $481E
626c: 84 10        ANDA   #$10
626e: 26 04        BNE    $01B6
6270: 86 01        LDA    #$01
6272: 97 41        STA    <$41
6274: 39           RTS
6275: 1a 10        ORCC   #$10
6277: 8e 45 34     LDX    #$4534
627a: bd c6 d4     JSR    $C6D4
627d: 8e 4a fa     LDX    #$4AFA
6280: bd 62 d5     JSR    $62D5
6283: b7 48 66     STA    $4866
6286: 8e 4a fb     LDX    #$4AFB
6289: bd 62 d5     JSR    $62D5
628c: b7 48 68     STA    $4868
628f: 8e 4a fc     LDX    #$4AFC
6292: bd 62 d5     JSR    $62D5
6295: b7 48 6f     STA    $486F
6298: 8e 4a fd     LDX    #$4AFD
629b: bd 62 d5     JSR    $62D5
629e: b7 48 71     STA    $4871
62a1: 1c ef        ANDCC  #$EF
62a3: 86 0b        LDA    #$0B
62a5: 97 41        STA    <$41
62a7: 86 ff        LDA    #$FF
62a9: b7 4b 34     STA    $4B34
62ac: bd 61 b5     JSR    $61B5
62af: bd 61 5a     JSR    $615A
62b2: bd 61 1e     JSR    $611E
62b5: bd 61 ec     JSR    $61EC
62b8: bd d9 1a     JSR    $D91A
62bb: 86 00        LDA    #$00
62bd: 97 0c        STA    <$00
