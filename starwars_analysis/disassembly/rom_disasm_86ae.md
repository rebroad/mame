86ae: cc 00 00     LDD    #$0000
86b1: fd 50 40     STD    $5040
86b4: cc 62 50     LDD    #$6250
86b7: ed a1        STD    ,Y++
86b9: ce 87 25     LDU    #$8725
86bc: 96 92        LDA    <$92
86be: 27 0d        BEQ    $001F
86c0: dc 93        LDD    <$93
86c2: b3 50 98     SUBD   $5098
86c5: 10 83 70 00  CMPD   #$7000
86c9: 22 02        BHI    $001F
86cb: 20 03        BRA    $0022
86cd: cc 70 00     LDD    #$7000
86d0: fd 50 78     STD    $5078
86d3: ec c4        LDD    ,U
86d5: fd 50 7a     STD    $507A
86d8: ec 42        LDD    $2,U
86da: fd 50 7c     STD    $507C
86dd: cc 00 0f     LDD    #$000F
86e0: fd 47 01     STD    $4701
86e3: 86 67        LDA    #$67
86e5: bd cd ba     JSR    $CDBA
86e8: fc 50 00     LDD    $5000
86eb: fd 47 04     STD    $4704
86ee: bd cc e4     JSR    $CCE4
86f1: 20 1e        BRA    $0063
86f3: ec c4        LDD    ,U
86f5: fd 50 7a     STD    $507A
86f8: ec 42        LDD    $2,U
86fa: fd 50 7c     STD    $507C
86fd: cc 00 0f     LDD    #$000F
8700: fd 47 01     STD    $4701
8703: 86 67        LDA    #$67
8705: bd cd ba     JSR    $CDBA
8708: fc 50 00     LDD    $5000
870b: fd 47 04     STD    $4704
870e: bd cc fc     JSR    $CCFC
8711: 33 44        LEAU   $4,U
8713: 11 83 87 35  CMPU   #$8735
8717: 25 da        BCS    $0045
8719: cc 80 40     LDD    #$8040
871c: ed a1        STD    ,Y++
871e: fc 50 98     LDD    $5098
8721: fd 50 40     STD    $5040
8724: 39           RTS
8725: fc 00 00     LDD    >$0000
8728: 00 fc        NEG    <$FC
872a: 00 f0        NEG    <$F0
872c: 00 04        NEG    <$04
872e: 00 f0        NEG    <$F0
8730: 00 04        NEG    <$04
8732: 00 00        NEG    <$00
8734: 00 fe        NEG    <$FE
8736: 49           ROLA
8737: af e6        STX    A,S
8739: c4 c1        ANDB   #$C1
873b: 03 26        COM    <$26
873d: 01 39        NEG    <$39
873f: c1 01        CMPB   #$01
8741: 26 05        BNE    $009A
8743: cc 08 00     LDD    #$0800
8746: 20 03        BRA    $009D
8748: cc 10 00     LDD    #$1000
874b: f3 49 b1     ADDD   $49B1
874e: b3 50 40     SUBD   $5040
8751: 2a 33        BPL    $00D8
8753: e6 c4        LDB    ,U
8755: c1 01        CMPB   #$01
8757: 26 05        BNE    $00B0
8759: cc 08 00     LDD    #$0800
875c: 20 03        BRA    $00B3
875e: cc 10 00     LDD    #$1000
8761: f3 49 b1     ADDD   $49B1
8764: fd 49 b1     STD    $49B1
8767: 33 43        LEAU   $3,U
8769: ff 49 af     STU    $49AF
876c: e6 c4        LDB    ,U
876e: c1 03        CMPB   #$03
8770: 26 01        BNE    $00C5
8772: 39           RTS
8773: e6 c4        LDB    ,U
8775: c1 05        CMPB   #$05
8777: 26 0a        BNE    $00D5
8779: fe 49 a9     LDU    $49A9
877c: 33 42        LEAU   $2,U
877e: ff 49 a9     STU    $49A9
8781: ee c4        LDU    ,U
8783: ff 49 af     STU    $49AF
8786: cc 62 60     LDD    #$6260
8789: ed a1        STD    ,Y++
878b: bd 83 ce     JSR    $83CE
878e: fc 49 a9     LDD    $49A9
8791: fd 49 ad     STD    $49AD
8794: fc 49 af     LDD    $49AF
8797: fd 49 b9     STD    $49B9
879a: fc 49 b1     LDD    $49B1
879d: fd 49 bb     STD    $49BB
87a0: fd 50 78     STD    $5078
87a3: cc fc 00     LDD    #$FC00
87a6: fd 50 7a     STD    $507A
87a9: bd 87 cb     JSR    $87CB
87ac: fc 49 a9     LDD    $49A9
87af: fd 49 ad     STD    $49AD
87b2: fc 49 af     LDD    $49AF
87b5: fd 49 b9     STD    $49B9
87b8: fc 49 b1     LDD    $49B1
87bb: fd 49 bb     STD    $49BB
87be: fd 50 78     STD    $5078
87c1: cc 04 00     LDD    #$0400
87c4: fd 50 7a     STD    $507A
87c7: bd 87 cb     JSR    $87CB
87ca: 39           RTS
87cb: fc 49 bb     LDD    $49BB
87ce: fd 50 78     STD    $5078
87d1: b3 50 40     SUBD   $5040
87d4: 10 2b 00 8e  LBMI   $01B8
87d8: 10 83 08 00  CMPD   #$0800
87dc: 2c 17        BGE    $0147
87de: 58           ASLB
87df: 49           ROLA
87e0: 43           COMA
87e1: 50           NEGB
87e2: 82 ff        SBCA   #$FF
87e4: f3 50 44     ADDD   $5044
87e7: 10 83 f0 00  CMPD   #$F000
87eb: 2c 03        BGE    $0142
87ed: cc f0 00     LDD    #$F000
87f0: fd 50 7c     STD    $507C
87f3: 20 0c        BRA    $0153
87f5: fc 49 bb     LDD    $49BB
87f8: fd 50 78     STD    $5078
87fb: cc f0 00     LDD    #$F000
87fe: fd 50 7c     STD    $507C
8801: 96 92        LDA    <$92
8803: 27 09        BEQ    $0160
8805: fc 50 78     LDD    $5078
8808: 93 93        SUBD   <$93
880a: 10 2a 00 90  LBPL   $01F0
880e: fc 50 78     LDD    $5078
8811: b3 50 98     SUBD   $5098
8814: 83 70 00     SUBD   #$7000
8817: 10 2a 00 83  LBPL   $01F0
881b: cc 00 0f     LDD    #$000F
881e: fd 47 01     STD    $4701
8821: 86 67        LDA    #$67
8823: bd cd ba     JSR    $CDBA
8826: fc 50 02     LDD    $5002
8829: 2a 04        BPL    $0181
882b: 43           COMA
882c: 50           NEGB
882d: 82 ff        SBCA   #$FF
882f: b3 50 00     SUBD   $5000
8832: 2e 32        BGT    $01B8
8834: fc 50 00     LDD    $5000
8837: fd 47 04     STD    $4704
883a: cc 00 00     LDD    #$0000
883d: dd d6        STD    <$D6
883f: cc 00 68     LDD    #$0068
8842: dd d8        STD    <$D8
8844: bd cd 08     JSR    $CD08
8847: cc 00 00     LDD    #$0000
884a: fd 50 7c     STD    $507C
884d: cc 00 0f     LDD    #$000F
8850: fd 47 01     STD    $4701
8853: 86 67        LDA    #$67
8855: bd cd ba     JSR    $CDBA
8858: fc 50 00     LDD    $5000
885b: fd 47 04     STD    $4704
885e: bd cc fc     JSR    $CCFC
8861: cc 80 40     LDD    #$8040
8864: ed a1        STD    ,Y++
8866: fe 49 b9     LDU    $49B9
8869: e6 c4        LDB    ,U
886b: c1 01        CMPB   #$01
886d: 26 05        BNE    $01C6
886f: cc 08 00     LDD    #$0800
8872: 20 03        BRA    $01C9
8874: cc 10 00     LDD    #$1000
8877: f3 49 bb     ADDD   $49BB
887a: fd 49 bb     STD    $49BB
887d: b3 50 40     SUBD   $5040
8880: 2b 1c        BMI    $01F0
8882: 33 43        LEAU   $3,U
8884: e6 c4        LDB    ,U
8886: c1 03        CMPB   #$03
8888: 27 14        BEQ    $01F0
888a: c1 05        CMPB   #$05
888c: 26 0a        BNE    $01EA
888e: fe 49 ad     LDU    $49AD
8891: 33 42        LEAU   $2,U
8893: ff 49 ad     STU    $49AD
8896: ee c4        LDU    ,U
8898: ff 49 b9     STU    $49B9
889b: 7e 87 f5     JMP    $87F5
889e: 39           RTS
889f: c6 10        LDB    #$10
88a1: d7 dc        STB    <$DC
88a3: bd cd 38     JSR    $CD38
88a6: cc f0 00     LDD    #$F000
88a9: fd 5e 04     STD    $5E04
88ac: cc 00 cc     LDD    #$0000
