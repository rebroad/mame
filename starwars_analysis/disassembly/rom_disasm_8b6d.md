8b6d: 8e 49 00     LDX    #$4900
8b70: 9f 5a        STX    <$5A
8b72: ee 84        LDU    ,X
8b74: a6 03        LDA    $3,X
8b76: 27 03        BEQ    $000E
8b78: bd 8b e1     JSR    $8BE1
8b7b: 9e 5a        LDX    <$5A
8b7d: 30 88 19     LEAX   $19,X
8b80: 8c 49 4b     CMPX   #$494B
8b83: 25 eb        BCS    $0003
8b85: 39           RTS
8b86: 8e 49 00     LDX    #$4900
8b89: 9f 5a        STX    <$5A
8b8b: ee 84        LDU    ,X
8b8d: a6 03        LDA    $3,X
8b8f: 81 01        CMPA   #$01
8b91: 26 43        BNE    $0069
8b93: a6 4a        LDA    $A,U
8b95: 81 09        CMPA   #$09
8b97: 2d 02        BLT    $002E
8b99: 80 02        SUBA   #$02
8b9b: 81 f7        CMPA   #$F7
8b9d: 2e 02        BGT    $0034
8b9f: 8b 02        ADDA   #$02
8ba1: a7 4a        STA    $A,U
8ba3: a6 4c        LDA    $C,U
8ba5: 81 09        CMPA   #$09
8ba7: 2d 02        BLT    $003E
8ba9: 80 03        SUBA   #$03
8bab: 81 f7        CMPA   #$F7
8bad: 2e 02        BGT    $0044
8baf: 8b 03        ADDA   #$03
8bb1: a7 4c        STA    $C,U
8bb3: ec 48        LDD    $8,U
8bb5: c3 04 00     ADDD   #$0400
8bb8: 29 04        BVS    $0051
8bba: ed 48        STD    $8,U
8bbc: 20 18        BRA    $0069
8bbe: a6 4a        LDA    $A,U
8bc0: 4d           TSTA
8bc1: 2a 01        BPL    $0057
8bc3: 40           NEGA
8bc4: 81 08        CMPA   #$08
8bc6: 2e 0e        BGT    $0069
8bc8: a6 4c        LDA    $C,U
8bca: 4d           TSTA
8bcb: 2a 01        BPL    $0061
8bcd: 40           NEGA
8bce: 81 08        CMPA   #$08
8bd0: 2e 04        BGT    $0069
8bd2: 86 00        LDA    #$00
8bd4: a7 03        STA    $3,X
8bd6: 9e 5a        LDX    <$5A
8bd8: 30 88 19     LEAX   $19,X
8bdb: 8c 49 4b     CMPX   #$494B
8bde: 25 a9        BCS    $001C
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
8bff: 2b 14        BMI    $00A8
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
8c1c: 24 03        BCC    $00B4
8c1e: bd 89 61     JSR    $8961
8c21: 04 50        LSR    <$50
8c23: 24 03        BCC    $00BB
8c25: bd 89 69     JSR    $8969
8c28: 04 50        LSR    <$50
8c2a: 24 03        BCC    $00C2
8c2c: bd 89 51     JSR    $8951
8c2f: 04 50        LSR    <$50
8c31: 24 03        BCC    $00C9
8c33: bd 89 59     JSR    $8959
8c36: 04 50        LSR    <$50
8c38: 24 03        BCC    $00D0
8c3a: bd 89 79     JSR    $8979
8c3d: 04 50        LSR    <$50
8c3f: 24 03        BCC    $00D7
8c41: bd 89 71     JSR    $8971
8c44: bd 8d 9d     JSR    $8D9D
8c47: bd 8d e3     JSR    $8DE3
8c4a: a6 03        LDA    $3,X
8c4c: 81 01        CMPA   #$01
8c4e: 10 26 01 14  LBNE   $01F9
8c52: a6 02        LDA    $2,X
8c54: bd ce 0c     JSR    $CE0C
8c57: 9e 5a        LDX    <$5A
8c59: 6f 0a        CLR    $A,X
8c5b: 4f           CLRA
8c5c: c6 13        LDB    #$13
8c5e: fd 47 01     STD    $4701
8c61: a6 88 11     LDA    $11,X
8c64: 85 40        BITA   #$40
8c66: 27 19        BEQ    $0114
8c68: fc 50 98     LDD    $5098
8c6b: c3 10 00     ADDD   #$1000
8c6e: fd 50 98     STD    $5098
8c71: 86 67        LDA    #$67
8c73: bd cd ba     JSR    $CDBA
8c76: fc 50 98     LDD    $5098
8c79: 83 10 00     SUBD   #$1000
8c7c: fd 50 98     STD    $5098
8c7f: 20 05        BRA    $0119
8c81: 86 67        LDA    #$67
8c83: bd cd ba     JSR    $CDBA
8c86: fc 50 00     LDD    $5000
8c89: 2b 23        BMI    $0141
8c8b: 6c 0a        INC    $A,X
8c8d: 83 40 00     SUBD   #$4000
8c90: 2c 1c        BGE    $0141
8c92: ec 88 15     LDD    $15,X
8c95: ca 08        ORB    #$08
8c97: ed 88 15     STD    $15,X
8c9a: fc 50 72     LDD    $5072
8c9d: f3 50 74     ADDD   $5074
8ca0: 10 83 00 20  CMPD   #$0020
8ca4: 22 08        BHI    $0141
8ca6: ec 88 15     LDD    $15,X
8ca9: ca 04        ORB    #$04
8cab: ed 88 15     STD    $15,X
8cae: ec 88 15     LDD    $15,X
8cb1: 85 10        BITA   #$10
8cb3: 27 50        BEQ    $0198
8cb5: ec 88 11     LDD    $11,X
8cb8: 85 40        BITA   #$40
8cba: 26 49        BNE    $0198
8cbc: fc 50 00     LDD    $5000
8cbf: 83 08 00     SUBD   #$0800
8cc2: 2f 41        BLE    $0198
8cc4: a6 06        LDA    $6,X
8cc6: 26 3d        BNE    $0198
8cc8: f6 4b 19     LDB    $4B19
8ccb: c1 0b        CMPB   #$0B
8ccd: 25 05        BCS    $0167
8ccf: ce 8d 99     LDU    #$8D99
8cd2: 20 07        BRA    $016E
8cd4: 58           ASLB
8cd5: 58           ASLB
8cd6: ce 8d 71     LDU    #$8D71
8cd9: 33 c5        LEAU   B,U
8cdb: 96 43        LDA    <$43
8cdd: a4 c4        ANDA   ,U
8cdf: 26 24        BNE    $0198
8ce1: b6 47 03     LDA    $4703
8ce4: a1 41        CMPA   $1,U
8ce6: 23 1d        BLS    $0198
8ce8: ee 42        LDU    $2,U
8cea: a6 43        LDA    $3,U
8cec: 26 0f        BNE    $0190
8cee: 9e 5a        LDX    <$5A
8cf0: ec 88 15     LDD    $15,X
8cf3: ca 40        ORB    #$40
8cf5: ed 88 15     STD    $15,X
8cf8: bd a6 8b     JSR    $A68B
8cfb: 20 08        BRA    $0198
8cfd: 33 46        LEAU   $6,U
8cff: 11 83 49 6f  CMPU   #$496F
8d03: 25 e5        BCS    $017D
8d05: 9e 5a        LDX    <$5A
8d07: a6 88 11     LDA    $11,X
8d0a: 85 80        BITA   #$80
8d0c: 27 58        BEQ    $01F9
8d0e: 96 4f        LDA    <$4F
8d10: 26 28        BNE    $01CD
8d12: b6 50 02     LDA    $5002
8d15: 2b 05        BMI    $01AF
8d17: bd 89 79     JSR    $8979
8d1a: 20 03        BRA    $01B2
8d1c: bd 89 71     JSR    $8971
8d1f: 96 4e        LDA    <$4E
8d21: 26 17        BNE    $01CD
8d23: f6 50 04     LDB    $5004
8d26: 1d           SEX
8d27: cb 01        ADDB   #$01
8d29: c1 01        CMPB   #$01
8d2b: 23 0d        BLS    $01CD
8d2d: b8 50 02     EORA   $5002
8d30: 2b 05        BMI    $01CA
8d32: bd 89 61     JSR    $8961
8d35: 20 03        BRA    $01CD
8d37: bd 89 69     JSR    $8969
8d3a: 96 4d        LDA    <$4D
8d3c: 26 28        BNE    $01F9
8d3e: b6 50 04     LDA    $5004
8d41: 2b 05        BMI    $01DB
8d43: bd 89 51     JSR    $8951
8d46: 20 03        BRA    $01DE
8d48: bd 89 59     JSR    $8959
8d4b: 96 4e        LDA    <$4E
8d4d: 26 17        BNE    $01F9
8d4f: f6 50 02     LDB    $5002
8d52: 1d           SEX
8d53: cb 01        ADDB   #$01
8d55: c1 01        CMPB   #$01
8d57: 23 0d        BLS    $01F9
8d59: b8 50 04     EORA   $5004
8d5c: 2b 05        BMI    $01F6
8d5e: bd 89 69     JSR    $8969
8d61: 20 03        BRA    $01F9
8d63: bd 89 61     JSR    $8961
8d66: 9e 5a        LDX    <$5A
8d68: ec 88 15     LDD    $15,X
8d6b: 84 ef        ANDA   #$EF
