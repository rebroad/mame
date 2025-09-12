8be1: bd 8e 3a     JSR    $8E3A
8be4: cc 00 00     LDD    #$0000
8be7: 97 4c        STA    <$4C
8be9: 97 4e        STA    <$4E
8beb: 97 4d        STA    <$4D
8bed: 97 4f        STA    <$4F
8bef: a6 88 15     LDA    $15,X
8bf2: 84 10        ANDA   #$10
8bf4: f6 47 03     LDB    $4703
8bf7: c4 30        ANDB   #$30
8bf9: ed 88 15     STD    $15,X
8bfc: a6 09        LDA    $9,X
8bfe: 4a           DECA
8bff: 2b 14        BMI    $0034
8c01: a7 09        STA    $9,X
8c03: cc 16 40     LDD    #$1640
8c06: fd 50 22     STD    $5022
8c09: cc 3c 02     LDD    #$3C02
8c0c: fd 50 24     STD    $5024
8c0f: bd 89 c8     JSR    $89C8
8c12: 7e 8c 44     JMP    $8C44
8c15: e6 88 11     LDB    $11,X
8c18: d7 50        STB    <$50
8c1a: 04 50        LSR    <$50
8c1c: 24 03        BCC    $0040
8c1e: bd 89 61     JSR    $8961
8c21: 04 50        LSR    <$50
8c23: 24 03        BCC    $0047
8c25: bd 89 69     JSR    $8969
8c28: 04 50        LSR    <$50
8c2a: 24 03        BCC    $004E
8c2c: bd 89 51     JSR    $8951
8c2f: 04 50        LSR    <$50
8c31: 24 03        BCC    $0055
8c33: bd 89 59     JSR    $8959
8c36: 04 50        LSR    <$50
8c38: 24 03        BCC    $005C
8c3a: bd 89 79     JSR    $8979
8c3d: 04 50        LSR    <$50
8c3f: 24 03        BCC    $0063
8c41: bd 89 71     JSR    $8971
8c44: bd 8d 9d     JSR    $8D9D
8c47: bd 8d e3     JSR    $8DE3
8c4a: a6 03        LDA    $3,X
8c4c: 81 01        CMPA   #$01
8c4e: 10 26 01 14  LBNE   $0185
8c52: a6 02        LDA    $2,X
8c54: bd ce 0c     JSR    $CE0C
8c57: 9e 5a        LDX    <$5A
8c59: 6f 0a        CLR    $A,X
8c5b: 4f           CLRA
8c5c: c6 13        LDB    #$13
8c5e: fd 47 01     STD    $4701
8c61: a6 88 11     LDA    $11,X
8c64: 85 40        BITA   #$40
8c66: 27 19        BEQ    $00A0
8c68: fc 50 98     LDD    $5098
8c6b: c3 10 00     ADDD   #$1000
8c6e: fd 50 98     STD    $5098
8c71: 86 67        LDA    #$67
8c73: bd cd ba     JSR    $CDBA
8c76: fc 50 98     LDD    $5098
8c79: 83 10 00     SUBD   #$1000
8c7c: fd 50 98     STD    $5098
8c7f: 20 05        BRA    $00A5
8c81: 86 67        LDA    #$67
8c83: bd cd ba     JSR    $CDBA
8c86: fc 50 00     LDD    $5000
8c89: 2b 23        BMI    $00CD
8c8b: 6c 0a        INC    $A,X
8c8d: 83 40 00     SUBD   #$4000
8c90: 2c 1c        BGE    $00CD
8c92: ec 88 15     LDD    $15,X
8c95: ca 08        ORB    #$08
8c97: ed 88 15     STD    $15,X
8c9a: fc 50 72     LDD    $5072
8c9d: f3 50 74     ADDD   $5074
8ca0: 10 83 00 20  CMPD   #$0020
8ca4: 22 08        BHI    $00CD
8ca6: ec 88 15     LDD    $15,X
8ca9: ca 04        ORB    #$04
8cab: ed 88 15     STD    $15,X
8cae: ec 88 15     LDD    $15,X
8cb1: 85 10        BITA   #$10
8cb3: 27 50        BEQ    $0124
8cb5: ec 88 11     LDD    $11,X
8cb8: 85 40        BITA   #$40
8cba: 26 49        BNE    $0124
8cbc: fc 50 00     LDD    $5000
8cbf: 83 08 00     SUBD   #$0800
8cc2: 2f 41        BLE    $0124
8cc4: a6 06        LDA    $6,X
8cc6: 26 3d        BNE    $0124
8cc8: f6 4b 19     LDB    $4B19
8ccb: c1 0b        CMPB   #$0B
8ccd: 25 05        BCS    $00F3
8ccf: ce 8d 99     LDU    #$8D99
8cd2: 20 07        BRA    $00FA
8cd4: 58           ASLB
8cd5: 58           ASLB
8cd6: ce 8d 71     LDU    #$8D71
8cd9: 33 c5        LEAU   B,U
8cdb: 96 43        LDA    <$43
8cdd: a4 c4        ANDA   ,U
8cdf: 26 24        BNE    $0124
8ce1: b6 47 03     LDA    $4703
8ce4: a1 41        CMPA   $1,U
8ce6: 23 1d        BLS    $0124
8ce8: ee 42        LDU    $2,U
8cea: a6 43        LDA    $3,U
8cec: 26 0f        BNE    $011C
8cee: 9e 5a        LDX    <$5A
8cf0: ec 88 15     LDD    $15,X
8cf3: ca 40        ORB    #$40
8cf5: ed 88 15     STD    $15,X
8cf8: bd a6 8b     JSR    $A68B
8cfb: 20 08        BRA    $0124
8cfd: 33 46        LEAU   $6,U
8cff: 11 83 49 6f  CMPU   #$496F
8d03: 25 e5        BCS    $0109
8d05: 9e 5a        LDX    <$5A
8d07: a6 88 11     LDA    $11,X
8d0a: 85 80        BITA   #$80
8d0c: 27 58        BEQ    $0185
8d0e: 96 4f        LDA    <$4F
8d10: 26 28        BNE    $0159
8d12: b6 50 02     LDA    $5002
8d15: 2b 05        BMI    $013B
8d17: bd 89 79     JSR    $8979
8d1a: 20 03        BRA    $013E
8d1c: bd 89 71     JSR    $8971
8d1f: 96 4e        LDA    <$4E
8d21: 26 17        BNE    $0159
8d23: f6 50 04     LDB    $5004
8d26: 1d           SEX
8d27: cb 01        ADDB   #$01
8d29: c1 01        CMPB   #$01
8d2b: 23 0d        BLS    $0159
8d2d: b8 50 02     EORA   $5002
8d30: 2b 05        BMI    $0156
8d32: bd 89 61     JSR    $8961
8d35: 20 03        BRA    $0159
8d37: bd 89 69     JSR    $8969
8d3a: 96 4d        LDA    <$4D
8d3c: 26 28        BNE    $0185
8d3e: b6 50 04     LDA    $5004
8d41: 2b 05        BMI    $0167
8d43: bd 89 51     JSR    $8951
8d46: 20 03        BRA    $016A
8d48: bd 89 59     JSR    $8959
8d4b: 96 4e        LDA    <$4E
8d4d: 26 17        BNE    $0185
8d4f: f6 50 02     LDB    $5002
8d52: 1d           SEX
8d53: cb 01        ADDB   #$01
8d55: c1 01        CMPB   #$01
8d57: 23 0d        BLS    $0185
8d59: b8 50 04     EORA   $5004
8d5c: 2b 05        BMI    $0182
8d5e: bd 89 69     JSR    $8969
8d61: 20 03        BRA    $0185
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
8da3: 26 3a        BNE    $01FE
8da5: e6 88 12     LDB    $12,X
8da8: d7 50        STB    <$50
8daa: ee 84        LDU    ,X
8dac: cc 00 00     LDD    #$0000
8daf: ed 56        STD    -$A,U
8db1: ed 5e        STD    -$2,U
8db3: ed 46        STD    $6,U
8db5: 04 50        LSR    <$50
8db7: 24 03        BCC    $01DB
8db9: bd 8a 59     JSR    $8A59
8dbc: 04 50        LSR    <$50
8dbe: 24 03        BCC    $01E2
8dc0: bd 8a 7e     JSR    $8A7E
8dc3: 04 50        LSR    <$50
8dc5: 24 03        BCC    $01E9
8dc7: bd 8a 21     JSR    $8A21
8dca: 04 50        LSR    <$50
8dcc: 24 03        BCC    $01F0
8dce: bd 8a 3d     JSR    $8A3D
8dd1: 04 50        LSR    <$50
8dd3: 24 03        BCC    $01F7
8dd5: bd 8a 05     JSR    $8A05
8dd8: 04 50        LSR    <$50
8dda: 24 03        BCC    $01FE
8ddc: bd 89 e9     JSR    $89E9
8ddf: bd 8a bd     JSR    $8A00
