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
c4c0: e6 89 00 03  LDB    $0003,X
c4c4: 8e 45 00     LDX    #$4500
c4c7: 3a           ABX
c4c8: ce 45 00     LDU    #$4500
c4cb: f6 c7 b7     LDB    $C7B7
c4ce: f7 4b 02     STB    $4B02
c4d1: e6 c0        LDB    ,U+
c4d3: e7 80        STB    ,X+
c4d5: 7a 4b 02     DEC    $4B02
c4d8: 26 f7        BNE    $C4D1
c4da: b6 45 98     LDA    $4598
c4dd: 84 01        ANDA   #$01
c4df: 27 03        BEQ    $C4E4
c4e1: bd c5 f2     JSR    $C5F2
c4e4: cc 00 00     LDD    #$0000
c4e7: fd 45 98     STD    $4598
c4ea: 39           RTS
c4eb: d6 43        LDB    <$43
c4ed: c4 0f        ANDB   #$0F
c4ef: 26 28        BNE    $C519
c4f1: f6 48 7f     LDB    $487F
c4f4: c1 d0        CMPB   #$D0
c4f6: 24 21        BCC    $C519
c4f8: c1 30        CMPB   #$30
c4fa: 23 1d        BLS    $C519
c4fc: 5d           TSTB
c4fd: 2b 0d        BMI    $C50C
c4ff: f6 4a f6     LDB    $4AF6
c502: 5a           DECB
c503: 2a 02        BPL    $C507
c505: c6 0b        LDB    #$0B
c507: f7 4a f6     STB    $4AF6
c50a: 20 0d        BRA    $C519
c50c: f6 4a f6     LDB    $4AF6
c50f: 5c           INCB
c510: c1 0b        CMPB   #$0B
c512: 23 02        BLS    $C516
c514: c6 00        LDB    #$00
c516: f7 4a f6     STB    $4AF6
c519: 8e c7 97     LDX    #$C797
c51c: b6 4a f6     LDA    $4AF6
c51f: e6 86        LDB    A,X
c521: f7 4a fc     STB    $4AFC
c524: 54           LSRB
c525: 54           LSRB
c526: 54           LSRB
c527: c4 03        ANDB   #$03
c529: 8e c7 37     LDX    #$C737
c52c: a6 85        LDA    B,X
c52e: b7 4a fa     STA    $4AFA
c531: d6 ac        LDB    <$AC
c533: c4 80        ANDB   #$80
c535: 27 6c        BEQ    $C5A3
c537: f6 4a f5     LDB    $4AF5
c53a: 5c           INCB
c53b: f1 4a fa     CMPB   $4AFA
c53e: 23 02        BLS    $C542
c540: c6 00        LDB    #$00
c542: 7e c542     JMP    $c542
