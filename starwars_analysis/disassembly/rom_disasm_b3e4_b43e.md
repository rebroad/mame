b3e4: b6 49 c0     LDA    $49C0
b3e7: 81 03        CMPA   #$03
b3e9: 25 05        BCS    $B3F0
b3eb: 86 00        LDA    #$00
b3ed: b7 49 c0     STA    $49C0
b3f0: 86 01        LDA    #$01
b3f2: 97 9c        STA    <$9C
b3f4: 86 0b        LDA    #$0B
b3f6: 97 dc        STA    <$DC
b3f8: 97 9d        STA    <$9D
b3fa: bd cd 38     JSR    $CD38
b3fd: bd b4 3f     JSR    $B43F
b400: 96 9d        LDA    <$9D
b402: 97 dc        STA    <$DC
b404: bd cd 44     JSR    $CD44
b407: bd b5 79     JSR    $B579
b40a: 86 02        LDA    #$02
b40c: 97 9c        STA    <$9C
b40e: 86 0e        LDA    #$0E
b410: 97 dc        STA    <$DC
b412: 97 9d        STA    <$9D
b414: bd cd 38     JSR    $CD38
b417: bd b4 3f     JSR    $B43F
b41a: 96 9d        LDA    <$9D
b41c: 97 dc        STA    <$DC
b41e: bd cd 44     JSR    $CD44
b421: bd b5 79     JSR    $B579
b424: 86 03        LDA    #$03
b426: 97 9c        STA    <$9C
b428: 86 0c        LDA    #$0C
b42a: 97 dc        STA    <$DC
b42c: 97 9d        STA    <$9D
b42e: bd cd 38     JSR    $CD38
b431: bd b4 3f     JSR    $B43F
b434: 96 9d        LDA    <$9D
b436: 97 dc        STA    <$DC
b438: bd cd 44     JSR    $CD44
b43b: bd b5 79     JSR    $B579
b43e: 39           RTS
b43f: 86 00        LDA    #$00
b441: b7 49 bd     STA    $49BD
b444: b6 49 c0     LDA    $49C0
b447: b7 49 be     STA    $49BE
b44a: 86 88        LDA    #$88
b44c: b7 49 c1     STA    $49C1
b44f: f6 50 40     LDB    $5040
b452: 54           LSRB
b453: 54           LSRB
b454: 54           LSRB
b455: c4 0f        ANDB   #$0F
b457: 8e 49 89     LDX    #$4989
b45a: 3a           ABX
b45b: 9f 64        STX    <$64
b45d: b6 50 40     LDA    $5040
b460: 84 f8        ANDA   #$F8
b462: 8b 04        ADDA   #$04
b464: c6 00        LDB    #$00
b466: fd 50 78     STD    $5078
b469: cc fc 00     LDD    #$FC00
b46c: fd 50 7a     STD    $507A
b46f: cc f2 00     LDD    #$F200
b472: fd 50 7c     STD    $507C
b475: 9e 64        LDX    <$64
b477: 8c 49 99     CMPX   #$4999
b47a: 25 03        BCS    $B47F
b47c: 30 88 f0     LEAX   -$10,X
b47f: a6 80        LDA    ,X+
b481: 9f 64        STX    <$64
b483: 97 9e        STA    <$9E
b485: 84 03        ANDA   #$03
b487: 91 9c        CMPA   <$9C
b489: 10 26 00 89  LBNE   $B516
b48d: 96 9d        LDA    <$9D
b48f: 97 dc        STA    <$DC
b491: cc 00 0f     LDD    #$000F
b494: fd 47 01     STD    $4701
b497: 86 67        LDA    #$67
b499: bd cd ba     JSR    $CDBA
b49c: 96 9c        LDA    <$9C
b49e: 81 02        CMPA   #$02
b4a0: 26 13        BNE    $B4B5
b4a2: 7c 49 bd     INC    $49BD
b4a5: f6 49 be     LDB    $49BE
b4a8: 58           ASLB
b4a9: 8e b6 b3     LDX    #$B6B3
b4ac: ec 85        LDD    B,X
b4ae: ed a1        STD    ,Y++
b4b0: b6 49 c1     LDA    $49C1
b4b3: a7 3f        STA    -$1,Y
b4b5: fc 50 78     LDD    $5078
b4b8: b3 50 40     SUBD   $5040
b4bb: 10 83 10 00  CMPD   #$1000
b4bf: 2e 4f        BGT    $B510
b4c1: 96 9d        LDA    <$9D
b4c3: 81 0e        CMPA   #$0E
b4c5: 26 44        BNE    $B50B
b4c7: fc 50 00     LDD    $5000
b4ca: 83 00 00     SUBD   #$0000
b4cd: 2d 47        BLT    $B516
b4cf: fc 50 42     LDD    $5042
b4d2: 2e 37        BGT    $B50B
b4d4: fc 50 7c     LDD    $507C
b4d7: c3 02 00     ADDD   #$0200
b4da: b3 50 44     SUBD   $5044
b4dd: 2d 2c        BLT    $B50B
b4df: 83 04 00     SUBD   #$0400
b4e2: 2e 27        BGT    $B50B
b4e4: fc 50 78     LDD    $5078
b4e7: b3 50 40     SUBD   $5040
b4ea: 83 04 00     SUBD   #$0400
b4ed: 22 1c        BHI    $B50B
b4ef: 86 0f        LDA    #$0F
b4f1: 97 dc        STA    <$DC
b4f3: 96 60        LDA    <$60
b4f5: 2d 06        BLT    $B4FD
b4f7: bd 98 74     JSR    $9874
b4fa: bd bd b2     JSR    $BDB2
b4fd: 96 63        LDA    <$63
b4ff: 26 0a        BNE    $B50B
b501: 86 4e        LDA    #$4E
b503: f6 47 03     LDB    $4703
b506: 2a 01        BPL    $B509
b508: 40           NEGA
b509: 97 63        STA    <$63
b50b: bd cd 5c     JSR    $CD5C
b50e: 20 03        BRA    $B513
b510: bd cd 50     JSR    $CD50
b513: bd cd 74     JSR    $CD74
b516: fc 50 7c     LDD    $507C
b519: c3 04 00     ADDD   #$0400
b51c: fd 50 7c     STD    $507C
b51f: 96 9e        LDA    <$9E
b521: 44           LSRA
b522: 44           LSRA
b523: 10 26 ff 5c  LBNE   $B483
b527: 96 9c        LDA    <$9C
b529: 81 02        CMPA   #$02
b52b: 26 38        BNE    $B565
b52d: 9e 64        LDX    <$64
b52f: a6 89 00 0f  LDA    $000F,X
b533: 48           ASLA
b534: 24 07        BCC    $B53D
b536: 2b 05        BMI    $B53D
b538: 7c 49 bd     INC    $49BD
b53b: 20 03        BRA    $B540
b53d: 48           ASLA
b53e: 26 f3        BNE    $B533
b540: b6 49 bd     LDA    $49BD
b543: 27 20        BEQ    $B565
b545: b6 49 be     LDA    $49BE
b548: 4c           INCA
b549: 81 03        CMPA   #$03
b54b: 25 02        BCS    $B54F
b54d: 86 00        LDA    #$00
b54f: b7 49 be     STA    $49BE
b552: b6 49 c1     LDA    $49C1
b555: 80 08        SUBA   #$08
b557: 81 40        CMPA   #$40
b559: 24 02        BCC    $B55D
b55b: 86 40        LDA    #$40
b55d: b7 49 c1     STA    $49C1
b560: 86 00        LDA    #$00
b562: b7 49 bd     STA    $49BD
b565: fc 50 78     LDD    $5078
b568: c3 08 00     ADDD   #$0800
b56b: fd 50 78     STD    $5078
b56e: b3 50 40     SUBD   $5040
b571: 83 70 00     SUBD   #$7000
b574: 10 25 fe f7  LBCS   $B46F
b578: 39           RTS
b579: 86 00        LDA    #$00
b57b: b7 49 bd     STA    $49BD
b57e: b6 49 c0     LDA    $49C0
b581: b7 49 be     STA    $49BE
b584: 86 88        LDA    #$88
b586: b7 49 c1     STA    $49C1
b589: f6 50 40     LDB    $5040
b58c: 54           LSRB
b58d: 54           LSRB
b58e: 54           LSRB
b58f: c4 0f        ANDB   #$0F
b591: 8e 49 99     LDX    #$4999
b594: 3a           ABX
b595: 9f 64        STX    <$64
b597: b6 50 40     LDA    $5040
b59a: 84 f8        ANDA   #$F8
b59c: 8b 04        ADDA   #$04
b59e: c6 00        LDB    #$00
b5a0: fd 50 78     STD    $5078
b5a3: cc 04 00     LDD    #$0400
b5a6: fd 50 7a     STD    $507A
b5a9: cc f2 00     LDD    #$F200
b5ac: fd 50 7c     STD    $507C
b5af: 9e 64        LDX    <$64
b5b1: 8c 49 a9     CMPX   #$49A9
b5b4: 25 03        BCS    $B5B9
b5b6: 30 88 f0     LEAX   -$10,X
b5b9: a6 80        LDA    ,X+
b5bb: 9f 64        STX    <$64
b5bd: 97 9e        STA    <$9E
b5bf: 84 03        ANDA   #$03
b5c1: 91 9c        CMPA   <$9C
b5c3: 10 26 00 89  LBNE   $B650
b5c7: 96 9d        LDA    <$9D
b5c9: 97 dc        STA    <$DC
b5cb: cc 00 0f     LDD    #$000F
b5ce: fd 47 01     STD    $4701
b5d1: 86 67        LDA    #$67
b5d3: bd cd ba     JSR    $CDBA
b5d6: 96 9c        LDA    <$9C
b5d8: 81 02        CMPA   #$02
b5da: 26 13        BNE    $B5EF
b5dc: 7c 49 bd     INC    $49BD
b5df: f6 49 be     LDB    $49BE
b5e2: 58           ASLB
b5e3: 8e 00 00     LDX    #$0000
