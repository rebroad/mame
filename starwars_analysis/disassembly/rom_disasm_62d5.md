62d5: 86 40        LDA    #$40
62d7: a1 84        CMPA   ,X
62d9: 23 08        BLS    $000E
62db: a0 84        SUBA   ,X
62dd: 44           LSRA
62de: 44           LSRA
62df: 44           LSRA
62e0: 4c           INCA
62e1: ab 84        ADDA   ,X
62e3: 39           RTS
62e4: cc 00 00     LDD    #$0000
62e7: fd 4b 0c     STD    $4B0C
62ea: cc 02 00     LDD    #$0200
62ed: fd 4b 0e     STD    $4B0E
62f0: 86 0f        LDA    #$0F
62f2: b7 4a db     STA    $4ADB
62f5: 86 1f        LDA    #$1F
62f7: b7 4a dc     STA    $4ADC
62fa: cc 64 80     LDD    #$6480
62fd: fd 4b 10     STD    $4B10
6300: bd d9 1a     JSR    $D91A
6303: 0c 41        INC    <$41
6305: 39           RTS
6306: bd 61 12     JSR    $6112
6309: bd 76 1d     JSR    $761D
630c: bd 63 d5     JSR    $63D5
630f: bd 63 68     JSR    $6368
6312: bd cd 80     JSR    $CD80
6315: bd 61 2f     JSR    $612F
6318: bd 6d b6     JSR    $6DB6
631b: fc 4b 0e     LDD    $4B0E
631e: 2a 02        BPL    $004D
6320: 0c 41        INC    <$41
6322: bd 62 2d     JSR    $622D
6325: 39           RTS
6326: cc 03 c0     LDD    #$03C0
6329: fd 4b 0c     STD    $4B0C
632c: cc 02 00     LDD    #$0200
632f: fd 4b 0e     STD    $4B0E
6332: 86 23        LDA    #$23
6334: b7 4a db     STA    $4ADB
6337: 86 2c        LDA    #$2C
6339: b7 4a dc     STA    $4ADC
633c: cc 65 80     LDD    #$6580
633f: fd 4b 10     STD    $4B10
6342: bd d9 1a     JSR    $D91A
6345: 0c 41        INC    <$41
6347: 39           RTS
6348: bd 61 12     JSR    $6112
634b: bd 76 1d     JSR    $761D
634e: bd 63 d5     JSR    $63D5
6351: bd 63 68     JSR    $6368
6354: bd cd 80     JSR    $CD80
6357: bd 61 2f     JSR    $612F
635a: bd 6d c0     JSR    $6DC0
635d: fc 4b 0e     LDD    $4B0E
6360: 2a 02        BPL    $008F
6362: 0c 41        INC    <$41
6364: bd 62 2d     JSR    $622D
6367: 39           RTS
6368: fc 4b 0e     LDD    $4B0E
636b: 83 00 01     SUBD   #$0001
636e: fd 4b 0e     STD    $4B0E
6371: c4 07        ANDB   #$07
6373: 26 28        BNE    $00C8
6375: b6 4a db     LDA    $4ADB
6378: 2b 03        BMI    $00A8
637a: bd d8 df     JSR    $D8DF
637d: b6 4a db     LDA    $4ADB
6380: 81 12        CMPA   #$12
6382: 26 0a        BNE    $00B9
6384: b6 45 93     LDA    $4593
6387: 84 03        ANDA   #$03
6389: 8b 1f        ADDA   #$1F
638b: bd d8 df     JSR    $D8DF
638e: b6 4a db     LDA    $4ADB
6391: 8b 01        ADDA   #$01
6393: b1 4a dc     CMPA   $4ADC
6396: 25 02        BCS    $00C5
6398: 86 80        LDA    #$80
639a: b7 4a db     STA    $4ADB
639d: fc 4b 0c     LDD    $4B0C
63a0: 83 00 08     SUBD   #$0008
63a3: 2a 03        BPL    $00D3
63a5: cc 00 00     LDD    #$0000
63a8: fd 4b 0c     STD    $4B0C
63ab: fc 4b 0e     LDD    $4B0E
63ae: 10 83 00 c0  CMPD   #$00C0
63b2: 24 12        BCC    $00F1
63b4: f6 4b 11     LDB    $4B11
63b7: c0 01        SUBB   #$01
63b9: c1 10        CMPB   #$10
63bb: 24 06        BCC    $00EE
63bd: cc 00 00     LDD    #$0000
63c0: fd 4b 0e     STD    $4B0E
63c3: f7 4b 11     STB    $4B11
63c6: fc 4b 0c     LDD    $4B0C
63c9: fd 48 af     STD    $48AF
63cc: fc 4b 10     LDD    $4B10
63cf: ed a1        STD    ,Y++
63d1: bd d9 42     JSR    $D942
63d4: 39           RTS
63d5: b6 48 14     LDA    $4814
63d8: 26 11        BNE    $0116
63da: 96 43        LDA    <$43
63dc: 84 10        ANDA   #$10
63de: 26 04        BNE    $010F
63e0: c6 06        LDB    #$06
63e2: 20 02        BRA    $0111
63e4: c6 05        LDB    #$05
63e6: bd e7 c7     JSR    $E7C7
63e9: 20 05        BRA    $011B
63eb: c6 0b        LDB    #$0B
63ed: bd e7 c7     JSR    $E7C7
63f0: b6 48 14     LDA    $4814
63f3: 26 1b        BNE    $013B
63f5: b6 48 12     LDA    $4812
63f8: 27 0a        BEQ    $012F
63fa: 96 43        LDA    <$43
63fc: 84 10        ANDA   #$10
63fe: 27 04        BEQ    $012F
6400: 20 0e        BRA    $013B
6402: 20 0a        BRA    $0139
6404: f6 45 91     LDB    $4591
6407: c4 03        ANDB   #$03
6409: cb 07        ADDB   #$07
640b: bd e7 c7     JSR    $E7C7
640e: 20 48        BRA    $0183
6410: b6 48 14     LDA    $4814
6413: bb 48 12     ADDA   $4812
6416: 81 01        CMPA   #$01
6418: 26 04        BNE    $0149
641a: c6 0d        LDB    #$0D
641c: 20 02        BRA    $014B
641e: c6 0c        LDB    #$0C
6420: bd e7 c7     JSR    $E7C7
6423: cc 01 b0     LDD    #$01B0
6426: 84 1f        ANDA   #$1F
6428: ed a1        STD    ,Y++
642a: cc ff 80     LDD    #$FF80
642d: 7d 48 12     TST    $4812
6430: 27 03        BEQ    $0160
6432: 83 00 18     SUBD   #$0018
6435: 84 1f        ANDA   #$1F
6437: ed a1        STD    ,Y++
6439: b6 48 14     LDA    $4814
643c: 81 0a        CMPA   #$0A
643e: 25 02        BCS    $016D
6440: 8b 06        ADDA   #$06
6442: c6 02        LDB    #$02
6444: d7 ad        STB    <$AD
6446: bd e7 90     JSR    $E790
6449: b6 48 12     LDA    $4812
644c: 27 05        BEQ    $017E
644e: cc b8 f3     LDD    #$B8F3
6451: ed a1        STD    ,Y++
6453: cc 80 40     LDD    #$8040
6456: ed a1        STD    ,Y++
6458: 39           RTS
6459: cc 00 00     LDD    #$0000
645c: fd 4b 0c     STD    $4B0C
645f: fd 48 af     STD    $48AF
6462: cc 01 00     LDD    #$0100
6465: fd 4b 0e     STD    $4B0E
6468: cc 61 80     LDD    #$6180
646b: fd 4b 10     STD    $4B10
646e: bd d9 1a     JSR    $D91A
6471: bd 61 b5     JSR    $61B5
6474: bd 61 5a     JSR    $615A
6477: ce 50 38     LDU    #$5038
647a: bd cd c3     JSR    $CDC3
647d: bd cc 38     JSR    $CC38
6480: 0c 41        INC    <$41
6482: 39           RTS
6483: bd 61 12     JSR    $6112
6486: bd 64 cd     JSR    $64CD
6489: bd cd 80     JSR    $CD80
648c: bd 76 1d     JSR    $761D
648f: bd 63 d5     JSR    $63D5
6492: fc 4b 0e     LDD    $4B0E
6495: 10 83 00 50  CMPD   #$0050
6499: 24 0e        BCC    $01D4
649b: f6 4b 11     LDB    $4B11
649e: c0 01        SUBB   #$01
64a0: c1 f0        CMPB   #$F0
64a2: 25 02        BCS    $01D1
64a4: c6 00        LDB    #$00
64a6: f7 4b 11     STB    $4B11
64a9: fc 4b 10     LDD    $4B10
64ac: ed a1        STD    ,Y++
64ae: bd c7 fd     JSR    $C7FD
64b1: bd d9 23     JSR    $D923
64b4: bd 61 2f     JSR    $612F
64b7: bd 6d ca     JSR    $6DCA
64ba: fc 4b 0e     LDD    $4B0E
64bd: 83 00 01     SUBD   #$0001
64c0: fd 4b 0e     STD    $4B0E
64c3: 2a 04        BPL    $01F4
64c5: 86 05        LDA    #$05
64c7: 97 41        STA    <$41
64c9: bd 62 2d     JSR    $622D
64cc: 39           RTS
64cd: c6 00        LDB    #$00
64cf: bd e7 c7     JSR    $E7C7
64d2: c6 01        LDB    #$01
64d4: bd 86 40     JSR    >$0000
