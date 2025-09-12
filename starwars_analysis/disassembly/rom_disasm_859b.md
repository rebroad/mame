859b: b6 50 40     LDA    $5040
859e: 44           LSRA
859f: 44           LSRA
85a0: 44           LSRA
85a1: 84 0f        ANDA   #$0F
85a3: b1 49 bf     CMPA   $49BF
85a6: 27 36        BEQ    $0043
85a8: f6 49 bf     LDB    $49BF
85ab: b7 49 bf     STA    $49BF
85ae: 8e 49 89     LDX    #$4989
85b1: a6 85        LDA    B,X
85b3: 48           ASLA
85b4: 24 07        BCC    $0022
85b6: 2b 05        BMI    $0022
85b8: 7c 49 c0     INC    $49C0
85bb: 20 15        BRA    $0037
85bd: 48           ASLA
85be: 26 f3        BNE    $0018
85c0: 8e 49 99     LDX    #$4999
85c3: a6 85        LDA    B,X
85c5: 48           ASLA
85c6: 24 07        BCC    $0034
85c8: 2b 05        BMI    $0034
85ca: 7c 49 c0     INC    $49C0
85cd: 20 03        BRA    $0037
85cf: 48           ASLA
85d0: 26 f3        BNE    $002A
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
85ec: 27 03        BEQ    $0056
85ee: bd 88 9f     JSR    $889F
85f1: 96 92        LDA    <$92
85f3: 27 03        BEQ    $005D
85f5: bd 88 f5     JSR    $88F5
85f8: 39           RTS
85f9: cc 00 00     LDD    #$0000
85fc: fd 50 40     STD    $5040
85ff: cc 62 70     LDD    #$6270
8602: ed a1        STD    ,Y++
8604: ce 86 96     LDU    #$8696
8607: 96 92        LDA    <$92
8609: 27 0d        BEQ    $007D
860b: dc 93        LDD    <$93
860d: b3 50 98     SUBD   $5098
8610: 10 83 70 00  CMPD   #$7000
8614: 22 02        BHI    $007D
8616: 20 03        BRA    $0080
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
8648: 2a 04        BPL    $00B3
864a: 43           COMA
864b: 50           NEGB
864c: 82 ff        SBCA   #$FF
864e: 10 b3 50 78  CMPD   $5078
8652: 2f 03        BLE    $00BC
8654: fd 50 78     STD    $5078
8657: fc 50 7c     LDD    $507C
865a: b3 50 9c     SUBD   $509C
865d: 2a 04        BPL    $00C8
865f: 43           COMA
8660: 50           NEGB
8661: 82 ff        SBCA   #$FF
8663: 10 b3 50 78  CMPD   $5078
8667: 2f 03        BLE    $00D1
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
868b: 10 25 ff 78  LBCS   $006C
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
86be: 27 0d        BEQ    $0132
86c0: dc 93        LDD    <$93
86c2: b3 50 98     SUBD   $5098
86c5: 10 83 70 00  CMPD   #$7000
86c9: 22 02        BHI    $0132
86cb: 20 03        BRA    $0135
86cd: cc 70 00     LDD    #$7000
86d0: fd 50 78     STD    $5078
86d3: ec c4        LDD    ,U
86d5: fd 50 7a     STD    $507A
86d8: ec 42        LDD    $2,U
86da: fd 50 7c     STD    $507C
86dd: cc 00 0f     LDD    #$000F
86e0: fd 47 01     STD    $4701
86e3: 86 67        LDA    #$67
86e5: bd cd ba     JSR    $CDBA
86e8: fc 50 00     LDD    $5000
86eb: fd 47 04     STD    $4704
86ee: bd cc e4     JSR    $CCE4
86f1: 20 1e        BRA    $0176
86f3: ec c4        LDD    ,U
86f5: fd 50 7a     STD    $507A
86f8: ec 42        LDD    $2,U
86fa: fd 50 7c     STD    $507C
86fd: cc 00 0f     LDD    #$000F
8700: fd 47 01     STD    $4701
8703: 86 67        LDA    #$67
8705: bd cd ba     JSR    $CDBA
8708: fc 50 00     LDD    $5000
870b: fd 47 04     STD    $4704
870e: bd cc fc     JSR    $CCFC
8711: 33 44        LEAU   $4,U
8713: 11 83 87 35  CMPU   #$8735
8717: 25 da        BCS    $0158
8719: cc 80 40     LDD    #$8040
871c: ed a1        STD    ,Y++
871e: fc 50 98     LDD    $5098
8721: fd 50 40     STD    $5040
8724: 39           RTS
8725: fc 00 00     LDD    >$0000
8728: 00 fc        NEG    <$FC
872a: 00 f0        NEG    <$F0
872c: 00 04        NEG    <$04
872e: 00 f0        NEG    <$F0
8730: 00 04        NEG    <$04
8732: 00 00        NEG    <$00
8734: 00 fe        NEG    <$FE
8736: 49           ROLA
8737: af e6        STX    A,S
8739: c4 c1        ANDB   #$C1
873b: 03 26        COM    <$26
873d: 01 39        NEG    <$39
873f: c1 01        CMPB   #$01
8741: 26 05        BNE    $01AD
8743: cc 08 00     LDD    #$0800
8746: 20 03        BRA    $01B0
8748: cc 10 00     LDD    #$1000
874b: f3 49 b1     ADDD   $49B1
874e: b3 50 40     SUBD   $5040
8751: 2a 33        BPL    $01EB
8753: e6 c4        LDB    ,U
8755: c1 01        CMPB   #$01
8757: 26 05        BNE    $01C3
8759: cc 08 00     LDD    #$0800
875c: 20 03        BRA    $01C6
875e: cc 10 00     LDD    #$1000
8761: f3 49 b1     ADDD   $49B1
8764: fd 49 b1     STD    $49B1
8767: 33 43        LEAU   $3,U
8769: ff 49 af     STU    $49AF
876c: e6 c4        LDB    ,U
876e: c1 03        CMPB   #$03
8770: 26 01        BNE    $01D8
8772: 39           RTS
8773: e6 c4        LDB    ,U
8775: c1 05        CMPB   #$05
8777: 26 0a        BNE    $01E8
8779: fe 49 a9     LDU    $49A9
877c: 33 42        LEAU   $2,U
877e: ff 49 a9     STU    $49A9
8781: ee c4        LDU    ,U
8783: ff 49 af     STU    $49AF
8786: cc 62 60     LDD    #$6260
8789: ed a1        STD    ,Y++
878b: bd 83 ce     JSR    $83CE
878e: fc 49 a9     LDD    $49A9
8791: fd 49 ad     STD    $49AD
8794: fc 49 af     LDD    $49AF
8797: fd 49 b9     STD    $49B9
879a: fc b6 50     LDD    >$0000
