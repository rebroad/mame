f1fd: 0f 51        CLR    <$51
f1ff: a6 04        LDA    $4,X
f201: c6 80        LDB    #$80
f203: a3 05        SUBD   $5,X
f205: 2c 03        BGE    $000D
f207: 40           NEGA
f208: 0a 51        DEC    <$51
f20a: 2f 03        BLE    $0012
f20c: c3 00 ff     ADDD   #$00FF
f20f: 81 f8        CMPA   #$F8
f211: 23 02        BLS    $0018
f213: 86 f8        LDA    #$F8
f215: c6 60        LDB    #$60
f217: 81 40        CMPA   #$40
f219: 24 02        BCC    $0020
f21b: c6 30        LDB    #$30
f21d: 3d           MUL
f21e: 0d 51        TST    <$51
f220: 2a 04        BPL    $0029
f222: 43           COMA
f223: 50           NEGB
f224: 82 ff        SBCA   #$FF
f226: e3 05        ADDD   $5,X
f228: ed 05        STD    $5,X
f22a: 39           RTS
f22b: d6 6b        LDB    <$6B
f22d: 96 6c        LDA    <$6C
f22f: 84 c0        ANDA   #$C0
f231: 48           ASLA
f232: 59           ROLB
f233: 24 02        BCC    $003A
f235: 8a 3f        ORA    #$3F
f237: 49           ROLA
f238: 59           ROLB
f239: 49           ROLA
f23a: dd 2f        STD    <$2F
f23c: c3 ff 98     ADDD   #$FF98
f23f: 84 1f        ANDA   #$1F
f241: fd 00 24     STD    >$0024
f244: d6 74        LDB    <$74
f246: 96 75        LDA    <$75
f248: 84 c0        ANDA   #$C0
f24a: 48           ASLA
f24b: 59           ROLB
f24c: 24 02        BCC    $0053
f24e: 8a 3f        ORA    #$3F
f250: 49           ROLA
f251: 59           ROLB
f252: 49           ROLA
f253: dd 2d        STD    <$2D
f255: 84 1f        ANDA   #$1F
f257: fd 00 26     STD    >$0026
f25a: cc c0 00     LDD    #$C000
f25d: fd 00 28     STD    >$0028
f260: 39           RTS
f261: 1a 10        ORCC   #$10
f263: 7f 46 84     CLR    $4684
f266: 86 00        LDA    #$00
f268: b7 46 86     STA    $4686
f26b: b7 46 83     STA    $4683
f26e: b7 46 82     STA    $4682
f271: 86 00        LDA    #$00
f273: b7 46 85     STA    $4685
f276: 86 80        LDA    #$80
f278: b7 46 85     STA    $4685
f27b: b7 46 20     STA    $4620
f27e: ce 00 00     LDU    #$0000
f281: b7 46 40     STA    $4640
f284: 33 5f        LEAU   -$1,U
f286: 11 83 00 00  CMPU   #$0000
f28a: 26 f5        BNE    $0084
f28c: 10 ce 4f ff  LDS    #$4FFF
f290: 86 48        LDA    #$48
f292: 1f 8b        TFR    A,DP
f294: b7 46 e0     STA    $46E0
f297: 86 00        LDA    #$00
f299: b7 44 00     STA    $4400
f29c: 8e 48 00     LDX    #$4800
f29f: cc 00 00     LDD    #$0000
f2a2: ed 81        STD    ,X++
f2a4: 8c 50 00     CMPX   #$5000
f2a7: 25 f9        BCS    $00A5
f2a9: b7 46 40     STA    $4640
f2ac: 8e 50 00     LDX    #$5000
f2af: cc 00 00     LDD    #$0000
f2b2: ed 81        STD    ,X++
f2b4: b7 46 40     STA    $4640
f2b7: 8c 60 00     CMPX   #$6000
f2ba: 25 f6        BCS    $00B5
f2bc: 8e 00 00     LDX    #$0000
f2bf: cc 00 00     LDD    #$0000
f2c2: ed 81        STD    ,X++
f2c4: b7 46 40     STA    $4640
f2c7: 8c 30 00     CMPX   #$3000
f2ca: 25 f6        BCS    $00C5
f2cc: b6 43 00     LDA    $4300
f2cf: 84 10        ANDA   #$10
f2d1: 26 03        BNE    $00D9
f2d3: 7e f3 6e     JMP    $F36E
f2d6: b6 43 40     LDA    $4340
f2d9: f6 43 60     LDB    $4360
f2dc: 97 24        STA    <$24
f2de: d7 27        STB    <$27
f2e0: 8e 08 00     LDX    #$0800
f2e3: 30 1f        LEAX   -$1,X
f2e5: 26 fc        BNE    $00E6
f2e7: b6 43 40     LDA    $4340
f2ea: f6 43 60     LDB    $4360
f2ed: 91 24        CMPA   <$24
f2ef: 26 eb        BNE    $00DF
f2f1: d1 27        CMPB   <$27
f2f3: 26 e7        BNE    $00DF
f2f5: cc 20 20     LDD    #$2020
f2f8: 8e 00 00     LDX    #$0000
f2fb: ed 81        STD    ,X++
f2fd: b7 46 40     STA    $4640
f300: 8c 28 00     CMPX   #$2800
f303: 25 f6        BCS    $00FE
f305: cc e0 38     LDD    #$E038
f308: fd 00 00     STD    >$0000
f30b: 86 ff        LDA    #$FF
f30d: 97 3f        STA    <$3F
f30f: 86 3f        LDA    #$3F
f311: 97 00        STA    <$00
f313: 86 40        LDA    #$40
f315: 97 28        STA    <$28
f317: bd c3 06     JSR    $C306
f31a: b7 46 40     STA    $4640
f31d: 86 ff        LDA    #$FF
f31f: b7 46 86     STA    $4686
f322: b7 46 83     STA    $4683
f325: b7 46 82     STA    $4682
f328: b7 46 60     STA    $4660
f32b: 7e 60 36     JMP    $6036
f32e: 48           ASLA
f32f: 00 50        NEG    <$50
f331: 00 50        NEG    <$50
f333: 01 00        NEG    <$00
f335: 00 08        NEG    <$08
f337: 00 10        NEG    <$10
f339: 00 18        NEG    <$18
f33b: 00 20        NEG    <$20
f33d: 00 28        NEG    <$28
f33f: 00 45        NEG    <$45
f341: 00 60        NEG    <$60
f343: 00 80        NEG    <$80
f345: 00 a0        NEG    <$A0
f347: 00 c0        NEG    <$C0
f349: 00 e0        NEG    <$E0
f34b: 00 28        NEG    <$28
f34d: 00 00        NEG    <$00
f34f: 01 00        NEG    <$00
f351: 02 00        XNC    <$00
f353: 04 00        LSR    <$00
f355: 08 00        ASL    <$00
f357: 10 00 20     NEG    <$20
f35a: 00 40        NEG    <$40
f35c: 00 80        NEG    <$80
f35e: 01 00        NEG    <$00
f360: 02 00        XNC    <$00
f362: 04 00        LSR    <$00
f364: 08 00        ASL    <$00
f366: 10 00 20     NEG    <$20
f369: 00 40        NEG    <$40
f36b: 00 80        NEG    <$80
f36d: 00 b6        NEG    <$B6
f36f: 43           COMA
f370: 20 84        BRA    $00F9
f372: 04 26        LSR    <$26
f374: 0b b6        XDEC   <$B6
f376: 43           COMA
f377: 40           NEGA
f378: 43           COMA
f379: 84 7f        ANDA   #$7F
f37b: 27 03        BEQ    $0183
f37d: 7e fd 07     JMP    $FD07
f380: 10 ce 00 00  LDS    #$0000
f384: ce f3 2e     LDU    #$F32E
f387: ae c1        LDX    ,U++
f389: 10 8e 08 00  LDY    #$0800
f38d: a6 84        LDA    ,X
f38f: 27 0c        BEQ    $01A0
f391: 1f 40        TFR    S,D
f393: aa c8 1e     ORA    $1E,U
f396: ea c8 1f     ORB    $1F,U
f399: 1f 04        TFR    D,S
f39b: 20 3f        BRA    $01DF
f39d: 86 80        LDA    #$80
f39f: 48           ASLA
f3a0: 49           ROLA
f3a1: a7 84        STA    ,X
f3a3: 1f 89        TFR    A,B
f3a5: e8 84        EORB   ,X
f3a7: 27 0c        BEQ    $01B8
f3a9: 1f 40        TFR    S,D
f3ab: aa c8 1e     ORA    $1E,U
f3ae: ea c8 1f     ORB    $1F,U
f3b1: 1f 04        TFR    D,S
f3b3: 20 27        BRA    $01DF
f3b5: 24 07        BCC    $01C1
f3b7: 4d           TSTA
f3b8: 26 e6        BNE    $01A3
f3ba: 8b ff        ADDA   #$FF
f3bc: 20 e2        BRA    $01A3
f3be: 1f 89        TFR    A,B
f3c0: 5c           INCB
f3c1: 26 dd        BNE    $01A3
f3c3: b7 46 40     STA    $4640
f3c6: 11 83 f3 32  CMPU   #$F332
f3ca: 27 06        BEQ    $01D5
f3cc: 11 83 f3 34  CMPU   #$F334
f3d0: 26 04        BNE    $01D9
f3d2: 30 02        LEAX   $2,X
f3d4: 20 02        BRA    $01DB
f3d6: 30 01        LEAX   $1,X
f3d8: 31 3f        LEAY   -$1,Y
f3da: 26 b1        BNE    $0190
f3dc: 11 83 f3 40  CMPU   #$F340
f3e0: 25 a5        BCS    $018A
f3e2: ce f3 2e     LDU    #$F32E
f3e5: ae c1        LDX    ,U++
f3e7: 10 8e 08 00  LDY    #$0800
f3eb: 6c 84        INC    ,X
f3ed: 27 0c        BEQ    $01FE
f3ef: 1f 40        TFR    S,D
f3f1: aa c8 1e     ORA    $1E,U
f3f4: ea c8 1f     ORB    $1F,U
f3f7: 1f 04        TFR    D,S
f3f9: 20 29        BRA    $0227
f3fb: a6 84        LDA    ,X
