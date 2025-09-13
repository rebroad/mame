c2c3: 32 7d     LEAS   -$3,S
c2c5: 8e c7 b7  LDX    #$C7B7
c2c8: e6 86     LDB    A,X
c2ca: 8e c7 b6  LDX    #$C7B6
c2cd: e0 86     SUBB   A,X
c2cf: c0 02     SUBB   #$02
c2d1: e7 e4     STB    ,S
c2d3: e6 86     LDB    A,X
c2d5: 8e 45 00  LDX    #$4500
c2d8: 3a        ABX
c2d9: c6 00     LDB    #$00
c2db: e7 61     STB    $1,S
c2dd: 1a 01     ORCC   #$01
c2df: e6 80     LDB    ,X+
c2e1: c4 0f     ANDB   #$0F
c2e3: e9 61     ADCB   $1,S
c2e5: e7 61     STB    $1,S
c2e7: 6a e4     DEC    ,S
c2e9: 26 f4     BNE    $C2DF
c2eb: c9 00     ADCB   #$00
c2ed: e7 61     STB    $1,S
c2ef: e6 84     LDB    ,X
c2f1: 58        ASLB
c2f2: 58        ASLB
c2f3: 58        ASLB
c2f4: 58        ASLB
c2f5: e7 62     STB    $2,S
c2f7: e6 01     LDB    $1,X
c2f9: c4 0f     ANDB   #$0F
c2fb: eb 62     ADDB   $2,S
c2fd: e7 62     STB    $2,S
c2ff: e6 61     LDB    $1,S
c301: e1 62     CMPB   $2,S
c303: 32 63     LEAS   $3,S
c305: 39        RTS
c306: 7e c306     JMP    $c306
