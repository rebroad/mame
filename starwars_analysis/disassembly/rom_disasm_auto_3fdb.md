3fdb: 7e f2 61     JMP    $F261
3fde: ef 56        STU    -$A,U
3fe0: 8e 00 00     LDX    #$0000
3fe3: cc f8 00     LDD    #$F800
3fe6: 86 48        LDA    #$48
3fe8: 1f 8b        TFR    A,DP
3fea: 04 3d        LSR    <$3D
3fec: 24 f2        BCC    $3FE0
3fee: 11 8c 4f ff  CMPS   #$4FFF
3ff2: 27 01        BEQ    $3FF5
3ff4: 39           RTS
