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
694c: 2d 04        BLT    $6952
694e: 86 25        LDA    #$25
6950: 97 41        STA    <$41
6952: 39           RTS
6953: b6 4b 2d     LDA    $4B2D
6956: 26 0a        BNE    $6962
6958: b6 4b 14     LDA    $4B14
695b: 81 04        CMPA   #$04
695d: 26 03        BNE    $6962
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
6988: 22 0d        BHI    $6997
698a: b6 4b 14     LDA    $4B14
698d: 26 04        BNE    $6993
698f: 86 27        LDA    #$27
6991: 20 02        BRA    $6995
6993: 86 29        LDA    #$29
6995: 97 41        STA    <$41
6997: dc 58        LDD    <$58
6999: c3 00 60     ADDD   #$0060
699c: dd 58        STD    <$58
699e: 96 83        LDA    <$83
69a0: 80 02        SUBA   #$02
69a2: 22 02        BHI    $69A6
69a4: 86 00        LDA    #$00
69a6: 97 83        STA    <$83
69a8: 39           RTS
69a9: b6 4b 15     LDA    $4B15
69ac: 4a           DECA
69ad: 81 1f        CMPA   #$1F
69af: 25 02        BCS    $69B3
69b1: 86 1f        LDA    #$1F
69b3: b7 4b 13     STA    $4B13
69b6: bb 4b 18     ADDA   $4B18
69b9: 81 0f        CMPA   #$0F
69bb: 23 02        BLS    $69BF
69bd: 86 0f        LDA    #$0F
69bf: b7 4b 19     STA    $4B19
69c2: bd 61 5a     JSR    $615A
69c5: bd 62 0f     JSR    $620F
69c8: bd a1 ce     JSR    $A1CE
69cb: bd b9 39     JSR    $B939
69ce: cc 01 00     LDD    #$0100
69d1: fd 50 86     STD    $5086
69d4: 47           ASRA
69d5: 56           RORB
69d6: fd 50 98     STD    $5098
69d9: cc 20 00     LDD    #$2000
69dc: fd 50 9c     STD    $509C
69df: 86 00        LDA    #$00
69e1: 97 a7        STA    <$A7
69e3: b7 4b 35     STA    $4B35
69e6: b7 4b 3d     STA    $4B3D
69e9: 86 00        LDA    #$00
69eb: b7 4b 0e     STA    $4B0E
69ee: bd bd 94     JSR    $BD94
69f1: 0c 41        INC    <$41
69f3: 39           RTS
69f4: bd 73 90     JSR    $7390
69f7: 96 60        LDA    <$60
69f9: 10 2b 02 b9  LBMI   $6CB6
69fd: bd a8 49     JSR    $A849
6a00: bd 98 90     JSR    $9890
6a03: bd 95 58     JSR    $9558
6a06: bd b9 8b     JSR    $B98B
6a09: bd 70 db     JSR    $70DB
6a0c: bd 6e 22     JSR    $6E22
6a0f: 86 10        LDA    #$10
6a11: bd ce 0c     JSR    $CE0C
6a14: bd 6f 6f     JSR    $6F6F
6a17: fc 50 86     LDD    $5086
6a1a: c3 00 01     ADDD   #$0001
6a1d: 10 83 04 00  CMPD   #$0400
6a21: 22 03        BHI    $6A26
6a23: fd 50 86     STD    $5086
6a26: 96 43        LDA    <$43
6a28: 84 0f        ANDA   #$0F
6a2a: 26 0d        BNE    $6A39
6a2c: b6 4b 0e     LDA    $4B0E
6a2f: 81 0e        CMPA   #$0E
6a31: 26 03        BNE    $6A36
6a33: bd bd 99     JSR    $BD99
6a36: 7c 4b 0e     INC    $4B0E
6a39: 96 a7        LDA    <$A7
6a3b: 81 05        CMPA   #$05
6a3d: 25 10        BCS    $6A4F
6a3f: 86 01        LDA    #$01
6a41: b7 4b 3d     STA    $4B3D
6a44: b6 50 98     LDA    $5098
6a47: 81 80        CMPA   #$80
6a49: 24 04        BCC    $6A4F
6a4b: 86 2b        LDA    #$2B
6a4d: 97 41        STA    <$41
6a4f: 39           RTS
6a50: 86 00        LDA    #$00
6a52: 97 98        STA    <$98
6a54: b7 4b 36     STA    $4B36
6a57: b6 4b 15     LDA    $4B15
6a5a: 81 1f        CMPA   #$1F
6a5c: 23 02        BLS    $6A60
6a5e: 86 1f        LDA    #$1F
6a60: b7 4b 12     STA    $4B12
6a63: bb 4b 18     ADDA   $4B18
6a66: 81 0f        CMPA   #$0F
6a68: 23 02        BLS    $6A6C
6a6a: 86 0f        LDA    #$0F
6a6c: b7 4b 19     STA    $4B19
6a6f: bd 83 a4     JSR    $83A4
6a72: bd bd 71     JSR    $BD71
6a75: cc 00 00     LDD    #$0000
6a78: fd 4b 0e     STD    $4B0E
6a7b: 0c 41        INC    <$41
6a7d: 39           RTS
6a7e: bd 61 5a     JSR    $615A
6a81: bd 83 41     JSR    $8341
6a84: 86 2f        LDA    #$2F
6a86: 97 41        STA    <$41
6a88: 39           RTS
6a89: bd 73 ea     JSR    $73EA
6a8c: bd 98 90     JSR    $9890
6a8f: bd 95 58     JSR    $9558
6a92: bd b9 8b     JSR    $B98B
6a95: bd 6f e0     JSR    $6FE0
6a98: fc 4b 0e     LDD    $4B0E
6a9b: c3 00 01     ADDD   #$0001
6a9e: fd 4b 0e     STD    $4B0E
6aa1: 83 00 11     SUBD   #$0011
6aa4: 25 04        BCS    $6AAA
6aa6: 86 2d        LDA    #$2D
6aa8: 97 41        STA    <$41
6aaa: 39           RTS
6aab: cc 00 00     LDD    #$0000
6aae: fd 50 98     STD    $5098
6ab1: fd 50 9a     STD    $509A
6ab4: fd 4b 0e     STD    $4B0E
6ab7: bd 6f f1     JSR    $6FF1
6aba: bd 83 41     JSR    $8341
6abd: 0c 41        INC    <$41
6abf: bd 74 13     JSR    $7413
6ac2: bd 98 90     JSR    $9890
6ac5: bd 95 58     JSR    $9558
6ac8: bd b9 8b     JSR    $B98B
6acb: bd 6f f1     JSR    $6FF1
6ace: fc 4b 0e     LDD    $4B0E
6ad1: c3 00 01     ADDD   #$0001
6ad4: fd 4b 0e     STD    $4B0E
6ad7: 83 00 11     SUBD   #$0011
6ada: 25 22        BCS    $6AFE
6adc: be 50 98     LDX    $5098
6adf: fe 50 9a     LDU    $509A
6ae2: fc 50 9c     LDD    $509C
6ae5: 34 56        PSHS   U,X,D
6ae7: bd 61 5a     JSR    $615A
6aea: 35 56        PULS   D,X,U
6aec: bf 50 98     STX    $5098
6aef: ff 50 9a     STU    $509A
6af2: fd 50 9c     STD    $509C
6af5: 86 00        LDA    #$00
6af7: b7 4b 36     STA    $4B36
6afa: 86 2f        LDA    #$2F
6afc: 97 41        STA    <$41
6afe: 39           RTS
6aff: 86 01        LDA    #$01
6b01: 97 98        STA    <$98
6b03: bd 61 5a     JSR    $615A
6b06: bd 83 41     JSR    $8341
6b09: 86 ff        LDA    #$FF
6b0b: b7 4b 36     STA    $4B36
6b0e: b6 4b 19     LDA    $4B19
6b11: bb 4b 17     ADDA   $4B17
6b14: 81 0f        CMPA   #$0F
6b16: 23 02        BLS    $6B1A
6b18: 86 0f        LDA    #$0F
6b1a: b7 4b 19     STA    $4B19
6b1d: 86 2f        LDA    #$2F
6b1f: 97 41        STA    <$41
6b21: 39           RTS
6b22: 86 00        LDA    #$00
6b24: b7 4b 3e     STA    $4B3E
6b27: b7 4b 0e     STA    $4B0E
6b2a: cc 03 00     LDD    #$0300
