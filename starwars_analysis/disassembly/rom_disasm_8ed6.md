8ed6: bd cc c0     JSR    $CCC0
8ed9: f6 4b 14     LDB    $4B14
8edc: 58           ASLB
8edd: 8e 90 70     LDX    #$9070
8ee0: 3a           ABX
8ee1: 8c 90 7c     CMPX   #$907C
8ee4: 25 0e        BCS    $001E
8ee6: b6 4b 14     LDA    $4B14
8ee9: 44           LSRA
8eea: 25 05        BCS    $001B
8eec: 8e 90 78     LDX    #$9078
8eef: 20 03        BRA    $001E
8ef1: 8e 90 7a     LDX    #$907A
8ef4: ae 84        LDX    ,X
8ef6: d6 dd        LDB    <$DD
8ef8: e1 80        CMPB   ,X+
8efa: 23 02        BLS    $0028
8efc: e6 1f        LDB    -$1,X
8efe: 58           ASLB
8eff: ec 85        LDD    B,X
8f01: dd e4        STD    <$E4
8f03: 0f e6        CLR    <$E6
8f05: 8e 49 00     LDX    #$4900
8f08: 9f 5a        STX    <$5A
8f0a: 6f 03        CLR    $3,X
8f0c: de e4        LDU    <$E4
8f0e: 27 19        BEQ    $0053
8f10: a6 c4        LDA    ,U
8f12: 27 15        BEQ    $0053
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
8f31: 25 d5        BCS    $0032
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
8f7d: 27 04        BEQ    $00AD
8f7f: a6 c4        LDA    ,U
8f81: 26 2e        BNE    $00DB
8f83: 0c dd        INC    <$DD
8f85: f6 4b 14     LDB    $4B14
8f88: 58           ASLB
8f89: 8e 90 70     LDX    #$9070
8f8c: 3a           ABX
8f8d: 8c 90 7c     CMPX   #$907C
8f90: 25 0e        BCS    $00CA
8f92: b6 4b 14     LDA    $4B14
8f95: 44           LSRA
8f96: 25 05        BCS    $00C7
8f98: 8e 90 78     LDX    #$9078
8f9b: 20 03        BRA    $00CA
8f9d: 8e 90 7a     LDX    #$907A
8fa0: ae 84        LDX    ,X
8fa2: d6 dd        LDB    <$DD
8fa4: e1 80        CMPB   ,X+
8fa6: 23 02        BLS    $00D4
8fa8: e6 1f        LDB    -$1,X
8faa: d7 dd        STB    <$DD
8fac: 58           ASLB
8fad: ec 85        LDD    B,X
8faf: dd e4        STD    <$E4
8fb1: 8e 49 00     LDX    #$4900
8fb4: 9f 5a        STX    <$5A
8fb6: a6 03        LDA    $3,X
8fb8: 27 0c        BEQ    $00F0
8fba: 9e 5a        LDX    <$5A
8fbc: 30 88 19     LEAX   $19,X
8fbf: 8c 49 4b     CMPX   #$494B
8fc2: 25 f0        BCS    $00DE
8fc4: 20 5d        BRA    $014D
8fc6: de e4        LDU    <$E4
8fc8: 27 59        BEQ    $014D
8fca: a6 c4        LDA    ,U
8fcc: 27 55        BEQ    $014D
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
9031: 00 00        NEG    <$00
9033: 00 7c        NEG    <$7C
9035: 00 04        NEG    <$04
9037: 00 00        NEG    <$00
9039: 00 7c        NEG    <$7C
903b: 00 00        NEG    <$00
903d: 00 04        NEG    <$04
903f: 00 7c        NEG    <$7C
9041: 00 fc        NEG    <$FC
9043: 00 00        NEG    <$00
9045: 00 7c        NEG    <$7C
9047: 00 04        NEG    <$04
9049: 00 00        NEG    <$00
904b: 00 7c        NEG    <$7C
904d: 00 00        NEG    <$00
904f: 00 04        NEG    <$04
9051: 00 7c        NEG    <$7C
9053: 00 fc        NEG    <$FC
9055: 00 00        NEG    <$00
9057: 00 7c        NEG    <$7C
9059: 00 04        NEG    <$04
905b: 00 00        NEG    <$00
905d: 00 7c        NEG    <$7C
905f: 00 f8        NEG    <$F8
9061: 00 00        NEG    <$00
9063: 00 7c        NEG    <$7C
9065: 00 08        NEG    <$08
9067: 00 00        NEG    <$00
9069: 00 7c        NEG    <$7C
906b: 00 00        NEG    <$00
906d: 00 08        NEG    <$08
906f: 00 90        NEG    <$90
9071: 7c 90 85     INC    $9085
9074: 90 90        SUBA   <$90
9076: 90 9f        SUBA   <$9F
9078: 90 ac        SUBA   <$AC
907a: 90 b9        SUBA   <$B9
907c: 03 90        COM    <$90
907e: c6 91        LDB    #$91
9080: 38 91        XANDCC #$91
9082: 4b           XDECA
9083: 91 71        CMPA   <$71
9085: 04 90        LSR    <$90
9087: d9 91        ADCB   <$91
9089: 12           NOP
908a: 91 5e        CMPA   <$5E
908c: 91 4b        CMPA   <$4B
908e: 91 71        CMPA   <$71
9090: 06 90        ROR    <$90
9092: ec 91        LDD    [,X++]
9094: 12           NOP
9095: 91 5e        CMPA   <$5E
9097: 91 25        CMPA   <$25
9099: 91 38        CMPA   <$38
909b: 91 4b        CMPA   <$4B
909d: 91 71        CMPA   <$71
909f: 05 91        LSR    <$91
90a1: 12           NOP
90a2: 91 5e        CMPA   <$5E
90a4: 91 25        CMPA   <$25
90a6: 91 38        CMPA   <$38
90a8: 91 4b        CMPA   <$4B
90aa: 91 71        CMPA   <$71
90ac: 05 90        LSR    <$90
90ae: ff 91 12     STU    $9112
90b1: 91 4b        CMPA   <$4B
90b3: 91 5e        CMPA   <$5E
90b5: 91 38        CMPA   <$38
90b7: 91 71        CMPA   <$71
90b9: 05 91        LSR    <$91
90bb: 12           NOP
90bc: 91 5e        CMPA   <$5E
90be: 91 38        CMPA   <$38
90c0: 91 5e        CMPA   <$5E
90c2: 91 4b        CMPA   <$4B
90c4: 91 71        CMPA   <$71
90c6: 90 24        SUBA   <$24
90c8: 91 e1        CMPA   <$E1
90ca: 90 28        SUBA   <$28
90cc: 90 24        SUBA   <$24
90ce: 92 05        SBCA   <$05
90d0: 90 2e        SUBA   <$2E
90d2: 90 24        SUBA   <$24
90d4: 92 32        SBCA   <$32
