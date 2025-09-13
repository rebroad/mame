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
