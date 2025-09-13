a1ce: ce 49 c2     LDU    #$49C2
a1d1: 86 00        LDA    #$00
a1d3: a7 c4        STA    ,U
a1d5: 33 41        LEAU   $1,U
a1d7: 11 83 49 e2  CMPU   #$49E2
a1db: 25 f4        BCS    $A1D1
a1dd: b6 4b 13     LDA    $4B13
a1e0: 81 13        CMPA   #$13
a1e2: 25 0b        BCS    $A1EF
a1e4: c6 06        LDB    #$06
a1e6: b6 47 03     LDA    $4703
a1e9: 3d           MUL
a1ea: 8b 0d        ADDA   #$0D
a1ec: b7 4b 13     STA    $4B13
a1ef: f6 4b 13     LDB    $4B13
a1f2: 8e 98 cb     LDX    #$98CB
a1f5: 3a           ABX
a1f6: 8c 98 de     CMPX   #$98DE
a1f9: 25 03        BCS    $A1FE
a1fb: 8e 98 dd     LDX    #$98DD
a1fe: a6 84        LDA    ,X
a200: b7 4b 1a     STA    $4B1A
a203: fc 98 56     LDD    $9856
a206: fd 4b 2e     STD    $4B2E
a209: b6 98 58     LDA    $9858
a20c: b7 4b 30     STA    $4B30
a20f: 86 00        LDA    #$00
a211: 97 a7        STA    <$A7
a213: 39           RTS
a214: c6 07        LDB    #$07
a216: d7 dc        STB    <$DC
a218: bd cd 38     JSR    $CD38
a21b: cc 00 00     LDD    #$0000
a21e: fd 50 40     STD    $5040
a221: fd 50 42     STD    $5042
a224: fd 50 44     STD    $5044
a227: bd a4 0a     JSR    $A40A
a22a: fc 50 98     LDD    $5098
a22d: fd 50 40     STD    $5040
a230: fc 50 9a     LDD    $509A
a233: fd 50 42     STD    $5042
a236: fc 50 9c     LDD    $509C
a239: fd 50 44     STD    $5044
a23c: f6 4b 13     LDB    $4B13
a23f: 58           ASLB
a240: 58           ASLB
a241: 8e a1 82     LDX    #$A182
a244: 3a           ABX
a245: 8c a1 ce     CMPX   #$A1CE
a248: 25 03        BCS    $A24D
a24a: 8e a1 ca     LDX    #$A1CA
a24d: ae 84        LDX    ,X
a24f: 9f 64        STX    <$64
a251: 96 a7        LDA    <$A7
a253: a1 05        CMPA   $5,X
a255: 10 2d 00 81  LBLT   $A2DA
a259: ec 84        LDD    ,X
a25b: fd 5e 00     STD    $5E00
a25e: ec 02        LDD    $2,X
a260: fd 5e 02     STD    $5E02
a263: cc 1e 00     LDD    #$1E00
a266: fd 5e 04     STD    $5E04
a269: cc 01 c0     LDD    #$01C0
a26c: fd 47 01     STD    $4701
a26f: 86 67        LDA    #$67
a271: bd cd ba     JSR    $CDBA
a274: fc 50 00     LDD    $5000
a277: 2a 05        BPL    $A27E
a279: 84 3f        ANDA   #$3F
a27b: fd 50 00     STD    $5000
a27e: fd 50 7c     STD    $507C
a281: 10 83 01 00  CMPD   #$0100
a285: 2d 29        BLT    $A2B0
a287: 10 83 3c 00  CMPD   #$3C00
a28b: 24 23        BCC    $A2B0
a28d: fc 50 02     LDD    $5002
a290: 2a 04        BPL    $A296
a292: 43           COMA
a293: 50           NEGB
a294: 82 ff        SBCA   #$FF
a296: b3 50 00     SUBD   $5000
a299: 24 15        BCC    $A2B0
a29b: ce 49 c2     LDU    #$49C2
a29e: e6 06        LDB    $6,X
a2a0: 33 c5        LEAU   B,U
a2a2: a6 c4        LDA    ,U
a2a4: 85 02        BITA   #$02
a2a6: 27 06        BEQ    $A2AE
a2a8: bd a2 f8     JSR    $A2F8
a2ab: bd a5 91     JSR    $A591
a2ae: 20 2a        BRA    $A2DA
a2b0: 9e 64        LDX    <$64
a2b2: ce 49 c2     LDU    #$49C2
a2b5: e6 06        LDB    $6,X
a2b7: 33 c5        LEAU   B,U
a2b9: b6 4b 3d     LDA    $4B3D
a2bc: 27 04        BEQ    $A2C2
a2be: 6f c4        CLR    ,U
a2c0: 20 18        BRA    $A2DA
a2c2: 86 0b        LDA    #$0B
a2c4: e6 c4        LDB    ,U
a2c6: c5 04        BITB   #$04
a2c8: 27 0c        BEQ    $A2D6
a2ca: 8a 04        ORA    #$04
a2cc: e6 04        LDB    $4,X
a2ce: c1 03        CMPB   #$03
a2d0: 26 02        BNE    $A2D4
a2d2: 84 fd        ANDA   #$FD
a2d4: 20 02        BRA    $A2D8
a2d6: 8a 10        ORA    #$10
a2d8: a7 c4        STA    ,U
a2da: f6 4b 13     LDB    $4B13
a2dd: 58           ASLB
a2de: 58           ASLB
a2df: 8e a1 82     LDX    #$A182
a2e2: 3a           ABX
a2e3: 8c a1 ce     CMPX   #$A1CE
a2e6: 25 03        BCS    $A2EB
a2e8: 8e a1 ca     LDX    #$A1CA
a2eb: 1f 13        TFR    X,U
a2ed: 9e 64        LDX    <$64
a2ef: 30 07        LEAX   $7,X
a2f1: ac 42        CMPX   $2,U
a2f3: 10 25 ff 58  LBCS   $A24F
a2f7: 39           RTS
a2f8: 9e 64        LDX    <$64
a2fa: e6 04        LDB    $4,X
a2fc: c1 03        CMPB   #$03
a2fe: 26 04        BNE    $A304
a300: c6 09        LDB    #$09
a302: 20 02        BRA    $A306
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
a31b: 27 16        BEQ    $A333
a31d: 85 04        BITA   #$04
a31f: 26 04        BNE    $A325
a321: 85 10        BITA   #$10
a323: 26 09        BNE    $A32E
a325: c6 0a        LDB    #$0A
a327: d7 dc        STB    <$DC
a329: cc 60 80     LDD    #$6080
a32c: 20 03        BRA    $A331
a32e: cc 67 80     LDD    #$6780
a331: 20 0c        BRA    $A33F
a333: 85 04        BITA   #$04
a335: 26 05        BNE    $A33C
a337: cc 64 60     LDD    #$6460
a33a: 20 03        BRA    $A33F
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
a363: 10 2d 00 8d  LBLT   $A3F4
a367: a6 04        LDA    $4,X
a369: 81 03        CMPA   #$03
a36b: 27 3a        BEQ    $A3A7
a36d: 96 60        LDA    <$60
a36f: 2d 03        BLT    $A374
a371: bd bd d0     JSR    $BDD0
a374: fc 50 00     LDD    $5000
a377: 83 02 00     SUBD   #$0200
a37a: b3 50 86     SUBD   $5086
a37d: 2e 26        BGT    $A3A5
a37f: cc a0 18     LDD    #$A018
a382: fd 5e 02     STD    $5E02
a385: cc 60 80     LDD    #$6080
a388: fd 5e 00     STD    $5E00
a38b: 96 60        LDA    <$60
a38d: 2d 06        BLT    $A395
a38f: bd 98 74     JSR    $9874
a392: bd bd b2     JSR    $BDB2
a395: 96 63        LDA    <$63
a397: 26 04        BNE    $A39D
a399: b6 50 02     LDA    $5002
a39c: 40           NEGA
a39d: c6 20        LDB    #$20
a39f: 4d           TSTA
a3a0: 2a 01        BPL    $A3A3
a3a2: 50           NEGB
a3a3: d7 63        STB    <$63
a3a5: 20 4d        BRA    $A3F4
a3a7: fc 50 44     LDD    $5044
a3aa: 83 07 a0     SUBD   #$07A0
a3ad: 2e 45        BGT    $A3F4
a3af: bd bd d0     JSR    $BDD0
a3b2: 9e 64        LDX    <$64
a3b4: ce 49 c2     LDU    #$49C2
a3b7: e6 06        LDB    $6,X
a3b9: 33 c5        LEAU   B,U
a3bb: a6 c4        LDA    ,U
a3bd: 85 04        BITA   #$04
a3bf: 26 33        BNE    $A3F4
a3c1: fc 50 44     LDD    $5044
a3c4: 83 05 a0     SUBD   #$05A0
a3c7: 2c 2b        BGE    $A3F4
a3c9: fc 50 00     LDD    $5000
a3cc: 83 04 00     SUBD   #$0400
a3cf: b3 50 86     SUBD   $5086
a3d2: 2e 20        BGT    $A3F4
a3d4: cc a0 18     LDD    #$A018
a3d7: fd 5e 00     STD    $5E00
a3da: 96 60        LDA    <$60
a3dc: 2d 06        BLT    $A3E4
a3de: bd 98 74     JSR    $9874
a3e1: bd bd b2     JSR    $BDB2
a3e4: 96 63        LDA    <$63
a3e6: 26 0c        BNE    $A3F4
a3e8: 86 13        LDA    #$13
a3ea: f6 50 02     LDB    $5002
a3ed: 2b 01        BMI    $A3F0
a3ef: 40           NEGA
a3f0: 9b 63        ADDA   <$63
a3f2: 97 63        STA    <$63
a3f4: b6 50 00     LDA    $5000
a3f7: 80 08        SUBA   #$08
a3f9: 2e 05        BGT    $A400
a3fb: bd cd 68     JSR    $CD68
a3fe: 20 03        BRA    $A403
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
a434: 2a 1f        BPL    $A455
a436: 96 bc        LDA    <$BC
a438: 27 1b        BEQ    $A455
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
a48f: 27 0e        BEQ    $A49F
a491: cc 03 c0     LDD    #$03C0
a494: fd 50 02     STD    $5002
a497: cc 52 80     LDD    #$5280
a49a: fd 50 04     STD    $5004
a49d: 20 1b        BRA    $A4BA
a49f: ce 49 c2     LDU    #$49C2
a4a2: e6 06        LDB    $6,X
a4a4: 33 c5        LEAU   B,U
a4a6: a6 c4        LDA    ,U
a4a8: 85 04        BITA   #$04
a4aa: 10 26 00 9c  LBNE   $A54A
a4ae: cc 06 90     LDD    #$0690
a4b1: fd 50 02     STD    $5002
a4b4: cc 05 a0     LDD    #$05A0
a4b7: fd 50 04     STD    $5004
a4ba: fc 50 00     LDD    $5000
a4bd: 83 01 00     SUBD   #$0100
a4c0: 2a 03        BPL    $A4C5
a4c2: cc 00 00     LDD    #$0000
a4c5: fd 50 00     STD    $5000
a4c8: 86 86        LDA    #$86
a4ca: bd cd ba     JSR    $CDBA
a4cd: fc 50 1a     LDD    $501A
a4d0: f3 50 02     ADDD   $5002
a4d3: c3 00 0a     ADDD   #$000A
a4d6: b3 50 78     SUBD   $5078
a4d9: 10 2d 00 6d  LBLT   $A54A
a4dd: 47           ASRA
a4de: 56           RORB
a4df: 83 00 0a     SUBD   #$000A
a4e2: b3 50 02     SUBD   $5002
a4e5: 10 2e 00 61  LBGT   $A54A
a4e9: fc 50 7a     LDD    $507A
a4ec: b3 50 1c     SUBD   $501C
a4ef: 2b 59        BMI    $A54A
a4f1: b3 50 04     SUBD   $5004
a4f4: 2e 54        BGT    $A54A
a4f6: a6 04        LDA    $4,X
a4f8: 81 03        CMPA   #$03
a4fa: 26 0e        BNE    $A50A
a4fc: fc 50 7c     LDD    $507C
a4ff: 10 93 c8     CMPD   <$C8
a502: 24 04        BCC    $A508
a504: dd c8        STD    <$C8
a506: 9f c6        STX    <$C6
a508: 20 40        BRA    $A54A
a50a: cc 4c e0     LDD    #$4CE0
a50d: fd 50 02     STD    $5002
a510: 86 86        LDA    #$86
a512: bd cd ba     JSR    $CDBA
a515: fc 50 7a     LDD    $507A
a518: c3 00 0a     ADDD   #$000A
a51b: b3 50 1c     SUBD   $501C
a51e: b3 50 02     SUBD   $5002
a521: 2d 1b        BLT    $A53E
a523: ce 49 c2     LDU    #$49C2
a526: e6 06        LDB    $6,X
a528: 33 c5        LEAU   B,U
a52a: a6 c4        LDA    ,U
a52c: 85 04        BITA   #$04
a52e: 26 1a        BNE    $A54A
a530: fc 50 7c     LDD    $507C
a533: 10 93 c8     CMPD   <$C8
a536: 24 04        BCC    $A53C
a538: dd c8        STD    <$C8
a53a: 9f c6        STX    <$C6
a53c: 20 0c        BRA    $A54A
a53e: fc 50 7c     LDD    $507C
a541: 10 93 d0     CMPD   <$D0
a544: 24 04        BCC    $A54A
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
a570: 26 0e        BNE    $A580
a572: cc 02 d0     LDD    #$02D0
a575: fd 50 1c     STD    $501C
a578: bd b8 52     JSR    $B852
a57b: bd 97 f7     JSR    $97F7
a57e: 20 0c        BRA    $A58C
a580: cc 54 60     LDD    #$5460
a583: fd 50 1c     STD    $501C
a586: bd b8 5e     JSR    $B85E
a589: bd 97 3a     JSR    $973A
a58c: bd bd fd     JSR    $BDFD
a58f: 39           RTS
a590: 39           RTS
a591: 96 60        LDA    <$60
a593: 2d 1d        BLT    $A5B2
a595: 9e 64        LDX    <$64
a597: ce 49 c2     LDU    #$49C2
a59a: e6 06        LDB    $6,X
a59c: 33 c5        LEAU   B,U
a59e: a6 c4        LDA    ,U
a5a0: 85 04        BITA   #$04
a5a2: 26 0e        BNE    $A5B2
a5a4: a6 04        LDA    $4,X
a5a6: 81 02        CMPA   #$02
a5a8: 10 27 00 5c  LBEQ   $A608
a5ac: 10 22 00 a5  LBHI   $A655
a5b0: 20 01        BRA    $A5B3
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
a5d5: 2c 07        BGE    $A5DE
a5d7: a6 c4        LDA    ,U
a5d9: 8a 08        ORA    #$08
a5db: a7 c4        STA    ,U
a5dd: 39           RTS
a5de: b3 50 02     SUBD   $5002
a5e1: 2f 06        BLE    $A5E9
a5e3: a6 c4        LDA    ,U
a5e5: 85 08        BITA   #$08
a5e7: 27 1e        BEQ    $A607
a5e9: a6 c4        LDA    ,U
a5eb: 84 f7        ANDA   #$F7
a5ed: a7 c4        STA    ,U
a5ef: b6 47 03     LDA    $4703
a5f2: 2a 03        BPL    $A5F7
a5f4: bd a7 b6     JSR    $A7B6
a5f7: b6 47 03     LDA    $4703
a5fa: 2a 03        BPL    $A5FF
a5fc: bd a7 c8     JSR    $A7C8
a5ff: b6 47 03     LDA    $4703
a602: 2a 03        BPL    $A607
a604: bd a7 bf     JSR    $A7BF
a607: 39           RTS
a608: cc 40 00     LDD    #$4000
a60b: b3 50 7c     SUBD   $507C
a60e: 58           ASLB
a60f: 49           ROLA
a610: fd 50 00     STD    $5000
a613: cc 29 40     LDD    #$2940
a616: fd 50 04     STD    $5004
a619: cc 02 d0     LDD    #$02D0
a61c: fd 50 02     STD    $5002
a61f: 86 86        LDA    #$86
a621: bd cd ba     JSR    $CDBA
a624: fc 50 04     LDD    $5004
a627: b3 50 44     SUBD   $5044
a62a: 2c 07        BGE    $A633
a62c: a6 c4        LDA    ,U
a62e: 8a 08        ORA    #$08
a630: a7 c4        STA    ,U
a632: 39           RTS
a633: b3 50 02     SUBD   $5002
a636: 2f 06        BLE    $A63E
a638: a6 c4        LDA    ,U
a63a: 85 08        BITA   #$08
a63c: 27 16        BEQ    $A654
a63e: a6 c4        LDA    ,U
a640: 84 f7        ANDA   #$F7
a642: a7 c4        STA    ,U
a644: b6 47 03     LDA    $4703
a647: 2a 03        BPL    $A64C
a649: bd a7 c8     JSR    $A7C8
a64c: b6 47 03     LDA    $4703
a64f: 2a 03        BPL    $A654
a651: bd a7 bf     JSR    $A7BF
a654: 39           RTS
a655: 86 40        LDA    #$40
a657: b0 50 7c     SUBA   $507C
a65a: b1 47 03     CMPA   $4703
a65d: 25 15        BCS    $A674
a65f: b6 47 03     LDA    $4703
a662: 81 50        CMPA   #$50
a664: 24 03        BCC    $A669
a666: 7e a7 28     JMP    $A728
a669: b6 47 03     LDA    $4703
a66c: 2a 03        BPL    $A671
a66e: 7e a7 28     JMP    $A728
a671: 7e a7 28     JMP    $A728
a674: 39           RTS
a675: a8 6b        EORA   $B,S
a677: a8 75        EORA   -$B,S
a679: a8 a7        EORA   E,Y
a67b: a8 da        EORA   [F,U]
a67d: a8 e6        EORA   A,S
a67f: a8 f9 aa 00  EORA   [-$5600,S]
a683: a9 46        ADCA   $6,U
a685: a9 a3        ADCA   ,--Y
a687: aa 86        ORA    A,X
a689: aa b5        ORA    [B,Y]
a68b: df a8        STU    <$A8
a68d: c6 40        LDB    #$40
a68f: e7 45        STB    $5,U
a691: c6 01        LDB    #$01
a693: e7 43        STB    $3,U
a695: c6 01        LDB    #$01
a697: e7 44        STB    $4,U
a699: b6 4b 3c     LDA    $4B3C
a69c: 2f 0d        BLE    $A6AB
a69e: bc 4b 32     CMPX   $4B32
a6a1: 26 08        BNE    $A6AB
a6a3: 7a 4b 3c     DEC    $4B3C
a6a6: 26 03        BNE    $A6AB
a6a8: bd bd 4e     JSR    $BD4E
a6ab: ee c4        LDU    ,U
a6ad: ae 84        LDX    ,X
a6af: ec 08        LDD    $8,X
a6b1: b3 50 98     SUBD   $5098
a6b4: ed c4        STD    ,U
a6b6: ec 0a        LDD    $A,X
a6b8: b3 50 9a     SUBD   $509A
a6bb: ed 42        STD    $2,U
a6bd: ec 0c        LDD    $C,X
a6bf: b3 50 9c     SUBD   $509C
a6c2: ed 44        STD    $4,U
a6c4: bd be 02     JSR    $BE02
a6c7: 39           RTS
a6c8: 49           ROLA
a6c9: 69 49        ROL    $9,U
a6cb: 69 49        ROL    $9,U
a6cd: 63 49        COM    $9,U
a6cf: 63 49        COM    $9,U
a6d1: 5d           TSTB
a6d2: 49           ROLA
a6d3: 5d           TSTB
a6d4: 49           ROLA
a6d5: 57           ASRB
a6d6: 49           ROLA
a6d7: 57           ASRB
a6d8: 49           ROLA
a6d9: 51           NEGB
a6da: 49           ROLA
a6db: 51           NEGB
a6dc: 49           ROLA
a6dd: 4b           XDECA
a6de: 49           ROLA
a6df: 4b           XDECA
a6e0: f6 4b 19     LDB    $4B19
a6e3: c1 0c        CMPB   #$0C
a6e5: 25 05        BCS    $A6EC
a6e7: 8e a6 de     LDX    #$A6DE
a6ea: 20 06        BRA    $A6F2
a6ec: 58           ASLB
a6ed: 8e a6 c8     LDX    #$A6C8
a6f0: ae 85        LDX    B,X
a6f2: 20 14        BRA    $A708
a6f4: f6 4b 19     LDB    $4B19
a6f7: c1 07        CMPB   #$07
a6f9: 23 02        BLS    $A6FD
a6fb: c6 07        LDB    #$07
a6fd: 58           ASLB
a6fe: 8e a7 18     LDX    #$A718
a701: ae 85        LDX    B,X
a703: 20 03        BRA    $A708
a705: 8e 49 4b     LDX    #$494B
a708: 9f a8        STX    <$A8
a70a: a6 03        LDA    $3,X
a70c: 27 09        BEQ    $A717
a70e: 30 06        LEAX   $6,X
a710: 8c 49 6f     CMPX   #$496F
a713: 25 f3        BCS    $A708
a715: 32 62        LEAS   $2,S
a717: 39           RTS
a718: 49           ROLA
a719: 69 49        ROL    $9,U
a71b: 69 49        ROL    $9,U
a71d: 63 49        COM    $9,U
a71f: 63 49        COM    $9,U
a721: 5d           TSTB
a722: 49           ROLA
a723: 5d           TSTB
a724: 49           ROLA
a725: 5d           TSTB
a726: 49           ROLA
a727: 57           ASRB
a728: bd a6 e0     JSR    $A6E0
a72b: 86 70        LDA    #$70
a72d: a7 05        STA    $5,X
a72f: 86 05        LDA    #$05
a731: a7 03        STA    $3,X
a733: de 64        LDU    <$64
a735: 9f 01        STX    <$01
a737: ec 42        LDD    $2,U
a739: b3 50 9a     SUBD   $509A
a73c: 2b 04        BMI    $A742
a73e: 86 08        LDA    #$08
a740: 20 02        BRA    $A744
a742: 86 07        LDA    #$07
a744: a7 04        STA    $4,X
a746: ae 84        LDX    ,X
a748: a6 c4        LDA    ,U
a74a: b0 50 98     SUBA   $5098
a74d: 84 80        ANDA   #$80
a74f: a8 c4        EORA   ,U
a751: e6 41        LDB    $1,U
a753: ed 84        STD    ,X
a755: ec 42        LDD    $2,U
a757: ed 02        STD    $2,X
a759: cc 02 00     LDD    #$0200
a75c: ed 04        STD    $4,X
a75e: ec 02        LDD    $2,X
a760: b3 50 9a     SUBD   $509A
a763: a7 06        STA    $6,X
a765: 2a 04        BPL    $A76B
a767: 43           COMA
a768: 50           NEGB
a769: 82 ff        SBCA   #$FF
a76b: fd 47 06     STD    $4706
a76e: ec 84        LDD    ,X
a770: b3 50 98     SUBD   $5098
a773: fd 47 04     STD    $4704
a776: cc 02 00     LDD    #$0200
a779: fd 47 06     STD    $4706
a77c: b6 47 00     LDA    $4700
a77f: 48           ASLA
a780: 48           ASLA
a781: 24 01        BCC    $A784
a783: 4f           CLRA
a784: a7 07        STA    $7,X
a786: 96 7d        LDA    <$7D
a788: a8 06        EORA   $6,X
a78a: 2a 04        BPL    $A790
a78c: 6f 06        CLR    $6,X
a78e: 20 22        BRA    $A7B2
a790: 96 7d        LDA    <$7D
a792: 2a 01        BPL    $A795
a794: 40           NEGA
a795: 48           ASLA
a796: a1 07        CMPA   $7,X
a798: 22 04        BHI    $A79E
a79a: 6f 06        CLR    $6,X
a79c: 20 14        BRA    $A7B2
a79e: 86 ff        LDA    #$FF
a7a0: a7 06        STA    $6,X
a7a2: 9e 01        LDX    <$01
a7a4: a6 04        LDA    $4,X
a7a6: 81 08        CMPA   #$08
a7a8: 26 04        BNE    $A7AE
a7aa: 86 07        LDA    #$07
a7ac: 20 02        BRA    $A7B0
a7ae: 86 08        LDA    #$08
a7b0: a7 04        STA    $4,X
a7b2: bd be 11     JSR    $BE11
a7b5: 39           RTS
a7b6: bd a7 05     JSR    $A705
a7b9: 86 03        LDA    #$03
a7bb: a7 04        STA    $4,X
a7bd: 20 12        BRA    $A7D1
a7bf: bd a7 05     JSR    $A705
a7c2: 86 04        LDA    #$04
a7c4: a7 04        STA    $4,X
a7c6: 20 09        BRA    $A7D1
a7c8: bd a7 05     JSR    $A705
a7cb: 86 05        LDA    #$05
a7cd: a7 04        STA    $4,X
a7cf: 20 00        BRA    $A7D1
a7d1: 86 70        LDA    #$70
a7d3: a7 05        STA    $5,X
a7d5: 86 05        LDA    #$05
a7d7: a7 03        STA    $3,X
a7d9: de 64        LDU    <$64
a7db: ae 84        LDX    ,X
a7dd: a6 c4        LDA    ,U
a7df: b0 50 98     SUBA   $5098
a7e2: 84 80        ANDA   #$80
a7e4: a8 c4        EORA   ,U
a7e6: e6 41        LDB    $1,U
a7e8: ed 84        STD    ,X
a7ea: ec 42        LDD    $2,U
a7ec: ed 02        STD    $2,X
a7ee: fc 50 44     LDD    $5044
a7f1: ed 04        STD    $4,X
a7f3: bd be 11     JSR    $BE11
a7f6: 39           RTS
a7f7: 96 95        LDA    <$95
a7f9: 27 05        BEQ    $A800
a7fb: bd a7 05     JSR    $A705
a7fe: 20 03        BRA    $A803
a800: bd a6 f4     JSR    $A6F4
a803: 86 09        LDA    #$09
a805: a7 04        STA    $4,X
a807: ee 84        LDU    ,X
a809: 20 14        BRA    $A81F
a80b: 96 95        LDA    <$95
a80d: 27 05        BEQ    $A814
a80f: bd a7 05     JSR    $A705
a812: 20 03        BRA    $A817
a814: bd a6 f4     JSR    $A6F4
a817: 86 0a        LDA    #$0A
a819: a7 04        STA    $4,X
a81b: ee 84        LDU    ,X
a81d: 20 00        BRA    $A81F
a81f: fc 50 78     LDD    $5078
a822: ed c4        STD    ,U
a824: fc 50 7a     LDD    $507A
a827: ed 42        STD    $2,U
a829: fc 50 7c     LDD    $507C
a82c: ed 44        STD    $4,U
a82e: 86 40        LDA    #$40
a830: a7 05        STA    $5,X
a832: 86 05        LDA    #$05
a834: a7 03        STA    $3,X
a836: b6 47 03     LDA    $4703
a839: 44           LSRA
a83a: f6 50 7c     LDB    $507C
a83d: c1 fc        CMPB   #$FC
a83f: 2d 02        BLT    $A843
a841: 86 00        LDA    #$00
a843: a7 46        STA    $6,U
a845: bd be 11     JSR    $BE11
a848: 39           RTS
a849: 7e a849     JMP    $a849
