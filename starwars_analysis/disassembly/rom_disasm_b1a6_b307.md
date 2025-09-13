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
b1d0: 25 02        BCS    $B1D4
b1d2: c6 e0        LDB    #$E0
b1d4: f7 4b 22     STB    $4B22
b1d7: cc 62 80     LDD    #$6280
b1da: fd 4b 20     STD    $4B20
b1dd: 8e 49 89     LDX    #$4989
b1e0: 7e b2 61     JMP    $B261
b1e3: 83 04 00     SUBD   #$0400
b1e6: 2d 78        BLT    $B260
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
b213: 2b 08        BMI    $B21D
b215: 10 83 00 00  CMPD   #$0000
b219: 2e 45        BGT    $B260
b21b: 20 06        BRA    $B223
b21d: 10 83 f0 00  CMPD   #$F000
b221: 2d 3d        BLT    $B260
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
b24d: 25 02        BCS    $B251
b24f: c6 e0        LDB    #$E0
b251: f7 4b 22     STB    $4B22
b254: cc 62 80     LDD    #$6280
b257: fd 4b 20     STD    $4B20
b25a: 8e 49 99     LDX    #$4999
b25d: 7e b2 61     JMP    $B261
b260: 39           RTS
b261: 96 bc        LDA    <$BC
b263: 26 01        BNE    $B266
b265: 39           RTS
b266: d6 c0        LDB    <$C0
b268: 54           LSRB
b269: 54           LSRB
b26a: 54           LSRB
b26b: c4 0f        ANDB   #$0F
b26d: 3a           ABX
b26e: dc c0        LDD    <$C0
b270: 84 07        ANDA   #$07
b272: 83 01 c0     SUBD   #$01C0
b275: 2d 24        BLT    $B29B
b277: 83 04 80     SUBD   #$0480
b27a: 2e 1f        BGT    $B29B
b27c: 86 03        LDA    #$03
b27e: 97 01        STA    <$01
b280: dc be        LDD    <$BE
b282: 83 00 40     SUBD   #$0040
b285: 83 03 80     SUBD   #$0380
b288: 2e 08        BGT    $B292
b28a: 83 fc 80     SUBD   #$FC80
b28d: 2d 0c        BLT    $B29B
b28f: 7e b2 9c     JMP    $B29C
b292: 83 00 80     SUBD   #$0080
b295: 08 01        ASL    <$01
b297: 08 01        ASL    <$01
b299: 26 ea        BNE    $B285
b29b: 39           RTS
b29c: 96 01        LDA    <$01
b29e: a4 84        ANDA   ,X
b2a0: 27 2f        BEQ    $B2D1
b2a2: 97 02        STA    <$02
b2a4: 96 01        LDA    <$01
b2a6: 48           ASLA
b2a7: 94 01        ANDA   <$01
b2a9: 91 02        CMPA   <$02
b2ab: 27 24        BEQ    $B2D1
b2ad: 23 12        BLS    $B2C1
b2af: 86 04        LDA    #$04
b2b1: 97 bd        STA    <$BD
b2b3: a6 84        LDA    ,X
b2b5: 98 02        EORA   <$02
b2b7: a7 84        STA    ,X
b2b9: bd 97 f2     JSR    $97F2
b2bc: bd bd fd     JSR    $BDFD
b2bf: 20 10        BRA    $B2D1
b2c1: 86 04        LDA    #$04
b2c3: 97 bd        STA    <$BD
b2c5: a6 84        LDA    ,X
b2c7: 98 02        EORA   <$02
b2c9: a7 84        STA    ,X
b2cb: bd 97 fc     JSR    $97FC
b2ce: bd bd fd     JSR    $BDFD
b2d1: 39           RTS
b2d2: 96 bc        LDA    <$BC
b2d4: 27 0d        BEQ    $B2E3
b2d6: dc cc        LDD    <$CC
b2d8: 2b 07        BMI    $B2E1
b2da: 86 04        LDA    #$04
b2dc: 97 bd        STA    <$BD
b2de: bd ad 20     JSR    $AD20
b2e1: 20 01        BRA    $B2E4
b2e3: 39           RTS
b2e4: dc c4        LDD    <$C4
b2e6: 2b 10        BMI    $B2F8
b2e8: 10 93 c8     CMPD   <$C8
b2eb: 22 0b        BHI    $B2F8
b2ed: 93 d0        SUBD   <$D0
b2ef: 22 16        BHI    $B307
b2f1: 86 04        LDA    #$04
b2f3: 97 bd        STA    <$BD
b2f5: 7e 8a cf     JMP    $8ACF
b2f8: dc c8        LDD    <$C8
b2fa: 2b 0b        BMI    $B307
b2fc: 93 d0        SUBD   <$D0
b2fe: 22 07        BHI    $B307
b300: 86 04        LDA    #$04
b302: 97 bd        STA    <$BD
b304: 7e a5 4b     JMP    $A54B
b307: 7e b307     JMP    $b307
