0cd9e: 7e f2 61     JMP    $F261
0cda1: ef 56        STU    -$A,U
0cda3: 8e 00 00     LDX    #$0000
0cda6: cc f8 00     LDD    #$F800
0cda9: 86 48        LDA    #$48
0cdab: 1f 8b        TFR    A,DP
0cdad: 04 3d        LSR    <$3D
0cdaf: 24 f2        BCC    $CDA3
0cdb1: 11 8c 4f ff  CMPS   #$4FFF
0cdb5: 27 01        BEQ    $CDB8
0cdb7: 39           RTS
0cdb8: 96 28        LDA    <$28
0cdba: 26 11        BNE    $CDCD
0cdbc: b6 48 24     LDA    $4824
0cdbf: 84 80        ANDA   #$80
0cdc1: 26 0a        BNE    $CDCD
0cdc3: 96 31        LDA    <$31
0cdc5: 85 80        BITA   #$80
0cdc7: 27 da        BEQ    $CDA3
0cdc9: 84 7f        ANDA   #$7F
0cdcb: 97 31        STA    <$31
0cdcd: bd 60 be     JSR    $60BE
0cdd0: 96 3f        LDA    <$3F
0cdd2: 2b fc        BMI    $CDD0
0cdd4: 96 41        LDA    <$41
0cdd6: 81 3d        CMPA   #$3D
0cdd8: 24 fe        BCC    $CDD8
0cdda: 48           ASLA
0cddb: 8e 60 44     LDX    #$6044
0cdde: ad 96        JSR    [A,X]
0cde0: 20 c1        BRA    $CDA3
0cde2: 62 75        XNC    -$B,S
0cde4: 64 e2        LSR    ,-S
0cde6: 64 f1        LSR    [,S++]
0cde8: 65 13        LSR    -$D,X
0cdea: 65 32        LSR    -$E,Y
0cdec: 67 08        ASR    $8,X
0cdee: 67 6b        ASR    $B,S
0cdf0: 62 e4        XNC    ,S
0cdf2: 63 06        COM    $6,X
0cdf4: 63 26        COM    $6,Y
0cdf6: 63 48        COM    $8,U
0cdf8: 64 59        LSR    -$7,U
0cdfa: 64 83        LSR    ,--X
0cdfc: 65 6c        LSR    $C,S
0cdfe: 65 9f 66 70  LSR    [$6670]
