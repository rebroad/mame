8341: 86 00        LDA    #$00
8343: 97 44        STA    <$44
8345: 97 45        STA    <$45
8347: 8e 49 89     LDX    #$4989
834a: 86 00        LDA    #$00
834c: a7 80        STA    ,X+
834e: 8c 49 a9     CMPX   #$49A9
8351: 25 f9        BCS    $834C
8353: f6 4b 12     LDB    $4B12
8356: 58           ASLB
8357: 8e 7c c0     LDX    #$7CC0
835a: 3a           ABX
835b: 8c 7c d6     CMPX   #$7CD6
835e: 25 05        BCS    $8365
8360: ce 4b 3f     LDU    #$4B3F
8363: 20 02        BRA    $8367
8365: ee 84        LDU    ,X
8367: ff 49 a9     STU    $49A9
836a: ff 49 ab     STU    $49AB
836d: ee c4        LDU    ,U
836f: cc 00 00     LDD    #$0000
8372: b7 49 c0     STA    $49C0
8375: fd 49 b1     STD    $49B1
8378: fd 49 b5     STD    $49B5
837b: 97 92        STA    <$92
837d: 97 95        STA    <$95
837f: ff 49 af     STU    $49AF
8382: ff 49 b3     STU    $49B3
8385: bd 84 34     JSR    $8434
8388: bd 84 08     JSR    $8408
838b: bd 83 ce     JSR    $83CE
838e: bd 83 ce     JSR    $83CE
8391: bd 83 ce     JSR    $83CE
8394: bd 83 ce     JSR    $83CE
8397: bd 83 ce     JSR    $83CE
839a: bd 83 ce     JSR    $83CE
839d: bd 83 ce     JSR    $83CE
83a0: bd 83 ce     JSR    $83CE
83a3: 39           RTS
83a4: ce 4b 3f     LDU    #$4B3F
83a7: 8e 7c 7e     LDX    #$7C7E
83aa: ec 81        LDD    ,X++
83ac: ed c1        STD    ,U++
83ae: 11 83 4b 5f  CMPU   #$4B5F
83b2: 25 f6        BCS    $83AA
83b4: ce 4b 43     LDU    #$4B43
83b7: 8e 7c 9e     LDX    #$7C9E
83ba: 86 11        LDA    #$11
83bc: f6 47 03     LDB    $4703
83bf: 3d           MUL
83c0: 48           ASLA
83c1: ec 86        LDD    A,X
83c3: ed c4        STD    ,U
83c5: 33 44        LEAU   $4,U
83c7: 11 83 4b 5f  CMPU   #$4B5F
83cb: 25 ed        BCS    $83BA
83cd: 39           RTS
83ce: 96 92        LDA    <$92
83d0: 26 35        BNE    $8407
83d2: fe 49 b3     LDU    $49B3
83d5: 33 43        LEAU   $3,U
83d7: a6 c4        LDA    ,U
83d9: 81 05        CMPA   #$05
83db: 26 05        BNE    $83E2
83dd: fe 49 ab     LDU    $49AB
83e0: ee 42        LDU    $2,U
83e2: e6 c4        LDB    ,U
83e4: c1 01        CMPB   #$01
83e6: 26 05        BNE    $83ED
83e8: cc 08 00     LDD    #$0800
83eb: 20 0c        BRA    $83F9
83ed: c1 03        CMPB   #$03
83ef: 26 05        BNE    $83F6
83f1: cc 00 00     LDD    #$0000
83f4: 20 03        BRA    $83F9
83f6: cc 10 00     LDD    #$1000
83f9: f3 49 b7     ADDD   $49B7
83fc: b3 49 b1     SUBD   $49B1
83ff: 83 60 00     SUBD   #$6000
8402: 22 03        BHI    $8407
8404: bd 84 08     JSR    $8408
8407: 39           RTS
8408: fe 49 b3     LDU    $49B3
840b: e6 c4        LDB    ,U
840d: c1 01        CMPB   #$01
840f: 26 05        BNE    $8416
8411: cc 08 00     LDD    #$0800
8414: 20 03        BRA    $8419
8416: cc 10 00     LDD    #$1000
8419: f3 49 b5     ADDD   $49B5
841c: fd 49 b5     STD    $49B5
841f: 33 43        LEAU   $3,U
8421: e6 c4        LDB    ,U
8423: c1 05        CMPB   #$05
8425: 26 0a        BNE    $8431
8427: fe 49 ab     LDU    $49AB
842a: 33 42        LEAU   $2,U
842c: ff 49 ab     STU    $49AB
842f: ee c4        LDU    ,U
8431: ff 49 b3     STU    $49B3
8434: fe 49 b3     LDU    $49B3
8437: e6 c4        LDB    ,U
8439: c1 03        CMPB   #$03
843b: 26 0a        BNE    $8447
843d: fc 49 b5     LDD    $49B5
8440: dd 93        STD    <$93
8442: 86 ff        LDA    #$FF
8444: 97 92        STA    <$92
8446: 39           RTS
8447: e6 c4        LDB    ,U
8449: c1 04        CMPB   #$04
844b: 26 1d        BNE    $846A
844d: fc 49 b5     LDD    $49B5
8450: dd 96        STD    <$96
8452: 86 ff        LDA    #$FF
8454: 97 95        STA    <$95
8456: 86 00        LDA    #$00
8458: 97 44        STA    <$44
845a: 97 45        STA    <$45
845c: b6 4b 36     LDA    $4B36
845f: 26 09        BNE    $846A
8461: 7c 4b 36     INC    $4B36
8464: bd 97 e3     JSR    $97E3
8467: fe 49 b3     LDU    $49B3
846a: e6 c4        LDB    ,U
846c: c1 01        CMPB   #$01
846e: 26 05        BNE    $8475
8470: cc 08 00     LDD    #$0800
8473: 20 03        BRA    $8478
8475: cc 10 00     LDD    #$1000
8478: f3 49 b5     ADDD   $49B5
847b: fd 49 b7     STD    $49B7
847e: f6 49 b5     LDB    $49B5
8481: 54           LSRB
8482: 54           LSRB
8483: 54           LSRB
8484: c4 0f        ANDB   #$0F
8486: 8e 49 89     LDX    #$4989
8489: a6 41        LDA    $1,U
848b: a7 85        STA    B,X
848d: 8e 49 99     LDX    #$4999
8490: a6 42        LDA    $2,U
8492: a7 85        STA    B,X
8494: 39           RTS
8495: 96 45        LDA    <$45
8497: 26 1c        BNE    $84B5
8499: f6 4b 19     LDB    $4B19
849c: c1 07        CMPB   #$07
849e: 23 02        BLS    $84A2
84a0: c6 07        LDB    #$07
84a2: 58           ASLB
84a3: ce 84 b6     LDU    #$84B6
84a6: 33 c5        LEAU   B,U
84a8: 96 43        LDA    <$43
84aa: a4 c4        ANDA   ,U
84ac: 26 07        BNE    $84B5
84ae: a6 41        LDA    $1,U
84b0: 97 9b        STA    <$9B
84b2: bd 84 c6     JSR    $84C6
84b5: 39           RTS
84b6: 0f 80        CLR    <$80
84b8: 0f 60        CLR    <$60
84ba: 0f 40        CLR    <$40
84bc: 0f 20        CLR    <$20
84be: 07 60        ASR    <$60
84c0: 07 20        ASR    <$20
84c2: 03 60        COM    <$60
84c4: 03 20        COM    <$20
84c6: cc f8 00     LDD    #$F800
84c9: b4 50 98     ANDA   $5098
84cc: 8b 24        ADDA   #$24
84ce: fd 50 78     STD    $5078
84d1: b6 50 78     LDA    $5078
84d4: 44           LSRA
84d5: 44           LSRA
84d6: 44           LSRA
84d7: 84 0f        ANDA   #$0F
84d9: 97 99        STA    <$99
84db: cc fe 00     LDD    #$FE00
84de: fd 50 7c     STD    $507C
84e1: cc fc 80     LDD    #$FC80
84e4: fd 50 7a     STD    $507A
84e7: 8e 49 89     LDX    #$4989
84ea: d6 99        LDB    <$99
84ec: a6 85        LDA    B,X
84ee: 97 9a        STA    <$9A
84f0: 84 c0        ANDA   #$C0
84f2: 81 c0        CMPA   #$C0
84f4: 26 2c        BNE    $8522
84f6: fc 50 9c     LDD    $509C
84f9: b3 50 7c     SUBD   $507C
84fc: 2d 24        BLT    $8522
84fe: 83 04 00     SUBD   #$0400
8501: 2c 0c        BGE    $850F
8503: b6 47 03     LDA    $4703
8506: 91 9b        CMPA   <$9B
8508: 25 03        BCS    $850D
850a: bd a7 f7     JSR    $A7F7
850d: 20 13        BRA    $8522
850f: 83 04 00     SUBD   #$0400
8512: 2c 0e        BGE    $8522
8514: b6 47 03     LDA    $4703
8517: f6 47 03     LDB    $4703
851a: 3d           MUL
851b: 91 9b        CMPA   <$9B
851d: 25 03        BCS    $8522
851f: bd a7 f7     JSR    $A7F7
8522: fc 50 7c     LDD    $507C
8525: 83 04 00     SUBD   #$0400
8528: fd 50 7c     STD    $507C
852b: 96 9a        LDA    <$9A
852d: 48           ASLA
852e: 48           ASLA
852f: 26 bd        BNE    $84EE
8531: cc fe 00     LDD    #$FE00
8534: fd 50 7c     STD    $507C
8537: cc 03 80     LDD    #$0380
853a: fd 50 7a     STD    $507A
853d: 8e 49 99     LDX    #$4999
8540: d6 00        LDB    <$00
