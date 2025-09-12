a920: cc 00 00     LDD    #$0000
a923: b3 50 8e     SUBD   $508E
a926: bd cd a2     JSR    $CDA2
a929: f3 50 8e     ADDD   $508E
a92c: 2a 04        BPL    $A932
a92e: e3 42        ADDD   $2,U
a930: ed 42        STD    $2,U
a932: 39           RTS
a933: cc 00 00     LDD    #$0000
a936: b3 50 8e     SUBD   $508E
a939: bd cd a2     JSR    $CDA2
a93c: f3 50 8e     ADDD   $508E
a93f: 2b 04        BMI    $A945
a941: e3 42        ADDD   $2,U
a943: ed 42        STD    $2,U
a945: 39           RTS
a946: ee 84        LDU    ,X
a948: bd a9 33     JSR    $A933
a94b: bd a9 0c     JSR    $A90C
a94e: ec c4        LDD    ,U
a950: b3 50 98     SUBD   $5098
a953: e6 47        LDB    $7,U
a955: 3d           MUL
a956: 6d 46        TST    $6,U
a958: 26 04        BNE    $A95E
a95a: 43           COMA
a95b: 50           NEGB
a95c: 82 ff        SBCA   #$FF
a95e: f3 50 9a     ADDD   $509A
a961: a3 42        SUBD   $2,U
a963: c3 01 00     ADDD   #$0100
a966: 2b 10        BMI    $A978
a968: bd cd a2     JSR    $CDA2
a96b: 10 83 01 80  CMPD   #$0180
a96f: 2f 03        BLE    $A974
a971: cc 01 80     LDD    #$0180
a974: e3 42        ADDD   $2,U
a976: 20 0e        BRA    $A986
a978: bd cd 9e     JSR    $CD9E
a97b: 10 83 fe 80  CMPD   #$FE80
a97f: 2c 03        BGE    $A984
a981: cc fe 80     LDD    #$FE80
a984: e3 42        ADDD   $2,U
a986: ed 42        STD    $2,U
a988: fc 50 9c     LDD    $509C
a98b: c3 01 00     ADDD   #$0100
a98e: a3 44        SUBD   $4,U
a990: 2b 10        BMI    $A9A2
a992: bd cd a2     JSR    $CDA2
a995: 10 83 02 00  CMPD   #$0200
a999: 2f 03        BLE    $A99E
a99b: cc 02 00     LDD    #$0200
a99e: e3 44        ADDD   $4,U
a9a0: ed 44        STD    $4,U
a9a2: 39           RTS
a9a3: ee 84        LDU    ,X
a9a5: bd a9 20     JSR    $A920
a9a8: bd a9 0c     JSR    $A90C
a9ab: ec c4        LDD    ,U
a9ad: b3 50 98     SUBD   $5098
a9b0: e6 47        LDB    $7,U
a9b2: 3d           MUL
a9b3: 6d 46        TST    $6,U
a9b5: 27 04        BEQ    $A9BB
a9b7: 43           COMA
a9b8: 50           NEGB
a9b9: 82 ff        SBCA   #$FF
a9bb: f3 50 9a     ADDD   $509A
a9be: c3 ff 00     ADDD   #$FF00
a9c1: a3 42        SUBD   $2,U
a9c3: 2b 10        BMI    $A9D5
a9c5: bd cd 9e     JSR    $CD9E
a9c8: 10 83 01 80  CMPD   #$0180
a9cc: 2f 03        BLE    $A9D1
a9ce: cc 01 80     LDD    #$0180
a9d1: e3 42        ADDD   $2,U
a9d3: 20 0e        BRA    $A9E3
a9d5: bd cd a2     JSR    $CDA2
a9d8: 10 83 fe 80  CMPD   #$FE80
a9dc: 2c 03        BGE    $A9E1
a9de: cc fe 80     LDD    #$FE80
a9e1: e3 42        ADDD   $2,U
a9e3: ed 42        STD    $2,U
a9e5: fc 50 9c     LDD    $509C
a9e8: c3 01 00     ADDD   #$0100
a9eb: a3 44        SUBD   $4,U
a9ed: 2b 10        BMI    $A9FF
a9ef: bd cd a2     JSR    $CDA2
a9f2: 10 83 02 00  CMPD   #$0200
a9f6: 2f 03        BLE    $A9FB
a9f8: cc 02 00     LDD    #$0200
a9fb: e3 44        ADDD   $4,U
a9fd: ed 44        STD    $4,U
a9ff: 39           RTS
aa00: ee 84        LDU    ,X
aa02: cc ff 00     LDD    #$FF00
aa05: e3 c4        ADDD   ,U
aa07: ed c4        STD    ,U
aa09: fc 50 9c     LDD    $509C
aa0c: c3 00 80     ADDD   #$0080
aa0f: a3 44        SUBD   $4,U
aa11: 2b 10        BMI    $AA23
aa13: bd cd a2     JSR    $CDA2
aa16: 10 83 01 80  CMPD   #$0180
aa1a: 2f 03        BLE    $AA1F
aa1c: cc 01 80     LDD    #$0180
aa1f: e3 44        ADDD   $4,U
aa21: ed 44        STD    $4,U
aa23: 20 58        BRA    $AA7D
aa25: ee 84        LDU    ,X
aa27: cc ff 00     LDD    #$FF00
aa2a: e3 c4        ADDD   ,U
aa2c: ed c4        STD    ,U
aa2e: cc ff 00     LDD    #$FF00
aa31: e3 42        ADDD   $2,U
aa33: ed 42        STD    $2,U
aa35: fc 50 9c     LDD    $509C
aa38: c3 00 80     ADDD   #$0080
aa3b: a3 44        SUBD   $4,U
aa3d: 2b 10        BMI    $AA4F
aa3f: bd cd a2     JSR    $CDA2
aa42: 10 83 01 80  CMPD   #$0180
aa46: 2f 03        BLE    $AA4B
aa48: cc 01 80     LDD    #$0180
aa4b: e3 44        ADDD   $4,U
aa4d: ed 44        STD    $4,U
aa4f: 20 2c        BRA    $AA7D
aa51: ee 84        LDU    ,X
aa53: cc ff 00     LDD    #$FF00
aa56: e3 c4        ADDD   ,U
aa58: ed c4        STD    ,U
aa5a: cc 01 00     LDD    #$0100
aa5d: e3 42        ADDD   $2,U
aa5f: ed 42        STD    $2,U
aa61: fc 50 9c     LDD    $509C
aa64: c3 00 80     ADDD   #$0080
aa67: a3 44        SUBD   $4,U
aa69: 2b 10        BMI    $AA7B
aa6b: bd cd a2     JSR    $CDA2
aa6e: 10 83 01 80  CMPD   #$0180
aa72: 2f 03        BLE    $AA77
aa74: cc 01 80     LDD    #$0180
aa77: e3 44        ADDD   $4,U
aa79: ed 44        STD    $4,U
aa7b: 20 00        BRA    $AA7D
aa7d: a6 03        LDA    $3,X
aa7f: 85 02        BITA   #$02
aa81: 27 02        BEQ    $AA85
aa83: 6f 03        CLR    $3,X
aa85: 39           RTS
aa86: ee 84        LDU    ,X
aa88: bd a9 0c     JSR    $A90C
aa8b: fc 50 9c     LDD    $509C
aa8e: a3 44        SUBD   $4,U
aa90: 2b 07        BMI    $AA99
aa92: bd cd a0     JSR    $CDA0
aa95: e3 44        ADDD   $4,U
aa97: ed 44        STD    $4,U
aa99: b6 4b 19     LDA    $4B19
aa9c: 81 01        CMPA   #$01
aa9e: 25 05        BCS    $AAA5
aaa0: fc 50 9a     LDD    $509A
aaa3: 20 03        BRA    $AAA8
aaa5: cc fe 80     LDD    #$FE80
aaa8: a3 42        SUBD   $2,U
aaaa: 2b 07        BMI    $AAB3
aaac: bd cd a0     JSR    $CDA0
aaaf: e3 42        ADDD   $2,U
aab1: ed 42        STD    $2,U
aab3: 20 c8        BRA    $AA7D
aab5: ee 84        LDU    ,X
aab7: bd a9 0c     JSR    $A90C
aaba: fc 50 9c     LDD    $509C
aabd: a3 44        SUBD   $4,U
aabf: 2b 07        BMI    $AAC8
aac1: bd cd a0     JSR    $CDA0
aac4: e3 44        ADDD   $4,U
aac6: ed 44        STD    $4,U
aac8: b6 4b 19     LDA    $4B19
aacb: 81 01        CMPA   #$01
aacd: 25 05        BCS    $AAD4
aacf: fc 50 9a     LDD    $509A
aad2: 20 03        BRA    $AAD7
aad4: cc 01 80     LDD    #$0180
aad7: a3 42        SUBD   $2,U
aad9: 2a 07        BPL    $AAE2
aadb: bd cd a0     JSR    $CDA0
aade: e3 42        ADDD   $2,U
aae0: ed 42        STD    $2,U
aae2: 20 99        BRA    $AA7D
aae4: 8e 49 4b     LDX    #$494B
aae7: 9f a8        STX    <$A8
aae9: a6 03        LDA    $3,X
aaeb: 10 27 01 45  LBEQ   $AC34
aaef: 85 10        BITA   #$10
aaf1: 27 06        BEQ    $AAF9
aaf3: bd ac b1     JSR    $ACB1
aaf6: 7e ac 34     JMP    $AC34
aaf9: 85 04        BITA   #$04
aafb: 27 14        BEQ    $AB11
aafd: fc 50 98     LDD    $5098
ab00: fd 50 40     STD    $5040
ab03: fc 50 9a     LDD    $509A
ab06: fd 50 42     STD    $5042
ab09: fc 50 9c     LDD    $509C
ab0c: fd 50 44     STD    $5044
ab0f: 20 0c        BRA    $AB1D
ab11: cc 00 00     LDD    #$0000
ab14: fd 50 40     STD    $5040
ab17: fd 50 42     STD    $5042
ab1a: fd 50 44     STD    $5044
ab1d: 4f           CLRA
ab1e: e6 02        LDB    $2,X
