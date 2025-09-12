8e32: ee 0d        LDU    $D,X
8e34: a6 c4        LDA    ,U
8e36: a7 0f        STA    $F,X
8e38: 27 17        BEQ    $001F
8e3a: ec 88 15     LDD    $15,X
8e3d: a4 88 13     ANDA   $13,X
8e40: 26 1a        BNE    $002A
8e42: e4 88 14     ANDB   $14,X
8e45: 26 15        BNE    $002A
8e47: a6 0f        LDA    $F,X
8e49: 84 07        ANDA   #$07
8e4b: 48           ASLA
8e4c: ce 8e 68     LDU    #$8E68
8e4f: 6e d6        JMP    [A,U]
8e51: ec 41        LDD    $1,U
8e53: ed 88 13     STD    $13,X
8e56: 33 43        LEAU   $3,U
8e58: ef 0d        STU    $D,X
8e5a: 20 d6        BRA    $0000
8e5c: ee 0d        LDU    $D,X
8e5e: a6 c4        LDA    ,U
8e60: 27 d0        BEQ    $0000
8e62: 33 43        LEAU   $3,U
8e64: ef 0d        STU    $D,X
8e66: 20 f6        BRA    $002C
8e68: 8e 79 8e     LDX    #$798E
8e6b: 9b 8e        ADDA   <$8E
8e6d: a4 8e        ANDA   W,X
8e6f: b2 8e ba     SBCA   $8EBA
8e72: 8e ce 8e     LDX    #$CE8E
8e75: 78 8e 78     ASL    $8E78
8e78: 3f           SWI
8e79: ee 0d        LDU    $D,X
8e7b: ec 41        LDD    $1,U
8e7d: 27 15        BEQ    $0062
8e7f: a4 88 15     ANDA   $15,X
8e82: 26 10        BNE    $0062
8e84: e4 88 16     ANDB   $16,X
8e87: 26 0b        BNE    $0062
8e89: 33 43        LEAU   $3,U
8e8b: a6 c4        LDA    ,U
8e8d: 48           ASLA
8e8e: 26 f9        BNE    $0057
8e90: 24 f7        BCC    $0057
8e92: 20 e7        BRA    $0049
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
8ed1: 10 2b ff 5d  LBMI   $0000
8ed5: 39           RTS
8ed6: bd cc c0     JSR    $CCC0
8ed9: f6 4b 14     LDB    $4B14
8edc: 58           ASLB
8edd: 8e 90 70     LDX    #$9070
8ee0: 3a           ABX
8ee1: 8c 90 7c     CMPX   #$907C
8ee4: 25 0e        BCS    $00C2
8ee6: b6 4b 14     LDA    $4B14
8ee9: 44           LSRA
8eea: 25 05        BCS    $00BF
8eec: 8e 90 78     LDX    #$9078
8eef: 20 03        BRA    $00C2
8ef1: 8e 90 7a     LDX    #$907A
8ef4: ae 84        LDX    ,X
8ef6: d6 dd        LDB    <$DD
8ef8: e1 80        CMPB   ,X+
8efa: 23 02        BLS    $00CC
8efc: e6 1f        LDB    -$1,X
8efe: 58           ASLB
8eff: ec 85        LDD    B,X
8f01: dd e4        STD    <$E4
8f03: 0f e6        CLR    <$E6
8f05: 8e 49 00     LDX    #$4900
8f08: 9f 5a        STX    <$5A
8f0a: 6f 03        CLR    $3,X
8f0c: de e4        LDU    <$E4
8f0e: 27 19        BEQ    $00F7
8f10: a6 c4        LDA    ,U
8f12: 27 15        BEQ    $00F7
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
8f31: 25 d5        BCS    $00D6
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
8f7d: 27 04        BEQ    $0151
8f7f: a6 c4        LDA    ,U
8f81: 26 2e        BNE    $017F
8f83: 0c dd        INC    <$DD
8f85: f6 4b 14     LDB    $4B14
8f88: 58           ASLB
8f89: 8e 90 70     LDX    #$9070
8f8c: 3a           ABX
8f8d: 8c 90 7c     CMPX   #$907C
8f90: 25 0e        BCS    $016E
8f92: b6 4b 14     LDA    $4B14
8f95: 44           LSRA
8f96: 25 05        BCS    $016B
8f98: 8e 90 78     LDX    #$9078
8f9b: 20 03        BRA    $016E
8f9d: 8e 90 7a     LDX    #$907A
8fa0: ae 84        LDX    ,X
8fa2: d6 dd        LDB    <$DD
8fa4: e1 80        CMPB   ,X+
8fa6: 23 02        BLS    $0178
8fa8: e6 1f        LDB    -$1,X
8faa: d7 dd        STB    <$DD
8fac: 58           ASLB
8fad: ec 85        LDD    B,X
8faf: dd e4        STD    <$E4
8fb1: 8e 49 00     LDX    #$4900
8fb4: 9f 5a        STX    <$5A
8fb6: a6 03        LDA    $3,X
8fb8: 27 0c        BEQ    $0194
8fba: 9e 5a        LDX    <$5A
8fbc: 30 88 19     LEAX   $19,X
8fbf: 8c 49 4b     CMPX   #$494B
8fc2: 25 f0        BCS    $0182
8fc4: 20 5d        BRA    $01F1
8fc6: de e4        LDU    <$E4
8fc8: 27 59        BEQ    $01F1
8fca: a6 c4        LDA    ,U
8fcc: 27 55        BEQ    $01F1
8fce: 0c e6        INC    <$E6
8fd0: ec c4        LDD    ,U
8fd2: dd e0        STD    <$E0
8fd4: ec 42        LDD    $2,U
8fd6: dd de        STD    <$DE
8fd8: ec 44        LDD    $4,U
8fda: dd e2        STD    <$E2
8fdc: 33 46        LEAU   $6,U
8fde: df e4        STU    <$E4
8fe0: 86 01        LDA    #$01
8fe2: a7 03        STA    $3,X
8fe4: ee 84        LDU    ,X
8fe6: bd cd c3     JSR    $CDC3
8fe9: ee 84        LDU    ,X
8feb: 86 c0        LDA    #$C0
8fed: a7 50        STA    -$10,U
8fef: a7 5a        STA    -$6,U
8ff1: 4f           CLRA
8ff2: a7 09        STA    $9,X
8ff4: a7 08        STA    $8,X
8ff6: a7 06        STA    $6,X
8ff8: a7 05        STA    $5,X
8ffa: a7 0b        STA    $B,X
8ffc: de e0        LDU    <$E0
8ffe: a6 41        LDA    $1,U
9000: a7 07        STA    $7,X
9002: ee 84        LDU    ,X
9004: 9e e2        LDX    <$E2
9006: ec 84        LDD    ,X
9008: ed 48        STD    $8,U
900a: ec 02        LDD    $2,X
900c: ed 4a        STD    $A,U
900e: ec 04        LDD    $4,X
9010: ed 4c        STD    $C,U
9012: 9e 5a        LDX    <$5A
9014: dc de        LDD    <$DE
9016: ed 0d        STD    $D,X
9018: bd 8e 23     JSR    $8E23
901b: 9e 5a        LDX    <$5A
901d: e6 9f 48 e0  LDB    [$48E0]
9021: e7 04        STB    $4,X
9023: 39           RTS
9024: 00 01        NEG    <$01
9026: 04 04        LSR    <$04
9028: 7c 00 00     INC    >$0000
902b: 00 04        NEG    <$04
902d: 00 7c        NEG    <$7C
902f: 00 fc        NEG    <$FC
9031: 00 ee        NEG    <$00
