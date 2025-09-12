f86c: c6 07        LDB    #$07
f86e: 44           LSRA
f86f: 24 05        BCC    $F876
f871: be 30 22     LDX    $3022
f874: 20 03        BRA    $F879
f876: be 30 32     LDX    $3032
f879: af a1        STX    ,Y++
f87b: 5a           DECB
f87c: 2a f0        BPL    $F86E
f87e: cc 80 40     LDD    #$8040
f881: ed a1        STD    ,Y++
f883: 39           RTS
f884: cc bf 20     LDD    #$BF20
f887: ed a1        STD    ,Y++
f889: 7e f7 0d     JMP    $F70D
f88c: cc be fd     LDD    #$BEFD
f88f: ed a1        STD    ,Y++
f891: 7e f7 0d     JMP    $F70D
f894: cc be a7     LDD    #$BEA7
f897: ed a1        STD    ,Y++
f899: c6 ce        LDB    #$CE
f89b: d7 ce        STB    <$CE
f89d: bd e7 c7     JSR    $E7C7
f8a0: d6 ce        LDB    <$CE
f8a2: 5c           INCB
f8a3: c1 d3        CMPB   #$D3
f8a5: 25 f4        BCS    $F89B
f8a7: 7e f7 0d     JMP    $F70D
f8aa: cc bf ae     LDD    #$BFAE
f8ad: ed a1        STD    ,Y++
f8af: cc bf b3     LDD    #$BFB3
f8b2: ed a1        STD    ,Y++
f8b4: ed a1        STD    ,Y++
f8b6: ed a1        STD    ,Y++
f8b8: ed a1        STD    ,Y++
f8ba: cc 80 40     LDD    #$8040
f8bd: ed a1        STD    ,Y++
f8bf: c6 c9        LDB    #$C9
f8c1: bd e7 c7     JSR    $E7C7
f8c4: c6 ca        LDB    #$CA
f8c6: bd e7 c7     JSR    $E7C7
f8c9: 7e f7 0d     JMP    $F70D
f8cc: 96 c6        LDA    <$C6
f8ce: 81 01        CMPA   #$01
f8d0: 22 07        BHI    $F8D9
f8d2: cc 00 00     LDD    #$0000
f8d5: dd c2        STD    <$C2
f8d7: 97 c4        STA    <$C4
f8d9: cc 60 00     LDD    #$6000
f8dc: ed a1        STD    ,Y++
f8de: cc bf af     LDD    #$BFAF
f8e1: ed a1        STD    ,Y++
f8e3: cc 80 40     LDD    #$8040
f8e6: ed a1        STD    ,Y++
f8e8: dc c2        LDD    <$C2
f8ea: c3 00 01     ADDD   #$0001
f8ed: 0d c4        TST    <$C4
f8ef: 26 0f        BNE    $F900
f8f1: c1 fc        CMPB   #$FC
f8f3: 25 07        BCS    $F8FC
f8f5: 86 01        LDA    #$01
f8f7: 97 c4        STA    <$C4
f8f9: cc 00 00     LDD    #$0000
f8fc: dd c2        STD    <$C2
f8fe: 20 17        BRA    $F917
f900: c1 b0        CMPB   #$B0
f902: 25 02        BCS    $F906
f904: 5f           CLRB
f905: 4c           INCA
f906: 81 08        CMPA   #$08
f908: 25 05        BCS    $F90F
f90a: 0f c4        CLR    <$C4
f90c: cc 00 00     LDD    #$0000
f90f: dd c2        STD    <$C2
f911: c1 7f        CMPB   #$7F
f913: 25 02        BCS    $F917
f915: c6 7f        LDB    #$7F
f917: 8a 70        ORA    #$70
f919: ed a1        STD    ,Y++
f91b: cc 62 80     LDD    #$6280
f91e: ed a1        STD    ,Y++
f920: cc bf bc     LDD    #$BFBC
f923: ed a1        STD    ,Y++
f925: cc 72 00     LDD    #$7200
f928: ed a1        STD    ,Y++
f92a: d6 c4        LDB    <$C4
f92c: 26 04        BNE    $F932
f92e: c6 cc        LDB    #$CC
f930: 20 02        BRA    $F934
f932: c6 cd        LDB    #$CD
f934: bd e7 c7     JSR    $E7C7
f937: c6 cb        LDB    #$CB
f939: bd e7 c7     JSR    $E7C7
f93c: 7e f7 0d     JMP    $F70D
f93f: cc bf c8     LDD    #$BFC8
f942: ed a1        STD    ,Y++
f944: 8e 00 38     LDX    #$0038
f947: cc bf cc     LDD    #$BFCC
f94a: ed a1        STD    ,Y++
f94c: 30 1f        LEAX   -$1,X
f94e: 26 fa        BNE    $F94A
f950: cc 80 40     LDD    #$8040
f953: ed a1        STD    ,Y++
f955: 7e f7 0d     JMP    $F70D
f958: cc bf ae     LDD    #$BFAE
f95b: ed a1        STD    ,Y++
f95d: cc 80 40     LDD    #$8040
f960: ed a1        STD    ,Y++
f962: cc 72 00     LDD    #$7200
f965: ed a1        STD    ,Y++
f967: 10 ce 4f ff  LDS    #$4FFF
f96b: c6 c2        LDB    #$C2
f96d: bd e7 c7     JSR    $E7C7
f970: 86 5d        LDA    #$5D
f972: b7 47 00     STA    $4700
f975: 7d 43 20     TST    $4320
f978: 2a 05        BPL    $F97F
f97a: 7d 43 20     TST    $4320
f97d: 2a 0b        BPL    $F98A
f97f: c6 c3        LDB    #$C3
f981: bd e7 c7     JSR    $E7C7
f984: ce f7 27     LDU    #$F727
f987: 7e f7 0d     JMP    $F70D
f98a: cc 62 80     LDD    #$6280
f98d: ed a1        STD    ,Y++
f98f: 0f cc        CLR    <$CC
f991: 8e fb 4b     LDX    #$FB4B
f994: 10 ce f9 9b  LDS    #$F99B
f998: 7e fb 38     JMP    $FB38
f99b: 27 7c        BEQ    $FA19
f99d: dd d2        STD    <$D2
f99f: 0c cc        INC    <$CC
f9a1: 10 ce 4f ff  LDS    #$4FFF
f9a5: ec 06        LDD    $6,X
f9a7: ed a1        STD    ,Y++
f9a9: cc 1e 98     LDD    #$1E98
f9ac: ed a1        STD    ,Y++
f9ae: fc 30 32     LDD    $3032
f9b1: ed a1        STD    ,Y++
f9b3: ed a1        STD    ,Y++
f9b5: ed a1        STD    ,Y++
f9b7: ed a1        STD    ,Y++
f9b9: fc 30 02     LDD    $3002
f9bc: ed a1        STD    ,Y++
f9be: 1f 10        TFR    X,D
f9c0: 83 fb 4b     SUBD   #$FB4B
f9c3: 58           ASLB
f9c4: 86 03        LDA    #$03
f9c6: 58           ASLB
f9c7: 25 05        BCS    $F9CE
f9c9: fe 30 22     LDU    $3022
f9cc: 20 03        BRA    $F9D1
f9ce: fe 30 32     LDU    $3032
f9d1: ef a1        STU    ,Y++
f9d3: 4a           DECA
f9d4: 2a f0        BPL    $F9C6
f9d6: fc 30 02     LDD    $3002
f9d9: ed a1        STD    ,Y++
f9db: ed a1        STD    ,Y++
f9dd: a6 84        LDA    ,X
f9df: bd e7 90     JSR    $E790
f9e2: a6 01        LDA    $1,X
f9e4: bd e7 90     JSR    $E790
f9e7: fc 30 02     LDD    $3002
f9ea: ed a1        STD    ,Y++
f9ec: a6 02        LDA    $2,X
f9ee: bd e7 90     JSR    $E790
f9f1: a6 03        LDA    $3,X
f9f3: bd e7 90     JSR    $E790
f9f6: fc 30 02     LDD    $3002
f9f9: ed a1        STD    ,Y++
f9fb: a6 04        LDA    $4,X
f9fd: bd e7 90     JSR    $E790
fa00: a6 05        LDA    $5,X
fa02: bd e7 90     JSR    $E790
fa05: fc 30 02     LDD    $3002
fa08: ed a1        STD    ,Y++
fa0a: 96 d2        LDA    <$D2
fa0c: bd e7 90     JSR    $E790
fa0f: 96 d3        LDA    <$D3
fa11: bd e7 90     JSR    $E790
fa14: cc 80 40     LDD    #$8040
fa17: ed a1        STD    ,Y++
fa19: 30 08        LEAX   $8,X
fa1b: 8c fb 73     CMPX   #$FB73
fa1e: 10 25 ff 72  LBCS   $F994
fa22: 10 ce 4f ff  LDS    #$4FFF
fa26: 0d cc        TST    <$CC
fa28: 26 04        BNE    $FA2E
fa2a: c6 c5        LDB    #$C5
fa2c: 20 07        BRA    $FA35
fa2e: c6 c4        LDB    #$C4
fa30: bd e7 c7     JSR    $E7C7
fa33: c6 c6        LDB    #$C6
fa35: bd e7 c7     JSR    $E7C7
fa38: 8e fa e1     LDX    #$FAE1
fa3b: 0f cc        CLR    <$CC
fa3d: cc 64 80     LDD    #$6480
fa40: ed a1        STD    ,Y++
fa42: 1f 10        TFR    X,D
fa44: 83 fa e9     SUBD   #$FAE9
fa47: 54           LSRB
fa48: 10 ce fa 4e  LDS    #$FA4E
fa4c: 6e 94        JMP    [,X]
fa4e: 27 71        BEQ    $FAC1
fa50: dd d2        STD    <$D2
fa52: 0c cc        INC    <$CC
fa54: 8c fa f9     CMPX   #$FAF9
fa57: 24 39        BCC    $FA92
fa59: ec 02        LDD    $2,X
fa5b: ed a1        STD    ,Y++
fa5d: cc 1e a2     LDD    #$1EA2
fa60: ed a1        STD    ,Y++
fa62: fc 30 32     LDD    $3032
fa65: ed a1        STD    ,Y++
fa67: ed a1        STD    ,Y++
fa69: ed a1        STD    ,Y++
fa6b: fc 00 00     LDD    >$0000
