67aa: 8b 06        ADDA   #$06
67ac: 97 60        STA    <$60
67ae: 97 8e        STA    <$8E
67b0: b6 45 93     LDA    $4593
67b3: 44           LSRA
67b4: 44           LSRA
67b5: 84 03        ANDA   #$03
67b7: b7 4b 18     STA    $4B18
67ba: 86 00        LDA    #$00
67bc: b7 4b 17     STA    $4B17
67bf: 97 8b        STA    <$8B
67c1: 97 8c        STA    <$8C
67c3: 97 5c        STA    <$5C
67c5: 97 5d        STA    <$5D
67c7: 97 5e        STA    <$5E
67c9: 97 5f        STA    <$5F
67cb: b7 4b 2d     STA    $4B2D
67ce: b7 4b 37     STA    $4B37
67d1: b7 4b 35     STA    $4B35
67d4: 1a 10        ORCC   #$10
67d6: 7c 48 6f     INC    $486F
67d9: 7c 48 66     INC    $4866
67dc: 7c 48 71     INC    $4871
67df: 7c 48 68     INC    $4868
67e2: 1c ef        ANDCC  #$EF
67e4: 39           RTS
67e5: bd 61 b5     JSR    $61B5
67e8: bd 61 5a     JSR    $615A
67eb: bd 61 ec     JSR    $61EC
67ee: 86 c0        LDA    #$C0
67f0: b7 50 80     STA    $5080
67f3: b7 50 8a     STA    $508A
67f6: 86 00        LDA    #$00
67f8: b7 48 13     STA    $4813
67fb: 0c 41        INC    <$41
67fd: 86 1d        LDA    #$1D
67ff: 97 41        STA    <$41
6801: 39           RTS
6802: bd 7a 5a     JSR    $7A5A
6805: 8e 00 08     LDX    #$0008
6808: b6 4b 15     LDA    $4B15
680b: 4c           INCA
680c: bd 77 20     JSR    $7720
680f: b6 4a d6     LDA    $4AD6
6812: b7 4b 16     STA    $4B16
6815: b6 4b 15     LDA    $4B15
6818: 81 1f        CMPA   #$1F
681a: 23 02        BLS    $0074
681c: 86 1f        LDA    #$1F
681e: b7 4b 14     STA    $4B14
6821: bb 4b 18     ADDA   $4B18
6824: 81 0f        CMPA   #$0F
6826: 23 02        BLS    $0080
6828: 86 0f        LDA    #$0F
682a: b7 4b 19     STA    $4B19
682d: 0c 41        INC    <$41
682f: 86 1f        LDA    #$1F
6831: 97 41        STA    <$41
6833: 86 00        LDA    #$00
6835: 97 dd        STA    <$DD
6837: 39           RTS
6838: bd 61 61     JSR    $6161
683b: bd b9 39     JSR    $B939
683e: cc 00 00     LDD    #$0000
6841: fd 4b 0e     STD    $4B0E
6844: b7 4b 3b     STA    $4B3B
6847: 86 09        LDA    #$09
6849: b7 4b 3c     STA    $4B3C
684c: b6 4b 2d     LDA    $4B2D
684f: 26 06        BNE    $00AD
6851: cc 00 27     LDD    #$0027
6854: fd 4b 0e     STD    $4B0E
6857: 0c 41        INC    <$41
6859: bd 72 c7     JSR    $72C7
685c: 96 60        LDA    <$60
685e: 10 2b 04 14  LBMI   $04CC
6862: bd a8 49     JSR    $A849
6865: bd 98 98     JSR    $9898
6868: bd b9 8b     JSR    $B98B
686b: bd 98 90     JSR    $9890
686e: bd 95 58     JSR    $9558
6871: bd 8b 6d     JSR    $8B6D
6874: bd 70 db     JSR    $70DB
6877: bd 6d d2     JSR    $6DD2
687a: 86 10        LDA    #$10
687c: bd ce 0c     JSR    $CE0C
687f: bd 6f 5f     JSR    $6F5F
6882: fc 4b 0e     LDD    $4B0E
6885: c3 00 01     ADDD   #$0001
6888: fd 4b 0e     STD    $4B0E
688b: 10 83 00 28  CMPD   #$0028
688f: 26 15        BNE    $00FC
6891: b6 4b 15     LDA    $4B15
6894: 81 03        CMPA   #$03
6896: 2d 09        BLT    $00F7
6898: 84 01        ANDA   #$01
689a: 27 05        BEQ    $00F7
689c: bd bd 85     JSR    $BD85
689f: 20 03        BRA    $00FA
68a1: bd bd a8     JSR    $BDA8
68a4: 20 20        BRA    $011C
68a6: 10 83 00 c8  CMPD   #$00C8
68aa: 26 05        BNE    $0107
68ac: bd bd ad     JSR    $BDAD
68af: 20 15        BRA    $011C
68b1: 10 83 01 90  CMPD   #$0190
68b5: 26 05        BNE    $0112
68b7: bd bd 8a     JSR    $BD8A
68ba: 20 0a        BRA    $011C
68bc: 10 83 01 a4  CMPD   #$01A4
68c0: 25 04        BCS    $011C
68c2: 86 21        LDA    #$21
68c4: 97 41        STA    <$41
68c6: 96 e6        LDA    <$E6
68c8: 81 03        CMPA   #$03
68ca: 24 03        BCC    $0125
68cc: bd 8f 7b     JSR    $8F7B
68cf: 39           RTS
68d0: 7c 4b 3b     INC    $4B3B
68d3: 0c 41        INC    <$41
68d5: bd 72 c7     JSR    $72C7
68d8: 96 60        LDA    <$60
68da: 10 2b 03 98  LBMI   $04CC
68de: bd a8 49     JSR    $A849
68e1: bd 98 98     JSR    $9898
68e4: bd b9 8b     JSR    $B98B
68e7: bd 98 90     JSR    $9890
68ea: bd 95 58     JSR    $9558
68ed: bd 8b 86     JSR    $8B86
68f0: bd 70 db     JSR    $70DB
68f3: bd 6d fa     JSR    $6DFA
68f6: 86 10        LDA    #$10
68f8: bd ce 0c     JSR    $CE0C
68fb: bd 6f 5f     JSR    $6F5F
68fe: 8e 49 00     LDX    #$4900
6901: a6 03        LDA    $3,X
6903: 26 0c        BNE    $0167
6905: 30 88 19     LEAX   $19,X
6908: 8c 49 4b     CMPX   #$494B
690b: 25 f4        BCS    $0157
690d: 86 23        LDA    #$23
690f: 97 41        STA    <$41
6911: 39           RTS
6912: cc 77 80     LDD    #$7780
6915: dd 56        STD    <$56
6917: cc 01 00     LDD    #$0100
691a: dd 58        STD    <$58
691c: b6 4b 2d     LDA    $4B2D
691f: 26 09        BNE    $0180
6921: b6 4b 14     LDA    $4B14
6924: 81 04        CMPA   #$04
6926: 26 02        BNE    $0180
6928: 20 06        BRA    $0186
692a: bd bd 67     JSR    $BD67
692d: bd bd ee     JSR    $BDEE
6930: 0c 41        INC    <$41
6932: 39           RTS
6933: bd 73 3c     JSR    $733C
6936: bd b9 8b     JSR    $B98B
6939: bd 98 90     JSR    $9890
693c: bd 95 58     JSR    $9558
693f: bd 6d d2     JSR    $6DD2
6942: bd 6f 67     JSR    $6F67
6945: fc 50 80     LDD    $5080
6948: 10 83 3f 00  CMPD   #$3F00
694c: 2d 04        BLT    $01A8
694e: 86 25        LDA    #$25
6950: 97 41        STA    <$41
6952: 39           RTS
6953: b6 4b 2d     LDA    $4B2D
6956: 26 0a        BNE    $01B8
6958: b6 4b 14     LDA    $4B14
695b: 81 04        CMPA   #$04
695d: 26 03        BNE    $01B8
695f: bd bd 53     JSR    $BD53
6962: bd be 0c     JSR    $BE0C
6965: 0c 41        INC    <$41
6967: 39           RTS
6968: bd 73 6f     JSR    $736F
696b: bd 98 98     JSR    $9898
696e: bd 98 90     JSR    $9890
6971: bd 95 58     JSR    $9558
6974: bd 6d d2     JSR    $6DD2
6977: bd 6f 67     JSR    $6F67
697a: d6 58        LDB    <$58
697c: 50           NEGB
697d: 1d           SEX
697e: d3 56        ADDD   <$56
6980: c4 7f        ANDB   #$7F
6982: dd 56        STD    <$56
6984: 10 83 73 10  CMPD   #$7310
6988: 22 0d        BHI    $01ED
698a: b6 4b 14     LDA    $4B14
698d: 26 04        BNE    $01E9
698f: 86 27        LDA    #$27
6991: 20 02        BRA    $01EB
6993: 86 29        LDA    #$29
6995: 97 41        STA    <$41
6997: dc 58        LDD    <$58
6999: c3 00 60     ADDD   #$0060
699c: dd 58        STD    <$58
699e: 96 83        LDA    <$83
69a0: 80 02        SUBA   #$02
69a2: 22 02        BHI    $01FC
69a4: 86 00        LDA    #$00
69a6: 97 83        STA    <$83
69a8: 39           RTS
69a9: b6 8b 06     LDA    >$0000
