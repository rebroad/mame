f261: 1a 10           ORCC   #$10
f263: 7f 46 84        CLR    $4684
f266: 86 00           LDA    #$00
f268: b7 46 86        STA    $4686
f26b: b7 46 83        STA    $4683
f26e: b7 46 82        STA    $4682
f271: 86 00           LDA    #$00
f273: b7 46 85        STA    $4685
f276: 86 80           LDA    #$80
f278: b7 46 85        STA    $4685
f27b: b7 46 20        STA    $4620
f27e: ce 00 00        LDU    #$0000
f281: b7 46 40        STA    $4640
f284: 33 5f           LEAU   -$1,U
f286: 11 83 00 00     CMPU   #$0000
f28a: 26 f5           BNE    $F281
f28c: 10 ce 4f ff     LDS    #$4FFF
f290: 86 48           LDA    #$48
f292: 1f 8b           TFR    A,DP
f294: b7 46 e0        STA    $46E0
f297: 86 00           LDA    #$00
f299: b7 44 00        STA    $4400
f29c: 8e 48 00        LDX    #$4800
f29f: cc 00 00        LDD    #$0000
f2a2: ed 81           STD    ,X++
f2a4: 8c 50 00        CMPX   #$5000
f2a7: 25 f9           BCS    $F2A2
f2a9: b7 46 40        STA    $4640
f2ac: 8e 50 00        LDX    #$5000
f2af: cc 00 00        LDD    #$0000
f2b2: ed 81           STD    ,X++
f2b4: b7 46 40        STA    $4640
f2b7: 8c 60 00        CMPX   #$6000
f2ba: 25 f6           BCS    $F2B2
f2bc: 8e 00 00        LDX    #$0000
f2bf: cc 00 00        LDD    #$0000
f2c2: ed 81           STD    ,X++
f2c4: b7 46 40        STA    $4640
f2c7: 8c 30 00        CMPX   #$3000
f2ca: 25 f6           BCS    $F2C2
f2cc: b6 43 00        LDA    $4300
f2cf: 84 10           ANDA   #$10
f2d1: 26 03           BNE    $F2D6
f2d3: 7e f3 6e        JMP    $F36E
