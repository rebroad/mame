fd07: b6 43 00     LDA    $4300
fd0a: 84 10        ANDA   #$10
fd0c: f6 43 20     LDB    $4320
fd0f: c4 04        ANDB   #$04
fd11: 10 83 00 00  CMPD   #$0000
fd15: 27 03        BEQ    $FD1A
fd17: 7e f7 20     JMP    $F720
fd1a: b7 46 40     STA    $4640
fd1d: 86 ff        LDA    #$FF
fd1f: b7 46 86     STA    $4686
fd22: b7 46 83     STA    $4683
fd25: b7 46 82     STA    $4682
fd28: f6 43 40     LDB    $4340
fd2b: 53           COMB
fd2c: ce fd 9a     LDU    #$FD9A
fd2f: e1 c0        CMPB   ,U+
fd31: 26 27        BNE    $FD5A
fd33: b7 46 20     STA    $4620
fd36: 10 8e 00 00  LDY    #$0000
fd3a: cc bf ae     LDD    #$BFAE
fd3d: ed a1        STD    ,Y++
fd3f: cc 80 40     LDD    #$8040
fd42: ed a1        STD    ,Y++
fd44: a6 c4        LDA    ,U
fd46: 10 ce 4f ff  LDS    #$4FFF
fd4a: bd e7 90     JSR    $E790
fd4d: cc 20 20     LDD    #$2020
fd50: ed a1        STD    ,Y++
fd52: ed a1        STD    ,Y++
fd54: b7 46 00     STA    $4600
fd57: ce fd bc     LDU    #$FDBC
fd5a: 33 41        LEAU   $1,U
fd5c: 11 83 fd bc  CMPU   #$FDBC
fd60: 25 cd        BCS    $FD2F
fd62: f6 43 40     LDB    $4340
fd65: 53           COMB
fd66: 1f 98        TFR    B,A
fd68: c4 0f        ANDB   #$0F
fd6a: 84 f8        ANDA   #$F8
fd6c: 81 c0        CMPA   #$C0
fd6e: 27 02        BEQ    $FD72
fd70: 0f d1        CLR    <$D1
fd72: 8e fd 85     LDX    #$FD85
fd75: a1 80        CMPA   ,X+
fd77: 26 02        BNE    $FD7B
fd79: 6e 94        JMP    [,X]
fd7b: 30 02        LEAX   $2,X
fd7d: 8c fd 9a     CMPX   #$FD9A
fd80: 25 f3        BCS    $FD75
fd82: 7e ff 24     JMP    $FF24
fd85: 00 fd        NEG    <$FD
fd87: bc 80 fd     CMPX   $80FD
fd8a: d7 c0        STB    <$C0
fd8c: fd f2 e0     STD    $F2E0
fd8f: fe 4f e8     LDU    $4FE8
fd92: fe 4f f0     LDU    $4FF0
fd95: fe 7c f8     LDU    $7CF8
fd98: fe a7 e0     LDU    $A7E0
fd9b: 10 e1 11     CMPB   -$F,X
fd9e: e2 12        SBCB   -$E,X
fda0: e3 13        ADDD   -$D,X
fda2: e4 14        ANDB   -$C,X
fda4: e5 15        BITB   -$B,X
fda6: e6 16        LDB    -$A,X
fda8: e7 17        STB    -$9,X
fdaa: e8 18        EORB   -$8,X
fdac: e9 19        ADCB   -$7,X
fdae: ea 20        ORB    $0,Y
fdb0: f0 21 f1     SUBB   $21F1
fdb3: 22 f2        BHI    $FDA7
fdb5: 23 f3        BLS    $FDAA
fdb7: 24 f4        BCC    $FDAD
fdb9: 25 f8        BCS    $FDB3
fdbb: 26 5d        BNE    $FE1A
fdbd: 27 03        BEQ    $FDC2
fdbf: 7e ff 24     JMP    $FF24
fdc2: 1f 40        TFR    S,D
fdc4: 84 40        ANDA   #$40
fdc6: c4 01        ANDB   #$01
fdc8: 10 83 00 00  CMPD   #$0000
fdcc: 26 06        BNE    $FDD4
fdce: ce 46 86     LDU    #$4686
fdd1: 7e fe ff     JMP    $FEFF
fdd4: 7e fd 07     JMP    $FD07
fdd7: 5d           TSTB
fdd8: 27 03        BEQ    $FDDD
fdda: 7e ff 24     JMP    $FF24
fddd: 1f 40        TFR    S,D
fddf: 84 81        ANDA   #$81
fde1: c4 f8        ANDB   #$F8
fde3: 10 83 00 00  CMPD   #$0000
fde7: 26 06        BNE    $FDEF
fde9: ce 46 83     LDU    #$4683
fdec: 7e fe ff     JMP    $FEFF
fdef: 7e fd 07     JMP    $FD07
fdf2: c1 06        CMPB   #$06
fdf4: 26 18        BNE    $FE0E
fdf6: 0d d1        TST    <$D1
fdf8: 26 12        BNE    $FE0C
fdfa: 8e 08 00     LDX    #$0800
fdfd: 86 00        LDA    #$00
fdff: a7 80        STA    ,X+
fe01: 8b 05        ADDA   #$05
fe03: 8c 10 00     CMPX   #$1000
fe06: 25 f7        BCS    $FDFF
fe08: 86 ff        LDA    #$FF
fe0a: 97 d1        STA    <$D1
fe0c: 20 26        BRA    $FE34
fe0e: 0f d1        CLR    <$D1
fe10: b7 46 20     STA    $4620
fe13: 8e fe 37     LDX    #$FE37
fe16: 58           ASLB
fe17: 58           ASLB
fe18: 3a           ABX
fe19: 8c fe 4f     CMPX   #$FE4F
fe1c: 25 03        BCS    $FE21
fe1e: 7e ff 24     JMP    $FF24
fe21: ec 84        LDD    ,X
fe23: fd 00 00     STD    >$0000
fe26: ec 02        LDD    $2,X
fe28: fd 00 02     STD    >$0002
fe2b: cc 20 20     LDD    #$2020
fe2e: fd 00 04     STD    >$0004
fe31: b7 46 00     STA    $4600
fe34: 7e fd 07     JMP    $FD07
fe37: 20 20        BRA    $FE59
fe39: 20 20        BRA    $FE5B
fe3b: 01 00        NEG    <$00
fe3d: 01 00        NEG    <$00
fe3f: 50           NEGB
fe40: 10 20 20 80  XLBRA  $1EC4
fe44: 40           NEGA
fe45: 20 20        BRA    $FE67
fe47: 72 40 20     XNC    $4020
fe4a: 20 67        BRA    $FEB3
fe4c: 80 20        SUBA   #$20
fe4e: 20 8e        BRA    $FDDE
fe50: fc f1 58     LDD    $F158
fe53: 3a           ABX
fe54: 10 8e 00 00  LDY    #$0000
fe58: 8c fd 07     CMPX   #$FD07
fe5b: 25 03        BCS    $FE60
fe5d: 7e ff 24     JMP    $FF24
fe60: b7 46 40     STA    $4640
fe63: 31 21        LEAY   $1,Y
fe65: 10 8c 02 00  CMPY   #$0200
fe69: 25 06        BCS    $FE71
fe6b: 10 ce fd 07  LDS    #$FD07
fe6f: 20 04        BRA    $FE75
fe71: 10 ce fe 58  LDS    #$FE58
fe75: 1f 10        TFR    X,D
fe77: 83 fc ff     SUBD   #$FCFF
fe7a: 6e 94        JMP    [,X]
fe7c: 8e fb 4b     LDX    #$FB4B
fe7f: 58           ASLB
fe80: 58           ASLB
fe81: 58           ASLB
fe82: 3a           ABX
fe83: 10 8e 00 00  LDY    #$0000
fe87: 8c fb 73     CMPX   #$FB73
fe8a: 25 03        BCS    $FE8F
fe8c: 7e ff 24     JMP    $FF24
fe8f: b7 46 40     STA    $4640
fe92: 31 21        LEAY   $1,Y
fe94: 10 8c 02 00  CMPY   #$0200
fe98: 25 06        BCS    $FEA0
fe9a: 10 ce fd 07  LDS    #$FD07
fe9e: 20 04        BRA    $FEA4
fea0: 10 ce fe 87  LDS    #$FE87
fea4: 7e fb 38     JMP    $FB38
fea7: c4 07        ANDB   #$07
fea9: 27 03        BEQ    $FEAE
feab: 7e ff 24     JMP    $FF24
feae: 86 01        LDA    #$01
feb0: f7 46 e0     STB    $46E0
feb3: 1f 13        TFR    X,U
feb5: f6 44 00     LDB    $4400
feb8: f6 44 01     LDB    $4401
febb: c4 40        ANDB   #$40
febd: 26 44        BNE    $FF03
febf: c6 80        LDB    #$80
fec1: 5a           DECB
fec2: 2b 3f        BMI    $FF03
fec4: b7 46 40     STA    $4640
fec7: 7d 44 01     TST    $4401
feca: 2b f5        BMI    $FEC1
fecc: b7 44 00     STA    $4400
fecf: f6 44 01     LDB    $4401
fed2: 2a 2f        BPL    $FF03
fed4: 8e 01 00     LDX    #$0100
fed7: 30 1f        LEAX   -$1,X
fed9: 27 28        BEQ    $FF03
fedb: b7 46 40     STA    $4640
fede: f6 44 01     LDB    $4401
fee1: c4 40        ANDB   #$40
fee3: 27 f2        BEQ    $FED7
fee5: 7d 44 01     TST    $4401
fee8: 2b 19        BMI    $FF03
feea: b1 44 00     CMPA   $4400
feed: 26 14        BNE    $FF03
feef: f6 44 01     LDB    $4401
fef2: c4 40        ANDB   #$40
fef4: 2b 0d        BMI    $FF03
fef6: 48           ASLA
fef7: 24 b7        BCC    $FEB0
fef9: ce 46 82     LDU    #$4682
fefc: 7e fe ff     JMP    $FEFF
feff: 86 00        LDA    #$00
ff01: a7 c4        STA    ,U
ff03: 8e 00 00     LDX    #$0000
ff06: b7 00 00     STA    >$0000
