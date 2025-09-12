afef: dc 03        LDD    <$03
aff1: 84 1f        ANDA   #$1F
aff3: ed a1        STD    ,Y++
aff5: dc 01        LDD    <$01
aff7: 8a e0        ORA    #$E0
aff9: ed a1        STD    ,Y++
affb: 96 bd        LDA    <$BD
affd: 2f 07        BLE    $0017
afff: cc a0 11     LDD    #$A011
b002: ed a1        STD    ,Y++
b004: 20 3e        BRA    $0055
b006: 2c 3c        BGE    $0055
b008: f6 4b 22     LDB    $4B22
b00b: 86 71        LDA    #$71
b00d: ed a1        STD    ,Y++
b00f: fc 4b 20     LDD    $4B20
b012: ed a1        STD    ,Y++
b014: b6 4b 23     LDA    $4B23
b017: 84 01        ANDA   #$01
b019: 27 05        BEQ    $0031
b01b: cc a0 1c     LDD    #$A01C
b01e: ed a1        STD    ,Y++
b020: b6 4b 23     LDA    $4B23
b023: 84 02        ANDA   #$02
b025: 27 05        BEQ    $003D
b027: cc a0 23     LDD    #$A023
b02a: ed a1        STD    ,Y++
b02c: b6 4b 23     LDA    $4B23
b02f: 84 04        ANDA   #$04
b031: 27 05        BEQ    $0049
b033: cc a0 2a     LDD    #$A02A
b036: ed a1        STD    ,Y++
b038: b6 4b 23     LDA    $4B23
b03b: 84 08        ANDA   #$08
b03d: 27 05        BEQ    $0055
b03f: cc a0 31     LDD    #$A031
b042: ed a1        STD    ,Y++
b044: cc 72 00     LDD    #$7200
b047: ed a1        STD    ,Y++
b049: cc 80 40     LDD    #$8040
b04c: ed a1        STD    ,Y++
b04e: 39           RTS
b04f: a0 01        SUBA   $1,X
b051: a0 02        SUBA   $2,X
b053: a0 03        SUBA   $3,X
b055: a0 04        SUBA   $4,X
b057: a0 05        SUBA   $5,X
b059: a0 06        SUBA   $6,X
b05b: a0 07        SUBA   $7,X
b05d: a0 08        SUBA   $8,X
b05f: a0 09        SUBA   $9,X
b061: a0 0a        SUBA   $A,X
b063: a0 0b        SUBA   $B,X
b065: a0 0c        SUBA   $C,X
b067: a0 0d        SUBA   $D,X
b069: a0 0e        SUBA   $E,X
b06b: a0 0f        SUBA   $F,X
b06d: a0 10        SUBA   -$10,X
b06f: a0 01        SUBA   $1,X
b071: 96 bc        LDA    <$BC
b073: 27 1f        BEQ    $00A5
b075: bd b0 95     JSR    $B095
b078: cc 02 00     LDD    #$0200
b07b: fd 47 06     STD    $4706
b07e: dc cc        LDD    <$CC
b080: 2b 07        BMI    $009A
b082: 86 04        LDA    #$04
b084: 97 bd        STA    <$BD
b086: bd ad 20     JSR    $AD20
b089: 96 44        LDA    <$44
b08b: 2f 07        BLE    $00A5
b08d: 86 ff        LDA    #$FF
b08f: 97 44        STA    <$44
b091: bd ad 3e     JSR    $AD3E
b094: 39           RTS
b095: cc 70 00     LDD    #$7000
b098: f3 50 40     ADDD   $5040
b09b: dd 01        STD    <$01
b09d: cc 00 00     LDD    #$0000
b0a0: 93 b8        SUBD   <$B8
b0a2: bd cd a2     JSR    $CDA2
b0a5: d3 b8        ADDD   <$B8
b0a7: f3 50 42     ADDD   $5042
b0aa: dd 03        STD    <$03
b0ac: cc 00 00     LDD    #$0000
b0af: 93 ba        SUBD   <$BA
b0b1: bd cd a2     JSR    $CDA2
b0b4: d3 ba        ADDD   <$BA
b0b6: f3 50 44     ADDD   $5044
b0b9: dd 05        STD    <$05
b0bb: cc f0 00     LDD    #$F000
b0be: 93 05        SUBD   <$05
b0c0: 10 2d 00 94  LBLT   $0169
b0c4: fd 47 06     STD    $4706
b0c7: fc 50 44     LDD    $5044
b0ca: 93 05        SUBD   <$05
b0cc: fd 47 04     STD    $4704
b0cf: dc 03        LDD    <$03
b0d1: b3 50 42     SUBD   $5042
b0d4: fd 50 02     STD    $5002
b0d7: dc 01        LDD    <$01
b0d9: b3 50 40     SUBD   $5040
b0dc: fd 50 04     STD    $5004
b0df: fc 47 00     LDD    $4700
b0e2: fd 50 00     STD    $5000
b0e5: 86 86        LDA    #$86
b0e7: bd cd ba     JSR    $CDBA
b0ea: dc 03        LDD    <$03
b0ec: b3 50 02     SUBD   $5002
b0ef: 2b 08        BMI    $010A
b0f1: 10 83 04 00  CMPD   #$0400
b0f5: 2e 61        BGT    $0169
b0f7: 20 06        BRA    $0110
b0f9: 10 83 fc 00  CMPD   #$FC00
b0fd: 2d 59        BLT    $0169
b0ff: dd 03        STD    <$03
b101: dc 01        LDD    <$01
b103: b3 50 04     SUBD   $5004
b106: dd 01        STD    <$01
b108: dd c0        STD    <$C0
b10a: cc f0 00     LDD    #$F000
b10d: dd 05        STD    <$05
b10f: 86 ff        LDA    #$FF
b111: 97 bd        STA    <$BD
b113: 86 03        LDA    #$03
b115: b7 4b 23     STA    $4B23
b118: 96 01        LDA    <$01
b11a: b0 50 40     SUBA   $5040
b11d: c6 03        LDB    #$03
b11f: 3d           MUL
b120: 10 83 00 e0  CMPD   #$00E0
b124: 25 02        BCS    $0139
b126: c6 e0        LDB    #$E0
b128: f7 4b 22     STB    $4B22
b12b: cc 62 80     LDD    #$6280
b12e: fd 4b 20     STD    $4B20
b131: 96 95        LDA    <$95
b133: 27 22        BEQ    $0168
b135: 96 44        LDA    <$44
b137: 26 1e        BNE    $0168
b139: dc 03        LDD    <$03
b13b: c3 02 00     ADDD   #$0200
b13e: 2d 17        BLT    $0168
b140: 83 04 00     SUBD   #$0400
b143: 2e 12        BGT    $0168
b145: dc 01        LDD    <$01
b147: 93 96        SUBD   <$96
b149: c3 02 00     ADDD   #$0200
b14c: 2d 09        BLT    $0168
b14e: 83 04 00     SUBD   #$0400
b151: 2e 04        BGT    $0168
b153: 86 01        LDA    #$01
b155: 97 44        STA    <$44
b157: 39           RTS
b158: dc 03        LDD    <$03
b15a: 10 2a 00 85  LBPL   $01F4
b15e: cc fc 00     LDD    #$FC00
b161: 93 03        SUBD   <$03
b163: 10 2d 00 f9  LBLT   $0271
b167: fd 47 06     STD    $4706
b16a: fc 50 42     LDD    $5042
b16d: 93 03        SUBD   <$03
b16f: fd 47 04     STD    $4704
b172: dc 05        LDD    <$05
b174: b3 50 44     SUBD   $5044
b177: fd 50 04     STD    $5004
b17a: dc 01        LDD    <$01
b17c: b3 50 40     SUBD   $5040
b17f: fd 50 02     STD    $5002
b182: fc 47 00     LDD    $4700
b185: fd 50 00     STD    $5000
b188: 86 86        LDA    #$86
b18a: bd cd ba     JSR    $CDBA
b18d: dc 05        LDD    <$05
b18f: b3 50 04     SUBD   $5004
b192: 2b 0a        BMI    $01AF
b194: 10 83 00 00  CMPD   #$0000
b198: 10 2e 00 c4  LBGT   $0271
b19c: 20 08        BRA    $01B7
b19e: 10 83 f0 00  CMPD   #$F000
b1a2: 10 2d 00 ba  LBLT   $0271
b1a6: dd 05        STD    <$05
b1a8: c3 10 00     ADDD   #$1000
b1ab: dd be        STD    <$BE
b1ad: dc 01        LDD    <$01
b1af: b3 50 02     SUBD   $5002
b1b2: dd 01        STD    <$01
b1b4: dd c0        STD    <$C0
b1b6: cc fc 00     LDD    #$FC00
b1b9: dd 03        STD    <$03
b1bb: 86 ff        LDA    #$FF
b1bd: 97 bd        STA    <$BD
b1bf: 86 09        LDA    #$09
b1c1: b7 4b 23     STA    $4B23
b1c4: 96 01        LDA    <$01
b1c6: b0 50 40     SUBA   $5040
b1c9: c6 03        LDB    #$03
b1cb: 3d           MUL
b1cc: 10 83 00 e0  CMPD   #$00E0
b1d0: 25 02        BCS    $01E5
b1d2: c6 e0        LDB    #$E0
b1d4: f7 4b 22     STB    $4B22
b1d7: cc 62 80     LDD    #$6280
b1da: fd 4b 20     STD    $4B20
b1dd: 8e 49 89     LDX    #$4989
b1e0: 7e b2 61     JMP    $B261
b1e3: 83 04 00     SUBD   #$0400
b1e6: 2d 78        BLT    $0271
b1e8: fd 47 06     STD    $4706
b1eb: dc 03        LDD    <$03
b1ed: b3 50 dc     SUBD   $5000
