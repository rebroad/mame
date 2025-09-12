87cb: fc 49 bb     LDD    $49BB
87ce: fd 50 78     STD    $5078
87d1: b3 50 40     SUBD   $5040
87d4: 10 2b 00 8e  LBMI   $009B
87d8: 10 83 08 00  CMPD   #$0800
87dc: 2c 17        BGE    $002A
87de: 58           ASLB
87df: 49           ROLA
87e0: 43           COMA
87e1: 50           NEGB
87e2: 82 ff        SBCA   #$FF
87e4: f3 50 44     ADDD   $5044
87e7: 10 83 f0 00  CMPD   #$F000
87eb: 2c 03        BGE    $0025
87ed: cc f0 00     LDD    #$F000
87f0: fd 50 7c     STD    $507C
87f3: 20 0c        BRA    $0036
87f5: fc 49 bb     LDD    $49BB
87f8: fd 50 78     STD    $5078
87fb: cc f0 00     LDD    #$F000
87fe: fd 50 7c     STD    $507C
8801: 96 92        LDA    <$92
8803: 27 09        BEQ    $0043
8805: fc 50 78     LDD    $5078
8808: 93 93        SUBD   <$93
880a: 10 2a 00 90  LBPL   $00D3
880e: fc 50 78     LDD    $5078
8811: b3 50 98     SUBD   $5098
8814: 83 70 00     SUBD   #$7000
8817: 10 2a 00 83  LBPL   $00D3
881b: cc 00 0f     LDD    #$000F
881e: fd 47 01     STD    $4701
8821: 86 67        LDA    #$67
8823: bd cd ba     JSR    $CDBA
8826: fc 50 02     LDD    $5002
8829: 2a 04        BPL    $0064
882b: 43           COMA
882c: 50           NEGB
882d: 82 ff        SBCA   #$FF
882f: b3 50 00     SUBD   $5000
8832: 2e 32        BGT    $009B
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
886d: 26 05        BNE    $00A9
886f: cc 08 00     LDD    #$0800
8872: 20 03        BRA    $00AC
8874: cc 10 00     LDD    #$1000
8877: f3 49 bb     ADDD   $49BB
887a: fd 49 bb     STD    $49BB
887d: b3 50 40     SUBD   $5040
8880: 2b 1c        BMI    $00D3
8882: 33 43        LEAU   $3,U
8884: e6 c4        LDB    ,U
8886: c1 03        CMPB   #$03
8888: 27 14        BEQ    $00D3
888a: c1 05        CMPB   #$05
888c: 26 0a        BNE    $00CD
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
88ac: cc 00 00     LDD    #$0000
88af: fd 5e 02     STD    $5E02
88b2: dc 96        LDD    <$96
88b4: fd 5e 00     STD    $5E00
88b7: cc 01 c0     LDD    #$01C0
88ba: fd 47 01     STD    $4701
88bd: 86 67        LDA    #$67
88bf: bd cd ba     JSR    $CDBA
88c2: fc 50 00     LDD    $5000
88c5: 10 83 fe 00  CMPD   #$FE00
88c9: 2e 05        BGT    $0105
88cb: 86 00        LDA    #$00
88cd: 97 95        STA    <$95
88cf: 39           RTS
88d0: 83 70 00     SUBD   #$7000
88d3: 2e 1f        BGT    $0129
88d5: cc a0 18     LDD    #$A018
88d8: fd 5e 00     STD    $5E00
88db: cc 72 00     LDD    #$7200
88de: fd 5e 04     STD    $5E04
88e1: fc 50 00     LDD    $5000
88e4: 83 10 00     SUBD   #$1000
88e7: 2c 05        BGE    $0123
88e9: bd cd 5c     JSR    $CD5C
88ec: 20 03        BRA    $0126
88ee: bd cd 50     JSR    $CD50
88f1: bd cd 74     JSR    $CD74
88f4: 39           RTS
88f5: cc 62 80     LDD    #$6280
88f8: ed a1        STD    ,Y++
88fa: 96 92        LDA    <$92
88fc: 27 52        BEQ    $0185
88fe: dc 93        LDD    <$93
8900: fd 50 78     STD    $5078
8903: b3 50 98     SUBD   $5098
8906: 83 70 00     SUBD   #$7000
8909: 2b 06        BMI    $0146
890b: 43           COMA
890c: 50           NEGB
890d: 82 ff        SBCA   #$FF
890f: 20 03        BRA    $0149
8911: cc 00 00     LDD    #$0000
8914: fd 50 7c     STD    $507C
8917: cc fc 00     LDD    #$FC00
891a: fd 50 7a     STD    $507A
891d: cc 00 0f     LDD    #$000F
8920: fd 47 01     STD    $4701
8923: 86 67        LDA    #$67
8925: bd cd ba     JSR    $CDBA
8928: fc 50 00     LDD    $5000
892b: fd 47 04     STD    $4704
892e: bd cc e4     JSR    $CCE4
8931: cc 04 00     LDD    #$0400
8934: fd 50 7a     STD    $507A
8937: cc 00 0f     LDD    #$000F
893a: fd 47 01     STD    $4701
893d: 86 67        LDA    #$67
893f: bd cd ba     JSR    $CDBA
8942: fc 50 00     LDD    $5000
8945: fd 47 04     STD    $4704
8948: bd cc fc     JSR    $CCFC
894b: cc 80 40     LDD    #$8040
894e: ed a1        STD    ,Y++
8950: 39           RTS
8951: bd 89 81     JSR    $8981
8954: 0c 4d        INC    <$4D
8956: 7e 89 d3     JMP    $89D3
8959: bd 89 93     JSR    $8993
895c: 0a 4d        DEC    <$4D
895e: 7e 89 d3     JMP    $89D3
8961: bd 89 93     JSR    $8993
8964: 0a 4e        DEC    <$4E
8966: 7e 89 c8     JMP    $89C8
8969: bd 89 81     JSR    $8981
896c: 0c 4e        INC    <$4E
896e: 7e 89 c8     JMP    $89C8
8971: bd 89 81     JSR    $8981
8974: 0a 4f        DEC    <$4F
8976: 7e 89 de     JMP    $89DE
8979: bd 89 93     JSR    $8993
897c: 0c 4f        INC    <$4F
897e: 7e 89 de     JMP    $89DE
8981: 86 14        LDA    #$14
8983: ce 89 a8     LDU    #$89A8
8986: 33 c6        LEAU   A,U
8988: ec c4        LDD    ,U
898a: fd 50 22     STD    $5022
898d: ec 42        LDD    $2,U
898f: fd 50 24     STD    $5024
8992: 39           RTS
8993: 86 14        LDA    #$14
8995: ce 89 a8     LDU    #$89A8
8998: 33 c6        LEAU   A,U
899a: cc 00 00     LDD    #$0000
899d: a3 c4        SUBD   ,U
899f: fd 50 22     STD    $5022
89a2: ec 42        LDD    $2,U
89a4: fd 50 24     STD    $5024
89a7: 39           RTS
89a8: 00 b5        NEG    <$B5
89aa: 3f           SWI
89ab: ff 01 00     STU    $0100
89ae: 3f           SWI
89af: fe 01 6a     LDU    $016A
89b2: 3f           SWI
89b3: fc 02 1f     LDD    $021F
89b6: 3f           SWI
89b7: f7 03 df     STB    $03DF
89ba: 3f           SWI
89bb: e2 04        SBCB   $4,X
89bd: ff 3f ce     STU    $3FCE
89c0: 05 90        LSR    <$90
89c2: 3f           SWI
89c3: c2 05        SBCB   #$05
89c5: 90 3f        SUBA   <$3F
89c7: c2 4f        SBCB   #$4F
89c9: e6 02        LDB    $2,X
