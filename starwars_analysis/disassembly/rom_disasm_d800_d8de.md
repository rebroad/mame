d800: 0a 0b        DEC    <$0B
d802: 86 00        LDA    #$00
d804: a7 84        STA    ,X
d806: a7 03        STA    $3,X
d808: a6 03        LDA    $3,X
d80a: 27 54        BEQ    $D860
d80c: 6a 03        DEC    $3,X
d80e: 27 1f        BEQ    $D82F
d810: 20 4e        BRA    $D860
d812: 81 1b        CMPA   #$1B
d814: 24 08        BCC    $D81E
d816: a6 84        LDA    ,X
d818: 8b 20        ADDA   #$20
d81a: 24 d3        BCC    $D7EF
d81c: 26 04        BNE    $D822
d81e: 86 1f        LDA    #$1F
d820: 20 cd        BRA    $D7EF
d822: 86 1f        LDA    #$1F
d824: a7 84        STA    ,X
d826: e6 03        LDB    $3,X
d828: 86 78        LDA    #$78
d82a: a7 03        STA    $3,X
d82c: 5d           TSTB
d82d: 27 31        BEQ    $D860
d82f: 4f           CLRA
d830: 8c 48 0d     CMPX   #$480D
d833: 25 1e        BCS    $D853
d835: 27 14        BEQ    $D84B
d837: 96 09        LDA    <$09
d839: 84 0c        ANDA   #$0C
d83b: 44           LSRA
d83c: 44           LSRA
d83d: 27 14        BEQ    $D853
d83f: 8b 02        ADDA   #$02
d841: 20 10        BRA    $D853
d843: ff 04 08     STU    $0408
d846: 08 0a        ASL    <$0A
d848: ff ff ff     STU    $FFFF
d84b: 96 09        LDA    <$09
d84d: 84 10        ANDA   #$10
d84f: 27 02        BEQ    $D853
d851: 86 01        LDA    #$01
d853: 4c           INCA
d854: 1f 89        TFR    A,B
d856: db 13        ADDB   <$13
d858: d7 13        STB    <$13
d85a: 9b 12        ADDA   <$12
d85c: 97 12        STA    <$12
d85e: 6c 09        INC    $9,X
d860: 30 1f        LEAX   -$1,X
d862: 8c 48 0c     CMPX   #$480C
d865: 10 2c ff 65  LBGE   $D7CE
d869: 96 09        LDA    <$09
d86b: 44           LSRA
d86c: 44           LSRA
d86d: 44           LSRA
d86e: 44           LSRA
d86f: 44           LSRA
d870: d6 13        LDB    <$13
d872: 58           ASLB
d873: 8e d8 43     LDX    #$D843
d876: e0 86        SUBB   A,X
d878: 25 11        BCS    $D88B
d87a: 08 13        ASL    <$13
d87c: 56           RORB
d87d: 81 03        CMPA   #$03
d87f: 27 04        BEQ    $D885
d881: cb 80        ADDB   #$80
d883: 24 04        BCC    $D889
d885: 0c 12        INC    <$12
d887: 0c 12        INC    <$12
d889: d7 13        STB    <$13
d88b: 96 09        LDA    <$09
d88d: 84 03        ANDA   #$03
d88f: 27 1b        BEQ    $D8AC
d891: 1f 89        TFR    A,B
d893: 40           NEGA
d894: 47           ASRA
d895: 9b 12        ADDA   <$12
d897: 2a 0b        BPL    $D8A4
d899: 0d 13        TST    <$13
d89b: 2a 11        BPL    $D8AE
d89d: 4c           INCA
d89e: 2b 0e        BMI    $D8AE
d8a0: 08 13        ASL    <$13
d8a2: 04 13        LSR    <$13
d8a4: c1 01        CMPB   #$01
d8a6: 26 02        BNE    $D8AA
d8a8: 0c 14        INC    <$14
d8aa: 0c 14        INC    <$14
d8ac: 97 12        STA    <$12
d8ae: d6 0a        LDB    <$0A
d8b0: c4 0f        ANDB   #$0F
d8b2: 26 2a        BNE    $D8DE
d8b4: 8e 48 17     LDX    #$4817
d8b7: a6 84        LDA    ,X
d8b9: 2a 05        BPL    $D8C0
d8bb: 84 7f        ANDA   #$7F
d8bd: 5c           INCB
d8be: a7 84        STA    ,X
d8c0: 30 1f        LEAX   -$1,X
d8c2: 8c 48 15     CMPX   #$4815
d8c5: 2c f0        BGE    $D8B7
d8c7: 5d           TSTB
d8c8: 26 14        BNE    $D8DE
d8ca: 8e 48 17     LDX    #$4817
d8cd: a6 84        LDA    ,X
d8cf: 27 06        BEQ    $D8D7
d8d1: 8b 7f        ADDA   #$7F
d8d3: a7 84        STA    ,X
d8d5: 20 07        BRA    $D8DE
d8d7: 30 1f        LEAX   -$1,X
d8d9: 8c 48 15     CMPX   #$4815
d8dc: 2c ef        BGE    $D8CD
d8de: 39           RTS
d8df: 8e 4a 52     LDX    #$4A52
d8e2: bc 4a d9     CMPX   $4AD9
d8e5: 24 0a        BCC    $D8F1
d8e7: a1 80        CMPA   ,X+
d8e9: 26 01        BNE    $D8EC
d8eb: 39           RTS
d8ec: bc 4a d9     CMPX   $4AD9
d8ef: 25 f6        BCS    $D8E7
d8f1: a7 80        STA    ,X+
d8f3: bf 4a d9     STX    $4AD9
d8f6: 39           RTS
d8f7: 8e 4a 52     LDX    #$4A52
d8fa: a1 84        CMPA   ,X
d8fc: 26 14        BNE    $D912
d8fe: fe 4a d9     LDU    $4AD9
d901: 11 83 4a 52  CMPU   #$4A52
d905: 23 0b        BLS    $D912
d907: 33 5f        LEAU   -$1,U
d909: a6 c4        LDA    ,U
d90b: a7 84        STA    ,X
d90d: ff 4a d9     STU    $4AD9
d910: 30 c4        LEAX   ,U
d912: 30 01        LEAX   $1,X
d914: bc 4a d9     CMPX   $4AD9
d917: 25 e1        BCS    $D8FA
d919: 39           RTS
d91a: 8e 4a 52     LDX    #$4A52
d91d: 6f 84        CLR    ,X
d91f: bf 4a d9     STX    $4AD9
d922: 39           RTS
d923: ce 4a 52     LDU    #$4A52
d926: 11 b3 4a d9  CMPU   $4AD9
d92a: 24 15        BCC    $D941
d92c: e6 c0        LDB    ,U+
d92e: c1 d6        CMPB   #$D6
d930: 24 09        BCC    $D93B
d932: f7 48 ae     STB    $48AE
d935: bd e7 dd     JSR    $E7DD
d938: bd e7 fc     JSR    $E7FC
d93b: 11 b3 4a d9  CMPU   $4AD9
d93f: 25 eb        BCS    $D92C
d941: 39           RTS
d942: ce 4a 52     LDU    #$4A52
d945: 11 b3 4a d9  CMPU   $4AD9
d949: 24 12        BCC    $D95D
d94b: e6 c0        LDB    ,U+
d94d: c1 d6        CMPB   #$D6
d94f: 24 06        BCC    $D957
d951: f7 48 ae     STB    $48AE
d954: bd e7 fc     JSR    $E7FC
d957: 11 b3 4a d9  CMPU   $4AD9
d95b: 25 ee        BCS    $D94B
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
d976: 26 04        BNE    $D97C
d978: 86 00        LDA    #$00
d97a: ed c4        STD    ,U
d97c: 33 45        LEAU   $5,U
d97e: 11 b3 4a dd  CMPU   $4ADD
d982: 25 f0        BCS    $D974
d984: 39           RTS
d985: ce 4a 66     LDU    #$4A66
d988: 11 b3 4a dd  CMPU   $4ADD
d98c: 24 4d        BCC    $D9DB
d98e: cc 72 00     LDD    #$7200
d991: ed a1        STD    ,Y++
d993: a6 c0        LDA    ,U+
d995: 27 3c        BEQ    $D9D3
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
d9d9: 25 b8        BCS    $D993
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
