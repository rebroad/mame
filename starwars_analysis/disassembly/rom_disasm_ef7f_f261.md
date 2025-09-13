ef7f: 0c 0a        INC    <$0A
ef81: bd d7 76     JSR    $D776
ef84: 96 14        LDA    <$14
ef86: 81 24        CMPA   #$24
ef88: 25 01        BCS    $EF8B
ef8a: 3f           SWI
ef8b: 8e 48 1c     LDX    #$481C
ef8e: b6 43 00     LDA    $4300
ef91: bd f1 33     JSR    $F133
ef94: b6 43 20     LDA    $4320
ef97: bd f1 33     JSR    $F133
ef9a: b6 43 40     LDA    $4340
ef9d: bd f1 33     JSR    $F133
efa0: b6 43 60     LDA    $4360
efa3: bd f1 33     JSR    $F133
efa6: 96 33        LDA    <$33
efa8: 97 34        STA    <$34
efaa: b6 48 21     LDA    $4821
efad: 84 30        ANDA   #$30
efaf: a7 7f        STA    -$1,S
efb1: b6 48 1e     LDA    $481E
efb4: 84 cf        ANDA   #$CF
efb6: aa 7f        ORA    -$1,S
efb8: 97 33        STA    <$33
efba: 98 34        EORA   <$34
efbc: 94 34        ANDA   <$34
efbe: 97 32        STA    <$32
efc0: 96 32        LDA    <$32
efc2: 84 f0        ANDA   #$F0
efc4: 27 04        BEQ    $EFCA
efc6: 9a 31        ORA    <$31
efc8: 97 31        STA    <$31
efca: bd f1 46     JSR    $F146
efcd: 96 0a        LDA    <$0A
efcf: 26 15        BNE    $EFE6
efd1: b6 44 01     LDA    $4401
efd4: 48           ASLA
efd5: 2a 07        BPL    $EFDE
efd7: b6 44 00     LDA    $4400
efda: 81 5a        CMPA   #$5A
efdc: 27 08        BEQ    $EFE6
efde: b7 46 e0     STA    $46E0
efe1: 86 00        LDA    #$00
efe3: b7 44 00     STA    $4400
efe6: 96 0a        LDA    <$0A
efe8: 84 03        ANDA   #$03
efea: 26 48        BNE    $F034
efec: b6 48 1b     LDA    $481B
efef: 8b 01        ADDA   #$01
eff1: 81 fa        CMPA   #$FA
eff3: 25 02        BCS    $EFF7
eff5: 86 00        LDA    #$00
eff7: b7 48 1b     STA    $481B
effa: 26 38        BNE    $F034
effc: b6 48 1a     LDA    $481A
efff: 8b 01        ADDA   #$01
f001: 19           DAA
f002: b7 48 1a     STA    $481A
f005: b6 48 19     LDA    $4819
f008: 89 00        ADCA   #$00
f00a: 19           DAA
f00b: 25 03        BCS    $F010
f00d: b7 48 19     STA    $4819
f010: b6 4b 07     LDA    $4B07
f013: 8b 01        ADDA   #$01
f015: 19           DAA
f016: b7 4b 07     STA    $4B07
f019: b6 4b 06     LDA    $4B06
f01c: 89 00        ADCA   #$00
f01e: 19           DAA
f01f: b7 4b 06     STA    $4B06
f022: b6 4b 05     LDA    $4B05
f025: 89 00        ADCA   #$00
f027: 19           DAA
f028: b7 4b 05     STA    $4B05
f02b: b6 4b 04     LDA    $4B04
f02e: 89 00        ADCA   #$00
f030: 19           DAA
f031: b7 4b 04     STA    $4B04
f034: 0a 40        DEC    <$40
f036: 28 09        BVC    $F041
f038: b7 46 20     STA    $4620
f03b: bd 61 1e     JSR    $611E
f03e: 7e f1 2f     JMP    $F12F
f041: 10 2a 00 ea  LBPL   $F12F
f045: b6 43 20     LDA    $4320
f048: 48           ASLA
f049: 10 2a 00 e2  LBPL   $F12F
f04d: 96 3f        LDA    <$3F
f04f: 2a 19        BPL    $F06A
f051: b6 00 00     LDA    >$0000
f054: 84 0a        ANDA   #$0A
f056: 27 02        BEQ    $F05A
f058: 86 14        LDA    #$14
f05a: 8a 00        ORA    #$00
f05c: 97 3f        STA    <$3F
f05e: c6 38        LDB    #$38
f060: 44           LSRA
f061: 84 0a        ANDA   #$0A
f063: 88 0a        EORA   #$0A
f065: 8a e0        ORA    #$E0
f067: fd 00 00     STD    >$0000
f06a: 0a 28        DEC    <$28
f06c: 2a 05        BPL    $F073
f06e: 0f 28        CLR    <$28
f070: bd f1 8d     JSR    $F18D
f073: bd f2 2b     JSR    $F22B
f076: d6 3a        LDB    <$3A
f078: cb 02        ADDB   #$02
f07a: c1 20        CMPB   #$20
f07c: 25 01        BCS    $F07F
f07e: 5f           CLRB
f07f: d7 3a        STB    <$3A
f081: 8e 00 04     LDX    #$0004
f084: 3a           ABX
f085: ce d6 20     LDU    #$D620
f088: ec c1        LDD    ,U++
f08a: ed 83        STD    ,--X
f08c: 8c 00 02     CMPX   #$0002
f08f: 2e f7        BGT    $F088
f091: 8e 00 22     LDX    #$0022
f094: 11 83 d6 40  CMPU   #$D640
f098: 24 06        BCC    $F0A0
f09a: ec c1        LDD    ,U++
f09c: ed 83        STD    ,--X
f09e: 20 f4        BRA    $F094
f0a0: d6 3b        LDB    <$3B
f0a2: cb 02        ADDB   #$02
f0a4: c1 08        CMPB   #$08
f0a6: 25 01        BCS    $F0A9
f0a8: 5f           CLRB
f0a9: d7 3b        STB    <$3B
f0ab: ce d6 40     LDU    #$D640
f0ae: ec c5        LDD    B,U
f0b0: fd 00 22     STD    >$0022
f0b3: 0a 36        DEC    <$36
f0b5: 2e 21        BGT    $F0D8
f0b7: c6 04        LDB    #$04
f0b9: d7 36        STB    <$36
f0bb: d6 37        LDB    <$37
f0bd: cb 02        ADDB   #$02
f0bf: c1 08        CMPB   #$08
f0c1: 25 01        BCS    $F0C4
f0c3: 5f           CLRB
f0c4: d7 37        STB    <$37
f0c6: ce d6 48     LDU    #$D648
f0c9: ec c5        LDD    B,U
f0cb: fd 00 2a     STD    >$002A
f0ce: d6 37        LDB    <$37
f0d0: ce d6 50     LDU    #$D650
f0d3: ec c5        LDD    B,U
f0d5: fd 00 2e     STD    >$002E
f0d8: 0a 38        DEC    <$38
f0da: 2e 17        BGT    $F0F3
f0dc: c6 01        LDB    #$01
f0de: d7 38        STB    <$38
f0e0: d6 39        LDB    <$39
f0e2: cb 02        ADDB   #$02
f0e4: c1 08        CMPB   #$08
f0e6: 25 01        BCS    $F0E9
f0e8: 5f           CLRB
f0e9: d7 39        STB    <$39
f0eb: ce d6 58     LDU    #$D658
f0ee: ec c5        LDD    B,U
f0f0: fd 00 2c     STD    >$002C
f0f3: d6 35        LDB    <$35
f0f5: cb 02        ADDB   #$02
f0f7: c1 0e        CMPB   #$0E
f0f9: 25 01        BCS    $F0FC
f0fb: 5f           CLRB
f0fc: d7 35        STB    <$35
f0fe: ce d6 04     LDU    #$D604
f101: ec c5        LDD    B,U
f103: fd 00 30     STD    >$0030
f106: cc c0 00     LDD    #$C000
f109: fd 00 32     STD    >$0032
f10c: d6 3c        LDB    <$3C
f10e: cb 02        ADDB   #$02
f110: c1 0e        CMPB   #$0E
f112: 25 01        BCS    $F115
f114: 5f           CLRB
f115: d7 3c        STB    <$3C
f117: ce d6 12     LDU    #$D612
f11a: ec c5        LDD    B,U
f11c: fd 00 34     STD    >$0034
f11f: cc c0 00     LDD    #$C000
f122: fd 00 36     STD    >$0036
f125: bd d6 60     JSR    $D660
f128: b7 46 00     STA    $4600
f12b: 86 05        LDA    #$05
f12d: 97 40        STA    <$40
f12f: b7 46 60     STA    $4660
f132: 3b           RTI
f133: e6 84        LDB    ,X
f135: e7 01        STB    $1,X
f137: a7 84        STA    ,X
f139: a4 01        ANDA   $1,X
f13b: aa 02        ORA    $2,X
f13d: a7 02        STA    $2,X
f13f: ea 81        ORB    ,X++
f141: e4 84        ANDB   ,X
f143: e7 80        STB    ,X+
f145: 39           RTS
f146: 96 0a        LDA    <$0A
f148: 44           LSRA
f149: 10 8e 48 29  LDY    #$4829
f14d: 25 04        BCS    $F153
f14f: 10 8e 48 2b  LDY    #$482B
f153: e6 21        LDB    $1,Y
f155: b6 43 80     LDA    $4380
f158: a7 21        STA    $1,Y
f15a: a1 a4        CMPA   ,Y
f15c: 25 0e        BCS    $F16C
f15e: e1 a4        CMPB   ,Y
f160: 23 08        BLS    $F16A
f162: e1 21        CMPB   $1,Y
f164: 23 02        BLS    $F168
f166: e6 21        LDB    $1,Y
f168: e7 a4        STB    ,Y
f16a: 20 0c        BRA    $F178
f16c: e1 a4        CMPB   ,Y
f16e: 24 08        BCC    $F178
f170: e1 21        CMPB   $1,Y
f172: 24 02        BCC    $F176
f174: e6 21        LDB    $1,Y
f176: e7 a4        STB    ,Y
f178: 10 8c 48 29  CMPY   #$4829
f17c: 26 08        BNE    $F186
f17e: b7 46 c0     STA    $46C0
f181: b7 46 c0     STA    $46C0
f184: 20 06        BRA    $F18C
f186: b7 46 c1     STA    $46C1
f189: b7 46 c1     STA    $46C1
f18c: 39           RTS
f18d: 8e 48 66     LDX    #$4866
f190: 96 2b        LDA    <$2B
f192: 12           NOP
f193: bd f1 c6     JSR    $F1C6
f196: a6 04        LDA    $4,X
f198: 81 78        CMPA   #$78
f19a: 2f 02        BLE    $F19E
f19c: 86 78        LDA    #$78
f19e: 81 98        CMPA   #$98
f1a0: 2c 02        BGE    $F1A4
f1a2: 86 98        LDA    #$98
f1a4: a7 04        STA    $4,X
f1a6: bd f1 fd     JSR    $F1FD
f1a9: 8e 48 6f     LDX    #$486F
f1ac: 96 29        LDA    <$29
f1ae: 12           NOP
f1af: bd f1 c6     JSR    $F1C6
f1b2: a6 04        LDA    $4,X
f1b4: 81 70        CMPA   #$70
f1b6: 2f 02        BLE    $F1BA
f1b8: 86 70        LDA    #$70
f1ba: 81 90        CMPA   #$90
f1bc: 2c 02        BGE    $F1C0
f1be: 86 90        LDA    #$90
f1c0: a7 04        STA    $4,X
f1c2: bd f1 fd     JSR    $F1FD
f1c5: 39           RTS
f1c6: a1 84        CMPA   ,X
f1c8: 24 06        BCC    $F1D0
f1ca: a1 01        CMPA   $1,X
f1cc: 25 02        BCS    $F1D0
f1ce: 6a 84        DEC    ,X
f1d0: a7 01        STA    $1,X
f1d2: a1 84        CMPA   ,X
f1d4: 24 02        BCC    $F1D8
f1d6: a6 84        LDA    ,X
f1d8: a0 84        SUBA   ,X
f1da: 97 51        STA    <$51
f1dc: e6 02        LDB    $2,X
f1de: 3d           MUL
f1df: 9b 51        ADDA   <$51
f1e1: 26 02        BNE    $F1E5
f1e3: 86 01        LDA    #$01
f1e5: 25 04        BCS    $F1EB
f1e7: 6f 03        CLR    $3,X
f1e9: 20 0c        BRA    $F1F7
f1eb: 86 ff        LDA    #$FF
f1ed: 6c 03        INC    $3,X
f1ef: e6 03        LDB    $3,X
f1f1: c1 02        CMPB   #$02
f1f3: 25 02        BCS    $F1F7
f1f5: 6a 02        DEC    $2,X
f1f7: 5f           CLRB
f1f8: 80 80        SUBA   #$80
f1fa: a7 04        STA    $4,X
f1fc: 39           RTS
f1fd: 0f 51        CLR    <$51
f1ff: a6 04        LDA    $4,X
f201: c6 80        LDB    #$80
f203: a3 05        SUBD   $5,X
f205: 2c 03        BGE    $F20A
f207: 40           NEGA
f208: 0a 51        DEC    <$51
f20a: 2f 03        BLE    $F20F
f20c: c3 00 ff     ADDD   #$00FF
f20f: 81 f8        CMPA   #$F8
f211: 23 02        BLS    $F215
f213: 86 f8        LDA    #$F8
f215: c6 60        LDB    #$60
f217: 81 40        CMPA   #$40
f219: 24 02        BCC    $F21D
f21b: c6 30        LDB    #$30
f21d: 3d           MUL
f21e: 0d 51        TST    <$51
f220: 2a 04        BPL    $F226
f222: 43           COMA
f223: 50           NEGB
f224: 82 ff        SBCA   #$FF
f226: e3 05        ADDD   $5,X
f228: ed 05        STD    $5,X
f22a: 39           RTS
f22b: d6 6b        LDB    <$6B
f22d: 96 6c        LDA    <$6C
f22f: 84 c0        ANDA   #$C0
f231: 48           ASLA
f232: 59           ROLB
f233: 24 02        BCC    $F237
f235: 8a 3f        ORA    #$3F
f237: 49           ROLA
f238: 59           ROLB
f239: 49           ROLA
f23a: dd 2f        STD    <$2F
f23c: c3 ff 98     ADDD   #$FF98
f23f: 84 1f        ANDA   #$1F
f241: fd 00 24     STD    >$0024
f244: d6 74        LDB    <$74
f246: 96 75        LDA    <$75
f248: 84 c0        ANDA   #$C0
f24a: 48           ASLA
f24b: 59           ROLB
f24c: 24 02        BCC    $F250
f24e: 8a 3f        ORA    #$3F
f250: 49           ROLA
f251: 59           ROLB
f252: 49           ROLA
f253: dd 2d        STD    <$2D
f255: 84 1f        ANDA   #$1F
f257: fd 00 26     STD    >$0026
f25a: cc c0 00     LDD    #$C000
f25d: fd 00 28     STD    >$0028
f260: 39           RTS
f261: 7e f261     JMP    $f261
