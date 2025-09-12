aebd: 96 bc     LDA    <$BC
aebf: 9a bd     ORA    <$BD
aec1: 26 01     BNE    $0007
aec3: 39        RTS
aec4: b6 4b 1b  LDA    $4B1B
aec7: 84 01     ANDA   #$01
aec9: 27 5a     BEQ    $0068
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
af2a: 26 5a     BNE    $00C9
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
af8e: 2f 0a     BLE    $00DD
af90: c6 3f     LDB    #$3F
af92: 3d        MUL
af93: 86 63     LDA    #$63
af95: ed a1     STD    ,Y++
af97: 7e af ef  JMP    $AFEF
af9a: 8e 4c 00  LDX    #$4C00
af9d: ec c1     LDD    ,U++
af9f: ed a1     STD    ,Y++
afa1: dc 03     LDD    <$03
afa3: 2b 03     BMI    $00EB
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
afbc: 2b 03     BMI    $0104
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
afd8: 2d c3     BLT    $00E0
afda: 83 00 10  SUBD   #$0010
afdd: 2e be     BGT    $00E0
afdf: dc 03     LDD    <$03
afe1: c3 00 08  ADDD   #$0008
afe4: 2d b7     BLT    $00E0
afe6: 83 00 10  SUBD   #$0010
afe9: 2e b2     BGT    $00E0
afeb: ec c1     LDD    ,U++
afed: ed a1     STD    ,Y++
afef: dc 03     LDD    <$03
aff1: 84 1f     ANDA   #$1F
aff3: ed a1     STD    ,Y++
aff5: dc 01     LDD    <$01
aff7: 8a e0     ORA    #$E0
aff9: ed a1     STD    ,Y++
affb: 96 bd     LDA    <$BD
affd: 2f 07     BLE    $0149
afff: cc a0 11  LDD    #$A011
b002: ed a1     STD    ,Y++
b004: 20 3e     BRA    $0187
b006: 2c 3c     BGE    $0187
b008: f6 4b 22  LDB    $4B22
b00b: 86 71     LDA    #$71
b00d: ed a1     STD    ,Y++
b00f: fc 4b 20  LDD    $4B20
b012: ed a1     STD    ,Y++
b014: b6 4b 23  LDA    $4B23
b017: 84 01     ANDA   #$01
b019: 27 05     BEQ    $0163
b01b: cc a0 1c  LDD    #$A01C
b01e: ed a1     STD    ,Y++
b020: b6 4b 23  LDA    $4B23
b023: 84 02     ANDA   #$02
b025: 27 05     BEQ    $016F
b027: cc a0 23  LDD    #$A023
b02a: ed a1     STD    ,Y++
b02c: b6 4b 23  LDA    $4B23
b02f: 84 04     ANDA   #$04
b031: 27 05     BEQ    $017B
b033: cc a0 2a  LDD    #$A02A
b036: ed a1     STD    ,Y++
b038: b6 4b 23  LDA    $4B23
b03b: 84 08     ANDA   #$08
b03d: 27 05     BEQ    $0187
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
b05f: a0 09     SUBA   $9,X
b061: a0 0a     SUBA   $A,X
b063: a0 0b     SUBA   $B,X
b065: a0 0c     SUBA   $C,X
b067: a0 0d     SUBA   $D,X
b069: a0 0e     SUBA   $E,X
b06b: a0 0f     SUBA   $F,X
b06d: a0 10     SUBA   -$10,X
b06f: a0 01     SUBA   $1,X
b071: 96 bc     LDA    <$BC
b073: 27 1f     BEQ    $01D7
b075: bd b0 95  JSR    $B095
b078: cc 02 00  LDD    #$0200
b07b: fd 47 06  STD    $4706
b07e: dc cc     LDD    <$CC
b080: 2b 07     BMI    $01CC
b082: 86 04     LDA    #$04
b084: 97 bd     STA    <$BD
b086: bd ad 20  JSR    $AD20
b089: 96 44     LDA    <$44
b08b: 2f 07     BLE    $01D7
b08d: 86 ff     LDA    #$FF
b08f: 97 44     STA    <$44
b091: bd ad 3e  JSR    $AD3E
b094: 39        RTS
b095: cc 70 00  LDD    #$7000
b098: f3 50 40  ADDD   $5040
b09b: dd 01     STD    <$01
b09d: cc 00 00  LDD    #$0000
b0a0: 93 b8     SUBD   <$B8
b0a2: bd cd a2  JSR    $CDA2
b0a5: d3 b8     ADDD   <$B8
b0a7: f3 50 42  ADDD   $5042
b0aa: dd 03     STD    <$03
b0ac: cc 00 00  LDD    #$0000
b0af: 93 ba     SUBD   <$BA
b0b1: bd cd a2  JSR    $CDA2
b0b4: d3 ba     ADDD   <$BA
b0b6: f3 50 44  ADDD   $5044
b0b9: dd 05     STD    <$05
b0bb: cc f0 96  LDD    #$F000
