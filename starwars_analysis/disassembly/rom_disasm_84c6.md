84c6: cc f8 00     LDD    #$F800
84c9: b4 50 98     ANDA   $5098
84cc: 8b 24        ADDA   #$24
84ce: fd 50 78     STD    $5078
84d1: b6 50 78     LDA    $5078
84d4: 44           LSRA
84d5: 44           LSRA
84d6: 44           LSRA
84d7: 84 0f        ANDA   #$0F
84d9: 97 99        STA    <$99
84db: cc fe 00     LDD    #$FE00
84de: fd 50 7c     STD    $507C
84e1: cc fc 80     LDD    #$FC80
84e4: fd 50 7a     STD    $507A
84e7: 8e 49 89     LDX    #$4989
84ea: d6 99        LDB    <$99
84ec: a6 85        LDA    B,X
84ee: 97 9a        STA    <$9A
84f0: 84 c0        ANDA   #$C0
84f2: 81 c0        CMPA   #$C0
84f4: 26 2c        BNE    $005C
84f6: fc 50 9c     LDD    $509C
84f9: b3 50 7c     SUBD   $507C
84fc: 2d 24        BLT    $005C
84fe: 83 04 00     SUBD   #$0400
8501: 2c 0c        BGE    $0049
8503: b6 47 03     LDA    $4703
8506: 91 9b        CMPA   <$9B
8508: 25 03        BCS    $0047
850a: bd a7 f7     JSR    $A7F7
850d: 20 13        BRA    $005C
850f: 83 04 00     SUBD   #$0400
8512: 2c 0e        BGE    $005C
8514: b6 47 03     LDA    $4703
8517: f6 47 03     LDB    $4703
851a: 3d           MUL
851b: 91 9b        CMPA   <$9B
851d: 25 03        BCS    $005C
851f: bd a7 f7     JSR    $A7F7
8522: fc 50 7c     LDD    $507C
8525: 83 04 00     SUBD   #$0400
8528: fd 50 7c     STD    $507C
852b: 96 9a        LDA    <$9A
852d: 48           ASLA
852e: 48           ASLA
852f: 26 bd        BNE    $0028
8531: cc fe 00     LDD    #$FE00
8534: fd 50 7c     STD    $507C
8537: cc 03 80     LDD    #$0380
853a: fd 50 7a     STD    $507A
853d: 8e 49 99     LDX    #$4999
8540: d6 99        LDB    <$99
8542: a6 85        LDA    B,X
8544: 97 9a        STA    <$9A
8546: 84 c0        ANDA   #$C0
8548: 81 c0        CMPA   #$C0
854a: 26 2c        BNE    $00B2
854c: fc 50 9c     LDD    $509C
854f: b3 50 7c     SUBD   $507C
8552: 2d 24        BLT    $00B2
8554: 83 04 00     SUBD   #$0400
8557: 2c 0c        BGE    $009F
8559: b6 47 03     LDA    $4703
855c: 91 9b        CMPA   <$9B
855e: 25 03        BCS    $009D
8560: bd a8 0b     JSR    $A80B
8563: 20 13        BRA    $00B2
8565: 83 04 00     SUBD   #$0400
8568: 2c 0e        BGE    $00B2
856a: b6 47 03     LDA    $4703
856d: f6 47 03     LDB    $4703
8570: 3d           MUL
8571: 91 9b        CMPA   <$9B
8573: 25 03        BCS    $00B2
8575: bd a8 0b     JSR    $A80B
8578: fc 50 7c     LDD    $507C
857b: 83 04 00     SUBD   #$0400
857e: fd 50 7c     STD    $507C
8581: 96 9a        LDA    <$9A
8583: 48           ASLA
8584: 48           ASLA
8585: 26 bd        BNE    $007E
8587: fc 50 78     LDD    $5078
858a: c3 08 00     ADDD   #$0800
858d: fd 50 78     STD    $5078
8590: b3 50 98     SUBD   $5098
8593: 83 60 00     SUBD   #$6000
8596: 10 25 ff 37  LBCS   $000B
859a: 39           RTS
859b: b6 50 40     LDA    $5040
859e: 44           LSRA
859f: 44           LSRA
85a0: 44           LSRA
85a1: 84 0f        ANDA   #$0F
85a3: b1 49 bf     CMPA   $49BF
85a6: 27 36        BEQ    $0118
85a8: f6 49 bf     LDB    $49BF
85ab: b7 49 bf     STA    $49BF
85ae: 8e 49 89     LDX    #$4989
85b1: a6 85        LDA    B,X
85b3: 48           ASLA
85b4: 24 07        BCC    $00F7
85b6: 2b 05        BMI    $00F7
85b8: 7c 49 c0     INC    $49C0
85bb: 20 15        BRA    $010C
85bd: 48           ASLA
85be: 26 f3        BNE    $00ED
85c0: 8e 49 99     LDX    #$4999
85c3: a6 85        LDA    B,X
85c5: 48           ASLA
85c6: 24 07        BCC    $0109
85c8: 2b 05        BMI    $0109
85ca: 7c 49 c0     INC    $49C0
85cd: 20 03        BRA    $010C
85cf: 48           ASLA
85d0: 26 f3        BNE    $00FF
85d2: 86 00        LDA    #$00
85d4: 8e 49 89     LDX    #$4989
85d7: a7 85        STA    B,X
85d9: 8e 49 99     LDX    #$4999
85dc: a7 85        STA    B,X
85de: bd b3 e4     JSR    $B3E4
85e1: bd 85 f9     JSR    $85F9
85e4: bd 87 35     JSR    $8735
85e7: bd 86 ae     JSR    $86AE
85ea: 96 95        LDA    <$95
85ec: 27 03        BEQ    $012B
85ee: bd 88 9f     JSR    $889F
85f1: 96 92        LDA    <$92
85f3: 27 03        BEQ    $0132
85f5: bd 88 f5     JSR    $88F5
85f8: 39           RTS
85f9: cc 00 00     LDD    #$0000
85fc: fd 50 40     STD    $5040
85ff: cc 62 70     LDD    #$6270
8602: ed a1        STD    ,Y++
8604: ce 86 96     LDU    #$8696
8607: 96 92        LDA    <$92
8609: 27 0d        BEQ    $0152
860b: dc 93        LDD    <$93
860d: b3 50 98     SUBD   $5098
8610: 10 83 70 00  CMPD   #$7000
8614: 22 02        BHI    $0152
8616: 20 03        BRA    $0155
8618: cc 70 00     LDD    #$7000
861b: fd 50 78     STD    $5078
861e: ec c4        LDD    ,U
8620: fd 50 7a     STD    $507A
8623: ec 42        LDD    $2,U
8625: fd 50 7c     STD    $507C
8628: cc 00 0f     LDD    #$000F
862b: fd 47 01     STD    $4701
862e: 86 67        LDA    #$67
8630: bd cd ba     JSR    $CDBA
8633: fc 50 00     LDD    $5000
8636: fd 47 04     STD    $4704
8639: bd cc e4     JSR    $CCE4
863c: cc 02 00     LDD    #$0200
863f: fd 50 78     STD    $5078
8642: fc 50 7a     LDD    $507A
8645: b3 50 9a     SUBD   $509A
8648: 2a 04        BPL    $0188
864a: 43           COMA
864b: 50           NEGB
864c: 82 ff        SBCA   #$FF
864e: 10 b3 50 78  CMPD   $5078
8652: 2f 03        BLE    $0191
8654: fd 50 78     STD    $5078
8657: fc 50 7c     LDD    $507C
865a: b3 50 9c     SUBD   $509C
865d: 2a 04        BPL    $019D
865f: 43           COMA
8660: 50           NEGB
8661: 82 ff        SBCA   #$FF
8663: 10 b3 50 78  CMPD   $5078
8667: 2f 03        BLE    $01A6
8669: fd 50 78     STD    $5078
866c: cc 00 0f     LDD    #$000F
866f: fd 47 01     STD    $4701
8672: 86 67        LDA    #$67
8674: bd cd ba     JSR    $CDBA
8677: fc 50 00     LDD    $5000
867a: fd 47 04     STD    $4704
867d: bd cc fc     JSR    $CCFC
8680: cc 80 40     LDD    #$8040
8683: ed a1        STD    ,Y++
8685: 33 44        LEAU   $4,U
8687: 11 83 86 ae  CMPU   #$86AE
868b: 10 25 ff 78  LBCS   $0141
868f: fc 50 98     LDD    $5098
8692: fd 50 40     STD    $5040
8695: 39           RTS
8696: fc 00 00     LDD    >$0000
8699: 00 04        NEG    <$04
869b: 00 00        NEG    <$00
869d: 00 fc        NEG    <$FC
869f: 00 f0        NEG    <$F0
86a1: 00 fe        NEG    <$FE
86a3: 00 f0        NEG    <$F0
86a5: 00 02        NEG    <$02
86a7: 00 f0        NEG    <$F0
86a9: 00 04        NEG    <$04
86ab: 00 f0        NEG    <$F0
86ad: 00 cc        NEG    <$CC
86af: 00 00        NEG    <$00
86b1: fd 50 40     STD    $5040
86b4: cc 62 50     LDD    #$6250
86b7: ed a1        STD    ,Y++
86b9: ce 87 25     LDU    #$8725
86bc: 96 92        LDA    <$92
86be: 27 0d        BEQ    $0207
86c0: dc 93        LDD    <$93
86c2: b3 50 98     SUBD   $5098
86c5: 10 cc f8     NEG    <$00
