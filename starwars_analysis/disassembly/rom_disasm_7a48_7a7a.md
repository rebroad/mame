7a48: ce 50 90     LDU    #$5090
7a4b: bd cd c3     JSR    $CDC3
7a4e: cc 00 00     LDD    #$0000
7a51: fd 50 98     STD    $5098
7a54: fd 50 9a     STD    $509A
7a57: fd 50 9c     STD    $509C
7a5a: cc 00 00     LDD    #$0000
7a5d: 97 62        STA    <$62
7a5f: 97 63        STA    <$63
7a61: 97 31        STA    <$31
7a63: 97 bc        STA    <$BC
7a65: 97 b7        STA    <$B7
7a67: 97 bd        STA    <$BD
7a69: dd a3        STD    <$A3
7a6b: b7 48 78     STA    $4878
7a6e: b7 48 6e     STA    $486E
7a71: b7 48 77     STA    $4877
7a74: fd 48 74     STD    $4874
7a77: fd 48 6b     STD    $486B
7a7a: 39           RTS
7a7b: f7 9d 02     STB    $9D02
7a7e: bb 5a 30     ADDA   $5A30
7a81: 5f           CLRB
7a82: ee 0d        LDU    $D,X
7a84: a8 ff ff ff  EORA   [$FFFF]
7a88: ff ff ff     STU    $FFFF
7a8b: ff ff ff     STU    $FFFF
7a8e: ff ff ff     STU    $FFFF
7a91: ff ff ff     STU    $FFFF
7a94: ff ff ff     STU    $FFFF
7a97: ff ff ff     STU    $FFFF
7a9a: ff ff ff     STU    $FFFF
7a9d: ff ff ff     STU    $FFFF
7aa0: ff ff ff     STU    $FFFF
7aa3: ff ff ff     STU    $FFFF
7aa6: ff ff ff     STU    $FFFF
7aa9: ff ff ff     STU    $FFFF
7aac: ff ff ff     STU    $FFFF
7aaf: ff ff ff     STU    $FFFF
7ab2: ff ff ff     STU    $FFFF
7ab5: ff ff ff     STU    $FFFF
7ab8: ff ff ff     STU    $FFFF
7abb: ff ff ff     STU    $FFFF
7abe: ff ff ff     STU    $FFFF
7ac1: ff ff ff     STU    $FFFF
7ac4: ff ff ff     STU    $FFFF
7ac7: ff ff ff     STU    $FFFF
7aca: ff ff ff     STU    $FFFF
7acd: ff ff ff     STU    $FFFF
7ad0: ff ff ff     STU    $FFFF
7ad3: ff ff ff     STU    $FFFF
7ad6: ff ff ff     STU    $FFFF
7ad9: ff ff ff     STU    $FFFF
7adc: ff ff ff     STU    $FFFF
7adf: ff ff ff     STU    $FFFF
7ae2: ff ff ff     STU    $FFFF
7ae5: ff ff ff     STU    $FFFF
7ae8: ff ff ff     STU    $FFFF
7aeb: ff ff ff     STU    $FFFF
7aee: ff ff ff     STU    $FFFF
7af1: ff ff ff     STU    $FFFF
7af4: ff ff ff     STU    $FFFF
7af7: ff 43 4f     STU    $434F
7afa: 50           NEGB
7afb: 59           ROLB
7afc: 52           XNCB
7afd: 49           ROLA
7afe: 47           ASRA
7aff: 48           ASLA
7b00: 54           LSRB
7b01: 20 31        BRA    $7B34
7b03: 39           RTS
7b04: 38 33        XANDCC #$33
7b06: 20 41        BRA    $7B49
7b08: 54           LSRB
7b09: 41           NEGA
7b0a: 52           XNCB
7b0b: 49           ROLA
7b0c: b8 ad ba     EORA   $ADBA
7b0f: b8 df ad     EORA   $DFAD
7b12: b6 a9 ba     LDA    $A9BA
7b15: ad be        JSR    [W,Y]
7b17: df bb        STU    <$BB
7b19: b6 bb df     LDA    $BBDF
7b1c: b6 ab 7e     LDA    $AB7E
7b1f: 08 82        ASL    <$82
7b21: dc 82        LDD    <$82
7b23: 86 82        LDA    #$82
7b25: dc 7d        LDD    <$7D
7b27: 42           XNCA
7b28: 82 dc        SBCA   #$DC
7b2a: 81 e2        CMPA   #$E2
7b2c: 82 dc        SBCA   #$DC
7b2e: 81 c3        CMPA   #$C3
7b30: 82 dc        SBCA   #$DC
7b32: 82 67        SBCA   #$67
7b34: 82 dc        SBCA   #$DC
7b36: 82 01        SBCA   #$01
7b38: 82 dc        SBCA   #$DC
7b3a: 81 e2        CMPA   #$E2
7b3c: 82 fa        SBCA   #$FA
7b3e: 7e 08 82     JMP    $0882
7b41: dc 7d        LDD    <$7D
7b43: 42           XNCA
7b44: 82 c8        SBCA   #$C8
7b46: 7d b1 82     TST    $B182
7b49: c8 80        EORB   #$80
7b4b: c6 82        LDB    #$82
7b4d: dc 7f        LDD    <$7F
7b4f: 78 82 dc     ASL    $82DC
7b52: 7f 97 82     CLR    $9782
7b55: dc 81        LDD    <$81
7b57: c3 82 d2     ADDD   #$82D2
7b5a: 7d b1 82     TST    $B182
7b5d: fa 7e 08     ORB    $7E08
7b60: 82 dc        SBCA   #$DC
7b62: 7c f8 82     INC    $F882
7b65: c8 7d        EORB   #$7D
7b67: ca 82        ORB    #$82
7b69: dc 80        LDD    <$80
7b6b: 66 82        ROR    ,-X
7b6d: e6 80        LDB    ,X+
7b6f: 4d           TSTA
7b70: 82 be        SBCA   #$BE
7b72: 80 c6        SUBA   #$C6
7b74: 82 c8        SBCA   #$C8
7b76: 7e 3d 82     JMP    $3D82
7b79: d2 82        SBCB   <$82
7b7b: 67 83        ASR    ,--X
7b7d: 25 7e        BCS    $7BFD
7b7f: 08 82        ASL    <$82
7b81: dc 7d        LDD    <$7D
7b83: 5b           XDECB
7b84: 82 c8        SBCA   #$C8
7b86: 7e d8 82     JMP    $D882
7b89: f0 7e 75     SUBB   $7E75
7b8c: 82 d2        SBCA   #$D2
7b8e: 81 35        CMPA   #$35
7b90: 82 d2        SBCA   #$D2
7b92: 82 26        SBCA   #$26
7b94: 82 c8        SBCA   #$C8
7b96: 7e d8 82     JMP    $D882
7b99: f0 7e 75     SUBB   $7E75
7b9c: 83 25 7e     SUBD   #$257E
7b9f: 08 82        ASL    <$82
7ba1: dc 82        LDD    <$82
7ba3: 26 82        BNE    $7B27
7ba5: c8 81        EORB   #$81
7ba7: 0a 82        DEC    <$82
7ba9: d2 80        SBCB   <$80
7bab: 4d           TSTA
7bac: 82 be        SBCA   #$BE
7bae: 80 66        SUBA   #$66
7bb0: 82 e6        SBCA   #$E6
7bb2: 7e 3d 82     JMP    $3D82
7bb5: d2 7e        SBCB   <$7E
7bb7: 21 82        BRN    $7B3B
7bb9: d2 7c        SBCB   <$7C
7bbb: d6 83        LDB    <$83
7bbd: 25 7e        BCS    $7C3D
7bbf: 08 82        ASL    <$82
7bc1: dc 7d        LDD    <$7D
7bc3: 5b           XDECB
7bc4: 82 c8        SBCA   #$C8
7bc6: 81 0a        CMPA   #$0A
7bc8: 82 d2        SBCA   #$D2
7bca: 7f b9 82     CLR    $B982
7bcd: c8 81        EORB   #$81
7bcf: 35 82        PULS   A,PC
7bd1: d2 7e        SBCB   <$7E
7bd3: 75 82 d2     LSR    $82D2
7bd6: 80 c6        SUBA   #$C6
7bd8: 82 c8        SBCA   #$C8
7bda: 7e d8 83     JMP    $D883
7bdd: 25 7e        BCS    $7C5D
7bdf: 08 82        ASL    <$82
7be1: dc 80        LDD    <$80
7be3: 25 82        BCS    $7B67
7be5: f0 7d e3     SUBB   $7DE3
7be8: 82 e6        SBCA   #$E6
7bea: 7f 16 82     CLR    $1682
7bed: c8 7f        EORB   #$7F
7bef: b9 82 c8     ADCA   $82C8
7bf2: 80 ee        SUBA   #$EE
7bf4: 82 be        SBCA   #$BE
7bf6: 82 42        SBCA   #$42
7bf8: 82 c8        SBCA   #$C8
7bfa: 7e 56 80     JMP    $5680
7bfd: 7f 7e 08     CLR    $7E08
7c00: 82 dc        SBCA   #$DC
7c02: 7d 11 82     TST    $1182
7c05: d2 81        SBCB   <$81
7c07: a1 82        CMPA   ,-X
7c09: e6 7d        LDB    -$3,S
7c0b: 80 82        SUBA   #$82
7c0d: e6 80        LDB    ,X+
7c0f: 03 82        COM    <$82
7c11: d2 7e        SBCB   <$7E
7c13: b9 82 d2     ADCA   $82D2
7c16: 7f 47 82     CLR    $4782
7c19: d2 7e        SBCB   <$7E
7c1b: f1 80 7f     CMPB   $807F
7c1e: 7e 08 82     JMP    $0882
7c21: dc 7e        LDD    <$7E
7c23: 9d 82        JSR    <$82
7c25: f0 7f d2     SUBB   $7FD2
7c28: 82 f0        SBCA   #$F0
7c2a: 80 9b        SUBA   #$9B
7c2c: 82 f0        SBCA   #$F0
7c2e: 81 76        CMPA   #$76
7c30: 82 e6        SBCA   #$E6
7c32: 82 a5        SBCA   #$A5
7c34: 82 f0        SBCA   #$F0
7c36: 81 a1        CMPA   #$A1
7c38: 82 f0        SBCA   #$F0
7c3a: 82 01        SBCA   #$01
7c3c: 80 7f        SUBA   #$7F
7c3e: 7e 08 82     JMP    $0882
7c41: dc 7d        LDD    <$7D
7c43: 5b           XDECB
7c44: 82 c8        SBCA   #$C8
7c46: 7e d8 00     JMP    $D800
