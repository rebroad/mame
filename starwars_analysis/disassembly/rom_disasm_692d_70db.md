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
6b2d: fd 50 86     STD    $5086
6b30: 0c 41        INC    <$41
6b32: bd 74 3c     JSR    $743C
6b35: 96 60        LDA    <$60
6b37: 10 2b 01 a6  LBMI   $6CE1
6b3b: bd a8 49     JSR    $A849
6b3e: bd ad 6c     JSR    $AD6C
6b41: bd 84 95     JSR    $8495
6b44: bd 98 86     JSR    $9886
6b47: bd 95 58     JSR    $9558
6b4a: bd 70 db     JSR    $70DB
6b4d: bd 6e a1     JSR    $6EA1
6b50: 86 10        LDA    #$10
6b52: bd ce 0c     JSR    $CE0C
6b55: bd 70 3b     JSR    $703B
6b58: 96 43        LDA    <$43
6b5a: 84 0f        ANDA   #$0F
6b5c: 26 3b        BNE    $6B99
6b5e: b6 4b 0e     LDA    $4B0E
6b61: 81 02        CMPA   #$02
6b63: 26 03        BNE    $6B68
6b65: bd bd 9e     JSR    $BD9E
6b68: b6 4b 12     LDA    $4B12
6b6b: 44           LSRA
6b6c: 25 15        BCS    $6B83
6b6e: b6 4b 0e     LDA    $4B0E
6b71: 81 10        CMPA   #$10
6b73: 26 05        BNE    $6B7A
6b75: bd bd 6c     JSR    $BD6C
6b78: 20 07        BRA    $6B81
6b7a: 81 18        CMPA   #$18
6b7c: 26 03        BNE    $6B81
6b7e: bd bd 76     JSR    $BD76
6b81: 20 13        BRA    $6B96
6b83: b6 4b 0e     LDA    $4B0E
6b86: 81 10        CMPA   #$10
6b88: 26 05        BNE    $6B8F
6b8a: bd bd 30     JSR    $BD30
6b8d: 20 07        BRA    $6B96
6b8f: 81 16        CMPA   #$16
6b91: 26 03        BNE    $6B96
6b93: bd bd 62     JSR    $BD62
6b96: 7c 4b 0e     INC    $4B0E
6b99: 96 92        LDA    <$92
6b9b: 27 3d        BEQ    $6BDA
6b9d: dc 93        LDD    <$93
6b9f: b3 50 98     SUBD   $5098
6ba2: 83 08 00     SUBD   #$0800
6ba5: 22 33        BHI    $6BDA
6ba7: b6 48 45     LDA    $4845
6baa: 26 1a        BNE    $6BC6
6bac: 86 01        LDA    #$01
6bae: b7 4b 3e     STA    $4B3E
6bb1: bd bd b2     JSR    $BDB2
6bb4: bd 98 74     JSR    $9874
6bb7: 96 60        LDA    <$60
6bb9: 10 2f 01 24  LBLE   $6CE1
6bbd: 86 31        LDA    #$31
6bbf: 97 41        STA    <$41
6bc1: bd bd 3a     JSR    $BD3A
6bc4: 20 14        BRA    $6BDA
6bc6: 86 11        LDA    #$11
6bc8: 97 41        STA    <$41
6bca: b6 4b 15     LDA    $4B15
6bcd: 81 03        CMPA   #$03
6bcf: 2d 09        BLT    $6BDA
6bd1: 84 01        ANDA   #$01
6bd3: 27 05        BEQ    $6BDA
6bd5: bd bd 17     JSR    $BD17
6bd8: 20 00        BRA    $6BDA
6bda: 39           RTS
6bdb: bd 61 b5     JSR    $61B5
6bde: bd 61 5a     JSR    $615A
6be1: 86 c0        LDA    #$C0
6be3: b7 50 80     STA    $5080
6be6: b7 50 8a     STA    $508A
6be9: 86 04        LDA    #$04
6beb: b7 4b 0e     STA    $4B0E
6bee: 0c 41        INC    <$41
6bf0: 39           RTS
6bf1: 96 43        LDA    <$43
6bf3: 84 0f        ANDA   #$0F
6bf5: 26 35        BNE    $6C2C
6bf7: 7a 4b 0e     DEC    $4B0E
6bfa: b6 4b 0e     LDA    $4B0E
6bfd: 81 03        CMPA   #$03
6bff: 26 08        BNE    $6C09
6c01: b6 48 45     LDA    $4845
6c04: 27 03        BEQ    $6C09
6c06: bd 98 06     JSR    $9806
6c09: b6 4b 0e     LDA    $4B0E
6c0c: 81 02        CMPA   #$02
6c0e: 26 03        BNE    $6C13
6c10: bd 97 75     JSR    $9775
6c13: b6 4b 0e     LDA    $4B0E
6c16: 81 01        CMPA   #$01
6c18: 26 08        BNE    $6C22
6c1a: b6 48 45     LDA    $4845
6c1d: 27 03        BEQ    $6C22
6c1f: bd 95 3b     JSR    $953B
6c22: b6 4b 0e     LDA    $4B0E
6c25: 81 00        CMPA   #$00
6c27: 26 03        BNE    $6C2C
6c29: bd 97 22     JSR    $9722
6c2c: bd 75 19     JSR    $7519
6c2f: bd 95 58     JSR    $9558
6c32: bd 6f 5f     JSR    $6F5F
6c35: b6 4b 0e     LDA    $4B0E
6c38: 81 fe        CMPA   #$FE
6c3a: 26 39        BNE    $6C75
6c3c: b6 4b 15     LDA    $4B15
6c3f: 4c           INCA
6c40: 81 62        CMPA   #$62
6c42: 23 02        BLS    $6C46
6c44: 86 62        LDA    #$62
6c46: b7 4b 15     STA    $4B15
6c49: b6 4b 15     LDA    $4B15
6c4c: 81 05        CMPA   #$05
6c4e: 24 0d        BCC    $6C5D
6c50: b6 4b 17     LDA    $4B17
6c53: 4c           INCA
6c54: 81 04        CMPA   #$04
6c56: 23 02        BLS    $6C5A
6c58: 86 04        LDA    #$04
6c5a: b7 4b 17     STA    $4B17
6c5d: b6 4b 18     LDA    $4B18
6c60: bb 4b 17     ADDA   $4B17
6c63: 81 0f        CMPA   #$0F
6c65: 23 02        BLS    $6C69
6c67: 86 0f        LDA    #$0F
6c69: b7 4b 18     STA    $4B18
6c6c: 86 ff        LDA    #$FF
6c6e: b7 4b 2d     STA    $4B2D
6c71: 86 1d        LDA    #$1D
6c73: 97 41        STA    <$41
6c75: 39           RTS
6c76: bd bd 58     JSR    $BD58
6c79: 86 36        LDA    #$36
6c7b: 97 41        STA    <$41
6c7d: cc 00 00     LDD    #$0000
6c80: fd 4b 0e     STD    $4B0E
6c83: 39           RTS
6c84: bd 73 15     JSR    $7315
6c87: bd a8 49     JSR    $A849
6c8a: bd 98 7f     JSR    $987F
6c8d: bd 98 98     JSR    $9898
6c90: bd b9 8b     JSR    $B98B
6c93: cc fb 01     LDD    #$FB01
6c96: fd 50 22     STD    $5022
6c99: cc 3f ce     LDD    #$3FCE
6c9c: fd 50 24     STD    $5024
6c9f: bd ce 24     JSR    $CE24
6ca2: fc 4b 0e     LDD    $4B0E
6ca5: c3 00 01     ADDD   #$0001
6ca8: fd 4b 0e     STD    $4B0E
6cab: 10 83 00 28  CMPD   #$0028
6caf: 25 04        BCS    $6CB5
6cb1: 86 3b        LDA    #$3B
6cb3: 97 41        STA    <$41
6cb5: 39           RTS
6cb6: bd bd 58     JSR    $BD58
6cb9: 86 38        LDA    #$38
6cbb: 97 41        STA    <$41
6cbd: cc 00 00     LDD    #$0000
6cc0: fd 4b 0e     STD    $4B0E
6cc3: 39           RTS
6cc4: bd 73 c3     JSR    $73C3
6cc7: bd a8 49     JSR    $A849
6cca: bd 98 7f     JSR    $987F
6ccd: fc 4b 0e     LDD    $4B0E
6cd0: c3 00 01     ADDD   #$0001
6cd3: fd 4b 0e     STD    $4B0E
6cd6: 10 83 00 28  CMPD   #$0028
6cda: 25 04        BCS    $6CE0
6cdc: 86 3b        LDA    #$3B
6cde: 97 41        STA    <$41
6ce0: 39           RTS
6ce1: bd bd 58     JSR    $BD58
6ce4: 86 3a        LDA    #$3A
6ce6: 97 41        STA    <$41
6ce8: cc 00 00     LDD    #$0000
6ceb: fd 4b 0e     STD    $4B0E
6cee: 39           RTS
6cef: bd 74 d5     JSR    $74D5
6cf2: bd a8 49     JSR    $A849
6cf5: bd 98 7f     JSR    $987F
6cf8: fc 4b 0e     LDD    $4B0E
6cfb: c3 00 01     ADDD   #$0001
6cfe: fd 4b 0e     STD    $4B0E
6d01: 10 83 00 28  CMPD   #$0028
6d05: 25 04        BCS    $6D0B
6d07: 86 3b        LDA    #$3B
6d09: 97 41        STA    <$41
6d0b: 39           RTS
6d0c: bd bd 49     JSR    $BD49
6d0f: bd bd 0d     JSR    $BD0D
6d12: 0c 41        INC    <$41
6d14: 39           RTS
6d15: bd 61 b5     JSR    $61B5
6d18: bd 61 5a     JSR    $615A
6d1b: bd 61 ec     JSR    $61EC
6d1e: ce 50 38     LDU    #$5038
6d21: bd cd c3     JSR    $CDC3
6d24: bd c0 ff     JSR    $C0FF
6d27: bd ca 8c     JSR    $CA8C
6d2a: b6 4a ec     LDA    $4AEC
6d2d: 2b 04        BMI    $6D33
6d2f: 86 0f        LDA    #$0F
6d31: 20 05        BRA    $6D38
6d33: bd bd 7b     JSR    $BD7B
6d36: 86 05        LDA    #$05
6d38: 97 41        STA    <$41
6d3a: 39           RTS
6d3b: cc 73 04     LDD    #$7304
6d3e: dd 56        STD    <$56
6d40: cc 0a ff     LDD    #$0AFF
6d43: dd 58        STD    <$58
6d45: bd 61 ec     JSR    $61EC
6d48: ce 50 38     LDU    #$5038
6d4b: bd cd c3     JSR    $CDC3
6d4e: 0c 41        INC    <$41
6d50: bd bd 8f     JSR    $BD8F
6d53: 39           RTS
6d54: bd 75 b9     JSR    $75B9
6d57: bd 95 58     JSR    $9558
6d5a: bd 98 90     JSR    $9890
6d5d: d6 58        LDB    <$58
6d5f: 1d           SEX
6d60: d3 56        ADDD   <$56
6d62: c3 00 80     ADDD   #$0080
6d65: c4 7f        ANDB   #$7F
6d67: dd 56        STD    <$56
6d69: 10 83 76 80  CMPD   #$7680
6d6d: 25 04        BCS    $6D73
6d6f: 86 13        LDA    #$13
6d71: 97 41        STA    <$41
6d73: dc 58        LDD    <$58
6d75: 83 00 10     SUBD   #$0010
6d78: 2a 03        BPL    $6D7D
6d7a: cc 00 00     LDD    #$0000
6d7d: dd 58        STD    <$58
6d7f: 39           RTS
6d80: bd bb 7b     JSR    $BB7B
6d83: 0c 41        INC    <$41
6d85: 39           RTS
6d86: bd 75 d9     JSR    $75D9
6d89: b6 48 a1     LDA    $48A1
6d8c: 81 01        CMPA   #$01
6d8e: 25 04        BCS    $6D94
6d90: 86 15        LDA    #$15
6d92: 97 41        STA    <$41
6d94: 39           RTS
6d95: 0c 41        INC    <$41
6d97: 39           RTS
6d98: bd 76 0a     JSR    $760A
6d9b: b6 48 a1     LDA    $48A1
6d9e: 26 04        BNE    $6DA4
6da0: 86 33        LDA    #$33
6da2: 97 41        STA    <$41
6da4: 39           RTS
6da5: dc 89        LDD    <$89
6da7: c3 00 80     ADDD   #$0080
6daa: dd 89        STD    <$89
6dac: fc 4b 26     LDD    $4B26
6daf: c3 00 80     ADDD   #$0080
6db2: fd 4b 26     STD    $4B26
6db5: 39           RTS
6db6: fc 4b 24     LDD    $4B24
6db9: c3 ff 80     ADDD   #$FF80
6dbc: fd 4b 24     STD    $4B24
6dbf: 39           RTS
6dc0: fc 4b 26     LDD    $4B26
6dc3: c3 00 80     ADDD   #$0080
6dc6: fd 4b 26     STD    $4B26
6dc9: 39           RTS
6dca: dc 89        LDD    <$89
6dcc: c3 00 80     ADDD   #$0080
6dcf: dd 89        STD    <$89
6dd1: 39           RTS
6dd2: 96 63        LDA    <$63
6dd4: 27 1a        BEQ    $6DF0
6dd6: 2f 07        BLE    $6DDF
6dd8: 0a 63        DEC    <$63
6dda: cc 04 ff     LDD    #$04FF
6ddd: 20 05        BRA    $6DE4
6ddf: 0c 63        INC    <$63
6de1: cc fb 01     LDD    #$FB01
6de4: fd 50 22     STD    $5022
6de7: cc 3f ce     LDD    #$3FCE
6dea: fd 50 24     STD    $5024
6ded: bd ce 24     JSR    $CE24
6df0: bd 6e a2     JSR    $6EA2
6df3: bd 70 bd     JSR    $70BD
6df6: bd 70 cc     JSR    $70CC
6df9: 39           RTS
6dfa: 96 63        LDA    <$63
6dfc: 27 1a        BEQ    $6E18
6dfe: 2f 07        BLE    $6E07
6e00: 0a 63        DEC    <$63
6e02: cc 04 ff     LDD    #$04FF
6e05: 20 05        BRA    $6E0C
6e07: 0c 63        INC    <$63
6e09: cc fb 01     LDD    #$FB01
6e0c: fd 50 22     STD    $5022
6e0f: cc 3f ce     LDD    #$3FCE
6e12: fd 50 24     STD    $5024
6e15: bd ce 24     JSR    $CE24
6e18: bd 6e cb     JSR    $6ECB
6e1b: bd 70 bd     JSR    $70BD
6e1e: bd 70 cc     JSR    $70CC
6e21: 39           RTS
6e22: 96 63        LDA    <$63
6e24: 27 08        BEQ    $6E2E
6e26: 2f 03        BLE    $6E2B
6e28: 4a           DECA
6e29: 20 01        BRA    $6E2C
6e2b: 4c           INCA
6e2c: 97 63        STA    <$63
6e2e: 96 63        LDA    <$63
6e30: 2a 01        BPL    $6E33
6e32: 40           NEGA
6e33: c6 20        LDB    #$20
6e35: 3d           MUL
6e36: 0d 63        TST    <$63
6e38: 2a 04        BPL    $6E3E
6e3a: 43           COMA
6e3b: 50           NEGB
6e3c: 82 ff        SBCA   #$FF
6e3e: dd a5        STD    <$A5
6e40: 96 7d        LDA    <$7D
6e42: 2a 01        BPL    $6E45
6e44: 43           COMA
6e45: c6 02        LDB    #$02
6e47: 3d           MUL
6e48: 0d 7d        TST    <$7D
6e4a: 2a 04        BPL    $6E50
6e4c: 43           COMA
6e4d: 50           NEGB
6e4e: 82 ff        SBCA   #$FF
6e50: d3 a5        ADDD   <$A5
6e52: 0d 63        TST    <$63
6e54: 26 1a        BNE    $6E70
6e56: 93 a3        SUBD   <$A3
6e58: 2f 0b        BLE    $6E65
6e5a: 10 83 00 10  CMPD   #$0010
6e5e: 2f 03        BLE    $6E63
6e60: cc 00 10     LDD    #$0010
6e63: 20 09        BRA    $6E6E
6e65: 10 83 ff f0  CMPD   #$FFF0
6e69: 2c 03        BGE    $6E6E
6e6b: cc ff f0     LDD    #$FFF0
6e6e: 20 18        BRA    $6E88
6e70: 93 a3        SUBD   <$A3
6e72: 2f 0b        BLE    $6E7F
6e74: 10 83 00 32  CMPD   #$0032
6e78: 2f 03        BLE    $6E7D
6e7a: cc 00 32     LDD    #$0032
6e7d: 20 09        BRA    $6E88
6e7f: 10 83 ff ce  CMPD   #$FFCE
6e83: 2c 03        BGE    $6E88
6e85: cc ff ce     LDD    #$FFCE
6e88: 1f 98        TFR    B,A
6e8a: bb 48 78     ADDA   $4878
6e8d: b7 48 78     STA    $4878
6e90: 1d           SEX
6e91: d3 a3        ADDD   <$A3
6e93: dd a3        STD    <$A3
6e95: 8e 48 70     LDX    #$4870
6e98: bd 71 11     JSR    $7111
6e9b: 27 03        BEQ    $6EA0
6e9d: bd ce 24     JSR    $CE24
6ea0: 39           RTS
6ea1: 39           RTS
6ea2: be 4b 32     LDX    $4B32
6ea5: 26 03        BNE    $6EAA
6ea7: 8e 49 00     LDX    #$4900
6eaa: a6 03        LDA    $3,X
6eac: 81 01        CMPA   #$01
6eae: 26 09        BNE    $6EB9
6eb0: a6 06        LDA    $6,X
6eb2: 26 05        BNE    $6EB9
6eb4: 9f 64        STX    <$64
6eb6: 7e 6e f7     JMP    $6EF7
6eb9: b6 4b 3c     LDA    $4B3C
6ebc: 2f 05        BLE    $6EC3
6ebe: 86 09        LDA    #$09
6ec0: b7 4b 3c     STA    $4B3C
6ec3: 30 88 19     LEAX   $19,X
6ec6: 8c 49 4b     CMPX   #$494B
6ec9: 25 df        BCS    $6EAA
6ecb: cc 00 00     LDD    #$0000
6ece: fd 4b 32     STD    $4B32
6ed1: b6 50 80     LDA    $5080
6ed4: 2b 05        BMI    $6EDB
6ed6: f6 50 84     LDB    $5084
6ed9: 20 05        BRA    $6EE0
6edb: c6 7f        LDB    #$7F
6edd: f0 50 84     SUBB   $5084
6ee0: f7 48 6d     STB    $486D
6ee3: b6 50 80     LDA    $5080
6ee6: 2b 05        BMI    $6EED
6ee8: f6 50 82     LDB    $5082
6eeb: 20 05        BRA    $6EF2
6eed: c6 7f        LDB    #$7F
6eef: f0 50 82     SUBB   $5082
6ef2: 53           COMB
6ef3: f7 48 76     STB    $4876
6ef6: 39           RTS
6ef7: 86 10        LDA    #$10
6ef9: bd ce 0c     JSR    $CE0C
6efc: bd 71 60     JSR    $7160
6eff: 9e 64        LDX    <$64
6f01: bf 4b 32     STX    $4B32
6f04: 4f           CLRA
6f05: e6 02        LDB    $2,X
6f07: cb 03        ADDB   #$03
6f09: fd 47 01     STD    $4701
6f0c: 86 67        LDA    #$67
6f0e: bd cd ba     JSR    $CDBA
6f11: b6 50 00     LDA    $5000
6f14: 2f 23        BLE    $6F39
6f16: fc 50 02     LDD    $5002
6f19: 78 50 01     ASL    $5001
6f1c: 79 50 00     ROL    $5000
6f1f: 29 33        BVS    $6F54
6f21: 58           ASLB
6f22: 49           ROLA
6f23: 28 04        BVC    $6F29
6f25: 46           RORA
6f26: 56           RORB
6f27: 20 2b        BRA    $6F54
6f29: 78 50 05     ASL    $5005
6f2c: 79 50 04     ROL    $5004
6f2f: 28 e8        BVC    $6F19
6f31: 76 50 04     ROR    $5004
6f34: 76 50 05     ROR    $5005
6f37: 20 1b        BRA    $6F54
6f39: fc 50 02     LDD    $5002
6f3c: ca 01        ORB    #$01
6f3e: 58           ASLB
6f3f: 49           ROLA
6f40: 28 04        BVC    $6F46
6f42: 46           RORA
6f43: 56           RORB
6f44: 20 0e        BRA    $6F54
6f46: 78 50 05     ASL    $5005
6f49: 79 50 04     ROL    $5004
6f4c: 28 f0        BVC    $6F3E
6f4e: 76 50 04     ROR    $5004
6f51: 76 50 05     ROR    $5005
6f54: 43           COMA
6f55: b7 48 76     STA    $4876
6f58: f6 50 04     LDB    $5004
6f5b: f7 48 6d     STB    $486D
6f5e: 39           RTS
6f5f: dc 42        LDD    <$42
6f61: bd cd ab     JSR    $CDAB
6f64: dd 89        STD    <$89
6f66: 39           RTS
6f67: dc 42        LDD    <$42
6f69: bd cd a9     JSR    $CDA9
6f6c: dd 89        STD    <$89
6f6e: 39           RTS
6f6f: fc 50 86     LDD    $5086
6f72: f3 50 98     ADDD   $5098
6f75: 28 06        BVC    $6F7D
6f77: 0c a7        INC    <$A7
6f79: 28 02        BVC    $6F7D
6f7b: 0a a7        DEC    <$A7
6f7d: fd 50 98     STD    $5098
6f80: fd 50 40     STD    $5040
6f83: fc 50 86     LDD    $5086
6f86: bd cd b1     JSR    $CDB1
6f89: d6 7d        LDB    <$7D
6f8b: 2a 01        BPL    $6F8E
6f8d: 53           COMB
6f8e: 58           ASLB
6f8f: 3d           MUL
6f90: 0d 7d        TST    <$7D
6f92: 2c 04        BGE    $6F98
6f94: 43           COMA
6f95: 50           NEGB
6f96: 82 ff        SBCA   #$FF
6f98: bd cd a0     JSR    $CDA0
6f9b: fd 50 8e     STD    $508E
6f9e: f3 50 9a     ADDD   $509A
6fa1: fd 50 9a     STD    $509A
6fa4: fd 50 42     STD    $5042
6fa7: fc 50 86     LDD    $5086
6faa: bd cd b1     JSR    $CDB1
6fad: d6 7f        LDB    <$7F
6faf: 2a 01        BPL    $6FB2
6fb1: 53           COMB
6fb2: 12           NOP
6fb3: 3d           MUL
6fb4: 0d 7f        TST    <$7F
6fb6: 2a 04        BPL    $6FBC
6fb8: 43           COMA
6fb9: 50           NEGB
6fba: 82 ff        SBCA   #$FF
6fbc: bd cd a0     JSR    $CDA0
6fbf: fd 50 96     STD    $5096
6fc2: f3 50 9c     ADDD   $509C
6fc5: 10 83 1c 00  CMPD   #$1C00
6fc9: 2f 05        BLE    $6FD0
6fcb: cc 1c 00     LDD    #$1C00
6fce: 20 09        BRA    $6FD9
6fd0: 10 83 02 00  CMPD   #$0200
6fd4: 2c 03        BGE    $6FD9
6fd6: cc 02 00     LDD    #$0200
6fd9: fd 50 9c     STD    $509C
6fdc: fd 50 44     STD    $5044
6fdf: 39           RTS
6fe0: fc 50 9c     LDD    $509C
6fe3: 10 83 03 80  CMPD   #$0380
6fe7: 2f 06        BLE    $6FEF
6fe9: 83 01 80     SUBD   #$0180
6fec: fd 50 9c     STD    $509C
6fef: 20 0f        BRA    $7000
6ff1: fc 50 9c     LDD    $509C
6ff4: 10 83 f3 00  CMPD   #$F300
6ff8: 2f 06        BLE    $7000
6ffa: 83 01 00     SUBD   #$0100
6ffd: fd 50 9c     STD    $509C
7000: fc 50 86     LDD    $5086
7003: f3 50 98     ADDD   $5098
7006: fd 50 98     STD    $5098
7009: cc 03 00     LDD    #$0300
700c: b3 50 86     SUBD   $5086
700f: bd cd a2     JSR    $CDA2
7012: f3 50 86     ADDD   $5086
7015: fd 50 86     STD    $5086
7018: b6 4b 15     LDA    $4B15
701b: 44           LSRA
701c: 24 05        BCC    $7023
701e: cc 0b b8     LDD    #$0BB8
7021: 20 03        BRA    $7026
7023: cc f4 48     LDD    #$F448
7026: fd 50 22     STD    $5022
7029: cc 3e eb     LDD    #$3EEB
702c: fd 50 24     STD    $5024
702f: bd ce 24     JSR    $CE24
7032: cc 00 00     LDD    #$0000
7035: 93 a3        SUBD   <$A3
7037: bd 6e 70     JSR    $6E70
703a: 39           RTS
703b: fc 50 86     LDD    $5086
703e: f3 50 98     ADDD   $5098
7041: fd 50 98     STD    $5098
7044: fd 50 40     STD    $5040
7047: fc 50 86     LDD    $5086
704a: bd cd b1     JSR    $CDB1
704d: d6 7d        LDB    <$7D
704f: 2a 01        BPL    $7052
7051: 53           COMB
7052: 3d           MUL
7053: 0d 7d        TST    <$7D
7055: 2c 04        BGE    $705B
7057: 43           COMA
7058: 50           NEGB
7059: 82 ff        SBCA   #$FF
705b: bd cd a0     JSR    $CDA0
705e: fd 50 8e     STD    $508E
7061: f3 50 9a     ADDD   $509A
7064: 10 83 01 ff  CMPD   #$01FF
7068: 2f 03        BLE    $706D
706a: cc 01 ff     LDD    #$01FF
706d: 10 83 fe 01  CMPD   #$FE01
7071: 2c 03        BGE    $7076
7073: cc fe 01     LDD    #$FE01
7076: fd 50 9a     STD    $509A
7079: fd 50 42     STD    $5042
707c: fc 50 86     LDD    $5086
707f: 58           ASLB
7080: 49           ROLA
7081: 58           ASLB
7082: 49           ROLA
7083: 58           ASLB
7084: 49           ROLA
7085: 58           ASLB
7086: 49           ROLA
7087: d6 7f        LDB    <$7F
7089: 2a 01        BPL    $708C
708b: 53           COMB
708c: 58           ASLB
708d: 3d           MUL
708e: 0d 7f        TST    <$7F
7090: 2a 04        BPL    $7096
7092: 43           COMA
7093: 50           NEGB
7094: 82 ff        SBCA   #$FF
7096: 47           ASRA
7097: 56           RORB
7098: 47           ASRA
7099: 56           RORB
709a: 47           ASRA
709b: 56           RORB
709c: 47           ASRA
709d: 56           RORB
709e: fd 50 96     STD    $5096
70a1: f3 50 9c     ADDD   $509C
70a4: 10 83 fe ff  CMPD   #$FEFF
70a8: 2f 03        BLE    $70AD
70aa: cc fe ff     LDD    #$FEFF
70ad: 10 83 f2 01  CMPD   #$F201
70b1: 2c 03        BGE    $70B6
70b3: cc f2 01     LDD    #$F201
70b6: fd 50 9c     STD    $509C
70b9: fd 50 44     STD    $5044
70bc: 39           RTS
70bd: 8e 48 66     LDX    #$4866
70c0: bd 70 f0     JSR    $70F0
70c3: bd 71 11     JSR    $7111
70c6: 27 03        BEQ    $70CB
70c8: bd ce 2f     JSR    $CE2F
70cb: 39           RTS
70cc: 8e 48 6f     LDX    #$486F
70cf: bd 70 f0     JSR    $70F0
70d2: bd 71 11     JSR    $7111
70d5: 27 03        BEQ    $70DA
70d7: bd ce 3a     JSR    $CE3A
70da: 39           RTS
70db: 7e 70db     JMP    $70db
