6dc0: fc 4b 26     LDD    $4B26
6dc3: c3 00 80     ADDD   #$0080
6dc6: fd 4b 26     STD    $4B26
6dc9: 39           RTS
6dca: dc 89        LDD    <$89
6dcc: c3 00 80     ADDD   #$0080
6dcf: dd 89        STD    <$89
6dd1: 39           RTS
6dd2: 96 63        LDA    <$63
6dd4: 27 1a        BEQ    $0030
6dd6: 2f 07        BLE    $001F
6dd8: 0a 63        DEC    <$63
6dda: cc 04 ff     LDD    #$04FF
6ddd: 20 05        BRA    $0024
6ddf: 0c 63        INC    <$63
6de1: cc fb 01     LDD    #$FB01
6de4: fd 50 22     STD    $5022
6de7: cc 3f ce     LDD    #$3FCE
6dea: fd 50 24     STD    $5024
6ded: bd ce 24     JSR    $CE24
6df0: bd 6e a2     JSR    $6EA2
6df3: bd 70 bd     JSR    $70BD
6df6: bd 70 cc     JSR    $70CC
6df9: 39           RTS
6dfa: 96 63        LDA    <$63
6dfc: 27 1a        BEQ    $0058
6dfe: 2f 07        BLE    $0047
6e00: 0a 63        DEC    <$63
6e02: cc 04 ff     LDD    #$04FF
6e05: 20 05        BRA    $004C
6e07: 0c 63        INC    <$63
6e09: cc fb 01     LDD    #$FB01
6e0c: fd 50 22     STD    $5022
6e0f: cc 3f ce     LDD    #$3FCE
6e12: fd 50 24     STD    $5024
6e15: bd ce 24     JSR    $CE24
6e18: bd 6e cb     JSR    $6ECB
6e1b: bd 70 bd     JSR    $70BD
6e1e: bd 70 cc     JSR    $70CC
6e21: 39           RTS
6e22: 96 63        LDA    <$63
6e24: 27 08        BEQ    $006E
6e26: 2f 03        BLE    $006B
6e28: 4a           DECA
6e29: 20 01        BRA    $006C
6e2b: 4c           INCA
6e2c: 97 63        STA    <$63
6e2e: 96 63        LDA    <$63
6e30: 2a 01        BPL    $0073
6e32: 40           NEGA
6e33: c6 20        LDB    #$20
6e35: 3d           MUL
6e36: 0d 63        TST    <$63
6e38: 2a 04        BPL    $007E
6e3a: 43           COMA
6e3b: 50           NEGB
6e3c: 82 ff        SBCA   #$FF
6e3e: dd a5        STD    <$A5
6e40: 96 7d        LDA    <$7D
6e42: 2a 01        BPL    $0085
6e44: 43           COMA
6e45: c6 02        LDB    #$02
6e47: 3d           MUL
6e48: 0d 7d        TST    <$7D
6e4a: 2a 04        BPL    $0090
6e4c: 43           COMA
6e4d: 50           NEGB
6e4e: 82 ff        SBCA   #$FF
6e50: d3 a5        ADDD   <$A5
6e52: 0d 63        TST    <$63
6e54: 26 1a        BNE    $00B0
6e56: 93 a3        SUBD   <$A3
6e58: 2f 0b        BLE    $00A5
6e5a: 10 83 00 10  CMPD   #$0010
6e5e: 2f 03        BLE    $00A3
6e60: cc 00 10     LDD    #$0010
6e63: 20 09        BRA    $00AE
6e65: 10 83 ff f0  CMPD   #$FFF0
6e69: 2c 03        BGE    $00AE
6e6b: cc ff f0     LDD    #$FFF0
6e6e: 20 18        BRA    $00C8
6e70: 93 a3        SUBD   <$A3
6e72: 2f 0b        BLE    $00BF
6e74: 10 83 00 32  CMPD   #$0032
6e78: 2f 03        BLE    $00BD
6e7a: cc 00 32     LDD    #$0032
6e7d: 20 09        BRA    $00C8
6e7f: 10 83 ff ce  CMPD   #$FFCE
6e83: 2c 03        BGE    $00C8
6e85: cc ff ce     LDD    #$FFCE
6e88: 1f 98        TFR    B,A
6e8a: bb 48 78     ADDA   $4878
6e8d: b7 48 78     STA    $4878
6e90: 1d           SEX
6e91: d3 a3        ADDD   <$A3
6e93: dd a3        STD    <$A3
6e95: 8e 48 70     LDX    #$4870
6e98: bd 71 11     JSR    $7111
6e9b: 27 03        BEQ    $00E0
6e9d: bd ce 24     JSR    $CE24
6ea0: 39           RTS
6ea1: 39           RTS
6ea2: be 4b 32     LDX    $4B32
6ea5: 26 03        BNE    $00EA
6ea7: 8e 49 00     LDX    #$4900
6eaa: a6 03        LDA    $3,X
6eac: 81 01        CMPA   #$01
6eae: 26 09        BNE    $00F9
6eb0: a6 06        LDA    $6,X
6eb2: 26 05        BNE    $00F9
6eb4: 9f 64        STX    <$64
6eb6: 7e 6e f7     JMP    $6EF7
6eb9: b6 4b 3c     LDA    $4B3C
6ebc: 2f 05        BLE    $0103
6ebe: 86 09        LDA    #$09
6ec0: b7 4b 3c     STA    $4B3C
6ec3: 30 88 19     LEAX   $19,X
6ec6: 8c 49 4b     CMPX   #$494B
6ec9: 25 df        BCS    $00EA
6ecb: cc 00 00     LDD    #$0000
6ece: fd 4b 32     STD    $4B32
6ed1: b6 50 80     LDA    $5080
6ed4: 2b 05        BMI    $011B
6ed6: f6 50 84     LDB    $5084
6ed9: 20 05        BRA    $0120
6edb: c6 7f        LDB    #$7F
6edd: f0 50 84     SUBB   $5084
6ee0: f7 48 6d     STB    $486D
6ee3: b6 50 80     LDA    $5080
6ee6: 2b 05        BMI    $012D
6ee8: f6 50 82     LDB    $5082
6eeb: 20 05        BRA    $0132
6eed: c6 7f        LDB    #$7F
6eef: f0 50 82     SUBB   $5082
6ef2: 53           COMB
6ef3: f7 48 76     STB    $4876
6ef6: 39           RTS
6ef7: 86 10        LDA    #$10
6ef9: bd ce 0c     JSR    $CE0C
6efc: bd 71 60     JSR    $7160
6eff: 9e 64        LDX    <$64
6f01: bf 4b 32     STX    $4B32
6f04: 4f           CLRA
6f05: e6 02        LDB    $2,X
6f07: cb 03        ADDB   #$03
6f09: fd 47 01     STD    $4701
6f0c: 86 67        LDA    #$67
6f0e: bd cd ba     JSR    $CDBA
6f11: b6 50 00     LDA    $5000
6f14: 2f 23        BLE    $0179
6f16: fc 50 02     LDD    $5002
6f19: 78 50 01     ASL    $5001
6f1c: 79 50 00     ROL    $5000
6f1f: 29 33        BVS    $0194
6f21: 58           ASLB
6f22: 49           ROLA
6f23: 28 04        BVC    $0169
6f25: 46           RORA
6f26: 56           RORB
6f27: 20 2b        BRA    $0194
6f29: 78 50 05     ASL    $5005
6f2c: 79 50 04     ROL    $5004
6f2f: 28 e8        BVC    $0159
6f31: 76 50 04     ROR    $5004
6f34: 76 50 05     ROR    $5005
6f37: 20 1b        BRA    $0194
6f39: fc 50 02     LDD    $5002
6f3c: ca 01        ORB    #$01
6f3e: 58           ASLB
6f3f: 49           ROLA
6f40: 28 04        BVC    $0186
6f42: 46           RORA
6f43: 56           RORB
6f44: 20 0e        BRA    $0194
6f46: 78 50 05     ASL    $5005
6f49: 79 50 04     ROL    $5004
6f4c: 28 f0        BVC    $017E
6f4e: 76 50 04     ROR    $5004
6f51: 76 50 05     ROR    $5005
6f54: 43           COMA
6f55: b7 48 76     STA    $4876
6f58: f6 50 04     LDB    $5004
6f5b: f7 48 6d     STB    $486D
6f5e: 39           RTS
6f5f: dc 42        LDD    <$42
6f61: bd cd ab     JSR    $CDAB
6f64: dd 89        STD    <$89
6f66: 39           RTS
6f67: dc 42        LDD    <$42
6f69: bd cd a9     JSR    $CDA9
6f6c: dd 89        STD    <$89
6f6e: 39           RTS
6f6f: fc 50 86     LDD    $5086
6f72: f3 50 98     ADDD   $5098
6f75: 28 06        BVC    $01BD
6f77: 0c a7        INC    <$A7
6f79: 28 02        BVC    $01BD
6f7b: 0a a7        DEC    <$A7
6f7d: fd 50 98     STD    $5098
6f80: fd 50 40     STD    $5040
6f83: fc 50 86     LDD    $5086
6f86: bd cd b1     JSR    $CDB1
6f89: d6 7d        LDB    <$7D
6f8b: 2a 01        BPL    $01CE
6f8d: 53           COMB
6f8e: 58           ASLB
6f8f: 3d           MUL
6f90: 0d 7d        TST    <$7D
6f92: 2c 04        BGE    $01D8
6f94: 43           COMA
6f95: 50           NEGB
6f96: 82 ff        SBCA   #$FF
6f98: bd cd a0     JSR    $CDA0
6f9b: fd 50 8e     STD    $508E
6f9e: f3 50 9a     ADDD   $509A
6fa1: fd 50 9a     STD    $509A
6fa4: fd 50 42     STD    $5042
6fa7: fc 50 86     LDD    $5086
6faa: bd cd b1     JSR    $CDB1
6fad: d6 7f        LDB    <$7F
6faf: 2a 01        BPL    $01F2
6fb1: 53           COMB
6fb2: 12           NOP
6fb3: 3d           MUL
6fb4: 0d 7f        TST    <$7F
6fb6: 2a 04        BPL    $01FC
6fb8: 43           COMA
6fb9: 50           NEGB
6fba: 82 ff        SBCA   #$FF
6fbc: bd cd a0     JSR    $CDA0
6fbf: fd fc 4b     STD    >$0000
