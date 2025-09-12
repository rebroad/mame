8c44: bd 8d 9d     JSR    $8D9D
8c47: bd 8d e3     JSR    $8DE3
8c4a: a6 03        LDA    $3,X
8c4c: 81 01        CMPA   #$01
8c4e: 10 26 01 14  LBNE   $8D66
8c52: a6 02        LDA    $2,X
8c54: bd ce 0c     JSR    $CE0C
8c57: 9e 5a        LDX    <$5A
8c59: 6f 0a        CLR    $A,X
8c5b: 4f           CLRA
8c5c: c6 13        LDB    #$13
8c5e: fd 47 01     STD    $4701
8c61: a6 88 11     LDA    $11,X
8c64: 85 40        BITA   #$40
8c66: 27 19        BEQ    $8C81
8c68: fc 50 98     LDD    $5098
8c6b: c3 10 00     ADDD   #$1000
8c6e: fd 50 98     STD    $5098
8c71: 86 67        LDA    #$67
8c73: bd cd ba     JSR    $CDBA
8c76: fc 50 98     LDD    $5098
8c79: 83 10 00     SUBD   #$1000
8c7c: fd 50 98     STD    $5098
8c7f: 20 05        BRA    $8C86
8c81: 86 67        LDA    #$67
8c83: bd cd ba     JSR    $CDBA
8c86: fc 50 00     LDD    $5000
8c89: 2b 23        BMI    $8CAE
8c8b: 6c 0a        INC    $A,X
8c8d: 83 40 00     SUBD   #$4000
8c90: 2c 1c        BGE    $8CAE
8c92: ec 88 15     LDD    $15,X
8c95: ca 08        ORB    #$08
8c97: ed 88 15     STD    $15,X
8c9a: fc 50 72     LDD    $5072
8c9d: f3 50 74     ADDD   $5074
8ca0: 10 83 00 20  CMPD   #$0020
8ca4: 22 08        BHI    $8CAE
8ca6: ec 88 15     LDD    $15,X
8ca9: ca 04        ORB    #$04
8cab: ed 88 15     STD    $15,X
8cae: ec 88 15     LDD    $15,X
8cb1: 85 10        BITA   #$10
8cb3: 27 50        BEQ    $8D05
8cb5: ec 88 11     LDD    $11,X
8cb8: 85 40        BITA   #$40
8cba: 26 49        BNE    $8D05
8cbc: fc 50 00     LDD    $5000
8cbf: 83 08 00     SUBD   #$0800
8cc2: 2f 41        BLE    $8D05
8cc4: a6 06        LDA    $6,X
8cc6: 26 3d        BNE    $8D05
8cc8: f6 4b 19     LDB    $4B19
8ccb: c1 0b        CMPB   #$0B
8ccd: 25 05        BCS    $8CD4
8ccf: ce 8d 99     LDU    #$8D99
8cd2: 20 07        BRA    $8CDB
8cd4: 58           ASLB
8cd5: 58           ASLB
8cd6: ce 8d 71     LDU    #$8D71
8cd9: 33 c5        LEAU   B,U
8cdb: 96 43        LDA    <$43
8cdd: a4 c4        ANDA   ,U
8cdf: 26 24        BNE    $8D05
8ce1: b6 47 03     LDA    $4703
8ce4: a1 41        CMPA   $1,U
8ce6: 23 1d        BLS    $8D05
8ce8: ee 42        LDU    $2,U
8cea: a6 43        LDA    $3,U
8cec: 26 0f        BNE    $8CFD
8cee: 9e 5a        LDX    <$5A
8cf0: ec 88 15     LDD    $15,X
8cf3: ca 40        ORB    #$40
8cf5: ed 88 15     STD    $15,X
8cf8: bd a6 8b     JSR    $A68B
8cfb: 20 08        BRA    $8D05
8cfd: 33 46        LEAU   $6,U
8cff: 11 83 49 6f  CMPU   #$496F
8d03: 25 e5        BCS    $8CEA
8d05: 9e 5a        LDX    <$5A
8d07: a6 88 11     LDA    $11,X
8d0a: 85 80        BITA   #$80
8d0c: 27 58        BEQ    $8D66
8d0e: 96 4f        LDA    <$4F
8d10: 26 28        BNE    $8D3A
8d12: b6 50 02     LDA    $5002
8d15: 2b 05        BMI    $8D1C
8d17: bd 89 79     JSR    $8979
8d1a: 20 03        BRA    $8D1F
8d1c: bd 89 71     JSR    $8971
8d1f: 96 4e        LDA    <$4E
8d21: 26 17        BNE    $8D3A
8d23: f6 50 04     LDB    $5004
8d26: 1d           SEX
8d27: cb 01        ADDB   #$01
8d29: c1 01        CMPB   #$01
8d2b: 23 0d        BLS    $8D3A
8d2d: b8 50 02     EORA   $5002
8d30: 2b 05        BMI    $8D37
8d32: bd 89 61     JSR    $8961
8d35: 20 03        BRA    $8D3A
8d37: bd 89 69     JSR    $8969
8d3a: 96 4d        LDA    <$4D
8d3c: 26 28        BNE    $8D66
8d3e: b6 50 04     LDA    $5004
8d41: 2b 05        BMI    $8D48
8d43: bd 89 51     JSR    $8951
8d46: 20 03        BRA    $8D4B
8d48: bd 89 59     JSR    $8959
8d4b: 96 4e        LDA    <$4E
8d4d: 26 17        BNE    $8D66
8d4f: f6 50 02     LDB    $5002
8d52: 1d           SEX
8d53: cb 01        ADDB   #$01
8d55: c1 01        CMPB   #$01
8d57: 23 0d        BLS    $8D66
8d59: b8 50 04     EORA   $5004
8d5c: 2b 05        BMI    $8D63
8d5e: bd 89 69     JSR    $8969
8d61: 20 03        BRA    $8D66
8d63: bd 89 61     JSR    $8961
8d66: 9e 5a        LDX    <$5A
8d68: ec 88 15     LDD    $15,X
8d6b: 84 ef        ANDA   #$EF
8d6d: ed 88 15     STD    $15,X
8d70: 39           RTS
8d71: 0f 80        CLR    <$80
8d73: 49           ROLA
8d74: 69 0f        ROL    $F,X
8d76: 80 49        SUBA   #$49
8d78: 69 0f        ROL    $F,X
8d7a: 80 49        SUBA   #$49
8d7c: 63 0f        COM    $F,X
8d7e: 40           NEGA
8d7f: 49           ROLA
8d80: 5d           TSTB
8d81: 07 80        ASR    <$80
8d83: 49           ROLA
8d84: 57           ASRB
8d85: 07 20        ASR    <$20
8d87: 49           ROLA
8d88: 51           NEGB
8d89: 07 20        ASR    <$20
8d8b: 49           ROLA
8d8c: 4b           XDECA
8d8d: 03 80        COM    <$80
8d8f: 49           ROLA
8d90: 4b           XDECA
8d91: 03 60        COM    <$60
8d93: 49           ROLA
8d94: 4b           XDECA
8d95: 03 40        COM    <$40
8d97: 49           ROLA
8d98: 4b           XDECA
8d99: 03 30        COM    <$30
8d9b: 49           ROLA
8d9c: 4b           XDECA
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
8e42: e4 88 00     ANDB   $00,X
