a7f7: 96 95        LDA    <$95
a7f9: 27 05        BEQ    $A800
a7fb: bd a7 05     JSR    $A705
a7fe: 20 03        BRA    $A803
a800: bd a6 f4     JSR    $A6F4
a803: 86 09        LDA    #$09
a805: a7 04        STA    $4,X
a807: ee 84        LDU    ,X
a809: 20 14        BRA    $A81F
a80b: 96 95        LDA    <$95
a80d: 27 05        BEQ    $A814
a80f: bd a7 05     JSR    $A705
a812: 20 03        BRA    $A817
a814: bd a6 f4     JSR    $A6F4
a817: 86 0a        LDA    #$0A
a819: a7 04        STA    $4,X
a81b: ee 84        LDU    ,X
a81d: 20 00        BRA    $A81F
a81f: fc 50 78     LDD    $5078
a822: ed c4        STD    ,U
a824: fc 50 7a     LDD    $507A
a827: ed 42        STD    $2,U
a829: fc 50 7c     LDD    $507C
a82c: ed 44        STD    $4,U
a82e: 86 40        LDA    #$40
a830: a7 05        STA    $5,X
a832: 86 05        LDA    #$05
a834: a7 03        STA    $3,X
a836: b6 47 03     LDA    $4703
a839: 44           LSRA
a83a: f6 50 7c     LDB    $507C
a83d: c1 fc        CMPB   #$FC
a83f: 2d 02        BLT    $A843
a841: 86 00        LDA    #$00
a843: a7 46        STA    $6,U
a845: bd be 11     JSR    $BE11
a848: 39           RTS
a849: 8e 49 4b     LDX    #$494B
a84c: 9f a8        STX    <$A8
a84e: a6 03        LDA    $3,X
a850: 27 0f        BEQ    $A861
a852: e6 04        LDB    $4,X
a854: 58           ASLB
a855: c1 16        CMPB   #$16
a857: 24 07        BCC    $A860
a859: ce a6 75     LDU    #$A675
a85c: ad d5        JSR    [B,U]
a85e: 20 01        BRA    $A861
a860: 3f           SWI
a861: 9e a8        LDX    <$A8
a863: 30 06        LEAX   $6,X
a865: 8c 49 6f     CMPX   #$496F
a868: 25 e2        BCS    $A84C
a86a: 39           RTS
a86b: 6a 05        DEC    $5,X
a86d: 2e 05        BGT    $A874
a86f: 5f           CLRB
a870: e7 03        STB    $3,X
a872: e7 05        STB    $5,X
a874: 39           RTS
a875: 6a 05        DEC    $5,X
a877: 2e 07        BGT    $A880
a879: 5f           CLRB
a87a: e7 03        STB    $3,X
a87c: e7 05        STB    $5,X
a87e: 20 26        BRA    $A8A6
a880: ee 84        LDU    ,X
a882: cc 00 00     LDD    #$0000
a885: a3 c4        SUBD   ,U
a887: bd cd a2     JSR    $CDA2
a88a: e3 c4        ADDD   ,U
a88c: ed c4        STD    ,U
a88e: cc 00 00     LDD    #$0000
a891: a3 42        SUBD   $2,U
a893: bd cd a2     JSR    $CDA2
a896: e3 42        ADDD   $2,U
a898: ed 42        STD    $2,U
a89a: cc 00 00     LDD    #$0000
a89d: a3 44        SUBD   $4,U
a89f: bd cd a2     JSR    $CDA2
a8a2: e3 44        ADDD   $4,U
a8a4: ed 44        STD    $4,U
a8a6: 39           RTS
a8a7: 6a 05        DEC    $5,X
a8a9: 2e 07        BGT    $A8B2
a8ab: 5f           CLRB
a8ac: e7 03        STB    $3,X
a8ae: e7 05        STB    $5,X
a8b0: 20 23        BRA    $A8D5
a8b2: ee 84        LDU    ,X
a8b4: ec c4        LDD    ,U
a8b6: bd cd a2     JSR    $CDA2
a8b9: e3 c4        ADDD   ,U
a8bb: 29 19        BVS    $A8D6
a8bd: ed c4        STD    ,U
a8bf: ec 42        LDD    $2,U
a8c1: bd cd a2     JSR    $CDA2
a8c4: e3 42        ADDD   $2,U
a8c6: 29 0e        BVS    $A8D6
a8c8: ed 42        STD    $2,U
a8ca: ec 44        LDD    $4,U
a8cc: bd cd a2     JSR    $CDA2
a8cf: e3 44        ADDD   $4,U
a8d1: 29 03        BVS    $A8D6
a8d3: ed 44        STD    $4,U
a8d5: 39           RTS
a8d6: 5f           CLRB
a8d7: e7 03        STB    $3,X
a8d9: 39           RTS
a8da: ee 84        LDU    ,X
a8dc: cc ff 00     LDD    #$FF00
a8df: e3 c4        ADDD   ,U
a8e1: ed c4        STD    ,U
a8e3: 7e aa 7d     JMP    $AA7D
a8e6: ee 84        LDU    ,X
a8e8: cc ff 00     LDD    #$FF00
a8eb: e3 c4        ADDD   ,U
a8ed: ed c4        STD    ,U
a8ef: cc ff 00     LDD    #$FF00
a8f2: e3 42        ADDD   $2,U
a8f4: ed 42        STD    $2,U
a8f6: 7e aa 7d     JMP    $AA7D
a8f9: ee 84        LDU    ,X
a8fb: cc ff 00     LDD    #$FF00
a8fe: e3 c4        ADDD   ,U
a900: ed c4        STD    ,U
a902: cc 01 00     LDD    #$0100
a905: e3 42        ADDD   $2,U
a907: ed 42        STD    $2,U
a909: 7e aa 7d     JMP    $AA7D
a90c: e6 c4        LDB    ,U
a90e: f0 50 98     SUBB   $5098
a911: 2b 0c        BMI    $A91F
a913: 4f           CLRA
a914: bd cd b5     JSR    $CDB5
a917: 43           COMA
a918: 50           NEGB
a919: 82 ff        SBCA   #$FF
a91b: e3 c4        ADDD   ,U
a91d: ed c4        STD    ,U
a91f: 39           RTS
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
a9f6: 2f 00        BLE    $A9F8
