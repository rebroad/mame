9558: 96 8b     LDA    <$8B
955a: 2f 44     BLE    $95A0
955c: 96 8c     LDA    <$8C
955e: 2e 40     BGT    $95A0
9560: 86 01     LDA    #$01
9562: 97 8c     STA    <$8C
9564: 96 60     LDA    <$60
9566: 97 8e     STA    <$8E
9568: 86 f6     LDA    #$F6
956a: 9b 60     ADDA   <$60
956c: 97 8d     STA    <$8D
956e: 0a 60     DEC    <$60
9570: 2c 06     BGE    $9578
9572: 86 ff     LDA    #$FF
9574: 97 60     STA    <$60
9576: 0f 8c     CLR    <$8C
9578: 96 60     LDA    <$60
957a: 81 00     CMPA   #$00
957c: 26 08     BNE    $9586
957e: bd bd 35  JSR    $BD35
9581: bd bd bc  JSR    $BDBC
9584: 20 13     BRA    $9599
9586: 81 01     CMPA   #$01
9588: 26 05     BNE    $958F
958a: bd bd df  JSR    $BDDF
958d: 20 0a     BRA    $9599
958f: 81 02     CMPA   #$02
9591: 26 06     BNE    $9599
9593: bd bd 3f  JSR    $BD3F
9596: bd bd e4  JSR    $BDE4
9599: 5f        CLRB
959a: d7 91     STB    <$91
959c: d7 90     STB    <$90
959e: d7 8f     STB    <$8F
95a0: 96 61     LDA    <$61
95a2: 27 02     BEQ    $95A6
95a4: 0a 61     DEC    <$61
95a6: 39        RTS
95a7: 96 8c     LDA    <$8C
95a9: 26 07     BNE    $95B2
95ab: 96 60     LDA    <$60
95ad: 2e 03     BGT    $95B2
95af: 7e 96 04  JMP    $9604
95b2: d6 60     LDB    <$60
95b4: 58        ASLB
95b5: 8e 96 b6  LDX    #$96B6
95b8: ee 85     LDU    B,X
95ba: ef a1     STU    ,Y++
95bc: cc ba 03  LDD    #$BA03
95bf: ed a1     STD    ,Y++
95c1: cc 02 28  LDD    #$0228
95c4: ed a1     STD    ,Y++
95c6: cc 00 00  LDD    #$0000
95c9: ed a1     STD    ,Y++
95cb: 96 8c     LDA    <$8C
95cd: 27 05     BEQ    $95D4
95cf: bd 96 2a  JSR    $962A
95d2: 20 03     BRA    $95D7
95d4: bd 96 0f  JSR    $960F
95d7: cc 1f d0  LDD    #$1FD0
95da: ed a1     STD    ,Y++
95dc: cc 1f f4  LDD    #$1FF4
95df: ed a1     STD    ,Y++
95e1: 96 8c     LDA    <$8C
95e3: 2f 05     BLE    $95EA
95e5: ce a0 18  LDU    #$A018
95e8: 20 08     BRA    $95F2
95ea: d6 60     LDB    <$60
95ec: 58        ASLB
95ed: 8e 96 b6  LDX    #$96B6
95f0: ee 85     LDU    B,X
95f2: ef a1     STU    ,Y++
95f4: 0f ad     CLR    <$AD
95f6: 96 60     LDA    <$60
95f8: 2c 01     BGE    $95FB
95fa: 4f        CLRA
95fb: bd e7 ad  JSR    $E7AD
95fe: cc 80 40  LDD    #$8040
9601: ed a1     STD    ,Y++
9603: 39        RTS
9604: cc 71 00  LDD    #$7100
9607: ed a1     STD    ,Y++
9609: c6 0e     LDB    #$0E
960b: bd e7 c7  JSR    $E7C7
960e: 39        RTS
960f: d6 60     LDB    <$60
9611: 58        ASLB
9612: 8e 96 b6  LDX    #$96B6
9615: ec 85     LDD    B,X
9617: 0d 61     TST    <$61
9619: 27 02     BEQ    $961D
961b: ca ff     ORB    #$FF
961d: ed a1     STD    ,Y++
961f: d6 60     LDB    <$60
9621: 58        ASLB
9622: 8e 96 ca  LDX    #$96CA
9625: ee 85     LDU    B,X
9627: ef a1     STU    ,Y++
9629: 39        RTS
962a: 96 91     LDA    <$91
962c: 26 1d     BNE    $964B
962e: ce a0 18  LDU    #$A018
9631: ef a1     STU    ,Y++
9633: d6 8e     LDB    <$8E
9635: 58        ASLB
9636: 8e 96 ca  LDX    #$96CA
9639: ee 85     LDU    B,X
963b: ef a1     STU    ,Y++
963d: 96 43     LDA    <$43
963f: 84 00     ANDA   #$00
9641: 26 06     BNE    $9649
9643: 0c 8d     INC    <$8D
9645: 2d 02     BLT    $9649
9647: 0c 91     INC    <$91
9649: 20 55     BRA    $96A0
964b: bd 96 a1  JSR    $96A1
964e: ce a0 18  LDU    #$A018
9651: ef a1     STU    ,Y++
9653: 96 90     LDA    <$90
9655: 26 1d     BNE    $9674
9657: d6 8e     LDB    <$8E
9659: 58        ASLB
965a: 8e 96 de  LDX    #$96DE
965d: ee 85     LDU    B,X
965f: ef a1     STU    ,Y++
9661: 96 43     LDA    <$43
9663: 84 00     ANDA   #$00
9665: 26 0b     BNE    $9672
9667: 0c 90     INC    <$90
9669: d6 60     LDB    <$60
966b: 8e 97 18  LDX    #$9718
966e: a6 85     LDA    B,X
9670: 97 8d     STA    <$8D
9672: 20 2c     BRA    $96A0
9674: 96 8f     LDA    <$8F
9676: 26 18     BNE    $9690
9678: d6 8d     LDB    <$8D
967a: 58        ASLB
967b: 8e 96 f2  LDX    #$96F2
967e: ee 85     LDU    B,X
9680: ef a1     STU    ,Y++
9682: 96 43     LDA    <$43
9684: 84 00     ANDA   #$00
9686: 26 06     BNE    $968E
9688: 0a 8d     DEC    <$8D
968a: 2e 02     BGT    $968E
968c: 0c 8f     INC    <$8F
968e: 20 10     BRA    $96A0
9690: 96 43     LDA    <$43
9692: 84 00     ANDA   #$00
9694: 26 0a     BNE    $96A0
9696: 86 00     LDA    #$00
9698: 97 8c     STA    <$8C
969a: 97 8b     STA    <$8B
969c: 96 60     LDA    <$60
969e: 97 8e     STA    <$8E
96a0: 39        RTS
96a1: d6 60     LDB    <$60
96a3: 58        ASLB
96a4: 8e 96 b6  LDX    #$96B6
96a7: ec 85     LDD    B,X
96a9: ed a1     STD    ,Y++
96ab: d6 60     LDB    <$60
96ad: 58        ASLB
96ae: 8e 96 ca  LDX    #$96CA
96b1: ee 85     LDU    B,X
96b3: ef a1     STU    ,Y++
96b5: 39        RTS
96b6: 60 80     NEG    ,X+
96b8: 64 80     LSR    ,X+
96ba: 64 80     LSR    ,X+
96bc: 66 80     ROR    ,X+
96be: 66 80     ROR    ,X+
96c0: 62 80     XNC    ,X+
96c2: 62 80     XNC    ,X+
96c4: 62 80     XNC    ,X+
96c6: 62 80     XNC    ,X+
96c8: 62 80     XNC    ,X+
96ca: bb e4 bb  ADDA   $E4BB
96cd: e8 bb     EORB   [D,Y]
96cf: ec bb     LDD    [D,Y]
96d1: f0 bb f4  SUBB   $BBF4
96d4: bb f8 bb  ADDA   $F8BB
96d7: fc bc 00  LDD    $BC00
96da: bc 04 bc  CMPX   $04BC
96dd: 08 bb     ASL    <$BB
96df: e6 bb     LDB    [D,Y]
96e1: ea bb     ORB    [D,Y]
96e3: ee bb     LDU    [D,Y]
96e5: f2 bb f6  SBCB   $BBF6
96e8: bb fa bb  ADDA   $FABB
96eb: fe bc 02  LDU    $BC02
96ee: bc 06 bc  CMPX   $06BC
96f1: 0a bb     DEC    <$BB
96f3: be bb c0  LDX    $BBC0
96f6: bb c2 bb  ADDA   $C2BB
96f9: c4 bb     ANDB   #$BB
96fb: c6 bb     LDB    #$BB
96fd: c8 bb     EORB   #$BB
96ff: ca bb     ORB    #$BB
9701: cc bb ce  LDD    #$BBCE
9704: bb d0 bb  ADDA   $D0BB
9707: d2 bb     SBCB   <$BB
9709: d4 bb     ANDB   <$BB
970b: d6 bb     LDB    <$BB
970d: d8 bb     EORB   <$BB
970f: da bb     ORB    <$BB
9711: dc bb     LDD    <$BB
9713: de bb     LDU    <$BB
9715: e0 bb     SUBB   [D,Y]
9717: e2 00     SBCB   $0,X
9719: 02 04     XNC    <$04
971b: 06 08     ROR    <$08
971d: 0a 0c     DEC    <$0C
971f: 0e 10     JMP    <$10
9721: 12        NOP
9722: b6 4b 2d  LDA    $4B2D
9725: 26 12     BNE    $9739
9727: f6 4b 15  LDB    $4B15
972a: 27 0d     BEQ    $9739
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
9761: 27 11     BEQ    $9774
9763: 8b 99     ADDA   #$99
9765: 19        DAA
9766: b7 4b 1a  STA    $4B1A
9769: 26 09     BNE    $9774
976b: ce 98 62  LDU    #$9862
976e: bd 98 10  JSR    $9810
9771: 7c 4b 35  INC    $4B35
9774: 39        RTS
9775: d6 60     LDB    <$60
9777: 27 32     BEQ    $97AB
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
97a3: 26 e2     BNE    $9787
97a5: ce 4b 29  LDU    #$4B29
97a8: bd 98 10  JSR    $9810
97ab: 39        RTS
97ac: f6 4b 15  LDB    $4B15
97af: c1 05     CMPB   #$05
97b1: 25 05     BCS    $97B8
97b3: ce 98 47  LDU    #$9847
97b6: 20 09     BRA    $97C1
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
97e6: 20 28     BRA    $9810
97e8: ce 98 4a  LDU    #$984A
97eb: 20 23     BRA    $9810
97ed: ce 98 4d  LDU    #$984D
97f0: 20 1e     BRA    $9810
97f2: ce 98 50  LDU    #$9850
97f5: 20 19     BRA    $9810
97f7: ce 98 59  LDU    #$9859
97fa: 20 14     BRA    $9810
97fc: ce 98 53  LDU    #$9853
97ff: 20 0f     BRA    $9810
9801: ce 98 5c  LDU    #$985C
9804: 20 0a     BRA    $9810
9806: ce 98 5f  LDU    #$985F
9809: 20 05     BRA    $9810
980b: ce 98 62  LDU    #$9862
980e: 20 00     BRA    $9810
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
984e: 20 00     BRA    $9850
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
9876: 26 06     BNE    $987E
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
988a: 23 04     BLS    $9890
988c: c6 08     LDB    #$08
988e: d7 62     STB    <$62
9890: 7e 9890     JMP    $9890
