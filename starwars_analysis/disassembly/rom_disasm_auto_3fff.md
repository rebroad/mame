3fff: 7e f2 61     JMP    $F261
4002: ef 56        STU    -$A,U
4004: 8e 00 00     LDX    #$0000
4007: cc f8 00     LDD    #$F800
400a: 86 48        LDA    #$48
400c: 1f 8b        TFR    A,DP
400e: 04 3d        LSR    <$3D
4010: 24 f2        BCC    $4004
4012: 11 8c 4f ff  CMPS   #$4FFF
4016: 27 01        BEQ    $4019
4018: 39           RTS
