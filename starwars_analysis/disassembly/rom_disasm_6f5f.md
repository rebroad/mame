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
6f75: 28 06        BVC    $001E
6f77: 0c a7        INC    <$A7
6f79: 28 02        BVC    $001E
6f7b: 0a a7        DEC    <$A7
6f7d: fd 50 98     STD    $5098
6f80: fd 50 40     STD    $5040
6f83: fc 50 86     LDD    $5086
6f86: bd cd b1     JSR    $CDB1
6f89: d6 7d        LDB    <$7D
6f8b: 2a 01        BPL    $002F
6f8d: 53           COMB
6f8e: 58           ASLB
6f8f: 3d           MUL
6f90: 0d 7d        TST    <$7D
6f92: 2c 04        BGE    $0039
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
6faf: 2a 01        BPL    $0053
6fb1: 53           COMB
6fb2: 12           NOP
6fb3: 3d           MUL
6fb4: 0d 7f        TST    <$7F
6fb6: 2a 04        BPL    $005D
6fb8: 43           COMA
6fb9: 50           NEGB
6fba: 82 ff        SBCA   #$FF
6fbc: bd cd a0     JSR    $CDA0
6fbf: fd 50 96     STD    $5096
6fc2: f3 50 9c     ADDD   $509C
6fc5: 10 83 1c 00  CMPD   #$1C00
6fc9: 2f 05        BLE    $0071
6fcb: cc 1c 00     LDD    #$1C00
6fce: 20 09        BRA    $007A
6fd0: 10 83 02 00  CMPD   #$0200
6fd4: 2c 03        BGE    $007A
6fd6: cc 02 00     LDD    #$0200
6fd9: fd 50 9c     STD    $509C
6fdc: fd 50 44     STD    $5044
6fdf: 39           RTS
6fe0: fc 50 9c     LDD    $509C
6fe3: 10 83 03 80  CMPD   #$0380
6fe7: 2f 06        BLE    $0090
6fe9: 83 01 80     SUBD   #$0180
6fec: fd 50 9c     STD    $509C
6fef: 20 0f        BRA    $00A1
6ff1: fc 50 9c     LDD    $509C
6ff4: 10 83 f3 00  CMPD   #$F300
6ff8: 2f 06        BLE    $00A1
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
701c: 24 05        BCC    $00C4
701e: cc 0b b8     LDD    #$0BB8
7021: 20 03        BRA    $00C7
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
704f: 2a 01        BPL    $00F3
7051: 53           COMB
7052: 3d           MUL
7053: 0d 7d        TST    <$7D
7055: 2c 04        BGE    $00FC
7057: 43           COMA
7058: 50           NEGB
7059: 82 ff        SBCA   #$FF
705b: bd cd a0     JSR    $CDA0
705e: fd 50 8e     STD    $508E
7061: f3 50 9a     ADDD   $509A
7064: 10 83 01 ff  CMPD   #$01FF
7068: 2f 03        BLE    $010E
706a: cc 01 ff     LDD    #$01FF
706d: 10 83 fe 01  CMPD   #$FE01
7071: 2c 03        BGE    $0117
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
7089: 2a 01        BPL    $012D
708b: 53           COMB
708c: 58           ASLB
708d: 3d           MUL
708e: 0d 7f        TST    <$7F
7090: 2a 04        BPL    $0137
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
70a1: f3 50 9c     ADDD   $509C
70a4: 10 83 fe ff  CMPD   #$FEFF
70a8: 2f 03        BLE    $014E
70aa: cc fe ff     LDD    #$FEFF
70ad: 10 83 f2 01  CMPD   #$F201
70b1: 2c 03        BGE    $0157
70b3: cc f2 01     LDD    #$F201
70b6: fd 50 9c     STD    $509C
70b9: fd 50 44     STD    $5044
70bc: 39           RTS
70bd: 8e 48 66     LDX    #$4866
70c0: bd 70 f0     JSR    $70F0
70c3: bd 71 11     JSR    $7111
70c6: 27 03        BEQ    $016C
70c8: bd ce 2f     JSR    $CE2F
70cb: 39           RTS
70cc: 8e 48 6f     LDX    #$486F
70cf: bd 70 f0     JSR    $70F0
70d2: bd 71 11     JSR    $7111
70d5: 27 03        BEQ    $017B
70d7: bd ce 3a     JSR    $CE3A
70da: 39           RTS
70db: 1a 10        ORCC   #$10
70dd: dc 6b        LDD    <$6B
70df: dd 7f        STD    <$7F
70e1: dc 74        LDD    <$74
70e3: dd 7d        STD    <$7D
70e5: dc 2f        LDD    <$2F
70e7: dd 7b        STD    <$7B
70e9: dc 2d        LDD    <$2D
70eb: dd 79        STD    <$79
70ed: 1c ef        ANDCC  #$EF
70ef: 39           RTS
70f0: a6 07        LDA    $7,X
70f2: 2a 01        BPL    $0196
70f4: 43           COMA
70f5: c6 80        LDB    #$80
70f7: 3d           MUL
70f8: 12           NOP
70f9: 12           NOP
70fa: 12           NOP
70fb: e6 07        LDB    $7,X
70fd: 2b 08        BMI    $01A8
70ff: ab 08        ADDA   $8,X
7101: 28 02        BVC    $01A6
7103: 86 7f        LDA    #$7F
7105: 20 07        BRA    $01AF
7107: 40           NEGA
7108: ab 08        ADDA   $8,X
710a: 28 02        BVC    $01AF
710c: 86 81        LDA    #$81
710e: a7 08        STA    $8,X
7110: 39           RTS
7111: a6 08        LDA    $8,X
7113: 2a 01        BPL    $01B7
7115: 40           NEGA
7116: 81 4e        CMPA   #$4E
7118: 25 20        BCS    $01DB
711a: cc 3f c2     LDD    #$3FC2
711d: fd 50 24     STD    $5024
7120: a6 08        LDA    $8,X
7122: 2a 0b        BPL    $01D0
7124: 8b 4e        ADDA   #$4E
7126: a7 08        STA    $8,X
7128: cc fa 70     LDD    #$FA70
712b: fd 50 22     STD    $5022
712e: 39           RTS
712f: 80 4e        SUBA   #$4E
7131: a7 08        STA    $8,X
7133: cc 05 90     LDD    #$0590
7136: fd 50 22     STD    $5022
7139: 39           RTS
713a: 81 0e        CMPA   #$0E
713c: 25 20        BCS    $01FF
713e: cc 3f fe     LDD    #$3FFE
7141: fd 50 24     STD    $5024
7144: a6 08        LDA    $8,X
7146: 2a 0b        BPL    $01F4
7148: 8b 0e        ADDA   #$0E
714a: a7 08        STA    $8,X
714c: cc ff 00     LDD    #$FF00
714f: fd 50 22     STD    $5022
7152: 39           RTS
7153: 80 0e        SUBA   #$0E
7155: a7 08        STA    $8,X
7157: cc 01 00     LDD    #$0100
715a: fd 50 22     STD    $5022
715d: 39           RTS
715e: 5f           CLRB
