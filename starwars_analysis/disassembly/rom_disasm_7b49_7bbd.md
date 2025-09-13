7b49: c8 80     EORB   #$80
7b4b: c6 82     LDB    #$82
7b4d: dc 7f     LDD    <$7F
7b4f: 78 82 dc  ASL    $82DC
7b52: 7f 97 82  CLR    $9782
7b55: dc 81     LDD    <$81
7b57: c3 82 d2  ADDD   #$82D2
7b5a: 7d b1 82  TST    $B182
7b5d: fa 7e 08  ORB    $7E08
7b60: 82 dc     SBCA   #$DC
7b62: 7c f8 82  INC    $F882
7b65: c8 7d     EORB   #$7D
7b67: ca 82     ORB    #$82
7b69: dc 80     LDD    <$80
7b6b: 66 82     ROR    ,-X
7b6d: e6 80     LDB    ,X+
7b6f: 4d        TSTA
7b70: 82 be     SBCA   #$BE
7b72: 80 c6     SUBA   #$C6
7b74: 82 c8     SBCA   #$C8
7b76: 7e 3d 82  JMP    $3D82
7b79: d2 82     SBCB   <$82
7b7b: 67 83     ASR    ,--X
7b7d: 25 7e     BCS    $7BFD
7b7f: 08 82     ASL    <$82
7b81: dc 7d     LDD    <$7D
7b83: 5b        XDECB
7b84: 82 c8     SBCA   #$C8
7b86: 7e d8 82  JMP    $D882
7b89: f0 7e 75  SUBB   $7E75
7b8c: 82 d2     SBCA   #$D2
7b8e: 81 35     CMPA   #$35
7b90: 82 d2     SBCA   #$D2
7b92: 82 26     SBCA   #$26
7b94: 82 c8     SBCA   #$C8
7b96: 7e d8 82  JMP    $D882
7b99: f0 7e 75  SUBB   $7E75
7b9c: 83 25 7e  SUBD   #$257E
7b9f: 08 82     ASL    <$82
7ba1: dc 82     LDD    <$82
7ba3: 26 82     BNE    $7B27
7ba5: c8 81     EORB   #$81
7ba7: 0a 82     DEC    <$82
7ba9: d2 80     SBCB   <$80
7bab: 4d        TSTA
7bac: 82 be     SBCA   #$BE
7bae: 80 66     SUBA   #$66
7bb0: 82 e6     SBCA   #$E6
7bb2: 7e 3d 82  JMP    $3D82
7bb5: d2 7e     SBCB   <$7E
7bb7: 21 82     BRN    $7B3B
7bb9: d2 7c     SBCB   <$7C
7bbb: d6 83     LDB    <$83
7bbd: 7e 7bbd     JMP    $7bbd
