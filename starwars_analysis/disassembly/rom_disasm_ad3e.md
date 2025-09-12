ad3e: 86 01        LDA    #$01
ad40: 97 45        STA    <$45
ad42: fc 50 98     LDD    $5098
ad45: c3 01 00     ADDD   #$0100
ad48: dd 46        STD    <$46
ad4a: fc 50 9a     LDD    $509A
ad4d: dd 48        STD    <$48
ad4f: fc 50 9c     LDD    $509C
ad52: dd 4a        STD    <$4A
ad54: 8e 49 4b     LDX    #$494B
ad57: 9f ca        STX    <$CA
ad59: bd ad 20     JSR    $AD20
ad5c: 9e ca        LDX    <$CA
ad5e: 30 06        LEAX   $6,X
ad60: 8c 49 6f     CMPX   #$496F
ad63: 25 f2        BCS    $0019
ad65: bd bd a3     JSR    $BDA3
ad68: bd bd d5     JSR    $BDD5
ad6b: 39           RTS
ad6c: 96 45        LDA    <$45
ad6e: 27 3e        BEQ    $0070
ad70: dc 46        LDD    <$46
ad72: c3 03 00     ADDD   #$0300
ad75: f3 50 86     ADDD   $5086
ad78: 10 93 96     CMPD   <$96
ad7b: 2b 02        BMI    $0041
ad7d: dc 96        LDD    <$96
ad7f: dd 46        STD    <$46
ad81: dc 96        LDD    <$96
ad83: 93 46        SUBD   <$46
ad85: 83 10 00     SUBD   #$1000
ad88: 10 93 4a     CMPD   <$4A
ad8b: 2c 02        BGE    $0051
ad8d: dd 4a        STD    <$4A
ad8f: dc 96        LDD    <$96
ad91: 93 46        SUBD   <$46
ad93: bd cd a0     JSR    $CDA0
ad96: 0d 48        TST    <$48
ad98: 2b 09        BMI    $0065
ad9a: 10 93 48     CMPD   <$48
ad9d: 2c 02        BGE    $0063
ad9f: dd 48        STD    <$48
ada1: 20 0b        BRA    $0070
ada3: 43           COMA
ada4: 50           NEGB
ada5: 82 ff        SBCA   #$FF
ada7: 10 93 48     CMPD   <$48
adaa: 2f 02        BLE    $0070
adac: dd 48        STD    <$48
adae: 39           RTS
adaf: 96 45        LDA    <$45
adb1: 27 20        BEQ    $0095
adb3: dc 46        LDD    <$46
adb5: fd 50 78     STD    $5078
adb8: dc 48        LDD    <$48
adba: c3 00 80     ADDD   #$0080
adbd: fd 50 7a     STD    $507A
adc0: dc 4a        LDD    <$4A
adc2: fd 50 7c     STD    $507C
adc5: bd ad d4     JSR    $ADD4
adc8: dc 48        LDD    <$48
adca: 83 00 80     SUBD   #$0080
adcd: fd 50 7a     STD    $507A
add0: bd ad d4     JSR    $ADD4
add3: 39           RTS
add4: cc 00 0f     LDD    #$000F
add7: fd 47 01     STD    $4701
adda: 86 67        LDA    #$67
addc: bd cd ba     JSR    $CDBA
addf: fc 50 00     LDD    $5000
ade2: 83 e0 00     SUBD   #$E000
ade5: 2e 04        BGT    $00AD
ade7: 86 00        LDA    #$00
ade9: 97 45        STA    <$45
adeb: fc 50 00     LDD    $5000
adee: 10 83 00 01  CMPD   #$0001
adf2: 2d 6b        BLT    $0121
adf4: fd 47 04     STD    $4704
adf7: fd 50 18     STD    $5018
adfa: fc 50 02     LDD    $5002
adfd: 2a 04        BPL    $00C5
adff: 43           COMA
ae00: 50           NEGB
ae01: 82 ff        SBCA   #$FF
ae03: b3 50 00     SUBD   $5000
ae06: 2c 57        BGE    $0121
ae08: fc 50 04     LDD    $5004
ae0b: 2a 04        BPL    $00D3
ae0d: 43           COMA
ae0e: 50           NEGB
ae0f: 82 ff        SBCA   #$FF
ae11: b3 50 00     SUBD   $5000
ae14: 2c 49        BGE    $0121
ae16: fc 47 00     LDD    $4700
ae19: fd 50 00     STD    $5000
ae1c: 86 86        LDA    #$86
ae1e: bd cd ba     JSR    $CDBA
ae21: fc 50 04     LDD    $5004
ae24: c3 ff 98     ADDD   #$FF98
ae27: 84 1f        ANDA   #$1F
ae29: ed a1        STD    ,Y++
ae2b: fc 50 02     LDD    $5002
ae2e: 84 1f        ANDA   #$1F
ae30: ed a1        STD    ,Y++
ae32: cc 63 ff     LDD    #$63FF
ae35: ed a1        STD    ,Y++
ae37: 86 06        LDA    #$06
ae39: 97 01        STA    <$01
ae3b: fc 50 18     LDD    $5018
ae3e: 0a 01        DEC    <$01
ae40: 27 06        BEQ    $010A
ae42: 58           ASLB
ae43: 49           ROLA
ae44: 2a f8        BPL    $0100
ae46: 84 7f        ANDA   #$7F
ae48: d6 01        LDB    <$01
ae4a: ca 70        ORB    #$70
ae4c: e7 a0        STB    ,Y+
ae4e: a7 a0        STA    ,Y+
ae50: cc a0 16     LDD    #$A016
ae53: ed a1        STD    ,Y++
ae55: cc 72 00     LDD    #$7200
ae58: ed a1        STD    ,Y++
ae5a: cc 80 40     LDD    #$8040
ae5d: ed a1        STD    ,Y++
ae5f: 39           RTS
ae60: 96 bd        LDA    <$BD
ae62: 2f 0a        BLE    $0130
ae64: 0a bd        DEC    <$BD
ae66: 86 00        LDA    #$00
ae68: 97 b7        STA    <$B7
ae6a: 97 bc        STA    <$BC
ae6c: 20 04        BRA    $0134
ae6e: 86 00        LDA    #$00
ae70: 97 bd        STA    <$BD
ae72: 86 00        LDA    #$00
ae74: 97 bc        STA    <$BC
ae76: 1a 10        ORCC   #$10
ae78: 96 31        LDA    <$31
ae7a: 27 0b        BEQ    $0149
ae7c: 7c 4b 1b     INC    $4B1B
ae7f: 0f bd        CLR    <$BD
ae81: c6 08        LDB    #$08
ae83: d7 b7        STB    <$B7
ae85: 0f 31        CLR    <$31
ae87: 96 b7        LDA    <$B7
ae89: 2f 14        BLE    $0161
ae8b: 0a b7        DEC    <$B7
ae8d: 97 bc        STA    <$BC
ae8f: dc 74        LDD    <$74
ae91: dd b8        STD    <$B8
ae93: dc 6b        LDD    <$6B
ae95: dd ba        STD    <$BA
ae97: dc 2d        LDD    <$2D
ae99: dd b3        STD    <$B3
ae9b: dc 2f        LDD    <$2F
ae9d: dd b5        STD    <$B5
ae9f: 1c ef        ANDCC  #$EF
aea1: 96 b7        LDA    <$B7
aea3: 81 07        CMPA   #$07
aea5: 26 0b        BNE    $0174
aea7: b6 4b 36     LDA    $4B36
aeaa: 26 03        BNE    $0171
aeac: 7a 4b 36     DEC    $4B36
aeaf: bd be 16     JSR    $BE16
aeb2: 86 ff        LDA    #$FF
aeb4: 97 c4        STA    <$C4
aeb6: 97 c8        STA    <$C8
aeb8: 97 cc        STA    <$CC
aeba: 97 d0        STA    <$D0
aebc: 39           RTS
aebd: 96 bc        LDA    <$BC
aebf: 9a bd        ORA    <$BD
aec1: 26 01        BNE    $0186
aec3: 39           RTS
aec4: b6 4b 1b     LDA    $4B1B
aec7: 84 01        ANDA   #$01
aec9: 27 5a        BEQ    $01E7
aecb: cc ff 98     LDD    #$FF98
aece: f3 4b 1e     ADDD   $4B1E
aed1: 84 1f        ANDA   #$1F
aed3: ed a1        STD    ,Y++
aed5: dc b5        LDD    <$B5
aed7: 83 00 00     SUBD   #$0000
aeda: b3 4b 1e     SUBD   $4B1E
aedd: dd 03        STD    <$03
aedf: cc fe 7a     LDD    #$FE7A
aee2: f3 4b 1c     ADDD   $4B1C
aee5: 84 1f        ANDA   #$1F
aee7: ed a1        STD    ,Y++
aee9: dc b3        LDD    <$B3
aeeb: 83 fe 7a     SUBD   #$FE7A
aeee: b3 4b 1c     SUBD   $4B1C
aef1: dd 01        STD    <$01
aef3: c6 00        LDB    #$00
aef5: bd af 87     JSR    $AF87
aef8: cc fd fb     LDD    #$FDFB
aefb: f3 4b 1e     ADDD   $4B1E
aefe: 84 1f        ANDA   #$1F
af00: ed a1        STD    ,Y++
af02: dc b5        LDD    <$B5
af04: 83 fe 63     SUBD   #$FE63
af07: b3 4b 1e     SUBD   $4B1E
af0a: dd 03        STD    <$03
af0c: cc fe 75     LDD    #$FE75
af0f: f3 4b 1c     ADDD   $4B1C
af12: 84 1f        ANDA   #$1F
af14: ed a1        STD    ,Y++
af16: dc b3        LDD    <$B3
af18: 83 fe 75     SUBD   #$FE75
af1b: b3 4b 1c     SUBD   $4B1C
af1e: dd 01        STD    <$01
af20: c6 08        LDB    #$08
af22: bd af 87     JSR    $AF87
af25: b6 4b 1b     LDA    $4B1B
af28: 84 01        ANDA   #$01
af2a: 26 5a        BNE    $0248
af2c: cc fd fb     LDD    #$FDFB
af2f: f3 4b 1e     ADDD   $4B1E
af32: 84 1f        ANDA   #$1F
af34: ed a1        STD    ,Y++
af36: dc b5        LDD    <$B5
af38: 83 fe 63     SUBD   #$FE63
af3b: b3 4b 1e     SUBD   $4B1E
