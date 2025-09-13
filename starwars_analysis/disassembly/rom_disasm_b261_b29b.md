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
b307: dc d0        LDD    <$D0
b309: 2b 1f        BMI    $B32A
b30b: 86 ff        LDA    #$FF
b30d: 97 bd        STA    <$BD
b30f: 86 0f        LDA    #$0F
b311: b7 4b 23     STA    $4B23
b314: 96 d0        LDA    <$D0
b316: c6 03        LDB    #$03
b318: 3d           MUL
b319: 10 83 00 e0  CMPD   #$00E0
b31d: 25 02        BCS    $B321
b31f: c6 e0        LDB    #$E0
b321: f7 4b 22     STB    $4B22
b324: cc 66 80     LDD    #$6680
b327: fd 4b 20     STD    $4B20
b32a: 39           RTS
b32b: 96 bc        LDA    <$BC
b32d: 27 0e        BEQ    $B33D
b32f: dc cc        LDD    <$CC
b331: 2b 06        BMI    $B339
b333: 93 c4        SUBD   <$C4
b335: 25 07        BCS    $B33E
b337: 20 0c        BRA    $B345
b339: 96 c4        LDA    <$C4
b33b: 2c 08        BGE    $B345
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
b3bb: 20 31        BRA    $B3EE
b3bd: 39           RTS
b3be: 38 33        XANDCC #$33
b3c0: 20 41        BRA    $B403
b3c2: 54           LSRB
b3c3: 41           NEGA
b3c4: 52           XNCB
b3c5: 49           ROLA
b3c6: 04 bc        LSR    <$BC
b3c8: 96 fa        LDA    <$FA
b3ca: 5b           XDECB
b3cb: 28 41        BVC    $B40E
b3cd: 4c           INCA
b3ce: 4c           INCA
b3cf: 59           ROLB
b3d0: 20 57        BRA    $B429
b3d2: 41           NEGA
b3d3: 53           COMB
b3d4: 20 54        BRA    $B42A
b3d6: 48           ASLA
b3d7: 45           LSRA
b3d8: 20 57        BRA    $B431
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
b3e9: 25 05        BCS    $B3F0
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
b460: 84 00        ANDA   #$00
