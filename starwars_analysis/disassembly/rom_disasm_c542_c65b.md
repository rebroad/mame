c542: b7 4a f5  STA    $4AF5
c545: b6 4a fc  LDA    $4AFC
c548: 49        ROLA
c549: 49        ROLA
c54a: 49        ROLA
c54b: 49        ROLA
c54c: 84 07     ANDA   #$07
c54e: 4a        DECA
c54f: 2b 06     BMI    $C557
c551: 58        ASLB
c552: 78 4a fa  ASL    $4AFA
c555: 20 f7     BRA    $C54E
c557: b6 4a fc  LDA    $4AFC
c55a: 84 07     ANDA   #$07
c55c: 48        ASLA
c55d: 8e 45 90  LDX    #$4590
c560: 30 86     LEAX   A,X
c562: a6 84     LDA    ,X
c564: 48        ASLA
c565: 48        ASLA
c566: 48        ASLA
c567: 48        ASLA
c568: b7 4a fb  STA    $4AFB
c56b: a6 01     LDA    $1,X
c56d: 84 0f     ANDA   #$0F
c56f: bb 4a fb  ADDA   $4AFB
c572: b7 4a fb  STA    $4AFB
c575: f8 4a fb  EORB   $4AFB
c578: f4 4a fa  ANDB   $4AFA
c57b: f8 4a fb  EORB   $4AFB
c57e: e7 01     STB    $1,X
c580: 54        LSRB
c581: 54        LSRB
c582: 54        LSRB
c583: 54        LSRB
c584: e7 84     STB    ,X
c586: 86 03     LDA    #$03
c588: bd c2 b3  JSR    $C2B3
c58b: 8e 45 00  LDX    #$4500
c58e: ce 4c 00  LDU    #$4C00
c591: ec 81     LDD    ,X++
c593: ed c1     STD    ,U++
c595: 8c 45 ff  CMPX   #$45FF
c598: 25 f7     BCS    $C591
c59a: bd c3 a7  JSR    $C3A7
c59d: b6 4a f6  LDA    $4AF6
c5a0: bd c5 a4  JSR    $C5A4
c5a3: 39        RTS
c5a4: 8e c7 97  LDX    #$C797
c5a7: e6 86     LDB    A,X
c5a9: f7 4a fa  STB    $4AFA
c5ac: c4 07     ANDB   #$07
c5ae: 8e 45 90  LDX    #$4590
c5b1: 58        ASLB
c5b2: 3a        ABX
c5b3: f6 4a fa  LDB    $4AFA
c5b6: 54        LSRB
c5b7: 54        LSRB
c5b8: 54        LSRB
c5b9: f7 4a fa  STB    $4AFA
c5bc: c4 03     ANDB   #$03
c5be: ce c7 37  LDU    #$C737
c5c1: 33 c5     LEAU   B,U
c5c3: f6 4a fa  LDB    $4AFA
c5c6: 54        LSRB
c5c7: 54        LSRB
c5c8: f7 4a fa  STB    $4AFA
c5cb: e6 84     LDB    ,X
c5cd: 58        ASLB
c5ce: 58        ASLB
c5cf: 58        ASLB
c5d0: 58        ASLB
c5d1: f7 4a fb  STB    $4AFB
c5d4: e6 01     LDB    $1,X
c5d6: c4 0f     ANDB   #$0F
c5d8: fb 4a fb  ADDB   $4AFB
c5db: 7a 4a fa  DEC    $4AFA
c5de: 2b 03     BMI    $C5E3
c5e0: 54        LSRB
c5e1: 20 f8     BRA    $C5DB
c5e3: e4 c4     ANDB   ,U
c5e5: f7 4a f5  STB    $4AF5
c5e8: 8e c7 f1  LDX    #$C7F1
c5eb: 30 86     LEAX   A,X
c5ed: eb 84     ADDB   ,X
c5ef: 7e e7 d3  JMP    $E7D3
c5f2: 8e 45 00  LDX    #$4500
c5f5: ce 4c 00  LDU    #$4C00
c5f8: ec 81     LDD    ,X++
c5fa: ed c1     STD    ,U++
c5fc: 8c 46 00  CMPX   #$4600
c5ff: 25 f7     BCS    $C5F8
c601: 8e 45 00  LDX    #$4500
c604: a6 84     LDA    ,X
c606: 43        COMA
c607: a7 80     STA    ,X+
c609: 8c 46 00  CMPX   #$4600
c60c: 25 f6     BCS    $C604
c60e: b7 46 a0  STA    $46A0
c611: bd c6 88  JSR    $C688
c614: bd c6 7a  JSR    $C67A
c617: bd c6 b8  JSR    $C6B8
c61a: 8e 45 00  LDX    #$4500
c61d: a6 84     LDA    ,X
c61f: 43        COMA
c620: a7 80     STA    ,X+
c622: 8c 46 00  CMPX   #$4600
c625: 25 f6     BCS    $C61D
c627: b7 46 a0  STA    $46A0
c62a: bd c6 88  JSR    $C688
c62d: bd c6 41  JSR    $C641
c630: 26 29     BNE    $C65B
c632: bd c6 7a  JSR    $C67A
c635: bd c6 b8  JSR    $C6B8
c638: bd c6 41  JSR    $C641
c63b: 27 03     BEQ    $C640
c63d: 7e c6 5b  JMP    $C65B
c640: 39        RTS
c641: 8e 45 00  LDX    #$4500
c644: ce 4c 00  LDU    #$4C00
c647: a6 80     LDA    ,X+
c649: a8 c0     EORA   ,U+
c64b: 84 0f     ANDA   #$0F
c64d: 26 0b     BNE    $C65A
c64f: 8c 46 00  CMPX   #$4600
c652: 25 f3     BCS    $C647
c654: 86 01     LDA    #$01
c656: b7 4a f7  STA    $4AF7
c659: 4f        CLRA
c65a: 39        RTS
c65b: 7e c65b     JMP    $c65b
