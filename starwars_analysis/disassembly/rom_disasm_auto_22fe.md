22fe: 7e f2 61     JMP    $F261
2301: ef 56        STU    -$A,U
2303: 8e 00 00     LDX    #$0000
2306: cc f8 00     LDD    #$F800
2309: 86 48        LDA    #$48
230b: 1f 8b        TFR    A,DP
230d: 04 3d        LSR    <$3D
230f: 24 f2        BCC    $2303
2311: 11 8c 4f ff  CMPS   #$4FFF
2315: 27 01        BEQ    $2318
2317: 39           RTS
