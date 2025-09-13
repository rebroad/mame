8b6d: 8e 49 00     LDX    #$4900
8b70: 9f 5a        STX    <$5A
8b72: ee 84        LDU    ,X
8b74: a6 03        LDA    $3,X
8b76: 27 03        BEQ    $8B7B
8b78: bd 8b e1     JSR    $8BE1
8b7b: 9e 5a        LDX    <$5A
8b7d: 30 88 19     LEAX   $19,X
8b80: 8c 49 4b     CMPX   #$494B
8b83: 25 eb        BCS    $8B70
8b85: 39           RTS
8b86: 8e 49 00     LDX    #$4900
8b89: 9f 5a        STX    <$5A
8b8b: ee 84        LDU    ,X
8b8d: a6 03        LDA    $3,X
8b8f: 81 01        CMPA   #$01
8b91: 26 43        BNE    $8BD6
8b93: a6 4a        LDA    $A,U
8b95: 81 09        CMPA   #$09
8b97: 2d 02        BLT    $8B9B
8b99: 80 02        SUBA   #$02
8b9b: 81 f7        CMPA   #$F7
8b9d: 2e 02        BGT    $8BA1
8b9f: 8b 02        ADDA   #$02
8ba1: a7 4a        STA    $A,U
8ba3: a6 4c        LDA    $C,U
8ba5: 81 09        CMPA   #$09
8ba7: 2d 02        BLT    $8BAB
8ba9: 80 03        SUBA   #$03
8bab: 81 f7        CMPA   #$F7
8bad: 2e 02        BGT    $8BB1
8baf: 8b 03        ADDA   #$03
8bb1: a7 4c        STA    $C,U
8bb3: ec 48        LDD    $8,U
8bb5: c3 04 00     ADDD   #$0400
8bb8: 29 04        BVS    $8BBE
8bba: ed 48        STD    $8,U
8bbc: 20 18        BRA    $8BD6
8bbe: a6 4a        LDA    $A,U
8bc0: 4d           TSTA
8bc1: 2a 01        BPL    $8BC4
8bc3: 40           NEGA
8bc4: 81 08        CMPA   #$08
8bc6: 2e 0e        BGT    $8BD6
8bc8: a6 4c        LDA    $C,U
8bca: 4d           TSTA
8bcb: 2a 01        BPL    $8BCE
8bcd: 40           NEGA
8bce: 81 08        CMPA   #$08
8bd0: 2e 04        BGT    $8BD6
8bd2: 86 00        LDA    #$00
8bd4: a7 03        STA    $3,X
8bd6: 9e 5a        LDX    <$5A
8bd8: 30 88 19     LEAX   $19,X
8bdb: 8c 49 4b     CMPX   #$494B
8bde: 25 a9        BCS    $8B89
8be0: 39           RTS
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
8bff: 2b 14        BMI    $8C15
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
8c1c: 24 03        BCC    $8C21
8c1e: bd 89 61     JSR    $8961
8c21: 04 50        LSR    <$50
8c23: 24 03        BCC    $8C28
8c25: bd 89 69     JSR    $8969
8c28: 04 50        LSR    <$50
8c2a: 24 03        BCC    $8C2F
8c2c: bd 89 51     JSR    $8951
8c2f: 04 50        LSR    <$50
8c31: 24 03        BCC    $8C36
8c33: bd 89 59     JSR    $8959
8c36: 04 50        LSR    <$50
8c38: 24 03        BCC    $8C3D
8c3a: bd 89 79     JSR    $8979
8c3d: 04 50        LSR    <$50
8c3f: 24 03        BCC    $8C44
8c41: bd 89 71     JSR    $8971
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
8ed6: 7e 8ed6     JMP    $8ed6
