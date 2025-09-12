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
a434: 2a 1f        BPL    $004B
a436: 96 bc        LDA    <$BC
a438: 27 1b        BEQ    $004B
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
a48f: 27 0e        BEQ    $0095
a491: cc 03 c0     LDD    #$03C0
a494: fd 50 02     STD    $5002
a497: cc 52 80     LDD    #$5280
a49a: fd 50 04     STD    $5004
a49d: 20 1b        BRA    $00B0
a49f: ce 49 c2     LDU    #$49C2
a4a2: e6 06        LDB    $6,X
a4a4: 33 c5        LEAU   B,U
a4a6: a6 c4        LDA    ,U
a4a8: 85 04        BITA   #$04
a4aa: 10 26 00 9c  LBNE   $0140
a4ae: cc 06 90     LDD    #$0690
a4b1: fd 50 02     STD    $5002
a4b4: cc 05 a0     LDD    #$05A0
a4b7: fd 50 04     STD    $5004
a4ba: fc 50 00     LDD    $5000
a4bd: 83 01 00     SUBD   #$0100
a4c0: 2a 03        BPL    $00BB
a4c2: cc 00 00     LDD    #$0000
a4c5: fd 50 00     STD    $5000
a4c8: 86 86        LDA    #$86
a4ca: bd cd ba     JSR    $CDBA
a4cd: fc 50 1a     LDD    $501A
a4d0: f3 50 02     ADDD   $5002
a4d3: c3 00 0a     ADDD   #$000A
a4d6: b3 50 78     SUBD   $5078
a4d9: 10 2d 00 6d  LBLT   $0140
a4dd: 47           ASRA
a4de: 56           RORB
a4df: 83 00 0a     SUBD   #$000A
a4e2: b3 50 02     SUBD   $5002
a4e5: 10 2e 00 61  LBGT   $0140
a4e9: fc 50 7a     LDD    $507A
a4ec: b3 50 1c     SUBD   $501C
a4ef: 2b 59        BMI    $0140
a4f1: b3 50 04     SUBD   $5004
a4f4: 2e 54        BGT    $0140
a4f6: a6 04        LDA    $4,X
a4f8: 81 03        CMPA   #$03
a4fa: 26 0e        BNE    $0100
a4fc: fc 50 7c     LDD    $507C
a4ff: 10 93 c8     CMPD   <$C8
a502: 24 04        BCC    $00FE
a504: dd c8        STD    <$C8
a506: 9f c6        STX    <$C6
a508: 20 40        BRA    $0140
a50a: cc 4c e0     LDD    #$4CE0
a50d: fd 50 02     STD    $5002
a510: 86 86        LDA    #$86
a512: bd cd ba     JSR    $CDBA
a515: fc 50 7a     LDD    $507A
a518: c3 00 0a     ADDD   #$000A
a51b: b3 50 1c     SUBD   $501C
a51e: b3 50 02     SUBD   $5002
a521: 2d 1b        BLT    $0134
a523: ce 49 c2     LDU    #$49C2
a526: e6 06        LDB    $6,X
a528: 33 c5        LEAU   B,U
a52a: a6 c4        LDA    ,U
a52c: 85 04        BITA   #$04
a52e: 26 1a        BNE    $0140
a530: fc 50 7c     LDD    $507C
a533: 10 93 c8     CMPD   <$C8
a536: 24 04        BCC    $0132
a538: dd c8        STD    <$C8
a53a: 9f c6        STX    <$C6
a53c: 20 0c        BRA    $0140
a53e: fc 50 7c     LDD    $507C
a541: 10 93 d0     CMPD   <$D0
a544: 24 04        BCC    $0140
a546: dd d0        STD    <$D0
a548: 9f ce        STX    <$CE
a54a: 39           RTS
a54b: 9e c6        LDX    <$C6
a54d: ec 84        LDD    ,X
a54f: b3 50 98     SUBD   $5098
a552: 84 7f        ANDA   #$7F
a554: f3 50 98     ADDD   $5098
a557: fd 50 18     STD    $5018
a55a: ec 02        LDD    $2,X
a55c: fd 50 1a     STD    $501A
a55f: ce 49 c2     LDU    #$49C2
a562: e6 06        LDB    $6,X
a564: 33 c5        LEAU   B,U
a566: a6 c4        LDA    ,U
a568: 8a 04        ORA    #$04
a56a: a7 c4        STA    ,U
a56c: a6 04        LDA    $4,X
a56e: 81 03        CMPA   #$03
a570: 26 0e        BNE    $0176
a572: cc 02 d0     LDD    #$02D0
a575: fd 50 1c     STD    $501C
a578: bd b8 52     JSR    $B852
a57b: bd 97 f7     JSR    $97F7
a57e: 20 0c        BRA    $0182
a580: cc 54 60     LDD    #$5460
a583: fd 50 1c     STD    $501C
a586: bd b8 5e     JSR    $B85E
a589: bd 97 3a     JSR    $973A
a58c: bd bd fd     JSR    $BDFD
a58f: 39           RTS
a590: 39           RTS
a591: 96 60        LDA    <$60
a593: 2d 1d        BLT    $01A8
a595: 9e 64        LDX    <$64
a597: ce 49 c2     LDU    #$49C2
a59a: e6 06        LDB    $6,X
a59c: 33 c5        LEAU   B,U
a59e: a6 c4        LDA    ,U
a5a0: 85 04        BITA   #$04
a5a2: 26 0e        BNE    $01A8
a5a4: a6 04        LDA    $4,X
a5a6: 81 02        CMPA   #$02
a5a8: 10 27 00 5c  LBEQ   $01FE
a5ac: 10 22 00 a5  LBHI   $024B
a5b0: 20 01        BRA    $01A9
a5b2: 39           RTS
a5b3: cc 40 00     LDD    #$4000
a5b6: b3 50 7c     SUBD   $507C
a5b9: 58           ASLB
a5ba: 49           ROLA
a5bb: fd 50 00     STD    $5000
a5be: cc 29 40     LDD    #$2940
a5c1: fd 50 04     STD    $5004
a5c4: cc 02 d0     LDD    #$02D0
a5c7: fd 50 02     STD    $5002
a5ca: 86 86        LDA    #$86
a5cc: bd cd ba     JSR    $CDBA
a5cf: fc 50 04     LDD    $5004
a5d2: b3 50 44     SUBD   $5044
a5d5: 2c 07        BGE    $01D4
a5d7: a6 c4        LDA    ,U
a5d9: 8a 08        ORA    #$08
a5db: a7 c4        STA    ,U
a5dd: 39           RTS
a5de: b3 50 02     SUBD   $5002
a5e1: 2f 06        BLE    $01DF
a5e3: a6 c4        LDA    ,U
a5e5: 85 08        BITA   #$08
a5e7: 27 1e        BEQ    $01FD
a5e9: a6 c4        LDA    ,U
a5eb: 84 f7        ANDA   #$F7
a5ed: a7 c4        STA    ,U
a5ef: b6 47 03     LDA    $4703
a5f2: 2a 03        BPL    $01ED
a5f4: bd a7 b6     JSR    $A7B6
a5f7: b6 47 03     LDA    $4703
a5fa: 2a 03        BPL    $01F5
a5fc: bd a7 c8     JSR    $A7C8
a5ff: b6 47 03     LDA    $4703
a602: 2a 03        BPL    $01FD
a604: bd a7 bf     JSR    $A7BF
a607: 39           RTS
a608: cc 40 bd     LDD    #$4000
