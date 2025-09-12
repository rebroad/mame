e700: 4e        XCLRA
e701: 54        LSRB
e702: 45        LSRA
e703: 4e        XCLRA
e704: 53        COMB
e705: 49        ROLA
e706: 54        LSRB
e707: 59        ROLB
e708: 20 54     BRA    $E75E
e70a: 45        LSRA
e70b: 53        COMB
e70c: d4 50     ANDB   <$50
e70e: 52        XNCB
e70f: 45        LSRA
e710: 53        COMB
e711: 53        COMB
e712: 20 41     BRA    $E755
e714: 55        LSRB
e715: 58        ASLB
e716: 20 43     BRA    $E75B
e718: 4f        CLRA
e719: 49        ROLA
e71a: 4e        XCLRA
e71b: 20 54     BRA    $E771
e71d: 4f        CLRA
e71e: 20 43     BRA    $E763
e720: 4f        CLRA
e721: 4e        XCLRA
e722: 54        LSRB
e723: 49        ROLA
e724: 4e        XCLRA
e725: 55        LSRB
e726: c5 50     BITB   #$50
e728: 52        XNCB
e729: 45        LSRA
e72a: 53        COMB
e72b: 53        COMB
e72c: 20 41     BRA    $E76F
e72e: 55        LSRB
e72f: 58        ASLB
e730: 20 43     BRA    $E775
e732: 4f        CLRA
e733: 49        ROLA
e734: 4e        XCLRA
e735: 20 46     BRA    $E77D
e737: 4f        CLRA
e738: 52        XNCB
e739: 20 53     BRA    $E78E
e73b: 45        LSRA
e73c: 4c        INCA
e73d: 46        RORA
e73e: 20 54     BRA    $E794
e740: 45        LSRA
e741: 53        COMB
e742: d4 50     ANDB   <$50
e744: 55        LSRB
e745: 4c        INCA
e746: 4c        INCA
e747: 20 52     BRA    $E79B
e749: 49        ROLA
e74a: 47        ASRA
e74b: 48        ASLA
e74c: 54        LSRB
e74d: 20 46     BRA    $E795
e74f: 49        ROLA
e750: 52        XNCB
e751: 45        LSRA
e752: 20 54     BRA    $E7A8
e754: 4f        CLRA
e755: 20 50     BRA    $E7A7
e757: 45        LSRA
e758: 52        XNCB
e759: 46        RORA
e75a: 4f        CLRA
e75b: 52        XNCB
e75c: 4d        TSTA
e75d: 20 52     BRA    $E7B1
e75f: 45        LSRA
e760: 53        COMB
e761: 45        LSRA
e762: 54        LSRB
e763: d3 a6     ADDD   <$A6
e765: 84 bd     ANDA   #$BD
e767: e7 90     STB    [,W]
e769: 96 ad     LDA    <$AD
e76b: 2e 05     BGT    $E772
e76d: cc b9 13  LDD    #$B913
e770: ed a1     STD    ,Y++
e772: a6 01     LDA    $1,X
e774: bd e7 90  JSR    $E790
e777: a6 02     LDA    $2,X
e779: 44        LSRA
e77a: 44        LSRA
e77b: 44        LSRA
e77c: 44        LSRA
e77d: bd e7 ad  JSR    $E7AD
e780: 96 ad     LDA    <$AD
e782: 2e 05     BGT    $E789
e784: cc b9 13  LDD    #$B913
e787: ed a1     STD    ,Y++
e789: a6 02     LDA    $2,X
e78b: bd e7 ad  JSR    $E7AD
e78e: a6 03     LDA    $3,X
e790: 1f 89     TFR    A,B
e792: 54        LSRB
e793: 54        LSRB
e794: 54        LSRB
e795: c4 1e     ANDB   #$1E
e797: 26 09     BNE    $E7A2
e799: 0d ad     TST    <$AD
e79b: 2f 05     BLE    $E7A2
e79d: fe 30 02  LDU    $3002
e7a0: 20 07     BRA    $E7A9
e7a2: 0f ad     CLR    <$AD
e7a4: ce 30 04  LDU    #$3004
e7a7: ee c5     LDU    B,U
e7a9: 0a ad     DEC    <$AD
e7ab: ef a1     STU    ,Y++
e7ad: 48        ASLA
e7ae: 84 1e     ANDA   #$1E
e7b0: 26 09     BNE    $E7BB
e7b2: 0d ad     TST    <$AD
e7b4: 2f 05     BLE    $E7BB
e7b6: fe 30 02  LDU    $3002
e7b9: 20 07     BRA    $E7C2
e7bb: 0f ad     CLR    <$AD
e7bd: ce 30 04  LDU    #$3004
e7c0: ee c6     LDU    A,U
e7c2: 0a ad     DEC    <$AD
e7c4: ef a1     STU    ,Y++
e7c6: 39        RTS
e7c7: c1 d6     CMPB   #$D6
e7c9: 24 07     BCC    $E7D2
e7cb: f7 48 ae  STB    $48AE
e7ce: 8d 0d     BSR    $E7DD
e7d0: 8d 18     BSR    $E7EA
e7d2: 39        RTS
e7d3: c1 d6     CMPB   #$D6
e7d5: 24 05     BCC    $E7DC
e7d7: f7 48 ae  STB    $48AE
e7da: 8d 0e     BSR    $E7EA
e7dc: 39        RTS
e7dd: f6 48 ae  LDB    $48AE
e7e0: 8e ed a8  LDX    #$EDA8
e7e3: 3a        ABX
e7e4: 3a        ABX
e7e5: ec 84     LDD    ,X
e7e7: ed a1     STD    ,Y++
e7e9: 39        RTS
e7ea: f6 48 ae  LDB    $48AE
e7ed: 8e ea 50  LDX    #$EA50
e7f0: 3a        ABX
e7f1: 3a        ABX
e7f2: 3a        ABX
e7f3: 3a        ABX
e7f4: ec 02     LDD    $2,X
e7f6: ed a1     STD    ,Y++
e7f8: ec 84     LDD    ,X
e7fa: 20 15     BRA    $E811
e7fc: f6 48 ae  LDB    $48AE
e7ff: 8e ea 50  LDX    #$EA50
e802: 3a        ABX
e803: 3a        ABX
e804: 3a        ABX
e805: 3a        ABX
e806: ec 02     LDD    $2,X
e808: b3 48 af  SUBD   $48AF
e80b: 84 1f     ANDA   #$1F
e80d: ed a1     STD    ,Y++
e80f: ec 84     LDD    ,X
e811: ed a1     STD    ,Y++
e813: bd e8 21  JSR    $E821
e816: cc 72 00  LDD    #$7200
e819: ed a1     STD    ,Y++
e81b: cc 80 40  LDD    #$8040
e81e: ed a1     STD    ,Y++
e820: 39        RTS
e821: 8e e8 94  LDX    #$E894
e824: f6 48 ae  LDB    $48AE
e827: 3a        ABX
e828: 3a        ABX
e829: ae 84     LDX    ,X
e82b: e6 80     LDB    ,X+
e82d: bf 48 b1  STX    $48B1
e830: 58        ASLB
e831: c1 82     CMPB   #$82
e833: 25 07     BCS    $E83C
e835: 8e 30 16  LDX    #$3016
e838: c4 7f     ANDB   #$7F
e83a: 20 4c     BRA    $E888
e83c: c1 74     CMPB   #$74
e83e: 26 05     BNE    $E845
e840: 8e 2f de  LDX    #$2FDE
e843: 20 43     BRA    $E888
e845: c1 80     CMPB   #$80
e847: 26 06     BNE    $E84F
e849: 8e 30 58  LDX    #$3058
e84c: 5f        CLRB
e84d: 20 39     BRA    $E888
e84f: c1 60     CMPB   #$60
e851: 25 05     BCS    $E858
e853: 8e 2f a4  LDX    #$2FA4
e856: 20 30     BRA    $E888
e858: c1 40     CMPB   #$40
e85a: 26 05     BNE    $E861
e85c: 8e 2f c2  LDX    #$2FC2
e85f: 20 27     BRA    $E888
e861: c1 4e     CMPB   #$4E
e863: 26 05     BNE    $E86A
e865: 8e 2f fe  LDX    #$2FFE
e868: 20 1e     BRA    $E888
e86a: c1 58     CMPB   #$58
e86c: 26 05     BNE    $E873
e86e: 8e 2f f6  LDX    #$2FF6
e871: 20 15     BRA    $E888
e873: c1 5a     CMPB   #$5A
e875: 26 05     BNE    $E87C
e877: 8e 30 00  LDX    #$3000
e87a: 20 0c     BRA    $E888
e87c: c1 4a     CMPB   #$4A
e87e: 26 05     BNE    $E885
e880: 8e 30 0c  LDX    #$300C
e883: 20 03     BRA    $E888
e885: 8e 2f f4  LDX    #$2FF4
e888: ec 85     LDD    B,X
e88a: ed a1     STD    ,Y++
e88c: be 48 b1  LDX    $48B1
e88f: 6d 1f     TST    -$1,X
e891: 2a 98     BPL    $E82B
e893: 39        RTS
e894: db 3f     ADDB   <$3F
e896: db 48     ADDB   <$48
e898: db 6c     ADDB   <$6C
e89a: db 80     ADDB   <$80
e89c: db a8     ADDB   <$A8
e89e: db a8     ADDB   <$A8
e8a0: db b1     ADDB   <$B1
e8a2: db bd     ADDB   <$BD
e8a4: db c6     ADDB   <$C6
e8a6: db d4     ADDB   <$D4
e8a8: db e1     ADDB   <$E1
e8aa: db ef     ADDB   <$EF
e8ac: dc 04     LDD    <$04
e8ae: dc 0b     LDD    <$0B
e8b0: dc 11     LDD    <$11
e8b2: dc 1c     LDD    <$1C
e8b4: dc 3b     LDD    <$3B
e8b6: dc 5e     LDD    <$5E
e8b8: dc 7d     LDD    <$7D
e8ba: dc 9f     LDD    <$9F
e8bc: dc c2     LDD    <$C2
e8be: dc e3     LDD    <$E3
e8c0: dd 03     STD    <$03
e8c2: dd 12     STD    <$12
e8c4: dd 34     STD    <$34
e8c6: dd 56     STD    <$56
e8c8: dd 74     STD    <$74
e8ca: dd 93     STD    <$93
e8cc: dd a6     STD    <$A6
e8ce: dd c9     STD    <$C9
e8d0: dd ea     STD    <$EA
e8d2: dd fc     STD    <$FC
e8d4: dd fd     STD    <$FD
e8d6: dd fe     STD    <$FE
e8d8: dd ff     STD    <$FF
e8da: de 00     LDU    <$00
e8dc: de 07     LDU    <$07
e8de: de 29     LDU    <$29
e8e0: de 4b     LDU    <$4B
e8e2: de 6d     LDU    <$6D
e8e4: de 8f     LDU    <$8F
e8e6: de b1     LDU    <$B1
e8e8: de d3     LDU    <$D3
e8ea: de f5     LDU    <$F5
e8ec: df 17     STU    <$17
e8ee: df 2a     STU    <$2A
e8f0: df 4a     STU    <$4A
e8f2: df 53     STU    <$53
e8f4: df 57     STU    <$57
e8f6: df 5d     STU    <$5D
e8f8: df 61     STU    <$61
e8fa: df 67     STU    <$67
e8fc: df 6d     STU    <$6D
e8fe: df 73     STU    <$73
