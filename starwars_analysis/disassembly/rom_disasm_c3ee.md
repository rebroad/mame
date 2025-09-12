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
c410: 25 f7        BCS    $001B
c412: 39           RTS
c413: bd c2 c3     JSR    $C2C3
c416: 27 37        BEQ    $0061
c418: b7 4a fa     STA    $4AFA
c41b: 8e 45 00     LDX    #$4500
c41e: ce 4c 00     LDU    #$4C00
c421: ec 81        LDD    ,X++
c423: ed c1        STD    ,U++
c425: 8c 46 00     CMPX   #$4600
c428: 25 f7        BCS    $0033
c42a: bd c6 b8     JSR    $C6B8
c42d: 8e 45 00     LDX    #$4500
c430: 10 8e 4c 00  LDY    #$4C00
c434: ee 84        LDU    ,X
c436: ec a4        LDD    ,Y
c438: ef a1        STU    ,Y++
c43a: ed 81        STD    ,X++
c43c: 8c 46 00     CMPX   #$4600
c43f: 25 f3        BCS    $0046
c441: b6 4a fa     LDA    $4AFA
c444: bd c3 ee     JSR    $C3EE
c447: bd c2 c3     JSR    $C2C3
c44a: 27 03        BEQ    $0061
c44c: bd c2 4e     JSR    $C24E
c44f: 39           RTS
c450: 86 65        LDA    #$65
c452: bd d8 df     JSR    $D8DF
c455: 4c           INCA
c456: 81 74        CMPA   #$74
c458: 25 f8        BCS    $0064
c45a: 86 d4        LDA    #$D4
c45c: bd d8 df     JSR    $D8DF
c45f: cc 62 80     LDD    #$6280
c462: ed a1        STD    ,Y++
c464: 86 0b        LDA    #$0B
c466: b7 4a fe     STA    $4AFE
c469: b6 4a fe     LDA    $4AFE
c46c: bd c5 a4     JSR    $C5A4
c46f: 7a 4a fe     DEC    $4AFE
c472: 2a f5        BPL    $007B
c474: bd c6 90     JSR    $C690
c477: b6 45 98     LDA    $4598
c47a: 84 0f        ANDA   #$0F
c47c: 27 6c        BEQ    $00FC
c47e: c6 d5        LDB    #$D5
c480: bd e7 c7     JSR    $E7C7
c483: 96 ac        LDA    <$AC
c485: 84 40        ANDA   #$40
c487: 27 61        BEQ    $00FC
c489: b6 45 98     LDA    $4598
c48c: 84 08        ANDA   #$08
c48e: 27 08        BEQ    $00AA
c490: 86 01        LDA    #$01
c492: bd c2 4e     JSR    $C24E
c495: bd cc 18     JSR    $CC18
c498: b6 45 98     LDA    $4598
c49b: 84 04        ANDA   #$04
c49d: 27 12        BEQ    $00C3
c49f: 8e 45 4e     LDX    #$454E
c4a2: cc 00 00     LDD    #$0000
c4a5: ed 81        STD    ,X++
c4a7: 8c 45 8e     CMPX   #$458E
c4aa: 25 f9        BCS    $00B7
c4ac: 86 02        LDA    #$02
c4ae: bd c2 b3     JSR    $C2B3
c4b1: b6 45 98     LDA    $4598
c4b4: 84 02        ANDA   #$02
c4b6: 27 22        BEQ    $00EC
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
c4d8: 26 f7        BNE    $00E3
c4da: b6 45 98     LDA    $4598
c4dd: 84 01        ANDA   #$01
c4df: 27 03        BEQ    $00F6
c4e1: bd c5 f2     JSR    $C5F2
c4e4: cc 00 00     LDD    #$0000
c4e7: fd 45 98     STD    $4598
c4ea: 39           RTS
c4eb: d6 43        LDB    <$43
c4ed: c4 0f        ANDB   #$0F
c4ef: 26 28        BNE    $012B
c4f1: f6 48 7f     LDB    $487F
c4f4: c1 d0        CMPB   #$D0
c4f6: 24 21        BCC    $012B
c4f8: c1 30        CMPB   #$30
c4fa: 23 1d        BLS    $012B
c4fc: 5d           TSTB
c4fd: 2b 0d        BMI    $011E
c4ff: f6 4a f6     LDB    $4AF6
c502: 5a           DECB
c503: 2a 02        BPL    $0119
c505: c6 0b        LDB    #$0B
c507: f7 4a f6     STB    $4AF6
c50a: 20 0d        BRA    $012B
c50c: f6 4a f6     LDB    $4AF6
c50f: 5c           INCB
c510: c1 0b        CMPB   #$0B
c512: 23 02        BLS    $0128
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
c535: 27 6c        BEQ    $01B5
c537: f6 4a f5     LDB    $4AF5
c53a: 5c           INCB
c53b: f1 4a fa     CMPB   $4AFA
c53e: 23 02        BLS    $0154
c540: c6 00        LDB    #$00
c542: b7 4a f5     STA    $4AF5
c545: b6 4a fc     LDA    $4AFC
c548: 49           ROLA
c549: 49           ROLA
c54a: 49           ROLA
c54b: 49           ROLA
c54c: 84 07        ANDA   #$07
c54e: 4a           DECA
c54f: 2b 06        BMI    $0169
c551: 58           ASLB
c552: 78 4a fa     ASL    $4AFA
c555: 20 f7        BRA    $0160
c557: b6 4a fc     LDA    $4AFC
c55a: 84 07        ANDA   #$07
c55c: 48           ASLA
c55d: 8e 45 90     LDX    #$4590
c560: 30 86        LEAX   A,X
c562: a6 84        LDA    ,X
c564: 48           ASLA
c565: 48           ASLA
c566: 48           ASLA
c567: 48           ASLA
c568: b7 4a fb     STA    $4AFB
c56b: a6 01        LDA    $1,X
c56d: 84 0f        ANDA   #$0F
c56f: bb 4a fb     ADDA   $4AFB
c572: b7 4a fb     STA    $4AFB
c575: f8 4a fb     EORB   $4AFB
c578: f4 4a fa     ANDB   $4AFA
c57b: f8 4a fb     EORB   $4AFB
c57e: e7 01        STB    $1,X
c580: 54           LSRB
c581: 54           LSRB
c582: 54           LSRB
c583: 54           LSRB
c584: e7 84        STB    ,X
c586: 86 03        LDA    #$03
c588: bd c2 b3     JSR    $C2B3
c58b: 8e 45 00     LDX    #$4500
c58e: ce 4c 00     LDU    #$4C00
c591: ec 81        LDD    ,X++
c593: ed c1        STD    ,U++
c595: 8c 45 ff     CMPX   #$45FF
c598: 25 f7        BCS    $01A3
c59a: bd c3 a7     JSR    $C3A7
c59d: b6 4a f6     LDA    $4AF6
c5a0: bd c5 a4     JSR    $C5A4
c5a3: 39           RTS
c5a4: 8e c7 97     LDX    #$C797
c5a7: e6 86        LDB    A,X
c5a9: f7 4a fa     STB    $4AFA
c5ac: c4 07        ANDB   #$07
c5ae: 8e 45 90     LDX    #$4590
c5b1: 58           ASLB
c5b2: 3a           ABX
c5b3: f6 4a fa     LDB    $4AFA
c5b6: 54           LSRB
c5b7: 54           LSRB
c5b8: 54           LSRB
c5b9: f7 4a fa     STB    $4AFA
c5bc: c4 03        ANDB   #$03
c5be: ce c7 37     LDU    #$C737
c5c1: 33 c5        LEAU   B,U
c5c3: f6 4a fa     LDB    $4AFA
c5c6: 54           LSRB
c5c7: 54           LSRB
c5c8: f7 4a fa     STB    $4AFA
c5cb: e6 84        LDB    ,X
c5cd: 58           ASLB
c5ce: 58           ASLB
c5cf: 58           ASLB
c5d0: 58           ASLB
c5d1: f7 4a fb     STB    $4AFB
c5d4: e6 01        LDB    $1,X
c5d6: c4 0f        ANDB   #$0F
c5d8: fb 4a fb     ADDB   $4AFB
c5db: 7a 4a fa     DEC    $4AFA
c5de: 2b 03        BMI    $01F5
c5e0: 54           LSRB
c5e1: 20 f8        BRA    $01ED
c5e3: e4 c4        ANDB   ,U
c5e5: f7 4a f5     STB    $4AF5
c5e8: 8e c7 f1     LDX    #$C7F1
c5eb: 30 86        LEAX   A,X
c5ed: eb 8e        ADDB   $0,X
