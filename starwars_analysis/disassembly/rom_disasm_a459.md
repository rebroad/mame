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
a48f: 27 0e        BEQ    $0046
a491: cc 03 c0     LDD    #$03C0
a494: fd 50 02     STD    $5002
a497: cc 52 80     LDD    #$5280
a49a: fd 50 04     STD    $5004
a49d: 20 1b        BRA    $0061
a49f: ce 49 c2     LDU    #$49C2
a4a2: e6 06        LDB    $6,X
a4a4: 33 c5        LEAU   B,U
a4a6: a6 c4        LDA    ,U
a4a8: 85 04        BITA   #$04
a4aa: 10 26 00 9c  LBNE   $00F1
a4ae: cc 06 90     LDD    #$0690
a4b1: fd 50 02     STD    $5002
a4b4: cc 05 a0     LDD    #$05A0
a4b7: fd 50 04     STD    $5004
a4ba: fc 50 00     LDD    $5000
a4bd: 83 01 00     SUBD   #$0100
a4c0: 2a 03        BPL    $006C
a4c2: cc 00 00     LDD    #$0000
a4c5: fd 50 00     STD    $5000
a4c8: 86 86        LDA    #$86
a4ca: bd cd ba     JSR    $CDBA
a4cd: fc 50 1a     LDD    $501A
a4d0: f3 50 02     ADDD   $5002
a4d3: c3 00 0a     ADDD   #$000A
a4d6: b3 50 78     SUBD   $5078
a4d9: 10 2d 00 6d  LBLT   $00F1
a4dd: 47           ASRA
a4de: 56           RORB
a4df: 83 00 0a     SUBD   #$000A
a4e2: b3 50 02     SUBD   $5002
a4e5: 10 2e 00 61  LBGT   $00F1
a4e9: fc 50 7a     LDD    $507A
a4ec: b3 50 1c     SUBD   $501C
a4ef: 2b 59        BMI    $00F1
a4f1: b3 50 04     SUBD   $5004
a4f4: 2e 54        BGT    $00F1
a4f6: a6 04        LDA    $4,X
a4f8: 81 03        CMPA   #$03
a4fa: 26 0e        BNE    $00B1
a4fc: fc 50 7c     LDD    $507C
a4ff: 10 93 c8     CMPD   <$C8
a502: 24 04        BCC    $00AF
a504: dd c8        STD    <$C8
a506: 9f c6        STX    <$C6
a508: 20 40        BRA    $00F1
a50a: cc 4c e0     LDD    #$4CE0
a50d: fd 50 02     STD    $5002
a510: 86 86        LDA    #$86
a512: bd cd ba     JSR    $CDBA
a515: fc 50 7a     LDD    $507A
a518: c3 00 0a     ADDD   #$000A
a51b: b3 50 1c     SUBD   $501C
a51e: b3 50 02     SUBD   $5002
a521: 2d 1b        BLT    $00E5
a523: ce 49 c2     LDU    #$49C2
a526: e6 06        LDB    $6,X
a528: 33 c5        LEAU   B,U
a52a: a6 c4        LDA    ,U
a52c: 85 04        BITA   #$04
a52e: 26 1a        BNE    $00F1
a530: fc 50 7c     LDD    $507C
a533: 10 93 c8     CMPD   <$C8
a536: 24 04        BCC    $00E3
a538: dd c8        STD    <$C8
a53a: 9f c6        STX    <$C6
a53c: 20 0c        BRA    $00F1
a53e: fc 50 7c     LDD    $507C
a541: 10 93 d0     CMPD   <$D0
a544: 24 04        BCC    $00F1
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
a570: 26 0e        BNE    $0127
a572: cc 02 d0     LDD    #$02D0
a575: fd 50 1c     STD    $501C
a578: bd b8 52     JSR    $B852
a57b: bd 97 f7     JSR    $97F7
a57e: 20 0c        BRA    $0133
a580: cc 54 60     LDD    #$5460
a583: fd 50 1c     STD    $501C
a586: bd b8 5e     JSR    $B85E
a589: bd 97 3a     JSR    $973A
a58c: bd bd fd     JSR    $BDFD
a58f: 39           RTS
a590: 39           RTS
a591: 96 60        LDA    <$60
a593: 2d 1d        BLT    $0159
a595: 9e 64        LDX    <$64
a597: ce 49 c2     LDU    #$49C2
a59a: e6 06        LDB    $6,X
a59c: 33 c5        LEAU   B,U
a59e: a6 c4        LDA    ,U
a5a0: 85 04        BITA   #$04
a5a2: 26 0e        BNE    $0159
a5a4: a6 04        LDA    $4,X
a5a6: 81 02        CMPA   #$02
a5a8: 10 27 00 5c  LBEQ   $01AF
a5ac: 10 22 00 a5  LBHI   $01FC
a5b0: 20 01        BRA    $015A
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
a5d5: 2c 07        BGE    $0185
a5d7: a6 c4        LDA    ,U
a5d9: 8a 08        ORA    #$08
a5db: a7 c4        STA    ,U
a5dd: 39           RTS
a5de: b3 50 02     SUBD   $5002
a5e1: 2f 06        BLE    $0190
a5e3: a6 c4        LDA    ,U
a5e5: 85 08        BITA   #$08
a5e7: 27 1e        BEQ    $01AE
a5e9: a6 c4        LDA    ,U
a5eb: 84 f7        ANDA   #$F7
a5ed: a7 c4        STA    ,U
a5ef: b6 47 03     LDA    $4703
a5f2: 2a 03        BPL    $019E
a5f4: bd a7 b6     JSR    $A7B6
a5f7: b6 47 03     LDA    $4703
a5fa: 2a 03        BPL    $01A6
a5fc: bd a7 c8     JSR    $A7C8
a5ff: b6 47 03     LDA    $4703
a602: 2a 03        BPL    $01AE
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
a62a: 2c 07        BGE    $01DA
a62c: a6 c4        LDA    ,U
a62e: 8a 08        ORA    #$08
a630: a7 c4        STA    ,U
a632: 39           RTS
a633: b3 50 02     SUBD   $5002
a636: 2f 06        BLE    $01E5
a638: a6 c4        LDA    ,U
a63a: 85 08        BITA   #$08
a63c: 27 16        BEQ    $01FB
a63e: a6 c4        LDA    ,U
a640: 84 f7        ANDA   #$F7
a642: a7 c4        STA    ,U
a644: b6 47 03     LDA    $4703
a647: 2a 03        BPL    $01F3
a649: bd a7 c8     JSR    $A7C8
a64c: b6 47 03     LDA    $4703
a64f: 2a 03        BPL    $01FB
a651: bd a7 bf     JSR    $A7BF
a654: 39           RTS
a655: 86 40        LDA    #$40
a657: b0 50 9e     SUBA   $5000
