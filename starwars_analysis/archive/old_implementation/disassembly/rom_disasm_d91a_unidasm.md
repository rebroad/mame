0d91a: 7e f2 61     JMP    $F261
0d91d: ef 56        STU    -$A,U
0d91f: 8e 00 00     LDX    #$0000
0d922: cc f8 00     LDD    #$F800
0d925: 86 48        LDA    #$48
0d927: 1f 8b        TFR    A,DP
0d929: 04 3d        LSR    <$3D
0d92b: 24 f2        BCC    $D91F
0d92d: 11 8c 4f ff  CMPS   #$4FFF
0d931: 27 01        BEQ    $D934
0d933: 39           RTS
0d934: 96 28        LDA    <$28
0d936: 26 11        BNE    $D949
0d938: b6 48 24     LDA    $4824
0d93b: 84 80        ANDA   #$80
0d93d: 26 0a        BNE    $D949
0d93f: 96 31        LDA    <$31
0d941: 85 80        BITA   #$80
0d943: 27 da        BEQ    $D91F
0d945: 84 7f        ANDA   #$7F
0d947: 97 31        STA    <$31
0d949: bd 60 be     JSR    $60BE
0d94c: 96 3f        LDA    <$3F
0d94e: 2b fc        BMI    $D94C
0d950: 96 41        LDA    <$41
0d952: 81 3d        CMPA   #$3D
0d954: 24 fe        BCC    $D954
0d956: 48           ASLA
0d957: 8e 60 44     LDX    #$6044
0d95a: ad 96        JSR    [A,X]
0d95c: 20 c1        BRA    $D91F
0d95e: 62 75        XNC    -$B,S
0d960: 64 e2        LSR    ,-S
0d962: 64 f1        LSR    [,S++]
0d964: 65 13        LSR    -$D,X
0d966: 65 32        LSR    -$E,Y
0d968: 67 08        ASR    $8,X
0d96a: 67 6b        ASR    $B,S
0d96c: 62 e4        XNC    ,S
0d96e: 63 06        COM    $6,X
0d970: 63 26        COM    $6,Y
0d972: 63 48        COM    $8,U
0d974: 64 59        LSR    -$7,U
0d976: 64 83        LSR    ,--X
0d978: 65 6c        LSR    $C,S
0d97a: 65 9f 66 70  LSR    [$6670]
0d97e: 66 ac 6d     ROR    $D9EE,PCR
0d981: 3b           RTI
0d982: 6d 54        TST    -$C,U
0d984: 6d 80        TST    ,X+
0d986: 6d 86        TST    A,X
0d988: 6d 95        TST    [B,X]
0d98a: 6d 98 67     TST    [$67,X]
0d98d: 08 67        ASL    <$67
0d98f: 6b 67        XDEC   $7,S
0d991: 87 67        XSTA   #$67
0d993: 9a 67        ORA    <$67
0d995: e5 67        BITB   $7,S
0d997: fd 68 02     STD    $6802
0d99a: 68 2f        ASL    $F,Y
0d99c: 68 38        ASL    -$8,Y
0d99e: 68 59        ASL    -$7,U
0d9a0: 68 d0        ASL    [,W++]
0d9a2: 68 d5        ASL    [B,U]
0d9a4: 69 12        ROL    -$E,X
0d9a6: 69 33        ROL    -$D,Y
0d9a8: 69 53        ROL    -$D,U
0d9aa: 69 68        ROL    $8,S
0d9ac: 6a 50        DEC    -$10,U
0d9ae: 6a 7e        DEC    -$2,S
0d9b0: 69 a9 69 f4  ROL    $69F4,Y
0d9b4: 6a 50        DEC    -$10,U
0d9b6: 6a 89 6a ab  DEC    $6AAB,X
0d9ba: 6a bf 6b 22  DEC    [$6B22]
0d9be: 6b 32        XDEC   -$E,Y
0d9c0: 6a ff 6b 1d  DEC    [$6B1D]
0d9c4: 6b db        XDEC   [D,U]
0d9c6: 6b f1        XDEC   [,S++]
0d9c8: 6c 76        INC    -$A,S
0d9ca: 6c 84        INC    ,X
0d9cc: 6c b6        INC    [A,Y]
0d9ce: 6c c4        INC    ,U
0d9d0: 6c e1        INC    ,S++
0d9d2: 6c ef        INC    ,--W
0d9d4: 6d 0c        TST    $C,X
0d9d6: 6d 15        TST    -$B,X
0d9d8: 0c 43        INC    <$43
0d9da: 26 08        BNE    $D9E4
0d9dc: 0c 42        INC    <$42
0d9de: 26 04        BNE    $D9E4
0d9e0: 86 80        LDA    #$80
