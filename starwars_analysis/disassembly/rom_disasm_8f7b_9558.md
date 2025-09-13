8f7b: de e4        LDU    <$E4
8f7d: 27 04        BEQ    $8F83
8f7f: a6 c4        LDA    ,U
8f81: 26 2e        BNE    $8FB1
8f83: 0c dd        INC    <$DD
8f85: f6 4b 14     LDB    $4B14
8f88: 58           ASLB
8f89: 8e 90 70     LDX    #$9070
8f8c: 3a           ABX
8f8d: 8c 90 7c     CMPX   #$907C
8f90: 25 0e        BCS    $8FA0
8f92: b6 4b 14     LDA    $4B14
8f95: 44           LSRA
8f96: 25 05        BCS    $8F9D
8f98: 8e 90 78     LDX    #$9078
8f9b: 20 03        BRA    $8FA0
8f9d: 8e 90 7a     LDX    #$907A
8fa0: ae 84        LDX    ,X
8fa2: d6 dd        LDB    <$DD
8fa4: e1 80        CMPB   ,X+
8fa6: 23 02        BLS    $8FAA
8fa8: e6 1f        LDB    -$1,X
8faa: d7 dd        STB    <$DD
8fac: 58           ASLB
8fad: ec 85        LDD    B,X
8faf: dd e4        STD    <$E4
8fb1: 8e 49 00     LDX    #$4900
8fb4: 9f 5a        STX    <$5A
8fb6: a6 03        LDA    $3,X
8fb8: 27 0c        BEQ    $8FC6
8fba: 9e 5a        LDX    <$5A
8fbc: 30 88 19     LEAX   $19,X
8fbf: 8c 49 4b     CMPX   #$494B
8fc2: 25 f0        BCS    $8FB4
8fc4: 20 5d        BRA    $9023
8fc6: de e4        LDU    <$E4
8fc8: 27 59        BEQ    $9023
8fca: a6 c4        LDA    ,U
8fcc: 27 55        BEQ    $9023
8fce: 0c e6        INC    <$E6
8fd0: ec c4        LDD    ,U
8fd2: dd e0        STD    <$E0
8fd4: ec 42        LDD    $2,U
8fd6: dd de        STD    <$DE
8fd8: ec 44        LDD    $4,U
8fda: dd e2        STD    <$E2
8fdc: 33 46        LEAU   $6,U
8fde: df e4        STU    <$E4
8fe0: 86 01        LDA    #$01
8fe2: a7 03        STA    $3,X
8fe4: ee 84        LDU    ,X
8fe6: bd cd c3     JSR    $CDC3
8fe9: ee 84        LDU    ,X
8feb: 86 c0        LDA    #$C0
8fed: a7 50        STA    -$10,U
8fef: a7 5a        STA    -$6,U
8ff1: 4f           CLRA
8ff2: a7 09        STA    $9,X
8ff4: a7 08        STA    $8,X
8ff6: a7 06        STA    $6,X
8ff8: a7 05        STA    $5,X
8ffa: a7 0b        STA    $B,X
8ffc: de e0        LDU    <$E0
8ffe: a6 41        LDA    $1,U
9000: a7 07        STA    $7,X
9002: ee 84        LDU    ,X
9004: 9e e2        LDX    <$E2
9006: ec 84        LDD    ,X
9008: ed 48        STD    $8,U
900a: ec 02        LDD    $2,X
900c: ed 4a        STD    $A,U
900e: ec 04        LDD    $4,X
9010: ed 4c        STD    $C,U
9012: 9e 5a        LDX    <$5A
9014: dc de        LDD    <$DE
9016: ed 0d        STD    $D,X
9018: bd 8e 23     JSR    $8E23
901b: 9e 5a        LDX    <$5A
901d: e6 9f 48 e0  LDB    [$48E0]
9021: e7 04        STB    $4,X
9023: 39           RTS
9024: 00 01        NEG    <$01
9026: 04 04        LSR    <$04
9028: 7c 00 00     INC    >$0000
902b: 00 04        NEG    <$04
902d: 00 7c        NEG    <$7C
902f: 00 fc        NEG    <$FC
9031: 00 00        NEG    <$00
9033: 00 7c        NEG    <$7C
9035: 00 04        NEG    <$04
9037: 00 00        NEG    <$00
9039: 00 7c        NEG    <$7C
903b: 00 00        NEG    <$00
903d: 00 04        NEG    <$04
903f: 00 7c        NEG    <$7C
9041: 00 fc        NEG    <$FC
9043: 00 00        NEG    <$00
9045: 00 7c        NEG    <$7C
9047: 00 04        NEG    <$04
9049: 00 00        NEG    <$00
904b: 00 7c        NEG    <$7C
904d: 00 00        NEG    <$00
904f: 00 04        NEG    <$04
9051: 00 7c        NEG    <$7C
9053: 00 fc        NEG    <$FC
9055: 00 00        NEG    <$00
9057: 00 7c        NEG    <$7C
9059: 00 04        NEG    <$04
905b: 00 00        NEG    <$00
905d: 00 7c        NEG    <$7C
905f: 00 f8        NEG    <$F8
9061: 00 00        NEG    <$00
9063: 00 7c        NEG    <$7C
9065: 00 08        NEG    <$08
9067: 00 00        NEG    <$00
9069: 00 7c        NEG    <$7C
906b: 00 00        NEG    <$00
906d: 00 08        NEG    <$08
906f: 00 90        NEG    <$90
9071: 7c 90 85     INC    $9085
9074: 90 90        SUBA   <$90
9076: 90 9f        SUBA   <$9F
9078: 90 ac        SUBA   <$AC
907a: 90 b9        SUBA   <$B9
907c: 03 90        COM    <$90
907e: c6 91        LDB    #$91
9080: 38 91        XANDCC #$91
9082: 4b           XDECA
9083: 91 71        CMPA   <$71
9085: 04 90        LSR    <$90
9087: d9 91        ADCB   <$91
9089: 12           NOP
908a: 91 5e        CMPA   <$5E
908c: 91 4b        CMPA   <$4B
908e: 91 71        CMPA   <$71
9090: 06 90        ROR    <$90
9092: ec 91        LDD    [,X++]
9094: 12           NOP
9095: 91 5e        CMPA   <$5E
9097: 91 25        CMPA   <$25
9099: 91 38        CMPA   <$38
909b: 91 4b        CMPA   <$4B
909d: 91 71        CMPA   <$71
909f: 05 91        LSR    <$91
90a1: 12           NOP
90a2: 91 5e        CMPA   <$5E
90a4: 91 25        CMPA   <$25
90a6: 91 38        CMPA   <$38
90a8: 91 4b        CMPA   <$4B
90aa: 91 71        CMPA   <$71
90ac: 05 90        LSR    <$90
90ae: ff 91 12     STU    $9112
90b1: 91 4b        CMPA   <$4B
90b3: 91 5e        CMPA   <$5E
90b5: 91 38        CMPA   <$38
90b7: 91 71        CMPA   <$71
90b9: 05 91        LSR    <$91
90bb: 12           NOP
90bc: 91 5e        CMPA   <$5E
90be: 91 38        CMPA   <$38
90c0: 91 5e        CMPA   <$5E
90c2: 91 4b        CMPA   <$4B
90c4: 91 71        CMPA   <$71
90c6: 90 24        SUBA   <$24
90c8: 91 e1        CMPA   <$E1
90ca: 90 28        SUBA   <$28
90cc: 90 24        SUBA   <$24
90ce: 92 05        SBCA   <$05
90d0: 90 2e        SUBA   <$2E
90d2: 90 24        SUBA   <$24
90d4: 92 32        SBCA   <$32
90d6: 90 34        SUBA   <$34
90d8: 00 90        NEG    <$90
90da: 24 92        BCC    $906E
90dc: 77 90 3a     ASR    $903A
90df: 90 24        SUBA   <$24
90e1: 92 ad        SBCA   <$AD
90e3: 90 40        SUBA   <$40
90e5: 90 24        SUBA   <$24
90e7: 92 d1        SBCA   <$D1
90e9: 90 46        SUBA   <$46
90eb: 00 90        NEG    <$90
90ed: 24 93        BCC    $9082
90ef: 19           DAA
90f0: 90 4c        SUBA   <$4C
90f2: 90 24        SUBA   <$24
90f4: 93 3d        SUBD   <$3D
90f6: 90 52        SUBA   <$52
90f8: 90 24        SUBA   <$24
90fa: 93 55        SUBD   <$55
90fc: 90 58        SUBA   <$58
90fe: 00 90        NEG    <$90
9100: 24 93        BCC    $9095
9102: 85 90        BITA   #$90
9104: 5e           XCLRB
9105: 90 24        SUBA   <$24
9107: 93 a9        SUBD   <$A9
9109: 90 64        SUBA   <$64
910b: 90 24        SUBA   <$24
910d: 93 dc        SUBD   <$DC
910f: 90 6a        SUBA   <$6A
9111: 00 90        NEG    <$90
9113: 24 93        BCC    $90A8
9115: 85 90        BITA   #$90
9117: 5e           XCLRB
9118: 90 24        SUBA   <$24
911a: 93 a9        SUBD   <$A9
911c: 90 64        SUBA   <$64
911e: 90 26        SUBA   <$26
9120: 93 dc        SUBD   <$DC
9122: 90 6a        SUBA   <$6A
9124: 00 90        NEG    <$90
9126: 24 91        BCC    $90B9
9128: de 90        LDU    <$90
912a: 28 90        BVC    $90BC
912c: 24 92        BCC    $90C0
912e: 02 90        XNC    <$90
9130: 2e 90        BGT    $90C2
9132: 24 92        BCC    $90C6
9134: 2f 90        BLE    $90C6
9136: 34 00        PSHS
9138: 90 24        SUBA   <$24
913a: 92 74        SBCA   <$74
913c: 90 3a        SUBA   <$3A
913e: 90 24        SUBA   <$24
9140: 92 aa        SBCA   <$AA
9142: 90 40        SUBA   <$40
9144: 90 24        SUBA   <$24
9146: 92 ce        SBCA   <$CE
9148: 90 46        SUBA   <$46
914a: 00 90        NEG    <$90
914c: 24 93        BCC    $90E1
914e: 16 90 4c     LBRA   $219D
9151: 90 24        SUBA   <$24
9153: 93 3a        SUBD   <$3A
9155: 90 52        SUBA   <$52
9157: 90 24        SUBA   <$24
9159: 93 52        SUBD   <$52
915b: 90 58        SUBA   <$58
915d: 00 90        NEG    <$90
915f: 24 93        BCC    $90F4
9161: 82 90        SBCA   #$90
9163: 5e           XCLRB
9164: 90 24        SUBA   <$24
9166: 93 a6        SUBD   <$A6
9168: 90 64        SUBA   <$64
916a: 90 24        SUBA   <$24
916c: 93 d9        SUBD   <$D9
916e: 90 6a        SUBA   <$6A
9170: 00 90        NEG    <$90
9172: 24 91        BCC    $9105
9174: de 90        LDU    <$90
9176: 28 90        BVC    $9108
9178: 24 92        BCC    $910C
917a: 02 90        XNC    <$90
917c: 2e 90        BGT    $910E
917e: 24 92        BCC    $9112
9180: 2f 90        BLE    $9112
9182: 34 90        PSHS   PC,X
9184: 24 93        BCC    $9119
9186: 82 90        SBCA   #$90
9188: 5e           XCLRB
9189: 90 24        SUBA   <$24
918b: 93 a6        SUBD   <$A6
918d: 90 64        SUBA   <$64
918f: 90 24        SUBA   <$24
9191: 93 d9        SUBD   <$D9
9193: 90 6a        SUBA   <$6A
9195: 90 24        SUBA   <$24
9197: 92 74        SBCA   <$74
9199: 90 3a        SUBA   <$3A
919b: 90 24        SUBA   <$24
919d: 92 aa        SBCA   <$AA
919f: 90 40        SUBA   <$40
91a1: 90 24        SUBA   <$24
91a3: 92 ce        SBCA   <$CE
91a5: 90 46        SUBA   <$46
91a7: 90 24        SUBA   <$24
91a9: 93 82        SUBD   <$82
91ab: 90 5e        SUBA   <$5E
91ad: 90 24        SUBA   <$24
91af: 93 a6        SUBD   <$A6
91b1: 90 64        SUBA   <$64
91b3: 90 24        SUBA   <$24
91b5: 93 d9        SUBD   <$D9
91b7: 90 6a        SUBA   <$6A
91b9: 90 24        SUBA   <$24
91bb: 93 16        SUBD   <$16
91bd: 90 4c        SUBA   <$4C
91bf: 90 24        SUBA   <$24
91c1: 93 3a        SUBD   <$3A
91c3: 90 52        SUBA   <$52
91c5: 90 24        SUBA   <$24
91c7: 93 52        SUBD   <$52
91c9: 90 58        SUBA   <$58
91cb: 90 24        SUBA   <$24
91cd: 93 82        SUBD   <$82
91cf: 90 5e        SUBA   <$5E
91d1: 90 24        SUBA   <$24
91d3: 93 a6        SUBD   <$A6
91d5: 90 64        SUBA   <$64
91d7: 90 24        SUBA   <$24
91d9: 93 d9        SUBD   <$D9
91db: 90 6a        SUBA   <$6A
91dd: 00 02        NEG    <$02
91df: 94 21        ANDA   <$21
91e1: 84 00        ANDA   #$00
91e3: 10 84 00     ANDA   #$00
91e6: 20 44        BRA    $922C
91e8: 04 10        LSR    <$10
91ea: 00 00        NEG    <$00
91ec: 04 44        LSR    <$44
91ee: 80 00        SUBA   #$00
91f0: 00 04        NEG    <$04
91f2: 00 84        NEG    <$84
91f4: 81 10        CMPA   #$10
91f6: 00 00        NEG    <$00
91f8: 04 44        LSR    <$44
91fa: 80 00        SUBA   #$00
91fc: 00 00        NEG    <$00
91fe: 00 01        NEG    <$01
9200: 92 5c        SBCA   <$5C
9202: 02 94        XNC    <$94
9204: 21 84        BRN    $918A
9206: 02 20        XNC    <$20
9208: 44           LSRA
9209: 10           FCB    $10
920a: 10 00 00     NEG    <$00
920d: 04 44        LSR    <$44
920f: 90 10        SUBA   <$10
9211: 00 00        NEG    <$00
9213: 00 84        NEG    <$84
9215: 02 10        XNC    <$10
9217: 00 00        NEG    <$00
9219: 04 44        LSR    <$44
921b: 90 10        SUBA   <$10
921d: 00 00        NEG    <$00
921f: 00 44        NEG    <$44
9221: 02 20        XNC    <$20
9223: 00 00        NEG    <$00
9225: 04 44        LSR    <$44
9227: 90 10        SUBA   <$10
9229: 00 00        NEG    <$00
922b: 00 01        NEG    <$01
922d: 92 5c        SBCA   <$5C
922f: 02 94        XNC    <$94
9231: 21 84        BRN    $91B7
9233: 01 20        NEG    <$20
9235: 44           LSRA
9236: 20 10        BRA    $9248
9238: 00 00        NEG    <$00
923a: 04 44        LSR    <$44
923c: a0 10        SUBA   -$10,X
923e: 00 00        NEG    <$00
9240: 00 84        NEG    <$84
9242: 01 10        NEG    <$10
9244: 00 00        NEG    <$00
9246: 04 44        LSR    <$44
9248: a0 10        SUBA   -$10,X
924a: 00 00        NEG    <$00
924c: 00 44        NEG    <$44
924e: 01 20        NEG    <$20
9250: 00 00        NEG    <$00
9252: 04 44        LSR    <$44
9254: a0 10        SUBA   -$10,X
9256: 00 00        NEG    <$00
9258: 00 01        NEG    <$01
925a: 92 5c        SBCA   <$5C
925c: 00 00        NEG    <$00
925e: 44           LSRA
925f: 44           LSRA
9260: 82 20        SBCA   #$20
9262: 00 00        NEG    <$00
9264: 40           NEGA
9265: 44           LSRA
9266: 01 20        NEG    <$20
9268: 01 92        NEG    <$92
926a: 5c           INCB
926b: 00 00        NEG    <$00
926d: 00 24        NEG    <$24
926f: 00 08        NEG    <$08
9271: 01 92        NEG    <$92
9273: 5c           INCB
9274: 02 94        XNC    <$94
9276: 21 44        BRN    $92BC
9278: 00 14        NEG    <$14
927a: 44           LSRA
927b: 00 11        NEG    <$11
927d: 44           LSRA
927e: 00 14        NEG    <$14
9280: 44           LSRA
9281: 00 11        NEG    <$11
9283: 44           LSRA
9284: 04 10        LSR    <$10
9286: 00 00        NEG    <$00
9288: 04 44        LSR    <$44
928a: 80 00        SUBA   #$00
928c: 00 00        NEG    <$00
928e: 00 44        NEG    <$44
9290: 00 14        NEG    <$14
9292: 44           LSRA
9293: 00 11        NEG    <$11
9295: 84 80        ANDA   #$80
9297: 14           XHCF
9298: 44           LSRA
9299: 00 14        NEG    <$14
929b: 44           LSRA
929c: 00 11        NEG    <$11
929e: 00 00        NEG    <$00
92a0: 04 44        LSR    <$44
92a2: 80 04        SUBA   #$04
92a4: 00 00        NEG    <$00
92a6: 00 01        NEG    <$01
92a8: 92 e9        SBCA   <$E9
92aa: 02 94        XNC    <$94
92ac: 21 24        BRN    $92D2
92ae: 00 18        NEG    <$18
92b0: 24 00        BCC    $92B2
92b2: 12           NOP
92b3: 24 00        BCC    $92B5
92b5: 28 24        BVC    $92DB
92b7: 00 22        NEG    <$22
92b9: 00 00        NEG    <$00
92bb: 04 44        LSR    <$44
92bd: 80 11        SUBA   #$11
92bf: 00 00        NEG    <$00
92c1: 00 00        NEG    <$00
92c3: 00 04        NEG    <$04
92c5: 44           LSRA
92c6: 80 14        SUBA   #$14
92c8: 00 00        NEG    <$00
92ca: 00 01        NEG    <$01
92cc: 92 e9        SBCA   <$E9
92ce: 02 94        XNC    <$94
92d0: 21 24        BRN    $92F6
92d2: 00 18        NEG    <$18
92d4: 24 00        BCC    $92D6
92d6: 12           NOP
92d7: 24 00        BCC    $92D9
92d9: 28 24        BVC    $92FF
92db: 00 22        NEG    <$22
92dd: 00 00        NEG    <$00
92df: 04 44        LSR    <$44
92e1: 80 11        SUBA   #$11
92e3: 00 00        NEG    <$00
92e5: 00 01        NEG    <$01
92e7: 92 e9        SBCA   <$E9
92e9: 00 00        NEG    <$00
92eb: 44           LSRA
92ec: 44           LSRA
92ed: 82 20        SBCA   #$20
92ef: 00 00        NEG    <$00
92f1: 40           NEGA
92f2: 44           LSRA
92f3: 02 20        XNC    <$20
92f5: 01 92        NEG    <$92
92f7: e9 00        ADCB   $0,X
92f9: 00 00        NEG    <$00
92fb: 24 00        BCC    $92FD
92fd: 08 00        ASL    <$00
92ff: 04 00        LSR    <$00
9301: fc 82 10     LDD    $8210
9304: 00 00        NEG    <$00
9306: 00 44        NEG    <$44
9308: 82 08        SBCA   #$08
930a: 44           LSRA
930b: 81 02        CMPA   #$02
930d: 44           LSRA
930e: 81 08        CMPA   #$08
9310: 44           LSRA
9311: 82 02        SBCA   #$02
9313: 01 92        NEG    <$92
9315: e9 02        ADCB   $2,X
9317: 94 21        ANDA   <$21
9319: 24 00        BCC    $931B
931b: 14           XHCF
931c: 24 00        BCC    $931E
931e: 11 24 00     BCC    $9321
9321: 14           XHCF
9322: 24 00        BCC    $9324
9324: 11 44        LSRA
9326: 04 10        LSR    <$10
9328: 00 00        NEG    <$00
932a: 04 44        LSR    <$44
932c: 80 00        SUBA   #$00
932e: 00 00        NEG    <$00
9330: 00 00        NEG    <$00
9332: 00 04        NEG    <$04
9334: 44           LSRA
9335: 80 04        SUBA   #$04
9337: 00 00        NEG    <$00
9339: 00 02        NEG    <$02
933b: 94 21        ANDA   <$21
933d: 44           LSRA
933e: 82 14        SBCA   #$14
9340: 44           LSRA
9341: 82 24        SBCA   #$24
9343: 44           LSRA
9344: 10 14        XHCF
9346: 00 00        NEG    <$00
9348: 04 44        LSR    <$44
934a: 90 14        SUBA   <$14
934c: 00 00        NEG    <$00
934e: 00 01        NEG    <$01
9350: 93 6a        SUBD   <$6A
9352: 02 94        XNC    <$94
9354: 21 44        BRN    $939A
9356: 81 14        CMPA   #$14
9358: 44           LSRA
9359: 81 24        CMPA   #$24
935b: 44           LSRA
935c: 20 14        BRA    $9372
935e: 00 00        NEG    <$00
9360: 04 44        LSR    <$44
9362: a0 14        SUBA   -$C,X
9364: 00 00        NEG    <$00
9366: 00 01        NEG    <$01
9368: 93 6a        SUBD   <$6A
936a: 00 00        NEG    <$00
936c: 44           LSRA
936d: 44           LSRA
936e: 82 24        SBCA   #$24
9370: 00 00        NEG    <$00
9372: 40           NEGA
9373: 44           LSRA
9374: 01 20        NEG    <$20
9376: 01 93        NEG    <$93
9378: 6a 00        DEC    $0,X
937a: 00 00        NEG    <$00
937c: 24 00        BCC    $937E
937e: 02 01        XNC    <$01
9380: 93 6a        SUBD   <$6A
9382: 02 94        XNC    <$94
9384: 21 00        BRN    $9386
9386: 04 00        LSR    <$00
9388: fc 82 18     LDD    $8218
938b: 00 00        NEG    <$00
938d: 00 fc        NEG    <$FC
938f: 82 08        SBCA   #$08
9391: fc 82 08     LDD    $8208
9394: fc 82 08     LDD    $8208
9397: fc 82 08     LDD    $8208
939a: 00 00        NEG    <$00
939c: 04 44        LSR    <$44
939e: 81 08        CMPA   #$08
93a0: 00 00        NEG    <$00
93a2: 00 01        NEG    <$01
93a4: 94 5a        ANDA   <$5A
93a6: 02 94        XNC    <$94
93a8: 21 00        BRN    $93AA
93aa: 04 00        LSR    <$00
93ac: fc 82 18     LDD    $8218
93af: 00 00        NEG    <$00
93b1: 00 84        NEG    <$84
93b3: 81 08        CMPA   #$08
93b5: 80 00        SUBA   #$00
93b7: 10 44        LSRA
93b9: 82 08        SBCA   #$08
93bb: 80 00        SUBA   #$00
93bd: 00 84        NEG    <$84
93bf: 81 08        CMPA   #$08
93c1: 80 00        SUBA   #$00
93c3: 10 44        LSRA
93c5: 81 08        CMPA   #$08
93c7: 80 00        SUBA   #$00
93c9: 00 84        NEG    <$84
93cb: 81 08        CMPA   #$08
93cd: 00 00        NEG    <$00
93cf: 04 44        LSR    <$44
93d1: 82 08        SBCA   #$08
93d3: 00 00        NEG    <$00
93d5: 00 01        NEG    <$01
93d7: 94 5a        ANDA   <$5A
93d9: 02 94        XNC    <$94
93db: 21 00        BRN    $93DD
93dd: 04 00        LSR    <$00
93df: 14           XHCF
93e0: 80 18        SUBA   #$18
93e2: 14           XHCF
93e3: 80 12        SUBA   #$12
93e5: 14           XHCF
93e6: 80 18        SUBA   #$18
93e8: 14           XHCF
93e9: 80 12        SUBA   #$12
93eb: 14           XHCF
93ec: 80 18        SUBA   #$18
93ee: 14           XHCF
93ef: 80 12        SUBA   #$12
93f1: 14           XHCF
93f2: 80 18        SUBA   #$18
93f4: 14           XHCF
93f5: 80 12        SUBA   #$12
93f7: 00 00        NEG    <$00
93f9: 00 00        NEG    <$00
93fb: 00 01        NEG    <$01
93fd: 44           LSRA
93fe: b0 08 44     SUBA   $0844
9401: 8c 08 44     CMPX   #$0844
9404: b0 02 44     SUBA   $0244
9407: 8c 02 44     CMPX   #$0244
940a: b0 08 44     SUBA   $0844
940d: 8c 08 44     CMPX   #$0844
9410: b0 02 44     SUBA   $0244
9413: 8c 02 00     CMPX   #$0200
9416: 00 04        NEG    <$04
9418: 44           LSRA
9419: 81 10        CMPA   #$10
941b: 00 00        NEG    <$00
941d: 00 01        NEG    <$01
941f: 94 5a        ANDA   <$5A
9421: 0c 80        INC    <$80
9423: 10 80 00     SUBA   #$00
9426: 10 01 94     NEG    <$94
9429: 3c 80        CWAI   #$80
942b: 00 20        NEG    <$20
942d: 44           LSRA
942e: 80 3c        SUBA   #$3C
9430: 01 94        NEG    <$94
9432: 4e           XCLRA
9433: 80 00        SUBA   #$00
9435: 00 44        NEG    <$44
9437: 80 33        SUBA   #$33
9439: 01 94        NEG    <$94
943b: 4e           XCLRA
943c: 80 00        SUBA   #$00
943e: 20 44        BRA    $9484
9440: 82 3c        SBCA   #$3C
9442: 01 94        NEG    <$94
9444: 4e           XCLRA
9445: 80 00        SUBA   #$00
9447: 00 44        NEG    <$44
9449: 82 33        SBCA   #$33
944b: 01 94        NEG    <$94
944d: 4e           XCLRA
944e: 80 00        SUBA   #$00
9450: 20 44        BRA    $9496
9452: 41           NEGA
9453: 20 80        BRA    $93D5
9455: 00 00        NEG    <$00
9457: 03 00        COM    <$00
9459: 00 24        NEG    <$24
945b: 00 08        NEG    <$08
945d: 00 04        NEG    <$04
945f: 00 84        NEG    <$84
9461: 81 20        CMPA   #$20
9463: 00 00        NEG    <$00
9465: 44           LSRA
9466: 44           LSRA
9467: 82 20        SBCA   #$20
9469: 00 00        NEG    <$00
946b: 40           NEGA
946c: 44           LSRA
946d: 01 10        NEG    <$10
946f: 00 00        NEG    <$00
9471: 00 00        NEG    <$00
9473: 0c 00        INC    <$00
9475: 84 81        ANDA   #$81
9477: 20 00        BRA    $9479
9479: 08 44        ASL    <$44
947b: 44           LSRA
947c: 82 20        SBCA   #$20
947e: 00 08        NEG    <$08
9480: 40           NEGA
9481: 44           LSRA
9482: 01 10        NEG    <$10
9484: 00 00        NEG    <$00
9486: 00 80        NEG    <$80
9488: 08 00        ASL    <$00
948a: 01 94        NEG    <$94
948c: 93 80        SUBD   <$80
948e: 00 00        NEG    <$00
9490: 01 94        NEG    <$94
9492: 5a           DECB
9493: 80 00        SUBA   #$00
9495: 10 44        LSRA
9497: 02 08        XNC    <$08
9499: 01 94        NEG    <$94
949b: 5a           DECB
949c: 80 00        SUBA   #$00
949e: 00 44        NEG    <$44
94a0: 01 20        NEG    <$20
94a2: 01 94        NEG    <$94
94a4: 5a           DECB
94a5: b8 5d 78     EORA   $5D78
94a8: 28 40        BVC    $94EA
94aa: ec d4        LDD    [,U]
94ac: b7 2a 89     STA    $2A89
94af: 60 c6        NEG    A,U
94b1: 20 84        BRA    $9437
94b3: 3d           MUL
94b4: 70 00 78     NEG    >$0078
94b7: ed b0 68 ef  STD    [$68EF,W]
94bb: 92 5c        SBCA   <$5C
94bd: ff ff ff     STU    $FFFF
94c0: ff ff ff     STU    $FFFF
94c3: ff ff ff     STU    $FFFF
94c6: ff ff ff     STU    $FFFF
94c9: ff ff ff     STU    $FFFF
94cc: ff ff ff     STU    $FFFF
94cf: ff ff ff     STU    $FFFF
94d2: ff ff ff     STU    $FFFF
94d5: ff ff ff     STU    $FFFF
94d8: ff ff ff     STU    $FFFF
94db: ff ff ff     STU    $FFFF
94de: ff ff ff     STU    $FFFF
94e1: ff ff ff     STU    $FFFF
94e4: ff ff ff     STU    $FFFF
94e7: ff ff ff     STU    $FFFF
94ea: ff ff ff     STU    $FFFF
94ed: ff ff ff     STU    $FFFF
94f0: ff ff ff     STU    $FFFF
94f3: ff ff ff     STU    $FFFF
94f6: ff ff ff     STU    $FFFF
94f9: ff ff ff     STU    $FFFF
94fc: ff ff ff     STU    $FFFF
94ff: ff ff ff     STU    $FFFF
9502: ff ff ff     STU    $FFFF
9505: ff ff ff     STU    $FFFF
9508: ff ff ff     STU    $FFFF
950b: ff ff ff     STU    $FFFF
950e: ff ff ff     STU    $FFFF
9511: ff ff ff     STU    $FFFF
9514: ff ff ff     STU    $FFFF
9517: ff ff ff     STU    $FFFF
951a: ff ff ff     STU    $FFFF
951d: ff ff ff     STU    $FFFF
9520: ff ff ff     STU    $FFFF
9523: ff ff ff     STU    $FFFF
9526: ff 43 4f     STU    $434F
9529: 50           NEGB
952a: 59           ROLB
952b: 52           XNCB
952c: 49           ROLA
952d: 47           ASRA
952e: 48           ASLA
952f: 54           LSRB
9530: 20 31        BRA    $9563
9532: 39           RTS
9533: 38 33        XANDCC #$33
9535: 20 41        BRA    $9578
9537: 54           LSRB
9538: 41           NEGA
9539: 52           XNCB
953a: 49           ROLA
953b: b6 45 92     LDA    $4592
953e: 84 03        ANDA   #$03
9540: 27 15        BEQ    $9557
9542: 9b 60        ADDA   <$60
9544: 97 60        STA    <$60
9546: b6 45 93     LDA    $4593
9549: 84 03        ANDA   #$03
954b: 8b 06        ADDA   #$06
954d: 91 60        CMPA   <$60
954f: 24 02        BCC    $9553
9551: 97 60        STA    <$60
9553: 86 14        LDA    #$14
9555: 97 61        STA    <$61
9557: 39           RTS
9558: 7e 9558     JMP    $9558
