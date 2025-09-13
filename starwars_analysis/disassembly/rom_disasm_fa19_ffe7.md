fa19: 30 08           LEAX   $8,X
fa1b: 8c fb 73        CMPX   #$FB73
fa1e: 10 25 ff 72     LBCS   $F994
fa22: 10 ce 4f ff     LDS    #$4FFF
fa26: 0d cc           TST    <$CC
fa28: 26 04           BNE    $FA2E
fa2a: c6 c5           LDB    #$C5
fa2c: 20 07           BRA    $FA35
fa2e: c6 c4           LDB    #$C4
fa30: bd e7 c7        JSR    $E7C7
fa33: c6 c6           LDB    #$C6
fa35: bd e7 c7        JSR    $E7C7
fa38: 8e fa e1        LDX    #$FAE1
fa3b: 0f cc           CLR    <$CC
fa3d: cc 64 80        LDD    #$6480
fa40: ed a1           STD    ,Y++
fa42: 1f 10           TFR    X,D
fa44: 83 fa e9        SUBD   #$FAE9
fa47: 54              LSRB
fa48: 10 ce fa 4e     LDS    #$FA4E
fa4c: 6e 94           JMP    [,X]
fa4e: 27 71           BEQ    $FAC1
fa50: dd d2           STD    <$D2
fa52: 0c cc           INC    <$CC
fa54: 8c fa f9        CMPX   #$FAF9
fa57: 24 39           BCC    $FA92
fa59: ec 02           LDD    $2,X
fa5b: ed a1           STD    ,Y++
fa5d: cc 1e a2        LDD    #$1EA2
fa60: ed a1           STD    ,Y++
fa62: fc 30 32        LDD    $3032
fa65: ed a1           STD    ,Y++
fa67: ed a1           STD    ,Y++
fa69: ed a1           STD    ,Y++
fa6b: fc 30 22        LDD    $3022
fa6e: ed a1           STD    ,Y++
fa70: fc 30 02        LDD    $3002
fa73: ed a1           STD    ,Y++
fa75: 1f 10           TFR    X,D
fa77: 83 fa e1        SUBD   #$FAE1
fa7a: 58              ASLB
fa7b: 58              ASLB
fa7c: cb 50           ADDB   #$50
fa7e: 86 03           LDA    #$03
fa80: 58              ASLB
fa81: 25 05           BCS    $FA88
fa83: fe 30 22        LDU    $3022
fa86: 20 03           BRA    $FA8B
fa88: fe 30 32        LDU    $3032
fa8b: ef a1           STU    ,Y++
fa8d: 4a              DECA
fa8e: 2a f0           BPL    $FA80
fa90: 20 17           BRA    $FAA9
fa92: ec 02           LDD    $2,X
fa94: ed a1           STD    ,Y++
fa96: cc 00 96        LDD    #$0096
fa99: ed a1           STD    ,Y++
fa9b: 1f 10           TFR    X,D
fa9d: 83 fa f9        SUBD   #$FAF9
faa0: 54              LSRB
faa1: 10 ce 30 18     LDS    #$3018
faa5: ec e5           LDD    B,S
faa7: ed a1           STD    ,Y++
faa9: fc 30 02        LDD    $3002
faac: ed a1           STD    ,Y++
faae: 10 ce 4f ff     LDS    #$4FFF
fab2: 96 d2           LDA    <$D2
fab4: bd e7 90        JSR    $E790
fab7: 96 d3           LDA    <$D3
fab9: bd e7 90        JSR    $E790
fabc: cc 80 40        LDD    #$8040
fabf: ed a1           STD    ,Y++
fac1: 30 04           LEAX   $4,X
fac3: 8c fb 09        CMPX   #$FB09
fac6: 10 25 ff 78     LBCS   $FA42
faca: 10 ce 4f ff     LDS    #$4FFF
face: 0d cc           TST    <$CC
fad0: 26 04           BNE    $FAD6
fad2: c6 c8           LDB    #$C8
fad4: 20 02           BRA    $FAD8
fad6: c6 c7           LDB    #$C7
fad8: bd e7 c7        JSR    $E7C7
fadb: ce f7 27        LDU    #$F727
fade: 7e f7 0d        JMP    $F70D
fae1: fb aa 1f        ADDB   $AA1F
fae4: 6a fb           DEC    [D,S]
fae6: bf 1f 38        STX    $1F38
fae9: fc ac 1f        LDD    $AC1F
faec: 06 fc           ROR    <$FC
faee: ac 1e           CMPX   -$2,X
faf0: d4 fc           ANDB   <$FC
faf2: ac 1e           CMPX   -$2,X
faf4: a2 fc ac        SBCA   [$FAA3,PCR]
faf7: 1e 70           EXG    inv,D
faf9: fb 09 1f        ADDB   $091F
fafc: 6a fc 1c        DEC    [$FB1B,PCR]
faff: 1f 38           TFR    U,A
fb01: fc 72 1f        LDD    $721F
fb04: 06 fb           ROR    <$FB
fb06: d4 1e           ANDB   <$1E
fb08: d4 10           ANDB   <$10
fb0a: ce fb 10        LDU    #$FB10
fb0d: 7e fb f6        JMP    $FBF6
fb10: 10 83 00 01     CMPD   #$0001
fb14: 27 03           BEQ    $FB19
fb16: 7e fa 4e        JMP    $FA4E
fb19: ce 00 02        LDU    #$0002
fb1c: 10 ce fb 23     LDS    #$FB23
fb20: 7e fc 0d        JMP    $FC0D
fb23: 10 a3 c9 f3 4e  CMPD   -$0CB2,U
fb28: 27 03           BEQ    $FB2D
fb2a: 7e fa 4e        JMP    $FA4E
fb2d: 33 42           LEAU   $2,U
fb2f: 11 83 00 20     CMPU   #$0020
fb33: 25 e7           BCS    $FB1C
fb35: 7e fa 4e        JMP    $FA4E
fb38: ec 84           LDD    ,X
fb3a: fd 47 06        STD    $4706
fb3d: ec 02           LDD    $2,X
fb3f: fd 47 04        STD    $4704
fb42: 3d              MUL
fb43: fc 47 00        LDD    $4700
fb46: 10 a3 04        CMPD   $4,X
fb49: 6e e4           JMP    ,S
fb4b: 40              NEGA
fb4c: 00 40           NEG    <$40
fb4e: 00 40           NEG    <$40
fb50: 00 00           NEG    <$00
fb52: c8 55           EORB   #$55
fb54: 55              LSRB
fb55: 40              NEGA
fb56: 00 55           NEG    <$55
fb58: 55              LSRB
fb59: 00 96           NEG    <$96
fb5b: 2a aa           BPL    $FB07
fb5d: 40              NEGA
fb5e: 00 2a           NEG    <$2A
fb60: aa 00           ORA    $0,X
fb62: 64 2a           LSR    $A,Y
fb64: aa 2a           ORA    $A,Y
fb66: aa 40           ORA    $0,U
fb68: 00 00           NEG    <$00
fb6a: 32 55           LEAS   -$B,U
fb6c: 55              LSRB
fb6d: 55              LSRB
fb6e: 55              LSRB
fb6f: 40              NEGA
fb70: 00 00           NEG    <$00
fb72: 00 6e           NEG    <$6E
fb74: e4 cc 55        ANDB   $FBCC,PCR
fb77: 55              LSRB
fb78: fd 50 1e        STD    $501E
fb7b: 86 57           LDA    #$57
fb7d: b7 47 00        STA    $4700
fb80: 20 f1           BRA    $FB73
fb82: cc aa aa        LDD    #$AAAA
fb85: fd 50 1e        STD    $501E
fb88: 86 58           LDA    #$58
fb8a: b7 47 00        STA    $4700
fb8d: 20 e4           BRA    $FB73
fb8f: cc 55 55        LDD    #$5555
fb92: fd 50 1e        STD    $501E
fb95: 86 59           LDA    #$59
fb97: b7 47 00        STA    $4700
fb9a: 20 d7           BRA    $FB73
fb9c: 86 5a           LDA    #$5A
fb9e: b7 47 00        STA    $4700
fba1: 20 d0           BRA    $FB73
fba3: 86 5b           LDA    #$5B
fba5: b7 47 00        STA    $4700
fba8: 20 c9           BRA    $FB73
fbaa: cc 55 55        LDD    #$5555
fbad: fd 50 00        STD    $5000
fbb0: 86 5c           LDA    #$5C
fbb2: b7 47 00        STA    $4700
fbb5: 12              NOP
fbb6: fc 50 02        LDD    $5002
fbb9: 10 83 55 55     CMPD   #$5555
fbbd: 20 b4           BRA    $FB73
fbbf: cc aa aa        LDD    #$AAAA
fbc2: fd 50 00        STD    $5000
fbc5: 86 5c           LDA    #$5C
fbc7: b7 47 00        STA    $4700
fbca: 12              NOP
fbcb: fc 50 02        LDD    $5002
fbce: 10 83 aa aa     CMPD   #$AAAA
fbd2: 20 9f           BRA    $FB73
fbd4: cc 26 96        LDD    #$2696
fbd7: fd 50 18        STD    $5018
fbda: cc 1b 2c        LDD    #$1B2C
fbdd: fd 50 1a        STD    $501A
fbe0: cc 40 00        LDD    #$4000
fbe3: fd 50 1c        STD    $501C
fbe6: 86 5d           LDA    #$5D
fbe8: b7 47 00        STA    $4700
fbeb: 3d              MUL
fbec: fc 50 00        LDD    $5000
fbef: 10 83 0b 6a     CMPD   #$0B6A
fbf3: 7e fb 73        JMP    $FB73
fbf6: 86 5a           LDA    #$5A
fbf8: b7 47 00        STA    $4700
fbfb: cc 00 00        LDD    #$0000
fbfe: fd 50 1a        STD    $501A
fc01: cc 40 00        LDD    #$4000
fc04: fd 50 1c        STD    $501C
fc07: cc 00 01        LDD    #$0001
fc0a: fd 50 18        STD    $5018
fc0d: fd 50 18        STD    $5018
fc10: 86 5e           LDA    #$5E
fc12: b7 47 00        STA    $4700
fc15: 3d              MUL
fc16: fc 50 00        LDD    $5000
fc19: 7e fb 73        JMP    $FB73
fc1c: ce 50 28        LDU    #$5028
fc1f: cc 00 05        LDD    #$0005
fc22: ed c4           STD    ,U
fc24: c3 00 01        ADDD   #$0001
fc27: 33 48           LEAU   $8,U
fc29: 11 83 60 00     CMPU   #$6000
fc2d: 25 f3           BCS    $FC22
fc2f: cc 00 00        LDD    #$0000
fc32: fd 50 1e        STD    $501E
fc35: cc 40 00        LDD    #$4000
fc38: fd 50 20        STD    $5020
fc3b: cc 00 04        LDD    #$0004
fc3e: fd 47 01        STD    $4701
fc41: ce 00 08        LDU    #$0008
fc44: b7 46 40        STA    $4640
fc47: 1f 30           TFR    U,D
fc49: 44              LSRA
fc4a: 56              RORB
fc4b: 86 5b           LDA    #$5B
fc4d: b7 47 00        STA    $4700
fc50: 5a              DECB
fc51: 26 f8           BNE    $FC4B
fc53: 86 5f           LDA    #$5F
fc55: b7 47 00        STA    $4700
fc58: 3d              MUL
fc59: 11 b3 50 00     CMPU   $5000
fc5d: 27 03           BEQ    $FC62
fc5f: 7e fb 73        JMP    $FB73
fc62: 1f 30           TFR    U,D
fc64: 33 cb           LEAU   D,U
fc66: 11 83 02 00     CMPU   #$0200
fc6a: 25 d8           BCS    $FC44
fc6c: cc 00 00        LDD    #$0000
fc6f: 7e fb 73        JMP    $FB73
fc72: cc 1b 2c        LDD    #$1B2C
fc75: fd 50 18        STD    $5018
fc78: cc 00 00        LDD    #$0000
fc7b: fd 50 1a        STD    $501A
fc7e: cc 40 00        LDD    #$4000
fc81: fd 50 1c        STD    $501C
fc84: 86 5d           LDA    #$5D
fc86: b7 47 00        STA    $4700
fc89: 3d              MUL
fc8a: cc 19 6a        LDD    #$196A
fc8d: fd 50 18        STD    $5018
fc90: cc 00 00        LDD    #$0000
fc93: fd 50 1a        STD    $501A
fc96: cc 40 00        LDD    #$4000
fc99: fd 50 1c        STD    $501C
fc9c: 86 5e           LDA    #$5E
fc9e: b7 47 00        STA    $4700
fca1: 3d              MUL
fca2: fc 50 00        LDD    $5000
fca5: 10 83 34 96     CMPD   #$3496
fca9: 7e fb 73        JMP    $FB73
fcac: 58              ASLB
fcad: 58              ASLB
fcae: ce fc d1        LDU    #$FCD1
fcb1: 33 c5           LEAU   B,U
fcb3: ec c4           LDD    ,U
fcb5: fd 50 18        STD    $5018
fcb8: ec 42           LDD    $2,U
fcba: fd 50 1a        STD    $501A
fcbd: ec 44           LDD    $4,U
fcbf: fd 50 1c        STD    $501C
fcc2: 86 5d           LDA    #$5D
fcc4: b7 47 00        STA    $4700
fcc7: 3d              MUL
fcc8: fc 50 00        LDD    $5000
fccb: 10 a3 46        CMPD   $6,U
fcce: 7e fb 73        JMP    $FB73
fcd1: 55              LSRB
fcd2: 55              LSRB
fcd3: 00 00           NEG    <$00
fcd5: 40              NEGA
fcd6: 00 55           NEG    <$55
fcd8: 55              LSRB
fcd9: 00 00           NEG    <$00
fcdb: 55              LSRB
fcdc: 55              LSRB
fcdd: c0 00           SUBB   #$00
fcdf: 55              LSRB
fce0: 55              LSRB
fce1: 2a aa           BPL    $FC8D
fce3: 00 00           NEG    <$00
fce5: 40              NEGA
fce6: 00 2a           NEG    <$2A
fce8: aa 00           ORA    $0,X
fcea: 00 2a           NEG    <$2A
fcec: aa c0           ORA    ,U+
fcee: 00 2a           NEG    <$2A
fcf0: aa fb           ORA    [D,S]
fcf2: 75 fb 82        LSR    $FB82
fcf5: fb 8f fb        ADDB   $8FFB
fcf8: 9c fb           CMPX   <$FB
fcfa: a3 fb           SUBD   [D,S]
fcfc: aa fb           ORA    [D,S]
fcfe: bf fc ac        STX    $FCAC
fd01: fc ac fc        LDD    $ACFC
fd04: ac fc ac        CMPX   [$FCB3,PCR]
fd07: b6 43 00        LDA    $4300
fd0a: 84 10           ANDA   #$10
fd0c: f6 43 20        LDB    $4320
fd0f: c4 04           ANDB   #$04
fd11: 10 83 00 00     CMPD   #$0000
fd15: 27 03           BEQ    $FD1A
fd17: 7e f7 20        JMP    $F720
fd1a: b7 46 40        STA    $4640
fd1d: 86 ff           LDA    #$FF
fd1f: b7 46 86        STA    $4686
fd22: b7 46 83        STA    $4683
fd25: b7 46 82        STA    $4682
fd28: f6 43 40        LDB    $4340
fd2b: 53              COMB
fd2c: ce fd 9a        LDU    #$FD9A
fd2f: e1 c0           CMPB   ,U+
fd31: 26 27           BNE    $FD5A
fd33: b7 46 20        STA    $4620
fd36: 10 8e 00 00     LDY    #$0000
fd3a: cc bf ae        LDD    #$BFAE
fd3d: ed a1           STD    ,Y++
fd3f: cc 80 40        LDD    #$8040
fd42: ed a1           STD    ,Y++
fd44: a6 c4           LDA    ,U
fd46: 10 ce 4f ff     LDS    #$4FFF
fd4a: bd e7 90        JSR    $E790
fd4d: cc 20 20        LDD    #$2020
fd50: ed a1           STD    ,Y++
fd52: ed a1           STD    ,Y++
fd54: b7 46 00        STA    $4600
fd57: ce fd bc        LDU    #$FDBC
fd5a: 33 41           LEAU   $1,U
fd5c: 11 83 fd bc     CMPU   #$FDBC
fd60: 25 cd           BCS    $FD2F
fd62: f6 43 40        LDB    $4340
fd65: 53              COMB
fd66: 1f 98           TFR    B,A
fd68: c4 0f           ANDB   #$0F
fd6a: 84 f8           ANDA   #$F8
fd6c: 81 c0           CMPA   #$C0
fd6e: 27 02           BEQ    $FD72
fd70: 0f d1           CLR    <$D1
fd72: 8e fd 85        LDX    #$FD85
fd75: a1 80           CMPA   ,X+
fd77: 26 02           BNE    $FD7B
fd79: 6e 94           JMP    [,X]
fd7b: 30 02           LEAX   $2,X
fd7d: 8c fd 9a        CMPX   #$FD9A
fd80: 25 f3           BCS    $FD75
fd82: 7e ff 24        JMP    $FF24
fd85: 00 fd           NEG    <$FD
fd87: bc 80 fd        CMPX   $80FD
fd8a: d7 c0           STB    <$C0
fd8c: fd f2 e0        STD    $F2E0
fd8f: fe 4f e8        LDU    $4FE8
fd92: fe 4f f0        LDU    $4FF0
fd95: fe 7c f8        LDU    $7CF8
fd98: fe a7 e0        LDU    $A7E0
fd9b: 10 e1 11        CMPB   -$F,X
fd9e: e2 12           SBCB   -$E,X
fda0: e3 13           ADDD   -$D,X
fda2: e4 14           ANDB   -$C,X
fda4: e5 15           BITB   -$B,X
fda6: e6 16           LDB    -$A,X
fda8: e7 17           STB    -$9,X
fdaa: e8 18           EORB   -$8,X
fdac: e9 19           ADCB   -$7,X
fdae: ea 20           ORB    $0,Y
fdb0: f0 21 f1        SUBB   $21F1
fdb3: 22 f2           BHI    $FDA7
fdb5: 23 f3           BLS    $FDAA
fdb7: 24 f4           BCC    $FDAD
fdb9: 25 f8           BCS    $FDB3
fdbb: 26 5d           BNE    $FE1A
fdbd: 27 03           BEQ    $FDC2
fdbf: 7e ff 24        JMP    $FF24
fdc2: 1f 40           TFR    S,D
fdc4: 84 40           ANDA   #$40
fdc6: c4 01           ANDB   #$01
fdc8: 10 83 00 00     CMPD   #$0000
fdcc: 26 06           BNE    $FDD4
fdce: ce 46 86        LDU    #$4686
fdd1: 7e fe ff        JMP    $FEFF
fdd4: 7e fd 07        JMP    $FD07
fdd7: 5d              TSTB
fdd8: 27 03           BEQ    $FDDD
fdda: 7e ff 24        JMP    $FF24
fddd: 1f 40           TFR    S,D
fddf: 84 81           ANDA   #$81
fde1: c4 f8           ANDB   #$F8
fde3: 10 83 00 00     CMPD   #$0000
fde7: 26 06           BNE    $FDEF
fde9: ce 46 83        LDU    #$4683
fdec: 7e fe ff        JMP    $FEFF
fdef: 7e fd 07        JMP    $FD07
fdf2: c1 06           CMPB   #$06
fdf4: 26 18           BNE    $FE0E
fdf6: 0d d1           TST    <$D1
fdf8: 26 12           BNE    $FE0C
fdfa: 8e 08 00        LDX    #$0800
fdfd: 86 00           LDA    #$00
fdff: a7 80           STA    ,X+
fe01: 8b 05           ADDA   #$05
fe03: 8c 10 00        CMPX   #$1000
fe06: 25 f7           BCS    $FDFF
fe08: 86 ff           LDA    #$FF
fe0a: 97 d1           STA    <$D1
fe0c: 20 26           BRA    $FE34
fe0e: 0f d1           CLR    <$D1
fe10: b7 46 20        STA    $4620
fe13: 8e fe 37        LDX    #$FE37
fe16: 58              ASLB
fe17: 58              ASLB
fe18: 3a              ABX
fe19: 8c fe 4f        CMPX   #$FE4F
fe1c: 25 03           BCS    $FE21
fe1e: 7e ff 24        JMP    $FF24
fe21: ec 84           LDD    ,X
fe23: fd 00 00        STD    >$0000
fe26: ec 02           LDD    $2,X
fe28: fd 00 02        STD    >$0002
fe2b: cc 20 20        LDD    #$2020
fe2e: fd 00 04        STD    >$0004
fe31: b7 46 00        STA    $4600
fe34: 7e fd 07        JMP    $FD07
fe37: 20 20           BRA    $FE59
fe39: 20 20           BRA    $FE5B
fe3b: 01 00           NEG    <$00
fe3d: 01 00           NEG    <$00
fe3f: 50              NEGB
fe40: 10 20 20 80     XLBRA  $1EC4
fe44: 40              NEGA
fe45: 20 20           BRA    $FE67
fe47: 72 40 20        XNC    $4020
fe4a: 20 67           BRA    $FEB3
fe4c: 80 20           SUBA   #$20
fe4e: 20 8e           BRA    $FDDE
fe50: fc f1 58        LDD    $F158
fe53: 3a              ABX
fe54: 10 8e 00 00     LDY    #$0000
fe58: 8c fd 07        CMPX   #$FD07
fe5b: 25 03           BCS    $FE60
fe5d: 7e ff 24        JMP    $FF24
fe60: b7 46 40        STA    $4640
fe63: 31 21           LEAY   $1,Y
fe65: 10 8c 02 00     CMPY   #$0200
fe69: 25 06           BCS    $FE71
fe6b: 10 ce fd 07     LDS    #$FD07
fe6f: 20 04           BRA    $FE75
fe71: 10 ce fe 58     LDS    #$FE58
fe75: 1f 10           TFR    X,D
fe77: 83 fc ff        SUBD   #$FCFF
fe7a: 6e 94           JMP    [,X]
fe7c: 8e fb 4b        LDX    #$FB4B
fe7f: 58              ASLB
fe80: 58              ASLB
fe81: 58              ASLB
fe82: 3a              ABX
fe83: 10 8e 00 00     LDY    #$0000
fe87: 8c fb 73        CMPX   #$FB73
fe8a: 25 03           BCS    $FE8F
fe8c: 7e ff 24        JMP    $FF24
fe8f: b7 46 40        STA    $4640
fe92: 31 21           LEAY   $1,Y
fe94: 10 8c 02 00     CMPY   #$0200
fe98: 25 06           BCS    $FEA0
fe9a: 10 ce fd 07     LDS    #$FD07
fe9e: 20 04           BRA    $FEA4
fea0: 10 ce fe 87     LDS    #$FE87
fea4: 7e fb 38        JMP    $FB38
fea7: c4 07           ANDB   #$07
fea9: 27 03           BEQ    $FEAE
feab: 7e ff 24        JMP    $FF24
feae: 86 01           LDA    #$01
feb0: f7 46 e0        STB    $46E0
feb3: 1f 13           TFR    X,U
feb5: f6 44 00        LDB    $4400
feb8: f6 44 01        LDB    $4401
febb: c4 40           ANDB   #$40
febd: 26 44           BNE    $FF03
febf: c6 80           LDB    #$80
fec1: 5a              DECB
fec2: 2b 3f           BMI    $FF03
fec4: b7 46 40        STA    $4640
fec7: 7d 44 01        TST    $4401
feca: 2b f5           BMI    $FEC1
fecc: b7 44 00        STA    $4400
fecf: f6 44 01        LDB    $4401
fed2: 2a 2f           BPL    $FF03
fed4: 8e 01 00        LDX    #$0100
fed7: 30 1f           LEAX   -$1,X
fed9: 27 28           BEQ    $FF03
fedb: b7 46 40        STA    $4640
fede: f6 44 01        LDB    $4401
fee1: c4 40           ANDB   #$40
fee3: 27 f2           BEQ    $FED7
fee5: 7d 44 01        TST    $4401
fee8: 2b 19           BMI    $FF03
feea: b1 44 00        CMPA   $4400
feed: 26 14           BNE    $FF03
feef: f6 44 01        LDB    $4401
fef2: c4 40           ANDB   #$40
fef4: 2b 0d           BMI    $FF03
fef6: 48              ASLA
fef7: 24 b7           BCC    $FEB0
fef9: ce 46 82        LDU    #$4682
fefc: 7e fe ff        JMP    $FEFF
feff: 86 00           LDA    #$00
ff01: a7 c4           STA    ,U
ff03: 8e 00 00        LDX    #$0000
ff06: b7 46 40        STA    $4640
ff09: 30 01           LEAX   $1,X
ff0b: 8c ac 55        CMPX   #$AC55
ff0e: 25 f6           BCS    $FF06
ff10: 86 ff           LDA    #$FF
ff12: a7 c4           STA    ,U
ff14: 8e 00 00        LDX    #$0000
ff17: b7 46 40        STA    $4640
ff1a: 30 01           LEAX   $1,X
ff1c: 8c ac 55        CMPX   #$AC55
ff1f: 25 f6           BCS    $FF17
ff21: 7e fd 07        JMP    $FD07
ff24: 86 00           LDA    #$00
ff26: b7 46 86        STA    $4686
ff29: b7 46 83        STA    $4683
ff2c: b7 46 82        STA    $4682
ff2f: 8e 00 00        LDX    #$0000
ff32: b7 46 40        STA    $4640
ff35: 30 01           LEAX   $1,X
ff37: 8c 56 00        CMPX   #$5600
ff3a: 25 f6           BCS    $FF32
ff3c: 86 ff           LDA    #$FF
ff3e: b7 46 86        STA    $4686
ff41: b7 46 83        STA    $4683
ff44: b7 46 82        STA    $4682
ff47: 8e 00 00        LDX    #$0000
ff4a: b7 46 40        STA    $4640
ff4d: 30 01           LEAX   $1,X
ff4f: 8c 56 00        CMPX   #$5600
ff52: 25 f6           BCS    $FF4A
ff54: 7e fd 07        JMP    $FD07
ff57: a6 bf c8 40     LDA    [$C840]
ff5b: 96 1f           LDA    <$1F
ff5d: 64 10           LSR    -$10,X
ff5f: 59              ROLB
ff60: a0 74           SUBA   -$C,S
ff62: a6 20           LDA    $0,Y
ff64: 7b 6e e0        XDEC   $6EE0
ff67: 7d e8 ae        TST    $E8AE
ff6a: cd              XHCF
ff6b: 78 92 07        ASL    $9207
ff6e: f4 00 18        ANDB   >$0018
ff71: e9 40           ADCB   $0,U
ff73: 9a f5           ORA    <$F5
ff75: b0 38 07        SUBA   $3807
ff78: ff ff ff        STU    $FFFF
ff7b: ff ff ff        STU    $FFFF
ff7e: ff ff ff        STU    $FFFF
ff81: ff ff ff        STU    $FFFF
ff84: ff ff ff        STU    $FFFF
ff87: ff ff ff        STU    $FFFF
ff8a: ff ff ff        STU    $FFFF
ff8d: ff ff ff        STU    $FFFF
ff90: ff ff ff        STU    $FFFF
ff93: ff ff ff        STU    $FFFF
ff96: ff ff ff        STU    $FFFF
ff99: ff ff ff        STU    $FFFF
ff9c: ff ff ff        STU    $FFFF
ff9f: ff ff ff        STU    $FFFF
ffa2: ff ff ff        STU    $FFFF
ffa5: ff ff ff        STU    $FFFF
ffa8: ff ff ff        STU    $FFFF
ffab: ff ff ff        STU    $FFFF
ffae: ff ff ff        STU    $FFFF
ffb1: ff ff ff        STU    $FFFF
ffb4: ff ff ff        STU    $FFFF
ffb7: ff ff ff        STU    $FFFF
ffba: ff ff ff        STU    $FFFF
ffbd: ff ff ff        STU    $FFFF
ffc0: ff ff ff        STU    $FFFF
ffc3: ff ff ff        STU    $FFFF
ffc6: ff ff ff        STU    $FFFF
ffc9: ff ff ff        STU    $FFFF
ffcc: ff ff ff        STU    $FFFF
ffcf: ff ff ff        STU    $FFFF
ffd2: ff ff ff        STU    $FFFF
ffd5: ff ff ff        STU    $FFFF
ffd8: ff ff ff        STU    $FFFF
ffdb: ff 43 4f        STU    $434F
ffde: 50              NEGB
ffdf: 59              ROLB
ffe0: 52              XNCB
ffe1: 49              ROLA
ffe2: 47              ASRA
ffe3: 48              ASLA
ffe4: 54              LSRB
ffe5: 20 31           BRA    $0018
ffe7: 39              RTS
