a261: 7e f2 61     JMP    $F261
a264: ef 56        STU    -$A,U
a266: 8e 00 00     LDX    #$0000
a269: cc f8 00     LDD    #$F800
a26c: 86 48        LDA    #$48
a26e: 1f 8b        TFR    A,DP
a270: 04 3d        LSR    <$3D
a272: 24 f2        BCC    $A266
a274: 11 8c 4f ff  CMPS   #$4FFF
a278: 27 01        BEQ    $A27B
a27a: 39           RTS
