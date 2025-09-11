0ea2: be 4b 32     LDX    $4B32
0ea5: 26 03        BNE    $0EAA
0ea7: 8e 49 00     LDX    #$4900
0eaa: a6 03        LDA    $3,X
0eac: 81 01        CMPA   #$01
0eae: 26 09        BNE    $0EB9
0eb0: a6 06        LDA    $6,X
0eb2: 26 05        BNE    $0EB9
0eb4: 9f 64        STX    <$64
0eb6: 7e 6e f7     JMP    $6EF7
