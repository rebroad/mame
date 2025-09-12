9722: b6 4b 2d  LDA    $4B2D
9725: 26 12     BNE    $0017
9727: f6 4b 15  LDB    $4B15
972a: 27 0d     BEQ    $0017
972c: 58        ASLB
972d: fb 4b 15  ADDB   $4B15
9730: 8e 98 65  LDX    #$9865
9733: 3a        ABX
9734: 1f 13     TFR    X,U
9736: bd 98 10  JSR    $9810
9739: 39        RTS
973a: ce 4b 2e  LDU    #$4B2E
973d: bd 98 10  JSR    $9810
9740: 8e 98 56  LDX    #$9856
9743: b6 4b 30  LDA    $4B30
9746: ab 02     ADDA   $2,X
9748: 19        DAA
9749: b7 4b 30  STA    $4B30
974c: b6 4b 2f  LDA    $4B2F
974f: a9 01     ADCA   $1,X
9751: 19        DAA
9752: b7 4b 2f  STA    $4B2F
9755: b6 4b 2e  LDA    $4B2E
9758: a9 84     ADCA   ,X
975a: 19        DAA
975b: b7 4b 2e  STA    $4B2E
975e: b6 4b 1a  LDA    $4B1A
9761: 27 11     BEQ    $0052
9763: 8b 99     ADDA   #$99
9765: 19        DAA
9766: b7 4b 1a  STA    $4B1A
9769: 26 09     BNE    $0052
976b: ce 98 62  LDU    #$9862
976e: bd 98 10  JSR    $9810
9771: 7c 4b 35  INC    $4B35
9774: 39        RTS
9775: d6 60     LDB    <$60
9777: 27 32     BEQ    $0089
9779: ce 98 65  LDU    #$9865
977c: 86 00     LDA    #$00
977e: b7 4b 29  STA    $4B29
9781: b7 4b 2a  STA    $4B2A
9784: b7 4b 2b  STA    $4B2B
9787: a6 42     LDA    $2,U
9789: bb 4b 2b  ADDA   $4B2B
978c: 19        DAA
978d: b7 4b 2b  STA    $4B2B
9790: a6 41     LDA    $1,U
9792: b9 4b 2a  ADCA   $4B2A
9795: 19        DAA
9796: b7 4b 2a  STA    $4B2A
9799: a6 c4     LDA    ,U
979b: b9 4b 29  ADCA   $4B29
979e: 19        DAA
979f: b7 4b 29  STA    $4B29
97a2: 5a        DECB
97a3: 26 e2     BNE    $0065
97a5: ce 4b 29  LDU    #$4B29
97a8: bd 98 10  JSR    $9810
97ab: 39        RTS
97ac: f6 4b 15  LDB    $4B15
97af: c1 05     CMPB   #$05
97b1: 25 05     BCS    $0096
97b3: ce 98 47  LDU    #$9847
97b6: 20 09     BRA    $009F
97b8: 58        ASLB
97b9: fb 4b 15  ADDB   $4B15
97bc: ce 98 3b  LDU    #$983B
97bf: 33 c5     LEAU   B,U
97c1: 39        RTS
97c2: cc a0 1a  LDD    #$A01A
97c5: ed a1     STD    ,Y++
97c7: cc 01 80  LDD    #$0180
97ca: ed a1     STD    ,Y++
97cc: cc 1e c0  LDD    #$1EC0
97cf: ed a1     STD    ,Y++
97d1: 86 04     LDA    #$04
97d3: 97 ad     STA    <$AD
97d5: bd 97 ac  JSR    $97AC
97d8: 30 5f     LEAX   -$1,U
97da: bd e7 72  JSR    $E772
97dd: c6 50     LDB    #$50
97df: bd e7 c7  JSR    $E7C7
97e2: 39        RTS
97e3: bd 97 ac  JSR    $97AC
97e6: 20 28     BRA    $00EE
97e8: ce 98 4a  LDU    #$984A
97eb: 20 23     BRA    $00EE
97ed: ce 98 4d  LDU    #$984D
97f0: 20 1e     BRA    $00EE
97f2: ce 98 50  LDU    #$9850
97f5: 20 19     BRA    $00EE
97f7: ce 98 59  LDU    #$9859
97fa: 20 14     BRA    $00EE
97fc: ce 98 53  LDU    #$9853
97ff: 20 0f     BRA    $00EE
9801: ce 98 5c  LDU    #$985C
9804: 20 0a     BRA    $00EE
9806: ce 98 5f  LDU    #$985F
9809: 20 05     BRA    $00EE
980b: ce 98 62  LDU    #$9862
980e: 20 00     BRA    $00EE
9810: a6 42     LDA    $2,U
9812: b7 4b 2b  STA    $4B2B
9815: 9b 5f     ADDA   <$5F
9817: 19        DAA
9818: 97 5f     STA    <$5F
981a: a6 41     LDA    $1,U
981c: b7 4b 2a  STA    $4B2A
981f: 99 5e     ADCA   <$5E
9821: 19        DAA
9822: 97 5e     STA    <$5E
9824: a6 c4     LDA    ,U
9826: b7 4b 29  STA    $4B29
9829: 99 5d     ADCA   <$5D
982b: 19        DAA
982c: 97 5d     STA    <$5D
982e: 96 5c     LDA    <$5C
9830: 89 00     ADCA   #$00
9832: 19        DAA
9833: 97 5c     STA    <$5C
9835: 86 ff     LDA    #$FF
9837: b7 4b 2c  STA    $4B2C
983a: 39        RTS
983b: 00 50     NEG    <$50
983d: 00 01     NEG    <$01
983f: 00 00     NEG    <$00
9841: 02 50     XNC    <$50
9843: 00 05     NEG    <$05
9845: 00 00     NEG    <$00
9847: 10 00 00  NEG    <$00
984a: 00 10     NEG    <$10
984c: 00 00     NEG    <$00
984e: 20 00     BRA    $012E
9850: 00 00     NEG    <$00
9852: 50        NEGB
9853: 00 01     NEG    <$01
9855: 00 00     NEG    <$00
9857: 02 00     XNC    <$00
9859: 00 02     NEG    <$02
985b: 00 00     NEG    <$00
985d: 00 33     NEG    <$33
985f: 02 50     XNC    <$50
9861: 00 05     NEG    <$05
9863: 00 00     NEG    <$00
9865: 00 50     NEG    <$50
9867: 00 20     NEG    <$20
9869: 00 00     NEG    <$00
986b: 40        NEGA
986c: 00 00     NEG    <$00
986e: 60 00     NEG    $0,X
9870: 00 80     NEG    <$80
9872: 00 00     NEG    <$00
9874: 96 8b     LDA    <$8B
9876: 26 06     BNE    $015C
9878: 86 10     LDA    #$10
987a: 97 62     STA    <$62
987c: 0c 8b     INC    <$8B
987e: 39        RTS
987f: 96 43     LDA    <$43
9881: 84 03     ANDA   #$03
9883: 97 62     STA    <$62
9885: 39        RTS
9886: d6 62     LDB    <$62
9888: c1 08     CMPB   #$08
988a: 23 04     BLS    $016E
988c: c6 08     LDB    #$08
988e: d7 62     STB    <$62
9890: d6 62     LDB    <$62
9892: 27 03     BEQ    $0175
9894: 5a        DECB
9895: d7 62     STB    <$62
9897: 39        RTS
9898: 96 43     LDA    <$43
989a: 84 00     ANDA   #$00
989c: 26 11     BNE    $018D
989e: 8e 49 00  LDX    #$4900
98a1: 6a 06     DEC    $6,X
98a3: 2a 02     BPL    $0185
98a5: 6f 06     CLR    $6,X
98a7: 30 88 19  LEAX   $19,X
98aa: 8c 49 4b  CMPX   #$494B
98ad: 25 f2     BCS    $017F
98af: 39        RTS
98b0: d6 62     LDB    <$62
98b2: c4 03     ANDB   #$03
98b4: 27 14     BEQ    $01A8
98b6: cc 71 00  LDD    #$7100
98b9: ed a1     STD    ,Y++
98bb: cc 67 ff  LDD    #$67FF
98be: ed a1     STD    ,Y++
98c0: cc b9 b3  LDD    #$B9B3
98c3: ed a1     STD    ,Y++
98c5: cc 72 00  LDD    #$7200
98c8: ed a1     STD    ,Y++
98ca: 39        RTS
98cb: 00 16     NEG    <$16
98cd: 16 20 20  LBRA   $21CE
98d0: 20 21     BRA    $01D1
98d2: 21 27     BRN    $01D9
98d4: 28 20     BVC    $01D4
98d6: 20 24     BRA    $01DA
98d8: 24 24     BCC    $01DC
98da: 25 25     BCS    $01DF
98dc: 31 32     LEAY   -$E,Y
98de: 10 00 b0  NEG    <$B0
98e1: 00 03     NEG    <$03
98e3: 01 00     NEG    <$00
98e5: 10 00 e0  NEG    <$E0
98e8: 00 03     NEG    <$03
98ea: 01 01     NEG    <$01
98ec: 10 00 20  NEG    <$20
98ef: 00 03     NEG    <$03
98f1: 01 02     NEG    <$02
98f3: 10 00 50  NEG    <$50
98f6: 00 03     NEG    <$03
98f8: 01 03     NEG    <$03
98fa: 18        X18
98fb: 00 a0     NEG    <$A0
98fd: 00 01     NEG    <$01
98ff: 03 04     COM    <$04
9901: 18        X18
9902: 00 60     NEG    <$60
9904: 00 01     NEG    <$01
9906: 02 05     XNC    <$05
9908: 20 00     BRA    $01E8
990a: b8 00 01  EORA   >$0001
990d: 02 06     XNC    <$06
990f: 20 00     BRA    $01EF
9911: 48        ASLA
9912: 00 01     NEG    <$01
9914: 02 07     XNC    <$07
9916: 30 00     LEAX   $0,X
9918: c0 00     SUBB   #$00
991a: 03 02     COM    <$02
991c: 08 30     ASL    <$30
991e: 00 00     NEG    <$00
9920: 00 01     NEG    <$01
