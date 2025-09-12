d8df: 8e 4a 52     LDX    #$4A52
d8e2: bc 4a d9     CMPX   $4AD9
d8e5: 24 0a        BCC    $0012
d8e7: a1 80        CMPA   ,X+
d8e9: 26 01        BNE    $000D
d8eb: 39           RTS
d8ec: bc 4a d9     CMPX   $4AD9
d8ef: 25 f6        BCS    $0008
d8f1: a7 80        STA    ,X+
d8f3: bf 4a d9     STX    $4AD9
d8f6: 39           RTS
d8f7: 8e 4a 52     LDX    #$4A52
d8fa: a1 84        CMPA   ,X
d8fc: 26 14        BNE    $0033
d8fe: fe 4a d9     LDU    $4AD9
d901: 11 83 4a 52  CMPU   #$4A52
d905: 23 0b        BLS    $0033
d907: 33 5f        LEAU   -$1,U
d909: a6 c4        LDA    ,U
d90b: a7 84        STA    ,X
d90d: ff 4a d9     STU    $4AD9
d910: 30 c4        LEAX   ,U
d912: 30 01        LEAX   $1,X
d914: bc 4a d9     CMPX   $4AD9
d917: 25 e1        BCS    $001B
d919: 39           RTS
d91a: 8e 4a 52     LDX    #$4A52
d91d: 6f 84        CLR    ,X
d91f: bf 4a d9     STX    $4AD9
d922: 39           RTS
d923: ce 4a 52     LDU    #$4A52
d926: 11 b3 4a d9  CMPU   $4AD9
d92a: 24 15        BCC    $0062
d92c: e6 c0        LDB    ,U+
d92e: c1 d6        CMPB   #$D6
d930: 24 09        BCC    $005C
d932: f7 48 ae     STB    $48AE
d935: bd e7 dd     JSR    $E7DD
d938: bd e7 fc     JSR    $E7FC
d93b: 11 b3 4a d9  CMPU   $4AD9
d93f: 25 eb        BCS    $004D
d941: 39           RTS
d942: ce 4a 52     LDU    #$4A52
d945: 11 b3 4a d9  CMPU   $4AD9
d949: 24 12        BCC    $007E
d94b: e6 c0        LDB    ,U+
d94d: c1 d6        CMPB   #$D6
d94f: 24 06        BCC    $0078
d951: f7 48 ae     STB    $48AE
d954: bd e7 fc     JSR    $E7FC
d957: 11 b3 4a d9  CMPU   $4AD9
d95b: 25 ee        BCS    $006C
d95d: 39           RTS
d95e: fe 4a dd     LDU    $4ADD
d961: a7 c0        STA    ,U+
d963: cc 00 00     LDD    #$0000
d966: ed c1        STD    ,U++
d968: cc 01 00     LDD    #$0100
d96b: ed c1        STD    ,U++
d96d: ff 4a dd     STU    $4ADD
d970: 39           RTS
d971: ce 4a 66     LDU    #$4A66
d974: a1 c4        CMPA   ,U
d976: 26 04        BNE    $009D
d978: 86 00        LDA    #$00
d97a: ed c4        STD    ,U
d97c: 33 45        LEAU   $5,U
d97e: 11 b3 4a dd  CMPU   $4ADD
d982: 25 f0        BCS    $0095
d984: 39           RTS
d985: ce 4a 66     LDU    #$4A66
d988: 11 b3 4a dd  CMPU   $4ADD
d98c: 24 4d        BCC    $00FC
d98e: cc 72 00     LDD    #$7200
d991: ed a1        STD    ,Y++
d993: a6 c0        LDA    ,U+
d995: 27 3c        BEQ    $00F4
d997: b7 48 ae     STA    $48AE
d99a: cc 01 98     LDD    #$0198
d99d: ed a1        STD    ,Y++
d99f: cc 00 00     LDD    #$0000
d9a2: ed a1        STD    ,Y++
d9a4: e6 c4        LDB    ,U
d9a6: 86 71        LDA    #$71
d9a8: ed a1        STD    ,Y++
d9aa: 53           COMB
d9ab: cb 10        ADDB   #$10
d9ad: 86 62        LDA    #$62
d9af: ed a1        STD    ,Y++
d9b1: 8e e9 9e     LDX    #$E99E
d9b4: f6 48 ae     LDB    $48AE
d9b7: 3a           ABX
d9b8: 3a           ABX
d9b9: cc 1d d0     LDD    #$1DD0
d9bc: ed a1        STD    ,Y++
d9be: ec 84        LDD    ,X
d9c0: 84 1f        ANDA   #$1F
d9c2: 8a 00        ORA    #$00
d9c4: ed a1        STD    ,Y++
d9c6: bd e8 21     JSR    $E821
d9c9: cc 72 00     LDD    #$7200
d9cc: ed a1        STD    ,Y++
d9ce: cc 80 40     LDD    #$8040
d9d1: ed a1        STD    ,Y++
d9d3: 33 44        LEAU   $4,U
d9d5: 11 b3 4a dd  CMPU   $4ADD
d9d9: 25 b8        BCS    $00B4
d9db: 39           RTS
d9dc: cc 00 00     LDD    #$0000
d9df: fd 4a e4     STD    $4AE4
d9e2: cc 60 18     LDD    #$6018
d9e5: fd 4a e6     STD    $4AE6
d9e8: cc 4a 66     LDD    #$4A66
d9eb: fd 4a dd     STD    $4ADD
d9ee: fc db 2f     LDD    $DB2F
d9f1: fd 4a e2     STD    $4AE2
d9f4: 86 51        LDA    #$51
d9f6: b7 4a df     STA    $4ADF
d9f9: 39           RTS
d9fa: fc 4a e4     LDD    $4AE4
d9fd: c3 00 01     ADDD   #$0001
da00: fd 4a e4     STD    $4AE4
da03: 10 83 00 f8  CMPD   #$00F8
da07: 10 24 00 89  LBCC   $01B5
da0b: 10 83 00 40  CMPD   #$0040
da0f: 24 0d        BCC    $013F
da11: fc 4a e6     LDD    $4AE6
da14: cb 03        ADDB   #$03
da16: fd 4a e6     STD    $4AE6
da19: cc 00 40     LDD    #$0040
da1c: 20 0c        BRA    $014B
da1e: fc 4a e4     LDD    $4AE4
da21: 53           COMB
da22: cb 18        ADDB   #$18
da24: fd 4a e6     STD    $4AE6
da27: fc 4a e4     LDD    $4AE4
da2a: 8a 73        ORA    #$73
da2c: fd 4a e8     STD    $4AE8
da2f: fc 4a e6     LDD    $4AE6
da32: 8a 61        ORA    #$61
da34: ed a1        STD    ,Y++
da36: cc 01 98     LDD    #$0198
da39: ed a4        STD    ,Y
da3b: ed 28        STD    $8,Y
da3d: ed a8 10     STD    $10,Y
da40: ed a8 18     STD    $18,Y
da43: ed a8 20     STD    $20,Y
da46: ed a8 28     STD    $28,Y
da49: cc 00 00     LDD    #$0000
da4c: ed 22        STD    $2,Y
da4e: ed 2a        STD    $A,Y
da50: ed a8 12     STD    $12,Y
da53: ed a8 1a     STD    $1A,Y
da56: ed a8 22     STD    $22,Y
da59: ed a8 2a     STD    $2A,Y
da5c: fc 4a e8     LDD    $4AE8
da5f: ed 24        STD    $4,Y
da61: ed 2c        STD    $C,Y
da63: ed a8 14     STD    $14,Y
da66: ed a8 1c     STD    $1C,Y
da69: ed a8 24     STD    $24,Y
da6c: ed a8 2c     STD    $2C,Y
da6f: cc b4 00     LDD    #$B400
da72: ed 26        STD    $6,Y
da74: cc b4 34     LDD    #$B434
da77: ed 2e        STD    $E,Y
da79: cc b4 58     LDD    #$B458
da7c: ed a8 16     STD    $16,Y
da7f: cc b4 88     LDD    #$B488
da82: ed a8 1e     STD    $1E,Y
da85: cc b4 ae     LDD    #$B4AE
da88: ed a8 26     STD    $26,Y
da8b: cc b4 d2     LDD    #$B4D2
da8e: ed a8 2e     STD    $2E,Y
da91: 31 a8 30     LEAY   $30,Y
da94: 8e 4a 66     LDX    #$4A66
da97: bc 4a dd     CMPX   $4ADD
da9a: 24 59        BCC    $0216
da9c: fc 4a e4     LDD    $4AE4
da9f: 10 83 00 e0  CMPD   #$00E0
daa3: 24 0e        BCC    $01D4
daa5: 10 83 00 40  CMPD   #$0040
daa9: 25 06        BCS    $01D2
daab: ec 01        LDD    $1,X
daad: e3 03        ADDD   $3,X
daaf: ed 01        STD    $1,X
dab1: 20 3b        BRA    $020F
dab3: 10 83 01 60  CMPD   #$0160
dab7: 24 08        BCC    $01E2
dab9: cc 04 00     LDD    #$0400
dabc: fd 4a 69     STD    $4A69
dabf: 20 2d        BRA    $020F
dac1: ec 01        LDD    $1,X
dac3: e3 03        ADDD   $3,X
dac5: ed 01        STD    $1,X
dac7: 10 83 f0 00  CMPD   #$F000
dacb: 25 21        BCS    $020F
dacd: a6 84        LDA    ,X
dacf: 4c           INCA
dad0: ce 4a 66     LDU    #$4A66
dad3: a1 c4        CMPA   ,U
dad5: 26 08        BNE    $0200
dad7: cc 04 00     LDD    #$0400
dada: ed 43        STD    $3,U
dadc: fe 4a dd     LDU    $4ADD
