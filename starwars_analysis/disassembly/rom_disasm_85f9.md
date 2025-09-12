85f9: cc 00 00     LDD    #$0000
85fc: fd 50 40     STD    $5040
85ff: cc 62 70     LDD    #$6270
8602: ed a1        STD    ,Y++
8604: ce 86 96     LDU    #$8696
8607: 96 92        LDA    <$92
8609: 27 0d        BEQ    $001F
860b: dc 93        LDD    <$93
860d: b3 50 98     SUBD   $5098
8610: 10 83 70 00  CMPD   #$7000
8614: 22 02        BHI    $001F
8616: 20 03        BRA    $0022
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
8648: 2a 04        BPL    $0055
864a: 43           COMA
864b: 50           NEGB
864c: 82 ff        SBCA   #$FF
864e: 10 b3 50 78  CMPD   $5078
8652: 2f 03        BLE    $005E
8654: fd 50 78     STD    $5078
8657: fc 50 7c     LDD    $507C
865a: b3 50 9c     SUBD   $509C
865d: 2a 04        BPL    $006A
865f: 43           COMA
8660: 50           NEGB
8661: 82 ff        SBCA   #$FF
8663: 10 b3 50 78  CMPD   $5078
8667: 2f 03        BLE    $0073
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
868b: 10 25 ff 78  LBCS   $000E
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
86be: 27 0d        BEQ    $00D4
86c0: dc 93        LDD    <$93
86c2: b3 50 98     SUBD   $5098
86c5: 10 83 70 00  CMPD   #$7000
86c9: 22 02        BHI    $00D4
86cb: 20 03        BRA    $00D7
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
86f1: 20 1e        BRA    $0118
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
8717: 25 da        BCS    $00FA
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
8741: 26 05        BNE    $014F
8743: cc 08 00     LDD    #$0800
8746: 20 03        BRA    $0152
8748: cc 10 00     LDD    #$1000
874b: f3 49 b1     ADDD   $49B1
874e: b3 50 40     SUBD   $5040
8751: 2a 33        BPL    $018D
8753: e6 c4        LDB    ,U
8755: c1 01        CMPB   #$01
8757: 26 05        BNE    $0165
8759: cc 08 00     LDD    #$0800
875c: 20 03        BRA    $0168
875e: cc 10 00     LDD    #$1000
8761: f3 49 b1     ADDD   $49B1
8764: fd 49 b1     STD    $49B1
8767: 33 43        LEAU   $3,U
8769: ff 49 af     STU    $49AF
876c: e6 c4        LDB    ,U
876e: c1 03        CMPB   #$03
8770: 26 01        BNE    $017A
8772: 39           RTS
8773: e6 c4        LDB    ,U
8775: c1 05        CMPB   #$05
8777: 26 0a        BNE    $018A
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
879a: fc 49 b1     LDD    $49B1
879d: fd 49 bb     STD    $49BB
87a0: fd 50 78     STD    $5078
87a3: cc fc 00     LDD    #$FC00
87a6: fd 50 7a     STD    $507A
87a9: bd 87 cb     JSR    $87CB
87ac: fc 49 a9     LDD    $49A9
87af: fd 49 ad     STD    $49AD
87b2: fc 49 af     LDD    $49AF
87b5: fd 49 b9     STD    $49B9
87b8: fc 49 b1     LDD    $49B1
87bb: fd 49 bb     STD    $49BB
87be: fd 50 78     STD    $5078
87c1: cc 04 00     LDD    #$0400
87c4: fd 50 7a     STD    $507A
87c7: bd 87 cb     JSR    $87CB
87ca: 39           RTS
87cb: fc 49 bb     LDD    $49BB
87ce: fd 50 78     STD    $5078
87d1: b3 50 40     SUBD   $5040
87d4: 10 2b 00 8e  LBMI   $026D
87d8: 10 83 08 00  CMPD   #$0800
87dc: 2c 17        BGE    $01FC
87de: 58           ASLB
87df: 49           ROLA
87e0: 43           COMA
87e1: 50           NEGB
87e2: 82 ff        SBCA   #$FF
87e4: f3 50 44     ADDD   $5044
87e7: 10 83 f0 00  CMPD   #$F000
87eb: 2c 03        BGE    $01F7
87ed: cc f0 00     LDD    #$F000
87f0: fd 50 7c     STD    $507C
87f3: 20 0c        BRA    $0208
87f5: fc 49 bb     LDD    $49BB
87f8: fd cc 00     STD    >$0000
