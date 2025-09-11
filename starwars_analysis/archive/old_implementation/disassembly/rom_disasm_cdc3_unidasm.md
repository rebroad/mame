0cdc3: 7e f2 61     JMP    $F261
0cdc6: ef 56        STU    -$A,U
0cdc8: 8e 00 00     LDX    #$0000
0cdcb: cc f8 00     LDD    #$F800
0cdce: 86 48        LDA    #$48
0cdd0: 1f 8b        TFR    A,DP
0cdd2: 04 3d        LSR    <$3D
0cdd4: 24 f2        BCC    $CDC8
0cdd6: 11 8c 4f ff  CMPS   #$4FFF
0cdda: 27 01        BEQ    $CDDD
0cddc: 39           RTS
0cddd: 96 28        LDA    <$28
0cddf: 26 11        BNE    $CDF2
0cde1: b6 48 24     LDA    $4824
0cde4: 84 80        ANDA   #$80
0cde6: 26 0a        BNE    $CDF2
0cde8: 96 31        LDA    <$31
0cdea: 85 80        BITA   #$80
0cdec: 27 da        BEQ    $CDC8
0cdee: 84 7f        ANDA   #$7F
0cdf0: 97 31        STA    <$31
0cdf2: bd 60 be     JSR    $60BE
0cdf5: 96 3f        LDA    <$3F
0cdf7: 2b fc        BMI    $CDF5
0cdf9: 96 41        LDA    <$41
0cdfb: 81 3d        CMPA   #$3D
0cdfd: 24 fe        BCC    $CDFD
0cdff: 48           ASLA
0ce00: 8e 60 44     LDX    #$6044
0ce03: ad 96        JSR    [A,X]
0ce05: 20 c1        BRA    $CDC8
0ce07: 62 75        XNC    -$B,S
0ce09: 64 e2        LSR    ,-S
0ce0b: 64 f1        LSR    [,S++]
0ce0d: 65 13        LSR    -$D,X
0ce0f: 65 32        LSR    -$E,Y
0ce11: 67 08        ASR    $8,X
0ce13: 67 6b        ASR    $B,S
0ce15: 62 e4        XNC    ,S
0ce17: 63 06        COM    $6,X
0ce19: 63 26        COM    $6,Y
0ce1b: 63 48        COM    $8,U
0ce1d: 64 59        LSR    -$7,U
0ce1f: 64 83        LSR    ,--X
0ce21: 65 6c        LSR    $C,S
0ce23: 65 9f 66 70  LSR    [$6670]
