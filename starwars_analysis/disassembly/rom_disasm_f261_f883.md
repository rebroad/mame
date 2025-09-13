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
f28a: 26 f5        BNE    $F281
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
f2a7: 25 f9        BCS    $F2A2
f2a9: b7 46 40     STA    $4640
f2ac: 8e 50 00     LDX    #$5000
f2af: cc 00 00     LDD    #$0000
f2b2: ed 81        STD    ,X++
f2b4: b7 46 40     STA    $4640
f2b7: 8c 60 00     CMPX   #$6000
f2ba: 25 f6        BCS    $F2B2
f2bc: 8e 00 00     LDX    #$0000
f2bf: cc 00 00     LDD    #$0000
f2c2: ed 81        STD    ,X++
f2c4: b7 46 40     STA    $4640
f2c7: 8c 30 00     CMPX   #$3000
f2ca: 25 f6        BCS    $F2C2
f2cc: b6 43 00     LDA    $4300
f2cf: 84 10        ANDA   #$10
f2d1: 26 03        BNE    $F2D6
f2d3: 7e f3 6e     JMP    $F36E
f2d6: b6 43 40     LDA    $4340
f2d9: f6 43 60     LDB    $4360
f2dc: 97 24        STA    <$24
f2de: d7 27        STB    <$27
f2e0: 8e 08 00     LDX    #$0800
f2e3: 30 1f        LEAX   -$1,X
f2e5: 26 fc        BNE    $F2E3
f2e7: b6 43 40     LDA    $4340
f2ea: f6 43 60     LDB    $4360
f2ed: 91 24        CMPA   <$24
f2ef: 26 eb        BNE    $F2DC
f2f1: d1 27        CMPB   <$27
f2f3: 26 e7        BNE    $F2DC
f2f5: cc 20 20     LDD    #$2020
f2f8: 8e 00 00     LDX    #$0000
f2fb: ed 81        STD    ,X++
f2fd: b7 46 40     STA    $4640
f300: 8c 28 00     CMPX   #$2800
f303: 25 f6        BCS    $F2FB
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
f370: 20 84        BRA    $F2F6
f372: 04 26        LSR    <$26
f374: 0b b6        XDEC   <$B6
f376: 43           COMA
f377: 40           NEGA
f378: 43           COMA
f379: 84 7f        ANDA   #$7F
f37b: 27 03        BEQ    $F380
f37d: 7e fd 07     JMP    $FD07
f380: 10 ce 00 00  LDS    #$0000
f384: ce f3 2e     LDU    #$F32E
f387: ae c1        LDX    ,U++
f389: 10 8e 08 00  LDY    #$0800
f38d: a6 84        LDA    ,X
f38f: 27 0c        BEQ    $F39D
f391: 1f 40        TFR    S,D
f393: aa c8 1e     ORA    $1E,U
f396: ea c8 1f     ORB    $1F,U
f399: 1f 04        TFR    D,S
f39b: 20 3f        BRA    $F3DC
f39d: 86 80        LDA    #$80
f39f: 48           ASLA
f3a0: 49           ROLA
f3a1: a7 84        STA    ,X
f3a3: 1f 89        TFR    A,B
f3a5: e8 84        EORB   ,X
f3a7: 27 0c        BEQ    $F3B5
f3a9: 1f 40        TFR    S,D
f3ab: aa c8 1e     ORA    $1E,U
f3ae: ea c8 1f     ORB    $1F,U
f3b1: 1f 04        TFR    D,S
f3b3: 20 27        BRA    $F3DC
f3b5: 24 07        BCC    $F3BE
f3b7: 4d           TSTA
f3b8: 26 e6        BNE    $F3A0
f3ba: 8b ff        ADDA   #$FF
f3bc: 20 e2        BRA    $F3A0
f3be: 1f 89        TFR    A,B
f3c0: 5c           INCB
f3c1: 26 dd        BNE    $F3A0
f3c3: b7 46 40     STA    $4640
f3c6: 11 83 f3 32  CMPU   #$F332
f3ca: 27 06        BEQ    $F3D2
f3cc: 11 83 f3 34  CMPU   #$F334
f3d0: 26 04        BNE    $F3D6
f3d2: 30 02        LEAX   $2,X
f3d4: 20 02        BRA    $F3D8
f3d6: 30 01        LEAX   $1,X
f3d8: 31 3f        LEAY   -$1,Y
f3da: 26 b1        BNE    $F38D
f3dc: 11 83 f3 40  CMPU   #$F340
f3e0: 25 a5        BCS    $F387
f3e2: ce f3 2e     LDU    #$F32E
f3e5: ae c1        LDX    ,U++
f3e7: 10 8e 08 00  LDY    #$0800
f3eb: 6c 84        INC    ,X
f3ed: 27 0c        BEQ    $F3FB
f3ef: 1f 40        TFR    S,D
f3f1: aa c8 1e     ORA    $1E,U
f3f4: ea c8 1f     ORB    $1F,U
f3f7: 1f 04        TFR    D,S
f3f9: 20 29        BRA    $F424
f3fb: a6 84        LDA    ,X
f3fd: 27 0c        BEQ    $F40B
f3ff: 1f 40        TFR    S,D
f401: aa c8 1e     ORA    $1E,U
f404: ea c8 1f     ORB    $1F,U
f407: 1f 04        TFR    D,S
f409: 20 19        BRA    $F424
f40b: b7 46 40     STA    $4640
f40e: 11 83 f3 32  CMPU   #$F332
f412: 27 06        BEQ    $F41A
f414: 11 83 f3 34  CMPU   #$F334
f418: 26 04        BNE    $F41E
f41a: 30 02        LEAX   $2,X
f41c: 20 02        BRA    $F420
f41e: 30 01        LEAX   $1,X
f420: 31 3f        LEAY   -$1,Y
f422: 26 c7        BNE    $F3EB
f424: 11 83 f3 40  CMPU   #$F340
f428: 25 bb        BCS    $F3E5
f42a: 1f 40        TFR    S,D
f42c: c4 01        ANDB   #$01
f42e: 26 0f        BNE    $F43F
f430: 8e 45 00     LDX    #$4500
f433: ce 4c 00     LDU    #$4C00
f436: ec 81        LDD    ,X++
f438: ed c1        STD    ,U++
f43a: 8c 46 00     CMPX   #$4600
f43d: 25 f7        BCS    $F436
f43f: ce f3 42     LDU    #$F342
f442: 8e 45 00     LDX    #$4500
f445: cc 00 00     LDD    #$0000
f448: ed 81        STD    ,X++
f44a: 8c 46 00     CMPX   #$4600
f44d: 25 f9        BCS    $F448
f44f: 8e 45 00     LDX    #$4500
f452: a6 84        LDA    ,X
f454: 84 0f        ANDA   #$0F
f456: 27 0c        BEQ    $F464
f458: 1f 40        TFR    S,D
f45a: aa c8 1e     ORA    $1E,U
f45d: ea c8 1f     ORB    $1F,U
f460: 1f 04        TFR    D,S
f462: 20 53        BRA    $F4B7
f464: 86 80        LDA    #$80
f466: 48           ASLA
f467: 10 8e 00 04  LDY    #$0004
f46b: 49           ROLA
f46c: a7 84        STA    ,X
f46e: 1f 89        TFR    A,B
f470: e8 84        EORB   ,X
f472: c4 0f        ANDB   #$0F
f474: 27 0c        BEQ    $F482
f476: 1f 40        TFR    S,D
f478: aa c8 1e     ORA    $1E,U
f47b: ea c8 1f     ORB    $1F,U
f47e: 1f 04        TFR    D,S
f480: 20 35        BRA    $F4B7
f482: 31 3f        LEAY   -$1,Y
f484: 26 e5        BNE    $F46B
f486: 4d           TSTA
f487: 2b 08        BMI    $F491
f489: 86 ff        LDA    #$FF
f48b: 10 8e 00 05  LDY    #$0005
f48f: 20 da        BRA    $F46B
f491: b7 46 40     STA    $4640
f494: 30 01        LEAX   $1,X
f496: 8c 46 00     CMPX   #$4600
f499: 25 b7        BCS    $F452
f49b: 8e 45 00     LDX    #$4500
f49e: 6c 84        INC    ,X
f4a0: a6 80        LDA    ,X+
f4a2: 84 0f        ANDA   #$0F
f4a4: 27 0c        BEQ    $F4B2
f4a6: 1f 40        TFR    S,D
f4a8: aa c8 1e     ORA    $1E,U
f4ab: ea c8 1f     ORB    $1F,U
f4ae: 1f 04        TFR    D,S
f4b0: 20 05        BRA    $F4B7
f4b2: 8c 46 00     CMPX   #$4600
f4b5: 25 e7        BCS    $F49E
f4b7: 1f 40        TFR    S,D
f4b9: c4 01        ANDB   #$01
f4bb: 26 11        BNE    $F4CE
f4bd: 8e 4c 00     LDX    #$4C00
f4c0: ce 45 00     LDU    #$4500
f4c3: ec 81        LDD    ,X++
f4c5: ed c1        STD    ,U++
f4c7: 8c 4d 00     CMPX   #$4D00
f4ca: 25 f7        BCS    $F4C3
f4cc: 20 1e        BRA    $F4EC
f4ce: 86 ff        LDA    #$FF
f4d0: b7 46 87     STA    $4687
f4d3: 8e 01 00     LDX    #$0100
f4d6: b7 46 40     STA    $4640
f4d9: 30 1f        LEAX   -$1,X
f4db: 26 f9        BNE    $F4D6
f4dd: 86 00        LDA    #$00
f4df: b7 46 87     STA    $4687
f4e2: 8e a0 00     LDX    #$A000
f4e5: b7 46 40     STA    $4640
f4e8: 30 1f        LEAX   -$1,X
f4ea: 26 f9        BNE    $F4E5
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
f506: 26 f5        BNE    $F4FD
f508: 1f 01        TFR    D,X
f50a: 86 ff        LDA    #$FF
f50c: b7 46 84     STA    $4684
f50f: ce f3 44     LDU    #$F344
f512: 1f 10        TFR    X,D
f514: 10 8e 20 00  LDY    #$2000
f518: be f3 42     LDX    $F342
f51b: 20 0b        BRA    $F528
f51d: ce f3 44     LDU    #$F344
f520: ae c1        LDX    ,U++
f522: 10 8e 20 00  LDY    #$2000
f526: 1f 10        TFR    X,D
f528: e9 01        ADCB   $1,X
f52a: a9 81        ADCA   ,X++
f52c: b7 46 40     STA    $4640
f52f: 31 3e        LEAY   -$2,Y
f531: 26 f5        BNE    $F528
f533: ed c9 55 93  STD    $5593,U
f537: 27 0a        BEQ    $F543
f539: 1f 40        TFR    S,D
f53b: aa c8 1e     ORA    $1E,U
f53e: ea c8 1f     ORB    $1F,U
f541: 1f 04        TFR    D,S
f543: 11 83 f3 4c  CMPU   #$F34C
f547: 25 d7        BCS    $F520
f549: 11 83 f3 4e  CMPU   #$F34E
f54d: 24 08        BCC    $F557
f54f: ae c1        LDX    ,U++
f551: 10 8e 10 00  LDY    #$1000
f555: 20 cf        BRA    $F526
f557: 86 ff        LDA    #$FF
f559: b7 46 86     STA    $4686
f55c: b7 46 83     STA    $4683
f55f: b7 46 82     STA    $4682
f562: 0f d1        CLR    <$D1
f564: b6 43 20     LDA    $4320
f567: 84 04        ANDA   #$04
f569: 26 03        BNE    $F56E
f56b: 7e fd 07     JMP    $FD07
f56e: b7 46 40     STA    $4640
f571: 10 df d2     STS    <$D2
f574: 1f 40        TFR    S,D
f576: c4 01        ANDB   #$01
f578: 26 73        BNE    $F5ED
f57a: 10 8e 00 00  LDY    #$0000
f57e: cc 60 00     LDD    #$6000
f581: ed a1        STD    ,Y++
f583: cc bf ae     LDD    #$BFAE
f586: ed a1        STD    ,Y++
f588: cc 80 40     LDD    #$8040
f58b: ed a1        STD    ,Y++
f58d: 86 48        LDA    #$48
f58f: 1f 8b        TFR    A,DP
f591: 10 df cc     STS    <$CC
f594: 10 ce 4f ff  LDS    #$4FFF
f598: c6 d3        LDB    #$D3
f59a: bd e7 c7     JSR    $E7C7
f59d: c6 b0        LDB    #$B0
f59f: bd e7 c7     JSR    $E7C7
f5a2: c6 b2        LDB    #$B2
f5a4: d7 ce        STB    <$CE
f5a6: dc cc        LDD    <$CC
f5a8: 26 07        BNE    $F5B1
f5aa: c6 b1        LDB    #$B1
f5ac: bd e7 c7     JSR    $E7C7
f5af: 20 3a        BRA    $F5EB
f5b1: 44           LSRA
f5b2: 56           RORB
f5b3: dd cc        STD    <$CC
f5b5: 24 2e        BCC    $F5E5
f5b7: d6 ce        LDB    <$CE
f5b9: bd e7 c7     JSR    $E7C7
f5bc: d6 ce        LDB    <$CE
f5be: c0 bc        SUBB   #$BC
f5c0: 25 23        BCS    $F5E5
f5c2: 58           ASLB
f5c3: 8e f7 43     LDX    #$F743
f5c6: 3a           ABX
f5c7: ee 84        LDU    ,X
f5c9: ef a1        STU    ,Y++
f5cb: ce 01 20     LDU    #$0120
f5ce: ef a1        STU    ,Y++
f5d0: 8e 48 d7     LDX    #$48D7
f5d3: 3a           ABX
f5d4: a6 80        LDA    ,X+
f5d6: 43           COMA
f5d7: bd e7 90     JSR    $E790
f5da: a6 84        LDA    ,X
f5dc: 43           COMA
f5dd: bd e7 90     JSR    $E790
f5e0: cc 80 40     LDD    #$8040
f5e3: ed a1        STD    ,Y++
f5e5: 0c ce        INC    <$CE
f5e7: dc cc        LDD    <$CC
f5e9: 26 c6        BNE    $F5B1
f5eb: 20 56        BRA    $F643
f5ed: 8e 00 08     LDX    #$0008
f5f0: 1f 40        TFR    S,D
f5f2: 54           LSRB
f5f3: 24 04        BCC    $F5F9
f5f5: 86 29        LDA    #$29
f5f7: 20 02        BRA    $F5FB
f5f9: 86 3b        LDA    #$3B
f5fb: b7 44 00     STA    $4400
f5fe: ce 00 00     LDU    #$0000
f601: f7 46 40     STB    $4640
f604: 33 41        LEAU   $1,U
f606: 11 83 a0 00  CMPU   #$A000
f60a: 25 f5        BCS    $F601
f60c: 30 1f        LEAX   -$1,X
f60e: 26 e2        BNE    $F5F2
f610: 8e 00 08     LDX    #$0008
f613: 1f 40        TFR    S,D
f615: 44           LSRA
f616: 24 04        BCC    $F61C
f618: c6 29        LDB    #$29
f61a: 20 02        BRA    $F61E
f61c: c6 3b        LDB    #$3B
f61e: f7 44 00     STB    $4400
f621: ce 00 00     LDU    #$0000
f624: b7 46 40     STA    $4640
f627: 33 41        LEAU   $1,U
f629: 11 83 a0 00  CMPU   #$A000
f62d: 25 f5        BCS    $F624
f62f: 30 1f        LEAX   -$1,X
f631: 26 e2        BNE    $F615
f633: ce 00 00     LDU    #$0000
f636: b7 46 40     STA    $4640
f639: 33 41        LEAU   $1,U
f63b: 11 83 ff 00  CMPU   #$FF00
f63f: 25 f5        BCS    $F636
f641: 20 aa        BRA    $F5ED
f643: cc 20 20     LDD    #$2020
f646: ed a1        STD    ,Y++
f648: ce f7 23     LDU    #$F723
f64b: 0f c0        CLR    <$C0
f64d: 86 03        LDA    #$03
f64f: 97 c5        STA    <$C5
f651: 97 c6        STA    <$C6
f653: 97 c7        STA    <$C7
f655: 97 d6        STA    <$D6
f657: 8e f3 4e     LDX    #$F34E
f65a: 9f d4        STX    <$D4
f65c: cc 00 01     LDD    #$0001
f65f: 8e 00 00     LDX    #$0000
f662: b7 46 40     STA    $4640
f665: 30 8b        LEAX   D,X
f667: 8c 07 08     CMPX   #$0708
f66a: 25 f6        BCS    $F662
f66c: b7 46 20     STA    $4620
f66f: b6 43 20     LDA    $4320
f672: 84 04        ANDA   #$04
f674: 26 03        BNE    $F679
f676: 7e f7 20     JMP    $F720
f679: b6 43 00     LDA    $4300
f67c: 84 04        ANDA   #$04
f67e: 26 1f        BNE    $F69F
f680: 96 c5        LDA    <$C5
f682: 27 19        BEQ    $F69D
f684: 4a           DECA
f685: 26 16        BNE    $F69D
f687: 33 42        LEAU   $2,U
f689: 11 83 f7 35  CMPU   #$F735
f68d: 25 03        BCS    $F692
f68f: ce f7 25     LDU    #$F725
f692: cc 00 00     LDD    #$0000
f695: dd c2        STD    <$C2
f697: 97 c4        STA    <$C4
f699: 97 c0        STA    <$C0
f69b: 86 80        LDA    #$80
f69d: 20 02        BRA    $F6A1
f69f: 86 03        LDA    #$03
f6a1: 97 c5        STA    <$C5
f6a3: b6 43 00     LDA    $4300
f6a6: 43           COMA
f6a7: 84 c0        ANDA   #$C0
f6a9: 27 1c        BEQ    $F6C7
f6ab: 96 c6        LDA    <$C6
f6ad: 27 16        BEQ    $F6C5
f6af: 4a           DECA
f6b0: 26 13        BNE    $F6C5
f6b2: d6 c0        LDB    <$C0
f6b4: cb 02        ADDB   #$02
f6b6: c1 0e        CMPB   #$0E
f6b8: 25 01        BCS    $F6BB
f6ba: 5f           CLRB
f6bb: d7 c0        STB    <$C0
f6bd: c1 04        CMPB   #$04
f6bf: 26 02        BNE    $F6C3
f6c1: 0f c1        CLR    <$C1
f6c3: 86 80        LDA    #$80
f6c5: 20 02        BRA    $F6C9
f6c7: 86 03        LDA    #$03
f6c9: 97 c6        STA    <$C6
f6cb: 11 83 f7 33  CMPU   #$F733
f6cf: 26 1f        BNE    $F6F0
f6d1: b6 43 20     LDA    $4320
f6d4: 43           COMA
f6d5: 84 30        ANDA   #$30
f6d7: 27 11        BEQ    $F6EA
f6d9: 96 c7        LDA    <$C7
f6db: 27 0b        BEQ    $F6E8
f6dd: 4a           DECA
f6de: 26 08        BNE    $F6E8
f6e0: d6 c1        LDB    <$C1
f6e2: c8 01        EORB   #$01
f6e4: d7 c1        STB    <$C1
f6e6: 86 80        LDA    #$80
f6e8: 20 02        BRA    $F6EC
f6ea: 86 03        LDA    #$03
f6ec: 97 c7        STA    <$C7
f6ee: 20 02        BRA    $F6F2
f6f0: 0f c1        CLR    <$C1
f6f2: 10 8e 00 00  LDY    #$0000
f6f6: d6 c0        LDB    <$C0
f6f8: 8e f7 35     LDX    #$F735
f6fb: ec 85        LDD    B,X
f6fd: 10 83 67 80  CMPD   #$6780
f701: 26 06        BNE    $F709
f703: 0d c1        TST    <$C1
f705: 27 02        BEQ    $F709
f707: c6 20        LDB    #$20
f709: ed a1        STD    ,Y++
f70b: 6e d4        JMP    [,U]
f70d: cc 20 20     LDD    #$2020
f710: ed a1        STD    ,Y++
f712: ed a1        STD    ,Y++
f714: b7 46 00     STA    $4600
f717: b6 43 00     LDA    $4300
f71a: 84 10        ANDA   #$10
f71c: 10 27 ff 3c  LBEQ   $F65C
f720: 7e f7 20     JMP    $F720
f723: f7 4f f7     STB    $4FF7
f726: 7f f9 58     CLR    $F958
f729: f8 8c f8     EORB   $8CF8
f72c: 84 f8        ANDA   #$F8
f72e: 94 f8        ANDA   <$F8
f730: aa f8 cc     ORA    [-$34,S]
f733: f9 3f 64     ADCB   $3F64
f736: 80 62        SUBA   #$62
f738: 80 61        SUBA   #$61
f73a: 80 65        SUBA   #$65
f73c: 80 67        SUBA   #$67
f73e: 80 66        SUBA   #$66
f740: 80 63        SUBA   #$63
f742: 80 1f        SUBA   #$1F
f744: 38 1f        XANDCC #$1F
f746: 06 1e        ROR    <$1E
f748: d4 1e        ANDB   <$1E
f74a: a2 1e        SBCA   -$2,X
f74c: 70 1f 6a     NEG    $1F6A
f74f: 0a d6        DEC    <$D6
f751: 2a 29        BPL    $F77C
f753: 86 10        LDA    #$10
f755: 97 d6        STA    <$D6
f757: 9e d4        LDX    <$D4
f759: dc d2        LDD    <$D2
f75b: a4 84        ANDA   ,X
f75d: 26 08        BNE    $F767
f75f: e4 01        ANDB   $1,X
f761: 26 04        BNE    $F767
f763: 86 3b        LDA    #$3B
f765: 20 02        BRA    $F769
f767: 86 29        LDA    #$29
f769: b7 44 00     STA    $4400
f76c: 30 02        LEAX   $2,X
f76e: 8c f3 6e     CMPX   #$F36E
f771: 25 07        BCS    $F77A
f773: 86 20        LDA    #$20
f775: 97 d6        STA    <$D6
f777: 8e f3 4e     LDX    #$F34E
f77a: 9f d4        STX    <$D4
f77c: 7e f7 14     JMP    $F714
f77f: b7 46 c0     STA    $46C0
f782: b7 46 c0     STA    $46C0
f785: cc bf ae     LDD    #$BFAE
f788: ed a1        STD    ,Y++
f78a: cc 80 40     LDD    #$8040
f78d: ed a1        STD    ,Y++
f78f: 10 ce 4f ff  LDS    #$4FFF
f793: c6 9e        LDB    #$9E
f795: bd e7 c7     JSR    $E7C7
f798: c6 d3        LDB    #$D3
f79a: bd e7 c7     JSR    $E7C7
f79d: c6 9f        LDB    #$9F
f79f: d7 ce        STB    <$CE
f7a1: b6 43 00     LDA    $4300
f7a4: f6 43 20     LDB    $4320
f7a7: ca c7        ORB    #$C7
f7a9: dd cc        STD    <$CC
f7ab: 58           ASLB
f7ac: 49           ROLA
f7ad: dd cc        STD    <$CC
f7af: 25 05        BCS    $F7B6
f7b1: d6 ce        LDB    <$CE
f7b3: bd e7 c7     JSR    $E7C7
f7b6: 0c ce        INC    <$CE
f7b8: dc cc        LDD    <$CC
f7ba: 26 ef        BNE    $F7AB
f7bc: dc c8        LDD    <$C8
f7be: dd ca        STD    <$CA
f7c0: b6 43 00     LDA    $4300
f7c3: 84 cf        ANDA   #$CF
f7c5: f6 43 20     LDB    $4320
f7c8: c4 3a        ANDB   #$3A
f7ca: dd c8        STD    <$C8
f7cc: 98 ca        EORA   <$CA
f7ce: 94 ca        ANDA   <$CA
f7d0: d8 cb        EORB   <$CB
f7d2: d4 cb        ANDB   <$CB
f7d4: 10 83 00 00  CMPD   #$0000
f7d8: 27 05        BEQ    $F7DF
f7da: 86 3b        LDA    #$3B
f7dc: b7 44 00     STA    $4400
f7df: cc 1e a2     LDD    #$1EA2
f7e2: ed a1        STD    ,Y++
f7e4: cc 1f 74     LDD    #$1F74
f7e7: ed a1        STD    ,Y++
f7e9: 86 10        LDA    #$10
f7eb: bd e7 90     JSR    $E790
f7ee: fc 30 1e     LDD    $301E
f7f1: ed a1        STD    ,Y++
f7f3: fc 30 02     LDD    $3002
f7f6: ed a1        STD    ,Y++
f7f8: b6 43 40     LDA    $4340
f7fb: bd f8 6c     JSR    $F86C
f7fe: cc 1e 70     LDD    #$1E70
f801: ed a1        STD    ,Y++
f803: cc 1f 5c     LDD    #$1F5C
f806: ed a1        STD    ,Y++
f808: 86 10        LDA    #$10
f80a: bd e7 90     JSR    $E790
f80d: fc 30 20     LDD    $3020
f810: ed a1        STD    ,Y++
f812: fc 30 22     LDD    $3022
f815: ed a1        STD    ,Y++
f817: fc 30 02     LDD    $3002
f81a: ed a1        STD    ,Y++
f81c: b6 43 60     LDA    $4360
f81f: bd f8 6c     JSR    $F86C
f822: c6 af        LDB    #$AF
f824: bd e7 c7     JSR    $E7C7
f827: cc bf d5     LDD    #$BFD5
f82a: ed a1        STD    ,Y++
f82c: cc 00 00     LDD    #$0000
f82f: ed a1        STD    ,Y++
f831: cc 01 40     LDD    #$0140
f834: ed a1        STD    ,Y++
f836: f6 43 80     LDB    $4380
f839: c0 80        SUBB   #$80
f83b: 1d           SEX
f83c: 1f 03        TFR    D,U
f83e: 47           ASRA
f83f: 56           RORB
f840: 33 cb        LEAU   D,U
f842: 1f 30        TFR    U,D
f844: 84 1f        ANDA   #$1F
f846: ed a1        STD    ,Y++
f848: b7 46 c1     STA    $46C1
f84b: b7 46 c1     STA    $46C1
f84e: 8e 00 14     LDX    #$0014
f851: 30 1f        LEAX   -$1,X
f853: 26 fc        BNE    $F851
f855: f6 43 80     LDB    $4380
f858: c0 80        SUBB   #$80
f85a: 1d           SEX
f85b: 84 1f        ANDA   #$1F
f85d: 8a e0        ORA    #$E0
f85f: ed a1        STD    ,Y++
f861: cc 80 40     LDD    #$8040
f864: ed a1        STD    ,Y++
f866: ce f7 25     LDU    #$F725
f869: 7e f7 0d     JMP    $F70D
f86c: c6 07        LDB    #$07
f86e: 44           LSRA
f86f: 24 05        BCC    $F876
f871: be 30 22     LDX    $3022
f874: 20 03        BRA    $F879
f876: be 30 32     LDX    $3032
f879: af a1        STX    ,Y++
f87b: 5a           DECB
f87c: 2a f0        BPL    $F86E
f87e: cc 80 40     LDD    #$8040
f881: ed a1        STD    ,Y++
f883: 39           RTS
