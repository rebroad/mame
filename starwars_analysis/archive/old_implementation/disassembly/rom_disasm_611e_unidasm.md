611e: 7e f2 61     JMP    $F261
6121: ef 56        STU    -$A,U
6123: 8e 00 00     LDX    #$0000
6126: cc f8 00     LDD    #$F800
6129: 86 48        LDA    #$48
612b: 1f 8b        TFR    A,DP
612d: 04 3d        LSR    <$3D
612f: 24 f2        BCC    $6123
6131: 11 8c 4f ff  CMPS   #$4FFF
6135: 27 01        BEQ    $6138
6137: 39           RTS
6138: 96 28        LDA    <$28
613a: 26 11        BNE    $614D
613c: b6 48 24     LDA    $4824
613f: 84 80        ANDA   #$80
6141: 26 0a        BNE    $614D
6143: 96 31        LDA    <$31
6145: 85 80        BITA   #$80
6147: 27 da        BEQ    $6123
6149: 84 7f        ANDA   #$7F
614b: 97 31        STA    <$31
614d: bd 60 be     JSR    $60BE
6150: 96 3f        LDA    <$3F
6152: 2b fc        BMI    $6150
6154: 96 41        LDA    <$41
6156: 81 3d        CMPA   #$3D
6158: 24 fe        BCC    $6158
615a: 48           ASLA
615b: 8e 60 44     LDX    #$6044
615e: ad 96        JSR    [A,X]
6160: 20 c1        BRA    $6123
6162: 62 75        XNC    -$B,S
6164: 64 e2        LSR    ,-S
6166: 64 f1        LSR    [,S++]
6168: 65 13        LSR    -$D,X
616a: 65 32        LSR    -$E,Y
616c: 67 08        ASR    $8,X
616e: 67 6b        ASR    $B,S
6170: 62 e4        XNC    ,S
6172: 63 06        COM    $6,X
6174: 63 26        COM    $6,Y
6176: 63 48        COM    $8,U
6178: 64 59        LSR    -$7,U
617a: 64 83        LSR    ,--X
617c: 65 6c        LSR    $C,S
617e: 65 9f 66 70  LSR    [$6670]
