c24e: 81 03        CMPA   #$03
c250: 24 61        BCC    $0065
c252: 81 02        CMPA   #$02
c254: 25 29        BCS    $0031
c256: 8e c7 b7     LDX    #$C7B7
c259: e6 86        LDB    A,X
c25b: c0 02        SUBB   #$02
c25d: f7 4a fb     STB    $4AFB
c260: c6 45        LDB    #$45
c262: f7 4a fa     STB    $4AFA
c265: 8e c7 b6     LDX    #$C7B6
c268: e6 86        LDB    A,X
c26a: 8e c7 07     LDX    #$C707
c26d: 3a           ABX
c26e: 1f 13        TFR    X,U
c270: 8e 45 00     LDX    #$4500
c273: 3a           ABX
c274: e6 c0        LDB    ,U+
c276: e7 80        STB    ,X+
c278: bc 4a fa     CMPX   $4AFA
c27b: 25 f7        BCS    $0026
c27d: 20 34        BRA    $0065
c27f: 1f 89        TFR    A,B
c281: 4d           TSTA
c282: 26 17        BNE    $004D
c284: 96 27        LDA    <$27
c286: b7 4a fa     STA    $4AFA
c289: 96 24        LDA    <$24
c28b: b7 4a fb     STA    $4AFB
c28e: 86 00        LDA    #$00
c290: b7 4a fc     STA    $4AFC
c293: 8e 45 00     LDX    #$4500
c296: bd c6 f4     JSR    $C6F4
c299: 20 16        BRA    $0063
c29b: 8e 45 08     LDX    #$4508
c29e: ce cc 98     LDU    #$CC98
c2a1: 86 0b        LDA    #$0B
c2a3: bd c6 f9     JSR    $C6F9
c2a6: 8e 45 20     LDX    #$4520
c2a9: ce cc 7a     LDU    #$CC7A
c2ac: 86 08        LDA    #$08
c2ae: bd c6 f9     JSR    $C6F9
c2b1: 1f 98        TFR    B,A
c2b3: bd c2 c3     JSR    $C2C3
c2b6: 27 0a        BEQ    $0074
c2b8: e7 01        STB    $1,X
c2ba: 54           LSRB
c2bb: 54           LSRB
c2bc: 54           LSRB
c2bd: 54           LSRB
c2be: e7 84        STB    ,X
c2c0: c6 ff        LDB    #$FF
c2c2: 39           RTS
c2c3: 32 7d        LEAS   -$3,S
c2c5: 8e c7 b7     LDX    #$C7B7
c2c8: e6 86        LDB    A,X
c2ca: 8e c7 b6     LDX    #$C7B6
c2cd: e0 86        SUBB   A,X
c2cf: c0 02        SUBB   #$02
c2d1: e7 e4        STB    ,S
c2d3: e6 86        LDB    A,X
c2d5: 8e 45 00     LDX    #$4500
c2d8: 3a           ABX
c2d9: c6 00        LDB    #$00
c2db: e7 61        STB    $1,S
c2dd: 1a 01        ORCC   #$01
c2df: e6 80        LDB    ,X+
c2e1: c4 0f        ANDB   #$0F
c2e3: e9 61        ADCB   $1,S
c2e5: e7 61        STB    $1,S
c2e7: 6a e4        DEC    ,S
c2e9: 26 f4        BNE    $0091
c2eb: c9 00        ADCB   #$00
c2ed: e7 61        STB    $1,S
c2ef: e6 84        LDB    ,X
c2f1: 58           ASLB
c2f2: 58           ASLB
c2f3: 58           ASLB
c2f4: 58           ASLB
c2f5: e7 62        STB    $2,S
c2f7: e6 01        LDB    $1,X
c2f9: c4 0f        ANDB   #$0F
c2fb: eb 62        ADDB   $2,S
c2fd: e7 62        STB    $2,S
c2ff: e6 61        LDB    $1,S
c301: e1 62        CMPB   $2,S
c303: 32 63        LEAS   $3,S
c305: 39           RTS
c306: 8e 45 00     LDX    #$4500
c309: ce 4c 00     LDU    #$4C00
c30c: ec 81        LDD    ,X++
c30e: ed c1        STD    ,U++
c310: 8c 46 00     CMPX   #$4600
c313: 25 f7        BCS    $00BE
c315: 86 ff        LDA    #$FF
c317: b7 46 87     STA    $4687
c31a: 8e 01 00     LDX    #$0100
c31d: b7 46 40     STA    $4640
c320: 30 1f        LEAX   -$1,X
c322: 26 f9        BNE    $00CF
c324: 86 00        LDA    #$00
c326: b7 46 87     STA    $4687
c329: 8e a0 00     LDX    #$A000
c32c: b7 46 40     STA    $4640
c32f: 30 1f        LEAX   -$1,X
c331: 26 f9        BNE    $00DE
c333: 8e 45 00     LDX    #$4500
c336: 10 8e 4c 00  LDY    #$4C00
c33a: ee 84        LDU    ,X
c33c: ec a4        LDD    ,Y
c33e: ef a1        STU    ,Y++
c340: ed 81        STD    ,X++
c342: 8c 46 00     CMPX   #$4600
c345: 25 f3        BCS    $00EC
c347: 86 03        LDA    #$03
c349: bd c2 c3     JSR    $C2C3
c34c: 27 2e        BEQ    $012E
c34e: 86 00        LDA    #$00
c350: bd c2 c3     JSR    $C2C3
c353: 27 17        BEQ    $011E
c355: bd c3 ee     JSR    $C3EE
c358: 86 03        LDA    #$03
c35a: bd c3 ee     JSR    $C3EE
c35d: bd c2 c3     JSR    $C2C3
c360: 27 1a        BEQ    $012E
c362: 86 00        LDA    #$00
c364: bd c2 c3     JSR    $C2C3
c367: 27 03        BEQ    $011E
c369: bd c2 4e     JSR    $C24E
c36c: 8e c7 b6     LDX    #$C7B6
c36f: e6 89 00 03  LDB    $0003,X
c373: 8e 45 00     LDX    #$4500
c376: 3a           ABX
c377: ce 45 00     LDU    #$4500
c37a: 20 3b        BRA    $0169
c37c: 86 00        LDA    #$00
c37e: bd c2 c3     JSR    $C2C3
c381: 26 24        BNE    $0159
c383: b6 45 96     LDA    $4596
c386: 84 0f        ANDA   #$0F
c388: b7 4a fa     STA    $4AFA
c38b: b6 45 06     LDA    $4506
c38e: 84 0f        ANDA   #$0F
c390: b1 4a fa     CMPA   $4AFA
c393: 26 10        BNE    $0157
c395: b6 45 97     LDA    $4597
c398: 84 0f        ANDA   #$0F
c39a: b7 4a fa     STA    $4AFA
c39d: b6 45 07     LDA    $4507
c3a0: 84 0f        ANDA   #$0F
c3a2: b1 4a fa     CMPA   $4AFA
c3a5: 27 1f        BEQ    $0178
c3a7: 8e c7 b6     LDX    #$C7B6
c3aa: e6 89 00 03  LDB    $0003,X
c3ae: 8e 45 00     LDX    #$4500
c3b1: 3a           ABX
c3b2: 1f 13        TFR    X,U
c3b4: 8e 45 00     LDX    #$4500
c3b7: f6 c7 b7     LDB    $C7B7
c3ba: f7 4b 02     STB    $4B02
c3bd: e6 c0        LDB    ,U+
c3bf: e7 80        STB    ,X+
c3c1: 7a 4b 02     DEC    $4B02
c3c4: 26 f7        BNE    $016F
c3c6: 86 02        LDA    #$02
c3c8: bd c2 c3     JSR    $C2C3
c3cb: 27 0b        BEQ    $018A
c3cd: bd c3 ee     JSR    $C3EE
c3d0: bd c2 c3     JSR    $C2C3
c3d3: 27 03        BEQ    $018A
c3d5: bd c2 4e     JSR    $C24E
c3d8: 4a           DECA
c3d9: 26 ed        BNE    $017A
c3db: 8e 45 5c     LDX    #$455C
c3de: bd c6 d4     JSR    $C6D4
c3e1: fc 4a fa     LDD    $4AFA
c3e4: fd 4b 04     STD    $4B04
c3e7: fc 4a fc     LDD    $4AFC
c3ea: fd 4b 06     STD    $4B06
c3ed: 39           RTS
c3ee: 8e c7 b7     LDX    #$C7B7
c3f1: e6 86        LDB    A,X
c3f3: 8e 45 00     LDX    #$4500
c3f6: 3a           ABX
c3f7: bf 4a fa     STX    $4AFA
c3fa: 8e c7 b6     LDX    #$C7B6
c3fd: e6 86        LDB    A,X
c3ff: 8e 4c 00     LDX    #$4C00
c402: 3a           ABX
c403: 1f 13        TFR    X,U
c405: 8e 45 00     LDX    #$4500
c408: 3a           ABX
c409: e6 c0        LDB    ,U+
c40b: e7 80        STB    ,X+
c40d: bc 4a fa     CMPX   $4AFA
c410: 25 f7        BCS    $01BB
c412: 39           RTS
c413: bd c2 c3     JSR    $C2C3
c416: 27 37        BEQ    $0201
c418: b7 4a fa     STA    $4AFA
c41b: 8e 45 00     LDX    #$4500
c41e: ce 4c 00     LDU    #$4C00
c421: ec 81        LDD    ,X++
c423: ed c1        STD    ,U++
c425: 8c 46 00     CMPX   #$4600
c428: 25 f7        BCS    $01D3
c42a: bd c6 b8     JSR    $C6B8
c42d: 8e 45 00     LDX    #$4500
c430: 10 8e 4c 00  LDY    #$4C00
c434: ee 84        LDU    ,X
c436: ec a4        LDD    ,Y
c438: ef a1        STU    ,Y++
c43a: ed 81        STD    ,X++
c43c: 8c 46 00     CMPX   #$4600
c43f: 25 f3        BCS    $01E6
c441: b6 4a fa     LDA    $4AFA
c444: bd c3 ee     JSR    $C3EE
c447: bd c2 c3     JSR    $C2C3
c44a: 27 03        BEQ    $0201
c44c: bd c2 81     JSR    $C200
