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
c2e9: 26 f4        BNE    $C2DF
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
c410: 25 f7        BCS    $C409
c412: 39           RTS
c413: bd c2 c3     JSR    $C2C3
c416: 27 37        BEQ    $C44F
c418: b7 4a fa     STA    $4AFA
c41b: 8e 45 00     LDX    #$4500
c41e: ce 4c 00     LDU    #$4C00
c421: ec 81        LDD    ,X++
c423: ed c1        STD    ,U++
c425: 8c 46 00     CMPX   #$4600
c428: 25 f7        BCS    $C421
c42a: bd c6 b8     JSR    $C6B8
c42d: 8e 45 00     LDX    #$4500
c430: 10 8e 4c 00  LDY    #$4C00
c434: ee 84        LDU    ,X
c436: ec a4        LDD    ,Y
c438: ef a1        STU    ,Y++
c43a: ed 81        STD    ,X++
c43c: 8c 46 00     CMPX   #$4600
c43f: 25 f3        BCS    $C434
c441: b6 4a fa     LDA    $4AFA
c444: bd c3 ee     JSR    $C3EE
c447: bd c2 c3     JSR    $C2C3
c44a: 27 03        BEQ    $C44F
c44c: bd c2 4e     JSR    $C24E
c44f: 39           RTS
c450: 86 65        LDA    #$65
c452: bd d8 df     JSR    $D8DF
c455: 4c           INCA
c456: 81 74        CMPA   #$74
c458: 25 f8        BCS    $C452
c45a: 86 d4        LDA    #$D4
c45c: bd d8 df     JSR    $D8DF
c45f: cc 62 80     LDD    #$6280
c462: ed a1        STD    ,Y++
c464: 86 0b        LDA    #$0B
c466: b7 4a fe     STA    $4AFE
c469: b6 4a fe     LDA    $4AFE
c46c: bd c5 a4     JSR    $C5A4
c46f: 7a 4a fe     DEC    $4AFE
c472: 2a f5        BPL    $C469
c474: bd c6 90     JSR    $C690
c477: b6 45 98     LDA    $4598
c47a: 84 0f        ANDA   #$0F
c47c: 27 6c        BEQ    $C4EA
c47e: c6 d5        LDB    #$D5
c480: bd e7 c7     JSR    $E7C7
c483: 96 ac        LDA    <$AC
c485: 84 40        ANDA   #$40
c487: 27 61        BEQ    $C4EA
c489: b6 45 98     LDA    $4598
c48c: 84 08        ANDA   #$08
c48e: 27 08        BEQ    $C498
c490: 86 01        LDA    #$01
c492: bd c2 4e     JSR    $C24E
c495: bd cc 18     JSR    $CC18
c498: b6 45 98     LDA    $4598
c49b: 84 04        ANDA   #$04
c49d: 27 12        BEQ    $C4B1
c49f: 8e 45 4e     LDX    #$454E
c4a2: cc 00 00     LDD    #$0000
c4a5: ed 81        STD    ,X++
c4a7: 8c 45 8e     CMPX   #$458E
c4aa: 25 f9        BCS    $C4A5
c4ac: 86 02        LDA    #$02
c4ae: bd c2 b3     JSR    $C2B3
c4b1: b6 45 98     LDA    $4598
c4b4: 84 02        ANDA   #$02
c4b6: 27 22        BEQ    $C4DA
c4b8: 86 00        LDA    #$00
c4ba: bd c2 4e     JSR    $C24E
c4bd: 8e c7 b6     LDX    #$C7B6
c4c0: e6 89 00 00  LDB    $0000,X
