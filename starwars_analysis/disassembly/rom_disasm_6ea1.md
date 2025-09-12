6ea1: 39           RTS
6ea2: be 4b 32     LDX    $4B32
6ea5: 26 03        BNE    $6EAA
6ea7: 8e 49 00     LDX    #$4900
6eaa: a6 03        LDA    $3,X
6eac: 81 01        CMPA   #$01
6eae: 26 09        BNE    $6EB9
6eb0: a6 06        LDA    $6,X
6eb2: 26 05        BNE    $6EB9
6eb4: 9f 64        STX    <$64
6eb6: 7e 6e f7     JMP    $6EF7
6eb9: b6 4b 3c     LDA    $4B3C
6ebc: 2f 05        BLE    $6EC3
6ebe: 86 09        LDA    #$09
6ec0: b7 4b 3c     STA    $4B3C
6ec3: 30 88 19     LEAX   $19,X
6ec6: 8c 49 4b     CMPX   #$494B
6ec9: 25 df        BCS    $6EAA
6ecb: cc 00 00     LDD    #$0000
6ece: fd 4b 32     STD    $4B32
6ed1: b6 50 80     LDA    $5080
6ed4: 2b 05        BMI    $6EDB
6ed6: f6 50 84     LDB    $5084
6ed9: 20 05        BRA    $6EE0
6edb: c6 7f        LDB    #$7F
6edd: f0 50 84     SUBB   $5084
6ee0: f7 48 6d     STB    $486D
6ee3: b6 50 80     LDA    $5080
6ee6: 2b 05        BMI    $6EED
6ee8: f6 50 82     LDB    $5082
6eeb: 20 05        BRA    $6EF2
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
6f14: 2f 23        BLE    $6F39
6f16: fc 50 02     LDD    $5002
6f19: 78 50 01     ASL    $5001
6f1c: 79 50 00     ROL    $5000
6f1f: 29 33        BVS    $6F54
6f21: 58           ASLB
6f22: 49           ROLA
6f23: 28 04        BVC    $6F29
6f25: 46           RORA
6f26: 56           RORB
6f27: 20 2b        BRA    $6F54
6f29: 78 50 05     ASL    $5005
6f2c: 79 50 04     ROL    $5004
6f2f: 28 e8        BVC    $6F19
6f31: 76 50 04     ROR    $5004
6f34: 76 50 05     ROR    $5005
6f37: 20 1b        BRA    $6F54
6f39: fc 50 02     LDD    $5002
6f3c: ca 01        ORB    #$01
6f3e: 58           ASLB
6f3f: 49           ROLA
6f40: 28 04        BVC    $6F46
6f42: 46           RORA
6f43: 56           RORB
6f44: 20 0e        BRA    $6F54
6f46: 78 50 05     ASL    $5005
6f49: 79 50 04     ROL    $5004
6f4c: 28 f0        BVC    $6F3E
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
6f75: 28 06        BVC    $6F7D
6f77: 0c a7        INC    <$A7
6f79: 28 02        BVC    $6F7D
6f7b: 0a a7        DEC    <$A7
6f7d: fd 50 98     STD    $5098
6f80: fd 50 40     STD    $5040
6f83: fc 50 86     LDD    $5086
6f86: bd cd b1     JSR    $CDB1
6f89: d6 7d        LDB    <$7D
6f8b: 2a 01        BPL    $6F8E
6f8d: 53           COMB
6f8e: 58           ASLB
6f8f: 3d           MUL
6f90: 0d 7d        TST    <$7D
6f92: 2c 04        BGE    $6F98
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
6faf: 2a 01        BPL    $6FB2
6fb1: 53           COMB
6fb2: 12           NOP
6fb3: 3d           MUL
6fb4: 0d 7f        TST    <$7F
6fb6: 2a 04        BPL    $6FBC
6fb8: 43           COMA
6fb9: 50           NEGB
6fba: 82 ff        SBCA   #$FF
6fbc: bd cd a0     JSR    $CDA0
6fbf: fd 50 96     STD    $5096
6fc2: f3 50 9c     ADDD   $509C
6fc5: 10 83 1c 00  CMPD   #$1C00
6fc9: 2f 05        BLE    $6FD0
6fcb: cc 1c 00     LDD    #$1C00
6fce: 20 09        BRA    $6FD9
6fd0: 10 83 02 00  CMPD   #$0200
6fd4: 2c 03        BGE    $6FD9
6fd6: cc 02 00     LDD    #$0200
6fd9: fd 50 9c     STD    $509C
6fdc: fd 50 44     STD    $5044
6fdf: 39           RTS
6fe0: fc 50 9c     LDD    $509C
6fe3: 10 83 03 80  CMPD   #$0380
6fe7: 2f 06        BLE    $6FEF
6fe9: 83 01 80     SUBD   #$0180
6fec: fd 50 9c     STD    $509C
6fef: 20 0f        BRA    $7000
6ff1: fc 50 9c     LDD    $509C
6ff4: 10 83 f3 00  CMPD   #$F300
6ff8: 2f 06        BLE    $7000
6ffa: 83 01 00     SUBD   #$0100
6ffd: fd 50 9c     STD    $509C
7000: fc 50 86     LDD    $5086
7003: f3 50 98     ADDD   $5098
7006: fd 50 98     STD    $5098
7009: cc 03 00     LDD    #$0300
700c: b3 50 86     SUBD   $5086
700f: bd cd a2     JSR    $CDA2
7012: f3 50 86     ADDD   $5086
7015: fd 50 86     STD    $5086
7018: b6 4b 15     LDA    $4B15
701b: 44           LSRA
701c: 24 05        BCC    $7023
701e: cc 0b b8     LDD    #$0BB8
7021: 20 03        BRA    $7026
7023: cc f4 48     LDD    #$F448
7026: fd 50 22     STD    $5022
7029: cc 3e eb     LDD    #$3EEB
702c: fd 50 24     STD    $5024
702f: bd ce 24     JSR    $CE24
7032: cc 00 00     LDD    #$0000
7035: 93 a3        SUBD   <$A3
7037: bd 6e 70     JSR    $6E70
703a: 39           RTS
703b: fc 50 86     LDD    $5086
703e: f3 50 98     ADDD   $5098
7041: fd 50 98     STD    $5098
7044: fd 50 40     STD    $5040
7047: fc 50 86     LDD    $5086
704a: bd cd b1     JSR    $CDB1
704d: d6 7d        LDB    <$7D
704f: 2a 01        BPL    $7052
7051: 53           COMB
7052: 3d           MUL
7053: 0d 7d        TST    <$7D
7055: 2c 04        BGE    $705B
7057: 43           COMA
7058: 50           NEGB
7059: 82 ff        SBCA   #$FF
705b: bd cd a0     JSR    $CDA0
705e: fd 50 8e     STD    $508E
7061: f3 50 9a     ADDD   $509A
7064: 10 83 01 ff  CMPD   #$01FF
7068: 2f 03        BLE    $706D
706a: cc 01 ff     LDD    #$01FF
706d: 10 83 fe 01  CMPD   #$FE01
7071: 2c 03        BGE    $7076
7073: cc fe 01     LDD    #$FE01
7076: fd 50 9a     STD    $509A
7079: fd 50 42     STD    $5042
707c: fc 50 86     LDD    $5086
707f: 58           ASLB
7080: 49           ROLA
7081: 58           ASLB
7082: 49           ROLA
7083: 58           ASLB
7084: 49           ROLA
7085: 58           ASLB
7086: 49           ROLA
7087: d6 7f        LDB    <$7F
7089: 2a 01        BPL    $708C
708b: 53           COMB
708c: 58           ASLB
708d: 3d           MUL
708e: 0d 7f        TST    <$7F
7090: 2a 04        BPL    $7096
7092: 43           COMA
7093: 50           NEGB
7094: 82 ff        SBCA   #$FF
7096: 47           ASRA
7097: 56           RORB
7098: 47           ASRA
7099: 56           RORB
709a: 47           ASRA
709b: 56           RORB
709c: 47           ASRA
709d: 56           RORB
709e: fd 50 96     STD    $5096
