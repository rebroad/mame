f17f: 46           RORA
f180: c0 b7        SUBB   #$B7
f182: 46           RORA
f183: c0 20        SUBB   #$20
f185: 06 b7        ROR    <$B7
f187: 46           RORA
f188: c1 b7        CMPB   #$B7
f18a: 46           RORA
f18b: c1 39        CMPB   #$39
f18d: 8e 48 66     LDX    #$4866
f190: 96 2b        LDA    <$2B
f192: 12           NOP
f193: bd f1 c6     JSR    $F1C6
f196: a6 04        LDA    $4,X
f198: 81 78        CMPA   #$78
f19a: 2f 02        BLE    $001F
f19c: 86 78        LDA    #$78
f19e: 81 98        CMPA   #$98
f1a0: 2c 02        BGE    $0025
f1a2: 86 98        LDA    #$98
f1a4: a7 04        STA    $4,X
f1a6: bd f1 fd     JSR    $F1FD
f1a9: 8e 48 6f     LDX    #$486F
f1ac: 96 29        LDA    <$29
f1ae: 12           NOP
f1af: bd f1 c6     JSR    $F1C6
f1b2: a6 04        LDA    $4,X
f1b4: 81 70        CMPA   #$70
f1b6: 2f 02        BLE    $003B
f1b8: 86 70        LDA    #$70
f1ba: 81 90        CMPA   #$90
f1bc: 2c 02        BGE    $0041
f1be: 86 90        LDA    #$90
f1c0: a7 04        STA    $4,X
f1c2: bd f1 fd     JSR    $F1FD
f1c5: 39           RTS
f1c6: a1 84        CMPA   ,X
f1c8: 24 06        BCC    $0051
f1ca: a1 01        CMPA   $1,X
f1cc: 25 02        BCS    $0051
f1ce: 6a 84        DEC    ,X
f1d0: a7 01        STA    $1,X
f1d2: a1 84        CMPA   ,X
f1d4: 24 02        BCC    $0059
f1d6: a6 84        LDA    ,X
f1d8: a0 84        SUBA   ,X
f1da: 97 51        STA    <$51
f1dc: e6 02        LDB    $2,X
f1de: 3d           MUL
f1df: 9b 51        ADDA   <$51
f1e1: 26 02        BNE    $0066
f1e3: 86 01        LDA    #$01
f1e5: 25 04        BCS    $006C
f1e7: 6f 03        CLR    $3,X
f1e9: 20 0c        BRA    $0078
f1eb: 86 ff        LDA    #$FF
f1ed: 6c 03        INC    $3,X
f1ef: e6 03        LDB    $3,X
f1f1: c1 02        CMPB   #$02
f1f3: 25 02        BCS    $0078
f1f5: 6a 02        DEC    $2,X
f1f7: 5f           CLRB
f1f8: 80 80        SUBA   #$80
f1fa: a7 04        STA    $4,X
f1fc: 39           RTS
f1fd: 0f 51        CLR    <$51
f1ff: a6 04        LDA    $4,X
f201: c6 80        LDB    #$80
f203: a3 05        SUBD   $5,X
f205: 2c 03        BGE    $008B
f207: 40           NEGA
f208: 0a 51        DEC    <$51
f20a: 2f 03        BLE    $0090
f20c: c3 00 ff     ADDD   #$00FF
f20f: 81 f8        CMPA   #$F8
f211: 23 02        BLS    $0096
f213: 86 f8        LDA    #$F8
f215: c6 60        LDB    #$60
f217: 81 40        CMPA   #$40
f219: 24 02        BCC    $009E
f21b: c6 30        LDB    #$30
f21d: 3d           MUL
f21e: 0d 51        TST    <$51
f220: 2a 04        BPL    $00A7
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
f233: 24 02        BCC    $00B8
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
f24c: 24 02        BCC    $00D1
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
f28a: 26 f5        BNE    $0102
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
f2a7: 25 f9        BCS    $0123
f2a9: b7 46 40     STA    $4640
f2ac: 8e 50 00     LDX    #$5000
f2af: cc 00 00     LDD    #$0000
f2b2: ed 81        STD    ,X++
f2b4: b7 46 40     STA    $4640
f2b7: 8c 60 00     CMPX   #$6000
f2ba: 25 f6        BCS    $0133
f2bc: 8e 00 00     LDX    #$0000
f2bf: cc 00 00     LDD    #$0000
f2c2: ed 81        STD    ,X++
f2c4: b7 46 40     STA    $4640
f2c7: 8c 30 00     CMPX   #$3000
f2ca: 25 f6        BCS    $0143
f2cc: b6 43 00     LDA    $4300
f2cf: 84 10        ANDA   #$10
f2d1: 26 03        BNE    $0157
f2d3: 7e f3 6e     JMP    $F36E
f2d6: b6 43 40     LDA    $4340
f2d9: f6 43 60     LDB    $4360
f2dc: 97 24        STA    <$24
f2de: d7 27        STB    <$27
f2e0: 8e 08 00     LDX    #$0800
f2e3: 30 1f        LEAX   -$1,X
f2e5: 26 fc        BNE    $0164
f2e7: b6 43 40     LDA    $4340
f2ea: f6 43 60     LDB    $4360
f2ed: 91 24        CMPA   <$24
f2ef: 26 eb        BNE    $015D
f2f1: d1 27        CMPB   <$27
f2f3: 26 e7        BNE    $015D
f2f5: cc 20 20     LDD    #$2020
f2f8: 8e 00 00     LDX    #$0000
f2fb: ed 81        STD    ,X++
f2fd: b7 46 40     STA    $4640
f300: 8c 28 00     CMPX   #$2800
f303: 25 f6        BCS    $017C
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
f370: 20 84        BRA    $0177
f372: 04 26        LSR    <$26
f374: 0b b6        XDEC   <$B6
f376: 43           COMA
f377: 40           NEGA
f378: 43           COMA
f379: 84 7f        ANDA   #$7F
f37b: 27 03        BEQ    $0201
f37d: 7e fd 46     JMP    $FD00
