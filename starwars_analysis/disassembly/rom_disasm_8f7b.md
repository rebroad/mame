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
917a: 02 00        XNC    <$00
