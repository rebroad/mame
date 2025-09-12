8a59: cc 00 00     LDD    #$0000
8a5c: a3 54        SUBD   -$C,U
8a5e: bd cd 9c     JSR    $CD9C
8a61: e3 56        ADDD   -$A,U
8a63: ed 56        STD    -$A,U
8a65: cc 00 00     LDD    #$0000
8a68: a3 5c        SUBD   -$4,U
8a6a: bd cd 9c     JSR    $CD9C
8a6d: e3 5e        ADDD   -$2,U
8a6f: ed 5e        STD    -$2,U
8a71: cc 00 00     LDD    #$0000
8a74: a3 44        SUBD   $4,U
8a76: bd cd 9c     JSR    $CD9C
8a79: e3 46        ADDD   $6,U
8a7b: ed 46        STD    $6,U
8a7d: 39           RTS
8a7e: cc 00 00     LDD    #$0000
8a81: a3 54        SUBD   -$C,U
8a83: bd cd 9e     JSR    $CD9E
8a86: e3 56        ADDD   -$A,U
8a88: ed 56        STD    -$A,U
8a8a: cc 00 00     LDD    #$0000
8a8d: a3 5c        SUBD   -$4,U
8a8f: bd cd 9e     JSR    $CD9E
8a92: e3 5e        ADDD   -$2,U
8a94: ed 5e        STD    -$2,U
8a96: cc 00 00     LDD    #$0000
8a99: a3 44        SUBD   $4,U
8a9b: bd cd 9e     JSR    $CD9E
8a9e: e3 46        ADDD   $6,U
8aa0: ed 46        STD    $6,U
8aa2: 39           RTS
8aa3: 54           LSRB
8aa4: cd           XHCF
8aa5: e5 2d        BITB   $D,Y
8aa7: 3f           SWI
8aa8: 14           XHCF
8aa9: 12           NOP
8aaa: cd           XHCF
8aab: 69 f6        ROL    [A,S]
8aad: ad 33        JSR    -$D,Y
8aaf: aa 28        ORA    $8,Y
8ab1: a6 0b        LDA    $B,X
8ab3: f7 58 d1     STB    $58D1
8ab6: ec 56        LDD    -$A,U
8ab8: e3 48        ADDD   $8,U
8aba: 29 02        BVS    $0065
8abc: ed 48        STD    $8,U
8abe: ec 5e        LDD    -$2,U
8ac0: e3 4a        ADDD   $A,U
8ac2: 29 02        BVS    $006D
8ac4: ed 4a        STD    $A,U
8ac6: ec 4c        LDD    $C,U
8ac8: e3 46        ADDD   $6,U
8aca: 29 02        BVS    $0075
8acc: ed 4c        STD    $C,U
8ace: 39           RTS
8acf: 9e c2        LDX    <$C2
8ad1: a6 03        LDA    $3,X
8ad3: 81 01        CMPA   #$01
8ad5: 26 04        BNE    $0082
8ad7: a6 06        LDA    $6,X
8ad9: 27 01        BEQ    $0083
8adb: 39           RTS
8adc: bd ce 45     JSR    $CE45
8adf: a6 03        LDA    $3,X
8ae1: 81 01        CMPA   #$01
8ae3: 26 08        BNE    $0094
8ae5: ec 88 15     LDD    $15,X
8ae8: ca 01        ORB    #$01
8aea: ed 88 15     STD    $15,X
8aed: 9e c2        LDX    <$C2
8aef: 6c 08        INC    $8,X
8af1: 6a 07        DEC    $7,X
8af3: 10 2f 00 60  LBLE   $00FE
8af7: 86 05        LDA    #$05
8af9: a7 07        STA    $7,X
8afb: bd 97 ed     JSR    $97ED
8afe: 86 1f        LDA    #$1F
8b00: a7 09        STA    $9,X
8b02: a7 06        STA    $6,X
8b04: 8e 50 90     LDX    #$5090
8b07: de c2        LDU    <$C2
8b09: ee c4        LDU    ,U
8b0b: cc 00 00     LDD    #$0000
8b0e: ed 56        STD    -$A,U
8b10: ed 5e        STD    -$2,U
8b12: ed 46        STD    $6,U
8b14: 86 02        LDA    #$02
8b16: 97 01        STA    <$01
8b18: cc 40 00     LDD    #$4000
8b1b: 93 c4        SUBD   <$C4
8b1d: e6 10        LDB    -$10,X
8b1f: 3d           MUL
8b20: 1f 89        TFR    A,B
8b22: 58           ASLB
8b23: 49           ROLA
8b24: 1d           SEX
8b25: e3 56        ADDD   -$A,U
8b27: ed 56        STD    -$A,U
8b29: 96 53        LDA    <$53
8b2b: 8a 80        ORA    #$80
8b2d: e6 18        LDB    -$8,X
8b2f: 3d           MUL
8b30: 25 01        BCS    $00DA
8b32: 40           NEGA
8b33: 1f 89        TFR    A,B
8b35: 12           NOP
8b36: 1d           SEX
8b37: e3 5e        ADDD   -$2,U
8b39: ed 5e        STD    -$2,U
8b3b: 96 54        LDA    <$54
8b3d: 8a 80        ORA    #$80
8b3f: e6 84        LDB    ,X
8b41: 3d           MUL
8b42: 25 01        BCS    $00EC
8b44: 40           NEGA
8b45: 1f 89        TFR    A,B
8b47: 12           NOP
8b48: 1d           SEX
8b49: e3 46        ADDD   $6,U
8b4b: ed 46        STD    $6,U
8b4d: 30 02        LEAX   $2,X
8b4f: 0a 01        DEC    <$01
8b51: 2a c5        BPL    $00BF
8b53: bd bd fd     JSR    $BDFD
8b56: 39           RTS
8b57: 9e c2        LDX    <$C2
8b59: bd bd fd     JSR    $BDFD
8b5c: a6 02        LDA    $2,X
8b5e: b1 4b 38     CMPA   $4B38
8b61: 26 03        BNE    $010D
8b63: bd bd cb     JSR    $BDCB
8b66: bd b7 39     JSR    $B739
8b69: bd 97 e8     JSR    $97E8
8b6c: 39           RTS
8b6d: 8e 49 00     LDX    #$4900
8b70: 9f 5a        STX    <$5A
8b72: ee 84        LDU    ,X
8b74: a6 03        LDA    $3,X
8b76: 27 03        BEQ    $0122
8b78: bd 8b e1     JSR    $8BE1
8b7b: 9e 5a        LDX    <$5A
8b7d: 30 88 19     LEAX   $19,X
8b80: 8c 49 4b     CMPX   #$494B
8b83: 25 eb        BCS    $0117
8b85: 39           RTS
8b86: 8e 49 00     LDX    #$4900
8b89: 9f 5a        STX    <$5A
8b8b: ee 84        LDU    ,X
8b8d: a6 03        LDA    $3,X
8b8f: 81 01        CMPA   #$01
8b91: 26 43        BNE    $017D
8b93: a6 4a        LDA    $A,U
8b95: 81 09        CMPA   #$09
8b97: 2d 02        BLT    $0142
8b99: 80 02        SUBA   #$02
8b9b: 81 f7        CMPA   #$F7
8b9d: 2e 02        BGT    $0148
8b9f: 8b 02        ADDA   #$02
8ba1: a7 4a        STA    $A,U
8ba3: a6 4c        LDA    $C,U
8ba5: 81 09        CMPA   #$09
8ba7: 2d 02        BLT    $0152
8ba9: 80 03        SUBA   #$03
8bab: 81 f7        CMPA   #$F7
8bad: 2e 02        BGT    $0158
8baf: 8b 03        ADDA   #$03
8bb1: a7 4c        STA    $C,U
8bb3: ec 48        LDD    $8,U
8bb5: c3 04 00     ADDD   #$0400
8bb8: 29 04        BVS    $0165
8bba: ed 48        STD    $8,U
8bbc: 20 18        BRA    $017D
8bbe: a6 4a        LDA    $A,U
8bc0: 4d           TSTA
8bc1: 2a 01        BPL    $016B
8bc3: 40           NEGA
8bc4: 81 08        CMPA   #$08
8bc6: 2e 0e        BGT    $017D
8bc8: a6 4c        LDA    $C,U
8bca: 4d           TSTA
8bcb: 2a 01        BPL    $0175
8bcd: 40           NEGA
8bce: 81 08        CMPA   #$08
8bd0: 2e 04        BGT    $017D
8bd2: 86 00        LDA    #$00
8bd4: a7 03        STA    $3,X
8bd6: 9e 5a        LDX    <$5A
8bd8: 30 88 19     LEAX   $19,X
8bdb: 8c 49 4b     CMPX   #$494B
8bde: 25 a9        BCS    $0130
8be0: 39           RTS
8be1: bd 8e 3a     JSR    $8E3A
8be4: cc 00 00     LDD    #$0000
8be7: 97 4c        STA    <$4C
8be9: 97 4e        STA    <$4E
8beb: 97 4d        STA    <$4D
8bed: 97 4f        STA    <$4F
8bef: a6 88 15     LDA    $15,X
8bf2: 84 10        ANDA   #$10
8bf4: f6 47 03     LDB    $4703
8bf7: c4 30        ANDB   #$30
8bf9: ed 88 15     STD    $15,X
8bfc: a6 09        LDA    $9,X
8bfe: 4a           DECA
8bff: 2b 14        BMI    $01BC
8c01: a7 09        STA    $9,X
8c03: cc 16 40     LDD    #$1640
8c06: fd 50 22     STD    $5022
8c09: cc 3c 02     LDD    #$3C02
8c0c: fd 50 24     STD    $5024
8c0f: bd 89 c8     JSR    $89C8
8c12: 7e 8c 44     JMP    $8C44
8c15: e6 88 11     LDB    $11,X
8c18: d7 50        STB    <$50
8c1a: 04 50        LSR    <$50
8c1c: 24 03        BCC    $01C8
8c1e: bd 89 61     JSR    $8961
8c21: 04 50        LSR    <$50
8c23: 24 03        BCC    $01CF
8c25: bd 89 69     JSR    $8969
8c28: 04 50        LSR    <$50
8c2a: 24 03        BCC    $01D6
8c2c: bd 89 51     JSR    $8951
8c2f: 04 50        LSR    <$50
8c31: 24 03        BCC    $01DD
8c33: bd 89 59     JSR    $8959
8c36: 04 50        LSR    <$50
8c38: 24 03        BCC    $01E4
8c3a: bd 89 79     JSR    $8979
8c3d: 04 50        LSR    <$50
8c3f: 24 03        BCC    $01EB
8c41: bd 89 71     JSR    $8971
8c44: bd 8d 9d     JSR    $8D9D
8c47: bd 8d e3     JSR    $8DE3
8c4a: a6 03        LDA    $3,X
8c4c: 81 01        CMPA   #$01
8c4e: 10 26 01 14  LBNE   $030D
8c52: a6 02        LDA    $2,X
8c54: bd ce 0c     JSR    $CE0C
8c57: 9e 5a        LDX    <$5A
