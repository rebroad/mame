c6d7: 86 03     LDA    #$03
c6d9: b7 4b 02  STA    $4B02
c6dc: a6 80     LDA    ,X+
c6de: 48        ASLA
c6df: 48        ASLA
c6e0: 48        ASLA
c6e1: 48        ASLA
c6e2: a7 c4     STA    ,U
c6e4: a6 80     LDA    ,X+
c6e6: 84 0f     ANDA   #$0F
c6e8: ab c4     ADDA   ,U
c6ea: a7 c0     STA    ,U+
c6ec: 7a 4b 02  DEC    $4B02
c6ef: 2a eb     BPL    $C6DC
c6f1: 30 18     LEAX   -$8,X
c6f3: 39        RTS
c6f4: ce 4a fa  LDU    #$4AFA
c6f7: 86 02     LDA    #$02
c6f9: b7 4b 02  STA    $4B02
c6fc: a6 c0     LDA    ,U+
c6fe: a7 01     STA    $1,X
c700: 44        LSRA
c701: 44        LSRA
c702: 44        LSRA
c703: 44        LSRA
c704: a7 81     STA    ,X++
c706: 7a 4b 02  DEC    $4B02
c709: 2a f1     BPL    $C6FC
c70b: 30 1a     LEAX   -$6,X
c70d: 39        RTS
c70e: c6 00     LDB    #$00
c710: d7 ad     STB    <$AD
c712: 1f 89     TFR    A,B
c714: 44        LSRA
c715: 44        LSRA
c716: 44        LSRA
c717: 44        LSRA
c718: 81 0a     CMPA   #$0A
c71a: 25 02     BCS    $C71E
c71c: 86 09     LDA    #$09
c71e: bd e7 ad  JSR    $E7AD
c721: 86 b8     LDA    #$B8
c723: a7 a0     STA    ,Y+
c725: 86 df     LDA    #$DF
c727: a7 a0     STA    ,Y+
c729: 4f        CLRA
c72a: c4 0f     ANDB   #$0F
c72c: 27 06     BEQ    $C734
c72e: 8b 04     ADDA   #$04
c730: 19        DAA
c731: 5a        DECB
c732: 26 fa     BNE    $C72E
c734: 7e e7 90  JMP    $E790
c737: 01 03     NEG    <$03
c739: 07 0f     ASR    <$0F
c73b: 08 00     ASL    <$00
c73d: 08 00     ASL    <$00
c73f: 08 00     ASL    <$00
c741: 08 00     ASL    <$00
c743: 00 00     NEG    <$00
c745: 00 00     NEG    <$00
c747: 00 00     NEG    <$00
c749: 00 00     NEG    <$00
c74b: 00 00     NEG    <$00
c74d: 00 00     NEG    <$00
c74f: 00 00     NEG    <$00
c751: 00 00     NEG    <$00
c753: 00 00     NEG    <$00
c755: 00 00     NEG    <$00
c757: 00 00     NEG    <$00
c759: 00 00     NEG    <$00
c75b: 00 00     NEG    <$00
c75d: 00 00     NEG    <$00
c75f: 00 00     NEG    <$00
c761: 00 00     NEG    <$00
c763: 00 00     NEG    <$00
c765: 00 00     NEG    <$00
c767: 00 00     NEG    <$00
c769: 00 00     NEG    <$00
c76b: 00 00     NEG    <$00
c76d: 00 00     NEG    <$00
c76f: 00 00     NEG    <$00
c771: 00 00     NEG    <$00
c773: 00 00     NEG    <$00
c775: 00 00     NEG    <$00
c777: 00 00     NEG    <$00
c779: 00 00     NEG    <$00
c77b: 00 00     NEG    <$00
c77d: 00 00     NEG    <$00
c77f: 00 00     NEG    <$00
c781: 00 00     NEG    <$00
c783: 00 00     NEG    <$00
c785: 00 00     NEG    <$00
c787: 00 00     NEG    <$00
c789: 00 00     NEG    <$00
c78b: 00 00     NEG    <$00
c78d: 00 00     NEG    <$00
c78f: 00 00     NEG    <$00
c791: 00 00     NEG    <$00
c793: 00 00     NEG    <$00
c795: 00 00     NEG    <$00
c797: 08 80     ASL    <$80
c799: 48        ASLA
c79a: b0 09 49  SUBA   $0949
c79d: 89 c1     ADCA   #$C1
c79f: e4 c4     ANDB   ,U
c7a1: a4 84     ANDA   ,X
c7a3: 00 05     NEG    <$05
c7a5: 0a 10     DEC    <$10
c7a7: 15        XHCF
c7a8: 1a 20     ORCC   #$20
c7aa: 25 2a     BCS    $C7D6
c7ac: 30 35     LEAX   -$B,Y
c7ae: 3a        ABX
c7af: 40        NEGA
c7b0: 45        LSRA
c7b1: 4a        DECA
c7b2: 50        NEGB
c7b3: 55        LSRB
c7b4: 5a        DECB
c7b5: 60 00     NEG    $0,X
c7b7: 08 34     ASL    <$34
c7b9: 90 98     SUBA   <$98
c7bb: 01 b8     NEG    <$B8
c7bd: 01 90     NEG    <$90
c7bf: 01 68     NEG    <$68
c7c1: 01 18     NEG    <$18
c7c3: 01 40     NEG    <$40
c7c5: 00 b4     NEG    <$B4
c7c7: 00 50     NEG    <$50
c7c9: 00 dc     NEG    <$DC
c7cb: 00 78     NEG    <$78
c7cd: 1e 6b     EXG    inv,DP
c7cf: 1e 98     EXG    B,A
c7d1: 1e c5     EXG    inv,PC
c7d3: 1e f2     EXG    inv,Y
c7d5: 1f 1f     TFR    X,inv
c7d7: 1f 4c     TFR    S,inv
c7d9: 1f 79     TFR    inv,B
c7db: 1f a6     TFR    CC,inv
c7dd: 1f d3     TFR    inv,U
c7df: 1e 6b     EXG    inv,DP
c7e1: 1e 98     EXG    B,A
c7e3: 1e c5     EXG    inv,PC
c7e5: 1e f2     EXG    inv,Y
c7e7: 1f 1f     TFR    X,inv
c7e9: 1f 4c     TFR    S,inv
c7eb: 1f 79     TFR    inv,B
c7ed: 1f a6     TFR    CC,inv
c7ef: 1f d3     TFR    inv,U
c7f1: 74 78 7a  LSR    $787A
c7f4: 7e 86 8a  JMP    $868A
c7f7: 8e 92 94  LDX    #$9294
c7fa: 96 98     LDA    <$98
c7fc: 9a 7d     ORA    <$7D
c7fe: 4a        DECA
c7ff: ec 2b     LDD    $B,Y
c801: 0f 86     CLR    <$86
c803: 3e        XRES
c804: bd d8 df  JSR    $D8DF
c807: cc 72 00  LDD    #$7200
c80a: ed a1     STD    ,Y++
c80c: cc ca 64  LDD    #$CA64
c80f: 20 0d     BRA    $C81E
c811: 86 3f     LDA    #$3F
c813: bd d8 df  JSR    $D8DF
c816: cc 71 40  LDD    #$7140
c819: ed a1     STD    ,Y++
c81b: cc ca 78  LDD    #$CA78
c81e: fd 4a f1  STD    $4AF1
c821: 86 00     LDA    #$00
c823: b7 4a ea  STA    $4AEA
c826: fe 4a f1  LDU    $4AF1
c829: ec c4     LDD    ,U
c82b: ed a1     STD    ,Y++
c82d: cc 1f 80  LDD    #$1F80
c830: ed a1     STD    ,Y++
c832: f6 4a ea  LDB    $4AEA
c835: 58        ASLB
c836: fb 4a ea  ADDB   $4AEA
c839: 8e 4a b6  LDX    #$4AB6
c83c: 3a        ABX
c83d: bc 4a ec  CMPX   $4AEC
c840: 26 05     BNE    $C847
c842: cc 67 80  LDD    #$6780
c845: 20 03     BRA    $C84A
c847: fc 4b 10  LDD    $4B10
c84a: ed a1     STD    ,Y++
c84c: dd 01     STD    <$01
c84e: ce 30 16  LDU    #$3016
c851: 7d 4a ec  TST    $4AEC
c854: 2b 1b     BMI    $C871
c856: b6 4a ee  LDA    $4AEE
c859: 81 00     CMPA   #$00
c85b: 26 10     BNE    $C86D
c85d: b6 48 43  LDA    $4843
c860: 84 01     ANDA   #$01
c862: 26 05     BNE    $C869
c864: fc 4b 10  LDD    $4B10
c867: 20 02     BRA    $C86B
c869: dc 01     LDD    <$01
c86b: 20 02     BRA    $C86F
c86d: dc 01     LDD    <$01
c86f: ed a1     STD    ,Y++
c871: a6 80     LDA    ,X+
c873: 26 0f     BNE    $C884
c875: 7d 4a ec  TST    $4AEC
c878: 2b 05     BMI    $C87F
c87a: fc 30 54  LDD    $3054
c87d: 20 03     BRA    $C882
c87f: fc 30 02  LDD    $3002
c882: 20 03     BRA    $C887
c884: 48        ASLA
c885: ec c6     LDD    A,U
c887: ed a1     STD    ,Y++
c889: 7d 4a ec  TST    $4AEC
c88c: 2b 1b     BMI    $C8A9
c88e: b6 4a ee  LDA    $4AEE
c891: 81 01     CMPA   #$01
c893: 26 10     BNE    $C8A5
c895: b6 48 43  LDA    $4843
c898: 84 01     ANDA   #$01
c89a: 26 05     BNE    $C8A1
c89c: fc 4b 10  LDD    $4B10
c89f: 20 02     BRA    $C8A3
c8a1: dc 01     LDD    <$01
c8a3: 20 02     BRA    $C8A7
c8a5: dc 01     LDD    <$01
c8a7: ed a1     STD    ,Y++
c8a9: a6 80     LDA    ,X+
c8ab: 26 0f     BNE    $C8BC
c8ad: 7d 4a ec  TST    $4AEC
c8b0: 2b 05     BMI    $C8B7
c8b2: fc 30 54  LDD    $3054
c8b5: 20 03     BRA    $C8BA
c8b7: fc 30 02  LDD    $3002
c8ba: 20 03     BRA    $C8BF
c8bc: 48        ASLA
c8bd: ec c6     LDD    A,U
c8bf: ed a1     STD    ,Y++
c8c1: 7d 4a ec  TST    $4AEC
c8c4: 2b 1b     BMI    $C8E1
c8c6: b6 4a ee  LDA    $4AEE
c8c9: 81 02     CMPA   #$02
c8cb: 26 10     BNE    $C8DD
c8cd: b6 48 43  LDA    $4843
c8d0: 84 01     ANDA   #$01
c8d2: 26 05     BNE    $C8D9
c8d4: fc 4b 10  LDD    $4B10
