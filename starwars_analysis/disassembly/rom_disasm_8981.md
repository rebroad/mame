8981: 86 14        LDA    #$14
8983: ce 89 a8     LDU    #$89A8
8986: 33 c6        LEAU   A,U
8988: ec c4        LDD    ,U
898a: fd 50 22     STD    $5022
898d: ec 42        LDD    $2,U
898f: fd 50 24     STD    $5024
8992: 39           RTS
8993: 86 14        LDA    #$14
8995: ce 89 a8     LDU    #$89A8
8998: 33 c6        LEAU   A,U
899a: cc 00 00     LDD    #$0000
899d: a3 c4        SUBD   ,U
899f: fd 50 22     STD    $5022
89a2: ec 42        LDD    $2,U
89a4: fd 50 24     STD    $5024
89a7: 39           RTS
89a8: 00 b5        NEG    <$B5
89aa: 3f           SWI
89ab: ff 01 00     STU    $0100
89ae: 3f           SWI
89af: fe 01 6a     LDU    $016A
89b2: 3f           SWI
89b3: fc 02 1f     LDD    $021F
89b6: 3f           SWI
89b7: f7 03 df     STB    $03DF
89ba: 3f           SWI
89bb: e2 04        SBCB   $4,X
89bd: ff 3f ce     STU    $3FCE
89c0: 05 90        LSR    <$90
89c2: 3f           SWI
89c3: c2 05        SBCB   #$05
89c5: 90 3f        SUBA   <$3F
89c7: c2 4f        SBCB   #$4F
89c9: e6 02        LDB    $2,X
89cb: fd 47 01     STD    $4701
89ce: 86 00        LDA    #$00
89d0: 7e cd ba     JMP    $CDBA
89d3: 4f           CLRA
89d4: e6 02        LDB    $2,X
89d6: fd 47 01     STD    $4701
89d9: 86 0e        LDA    #$0E
89db: 7e cd ba     JMP    $CDBA
89de: 4f           CLRA
89df: e6 02        LDB    $2,X
89e1: fd 47 01     STD    $4701
89e4: 86 1c        LDA    #$1C
89e6: 7e cd ba     JMP    $CDBA
89e9: ec 50        LDD    -$10,U
89eb: bd cd 9e     JSR    $CD9E
89ee: e3 56        ADDD   -$A,U
89f0: ed 56        STD    -$A,U
89f2: ec 58        LDD    -$8,U
89f4: bd cd 9e     JSR    $CD9E
89f7: e3 5e        ADDD   -$2,U
89f9: ed 5e        STD    -$2,U
89fb: ec c4        LDD    ,U
89fd: bd cd 9e     JSR    $CD9E
8a00: e3 46        ADDD   $6,U
8a02: ed 46        STD    $6,U
8a04: 39           RTS
8a05: ec 50        LDD    -$10,U
8a07: bd cd 9c     JSR    $CD9C
8a0a: e3 56        ADDD   -$A,U
8a0c: ed 56        STD    -$A,U
8a0e: ec 58        LDD    -$8,U
8a10: bd cd 9c     JSR    $CD9C
8a13: e3 5e        ADDD   -$2,U
8a15: ed 5e        STD    -$2,U
8a17: ec c4        LDD    ,U
8a19: bd cd 9c     JSR    $CD9C
8a1c: e3 46        ADDD   $6,U
8a1e: ed 46        STD    $6,U
8a20: 39           RTS
8a21: ec 54        LDD    -$C,U
8a23: bd cd 9c     JSR    $CD9C
8a26: e3 56        ADDD   -$A,U
8a28: ed 56        STD    -$A,U
8a2a: ec 5c        LDD    -$4,U
8a2c: bd cd 9c     JSR    $CD9C
8a2f: e3 5e        ADDD   -$2,U
8a31: ed 5e        STD    -$2,U
8a33: ec 44        LDD    $4,U
8a35: bd cd 9c     JSR    $CD9C
8a38: e3 46        ADDD   $6,U
8a3a: ed 46        STD    $6,U
8a3c: 39           RTS
8a3d: ec 54        LDD    -$C,U
8a3f: bd cd 9e     JSR    $CD9E
8a42: e3 56        ADDD   -$A,U
8a44: ed 56        STD    -$A,U
8a46: ec 5c        LDD    -$4,U
8a48: bd cd 9e     JSR    $CD9E
8a4b: e3 5e        ADDD   -$2,U
8a4d: ed 5e        STD    -$2,U
8a4f: ec 44        LDD    $4,U
8a51: bd cd 9e     JSR    $CD9E
8a54: e3 46        ADDD   $6,U
8a56: ed 46        STD    $6,U
8a58: 39           RTS
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
8aba: 29 02        BVS    $013D
8abc: ed 48        STD    $8,U
8abe: ec 5e        LDD    -$2,U
8ac0: e3 4a        ADDD   $A,U
8ac2: 29 02        BVS    $0145
8ac4: ed 4a        STD    $A,U
8ac6: ec 4c        LDD    $C,U
8ac8: e3 46        ADDD   $6,U
8aca: 29 02        BVS    $014D
8acc: ed 4c        STD    $C,U
8ace: 39           RTS
8acf: 9e c2        LDX    <$C2
8ad1: a6 03        LDA    $3,X
8ad3: 81 01        CMPA   #$01
8ad5: 26 04        BNE    $015A
8ad7: a6 06        LDA    $6,X
8ad9: 27 01        BEQ    $015B
8adb: 39           RTS
8adc: bd ce 45     JSR    $CE45
8adf: a6 03        LDA    $3,X
8ae1: 81 01        CMPA   #$01
8ae3: 26 08        BNE    $016C
8ae5: ec 88 15     LDD    $15,X
8ae8: ca 01        ORB    #$01
8aea: ed 88 15     STD    $15,X
8aed: 9e c2        LDX    <$C2
8aef: 6c 08        INC    $8,X
8af1: 6a 07        DEC    $7,X
8af3: 10 2f 00 60  LBLE   $01D6
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
8b30: 25 01        BCS    $01B2
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
8b42: 25 01        BCS    $01C4
8b44: 40           NEGA
8b45: 1f 89        TFR    A,B
8b47: 12           NOP
8b48: 1d           SEX
8b49: e3 46        ADDD   $6,U
8b4b: ed 46        STD    $6,U
8b4d: 30 02        LEAX   $2,X
8b4f: 0a 01        DEC    <$01
8b51: 2a c5        BPL    $0197
8b53: bd bd fd     JSR    $BDFD
8b56: 39           RTS
8b57: 9e c2        LDX    <$C2
8b59: bd bd fd     JSR    $BDFD
8b5c: a6 02        LDA    $2,X
8b5e: b1 4b 38     CMPA   $4B38
8b61: 26 03        BNE    $01E5
8b63: bd bd cb     JSR    $BDCB
8b66: bd b7 39     JSR    $B739
8b69: bd 97 e8     JSR    $97E8
8b6c: 39           RTS
8b6d: 8e 49 00     LDX    #$4900
8b70: 9f 5a        STX    <$5A
8b72: ee 84        LDU    ,X
8b74: a6 03        LDA    $3,X
8b76: 27 03        BEQ    $01FA
8b78: bd 8b e1     JSR    $8BE1
8b7b: 9e 5a        LDX    <$5A
8b7d: 30 88 19     LEAX   $19,X
8b80: 8c 86 14     CMPX   #$0000
