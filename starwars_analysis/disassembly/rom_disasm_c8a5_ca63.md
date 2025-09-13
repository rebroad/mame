c8a5: dc 01        LDD    <$01
c8a7: ed a1        STD    ,Y++
c8a9: a6 80        LDA    ,X+
c8ab: 26 0f        BNE    $C8BC
c8ad: 7d 4a ec     TST    $4AEC
c8b0: 2b 05        BMI    $C8B7
c8b2: fc 30 54     LDD    $3054
c8b5: 20 03        BRA    $C8BA
c8b7: fc 30 02     LDD    $3002
c8ba: 20 03        BRA    $C8BF
c8bc: 48           ASLA
c8bd: ec c6        LDD    A,U
c8bf: ed a1        STD    ,Y++
c8c1: 7d 4a ec     TST    $4AEC
c8c4: 2b 1b        BMI    $C8E1
c8c6: b6 4a ee     LDA    $4AEE
c8c9: 81 02        CMPA   #$02
c8cb: 26 10        BNE    $C8DD
c8cd: b6 48 43     LDA    $4843
c8d0: 84 01        ANDA   #$01
c8d2: 26 05        BNE    $C8D9
c8d4: fc 4b 10     LDD    $4B10
c8d7: 20 02        BRA    $C8DB
c8d9: dc 01        LDD    <$01
c8db: 20 02        BRA    $C8DF
c8dd: dc 01        LDD    <$01
c8df: ed a1        STD    ,Y++
c8e1: a6 80        LDA    ,X+
c8e3: 26 0f        BNE    $C8F4
c8e5: 7d 4a ec     TST    $4AEC
c8e8: 2b 05        BMI    $C8EF
c8ea: fc 30 54     LDD    $3054
c8ed: 20 03        BRA    $C8F2
c8ef: fc 30 02     LDD    $3002
c8f2: 20 03        BRA    $C8F7
c8f4: 48           ASLA
c8f5: ec c6        LDD    A,U
c8f7: ed a1        STD    ,Y++
c8f9: dc 01        LDD    <$01
c8fb: ed a1        STD    ,Y++
c8fd: cc 80 40     LDD    #$8040
c900: ed a1        STD    ,Y++
c902: fe 4a f1     LDU    $4AF1
c905: ec c4        LDD    ,U
c907: ed a1        STD    ,Y++
c909: cc 1f 38     LDD    #$1F38
c90c: ed a1        STD    ,Y++
c90e: b6 4a ea     LDA    $4AEA
c911: 4c           INCA
c912: 81 0a        CMPA   #$0A
c914: 25 02        BCS    $C918
c916: 86 10        LDA    #$10
c918: c6 01        LDB    #$01
c91a: d7 ad        STB    <$AD
c91c: bd e7 90     JSR    $E790
c91f: cc b8 dc     LDD    #$B8DC
c922: ed a1        STD    ,Y++
c924: cc 80 40     LDD    #$8040
c927: ed a1        STD    ,Y++
c929: f6 4a ea     LDB    $4AEA
c92c: 58           ASLB
c92d: 58           ASLB
c92e: 8e 4a 8e     LDX    #$4A8E
c931: 3a           ABX
c932: fe 4a f1     LDU    $4AF1
c935: ec c1        LDD    ,U++
c937: ed a1        STD    ,Y++
c939: cc 1f f0     LDD    #$1FF0
c93c: ed a1        STD    ,Y++
c93e: ff 4a f1     STU    $4AF1
c941: c6 06        LDB    #$06
c943: d7 ad        STB    <$AD
c945: bd e7 64     JSR    $E764
c948: 30 04        LEAX   $4,X
c94a: cc 80 40     LDD    #$8040
c94d: ed a1        STD    ,Y++
c94f: 7c 4a ea     INC    $4AEA
c952: b6 4a ea     LDA    $4AEA
c955: 81 0a        CMPA   #$0A
c957: 10 25 fe cb  LBCS   $C826
c95b: cc 72 00     LDD    #$7200
c95e: ed a1        STD    ,Y++
c960: fc 4a ec     LDD    $4AEC
c963: 2a 01        BPL    $C966
c965: 39           RTS
c966: cc 64 80     LDD    #$6480
c969: ed a1        STD    ,Y++
c96b: 8e cb a8     LDX    #$CBA8
c96e: ce 30 18     LDU    #$3018
c971: ec 02        LDD    $2,X
c973: 84 1f        ANDA   #$1F
c975: ed a1        STD    ,Y++
c977: ec 84        LDD    ,X
c979: 84 1f        ANDA   #$1F
c97b: ed a1        STD    ,Y++
c97d: ec c1        LDD    ,U++
c97f: ed a1        STD    ,Y++
c981: cc 80 40     LDD    #$8040
c984: ed a1        STD    ,Y++
c986: 30 04        LEAX   $4,X
c988: 8c cc 10     CMPX   #$CC10
c98b: 25 e4        BCS    $C971
c98d: fc cb a6     LDD    $CBA6
c990: 84 1f        ANDA   #$1F
c992: ed a1        STD    ,Y++
c994: fc cb a4     LDD    $CBA4
c997: 84 1f        ANDA   #$1F
c999: ed a1        STD    ,Y++
c99b: fc 30 54     LDD    $3054
c99e: ed a1        STD    ,Y++
c9a0: cc 72 00     LDD    #$7200
c9a3: ed a1        STD    ,Y++
c9a5: cc 80 40     LDD    #$8040
c9a8: ed a1        STD    ,Y++
c9aa: f6 4a ef     LDB    $4AEF
c9ad: c1 1b        CMPB   #$1B
c9af: 26 05        BNE    $C9B6
c9b1: cc 67 50     LDD    #$6750
c9b4: 20 03        BRA    $C9B9
c9b6: cc 64 50     LDD    #$6450
c9b9: ed a1        STD    ,Y++
c9bb: ec 02        LDD    $2,X
c9bd: 84 1f        ANDA   #$1F
c9bf: ed a1        STD    ,Y++
c9c1: ec 84        LDD    ,X
c9c3: 83 00 08     SUBD   #$0008
c9c6: 84 1f        ANDA   #$1F
c9c8: ed a1        STD    ,Y++
c9ca: cc 71 c0     LDD    #$71C0
c9cd: ed a1        STD    ,Y++
c9cf: fc 30 3a     LDD    $303A
c9d2: ed a1        STD    ,Y++
c9d4: fc 30 40     LDD    $3040
c9d7: ed a1        STD    ,Y++
c9d9: fc 30 1a     LDD    $301A
c9dc: ed a1        STD    ,Y++
c9de: cc 72 00     LDD    #$7200
c9e1: ed a1        STD    ,Y++
c9e3: cc 80 40     LDD    #$8040
c9e6: ed a1        STD    ,Y++
c9e8: f6 4a ef     LDB    $4AEF
c9eb: c1 1c        CMPB   #$1C
c9ed: 26 05        BNE    $C9F4
c9ef: cc 67 50     LDD    #$6750
c9f2: 20 03        BRA    $C9F7
c9f4: cc 64 50     LDD    #$6450
c9f7: ed a1        STD    ,Y++
c9f9: ec 06        LDD    $6,X
c9fb: 84 1f        ANDA   #$1F
c9fd: ed a1        STD    ,Y++
c9ff: ec 04        LDD    $4,X
ca01: 83 00 08     SUBD   #$0008
ca04: 84 1f        ANDA   #$1F
ca06: ed a1        STD    ,Y++
ca08: cc 71 c0     LDD    #$71C0
ca0b: ed a1        STD    ,Y++
ca0d: fc 30 20     LDD    $3020
ca10: ed a1        STD    ,Y++
ca12: fc 30 32     LDD    $3032
ca15: ed a1        STD    ,Y++
ca17: fc 30 1e     LDD    $301E
ca1a: ed a1        STD    ,Y++
ca1c: cc 72 00     LDD    #$7200
ca1f: ed a1        STD    ,Y++
ca21: cc 80 40     LDD    #$8040
ca24: ed a1        STD    ,Y++
ca26: cc 67 80     LDD    #$6780
ca29: ed a1        STD    ,Y++
ca2b: f6 4a ef     LDB    $4AEF
ca2e: c1 1b        CMPB   #$1B
ca30: 24 29        BCC    $CA5B
ca32: 58           ASLB
ca33: 58           ASLB
ca34: 8e cb a4     LDX    #$CBA4
ca37: 3a           ABX
ca38: ec 02        LDD    $2,X
ca3a: 84 1f        ANDA   #$1F
ca3c: ed a1        STD    ,Y++
ca3e: ec 84        LDD    ,X
ca40: 84 1f        ANDA   #$1F
ca42: ed a1        STD    ,Y++
ca44: f6 4a ef     LDB    $4AEF
ca47: 26 05        BNE    $CA4E
ca49: fc 30 54     LDD    $3054
ca4c: 20 06        BRA    $CA54
ca4e: 58           ASLB
ca4f: 8e 30 16     LDX    #$3016
ca52: ec 85        LDD    B,X
ca54: ed a1        STD    ,Y++
ca56: cc 80 40     LDD    #$8040
ca59: ed a1        STD    ,Y++
ca5b: cc 66 80     LDD    #$6680
ca5e: ed a1        STD    ,Y++
ca60: bd b6 cc     JSR    $B6CC
ca63: 39           RTS
