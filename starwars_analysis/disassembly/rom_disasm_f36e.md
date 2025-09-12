f36e: b6 43 20     LDA    $4320
f371: 84 04        ANDA   #$04
f373: 26 0b        BNE    $0012
f375: b6 43 40     LDA    $4340
f378: 43           COMA
f379: 84 7f        ANDA   #$7F
f37b: 27 03        BEQ    $0012
f37d: 7e fd 07     JMP    $FD07
f380: 10 ce 00 00  LDS    #$0000
f384: ce f3 2e     LDU    #$F32E
f387: ae c1        LDX    ,U++
f389: 10 8e 08 00  LDY    #$0800
f38d: a6 84        LDA    ,X
f38f: 27 0c        BEQ    $002F
f391: 1f 40        TFR    S,D
f393: aa c8 1e     ORA    $1E,U
f396: ea c8 1f     ORB    $1F,U
f399: 1f 04        TFR    D,S
f39b: 20 3f        BRA    $006E
f39d: 86 80        LDA    #$80
f39f: 48           ASLA
f3a0: 49           ROLA
f3a1: a7 84        STA    ,X
f3a3: 1f 89        TFR    A,B
f3a5: e8 84        EORB   ,X
f3a7: 27 0c        BEQ    $0047
f3a9: 1f 40        TFR    S,D
f3ab: aa c8 1e     ORA    $1E,U
f3ae: ea c8 1f     ORB    $1F,U
f3b1: 1f 04        TFR    D,S
f3b3: 20 27        BRA    $006E
f3b5: 24 07        BCC    $0050
f3b7: 4d           TSTA
f3b8: 26 e6        BNE    $0032
f3ba: 8b ff        ADDA   #$FF
f3bc: 20 e2        BRA    $0032
f3be: 1f 89        TFR    A,B
f3c0: 5c           INCB
f3c1: 26 dd        BNE    $0032
f3c3: b7 46 40     STA    $4640
f3c6: 11 83 f3 32  CMPU   #$F332
f3ca: 27 06        BEQ    $0064
f3cc: 11 83 f3 34  CMPU   #$F334
f3d0: 26 04        BNE    $0068
f3d2: 30 02        LEAX   $2,X
f3d4: 20 02        BRA    $006A
f3d6: 30 01        LEAX   $1,X
f3d8: 31 3f        LEAY   -$1,Y
f3da: 26 b1        BNE    $001F
f3dc: 11 83 f3 40  CMPU   #$F340
f3e0: 25 a5        BCS    $0019
f3e2: ce f3 2e     LDU    #$F32E
f3e5: ae c1        LDX    ,U++
f3e7: 10 8e 08 00  LDY    #$0800
f3eb: 6c 84        INC    ,X
f3ed: 27 0c        BEQ    $008D
f3ef: 1f 40        TFR    S,D
f3f1: aa c8 1e     ORA    $1E,U
f3f4: ea c8 1f     ORB    $1F,U
f3f7: 1f 04        TFR    D,S
f3f9: 20 29        BRA    $00B6
f3fb: a6 84        LDA    ,X
f3fd: 27 0c        BEQ    $009D
f3ff: 1f 40        TFR    S,D
f401: aa c8 1e     ORA    $1E,U
f404: ea c8 1f     ORB    $1F,U
f407: 1f 04        TFR    D,S
f409: 20 19        BRA    $00B6
f40b: b7 46 40     STA    $4640
f40e: 11 83 f3 32  CMPU   #$F332
f412: 27 06        BEQ    $00AC
f414: 11 83 f3 34  CMPU   #$F334
f418: 26 04        BNE    $00B0
f41a: 30 02        LEAX   $2,X
f41c: 20 02        BRA    $00B2
f41e: 30 01        LEAX   $1,X
f420: 31 3f        LEAY   -$1,Y
f422: 26 c7        BNE    $007D
f424: 11 83 f3 40  CMPU   #$F340
f428: 25 bb        BCS    $0077
f42a: 1f 40        TFR    S,D
f42c: c4 01        ANDB   #$01
f42e: 26 0f        BNE    $00D1
f430: 8e 45 00     LDX    #$4500
f433: ce 4c 00     LDU    #$4C00
f436: ec 81        LDD    ,X++
f438: ed c1        STD    ,U++
f43a: 8c 46 00     CMPX   #$4600
f43d: 25 f7        BCS    $00C8
f43f: ce f3 42     LDU    #$F342
f442: 8e 45 00     LDX    #$4500
f445: cc 00 00     LDD    #$0000
f448: ed 81        STD    ,X++
f44a: 8c 46 00     CMPX   #$4600
f44d: 25 f9        BCS    $00DA
f44f: 8e 45 00     LDX    #$4500
f452: a6 84        LDA    ,X
f454: 84 0f        ANDA   #$0F
f456: 27 0c        BEQ    $00F6
f458: 1f 40        TFR    S,D
f45a: aa c8 1e     ORA    $1E,U
f45d: ea c8 1f     ORB    $1F,U
f460: 1f 04        TFR    D,S
f462: 20 53        BRA    $0149
f464: 86 80        LDA    #$80
f466: 48           ASLA
f467: 10 8e 00 04  LDY    #$0004
f46b: 49           ROLA
f46c: a7 84        STA    ,X
f46e: 1f 89        TFR    A,B
f470: e8 84        EORB   ,X
f472: c4 0f        ANDB   #$0F
f474: 27 0c        BEQ    $0114
f476: 1f 40        TFR    S,D
f478: aa c8 1e     ORA    $1E,U
f47b: ea c8 1f     ORB    $1F,U
f47e: 1f 04        TFR    D,S
f480: 20 35        BRA    $0149
f482: 31 3f        LEAY   -$1,Y
f484: 26 e5        BNE    $00FD
f486: 4d           TSTA
f487: 2b 08        BMI    $0123
f489: 86 ff        LDA    #$FF
f48b: 10 8e 00 05  LDY    #$0005
f48f: 20 da        BRA    $00FD
f491: b7 46 40     STA    $4640
f494: 30 01        LEAX   $1,X
f496: 8c 46 00     CMPX   #$4600
f499: 25 b7        BCS    $00E4
f49b: 8e 45 00     LDX    #$4500
f49e: 6c 84        INC    ,X
f4a0: a6 80        LDA    ,X+
f4a2: 84 0f        ANDA   #$0F
f4a4: 27 0c        BEQ    $0144
f4a6: 1f 40        TFR    S,D
f4a8: aa c8 1e     ORA    $1E,U
f4ab: ea c8 1f     ORB    $1F,U
f4ae: 1f 04        TFR    D,S
f4b0: 20 05        BRA    $0149
f4b2: 8c 46 00     CMPX   #$4600
f4b5: 25 e7        BCS    $0130
f4b7: 1f 40        TFR    S,D
f4b9: c4 01        ANDB   #$01
f4bb: 26 11        BNE    $0160
f4bd: 8e 4c 00     LDX    #$4C00
f4c0: ce 45 00     LDU    #$4500
f4c3: ec 81        LDD    ,X++
f4c5: ed c1        STD    ,U++
f4c7: 8c 4d 00     CMPX   #$4D00
f4ca: 25 f7        BCS    $0155
f4cc: 20 1e        BRA    $017E
f4ce: 86 ff        LDA    #$FF
f4d0: b7 46 87     STA    $4687
f4d3: 8e 01 00     LDX    #$0100
f4d6: b7 46 40     STA    $4640
f4d9: 30 1f        LEAX   -$1,X
f4db: 26 f9        BNE    $0168
f4dd: 86 00        LDA    #$00
f4df: b7 46 87     STA    $4687
f4e2: 8e a0 00     LDX    #$A000
f4e5: b7 46 40     STA    $4640
f4e8: 30 1f        LEAX   -$1,X
f4ea: 26 f9        BNE    $0177
f4ec: b7 46 40     STA    $4640
f4ef: 86 00        LDA    #$00
f4f1: b7 46 84     STA    $4684
f4f4: be f3 42     LDX    $F342
f4f7: 10 8e 20 00  LDY    #$2000
f4fb: 1f 10        TFR    X,D
f4fd: e9 01        ADCB   $1,X
f4ff: a9 81        ADCA   ,X++
f501: b7 46 40     STA    $4640
f504: 31 3e        LEAY   -$2,Y
f506: 26 f5        BNE    $018F
f508: 1f 01        TFR    D,X
f50a: 86 ff        LDA    #$FF
f50c: b7 46 84     STA    $4684
f50f: ce f3 44     LDU    #$F344
f512: 1f 10        TFR    X,D
f514: 10 8e 20 00  LDY    #$2000
f518: be f3 42     LDX    $F342
f51b: 20 0b        BRA    $01BA
f51d: ce f3 44     LDU    #$F344
f520: ae c1        LDX    ,U++
f522: 10 8e 20 00  LDY    #$2000
f526: 1f 10        TFR    X,D
f528: e9 01        ADCB   $1,X
f52a: a9 81        ADCA   ,X++
f52c: b7 46 40     STA    $4640
f52f: 31 3e        LEAY   -$2,Y
f531: 26 f5        BNE    $01BA
f533: ed c9 55 93  STD    $5593,U
f537: 27 0a        BEQ    $01D5
f539: 1f 40        TFR    S,D
f53b: aa c8 1e     ORA    $1E,U
f53e: ea c8 1f     ORB    $1F,U
f541: 1f 04        TFR    D,S
f543: 11 83 f3 4c  CMPU   #$F34C
f547: 25 d7        BCS    $01B2
f549: 11 83 f3 4e  CMPU   #$F34E
f54d: 24 08        BCC    $01E9
f54f: ae c1        LDX    ,U++
f551: 10 8e 10 00  LDY    #$1000
f555: 20 cf        BRA    $01B8
f557: 86 ff        LDA    #$FF
f559: b7 46 86     STA    $4686
f55c: b7 46 83     STA    $4683
f55f: b7 46 82     STA    $4682
f562: 0f d1        CLR    <$D1
f564: b6 43 20     LDA    $4320
f567: 84 04        ANDA   #$04
f569: 26 03        BNE    $0200
f56b: 7e fd 07     JMP    $FD07
