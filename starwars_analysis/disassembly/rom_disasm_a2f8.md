a2f8: 9e 64        LDX    <$64
a2fa: e6 04        LDB    $4,X
a2fc: c1 03        CMPB   #$03
a2fe: 26 04        BNE    $000C
a300: c6 09        LDB    #$09
a302: 20 02        BRA    $000E
a304: c6 08        LDB    #$08
a306: d7 dc        STB    <$DC
a308: cc 66 80     LDD    #$6680
a30b: fd 5e 02     STD    $5E02
a30e: ce 49 c2     LDU    #$49C2
a311: e6 06        LDB    $6,X
a313: 33 c5        LEAU   B,U
a315: a6 c4        LDA    ,U
a317: e6 04        LDB    $4,X
a319: c1 03        CMPB   #$03
a31b: 27 16        BEQ    $003B
a31d: 85 04        BITA   #$04
a31f: 26 04        BNE    $002D
a321: 85 10        BITA   #$10
a323: 26 09        BNE    $0036
a325: c6 0a        LDB    #$0A
a327: d7 dc        STB    <$DC
a329: cc 60 80     LDD    #$6080
a32c: 20 03        BRA    $0039
a32e: cc 67 80     LDD    #$6780
a331: 20 0c        BRA    $0047
a333: 85 04        BITA   #$04
a335: 26 05        BNE    $0044
a337: cc 64 60     LDD    #$6460
a33a: 20 03        BRA    $0047
a33c: cc 60 80     LDD    #$6080
a33f: fd 5e 00     STD    $5E00
a342: 86 72        LDA    #$72
a344: b7 5e 04     STA    $5E04
a347: b6 50 00     LDA    $5000
a34a: 48           ASLA
a34b: 48           ASLA
a34c: b7 5e 05     STA    $5E05
a34f: c6 40        LDB    #$40
a351: 43           COMA
a352: 3d           MUL
a353: 8b 40        ADDA   #$40
a355: b7 5e 03     STA    $5E03
a358: fc 50 86     LDD    $5086
a35b: 58           ASLB
a35c: 49           ROLA
a35d: c3 04 00     ADDD   #$0400
a360: b3 50 00     SUBD   $5000
a363: 10 2d 00 8d  LBLT   $00FC
a367: a6 04        LDA    $4,X
a369: 81 03        CMPA   #$03
a36b: 27 3a        BEQ    $00AF
a36d: 96 60        LDA    <$60
a36f: 2d 03        BLT    $007C
a371: bd bd d0     JSR    $BDD0
a374: fc 50 00     LDD    $5000
a377: 83 02 00     SUBD   #$0200
a37a: b3 50 86     SUBD   $5086
a37d: 2e 26        BGT    $00AD
a37f: cc a0 18     LDD    #$A018
a382: fd 5e 02     STD    $5E02
a385: cc 60 80     LDD    #$6080
a388: fd 5e 00     STD    $5E00
a38b: 96 60        LDA    <$60
a38d: 2d 06        BLT    $009D
a38f: bd 98 74     JSR    $9874
a392: bd bd b2     JSR    $BDB2
a395: 96 63        LDA    <$63
a397: 26 04        BNE    $00A5
a399: b6 50 02     LDA    $5002
a39c: 40           NEGA
a39d: c6 20        LDB    #$20
a39f: 4d           TSTA
a3a0: 2a 01        BPL    $00AB
a3a2: 50           NEGB
a3a3: d7 63        STB    <$63
a3a5: 20 4d        BRA    $00FC
a3a7: fc 50 44     LDD    $5044
a3aa: 83 07 a0     SUBD   #$07A0
a3ad: 2e 45        BGT    $00FC
a3af: bd bd d0     JSR    $BDD0
a3b2: 9e 64        LDX    <$64
a3b4: ce 49 c2     LDU    #$49C2
a3b7: e6 06        LDB    $6,X
a3b9: 33 c5        LEAU   B,U
a3bb: a6 c4        LDA    ,U
a3bd: 85 04        BITA   #$04
a3bf: 26 33        BNE    $00FC
a3c1: fc 50 44     LDD    $5044
a3c4: 83 05 a0     SUBD   #$05A0
a3c7: 2c 2b        BGE    $00FC
a3c9: fc 50 00     LDD    $5000
a3cc: 83 04 00     SUBD   #$0400
a3cf: b3 50 86     SUBD   $5086
a3d2: 2e 20        BGT    $00FC
a3d4: cc a0 18     LDD    #$A018
a3d7: fd 5e 00     STD    $5E00
a3da: 96 60        LDA    <$60
a3dc: 2d 06        BLT    $00EC
a3de: bd 98 74     JSR    $9874
a3e1: bd bd b2     JSR    $BDB2
a3e4: 96 63        LDA    <$63
a3e6: 26 0c        BNE    $00FC
a3e8: 86 13        LDA    #$13
a3ea: f6 50 02     LDB    $5002
a3ed: 2b 01        BMI    $00F8
a3ef: 40           NEGA
a3f0: 9b 63        ADDA   <$63
a3f2: 97 63        STA    <$63
a3f4: b6 50 00     LDA    $5000
a3f7: 80 08        SUBA   #$08
a3f9: 2e 05        BGT    $0108
a3fb: bd cd 68     JSR    $CD68
a3fe: 20 03        BRA    $010B
a400: bd cd 50     JSR    $CD50
a403: bd cd 74     JSR    $CD74
a406: bd a4 59     JSR    $A459
a409: 39           RTS
a40a: bd cd e7     JSR    $CDE7
a40d: cc 00 00     LDD    #$0000
a410: fd 50 78     STD    $5078
a413: dc b3        LDD    <$B3
a415: fd 50 7a     STD    $507A
a418: dc b5        LDD    <$B5
a41a: fd 50 7c     STD    $507C
a41d: cc 00 0f     LDD    #$000F
a420: fd 47 01     STD    $4701
a423: 86 2a        LDA    #$2A
a425: bd cd ba     JSR    $CDBA
a428: fc 50 02     LDD    $5002
a42b: fd 50 78     STD    $5078
a42e: fc 50 04     LDD    $5004
a431: fd 50 7a     STD    $507A
a434: 2a 1f        BPL    $015D
a436: 96 bc        LDA    <$BC
a438: 27 1b        BEQ    $015D
a43a: 86 ff        LDA    #$FF
a43c: 97 bd        STA    <$BD
a43e: 86 03        LDA    #$03
a440: b7 4b 23     STA    $4B23
a443: cc 62 80     LDD    #$6280
a446: fd 4b 20     STD    $4B20
a449: fc 50 04     LDD    $5004
a44c: 44           LSRA
a44d: 56           RORB
a44e: 44           LSRA
a44f: 56           RORB
a450: cb c0        ADDB   #$C0
a452: f7 4b 22     STB    $4B22
a455: bd cd e7     JSR    $CDE7
a458: 39           RTS
a459: 9e 64        LDX    <$64
a45b: fc 50 7c     LDD    $507C
a45e: 58           ASLB
a45f: 49           ROLA
a460: fd 47 04     STD    $4704
a463: ec 02        LDD    $2,X
a465: b3 50 42     SUBD   $5042
a468: fd 50 02     STD    $5002
a46b: cc 00 00     LDD    #$0000
a46e: b3 50 44     SUBD   $5044
a471: fd 50 04     STD    $5004
a474: fc 47 00     LDD    $4700
a477: fd 50 00     STD    $5000
a47a: 86 86        LDA    #$86
a47c: bd cd ba     JSR    $CDBA
a47f: fc 50 02     LDD    $5002
a482: fd 50 1a     STD    $501A
a485: fc 50 04     LDD    $5004
a488: fd 50 1c     STD    $501C
a48b: a6 04        LDA    $4,X
a48d: 81 03        CMPA   #$03
a48f: 27 0e        BEQ    $01A7
a491: cc 03 c0     LDD    #$03C0
a494: fd 50 02     STD    $5002
a497: cc 52 80     LDD    #$5280
a49a: fd 50 04     STD    $5004
a49d: 20 1b        BRA    $01C2
a49f: ce 49 c2     LDU    #$49C2
a4a2: e6 06        LDB    $6,X
a4a4: 33 c5        LEAU   B,U
a4a6: a6 c4        LDA    ,U
a4a8: 85 04        BITA   #$04
a4aa: 10 26 00 9c  LBNE   $0252
a4ae: cc 06 90     LDD    #$0690
a4b1: fd 50 02     STD    $5002
a4b4: cc 05 a0     LDD    #$05A0
a4b7: fd 50 04     STD    $5004
a4ba: fc 50 00     LDD    $5000
a4bd: 83 01 00     SUBD   #$0100
a4c0: 2a 03        BPL    $01CD
a4c2: cc 00 00     LDD    #$0000
a4c5: fd 50 00     STD    $5000
a4c8: 86 86        LDA    #$86
a4ca: bd cd ba     JSR    $CDBA
a4cd: fc 50 1a     LDD    $501A
a4d0: f3 50 02     ADDD   $5002
a4d3: c3 00 0a     ADDD   #$000A
a4d6: b3 50 78     SUBD   $5078
a4d9: 10 2d 00 6d  LBLT   $0252
a4dd: 47           ASRA
a4de: 56           RORB
a4df: 83 00 0a     SUBD   #$000A
a4e2: b3 50 02     SUBD   $5002
a4e5: 10 2e 00 61  LBGT   $0252
a4e9: fc 50 7a     LDD    $507A
a4ec: b3 50 1c     SUBD   $501C
a4ef: 2b 59        BMI    $0252
a4f1: b3 50 04     SUBD   $5004
a4f4: 2e 54        BGT    $0252
a4f6: a6 04        LDA    $4,X
