fb38: ec 84        LDD    ,X
fb3a: fd 47 06     STD    $4706
fb3d: ec 02        LDD    $2,X
fb3f: fd 47 04     STD    $4704
fb42: 3d           MUL
fb43: fc 47 00     LDD    $4700
fb46: 10 a3 04     CMPD   $4,X
fb49: 6e e4        JMP    ,S
fb4b: 40           NEGA
fb4c: 00 40        NEG    <$40
fb4e: 00 40        NEG    <$40
fb50: 00 00        NEG    <$00
fb52: c8 55        EORB   #$55
fb54: 55           LSRB
fb55: 40           NEGA
fb56: 00 55        NEG    <$55
fb58: 55           LSRB
fb59: 00 96        NEG    <$96
fb5b: 2a aa        BPL    $FB07
fb5d: 40           NEGA
fb5e: 00 2a        NEG    <$2A
fb60: aa 00        ORA    $0,X
fb62: 64 2a        LSR    $A,Y
fb64: aa 2a        ORA    $A,Y
fb66: aa 40        ORA    $0,U
fb68: 00 00        NEG    <$00
fb6a: 32 55        LEAS   -$B,U
fb6c: 55           LSRB
fb6d: 55           LSRB
fb6e: 55           LSRB
fb6f: 40           NEGA
fb70: 00 00        NEG    <$00
fb72: 00 6e        NEG    <$6E
fb74: e4 cc 55     ANDB   $FBCC,PCR
fb77: 55           LSRB
fb78: fd 50 1e     STD    $501E
fb7b: 86 57        LDA    #$57
fb7d: b7 47 00     STA    $4700
fb80: 20 f1        BRA    $FB73
fb82: cc aa aa     LDD    #$AAAA
fb85: fd 50 1e     STD    $501E
fb88: 86 58        LDA    #$58
fb8a: b7 47 00     STA    $4700
fb8d: 20 e4        BRA    $FB73
fb8f: cc 55 55     LDD    #$5555
fb92: fd 50 1e     STD    $501E
fb95: 86 59        LDA    #$59
fb97: b7 47 00     STA    $4700
fb9a: 20 d7        BRA    $FB73
fb9c: 86 5a        LDA    #$5A
fb9e: b7 47 00     STA    $4700
fba1: 20 d0        BRA    $FB73
fba3: 86 5b        LDA    #$5B
fba5: b7 47 00     STA    $4700
fba8: 20 c9        BRA    $FB73
fbaa: cc 55 55     LDD    #$5555
fbad: fd 50 00     STD    $5000
fbb0: 86 5c        LDA    #$5C
fbb2: b7 47 00     STA    $4700
fbb5: 12           NOP
fbb6: fc 50 02     LDD    $5002
fbb9: 10 83 55 55  CMPD   #$5555
fbbd: 20 b4        BRA    $FB73
fbbf: cc aa aa     LDD    #$AAAA
fbc2: fd 50 00     STD    $5000
fbc5: 86 5c        LDA    #$5C
fbc7: b7 47 00     STA    $4700
fbca: 12           NOP
fbcb: fc 50 02     LDD    $5002
fbce: 10 83 aa aa  CMPD   #$AAAA
fbd2: 20 9f        BRA    $FB73
fbd4: cc 26 96     LDD    #$2696
fbd7: fd 50 18     STD    $5018
fbda: cc 1b 2c     LDD    #$1B2C
fbdd: fd 50 1a     STD    $501A
fbe0: cc 40 00     LDD    #$4000
fbe3: fd 50 1c     STD    $501C
fbe6: 86 5d        LDA    #$5D
fbe8: b7 47 00     STA    $4700
fbeb: 3d           MUL
fbec: fc 50 00     LDD    $5000
fbef: 10 83 0b 6a  CMPD   #$0B6A
fbf3: 7e fb 73     JMP    $FB73
fbf6: 86 5a        LDA    #$5A
fbf8: b7 47 00     STA    $4700
fbfb: cc 00 00     LDD    #$0000
fbfe: fd 50 1a     STD    $501A
fc01: cc 40 00     LDD    #$4000
fc04: fd 50 1c     STD    $501C
fc07: cc 00 01     LDD    #$0001
fc0a: fd 50 18     STD    $5018
fc0d: fd 50 18     STD    $5018
fc10: 86 5e        LDA    #$5E
fc12: b7 47 00     STA    $4700
fc15: 3d           MUL
fc16: fc 50 00     LDD    $5000
fc19: 7e fb 73     JMP    $FB73
fc1c: ce 50 28     LDU    #$5028
fc1f: cc 00 05     LDD    #$0005
fc22: ed c4        STD    ,U
fc24: c3 00 01     ADDD   #$0001
fc27: 33 48        LEAU   $8,U
fc29: 11 83 60 00  CMPU   #$6000
fc2d: 25 f3        BCS    $FC22
fc2f: cc 00 00     LDD    #$0000
fc32: fd 50 1e     STD    $501E
fc35: cc 40 00     LDD    #$4000
fc38: fd 50 20     STD    $5020
fc3b: cc 00 04     LDD    #$0004
fc3e: fd 47 01     STD    $4701
fc41: ce 00 08     LDU    #$0008
fc44: b7 46 40     STA    $4640
fc47: 1f 30        TFR    U,D
fc49: 44           LSRA
fc4a: 56           RORB
fc4b: 86 5b        LDA    #$5B
fc4d: b7 47 00     STA    $4700
fc50: 5a           DECB
fc51: 26 f8        BNE    $FC4B
fc53: 86 5f        LDA    #$5F
fc55: b7 47 00     STA    $4700
fc58: 3d           MUL
fc59: 11 b3 50 00  CMPU   $5000
fc5d: 27 03        BEQ    $FC62
fc5f: 7e fb 73     JMP    $FB73
fc62: 1f 30        TFR    U,D
fc64: 33 cb        LEAU   D,U
fc66: 11 83 02 00  CMPU   #$0200
fc6a: 25 d8        BCS    $FC44
fc6c: cc 00 00     LDD    #$0000
fc6f: 7e fb 73     JMP    $FB73
fc72: cc 1b 2c     LDD    #$1B2C
fc75: fd 50 18     STD    $5018
fc78: cc 00 00     LDD    #$0000
fc7b: fd 50 1a     STD    $501A
fc7e: cc 40 00     LDD    #$4000
fc81: fd 50 1c     STD    $501C
fc84: 86 5d        LDA    #$5D
fc86: b7 47 00     STA    $4700
fc89: 3d           MUL
fc8a: cc 19 6a     LDD    #$196A
fc8d: fd 50 18     STD    $5018
fc90: cc 00 00     LDD    #$0000
fc93: fd 50 1a     STD    $501A
fc96: cc 40 00     LDD    #$4000
fc99: fd 50 1c     STD    $501C
fc9c: 86 5e        LDA    #$5E
fc9e: b7 47 00     STA    $4700
fca1: 3d           MUL
fca2: fc 50 00     LDD    $5000
fca5: 10 83 34 96  CMPD   #$3496
fca9: 7e fb 73     JMP    $FB73
fcac: 58           ASLB
fcad: 58           ASLB
fcae: ce fc d1     LDU    #$FCD1
fcb1: 33 c5        LEAU   B,U
fcb3: ec c4        LDD    ,U
fcb5: fd 50 18     STD    $5018
fcb8: ec 42        LDD    $2,U
fcba: fd 50 1a     STD    $501A
fcbd: ec 44        LDD    $4,U
fcbf: fd 50 1c     STD    $501C
fcc2: 86 5d        LDA    #$5D
fcc4: b7 47 00     STA    $4700
fcc7: 3d           MUL
fcc8: fc 50 00     LDD    $5000
fccb: 10 a3 46     CMPD   $6,U
fcce: 7e fb 73     JMP    $FB73
fcd1: 55           LSRB
fcd2: 55           LSRB
fcd3: 00 00        NEG    <$00
fcd5: 40           NEGA
fcd6: 00 55        NEG    <$55
fcd8: 55           LSRB
fcd9: 00 00        NEG    <$00
fcdb: 55           LSRB
fcdc: 55           LSRB
fcdd: c0 00        SUBB   #$00
fcdf: 55           LSRB
fce0: 55           LSRB
fce1: 2a aa        BPL    $FC8D
fce3: 00 00        NEG    <$00
fce5: 40           NEGA
fce6: 00 2a        NEG    <$2A
fce8: aa 00        ORA    $0,X
fcea: 00 2a        NEG    <$2A
fcec: aa c0        ORA    ,U+
fcee: 00 2a        NEG    <$2A
fcf0: aa fb        ORA    [D,S]
fcf2: 75 fb 82     LSR    $FB82
fcf5: fb 8f fb     ADDB   $8FFB
fcf8: 9c fb        CMPX   <$FB
fcfa: a3 fb        SUBD   [D,S]
fcfc: aa fb        ORA    [D,S]
fcfe: bf fc ac     STX    $FCAC
fd01: fc ac fc     LDD    $ACFC
fd04: ac fc ac     CMPX   [$FCB3,PCR]
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
