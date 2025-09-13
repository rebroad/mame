c306: 8e 45 00     LDX    #$4500
c309: ce 4c 00     LDU    #$4C00
c30c: ec 81        LDD    ,X++
c30e: ed c1        STD    ,U++
c310: 8c 46 00     CMPX   #$4600
c313: 25 f7        BCS    $C30C
c315: 86 ff        LDA    #$FF
c317: b7 46 87     STA    $4687
c31a: 8e 01 00     LDX    #$0100
c31d: b7 46 40     STA    $4640
c320: 30 1f        LEAX   -$1,X
c322: 26 f9        BNE    $C31D
c324: 86 00        LDA    #$00
c326: b7 46 87     STA    $4687
c329: 8e a0 00     LDX    #$A000
c32c: b7 46 40     STA    $4640
c32f: 30 1f        LEAX   -$1,X
c331: 26 f9        BNE    $C32C
c333: 8e 45 00     LDX    #$4500
c336: 10 8e 4c 00  LDY    #$4C00
c33a: ee 84        LDU    ,X
c33c: ec a4        LDD    ,Y
c33e: ef a1        STU    ,Y++
c340: ed 81        STD    ,X++
c342: 8c 46 00     CMPX   #$4600
c345: 25 f3        BCS    $C33A
c347: 86 03        LDA    #$03
c349: bd c2 c3     JSR    $C2C3
c34c: 27 2e        BEQ    $C37C
c34e: 86 00        LDA    #$00
c350: bd c2 c3     JSR    $C2C3
c353: 27 17        BEQ    $C36C
c355: bd c3 ee     JSR    $C3EE
c358: 86 03        LDA    #$03
c35a: bd c3 ee     JSR    $C3EE
c35d: bd c2 c3     JSR    $C2C3
c360: 27 1a        BEQ    $C37C
c362: 86 00        LDA    #$00
c364: bd c2 c3     JSR    $C2C3
c367: 27 03        BEQ    $C36C
c369: bd c2 4e     JSR    $C24E
c36c: 8e c7 b6     LDX    #$C7B6
c36f: e6 89 00 03  LDB    $0003,X
c373: 8e 45 00     LDX    #$4500
c376: 3a           ABX
c377: ce 45 00     LDU    #$4500
c37a: 20 3b        BRA    $C3B7
c37c: 86 00        LDA    #$00
c37e: bd c2 c3     JSR    $C2C3
c381: 26 24        BNE    $C3A7
c383: b6 45 96     LDA    $4596
c386: 84 0f        ANDA   #$0F
c388: b7 4a fa     STA    $4AFA
c38b: b6 45 06     LDA    $4506
c38e: 84 0f        ANDA   #$0F
c390: b1 4a fa     CMPA   $4AFA
c393: 26 10        BNE    $C3A5
c395: b6 45 97     LDA    $4597
c398: 84 0f        ANDA   #$0F
c39a: b7 4a fa     STA    $4AFA
c39d: b6 45 07     LDA    $4507
c3a0: 84 0f        ANDA   #$0F
c3a2: b1 4a fa     CMPA   $4AFA
c3a5: 27 1f        BEQ    $C3C6
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
c3c4: 26 f7        BNE    $C3BD
c3c6: 86 02        LDA    #$02
c3c8: bd c2 c3     JSR    $C2C3
c3cb: 27 0b        BEQ    $C3D8
c3cd: bd c3 ee     JSR    $C3EE
c3d0: bd c2 c3     JSR    $C2C3
c3d3: 27 03        BEQ    $C3D8
c3d5: bd c2 4e     JSR    $C24E
c3d8: 4a           DECA
c3d9: 26 ed        BNE    $C3C8
c3db: 8e 45 5c     LDX    #$455C
c3de: bd c6 d4     JSR    $C6D4
c3e1: fc 4a fa     LDD    $4AFA
c3e4: fd 4b 04     STD    $4B04
c3e7: fc 4a fc     LDD    $4AFC
c3ea: fd 4b 06     STD    $4B06
c3ed: 39           RTS
