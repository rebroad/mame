add4: cc 00 0f     LDD    #$000F
add7: fd 47 01     STD    $4701
adda: 86 67        LDA    #$67
addc: bd cd ba     JSR    $CDBA
addf: fc 50 00     LDD    $5000
ade2: 83 e0 00     SUBD   #$E000
ade5: 2e 04        BGT    $ADEB
ade7: 86 00        LDA    #$00
ade9: 97 45        STA    <$45
adeb: fc 50 00     LDD    $5000
adee: 10 83 00 01  CMPD   #$0001
adf2: 2d 6b        BLT    $AE5F
adf4: fd 47 04     STD    $4704
adf7: fd 50 18     STD    $5018
adfa: fc 50 02     LDD    $5002
adfd: 2a 04        BPL    $AE03
adff: 43           COMA
ae00: 50           NEGB
ae01: 82 ff        SBCA   #$FF
ae03: b3 50 00     SUBD   $5000
ae06: 2c 57        BGE    $AE5F
ae08: fc 50 04     LDD    $5004
ae0b: 2a 04        BPL    $AE11
ae0d: 43           COMA
ae0e: 50           NEGB
ae0f: 82 ff        SBCA   #$FF
ae11: b3 50 00     SUBD   $5000
ae14: 2c 49        BGE    $AE5F
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
ae40: 27 06        BEQ    $AE48
ae42: 58           ASLB
ae43: 49           ROLA
ae44: 2a f8        BPL    $AE3E
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
ae62: 2f 0a        BLE    $AE6E
ae64: 0a bd        DEC    <$BD
ae66: 86 00        LDA    #$00
ae68: 97 b7        STA    <$B7
ae6a: 97 bc        STA    <$BC
ae6c: 20 04        BRA    $AE72
ae6e: 86 00        LDA    #$00
ae70: 97 bd        STA    <$BD
ae72: 86 00        LDA    #$00
ae74: 97 bc        STA    <$BC
ae76: 1a 10        ORCC   #$10
ae78: 96 31        LDA    <$31
ae7a: 27 0b        BEQ    $AE87
ae7c: 7c 4b 1b     INC    $4B1B
ae7f: 0f bd        CLR    <$BD
ae81: c6 08        LDB    #$08
ae83: d7 b7        STB    <$B7
ae85: 0f 31        CLR    <$31
ae87: 96 b7        LDA    <$B7
ae89: 2f 14        BLE    $AE9F
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
aea5: 26 0b        BNE    $AEB2
aea7: b6 4b 36     LDA    $4B36
aeaa: 26 03        BNE    $AEAF
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
aec1: 26 01        BNE    $AEC4
aec3: 39           RTS
aec4: b6 4b 1b     LDA    $4B1B
aec7: 84 01        ANDA   #$01
aec9: 27 5a        BEQ    $AF25
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
af2a: 26 5a        BNE    $AF86
af2c: cc fd fb     LDD    #$FDFB
af2f: f3 4b 1e     ADDD   $4B1E
af32: 84 1f        ANDA   #$1F
af34: ed a1        STD    ,Y++
af36: dc b5        LDD    <$B5
af38: 83 fe 63     SUBD   #$FE63
af3b: b3 4b 1e     SUBD   $4B1E
af3e: dd 03        STD    <$03
af40: cc 01 8b     LDD    #$018B
af43: f3 4b 1c     ADDD   $4B1C
af46: 84 1f        ANDA   #$1F
af48: ed a1        STD    ,Y++
af4a: dc b3        LDD    <$B3
af4c: 83 01 8b     SUBD   #$018B
af4f: b3 4b 1c     SUBD   $4B1C
af52: dd 01        STD    <$01
af54: c6 00        LDB    #$00
af56: bd af 87     JSR    $AF87
af59: cc ff 98     LDD    #$FF98
af5c: f3 4b 1e     ADDD   $4B1E
af5f: 84 1f        ANDA   #$1F
af61: ed a1        STD    ,Y++
af63: dc b5        LDD    <$B5
af65: 83 00 00     SUBD   #$0000
af68: b3 4b 1e     SUBD   $4B1E
af6b: dd 03        STD    <$03
af6d: cc 01 86     LDD    #$0186
af70: f3 4b 1c     ADDD   $4B1C
af73: 84 1f        ANDA   #$1F
af75: ed a1        STD    ,Y++
af77: dc b3        LDD    <$B3
af79: 83 01 86     SUBD   #$0186
af7c: b3 4b 1c     SUBD   $4B1C
af7f: dd 01        STD    <$01
af81: c6 08        LDB    #$08
af83: bd af 87     JSR    $AF87
af86: 39           RTS
af87: ce b0 4f     LDU    #$B04F
af8a: 33 c5        LEAU   B,U
af8c: 96 bd        LDA    <$BD
af8e: 2f 0a        BLE    $AF9A
af90: c6 3f        LDB    #$3F
af92: 3d           MUL
af93: 86 63        LDA    #$63
af95: ed a1        STD    ,Y++
af97: 7e af ef     JMP    $AFEF
af9a: 8e 4c 00     LDX    #$4C00
af9d: ec c1        LDD    ,U++
af9f: ed a1        STD    ,Y++
afa1: dc 03        LDD    <$03
afa3: 2b 03        BMI    $AFA8
afa5: c3 00 01     ADDD   #$0001
afa8: 47           ASRA
afa9: 56           RORB
afaa: ed a4        STD    ,Y
afac: 43           COMA
afad: 50           NEGB
afae: 82 ff        SBCA   #$FF
afb0: d3 03        ADDD   <$03
afb2: dd 03        STD    <$03
afb4: ec a4        LDD    ,Y
afb6: 84 1f        ANDA   #$1F
afb8: ed a1        STD    ,Y++
afba: dc 01        LDD    <$01
afbc: 2b 03        BMI    $AFC1
afbe: c3 00 01     ADDD   #$0001
afc1: 47           ASRA
afc2: 56           RORB
afc3: ed a4        STD    ,Y
afc5: 43           COMA
afc6: 50           NEGB
afc7: 82 ff        SBCA   #$FF
afc9: d3 01        ADDD   <$01
afcb: dd 01        STD    <$01
afcd: ec a4        LDD    ,Y
afcf: 8a e0        ORA    #$E0
afd1: ed a1        STD    ,Y++
afd3: dc 00        LDD    <$00
