b29c: 96 01        LDA    <$01
b29e: a4 84        ANDA   ,X
b2a0: 27 2f        BEQ    $0035
b2a2: 97 02        STA    <$02
b2a4: 96 01        LDA    <$01
b2a6: 48           ASLA
b2a7: 94 01        ANDA   <$01
b2a9: 91 02        CMPA   <$02
b2ab: 27 24        BEQ    $0035
b2ad: 23 12        BLS    $0025
b2af: 86 04        LDA    #$04
b2b1: 97 bd        STA    <$BD
b2b3: a6 84        LDA    ,X
b2b5: 98 02        EORA   <$02
b2b7: a7 84        STA    ,X
b2b9: bd 97 f2     JSR    $97F2
b2bc: bd bd fd     JSR    $BDFD
b2bf: 20 10        BRA    $0035
b2c1: 86 04        LDA    #$04
b2c3: 97 bd        STA    <$BD
b2c5: a6 84        LDA    ,X
b2c7: 98 02        EORA   <$02
b2c9: a7 84        STA    ,X
b2cb: bd 97 fc     JSR    $97FC
b2ce: bd bd fd     JSR    $BDFD
b2d1: 39           RTS
b2d2: 96 bc        LDA    <$BC
b2d4: 27 0d        BEQ    $0047
b2d6: dc cc        LDD    <$CC
b2d8: 2b 07        BMI    $0045
b2da: 86 04        LDA    #$04
b2dc: 97 bd        STA    <$BD
b2de: bd ad 20     JSR    $AD20
b2e1: 20 01        BRA    $0048
b2e3: 39           RTS
b2e4: dc c4        LDD    <$C4
b2e6: 2b 10        BMI    $005C
b2e8: 10 93 c8     CMPD   <$C8
b2eb: 22 0b        BHI    $005C
b2ed: 93 d0        SUBD   <$D0
b2ef: 22 16        BHI    $006B
b2f1: 86 04        LDA    #$04
b2f3: 97 bd        STA    <$BD
b2f5: 7e 8a cf     JMP    $8ACF
b2f8: dc c8        LDD    <$C8
b2fa: 2b 0b        BMI    $006B
b2fc: 93 d0        SUBD   <$D0
b2fe: 22 07        BHI    $006B
b300: 86 04        LDA    #$04
b302: 97 bd        STA    <$BD
b304: 7e a5 4b     JMP    $A54B
b307: dc d0        LDD    <$D0
b309: 2b 1f        BMI    $008E
b30b: 86 ff        LDA    #$FF
b30d: 97 bd        STA    <$BD
b30f: 86 0f        LDA    #$0F
b311: b7 4b 23     STA    $4B23
b314: 96 d0        LDA    <$D0
b316: c6 03        LDB    #$03
b318: 3d           MUL
b319: 10 83 00 e0  CMPD   #$00E0
b31d: 25 02        BCS    $0085
b31f: c6 e0        LDB    #$E0
b321: f7 4b 22     STB    $4B22
b324: cc 66 80     LDD    #$6680
b327: fd 4b 20     STD    $4B20
b32a: 39           RTS
b32b: 96 bc        LDA    <$BC
b32d: 27 0e        BEQ    $00A1
b32f: dc cc        LDD    <$CC
b331: 2b 06        BMI    $009D
b333: 93 c4        SUBD   <$C4
b335: 25 07        BCS    $00A2
b337: 20 0c        BRA    $00A9
b339: 96 c4        LDA    <$C4
b33b: 2c 08        BGE    $00A9
b33d: 39           RTS
b33e: 86 04        LDA    #$04
b340: 97 bd        STA    <$BD
b342: 7e ad 20     JMP    $AD20
b345: 86 04        LDA    #$04
b347: 97 bd        STA    <$BD
b349: 7e 8a cf     JMP    $8ACF
b34c: b9 94 ff     ADCA   $94FF
b34f: ff ff ff     STU    $FFFF
b352: ff ff ff     STU    $FFFF
b355: ff ff ff     STU    $FFFF
b358: ff ff ff     STU    $FFFF
b35b: ff ff ff     STU    $FFFF
b35e: ff ff ff     STU    $FFFF
b361: ff ff ff     STU    $FFFF
b364: ff ff ff     STU    $FFFF
b367: ff ff ff     STU    $FFFF
b36a: ff ff ff     STU    $FFFF
b36d: ff ff ff     STU    $FFFF
b370: ff ff ff     STU    $FFFF
b373: ff ff ff     STU    $FFFF
b376: ff ff ff     STU    $FFFF
b379: ff ff ff     STU    $FFFF
b37c: ff ff ff     STU    $FFFF
b37f: ff ff ff     STU    $FFFF
b382: ff ff ff     STU    $FFFF
b385: ff ff ff     STU    $FFFF
b388: ff ff ff     STU    $FFFF
b38b: ff ff ff     STU    $FFFF
b38e: ff ff ff     STU    $FFFF
b391: ff ff ff     STU    $FFFF
b394: ff ff ff     STU    $FFFF
b397: ff ff ff     STU    $FFFF
b39a: ff ff ff     STU    $FFFF
b39d: ff ff ff     STU    $FFFF
b3a0: ff ff ff     STU    $FFFF
b3a3: ff ff ff     STU    $FFFF
b3a6: ff ff ff     STU    $FFFF
b3a9: ff ff ff     STU    $FFFF
b3ac: ff ff ff     STU    $FFFF
b3af: ff ff ff     STU    $FFFF
b3b2: 43           COMA
b3b3: 4f           CLRA
b3b4: 50           NEGB
b3b5: 59           ROLB
b3b6: 52           XNCB
b3b7: 49           ROLA
b3b8: 47           ASRA
b3b9: 48           ASLA
b3ba: 54           LSRB
b3bb: 20 31        BRA    $0152
b3bd: 39           RTS
b3be: 38 33        XANDCC #$33
b3c0: 20 41        BRA    $0167
b3c2: 54           LSRB
b3c3: 41           NEGA
b3c4: 52           XNCB
b3c5: 49           ROLA
b3c6: 04 bc        LSR    <$BC
b3c8: 96 fa        LDA    <$FA
b3ca: 5b           XDECB
b3cb: 28 41        BVC    $0172
b3cd: 4c           INCA
b3ce: 4c           INCA
b3cf: 59           ROLB
b3d0: 20 57        BRA    $018D
b3d2: 41           NEGA
b3d3: 53           COMB
b3d4: 20 54        BRA    $018E
b3d6: 48           ASLA
b3d7: 45           LSRA
b3d8: 20 57        BRA    $0195
b3da: 48           ASLA
b3db: 49           ROLA
b3dc: 50           NEGB
b3dd: 43           COMA
b3de: 52           XNCB
b3df: 41           NEGA
b3e0: 43           COMA
b3e1: 4b           XDECA
b3e2: 45           LSRA
b3e3: 52           XNCB
b3e4: b6 49 c0     LDA    $49C0
b3e7: 81 03        CMPA   #$03
b3e9: 25 05        BCS    $0154
b3eb: 86 00        LDA    #$00
b3ed: b7 49 c0     STA    $49C0
b3f0: 86 01        LDA    #$01
b3f2: 97 9c        STA    <$9C
b3f4: 86 0b        LDA    #$0B
b3f6: 97 dc        STA    <$DC
b3f8: 97 9d        STA    <$9D
b3fa: bd cd 38     JSR    $CD38
b3fd: bd b4 3f     JSR    $B43F
b400: 96 9d        LDA    <$9D
b402: 97 dc        STA    <$DC
b404: bd cd 44     JSR    $CD44
b407: bd b5 79     JSR    $B579
b40a: 86 02        LDA    #$02
b40c: 97 9c        STA    <$9C
b40e: 86 0e        LDA    #$0E
b410: 97 dc        STA    <$DC
b412: 97 9d        STA    <$9D
b414: bd cd 38     JSR    $CD38
b417: bd b4 3f     JSR    $B43F
b41a: 96 9d        LDA    <$9D
b41c: 97 dc        STA    <$DC
b41e: bd cd 44     JSR    $CD44
b421: bd b5 79     JSR    $B579
b424: 86 03        LDA    #$03
b426: 97 9c        STA    <$9C
b428: 86 0c        LDA    #$0C
b42a: 97 dc        STA    <$DC
b42c: 97 9d        STA    <$9D
b42e: bd cd 38     JSR    $CD38
b431: bd b4 3f     JSR    $B43F
b434: 96 9d        LDA    <$9D
b436: 97 dc        STA    <$DC
b438: bd cd 44     JSR    $CD44
b43b: bd b5 79     JSR    $B579
b43e: 39           RTS
b43f: 86 00        LDA    #$00
b441: b7 49 bd     STA    $49BD
b444: b6 49 c0     LDA    $49C0
b447: b7 49 be     STA    $49BE
b44a: 86 88        LDA    #$88
b44c: b7 49 c1     STA    $49C1
b44f: f6 50 40     LDB    $5040
b452: 54           LSRB
b453: 54           LSRB
b454: 54           LSRB
b455: c4 0f        ANDB   #$0F
b457: 8e 49 89     LDX    #$4989
b45a: 3a           ABX
b45b: 9f 64        STX    <$64
b45d: b6 50 40     LDA    $5040
b460: 84 f8        ANDA   #$F8
b462: 8b 04        ADDA   #$04
b464: c6 00        LDB    #$00
b466: fd 50 78     STD    $5078
b469: cc fc 00     LDD    #$FC00
b46c: fd 50 7a     STD    $507A
b46f: cc f2 00     LDD    #$F200
b472: fd 50 7c     STD    $507C
b475: 9e 64        LDX    <$64
b477: 8c 49 99     CMPX   #$4999
b47a: 25 03        BCS    $01E3
b47c: 30 88 f0     LEAX   -$10,X
b47f: a6 80        LDA    ,X+
b481: 9f 64        STX    <$64
b483: 97 9e        STA    <$9E
b485: 84 03        ANDA   #$03
b487: 91 9c        CMPA   <$9C
b489: 10 26 00 89  LBNE   $027A
b48d: 96 9d        LDA    <$9D
b48f: 97 dc        STA    <$DC
b491: cc 00 0f     LDD    #$000F
b494: fd 47 01     STD    $4701
b497: 86 67        LDA    #$67
b499: bd cd ba     JSR    $CDBA
