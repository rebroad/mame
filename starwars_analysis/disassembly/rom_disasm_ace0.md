ace0: ee 84        LDU    ,X
ace2: ec 3c        LDD    -$4,Y
ace4: ed c4        STD    ,U
ace6: ec 3e        LDD    -$2,Y
ace8: ed 42        STD    $2,U
acea: 86 10        LDA    #$10
acec: a7 03        STA    $3,X
acee: 86 0f        LDA    #$0F
acf0: a7 05        STA    $5,X
acf2: 86 00        LDA    #$00
acf4: a7 04        STA    $4,X
acf6: bd 98 74     JSR    $9874
acf9: 96 63        LDA    <$63
acfb: 26 03        BNE    $AD00
acfd: b6 47 03     LDA    $4703
ad00: c6 20        LDB    #$20
ad02: 4d           TSTA
ad03: 2a 01        BPL    $AD06
ad05: 50           NEGB
ad06: d7 63        STB    <$63
ad08: bd bd f3     JSR    $BDF3
ad0b: b6 4b 37     LDA    $4B37
ad0e: 26 0f        BNE    $AD1F
ad10: 7c 4b 37     INC    $4B37
ad13: 96 60        LDA    <$60
ad15: 81 03        CMPA   #$03
ad17: 23 06        BLS    $AD1F
ad19: bd bd 21     JSR    $BD21
ad1c: bd bd e9     JSR    $BDE9
ad1f: 39           RTS
ad20: de ca        LDU    <$CA
ad22: a6 43        LDA    $3,U
ad24: 27 17        BEQ    $AD3D
ad26: 84 04        ANDA   #$04
ad28: 8a 20        ORA    #$20
ad2a: a7 43        STA    $3,U
ad2c: 86 0f        LDA    #$0F
ad2e: a7 45        STA    $5,U
ad30: 86 00        LDA    #$00
ad32: a7 44        STA    $4,U
ad34: bd be 07     JSR    $BE07
ad37: bd 98 01     JSR    $9801
ad3a: bd bd f8     JSR    $BDF8
ad3d: 39           RTS
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
ad63: 25 f2        BCS    $AD57
ad65: bd bd a3     JSR    $BDA3
ad68: bd bd d5     JSR    $BDD5
ad6b: 39           RTS
ad6c: 96 45        LDA    <$45
ad6e: 27 3e        BEQ    $ADAE
ad70: dc 46        LDD    <$46
ad72: c3 03 00     ADDD   #$0300
ad75: f3 50 86     ADDD   $5086
ad78: 10 93 96     CMPD   <$96
ad7b: 2b 02        BMI    $AD7F
ad7d: dc 96        LDD    <$96
ad7f: dd 46        STD    <$46
ad81: dc 96        LDD    <$96
ad83: 93 46        SUBD   <$46
ad85: 83 10 00     SUBD   #$1000
ad88: 10 93 4a     CMPD   <$4A
ad8b: 2c 02        BGE    $AD8F
ad8d: dd 4a        STD    <$4A
ad8f: dc 96        LDD    <$96
ad91: 93 46        SUBD   <$46
ad93: bd cd a0     JSR    $CDA0
ad96: 0d 48        TST    <$48
ad98: 2b 09        BMI    $ADA3
ad9a: 10 93 48     CMPD   <$48
ad9d: 2c 02        BGE    $ADA1
ad9f: dd 48        STD    <$48
ada1: 20 0b        BRA    $ADAE
ada3: 43           COMA
ada4: 50           NEGB
ada5: 82 ff        SBCA   #$FF
ada7: 10 93 48     CMPD   <$48
adaa: 2f 02        BLE    $ADAE
adac: dd 48        STD    <$48
adae: 39           RTS
adaf: 96 45        LDA    <$45
adb1: 27 20        BEQ    $ADD3
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
aedf: cc 00 00     LDD    #$0000
