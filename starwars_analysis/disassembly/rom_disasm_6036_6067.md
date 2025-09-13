6036: 96 41        LDA    <$41
6038: 81 3d        CMPA   #$3D
603a: 24 fe        BCC    $603A
603c: 48           ASLA
603d: 8e 60 44     LDX    #$6044
6040: ad 96        JSR    [A,X]
6042: 20 c1        BRA    $6005
6044: 62 75        XNC    -$B,S
6046: 64 e2        LSR    ,-S
6048: 64 f1        LSR    [,S++]
604a: 65 13        LSR    -$D,X
604c: 65 32        LSR    -$E,Y
604e: 67 08        ASR    $8,X
6050: 67 6b        ASR    $B,S
6052: 62 e4        XNC    ,S
6054: 63 06        COM    $6,X
6056: 63 26        COM    $6,Y
6058: 63 48        COM    $8,U
605a: 64 59        LSR    -$7,U
605c: 64 83        LSR    ,--X
605e: 65 6c        LSR    $C,S
6060: 65 9f 66 70  LSR    [$6670]
6064: 66 ac 6d     ROR    $60D4,PCR
6067: 3b           RTI
