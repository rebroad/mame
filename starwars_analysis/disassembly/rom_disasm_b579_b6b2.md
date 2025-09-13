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
b5e3: 8e b6 b3     LDX    #$B6B3
b5e6: ec 85        LDD    B,X
b5e8: ed a1        STD    ,Y++
b5ea: b6 49 c1     LDA    $49C1
b5ed: a7 3f        STA    -$1,Y
b5ef: fc 50 78     LDD    $5078
b5f2: b3 50 40     SUBD   $5040
b5f5: 10 83 10 00  CMPD   #$1000
b5f9: 2e 4f        BGT    $B64A
b5fb: 96 9d        LDA    <$9D
b5fd: 81 0e        CMPA   #$0E
b5ff: 26 44        BNE    $B645
b601: fc 50 00     LDD    $5000
b604: 83 00 00     SUBD   #$0000
b607: 2d 47        BLT    $B650
b609: fc 50 42     LDD    $5042
b60c: 2d 37        BLT    $B645
b60e: fc 50 7c     LDD    $507C
b611: c3 02 00     ADDD   #$0200
b614: b3 50 44     SUBD   $5044
b617: 2d 2c        BLT    $B645
b619: 83 04 00     SUBD   #$0400
b61c: 2e 27        BGT    $B645
b61e: fc 50 78     LDD    $5078
b621: b3 50 40     SUBD   $5040
b624: 83 04 00     SUBD   #$0400
b627: 22 1c        BHI    $B645
b629: 86 0f        LDA    #$0F
b62b: 97 dc        STA    <$DC
b62d: 96 60        LDA    <$60
b62f: 2d 06        BLT    $B637
b631: bd 98 74     JSR    $9874
b634: bd bd b2     JSR    $BDB2
b637: 96 63        LDA    <$63
b639: 26 0a        BNE    $B645
b63b: 86 4e        LDA    #$4E
b63d: f6 47 03     LDB    $4703
b640: 2a 01        BPL    $B643
b642: 40           NEGA
b643: 97 63        STA    <$63
b645: bd cd 5c     JSR    $CD5C
b648: 20 03        BRA    $B64D
b64a: bd cd 50     JSR    $CD50
b64d: bd cd 74     JSR    $CD74
b650: fc 50 7c     LDD    $507C
b653: c3 04 00     ADDD   #$0400
b656: fd 50 7c     STD    $507C
b659: 96 9e        LDA    <$9E
b65b: 44           LSRA
b65c: 44           LSRA
b65d: 10 26 ff 5c  LBNE   $B5BD
b661: 96 9c        LDA    <$9C
b663: 81 02        CMPA   #$02
b665: 26 38        BNE    $B69F
b667: 9e 64        LDX    <$64
b669: a6 89 ff ef  LDA    -$0011,X
b66d: 48           ASLA
b66e: 24 07        BCC    $B677
b670: 2b 05        BMI    $B677
b672: 7c 49 bd     INC    $49BD
b675: 20 03        BRA    $B67A
b677: 48           ASLA
b678: 26 f3        BNE    $B66D
b67a: b6 49 bd     LDA    $49BD
b67d: 27 20        BEQ    $B69F
b67f: b6 49 be     LDA    $49BE
b682: 4c           INCA
b683: 81 03        CMPA   #$03
b685: 25 02        BCS    $B689
b687: 86 00        LDA    #$00
b689: b7 49 be     STA    $49BE
b68c: b6 49 c1     LDA    $49C1
b68f: 80 08        SUBA   #$08
b691: 81 40        CMPA   #$40
b693: 24 02        BCC    $B697
b695: 86 40        LDA    #$40
b697: b7 49 c1     STA    $49C1
b69a: 86 00        LDA    #$00
b69c: b7 49 bd     STA    $49BD
b69f: fc 50 78     LDD    $5078
b6a2: c3 08 00     ADDD   #$0800
b6a5: fd 50 78     STD    $5078
b6a8: b3 50 40     SUBD   $5040
b6ab: 83 70 00     SUBD   #$7000
b6ae: 10 25 fe f7  LBCS   $B5A9
b6b2: 39           RTS
b6b3: 66 80        ROR    ,X+
b6b5: 63 80        COM    ,X+
b6b7: 65 80        LSR    ,X+
b6b9: bd b6 c7     JSR    $B6C7
b6bc: bd b6 d7     JSR    $B6D7
b6bf: 39           RTS
b6c0: bd b6 cc     JSR    $B6CC
b6c3: bd b6 d7     JSR    $B6D7
b6c6: 39           RTS
b6c7: cc 63 80     LDD    #$6380
b6ca: ed a1        STD    ,Y++
b6cc: cc a0 12     LDD    #$A012
b6cf: ed a1        STD    ,Y++
b6d1: fc 32 fe     LDD    $32FE
b6d4: ed a1        STD    ,Y++
b6d6: 39           RTS
b6d7: 96 7d        LDA    <$7D
b6d9: 2a 01        BPL    $B6DC
b6db: 40           NEGA
b6dc: c6 6e        LDB    #$6E
b6de: 3d           MUL
b6df: d6 7d        LDB    <$7D
b6e1: 2a 01        BPL    $B6E4
b6e3: 40           NEGA
b6e4: 1f 89        TFR    A,B
b6e6: 1d           SEX
b6e7: fd 4b 1c     STD    $4B1C
b6ea: 84 1f        ANDA   #$1F
b6ec: ed 22        STD    $2,Y
b6ee: ed 28        STD    $8,Y
b6f0: ed 2e        STD    $E,Y
b6f2: ed a8 14     STD    $14,Y
b6f5: ed a8 1a     STD    $1A,Y
b6f8: 96 7f        LDA    <$7F
b6fa: 2a 01        BPL    $B6FD
b6fc: 40           NEGA
b6fd: c6 50        LDB    #$50
b6ff: 3d           MUL
b700: d6 7f        LDB    <$7F
b702: 2a 01        BPL    $B705
b704: 40           NEGA
b705: 1f 89        TFR    A,B
b707: 1d           SEX
b708: fd 4b 1e     STD    $4B1E
b70b: 84 1f        ANDA   #$1F
b70d: ed a4        STD    ,Y
b70f: ed 26        STD    $6,Y
b711: ed 2c        STD    $C,Y
b713: ed a8 12     STD    $12,Y
b716: ed a8 18     STD    $18,Y
b719: cc ba ac     LDD    #$BAAC
b71c: ed 24        STD    $4,Y
b71e: cc ba 0d     LDD    #$BA0D
b721: ed 2a        STD    $A,Y
b723: cc bb 33     LDD    #$BB33
b726: ed a8 10     STD    $10,Y
b729: cc ba e6     LDD    #$BAE6
b72c: ed a8 16     STD    $16,Y
b72f: cc ba 5a     LDD    #$BA5A
b732: ed a8 1c     STD    $1C,Y
b735: 31 a8 1e     LEAY   $1E,Y
b738: 39           RTS
b739: 86 00        LDA    #$00
b73b: a7 03        STA    $3,X
b73d: bd 8e 1c     JSR    $8E1C
b740: 34 50        PSHS   U,X
b742: bd b7 6c     JSR    $B76C
b745: 35 50        PULS   X,U
b747: 39           RTS
b748: b9 c0 b9     ADCA   $C0B9
b74b: c0 b9        SUBB   #$B9
b74d: c0 b9        SUBB   #$B9
b74f: c0 b9        SUBB   #$B9
b751: c0 b9        SUBB   #$B9
b753: c0 b9        SUBB   #$B9
b755: f9 b9 f9     ADCB   $B9F9
b758: b9 f9 ba     ADCA   $F9BA
b75b: a0 ba        SUBA   [F,Y]
b75d: a4 ba        ANDA   [F,Y]
b75f: a8 ba        EORA   [F,Y]
b761: ac ba        CMPX   [F,Y]
b763: b0 ba b4     SUBA   $BAB4
b766: bb 1a bb     ADDA   $1ABB
b769: 1e bb        EXG    DP,DP
b76b: 16 ee 84     LBRA   $A5F2
b76e: bd b9 48     JSR    $B948
b771: 86 06        LDA    #$06
b773: a7 0c        STA    $C,X
b775: 86 18        LDA    #$18
b777: a7 0d        STA    $D,X
