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
a413: dc 00        LDD    <$00
