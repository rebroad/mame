ae60: 96 bd     LDA    <$BD
ae62: 2f 0a     BLE    $000E
ae64: 0a bd     DEC    <$BD
ae66: 86 00     LDA    #$00
ae68: 97 b7     STA    <$B7
ae6a: 97 bc     STA    <$BC
ae6c: 20 04     BRA    $0012
ae6e: 86 00     LDA    #$00
ae70: 97 bd     STA    <$BD
ae72: 86 00     LDA    #$00
ae74: 97 bc     STA    <$BC
ae76: 1a 10     ORCC   #$10
ae78: 96 31     LDA    <$31
ae7a: 27 0b     BEQ    $0027
ae7c: 7c 4b 1b  INC    $4B1B
ae7f: 0f bd     CLR    <$BD
ae81: c6 08     LDB    #$08
ae83: d7 b7     STB    <$B7
ae85: 0f 31     CLR    <$31
ae87: 96 b7     LDA    <$B7
ae89: 2f 14     BLE    $003F
ae8b: 0a b7     DEC    <$B7
ae8d: 97 bc     STA    <$BC
ae8f: dc 74     LDD    <$74
ae91: dd b8     STD    <$B8
ae93: dc 6b     LDD    <$6B
ae95: dd ba     STD    <$BA
ae97: dc 2d     LDD    <$2D
ae99: dd b3     STD    <$B3
ae9b: dc 2f     LDD    <$2F
ae9d: dd b5     STD    <$B5
ae9f: 1c ef     ANDCC  #$EF
aea1: 96 b7     LDA    <$B7
aea3: 81 07     CMPA   #$07
aea5: 26 0b     BNE    $0052
aea7: b6 4b 36  LDA    $4B36
aeaa: 26 03     BNE    $004F
aeac: 7a 4b 36  DEC    $4B36
aeaf: bd be 16  JSR    $BE16
aeb2: 86 ff     LDA    #$FF
aeb4: 97 c4     STA    <$C4
aeb6: 97 c8     STA    <$C8
aeb8: 97 cc     STA    <$CC
aeba: 97 d0     STA    <$D0
aebc: 39        RTS
aebd: 96 bc     LDA    <$BC
aebf: 9a bd     ORA    <$BD
aec1: 26 01     BNE    $0064
aec3: 39        RTS
aec4: b6 4b 1b  LDA    $4B1B
aec7: 84 01     ANDA   #$01
aec9: 27 5a     BEQ    $00C5
aecb: cc ff 98  LDD    #$FF98
aece: f3 4b 1e  ADDD   $4B1E
aed1: 84 1f     ANDA   #$1F
aed3: ed a1     STD    ,Y++
aed5: dc b5     LDD    <$B5
aed7: 83 00 00  SUBD   #$0000
aeda: b3 4b 1e  SUBD   $4B1E
aedd: dd 03     STD    <$03
aedf: cc fe 7a  LDD    #$FE7A
aee2: f3 4b 1c  ADDD   $4B1C
aee5: 84 1f     ANDA   #$1F
aee7: ed a1     STD    ,Y++
aee9: dc b3     LDD    <$B3
aeeb: 83 fe 7a  SUBD   #$FE7A
aeee: b3 4b 1c  SUBD   $4B1C
aef1: dd 01     STD    <$01
aef3: c6 00     LDB    #$00
aef5: bd af 87  JSR    $AF87
aef8: cc fd fb  LDD    #$FDFB
aefb: f3 4b 1e  ADDD   $4B1E
aefe: 84 1f     ANDA   #$1F
af00: ed a1     STD    ,Y++
af02: dc b5     LDD    <$B5
af04: 83 fe 63  SUBD   #$FE63
af07: b3 4b 1e  SUBD   $4B1E
af0a: dd 03     STD    <$03
af0c: cc fe 75  LDD    #$FE75
af0f: f3 4b 1c  ADDD   $4B1C
af12: 84 1f     ANDA   #$1F
af14: ed a1     STD    ,Y++
af16: dc b3     LDD    <$B3
af18: 83 fe 75  SUBD   #$FE75
af1b: b3 4b 1c  SUBD   $4B1C
af1e: dd 01     STD    <$01
af20: c6 08     LDB    #$08
af22: bd af 87  JSR    $AF87
af25: b6 4b 1b  LDA    $4B1B
af28: 84 01     ANDA   #$01
af2a: 26 5a     BNE    $0126
af2c: cc fd fb  LDD    #$FDFB
af2f: f3 4b 1e  ADDD   $4B1E
af32: 84 1f     ANDA   #$1F
af34: ed a1     STD    ,Y++
af36: dc b5     LDD    <$B5
af38: 83 fe 63  SUBD   #$FE63
af3b: b3 4b 1e  SUBD   $4B1E
af3e: dd 03     STD    <$03
af40: cc 01 8b  LDD    #$018B
af43: f3 4b 1c  ADDD   $4B1C
af46: 84 1f     ANDA   #$1F
af48: ed a1     STD    ,Y++
af4a: dc b3     LDD    <$B3
af4c: 83 01 8b  SUBD   #$018B
af4f: b3 4b 1c  SUBD   $4B1C
af52: dd 01     STD    <$01
af54: c6 00     LDB    #$00
af56: bd af 87  JSR    $AF87
af59: cc ff 98  LDD    #$FF98
af5c: f3 4b 1e  ADDD   $4B1E
af5f: 84 1f     ANDA   #$1F
af61: ed a1     STD    ,Y++
af63: dc b5     LDD    <$B5
af65: 83 00 00  SUBD   #$0000
af68: b3 4b 1e  SUBD   $4B1E
af6b: dd 03     STD    <$03
af6d: cc 01 86  LDD    #$0186
af70: f3 4b 1c  ADDD   $4B1C
af73: 84 1f     ANDA   #$1F
af75: ed a1     STD    ,Y++
af77: dc b3     LDD    <$B3
af79: 83 01 86  SUBD   #$0186
af7c: b3 4b 1c  SUBD   $4B1C
af7f: dd 01     STD    <$01
af81: c6 08     LDB    #$08
af83: bd af 87  JSR    $AF87
af86: 39        RTS
af87: ce b0 4f  LDU    #$B04F
af8a: 33 c5     LEAU   B,U
af8c: 96 bd     LDA    <$BD
af8e: 2f 0a     BLE    $013A
af90: c6 3f     LDB    #$3F
af92: 3d        MUL
af93: 86 63     LDA    #$63
af95: ed a1     STD    ,Y++
af97: 7e af ef  JMP    $AFEF
af9a: 8e 4c 00  LDX    #$4C00
af9d: ec c1     LDD    ,U++
af9f: ed a1     STD    ,Y++
afa1: dc 03     LDD    <$03
afa3: 2b 03     BMI    $0148
afa5: c3 00 01  ADDD   #$0001
afa8: 47        ASRA
afa9: 56        RORB
afaa: ed a4     STD    ,Y
afac: 43        COMA
afad: 50        NEGB
afae: 82 ff     SBCA   #$FF
afb0: d3 03     ADDD   <$03
afb2: dd 03     STD    <$03
afb4: ec a4     LDD    ,Y
afb6: 84 1f     ANDA   #$1F
afb8: ed a1     STD    ,Y++
afba: dc 01     LDD    <$01
afbc: 2b 03     BMI    $0161
afbe: c3 00 01  ADDD   #$0001
afc1: 47        ASRA
afc2: 56        RORB
afc3: ed a4     STD    ,Y
afc5: 43        COMA
afc6: 50        NEGB
afc7: 82 ff     SBCA   #$FF
afc9: d3 01     ADDD   <$01
afcb: dd 01     STD    <$01
afcd: ec a4     LDD    ,Y
afcf: 8a e0     ORA    #$E0
afd1: ed a1     STD    ,Y++
afd3: dc 01     LDD    <$01
afd5: c3 00 08  ADDD   #$0008
afd8: 2d c3     BLT    $013D
afda: 83 00 10  SUBD   #$0010
afdd: 2e be     BGT    $013D
afdf: dc 03     LDD    <$03
afe1: c3 00 08  ADDD   #$0008
afe4: 2d b7     BLT    $013D
afe6: 83 00 10  SUBD   #$0010
afe9: 2e b2     BGT    $013D
afeb: ec c1     LDD    ,U++
afed: ed a1     STD    ,Y++
afef: dc 03     LDD    <$03
aff1: 84 1f     ANDA   #$1F
aff3: ed a1     STD    ,Y++
aff5: dc 01     LDD    <$01
aff7: 8a e0     ORA    #$E0
aff9: ed a1     STD    ,Y++
affb: 96 bd     LDA    <$BD
affd: 2f 07     BLE    $01A6
afff: cc a0 11  LDD    #$A011
b002: ed a1     STD    ,Y++
b004: 20 3e     BRA    $01E4
b006: 2c 3c     BGE    $01E4
b008: f6 4b 22  LDB    $4B22
b00b: 86 71     LDA    #$71
b00d: ed a1     STD    ,Y++
b00f: fc 4b 20  LDD    $4B20
b012: ed a1     STD    ,Y++
b014: b6 4b 23  LDA    $4B23
b017: 84 01     ANDA   #$01
b019: 27 05     BEQ    $01C0
b01b: cc a0 1c  LDD    #$A01C
b01e: ed a1     STD    ,Y++
b020: b6 4b 23  LDA    $4B23
b023: 84 02     ANDA   #$02
b025: 27 05     BEQ    $01CC
b027: cc a0 23  LDD    #$A023
b02a: ed a1     STD    ,Y++
b02c: b6 4b 23  LDA    $4B23
b02f: 84 04     ANDA   #$04
b031: 27 05     BEQ    $01D8
b033: cc a0 2a  LDD    #$A02A
b036: ed a1     STD    ,Y++
b038: b6 4b 23  LDA    $4B23
b03b: 84 08     ANDA   #$08
b03d: 27 05     BEQ    $01E4
b03f: cc a0 31  LDD    #$A031
b042: ed a1     STD    ,Y++
b044: cc 72 00  LDD    #$7200
b047: ed a1     STD    ,Y++
b049: cc 80 40  LDD    #$8040
b04c: ed a1     STD    ,Y++
b04e: 39        RTS
b04f: a0 01     SUBA   $1,X
b051: a0 02     SUBA   $2,X
b053: a0 03     SUBA   $3,X
b055: a0 04     SUBA   $4,X
b057: a0 05     SUBA   $5,X
b059: a0 06     SUBA   $6,X
b05b: a0 07     SUBA   $7,X
b05d: a0 08     SUBA   $8,X
b05f: a0 96     SUBA   $0,X
