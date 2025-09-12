e7fc: f6 48 ae     LDB    $48AE
e7ff: 8e ea 50     LDX    #$EA50
e802: 3a           ABX
e803: 3a           ABX
e804: 3a           ABX
e805: 3a           ABX
e806: ec 02        LDD    $2,X
e808: b3 48 af     SUBD   $48AF
e80b: 84 1f        ANDA   #$1F
e80d: ed a1        STD    ,Y++
e80f: ec 84        LDD    ,X
e811: ed a1        STD    ,Y++
e813: bd e8 21     JSR    $E821
e816: cc 72 00     LDD    #$7200
e819: ed a1        STD    ,Y++
e81b: cc 80 40     LDD    #$8040
e81e: ed a1        STD    ,Y++
e820: 39           RTS
e821: 8e e8 94     LDX    #$E894
e824: f6 48 ae     LDB    $48AE
e827: 3a           ABX
e828: 3a           ABX
e829: ae 84        LDX    ,X
e82b: e6 80        LDB    ,X+
e82d: bf 48 b1     STX    $48B1
e830: 58           ASLB
e831: c1 82        CMPB   #$82
e833: 25 07        BCS    $E83C
e835: 8e 30 16     LDX    #$3016
e838: c4 7f        ANDB   #$7F
e83a: 20 4c        BRA    $E888
e83c: c1 74        CMPB   #$74
e83e: 26 05        BNE    $E845
e840: 8e 2f de     LDX    #$2FDE
e843: 20 43        BRA    $E888
e845: c1 80        CMPB   #$80
e847: 26 06        BNE    $E84F
e849: 8e 30 58     LDX    #$3058
e84c: 5f           CLRB
e84d: 20 39        BRA    $E888
e84f: c1 60        CMPB   #$60
e851: 25 05        BCS    $E858
e853: 8e 2f a4     LDX    #$2FA4
e856: 20 30        BRA    $E888
e858: c1 40        CMPB   #$40
e85a: 26 05        BNE    $E861
e85c: 8e 2f c2     LDX    #$2FC2
e85f: 20 27        BRA    $E888
e861: c1 4e        CMPB   #$4E
e863: 26 05        BNE    $E86A
e865: 8e 2f fe     LDX    #$2FFE
e868: 20 1e        BRA    $E888
e86a: c1 58        CMPB   #$58
e86c: 26 05        BNE    $E873
e86e: 8e 2f f6     LDX    #$2FF6
e871: 20 15        BRA    $E888
e873: c1 5a        CMPB   #$5A
e875: 26 05        BNE    $E87C
e877: 8e 30 00     LDX    #$3000
e87a: 20 0c        BRA    $E888
e87c: c1 4a        CMPB   #$4A
e87e: 26 05        BNE    $E885
e880: 8e 30 0c     LDX    #$300C
e883: 20 03        BRA    $E888
e885: 8e 2f f4     LDX    #$2FF4
e888: ec 85        LDD    B,X
e88a: ed a1        STD    ,Y++
e88c: be 48 b1     LDX    $48B1
e88f: 6d 1f        TST    -$1,X
e891: 2a 98        BPL    $E82B
e893: 39           RTS
e894: db 3f        ADDB   <$3F
e896: db 48        ADDB   <$48
e898: db 6c        ADDB   <$6C
e89a: db 80        ADDB   <$80
e89c: db a8        ADDB   <$A8
e89e: db a8        ADDB   <$A8
e8a0: db b1        ADDB   <$B1
e8a2: db bd        ADDB   <$BD
e8a4: db c6        ADDB   <$C6
e8a6: db d4        ADDB   <$D4
e8a8: db e1        ADDB   <$E1
e8aa: db ef        ADDB   <$EF
e8ac: dc 04        LDD    <$04
e8ae: dc 0b        LDD    <$0B
e8b0: dc 11        LDD    <$11
e8b2: dc 1c        LDD    <$1C
e8b4: dc 3b        LDD    <$3B
e8b6: dc 5e        LDD    <$5E
e8b8: dc 7d        LDD    <$7D
e8ba: dc 9f        LDD    <$9F
e8bc: dc c2        LDD    <$C2
e8be: dc e3        LDD    <$E3
e8c0: dd 03        STD    <$03
e8c2: dd 12        STD    <$12
e8c4: dd 34        STD    <$34
e8c6: dd 56        STD    <$56
e8c8: dd 74        STD    <$74
e8ca: dd 93        STD    <$93
e8cc: dd a6        STD    <$A6
e8ce: dd c9        STD    <$C9
e8d0: dd ea        STD    <$EA
e8d2: dd fc        STD    <$FC
e8d4: dd fd        STD    <$FD
e8d6: dd fe        STD    <$FE
e8d8: dd ff        STD    <$FF
e8da: de 00        LDU    <$00
e8dc: de 07        LDU    <$07
e8de: de 29        LDU    <$29
e8e0: de 4b        LDU    <$4B
e8e2: de 6d        LDU    <$6D
e8e4: de 8f        LDU    <$8F
e8e6: de b1        LDU    <$B1
e8e8: de d3        LDU    <$D3
e8ea: de f5        LDU    <$F5
e8ec: df 17        STU    <$17
e8ee: df 2a        STU    <$2A
e8f0: df 4a        STU    <$4A
e8f2: df 53        STU    <$53
e8f4: df 57        STU    <$57
e8f6: df 5d        STU    <$5D
e8f8: df 61        STU    <$61
e8fa: df 67        STU    <$67
e8fc: df 6d        STU    <$6D
e8fe: df 73        STU    <$73
e900: df 73        STU    <$73
e902: df 78        STU    <$78
e904: df 80        STU    <$80
e906: df 87        STU    <$87
e908: df 8e        STU    <$8E
e90a: df ad        STU    <$AD
e90c: df c7        STU    <$C7
e90e: df dc        STU    <$DC
e910: df ef        STU    <$EF
e912: df ef        STU    <$EF
e914: e0 0a        SUBB   $A,X
e916: e0 1b        SUBB   -$5,X
e918: e0 21        SUBB   $1,Y
e91a: e0 39        SUBB   -$7,Y
e91c: e0 57        SUBB   -$9,U
e91e: e0 69        SUBB   $9,S
e920: e0 7d        SUBB   -$3,S
e922: e0 90        SUBB   [,W]
e924: e0 aa        SUBB   F,Y
e926: e0 b2        SUBB   Illegal Postbyte
e928: e0 cb        SUBB   D,U
e92a: e0 e2        SUBB   ,-S
e92c: e0 f5        SUBB   [B,S]
e92e: e1 04        CMPB   $4,X
e930: e1 16        CMPB   -$A,X
e932: e1 24        CMPB   $4,Y
e934: e1 31        CMPB   -$F,Y
e936: e1 45        CMPB   $5,U
e938: e1 63        CMPB   $3,S
e93a: e1 85        CMPB   B,X
e93c: e1 a7        CMPB   E,Y
e93e: e1 c8 e1     CMPB   -$1F,U
e941: e8 e2        EORB   ,-S
e943: 05 e2        LSR    <$E2
e945: 20 e2        BRA    $E929
e947: 26 e2        BNE    $E92B
e949: 3c e2        CWAI   #$E2
e94b: 45           LSRA
e94c: e2 54        SBCB   -$C,U
e94e: e2 64        SBCB   $4,S
e950: e2 74        SBCB   -$C,S
e952: e2 80        SBCB   ,X+
e954: e2 89 e2 aa  SBCB   -$1D56,X
e958: e2 bb        SBCB   [D,Y]
e95a: e2 da        SBCB   [F,U]
e95c: e2 f8 e3     SBCB   [-$1D,S]
e95f: 0d e3        TST    <$E3
e961: 19           DAA
e962: e3 28        ADDD   $8,Y
e964: e3 37        ADDD   -$9,Y
e966: e3 47        ADDD   $7,U
e968: e3 52        ADDD   -$E,U
e96a: e3 61        ADDD   $1,S
e96c: e3 70        ADDD   -$10,S
e96e: e3 7c        ADDD   -$4,S
e970: e3 8c e3     ADDD   $E956,PCR
e973: 9d e3        JSR    <$E3
e975: ae e3        LDX    ,--S
e977: bb e3 c6     ADDA   $E3C6
e97a: e3 dc e3     ADDD   [$E960,PCR]
e97d: fc e4 05     LDD    $E405
e980: e4 0e        ANDB   $E,X
e982: e4 16        ANDB   -$A,X
e984: e4 1e        ANDB   -$2,X
e986: e4 1f        ANDB   -$1,X
e988: e4 20        ANDB   $0,Y
e98a: e4 21        ANDB   $1,Y
e98c: e4 22        ANDB   $2,Y
e98e: e4 23        ANDB   $3,Y
e990: e4 24        ANDB   $4,Y
e992: e4 28        ANDB   $8,Y
e994: e4 31        ANDB   -$F,Y
e996: e4 3a        ANDB   -$6,Y
e998: e4 43        ANDB   $3,U
e99a: e4 4c        ANDB   $C,U
e99c: e4 55        ANDB   -$B,U
e99e: e4 55        ANDB   -$B,U
e9a0: e4 59        ANDB   -$7,U
e9a2: e4 5a        ANDB   -$6,U
e9a4: e4 5b        ANDB   -$5,U
e9a6: e4 5c        ANDB   -$4,U
e9a8: e4 5d        ANDB   -$3,U
e9aa: e4 61        ANDB   $1,S
e9ac: e4 69        ANDB   $9,S
e9ae: e4 6d        ANDB   $D,S
e9b0: e4 74        ANDB   -$C,S
e9b2: e4 75        ANDB   -$B,S
e9b4: e4 76        ANDB   -$A,S
e9b6: e4 77        ANDB   -$9,S
e9b8: e4 78        ANDB   -$8,S
e9ba: e4 7b        ANDB   -$5,S
e9bc: e4 7d        ANDB   -$3,S
e9be: e4 7f        ANDB   -$1,S
e9c0: e4 82        ANDB   ,-X
e9c2: e4 84        ANDB   ,X
e9c4: e4 87        ANDB   E,X
e9c6: e4 89 e4 8c  ANDB   -$1B74,X
e9ca: e4 8e        ANDB   W,X
e9cc: e4 91        ANDB   [,X++]
e9ce: e4 9a        ANDB   [F,X]
e9d0: e4 a2        ANDB   ,-Y
e9d2: e4 ad e4 b6  ANDB   $CE8C,PCR
e9d6: e4 c0        ANDB   ,U+
e9d8: e4 c7        ANDB   E,U
e9da: e4 d0        ANDB   [,W++]
e9dc: e4 d4        ANDB   [,U]
e9de: e4 dc e4     ANDB   [$E9C5,PCR]
e9e1: e5 e4        BITB   ,S
e9e3: ef e4        STU    ,S
e9e5: ef e4        STU    ,S
e9e7: f0 e4 fa     SUBB   $E4FA
e9ea: e5 05        BITB   $5,X
e9ec: e5 0c        BITB   $C,X
e9ee: e5 0c        BITB   $C,X
e9f0: e5 0c        BITB   $C,X
e9f2: e5 0d        BITB   $D,X
e9f4: e5 15        BITB   -$B,X
e9f6: e5 24        BITB   $4,Y
e9f8: e5 36        BITB   -$A,Y
e9fa: e5 48        BITB   $8,U
