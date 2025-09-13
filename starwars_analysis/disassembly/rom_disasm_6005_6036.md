6005: 8e 00 00     LDX    #$0000
6008: cc f8 00     LDD    #$F800
600b: 86 48        LDA    #$48
600d: 1f 8b        TFR    A,DP
600f: 04 3d        LSR    <$3D
6011: 24 f2        BCC    $6005
6013: 11 8c 4f ff  CMPS   #$4FFF
6017: 27 01        BEQ    $601A
6019: 39           RTS
601a: 96 28        LDA    <$28
601c: 26 11        BNE    $602F
601e: b6 48 24     LDA    $4824
6021: 84 80        ANDA   #$80
6023: 26 0a        BNE    $602F
6025: 96 31        LDA    <$31
6027: 85 80        BITA   #$80
6029: 27 da        BEQ    $6005
602b: 84 7f        ANDA   #$7F
602d: 97 31        STA    <$31
602f: bd 60 be     JSR    $60BE
6032: 96 3f        LDA    <$3F
6034: 2b fc        BMI    $6032
6036: 7e 6036     JMP    $6036
