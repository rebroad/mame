6aa0: 0e 83        JMP    <$83
6aa2: 00 11        NEG    <$11
6aa4: 25 04        BCS    $000A
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
6ada: 25 22        BCS    $005E
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
6b16: 23 02        BLS    $007A
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
6b37: 10 2b 01 a6  LBMI   $0241
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
6b5c: 26 3b        BNE    $00F9
6b5e: b6 4b 0e     LDA    $4B0E
6b61: 81 02        CMPA   #$02
6b63: 26 03        BNE    $00C8
6b65: bd bd 9e     JSR    $BD9E
6b68: b6 4b 12     LDA    $4B12
6b6b: 44           LSRA
6b6c: 25 15        BCS    $00E3
6b6e: b6 4b 0e     LDA    $4B0E
6b71: 81 10        CMPA   #$10
6b73: 26 05        BNE    $00DA
6b75: bd bd 6c     JSR    $BD6C
6b78: 20 07        BRA    $00E1
6b7a: 81 18        CMPA   #$18
6b7c: 26 03        BNE    $00E1
6b7e: bd bd 76     JSR    $BD76
6b81: 20 13        BRA    $00F6
6b83: b6 4b 0e     LDA    $4B0E
6b86: 81 10        CMPA   #$10
6b88: 26 05        BNE    $00EF
6b8a: bd bd 30     JSR    $BD30
6b8d: 20 07        BRA    $00F6
6b8f: 81 16        CMPA   #$16
6b91: 26 03        BNE    $00F6
6b93: bd bd 62     JSR    $BD62
6b96: 7c 4b 0e     INC    $4B0E
6b99: 96 92        LDA    <$92
6b9b: 27 3d        BEQ    $013A
6b9d: dc 93        LDD    <$93
6b9f: b3 50 98     SUBD   $5098
6ba2: 83 08 00     SUBD   #$0800
6ba5: 22 33        BHI    $013A
6ba7: b6 48 45     LDA    $4845
6baa: 26 1a        BNE    $0126
6bac: 86 01        LDA    #$01
6bae: b7 4b 3e     STA    $4B3E
6bb1: bd bd b2     JSR    $BDB2
6bb4: bd 98 74     JSR    $9874
6bb7: 96 60        LDA    <$60
6bb9: 10 2f 01 24  LBLE   $0241
6bbd: 86 31        LDA    #$31
6bbf: 97 41        STA    <$41
6bc1: bd bd 3a     JSR    $BD3A
6bc4: 20 14        BRA    $013A
6bc6: 86 11        LDA    #$11
6bc8: 97 41        STA    <$41
6bca: b6 4b 15     LDA    $4B15
6bcd: 81 03        CMPA   #$03
6bcf: 2d 09        BLT    $013A
6bd1: 84 01        ANDA   #$01
6bd3: 27 05        BEQ    $013A
6bd5: bd bd 17     JSR    $BD17
6bd8: 20 00        BRA    $013A
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
6bf5: 26 35        BNE    $018C
6bf7: 7a 4b 0e     DEC    $4B0E
6bfa: b6 4b 0e     LDA    $4B0E
6bfd: 81 03        CMPA   #$03
6bff: 26 08        BNE    $0169
6c01: b6 48 45     LDA    $4845
6c04: 27 03        BEQ    $0169
6c06: bd 98 06     JSR    $9806
6c09: b6 4b 0e     LDA    $4B0E
6c0c: 81 02        CMPA   #$02
6c0e: 26 03        BNE    $0173
6c10: bd 97 75     JSR    $9775
6c13: b6 4b 0e     LDA    $4B0E
6c16: 81 01        CMPA   #$01
6c18: 26 08        BNE    $0182
6c1a: b6 48 45     LDA    $4845
6c1d: 27 03        BEQ    $0182
6c1f: bd 95 3b     JSR    $953B
6c22: b6 4b 0e     LDA    $4B0E
6c25: 81 00        CMPA   #$00
6c27: 26 03        BNE    $018C
6c29: bd 97 22     JSR    $9722
6c2c: bd 75 19     JSR    $7519
6c2f: bd 95 58     JSR    $9558
6c32: bd 6f 5f     JSR    $6F5F
6c35: b6 4b 0e     LDA    $4B0E
6c38: 81 fe        CMPA   #$FE
6c3a: 26 39        BNE    $01D5
6c3c: b6 4b 15     LDA    $4B15
6c3f: 4c           INCA
6c40: 81 62        CMPA   #$62
6c42: 23 02        BLS    $01A6
6c44: 86 62        LDA    #$62
6c46: b7 4b 15     STA    $4B15
6c49: b6 4b 15     LDA    $4B15
6c4c: 81 05        CMPA   #$05
6c4e: 24 0d        BCC    $01BD
6c50: b6 4b 17     LDA    $4B17
6c53: 4c           INCA
6c54: 81 04        CMPA   #$04
6c56: 23 02        BLS    $01BA
6c58: 86 04        LDA    #$04
6c5a: b7 4b 17     STA    $4B17
6c5d: b6 4b 18     LDA    $4B18
6c60: bb 4b 17     ADDA   $4B17
6c63: 81 0f        CMPA   #$0F
6c65: 23 02        BLS    $01C9
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
6c9f: bd 0e 83     JSR    >$0000
