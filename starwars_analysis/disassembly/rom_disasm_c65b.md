c65b: 30 1f        LEAX   -$1,X
c65d: 1f 10        TFR    X,D
c65f: fd 4a f8     STD    $4AF8
c662: 86 ff        LDA    #$FF
c664: b7 4a f7     STA    $4AF7
c667: 8e 45 00     LDX    #$4500
c66a: ce 4c 00     LDU    #$4C00
c66d: ec c1        LDD    ,U++
c66f: ed 81        STD    ,X++
c671: 8c 46 00     CMPX   #$4600
c674: 25 f7        BCS    $C66D
c676: 7d 4a f7     TST    $4AF7
c679: 39           RTS
c67a: 8e 45 00     LDX    #$4500
c67d: cc 00 00     LDD    #$0000
c680: ed 81        STD    ,X++
c682: 8c 46 00     CMPX   #$4600
c685: 25 f9        BCS    $C680
c687: 39           RTS
c688: 8e 07 d0     LDX    #$07D0
c68b: 30 1f        LEAX   -$1,X
c68d: 26 fc        BNE    $C68B
c68f: 39           RTS
c690: b6 4a f7     LDA    $4AF7
c693: 27 22        BEQ    $C6B7
c695: 81 01        CMPA   #$01
c697: 26 04        BNE    $C69D
c699: c6 9c        LDB    #$9C
c69b: 20 17        BRA    $C6B4
c69d: cc 1f 6a     LDD    #$1F6A
c6a0: ed a1        STD    ,Y++
c6a2: cc 01 a4     LDD    #$01A4
c6a5: ed a1        STD    ,Y++
c6a7: b6 4a f9     LDA    $4AF9
c6aa: bd e7 90     JSR    $E790
c6ad: cc 80 40     LDD    #$8040
c6b0: ed a1        STD    ,Y++
c6b2: c6 9d        LDB    #$9D
c6b4: bd e7 c7     JSR    $E7C7
c6b7: 39           RTS
c6b8: 86 ff        LDA    #$FF
c6ba: b7 46 87     STA    $4687
c6bd: bd 60 05     JSR    $6005
c6c0: 86 00        LDA    #$00
c6c2: b7 46 87     STA    $4687
c6c5: ce 00 00     LDU    #$0000
c6c8: bd 60 05     JSR    $6005
c6cb: 33 41        LEAU   $1,U
c6cd: 11 83 00 20  CMPU   #$0020
c6d1: 25 f5        BCS    $C6C8
c6d3: 39           RTS
c6d4: ce 4a fa     LDU    #$4AFA
c6d7: 86 03        LDA    #$03
c6d9: b7 4b 02     STA    $4B02
c6dc: a6 80        LDA    ,X+
c6de: 48           ASLA
c6df: 48           ASLA
c6e0: 48           ASLA
c6e1: 48           ASLA
c6e2: a7 c4        STA    ,U
c6e4: a6 80        LDA    ,X+
c6e6: 84 0f        ANDA   #$0F
c6e8: ab c4        ADDA   ,U
c6ea: a7 c0        STA    ,U+
c6ec: 7a 4b 02     DEC    $4B02
c6ef: 2a eb        BPL    $C6DC
c6f1: 30 18        LEAX   -$8,X
c6f3: 39           RTS
c6f4: ce 4a fa     LDU    #$4AFA
c6f7: 86 02        LDA    #$02
c6f9: b7 4b 02     STA    $4B02
c6fc: a6 c0        LDA    ,U+
c6fe: a7 01        STA    $1,X
c700: 44           LSRA
c701: 44           LSRA
c702: 44           LSRA
c703: 44           LSRA
c704: a7 81        STA    ,X++
c706: 7a 4b 02     DEC    $4B02
c709: 2a f1        BPL    $C6FC
c70b: 30 1a        LEAX   -$6,X
c70d: 39           RTS
c70e: c6 00        LDB    #$00
c710: d7 ad        STB    <$AD
c712: 1f 89        TFR    A,B
c714: 44           LSRA
c715: 44           LSRA
c716: 44           LSRA
c717: 44           LSRA
c718: 81 0a        CMPA   #$0A
c71a: 25 02        BCS    $C71E
c71c: 86 09        LDA    #$09
c71e: bd e7 ad     JSR    $E7AD
c721: 86 b8        LDA    #$B8
c723: a7 a0        STA    ,Y+
c725: 86 df        LDA    #$DF
c727: a7 a0        STA    ,Y+
c729: 4f           CLRA
c72a: c4 0f        ANDB   #$0F
c72c: 27 06        BEQ    $C734
c72e: 8b 04        ADDA   #$04
c730: 19           DAA
c731: 5a           DECB
c732: 26 fa        BNE    $C72E
c734: 7e e7 90     JMP    $E790
c737: 01 03        NEG    <$03
c739: 07 0f        ASR    <$0F
c73b: 08 00        ASL    <$00
c73d: 08 00        ASL    <$00
c73f: 08 00        ASL    <$00
c741: 08 00        ASL    <$00
c743: 00 00        NEG    <$00
c745: 00 00        NEG    <$00
c747: 00 00        NEG    <$00
c749: 00 00        NEG    <$00
c74b: 00 00        NEG    <$00
c74d: 00 00        NEG    <$00
c74f: 00 00        NEG    <$00
c751: 00 00        NEG    <$00
c753: 00 00        NEG    <$00
c755: 00 00        NEG    <$00
c757: 00 00        NEG    <$00
c759: 00 00        NEG    <$00
c75b: 00 00        NEG    <$00
c75d: 00 00        NEG    <$00
c75f: 00 00        NEG    <$00
c761: 00 00        NEG    <$00
c763: 00 00        NEG    <$00
c765: 00 00        NEG    <$00
c767: 00 00        NEG    <$00
c769: 00 00        NEG    <$00
c76b: 00 00        NEG    <$00
c76d: 00 00        NEG    <$00
c76f: 00 00        NEG    <$00
c771: 00 00        NEG    <$00
c773: 00 00        NEG    <$00
c775: 00 00        NEG    <$00
c777: 00 00        NEG    <$00
c779: 00 00        NEG    <$00
c77b: 00 00        NEG    <$00
c77d: 00 00        NEG    <$00
c77f: 00 00        NEG    <$00
c781: 00 00        NEG    <$00
c783: 00 00        NEG    <$00
c785: 00 00        NEG    <$00
c787: 00 00        NEG    <$00
c789: 00 00        NEG    <$00
c78b: 00 00        NEG    <$00
c78d: 00 00        NEG    <$00
c78f: 00 00        NEG    <$00
c791: 00 00        NEG    <$00
c793: 00 00        NEG    <$00
c795: 00 00        NEG    <$00
c797: 08 80        ASL    <$80
c799: 48           ASLA
c79a: b0 09 49     SUBA   $0949
c79d: 89 c1        ADCA   #$C1
c79f: e4 c4        ANDB   ,U
c7a1: a4 84        ANDA   ,X
c7a3: 00 05        NEG    <$05
c7a5: 0a 10        DEC    <$10
c7a7: 15           XHCF
c7a8: 1a 20        ORCC   #$20
c7aa: 25 2a        BCS    $C7D6
c7ac: 30 35        LEAX   -$B,Y
c7ae: 3a           ABX
c7af: 40           NEGA
c7b0: 45           LSRA
c7b1: 4a           DECA
c7b2: 50           NEGB
c7b3: 55           LSRB
c7b4: 5a           DECB
c7b5: 60 00        NEG    $0,X
c7b7: 08 34        ASL    <$34
c7b9: 90 98        SUBA   <$98
c7bb: 01 b8        NEG    <$B8
c7bd: 01 90        NEG    <$90
c7bf: 01 68        NEG    <$68
c7c1: 01 18        NEG    <$18
c7c3: 01 40        NEG    <$40
c7c5: 00 b4        NEG    <$B4
c7c7: 00 50        NEG    <$50
c7c9: 00 dc        NEG    <$DC
c7cb: 00 78        NEG    <$78
c7cd: 1e 6b        EXG    inv,DP
c7cf: 1e 98        EXG    B,A
c7d1: 1e c5        EXG    inv,PC
c7d3: 1e f2        EXG    inv,Y
c7d5: 1f 1f        TFR    X,inv
c7d7: 1f 4c        TFR    S,inv
c7d9: 1f 79        TFR    inv,B
c7db: 1f a6        TFR    CC,inv
c7dd: 1f d3        TFR    inv,U
c7df: 1e 6b        EXG    inv,DP
c7e1: 1e 98        EXG    B,A
c7e3: 1e c5        EXG    inv,PC
c7e5: 1e f2        EXG    inv,Y
c7e7: 1f 1f        TFR    X,inv
c7e9: 1f 4c        TFR    S,inv
c7eb: 1f 79        TFR    inv,B
c7ed: 1f a6        TFR    CC,inv
c7ef: 1f d3        TFR    inv,U
c7f1: 74 78 7a     LSR    $787A
c7f4: 7e 86 8a     JMP    $868A
c7f7: 8e 92 94     LDX    #$9294
c7fa: 96 98        LDA    <$98
c7fc: 9a 7d        ORA    <$7D
c7fe: 4a           DECA
c7ff: ec 2b        LDD    $B,Y
c801: 0f 86        CLR    <$86
c803: 3e           XRES
c804: bd d8 df     JSR    $D8DF
c807: cc 72 00     LDD    #$7200
c80a: ed a1        STD    ,Y++
c80c: cc ca 64     LDD    #$CA64
c80f: 20 0d        BRA    $C81E
c811: 86 3f        LDA    #$3F
c813: bd d8 df     JSR    $D8DF
c816: cc 71 40     LDD    #$7140
c819: ed a1        STD    ,Y++
c81b: cc ca 78     LDD    #$CA78
c81e: fd 4a f1     STD    $4AF1
c821: 86 00        LDA    #$00
c823: b7 4a ea     STA    $4AEA
c826: fe 4a f1     LDU    $4AF1
c829: ec c4        LDD    ,U
c82b: ed a1        STD    ,Y++
c82d: cc 1f 80     LDD    #$1F80
c830: ed a1        STD    ,Y++
c832: f6 4a ea     LDB    $4AEA
c835: 58           ASLB
c836: fb 4a ea     ADDB   $4AEA
c839: 8e 4a b6     LDX    #$4AB6
c83c: 3a           ABX
c83d: bc 4a ec     CMPX   $4AEC
c840: 26 05        BNE    $C847
c842: cc 67 80     LDD    #$6780
c845: 20 03        BRA    $C84A
c847: fc 4b 10     LDD    $4B10
c84a: ed a1        STD    ,Y++
c84c: dd 01        STD    <$01
c84e: ce 30 16     LDU    #$3016
c851: 7d 4a ec     TST    $4AEC
c854: 2b 1b        BMI    $C871
c856: b6 4a ee     LDA    $4AEE
c859: 81 00        CMPA   #$00
