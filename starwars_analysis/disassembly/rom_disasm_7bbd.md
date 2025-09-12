7bbd: 25 7e     BCS    $0080
7bbf: 08 82     ASL    <$82
7bc1: dc 7d     LDD    <$7D
7bc3: 5b        XDECB
7bc4: 82 c8     SBCA   #$C8
7bc6: 81 0a     CMPA   #$0A
7bc8: 82 d2     SBCA   #$D2
7bca: 7f b9 82  CLR    $B982
7bcd: c8 81     EORB   #$81
7bcf: 35 82     PULS   A,PC
7bd1: d2 7e     SBCB   <$7E
7bd3: 75 82 d2  LSR    $82D2
7bd6: 80 c6     SUBA   #$C6
7bd8: 82 c8     SBCA   #$C8
7bda: 7e d8 83  JMP    $D883
7bdd: 25 7e     BCS    $00A0
7bdf: 08 82     ASL    <$82
7be1: dc 80     LDD    <$80
7be3: 25 82     BCS    $FFAA
7be5: f0 7d e3  SUBB   $7DE3
7be8: 82 e6     SBCA   #$E6
7bea: 7f 16 82  CLR    $1682
7bed: c8 7f     EORB   #$7F
7bef: b9 82 c8  ADCA   $82C8
7bf2: 80 ee     SUBA   #$EE
7bf4: 82 be     SBCA   #$BE
7bf6: 82 42     SBCA   #$42
7bf8: 82 c8     SBCA   #$C8
7bfa: 7e 56 80  JMP    $5680
7bfd: 7f 7e 08  CLR    $7E08
7c00: 82 dc     SBCA   #$DC
7c02: 7d 11 82  TST    $1182
7c05: d2 81     SBCB   <$81
7c07: a1 82     CMPA   ,-X
7c09: e6 7d     LDB    -$3,S
7c0b: 80 82     SUBA   #$82
7c0d: e6 80     LDB    ,X+
7c0f: 03 82     COM    <$82
7c11: d2 7e     SBCB   <$7E
7c13: b9 82 d2  ADCA   $82D2
7c16: 7f 47 82  CLR    $4782
7c19: d2 7e     SBCB   <$7E
7c1b: f1 80 7f  CMPB   $807F
7c1e: 7e 08 82  JMP    $0882
7c21: dc 7e     LDD    <$7E
7c23: 9d 82     JSR    <$82
7c25: f0 7f d2  SUBB   $7FD2
7c28: 82 f0     SBCA   #$F0
7c2a: 80 9b     SUBA   #$9B
7c2c: 82 f0     SBCA   #$F0
7c2e: 81 76     CMPA   #$76
7c30: 82 e6     SBCA   #$E6
7c32: 82 a5     SBCA   #$A5
7c34: 82 f0     SBCA   #$F0
7c36: 81 a1     CMPA   #$A1
7c38: 82 f0     SBCA   #$F0
7c3a: 82 01     SBCA   #$01
7c3c: 80 7f     SUBA   #$7F
7c3e: 7e 08 82  JMP    $0882
7c41: dc 7d     LDD    <$7D
7c43: 5b        XDECB
7c44: 82 c8     SBCA   #$C8
7c46: 7e d8 82  JMP    $D882
7c49: f0 7f d2  SUBB   $7FD2
7c4c: 82 f0     SBCA   #$F0
7c4e: 82 a5     SBCA   #$A5
7c50: 82 f0     SBCA   #$F0
7c52: 7d 80 82  TST    $8082
7c55: e6 81     LDB    ,X++
7c57: a1 82     CMPA   ,-X
7c59: f0 81 76  SUBB   $8176
7c5c: 80 7f     SUBA   #$7F
7c5e: 7e 08 82  JMP    $0882
7c61: dc 7e     LDD    <$7E
7c63: 9d 82     JSR    <$82
7c65: f0 7f d2  SUBB   $7FD2
7c68: 82 f0     SBCA   #$F0
7c6a: 81 54     CMPA   #$54
7c6c: 82 c8     SBCA   #$C8
7c6e: 7e b9 82  JMP    $B982
7c71: d2 7f     SBCB   <$7F
7c73: 47        ASRA
7c74: 82 d2     SBCA   #$D2
7c76: 7e f1 82  JMP    $F182
7c79: be 7d 80  LDX    $7D80
7c7c: 80 7f     SUBA   #$7F
7c7e: 7e 08 82  JMP    $0882
7c81: dc 7c     LDD    <$7C
7c83: 9e 82     LDX    <$82
7c85: d2 7c     SBCB   <$7C
7c87: 9e 82     LDX    <$82
7c89: f0 7c 9e  SUBB   $7C9E
7c8c: 82 d2     SBCA   #$D2
7c8e: 7c 9e 82  INC    $9E82
7c91: f0 7c 9e  SUBB   $7C9E
7c94: 82 d2     SBCA   #$D2
7c96: 7c 9e 82  INC    $9E82
7c99: f0 7c 9e  SUBB   $7C9E
7c9c: 80 7f     SUBA   #$7F
7c9e: 7d 11 7d  TST    $117D
7ca1: 80 7d     SUBA   #$7D
7ca3: e3 7e     ADDD   -$2,S
7ca5: 9d 7e     JSR    <$7E
7ca7: 75 7e b9  LSR    $7EB9
7caa: 7e f1 7f  JMP    $F17F
7cad: 47        ASRA
7cae: 7f d2 80  CLR    $D280
7cb1: 03 80     COM    <$80
7cb3: 25 80     BCS    $0078
7cb5: 9b 80     ADDA   <$80
7cb7: ee 81     LDU    ,X++
7cb9: 54        LSRB
7cba: 81 76     CMPA   #$76
7cbc: 81 a1     CMPA   #$A1
7cbe: 82 a5     SBCA   #$A5
7cc0: 7b 1e 7b  XDEC   $1E7B
7cc3: 3e        XRES
7cc4: 7b 5e 7b  XDEC   $5E7B
7cc7: 7e 7b 9e  JMP    $7B9E
7cca: 7b be 7b  XDEC   $BE7B
7ccd: de 7b     LDU    <$7B
7ccf: fe 7c 1e  LDU    $7C1E
7cd2: 7c 3e 7c  INC    $3E7C
7cd5: 5e        XCLRB
7cd6: 01 08     NEG    <$08
7cd8: 08 02     ASL    <$02
7cda: 00 03     NEG    <$03
7cdc: 02 20     XNC    <$20
7cde: 20 01     BRA    $0124
7ce0: 03 30     COM    <$30
7ce2: 01 02     NEG    <$02
7ce4: 02 02     XNC    <$02
7ce6: 80 8c     SUBA   #$8C
7ce8: 02 38     XNC    <$38
7cea: 08 01     ASL    <$01
7cec: 00 00     NEG    <$00
7cee: 01 0e     NEG    <$0E
7cf0: c2 01     SBCB   #$01
7cf2: c0 00     SUBB   #$00
7cf4: 02 80     XNC    <$80
7cf6: 80 05     SUBA   #$05
7cf8: 02 00     XNC    <$00
7cfa: 00 02     NEG    <$02
7cfc: 38 08     XANDCC #$08
7cfe: 02 03     XNC    <$03
7d00: 03 02     COM    <$02
7d02: 80 b0     SUBA   #$B0
7d04: 02 0c     XNC    <$0C
7d06: 0c 02     INC    <$02
7d08: c2 c2     SBCB   #$C2
7d0a: 02 00     XNC    <$00
7d0c: 00 02     NEG    <$02
7d0e: 08 08     ASL    <$08
7d10: 05 01     LSR    <$01
7d12: 00 00     NEG    <$00
7d14: 01 a0     NEG    <$A0
7d16: a0 01     SUBA   $1,X
7d18: 03 03     COM    <$03
7d1a: 01 0a     NEG    <$0A
7d1c: 0a 01     DEC    <$01
7d1e: 00 00     NEG    <$00
7d20: 01 38     NEG    <$38
7d22: 38 01     XANDCC #$01
7d24: 20 20     BRA    $0189
7d26: 01 c0     NEG    <$C0
7d28: c0 01     SUBB   #$01
7d2a: 00 00     NEG    <$00
7d2c: 01 00     NEG    <$00
7d2e: 00 01     NEG    <$01
7d30: 0e 0e     JMP    <$0E
7d32: 01 08     NEG    <$08
7d34: 08 01     ASL    <$01
7d36: 00 00     NEG    <$00
7d38: 01 08     NEG    <$08
7d3a: 08 01     ASL    <$01
7d3c: 20 20     BRA    $01A1
7d3e: 01 80     NEG    <$80
7d40: 80 05     SUBA   #$05
7d42: 02 00     XNC    <$00
7d44: 30 02     LEAX   $2,X
7d46: 0c 00     INC    <$00
7d48: 02 00     XNC    <$00
7d4a: 03 02     COM    <$02
7d4c: c0 00     SUBB   #$00
7d4e: 02 00     XNC    <$00
7d50: c0 02     SUBB   #$02
7d52: 03 00     COM    <$00
7d54: 02 00     XNC    <$00
7d56: 0c 02     INC    <$02
7d58: 30 00     LEAX   $0,X
7d5a: 05 01     LSR    <$01
7d5c: 00 00     NEG    <$00
7d5e: 02 a0     XNC    <$A0
7d60: a0 01     SUBA   $1,X
7d62: 00 00     NEG    <$00
7d64: 01 03     NEG    <$03
7d66: 03 02     COM    <$02
7d68: 0a 0a     DEC    <$0A
7d6a: 01 00     NEG    <$00
7d6c: 00 01     NEG    <$01
7d6e: c0 c0     SUBB   #$C0
7d70: 02 a0     XNC    <$A0
7d72: a0 01     SUBA   $1,X
7d74: 03 03     COM    <$03
7d76: 01 00     NEG    <$00
7d78: 00 02     NEG    <$02
7d7a: 3a        ABX
7d7b: 3a        ABX
7d7c: 01 00     NEG    <$00
7d7e: 00 05     NEG    <$05
7d80: 01 0a     NEG    <$0A
7d82: 0a 01     DEC    <$01
7d84: 00 00     NEG    <$00
7d86: 01 a0     NEG    <$A0
7d88: a0 01     SUBA   $1,X
7d8a: 00 00     NEG    <$00
7d8c: 01 0a     NEG    <$0A
7d8e: 0a 01     DEC    <$01
7d90: 00 00     NEG    <$00
7d92: 01 a0     NEG    <$A0
7d94: a0 01     SUBA   $1,X
7d96: 00 00     NEG    <$00
7d98: 01 0a     NEG    <$0A
7d9a: 0a 01     DEC    <$01
7d9c: 00 00     NEG    <$00
7d9e: 01 a0     NEG    <$A0
7da0: a0 01     SUBA   $1,X
7da2: 00 00     NEG    <$00
7da4: 01 0a     NEG    <$0A
7da6: 0a 01     DEC    <$01
7da8: 00 00     NEG    <$00
7daa: 01 a0     NEG    <$A0
7dac: a0 01     SUBA   $1,X
7dae: 00 00     NEG    <$00
7db0: 05 02     LSR    <$02
7db2: 80 80     SUBA   #$80
7db4: 02 8c     XNC    <$8C
7db6: 83 02 b0  SUBD   #$02B0
7db9: 80 02     SUBA   #$02
7dbb: 80 b0     SUBA   #$B0
