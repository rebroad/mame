a1ce: ce 49 c2     LDU    #$49C2
a1d1: 86 00        LDA    #$00
a1d3: a7 c4        STA    ,U
a1d5: 33 41        LEAU   $1,U
a1d7: 11 83 49 e2  CMPU   #$49E2
a1db: 25 f4        BCS    $0003
a1dd: b6 4b 13     LDA    $4B13
a1e0: 81 13        CMPA   #$13
a1e2: 25 0b        BCS    $0021
a1e4: c6 06        LDB    #$06
a1e6: b6 47 03     LDA    $4703
a1e9: 3d           MUL
a1ea: 8b 0d        ADDA   #$0D
a1ec: b7 4b 13     STA    $4B13
a1ef: f6 4b 13     LDB    $4B13
a1f2: 8e 98 cb     LDX    #$98CB
a1f5: 3a           ABX
a1f6: 8c 98 de     CMPX   #$98DE
a1f9: 25 03        BCS    $0030
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
a248: 25 03        BCS    $007F
a24a: 8e a1 ca     LDX    #$A1CA
a24d: ae 84        LDX    ,X
a24f: 9f 64        STX    <$64
a251: 96 a7        LDA    <$A7
a253: a1 05        CMPA   $5,X
a255: 10 2d 00 81  LBLT   $010C
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
a277: 2a 05        BPL    $00B0
a279: 84 3f        ANDA   #$3F
a27b: fd 50 00     STD    $5000
a27e: fd 50 7c     STD    $507C
a281: 10 83 01 00  CMPD   #$0100
a285: 2d 29        BLT    $00E2
a287: 10 83 3c 00  CMPD   #$3C00
a28b: 24 23        BCC    $00E2
a28d: fc 50 02     LDD    $5002
a290: 2a 04        BPL    $00C8
a292: 43           COMA
a293: 50           NEGB
a294: 82 ff        SBCA   #$FF
a296: b3 50 00     SUBD   $5000
a299: 24 15        BCC    $00E2
a29b: ce 49 c2     LDU    #$49C2
a29e: e6 06        LDB    $6,X
a2a0: 33 c5        LEAU   B,U
a2a2: a6 c4        LDA    ,U
a2a4: 85 02        BITA   #$02
a2a6: 27 06        BEQ    $00E0
a2a8: bd a2 f8     JSR    $A2F8
a2ab: bd a5 91     JSR    $A591
a2ae: 20 2a        BRA    $010C
a2b0: 9e 64        LDX    <$64
a2b2: ce 49 c2     LDU    #$49C2
a2b5: e6 06        LDB    $6,X
a2b7: 33 c5        LEAU   B,U
a2b9: b6 4b 3d     LDA    $4B3D
a2bc: 27 04        BEQ    $00F4
a2be: 6f c4        CLR    ,U
a2c0: 20 18        BRA    $010C
a2c2: 86 0b        LDA    #$0B
a2c4: e6 c4        LDB    ,U
a2c6: c5 04        BITB   #$04
a2c8: 27 0c        BEQ    $0108
a2ca: 8a 04        ORA    #$04
a2cc: e6 04        LDB    $4,X
a2ce: c1 03        CMPB   #$03
a2d0: 26 02        BNE    $0106
a2d2: 84 fd        ANDA   #$FD
a2d4: 20 02        BRA    $010A
a2d6: 8a 10        ORA    #$10
a2d8: a7 c4        STA    ,U
a2da: f6 4b 13     LDB    $4B13
a2dd: 58           ASLB
a2de: 58           ASLB
a2df: 8e a1 82     LDX    #$A182
a2e2: 3a           ABX
a2e3: 8c a1 ce     CMPX   #$A1CE
a2e6: 25 03        BCS    $011D
a2e8: 8e a1 ca     LDX    #$A1CA
a2eb: 1f 13        TFR    X,U
a2ed: 9e 64        LDX    <$64
a2ef: 30 07        LEAX   $7,X
a2f1: ac 42        CMPX   $2,U
a2f3: 10 25 ff 58  LBCS   $0081
a2f7: 39           RTS
a2f8: 9e 64        LDX    <$64
a2fa: e6 04        LDB    $4,X
a2fc: c1 03        CMPB   #$03
a2fe: 26 04        BNE    $0136
a300: c6 09        LDB    #$09
a302: 20 02        BRA    $0138
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
a31b: 27 16        BEQ    $0165
a31d: 85 04        BITA   #$04
a31f: 26 04        BNE    $0157
a321: 85 10        BITA   #$10
a323: 26 09        BNE    $0160
a325: c6 0a        LDB    #$0A
a327: d7 dc        STB    <$DC
a329: cc 60 80     LDD    #$6080
a32c: 20 03        BRA    $0163
a32e: cc 67 80     LDD    #$6780
a331: 20 0c        BRA    $0171
a333: 85 04        BITA   #$04
a335: 26 05        BNE    $016E
a337: cc 64 60     LDD    #$6460
a33a: 20 03        BRA    $0171
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
a363: 10 2d 00 8d  LBLT   $0226
a367: a6 04        LDA    $4,X
a369: 81 03        CMPA   #$03
a36b: 27 3a        BEQ    $01D9
a36d: 96 60        LDA    <$60
a36f: 2d 03        BLT    $01A6
a371: bd bd d0     JSR    $BDD0
a374: fc 50 00     LDD    $5000
a377: 83 02 00     SUBD   #$0200
a37a: b3 50 86     SUBD   $5086
a37d: 2e 26        BGT    $01D7
a37f: cc a0 18     LDD    #$A018
a382: fd 5e 02     STD    $5E02
a385: cc 60 80     LDD    #$6080
a388: fd 5e 00     STD    $5E00
a38b: 96 60        LDA    <$60
a38d: 2d 06        BLT    $01C7
a38f: bd 98 74     JSR    $9874
a392: bd bd b2     JSR    $BDB2
a395: 96 63        LDA    <$63
a397: 26 04        BNE    $01CF
a399: b6 50 02     LDA    $5002
a39c: 40           NEGA
a39d: c6 20        LDB    #$20
a39f: 4d           TSTA
a3a0: 2a 01        BPL    $01D5
a3a2: 50           NEGB
a3a3: d7 63        STB    <$63
a3a5: 20 4d        BRA    $0226
a3a7: fc 50 44     LDD    $5044
a3aa: 83 07 a0     SUBD   #$07A0
a3ad: 2e 45        BGT    $0226
a3af: bd bd d0     JSR    $BDD0
a3b2: 9e 64        LDX    <$64
a3b4: ce 49 c2     LDU    #$49C2
a3b7: e6 06        LDB    $6,X
a3b9: 33 c5        LEAU   B,U
a3bb: a6 c4        LDA    ,U
a3bd: 85 04        BITA   #$04
a3bf: 26 33        BNE    $0226
a3c1: fc 50 44     LDD    $5044
a3c4: 83 05 a0     SUBD   #$05A0
a3c7: 2c 2b        BGE    $0226
a3c9: fc 50 00     LDD    $5000
a3cc: 83 04 ce     SUBD   #$0400
