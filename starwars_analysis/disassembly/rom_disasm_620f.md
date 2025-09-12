620f: 8e 5c 60     LDX    #$5C60
6212: b6 47 03     LDA    $4703
6215: f6 47 03     LDB    $4703
6218: ed 84        STD    ,X
621a: 3d           MUL
621b: b6 47 03     LDA    $4703
621e: ed 02        STD    $2,X
6220: cc 00 00     LDD    #$0000
6223: ed 04        STD    $4,X
6225: 30 08        LEAX   $8,X
6227: 8c 5d f0     CMPX   #$5DF0
622a: 25 e6        BCS    $0003
622c: 39           RTS
622d: d6 7d        LDB    <$7D
622f: c1 a0        CMPB   #$A0
6231: 2e 0b        BGT    $002F
6233: 86 08        LDA    #$08
6235: 91 41        CMPA   <$41
6237: 27 03        BEQ    $002D
6239: 4a           DECA
623a: 97 41        STA    <$41
623c: 20 0d        BRA    $003C
623e: c1 60        CMPB   #$60
6240: 2d 09        BLT    $003C
6242: 86 0c        LDA    #$0C
6244: 91 41        CMPA   <$41
6246: 27 03        BEQ    $003C
6248: 4a           DECA
6249: 97 41        STA    <$41
624b: b6 45 91     LDA    $4591
624e: 84 03        ANDA   #$03
6250: 26 05        BNE    $0048
6252: 86 01        LDA    #$01
6254: b7 48 14     STA    $4814
6257: b6 48 14     LDA    $4814
625a: 27 0d        BEQ    $005A
625c: 96 ac        LDA    <$AC
625e: 84 f0        ANDA   #$F0
6260: 27 07        BEQ    $005A
6262: 86 19        LDA    #$19
6264: 97 41        STA    <$41
6266: 7a 48 14     DEC    $4814
6269: b6 48 1e     LDA    $481E
626c: 84 10        ANDA   #$10
626e: 26 04        BNE    $0065
6270: 86 01        LDA    #$01
6272: 97 41        STA    <$41
6274: 39           RTS
6275: 1a 10        ORCC   #$10
6277: 8e 45 34     LDX    #$4534
627a: bd c6 d4     JSR    $C6D4
627d: 8e 4a fa     LDX    #$4AFA
6280: bd 62 d5     JSR    $62D5
6283: b7 48 66     STA    $4866
6286: 8e 4a fb     LDX    #$4AFB
6289: bd 62 d5     JSR    $62D5
628c: b7 48 68     STA    $4868
628f: 8e 4a fc     LDX    #$4AFC
6292: bd 62 d5     JSR    $62D5
6295: b7 48 6f     STA    $486F
6298: 8e 4a fd     LDX    #$4AFD
629b: bd 62 d5     JSR    $62D5
629e: b7 48 71     STA    $4871
62a1: 1c ef        ANDCC  #$EF
62a3: 86 0b        LDA    #$0B
62a5: 97 41        STA    <$41
62a7: 86 ff        LDA    #$FF
62a9: b7 4b 34     STA    $4B34
62ac: bd 61 b5     JSR    $61B5
62af: bd 61 5a     JSR    $615A
62b2: bd 61 1e     JSR    $611E
62b5: bd 61 ec     JSR    $61EC
62b8: bd d9 1a     JSR    $D91A
62bb: 86 00        LDA    #$00
62bd: 97 5c        STA    <$5C
62bf: 97 5d        STA    <$5D
62c1: 97 5e        STA    <$5E
62c3: 97 5f        STA    <$5F
62c5: 97 8b        STA    <$8B
62c7: 97 8c        STA    <$8C
62c9: bd cc 18     JSR    $CC18
62cc: 86 ff        LDA    #$FF
62ce: b7 4a ec     STA    $4AEC
62d1: b7 48 18     STA    $4818
62d4: 39           RTS
62d5: 86 40        LDA    #$40
62d7: a1 84        CMPA   ,X
62d9: 23 08        BLS    $00D4
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
631e: 2a 02        BPL    $0113
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
6360: 2a 02        BPL    $0155
6362: 0c 41        INC    <$41
6364: bd 62 2d     JSR    $622D
6367: 39           RTS
6368: fc 4b 0e     LDD    $4B0E
636b: 83 00 01     SUBD   #$0001
636e: fd 4b 0e     STD    $4B0E
6371: c4 07        ANDB   #$07
6373: 26 28        BNE    $018E
6375: b6 4a db     LDA    $4ADB
6378: 2b 03        BMI    $016E
637a: bd d8 df     JSR    $D8DF
637d: b6 4a db     LDA    $4ADB
6380: 81 12        CMPA   #$12
6382: 26 0a        BNE    $017F
6384: b6 45 93     LDA    $4593
6387: 84 03        ANDA   #$03
6389: 8b 1f        ADDA   #$1F
638b: bd d8 df     JSR    $D8DF
638e: b6 4a db     LDA    $4ADB
6391: 8b 01        ADDA   #$01
6393: b1 4a dc     CMPA   $4ADC
6396: 25 02        BCS    $018B
6398: 86 80        LDA    #$80
639a: b7 4a db     STA    $4ADB
639d: fc 4b 0c     LDD    $4B0C
63a0: 83 00 08     SUBD   #$0008
63a3: 2a 03        BPL    $0199
63a5: cc 00 00     LDD    #$0000
63a8: fd 4b 0c     STD    $4B0C
63ab: fc 4b 0e     LDD    $4B0E
63ae: 10 83 00 c0  CMPD   #$00C0
63b2: 24 12        BCC    $01B7
63b4: f6 4b 11     LDB    $4B11
63b7: c0 01        SUBB   #$01
63b9: c1 10        CMPB   #$10
63bb: 24 06        BCC    $01B4
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
63d8: 26 11        BNE    $01DC
63da: 96 43        LDA    <$43
63dc: 84 10        ANDA   #$10
63de: 26 04        BNE    $01D5
63e0: c6 06        LDB    #$06
63e2: 20 02        BRA    $01D7
63e4: c6 05        LDB    #$05
63e6: bd e7 c7     JSR    $E7C7
63e9: 20 05        BRA    $01E1
63eb: c6 0b        LDB    #$0B
63ed: bd e7 c7     JSR    $E7C7
63f0: b6 48 14     LDA    $4814
63f3: 26 1b        BNE    $0201
63f5: b6 48 12     LDA    $4812
63f8: 27 0a        BEQ    $01F5
63fa: 96 43        LDA    <$43
63fc: 84 10        ANDA   #$10
63fe: 27 04        BEQ    $01F5
6400: 20 0e        BRA    $0201
6402: 20 0a        BRA    $01FF
6404: f6 45 91     LDB    $4591
6407: c4 03        ANDB   #$03
6409: cb 07        ADDB   #$07
640b: bd e7 c7     JSR    $E7C7
640e: 20 8e        BRA    $0201
