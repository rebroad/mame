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
612c: 25 f6        BCS    $6124
612e: 39           RTS
612f: cc 80 40     LDD    #$8040
6132: ed a1        STD    ,Y++
6134: cc 20 20     LDD    #$2020
6137: ed a1        STD    ,Y++
6139: ed a0        STD    ,Y+
613b: 1f 20        TFR    Y,D
613d: 90 3f        SUBA   <$3F
613f: 80 14        SUBA   #$14
6141: 25 12        BCS    $6155
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
6167: 26 08        BNE    $6171
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
618c: 25 ef        BCS    $617D
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
61a5: 25 ef        BCS    $6196
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
620c: 25 e5        BCS    $61F3
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
622a: 25 e6        BCS    $6212
622c: 39           RTS
622d: d6 7d        LDB    <$7D
622f: c1 a0        CMPB   #$A0
6231: 2e 0b        BGT    $623E
6233: 86 08        LDA    #$08
6235: 91 41        CMPA   <$41
6237: 27 03        BEQ    $623C
6239: 4a           DECA
623a: 97 41        STA    <$41
623c: 7e 623c     JMP    $623c
