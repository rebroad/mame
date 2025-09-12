d882: 80 24        SUBA   #$24
d884: 04 0c        LSR    <$0C
d886: 12           NOP
d887: 0c 12        INC    <$12
d889: d7 13        STB    <$13
d88b: 96 09        LDA    <$09
d88d: 84 03        ANDA   #$03
d88f: 27 1b        BEQ    $002A
d891: 1f 89        TFR    A,B
d893: 40           NEGA
d894: 47           ASRA
d895: 9b 12        ADDA   <$12
d897: 2a 0b        BPL    $0022
d899: 0d 13        TST    <$13
d89b: 2a 11        BPL    $002C
d89d: 4c           INCA
d89e: 2b 0e        BMI    $002C
d8a0: 08 13        ASL    <$13
d8a2: 04 13        LSR    <$13
d8a4: c1 01        CMPB   #$01
d8a6: 26 02        BNE    $0028
d8a8: 0c 14        INC    <$14
d8aa: 0c 14        INC    <$14
d8ac: 97 12        STA    <$12
d8ae: d6 0a        LDB    <$0A
d8b0: c4 0f        ANDB   #$0F
d8b2: 26 2a        BNE    $005C
d8b4: 8e 48 17     LDX    #$4817
d8b7: a6 84        LDA    ,X
d8b9: 2a 05        BPL    $003E
d8bb: 84 7f        ANDA   #$7F
d8bd: 5c           INCB
d8be: a7 84        STA    ,X
d8c0: 30 1f        LEAX   -$1,X
d8c2: 8c 48 15     CMPX   #$4815
d8c5: 2c f0        BGE    $0035
d8c7: 5d           TSTB
d8c8: 26 14        BNE    $005C
d8ca: 8e 48 17     LDX    #$4817
d8cd: a6 84        LDA    ,X
d8cf: 27 06        BEQ    $0055
d8d1: 8b 7f        ADDA   #$7F
d8d3: a7 84        STA    ,X
d8d5: 20 07        BRA    $005C
d8d7: 30 1f        LEAX   -$1,X
d8d9: 8c 48 15     CMPX   #$4815
d8dc: 2c ef        BGE    $004B
d8de: 39           RTS
d8df: 8e 4a 52     LDX    #$4A52
d8e2: bc 4a d9     CMPX   $4AD9
d8e5: 24 0a        BCC    $006F
d8e7: a1 80        CMPA   ,X+
d8e9: 26 01        BNE    $006A
d8eb: 39           RTS
d8ec: bc 4a d9     CMPX   $4AD9
d8ef: 25 f6        BCS    $0065
d8f1: a7 80        STA    ,X+
d8f3: bf 4a d9     STX    $4AD9
d8f6: 39           RTS
d8f7: 8e 4a 52     LDX    #$4A52
d8fa: a1 84        CMPA   ,X
d8fc: 26 14        BNE    $0090
d8fe: fe 4a d9     LDU    $4AD9
d901: 11 83 4a 52  CMPU   #$4A52
d905: 23 0b        BLS    $0090
d907: 33 5f        LEAU   -$1,U
d909: a6 c4        LDA    ,U
d90b: a7 84        STA    ,X
d90d: ff 4a d9     STU    $4AD9
d910: 30 c4        LEAX   ,U
d912: 30 01        LEAX   $1,X
d914: bc 4a d9     CMPX   $4AD9
d917: 25 e1        BCS    $0078
d919: 39           RTS
d91a: 8e 4a 52     LDX    #$4A52
d91d: 6f 84        CLR    ,X
d91f: bf 4a d9     STX    $4AD9
d922: 39           RTS
d923: ce 4a 52     LDU    #$4A52
d926: 11 b3 4a d9  CMPU   $4AD9
d92a: 24 15        BCC    $00BF
d92c: e6 c0        LDB    ,U+
d92e: c1 d6        CMPB   #$D6
d930: 24 09        BCC    $00B9
d932: f7 48 ae     STB    $48AE
d935: bd e7 dd     JSR    $E7DD
d938: bd e7 fc     JSR    $E7FC
d93b: 11 b3 4a d9  CMPU   $4AD9
d93f: 25 eb        BCS    $00AA
d941: 39           RTS
d942: ce 4a 52     LDU    #$4A52
d945: 11 b3 4a d9  CMPU   $4AD9
d949: 24 12        BCC    $00DB
d94b: e6 c0        LDB    ,U+
d94d: c1 d6        CMPB   #$D6
d94f: 24 06        BCC    $00D5
d951: f7 48 ae     STB    $48AE
d954: bd e7 fc     JSR    $E7FC
d957: 11 b3 4a d9  CMPU   $4AD9
d95b: 25 ee        BCS    $00C9
d95d: 39           RTS
d95e: fe 4a dd     LDU    $4ADD
d961: a7 c0        STA    ,U+
d963: cc 00 00     LDD    #$0000
d966: ed c1        STD    ,U++
d968: cc 01 00     LDD    #$0100
d96b: ed c1        STD    ,U++
d96d: ff 4a dd     STU    $4ADD
d970: 39           RTS
d971: ce 4a 66     LDU    #$4A66
d974: a1 c4        CMPA   ,U
d976: 26 04        BNE    $00FA
d978: 86 00        LDA    #$00
d97a: ed c4        STD    ,U
d97c: 33 45        LEAU   $5,U
d97e: 11 b3 4a dd  CMPU   $4ADD
d982: 25 f0        BCS    $00F2
d984: 39           RTS
d985: ce 4a 66     LDU    #$4A66
d988: 11 b3 4a dd  CMPU   $4ADD
d98c: 24 4d        BCC    $0159
d98e: cc 72 00     LDD    #$7200
d991: ed a1        STD    ,Y++
d993: a6 c0        LDA    ,U+
d995: 27 3c        BEQ    $0151
d997: b7 48 ae     STA    $48AE
d99a: cc 01 98     LDD    #$0198
d99d: ed a1        STD    ,Y++
d99f: cc 00 00     LDD    #$0000
d9a2: ed a1        STD    ,Y++
d9a4: e6 c4        LDB    ,U
d9a6: 86 71        LDA    #$71
d9a8: ed a1        STD    ,Y++
d9aa: 53           COMB
d9ab: cb 10        ADDB   #$10
d9ad: 86 62        LDA    #$62
d9af: ed a1        STD    ,Y++
d9b1: 8e e9 9e     LDX    #$E99E
d9b4: f6 48 ae     LDB    $48AE
d9b7: 3a           ABX
d9b8: 3a           ABX
d9b9: cc 1d d0     LDD    #$1DD0
d9bc: ed a1        STD    ,Y++
d9be: ec 84        LDD    ,X
d9c0: 84 1f        ANDA   #$1F
d9c2: 8a 00        ORA    #$00
d9c4: ed a1        STD    ,Y++
d9c6: bd e8 21     JSR    $E821
d9c9: cc 72 00     LDD    #$7200
d9cc: ed a1        STD    ,Y++
d9ce: cc 80 40     LDD    #$8040
d9d1: ed a1        STD    ,Y++
d9d3: 33 44        LEAU   $4,U
d9d5: 11 b3 4a dd  CMPU   $4ADD
d9d9: 25 b8        BCS    $0111
d9db: 39           RTS
d9dc: cc 00 00     LDD    #$0000
d9df: fd 4a e4     STD    $4AE4
d9e2: cc 60 18     LDD    #$6018
d9e5: fd 4a e6     STD    $4AE6
d9e8: cc 4a 66     LDD    #$4A66
d9eb: fd 4a dd     STD    $4ADD
d9ee: fc db 2f     LDD    $DB2F
d9f1: fd 4a e2     STD    $4AE2
d9f4: 86 51        LDA    #$51
d9f6: b7 4a df     STA    $4ADF
d9f9: 39           RTS
d9fa: fc 4a e4     LDD    $4AE4
d9fd: c3 00 01     ADDD   #$0001
da00: fd 4a e4     STD    $4AE4
da03: 10 83 00 f8  CMPD   #$00F8
da07: 10 24 00 89  LBCC   $0212
da0b: 10 83 00 40  CMPD   #$0040
da0f: 24 0d        BCC    $019C
da11: fc 4a e6     LDD    $4AE6
da14: cb 03        ADDB   #$03
da16: fd 4a e6     STD    $4AE6
da19: cc 00 40     LDD    #$0040
da1c: 20 0c        BRA    $01A8
da1e: fc 4a e4     LDD    $4AE4
da21: 53           COMB
da22: cb 18        ADDB   #$18
da24: fd 4a e6     STD    $4AE6
da27: fc 4a e4     LDD    $4AE4
da2a: 8a 73        ORA    #$73
da2c: fd 4a e8     STD    $4AE8
da2f: fc 4a e6     LDD    $4AE6
da32: 8a 61        ORA    #$61
da34: ed a1        STD    ,Y++
da36: cc 01 98     LDD    #$0198
da39: ed a4        STD    ,Y
da3b: ed 28        STD    $8,Y
da3d: ed a8 10     STD    $10,Y
da40: ed a8 18     STD    $18,Y
da43: ed a8 20     STD    $20,Y
da46: ed a8 28     STD    $28,Y
da49: cc 00 00     LDD    #$0000
da4c: ed 22        STD    $2,Y
da4e: ed 2a        STD    $A,Y
da50: ed a8 12     STD    $12,Y
da53: ed a8 1a     STD    $1A,Y
da56: ed a8 22     STD    $22,Y
da59: ed a8 2a     STD    $2A,Y
da5c: fc 4a e8     LDD    $4AE8
da5f: ed 24        STD    $4,Y
da61: ed 2c        STD    $C,Y
da63: ed a8 14     STD    $14,Y
da66: ed a8 1c     STD    $1C,Y
da69: ed a8 24     STD    $24,Y
da6c: ed a8 2c     STD    $2C,Y
da6f: cc b4 00     LDD    #$B400
da72: ed 26        STD    $6,Y
da74: cc b4 34     LDD    #$B434
da77: ed 2e        STD    $E,Y
da79: cc b4 58     LDD    #$B458
da7c: ed a8 16     STD    $16,Y
da7f: cc b4 88     LDD    #$B488
