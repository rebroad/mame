b071: 96 bc        LDA    <$BC
b073: 27 1f        BEQ    $0023
b075: bd b0 95     JSR    $B095
b078: cc 02 00     LDD    #$0200
b07b: fd 47 06     STD    $4706
b07e: dc cc        LDD    <$CC
b080: 2b 07        BMI    $0018
b082: 86 04        LDA    #$04
b084: 97 bd        STA    <$BD
b086: bd ad 20     JSR    $AD20
b089: 96 44        LDA    <$44
b08b: 2f 07        BLE    $0023
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
b0c0: 10 2d 00 94  LBLT   $00E7
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
b0ef: 2b 08        BMI    $0088
b0f1: 10 83 04 00  CMPD   #$0400
b0f5: 2e 61        BGT    $00E7
b0f7: 20 06        BRA    $008E
b0f9: 10 83 fc 00  CMPD   #$FC00
b0fd: 2d 59        BLT    $00E7
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
b124: 25 02        BCS    $00B7
b126: c6 e0        LDB    #$E0
b128: f7 4b 22     STB    $4B22
b12b: cc 62 80     LDD    #$6280
b12e: fd 4b 20     STD    $4B20
b131: 96 95        LDA    <$95
b133: 27 22        BEQ    $00E6
b135: 96 44        LDA    <$44
b137: 26 1e        BNE    $00E6
b139: dc 03        LDD    <$03
b13b: c3 02 00     ADDD   #$0200
b13e: 2d 17        BLT    $00E6
b140: 83 04 00     SUBD   #$0400
b143: 2e 12        BGT    $00E6
b145: dc 01        LDD    <$01
b147: 93 96        SUBD   <$96
b149: c3 02 00     ADDD   #$0200
b14c: 2d 09        BLT    $00E6
b14e: 83 04 00     SUBD   #$0400
b151: 2e 04        BGT    $00E6
b153: 86 01        LDA    #$01
b155: 97 44        STA    <$44
b157: 39           RTS
b158: dc 03        LDD    <$03
b15a: 10 2a 00 85  LBPL   $0172
b15e: cc fc 00     LDD    #$FC00
b161: 93 03        SUBD   <$03
b163: 10 2d 00 f9  LBLT   $01EF
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
b192: 2b 0a        BMI    $012D
b194: 10 83 00 00  CMPD   #$0000
b198: 10 2e 00 c4  LBGT   $01EF
b19c: 20 08        BRA    $0135
b19e: 10 83 f0 00  CMPD   #$F000
b1a2: 10 2d 00 ba  LBLT   $01EF
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
b1d0: 25 02        BCS    $0163
b1d2: c6 e0        LDB    #$E0
b1d4: f7 4b 22     STB    $4B22
b1d7: cc 62 80     LDD    #$6280
b1da: fd 4b 20     STD    $4B20
b1dd: 8e 49 89     LDX    #$4989
b1e0: 7e b2 61     JMP    $B261
b1e3: 83 04 00     SUBD   #$0400
b1e6: 2d 78        BLT    $01EF
b1e8: fd 47 06     STD    $4706
b1eb: dc 03        LDD    <$03
b1ed: b3 50 42     SUBD   $5042
b1f0: fd 47 04     STD    $4704
b1f3: dc 05        LDD    <$05
b1f5: b3 50 44     SUBD   $5044
b1f8: fd 50 04     STD    $5004
b1fb: dc 01        LDD    <$01
b1fd: b3 50 40     SUBD   $5040
b200: fd 50 02     STD    $5002
b203: fc 47 00     LDD    $4700
b206: fd 50 00     STD    $5000
b209: 86 86        LDA    #$86
b20b: bd cd ba     JSR    $CDBA
b20e: dc 05        LDD    <$05
b210: b3 50 04     SUBD   $5004
b213: 2b 08        BMI    $01AC
b215: 10 83 00 00  CMPD   #$0000
b219: 2e 45        BGT    $01EF
b21b: 20 06        BRA    $01B2
b21d: 10 83 f0 00  CMPD   #$F000
b221: 2d 3d        BLT    $01EF
b223: dd 05        STD    <$05
b225: c3 10 00     ADDD   #$1000
b228: dd be        STD    <$BE
b22a: dc 01        LDD    <$01
b22c: b3 50 02     SUBD   $5002
b22f: dd 01        STD    <$01
b231: dd c0        STD    <$C0
b233: cc 04 00     LDD    #$0400
b236: dd 03        STD    <$03
b238: 86 ff        LDA    #$FF
b23a: 97 bd        STA    <$BD
b23c: 86 06        LDA    #$06
b23e: b7 4b 23     STA    $4B23
b241: 96 01        LDA    <$01
b243: b0 50 40     SUBA   $5040
b246: c6 03        LDB    #$03
b248: 3d           MUL
b249: 10 83 00 e0  CMPD   #$00E0
b24d: 25 02        BCS    $01E0
b24f: c6 e0        LDB    #$E0
b251: f7 4b 22     STB    $4B22
b254: cc 62 80     LDD    #$6280
b257: fd 4b 20     STD    $4B20
b25a: 8e 49 99     LDX    #$4999
b25d: 7e b2 61     JMP    $B261
b260: 39           RTS
b261: 96 bc        LDA    <$BC
b263: 26 01        BNE    $01F5
b265: 39           RTS
b266: d6 c0        LDB    <$C0
b268: 54           LSRB
b269: 54           LSRB
b26a: 54           LSRB
b26b: c4 0f        ANDB   #$0F
b26d: 3a           ABX
b26e: dc c0        LDD    <$C0
b270: 84 96        ANDA   #$00
