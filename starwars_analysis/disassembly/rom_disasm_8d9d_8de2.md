8d9d: 9e 5a        LDX    <$5A
8d9f: ee 84        LDU    ,X
8da1: a6 06        LDA    $6,X
8da3: 26 3a        BNE    $8DDF
8da5: e6 88 12     LDB    $12,X
8da8: d7 50        STB    <$50
8daa: ee 84        LDU    ,X
8dac: cc 00 00     LDD    #$0000
8daf: ed 56        STD    -$A,U
8db1: ed 5e        STD    -$2,U
8db3: ed 46        STD    $6,U
8db5: 04 50        LSR    <$50
8db7: 24 03        BCC    $8DBC
8db9: bd 8a 59     JSR    $8A59
8dbc: 04 50        LSR    <$50
8dbe: 24 03        BCC    $8DC3
8dc0: bd 8a 7e     JSR    $8A7E
8dc3: 04 50        LSR    <$50
8dc5: 24 03        BCC    $8DCA
8dc7: bd 8a 21     JSR    $8A21
8dca: 04 50        LSR    <$50
8dcc: 24 03        BCC    $8DD1
8dce: bd 8a 3d     JSR    $8A3D
8dd1: 04 50        LSR    <$50
8dd3: 24 03        BCC    $8DD8
8dd5: bd 8a 05     JSR    $8A05
8dd8: 04 50        LSR    <$50
8dda: 24 03        BCC    $8DDF
8ddc: bd 89 e9     JSR    $89E9
8ddf: bd 8a b6     JSR    $8AB6
8de2: 39           RTS
8de3: ee 84        LDU    ,X
8de5: ec 48        LDD    $8,U
8de7: 81 7d        CMPA   #$7D
8de9: 2d 03        BLT    $8DEE
8deb: cc 7c ff     LDD    #$7CFF
8dee: 81 82        CMPA   #$82
8df0: 2e 03        BGT    $8DF5
8df2: cc 83 00     LDD    #$8300
8df5: ed 48        STD    $8,U
8df7: ec 4a        LDD    $A,U
8df9: 81 7d        CMPA   #$7D
8dfb: 2d 03        BLT    $8E00
8dfd: cc 7c ff     LDD    #$7CFF
8e00: 81 82        CMPA   #$82
8e02: 2e 03        BGT    $8E07
8e04: cc 83 00     LDD    #$8300
8e07: ed 4a        STD    $A,U
8e09: ec 4c        LDD    $C,U
8e0b: 81 7d        CMPA   #$7D
8e0d: 2d 03        BLT    $8E12
8e0f: cc 7c ff     LDD    #$7CFF
8e12: 81 82        CMPA   #$82
8e14: 2e 03        BGT    $8E19
8e16: cc 83 00     LDD    #$8300
8e19: ed 4c        STD    $C,U
8e1b: 39           RTS
8e1c: 0a e6        DEC    <$E6
8e1e: 2e 02        BGT    $8E22
8e20: 0f e6        CLR    <$E6
8e22: 39           RTS
8e23: cc 00 00     LDD    #$0000
8e26: ed 88 11     STD    $11,X
8e29: a7 88 10     STA    $10,X
8e2c: ed 88 13     STD    $13,X
8e2f: ed 88 15     STD    $15,X
8e32: ee 0d        LDU    $D,X
8e34: a6 c4        LDA    ,U
8e36: a7 0f        STA    $F,X
8e38: 27 17        BEQ    $8E51
8e3a: ec 88 15     LDD    $15,X
8e3d: a4 88 13     ANDA   $13,X
8e40: 26 1a        BNE    $8E5C
8e42: e4 88 14     ANDB   $14,X
8e45: 26 15        BNE    $8E5C
8e47: a6 0f        LDA    $F,X
8e49: 84 07        ANDA   #$07
8e4b: 48           ASLA
8e4c: ce 8e 68     LDU    #$8E68
8e4f: 6e d6        JMP    [A,U]
8e51: ec 41        LDD    $1,U
8e53: ed 88 13     STD    $13,X
8e56: 33 43        LEAU   $3,U
8e58: ef 0d        STU    $D,X
8e5a: 20 d6        BRA    $8E32
8e5c: ee 0d        LDU    $D,X
8e5e: a6 c4        LDA    ,U
8e60: 27 d0        BEQ    $8E32
8e62: 33 43        LEAU   $3,U
8e64: ef 0d        STU    $D,X
8e66: 20 f6        BRA    $8E5E
8e68: 8e 79 8e     LDX    #$798E
8e6b: 9b 8e        ADDA   <$8E
8e6d: a4 8e        ANDA   W,X
8e6f: b2 8e ba     SBCA   $8EBA
8e72: 8e ce 8e     LDX    #$CE8E
8e75: 78 8e 78     ASL    $8E78
8e78: 3f           SWI
8e79: ee 0d        LDU    $D,X
8e7b: ec 41        LDD    $1,U
8e7d: 27 15        BEQ    $8E94
8e7f: a4 88 15     ANDA   $15,X
8e82: 26 10        BNE    $8E94
8e84: e4 88 16     ANDB   $16,X
8e87: 26 0b        BNE    $8E94
8e89: 33 43        LEAU   $3,U
8e8b: a6 c4        LDA    ,U
8e8d: 48           ASLA
8e8e: 26 f9        BNE    $8E89
8e90: 24 f7        BCC    $8E89
8e92: 20 e7        BRA    $8E7B
8e94: 33 43        LEAU   $3,U
8e96: ef 0d        STU    $D,X
8e98: 7e 8e 32     JMP    $8E32
8e9b: ee 0d        LDU    $D,X
8e9d: ee 41        LDU    $1,U
8e9f: ef 0d        STU    $D,X
8ea1: 7e 8e 32     JMP    $8E32
8ea4: ee 0d        LDU    $D,X
8ea6: 33 43        LEAU   $3,U
8ea8: ef 88 17     STU    $17,X
8eab: ee 5e        LDU    -$2,U
8ead: ef 0d        STU    $D,X
8eaf: 7e 8e 32     JMP    $8E32
8eb2: ee 88 17     LDU    $17,X
8eb5: ef 0d        STU    $D,X
8eb7: 7e 8e 32     JMP    $8E32
8eba: ee 0d        LDU    $D,X
8ebc: e6 c4        LDB    ,U
8ebe: 54           LSRB
8ebf: e7 88 10     STB    $10,X
8ec2: ec 41        LDD    $1,U
8ec4: ed 88 11     STD    $11,X
8ec7: 33 43        LEAU   $3,U
8ec9: ef 0d        STU    $D,X
8ecb: 6c 0f        INC    $F,X
8ecd: 39           RTS
8ece: 6a 88 10     DEC    $10,X
8ed1: 10 2b ff 5d  LBMI   $8E32
8ed5: 39           RTS
8ed6: bd cc c0     JSR    $CCC0
8ed9: f6 4b 14     LDB    $4B14
8edc: 58           ASLB
8edd: 8e 90 70     LDX    #$9070
8ee0: 3a           ABX
8ee1: 8c 90 7c     CMPX   #$907C
8ee4: 25 0e        BCS    $8EF4
8ee6: b6 4b 14     LDA    $4B14
8ee9: 44           LSRA
8eea: 25 05        BCS    $8EF1
8eec: 8e 90 78     LDX    #$9078
8eef: 20 03        BRA    $8EF4
8ef1: 8e 90 7a     LDX    #$907A
8ef4: ae 84        LDX    ,X
8ef6: d6 dd        LDB    <$DD
8ef8: e1 80        CMPB   ,X+
8efa: 23 02        BLS    $8EFE
8efc: e6 1f        LDB    -$1,X
8efe: 58           ASLB
8eff: ec 85        LDD    B,X
8f01: dd e4        STD    <$E4
8f03: 0f e6        CLR    <$E6
8f05: 8e 49 00     LDX    #$4900
8f08: 9f 5a        STX    <$5A
8f0a: 6f 03        CLR    $3,X
8f0c: de e4        LDU    <$E4
8f0e: 27 19        BEQ    $8F29
8f10: a6 c4        LDA    ,U
8f12: 27 15        BEQ    $8F29
8f14: 0c e6        INC    <$E6
8f16: ec c4        LDD    ,U
8f18: dd e0        STD    <$E0
8f1a: ec 42        LDD    $2,U
8f1c: dd de        STD    <$DE
8f1e: ec 44        LDD    $4,U
8f20: dd e2        STD    <$E2
8f22: 33 46        LEAU   $6,U
8f24: df e4        STU    <$E4
8f26: bd 8f 34     JSR    $8F34
8f29: 9e 5a        LDX    <$5A
8f2b: 30 88 19     LEAX   $19,X
8f2e: 8c 49 4b     CMPX   #$494B
8f31: 25 d5        BCS    $8F08
8f33: 39           RTS
8f34: 86 01        LDA    #$01
8f36: a7 03        STA    $3,X
8f38: ee 84        LDU    ,X
8f3a: bd cd c3     JSR    $CDC3
8f3d: ee 84        LDU    ,X
8f3f: 86 c0        LDA    #$C0
8f41: a7 50        STA    -$10,U
8f43: a7 5a        STA    -$6,U
8f45: 4f           CLRA
8f46: a7 09        STA    $9,X
8f48: a7 08        STA    $8,X
8f4a: a7 06        STA    $6,X
8f4c: a7 05        STA    $5,X
8f4e: a7 0b        STA    $B,X
8f50: de e0        LDU    <$E0
8f52: a6 41        LDA    $1,U
8f54: a7 07        STA    $7,X
8f56: ee 84        LDU    ,X
8f58: 9e e2        LDX    <$E2
8f5a: ec 84        LDD    ,X
8f5c: ed 48        STD    $8,U
8f5e: ec 02        LDD    $2,X
8f60: ed 4a        STD    $A,U
8f62: ec 04        LDD    $4,X
8f64: ed 4c        STD    $C,U
8f66: 9e 5a        LDX    <$5A
8f68: dc de        LDD    <$DE
8f6a: ed 0d        STD    $D,X
8f6c: bd 8e 23     JSR    $8E23
8f6f: 9e 5a        LDX    <$5A
8f71: e6 9f 48 e0  LDB    [$48E0]
8f75: e7 04        STB    $4,X
8f77: bd cc cc     JSR    $CCCC
8f7a: 39           RTS
8f7b: de e4        LDU    <$E4
8f7d: 27 04        BEQ    $8F83
8f7f: a6 c4        LDA    ,U
8f81: 26 2e        BNE    $8FB1
8f83: 0c dd        INC    <$DD
8f85: f6 4b 14     LDB    $4B14
8f88: 58           ASLB
8f89: 8e 90 70     LDX    #$9070
8f8c: 3a           ABX
8f8d: 8c 90 7c     CMPX   #$907C
8f90: 25 0e        BCS    $8FA0
8f92: b6 4b 14     LDA    $4B14
8f95: 44           LSRA
8f96: 25 05        BCS    $8F9D
8f98: 8e 90 78     LDX    #$9078
8f9b: 20 03        BRA    $8FA0
