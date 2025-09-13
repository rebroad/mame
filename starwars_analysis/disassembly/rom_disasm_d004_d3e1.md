d004: ff ba 00     STU    $BA00
d007: dc e0        LDD    <$E0
d009: aa 00        ORA    $0,X
d00b: 00 e0        NEG    <$E0
d00d: 8c bb 9d     CMPX   #$BB9D
d010: 1d           SEX
d011: e4 fe        ANDB   [W,S]
d013: e8 bb        EORB   [D,Y]
d015: a3 00        SUBD   $0,X
d017: 00 ff        NEG    <$FF
d019: 10 bb a3 00  ADDA   $A300
d01d: 96 e0        LDA    <$E0
d01f: 32 1f        LEAS   -$1,X
d021: 6a ff 7e bb  DEC    [$7EBB]
d025: a3 00        SUBD   $0,X
d027: 00 ff        NEG    <$FF
d029: 10 bb a3 02  ADDA   $A302
d02d: 1c e0        ANDCC  #$E0
d02f: b4 00 00     ANDA   >$0000
d032: e0 be        SUBB   [W,Y]
d034: 72 00 80     XNC    >$0080
d037: 40           NEGA
d038: c0 00        SUBB   #$00
d03a: 18           X18
d03b: bc 1f b0     CMPX   $1FB0
d03e: 1d           SEX
d03f: e4 e0        ANDB   ,S+
d041: 82 bb        SBCA   #$BB
d043: a3 00        SUBD   $0,X
d045: 00 ff        NEG    <$FF
d047: 38 bb        XANDCC #$BB
d049: a3 00        SUBD   $0,X
d04b: 50           NEGB
d04c: ff e2 bb     STU    $E2BB
d04f: a3 00        SUBD   $0,X
d051: 00 ff        NEG    <$FF
d053: 2e bb        BGT    $D010
d055: a3 1f        SUBD   -$1,X
d057: b0 ff c4     SUBA   $FFC4
d05a: bb a3 00     ADDA   $A300
d05d: 00 ff        NEG    <$FF
d05f: 24 bb        BCC    $D01C
d061: a3 02        SUBD   $2,X
d063: 1c e1        ANDCC  #$E1
d065: 18           X18
d066: 00 00        NEG    <$00
d068: e1 36        CMPB   -$A,Y
d06a: 1f 88        TFR    A,A
d06c: 1f 56        TFR    PC,inv
d06e: bb a0 1f     ADDA   $A01F
d071: 2e e0        BGT    $D053
d073: 3c 00        CWAI   #$00
d075: 00 ff        NEG    <$FF
d077: 56           RORB
d078: 00 d2        NEG    <$D2
d07a: e0 6e        SUBB   $E,S
d07c: 72 00 80     XNC    >$0080
d07f: 40           NEGA
d080: c0 00        SUBB   #$00
d082: 18           X18
d083: bc 01 9a     CMPX   $019A
d086: 00 00        NEG    <$00
d088: fe 84 1d     LDU    $841D
d08b: e4 e0        ANDB   ,S+
d08d: 0a 00        DEC    <$00
d08f: 00 e0        NEG    <$E0
d091: c8 bb        EORB   #$BB
d093: a3 00        SUBD   $0,X
d095: b4 ff ec     ANDA   $FFEC
d098: 1f 4c        TFR    S,inv
d09a: e1 54        CMPB   -$C,U
d09c: bb a3 00     ADDA   $A300
d09f: 00 e2        NEG    <$E2
d0a1: 58           ASLB
d0a2: bb a3 00     ADDA   $A300
d0a5: 78 e0 78     ASL    $E078
d0a8: bb a3 00     ADDA   $A300
d0ab: 6e ff c4 00  JMP    [$C400]
d0af: 78 ff 1a     ASL    $FF1A
d0b2: 00 14        NEG    <$14
d0b4: ff a6 00     STU    $A600
d0b7: 28 ff        BVC    $D0B8
d0b9: ec 00        LDD    $0,X
d0bb: 00 e1        NEG    <$E1
d0bd: 68 bb        ASL    [D,Y]
d0bf: 9d 00        JSR    <$00
d0c1: 82 ff        SBCA   #$FF
d0c3: b0 00 00     SUBA   >$0000
d0c6: fe 70 1f     LDU    $701F
d0c9: 9c ff        CMPX   <$FF
d0cb: 9c bb        CMPX   <$BB
d0cd: 9a 1f        ORA    <$1F
d0cf: 9c e0        CMPX   <$E0
d0d1: 28 bb        BVC    $D08E
d0d3: 9d 1f        JSR    <$1F
d0d5: 92 e0        SBCA   <$E0
d0d7: be bb 94     LDX    $BB94
d0da: 1f ec        TFR    inv,inv
d0dc: e0 50        SUBB   -$10,U
d0de: 51           NEGB
d0df: e5 00        BITB   $0,X
d0e1: 00 fe        NEG    <$FE
d0e3: e8 00        EORB   $0,X
d0e5: 1e ff        EXG    inv,inv
d0e7: 42           XNCA
d0e8: 00 50        NEG    <$50
d0ea: e0 8c bb     SUBB   $D0A8,PCR
d0ed: 97 00        STA    <$00
d0ef: 82 ff        SBCA   #$FF
d0f1: d8 00        EORB   <$00
d0f3: 78 ff 38     ASL    $FF38
d0f6: 1f 88        TFR    A,A
d0f8: 1f ce        TFR    inv,inv
d0fa: bb 9a 1f     ADDA   $9A1F
d0fd: c4 e0        ANDB   #$E0
d0ff: 64 1f        LSR    -$1,X
d101: d8 e0        EORB   <$E0
d103: 0a 1f        DEC    <$1F
d105: e2 ff b0 00  SBCB   [$B000]
d109: 00 ff        NEG    <$FF
d10b: 2e 00        BGT    $D10D
d10d: 82 ff        SBCA   #$FF
d10f: f6 00 00     LDB    >$0000
d112: e0 be        SUBB   [W,Y]
d114: 72 00 80     XNC    >$0080
d117: 40           NEGA
d118: c0 00        SUBB   #$00
d11a: 64 ff 00 78  LSR    [$0078]
d11e: e0 0a        SUBB   $A,X
d120: 1f d3        TFR    inv,U
d122: 00 1e        NEG    <$1E
d124: 1f b5        TFR    DP,PC
d126: ff d8 00     STU    $D800
d129: 3c e0        CWAI   #$E0
d12b: 4b           XDECA
d12c: a0 18        SUBA   -$8,X
d12e: a0 16        SUBA   -$A,X
d130: 64 ff 1f d3  LSR    [$1FD3]
d134: 1f fb        TFR    inv,DP
d136: 1f f1        TFR    inv,X
d138: ff ba 1f     STU    $BA1F
d13b: d3 e0        ADDD   <$E0
d13d: 50           NEGB
d13e: a0 18        SUBA   -$8,X
d140: a0 16        SUBA   -$A,X
d142: 64 ff 1f d3  LSR    [$1FD3]
d146: 1f ec        TFR    inv,inv
d148: 00 5a        NEG    <$5A
d14a: ff c4 1f     STU    $C41F
d14d: b5 e0 1e     BITA   $E01E
d150: 51           NEGB
d151: 16 00 69     LBRA   $D1BD
d154: ff f6 1f     STU    $F61F
d157: 88 ff        EORA   #$FF
d159: e2 a0        SBCB   ,Y+
d15b: 18           X18
d15c: a0 16        SUBA   -$A,X
d15e: 64 ff 00 2d  LSR    [$002D]
d162: 1f f6        TFR    inv,inv
d164: 00 4b        NEG    <$4B
d166: e0 28        SUBB   $8,Y
d168: 1f c4        TFR    inv,S
d16a: ff c4 00     STU    $C400
d16d: 2d 00        BLT    $D16F
d16f: 0a 00        DEC    <$00
d171: 0f e0        CLR    <$E0
d173: 32 00        LEAS   $0,X
d175: 0f ff        CLR    <$FF
d177: b0 a0 18     SUBA   $A018
d17a: a0 16        SUBA   -$A,X
d17c: 64 ff 00 2d  LSR    [$002D]
d180: 00 00        NEG    <$00
d182: 1f c4        TFR    inv,S
d184: e0 50        SUBB   -$10,U
d186: 00 3c        NEG    <$3C
d188: ff e2 00     STU    $E200
d18b: 3c 00        CWAI   #$00
d18d: 00 a0        NEG    <$A0
d18f: 18           X18
d190: a0 16        SUBA   -$A,X
d192: 64 ff 1f 88  LSR    [$1F88]
d196: e0 1e        SUBB   -$2,X
d198: a0 18        SUBA   -$8,X
d19a: a0 16        SUBA   -$A,X
d19c: 64 ff c0 00  LSR    [$C000]
d1a0: 64 ff 00 5a  LSR    [$005A]
d1a4: e0 0f        SUBB   $F,X
d1a6: 1f f1        TFR    inv,X
d1a8: 00 0f        NEG    <$0F
d1aa: 1f b5        TFR    DP,PC
d1ac: ff e2 00     STU    $E200
d1af: 2d e0        BLT    $D191
d1b1: 50           NEGB
d1b2: a0 18        SUBA   -$8,X
d1b4: a0 16        SUBA   -$A,X
d1b6: 64 ff 1f cc  LSR    [$1FCC]
d1ba: 00 05        NEG    <$05
d1bc: 00 07        NEG    <$07
d1be: ff ab 1f     STU    $AB1F
d1c1: b5 e0 46     BITA   $E046
d1c4: a0 18        SUBA   -$8,X
d1c6: a0 16        SUBA   -$A,X
d1c8: 64 ff 1f f1  LSR    [$1FF1]
d1cc: 1f ce        TFR    inv,inv
d1ce: 00 5a        NEG    <$5A
d1d0: ff ec 1f     STU    $EC1F
d1d3: 88 e0        EORA   #$E0
d1d5: 00 4f        NEG    <$4F
d1d7: 16 00 5a     LBRA   $D234
d1da: e0 14        SUBB   -$C,X
d1dc: 1f 90        TFR    B,D
d1de: ff ce a0     STU    $CEA0
d1e1: 18           X18
d1e2: a0 16        SUBA   -$A,X
d1e4: 64 ff 00 3c  LSR    [$003C]
d1e8: 1f f1        TFR    inv,X
d1ea: 00 34        NEG    <$34
d1ec: e0 41        SUBB   $1,U
d1ee: 1f e2        TFR    inv,Y
d1f0: ff b0 00     STU    $B000
d1f3: 2d 00        BLT    $D1F5
d1f5: 14           XHCF
d1f6: 1f f1        TFR    inv,X
d1f8: e0 3c        SUBB   -$4,Y
d1fa: 00 2d        NEG    <$2D
d1fc: ff b0 a0     STU    $B0A0
d1ff: 18           X18
d200: a0 16        SUBA   -$A,X
d202: 64 ff 4f 05  LSR    [$4F05]
d206: 1f b5        TFR    DP,PC
d208: e0 46        SUBB   $6,U
d20a: 00 5a        NEG    <$5A
d20c: ff e2 00     STU    $E200
d20f: 25 00        BCS    $D211
d211: 1e a0        EXG    CC,D
d213: 18           X18
d214: a0 16        SUBA   -$A,X
d216: 64 ff 1f 81  LSR    [$1F81]
d21a: e0 00        SUBB   $0,X
d21c: a0 18        SUBA   -$8,X
d21e: a0 16        SUBA   -$A,X
d220: 64 ff c0 00  LSR    [$C000]
d224: 64 ff 00 5a  LSR    [$005A]
d228: e0 0a        SUBB   $A,X
d22a: 4b           XDECA
d22b: 0f a0        CLR    <$A0
d22d: 18           X18
d22e: a0 16        SUBA   -$A,X
d230: 64 ff 1f 90  LSR    [$1F90]
d234: ff d8 00     STU    $D800
d237: 4b           XDECA
d238: e0 3c        SUBB   -$4,Y
d23a: 1f d3        TFR    inv,U
d23c: 1f f6        TFR    inv,inv
d23e: 1f e2        TFR    inv,Y
d240: ff ce 00     STU    $CE00
d243: 0f e0        CLR    <$E0
d245: 55           LSRB
d246: a0 18        SUBA   -$8,X
d248: a0 16        SUBA   -$A,X
d24a: 64 ff 1f e2  LSR    [$1FE2]
d24e: 1f f1        TFR    inv,X
d250: 00 0f        NEG    <$0F
d252: ff ba 1f     STU    $BA1F
d255: c4 e0        ANDB   #$E0
d257: 46           RORA
d258: 1f d3        TFR    inv,U
d25a: 1f ec        TFR    inv,inv
d25c: a0 18        SUBA   -$8,X
d25e: a0 16        SUBA   -$A,X
d260: 64 ff 00 69  LSR    [$0069]
d264: ff ce 1f     STU    $CE1F
d267: 97 ff        STA    <$FF
d269: f6 4f 16     LDB    $4F16
d26c: 00 4b        NEG    <$4B
d26e: e0 1e        SUBB   -$2,X
d270: 1f a6        TFR    CC,inv
d272: ff ba 00     STU    $BA00
d275: 26 1f        BNE    $D296
d277: f6 a0 18     LDB    $A018
d27a: a0 16        SUBA   -$A,X
d27c: 64 ff 00 34  LSR    [$0034]
d280: e0 50        SUBB   -$10,U
d282: 1f f1        TFR    inv,X
d284: ff a6 00     STU    $A600
d287: 2d 00        BLT    $D289
d289: 28 1f        BVC    $D2AA
d28b: e2 e0        SBCB   ,S+
d28d: 32 00        LEAS   $0,X
d28f: 5a           DECB
d290: ff c4 a0     STU    $C4A0
d293: 18           X18
d294: a0 16        SUBA   -$A,X
d296: 64 ff 00 2d  LSR    [$002D]
d29a: 00 32        NEG    <$32
d29c: 1f 79        TFR    inv,B
d29e: e0 0a        SUBB   $A,X
d2a0: a0 18        SUBA   -$8,X
d2a2: a0 16        SUBA   -$A,X
d2a4: 64 ff c0 00  LSR    [$C000]
d2a8: 64 ff 1f 81  LSR    [$1F81]
d2ac: e0 0f        SUBB   $F,X
d2ae: a0 18        SUBA   -$8,X
d2b0: a0 16        SUBA   -$A,X
d2b2: 64 ff 00 34  LSR    [$0034]
d2b6: 00 19        NEG    <$19
d2b8: 00 4b        NEG    <$4B
d2ba: ff d8 1f     STU    $D81F
d2bd: b5 e0 3c     BITA   $E03C
d2c0: 00 35        NEG    <$35
d2c2: 00 05        NEG    <$05
d2c4: 00 16        NEG    <$16
d2c6: ff bf 1f     STU    $BF1F
d2c9: f1 e0 55     CMPB   $E055
d2cc: a0 18        SUBA   -$8,X
d2ce: a0 16        SUBA   -$A,X
d2d0: 64 ff 00 2d  LSR    [$002D]
d2d4: 1f f1        TFR    inv,X
d2d6: 1f e2        TFR    inv,Y
d2d8: ff ba 00     STU    $BA00
d2db: 4b           XDECA
d2dc: e0 46        SUBB   $6,U
d2de: 00 16        NEG    <$16
d2e0: 1f f1        TFR    inv,X
d2e2: a0 18        SUBA   -$8,X
d2e4: a0 16        SUBA   -$A,X
d2e6: 64 ff 1f 9f  LSR    [$1F9F]
d2ea: ff c9 00     STU    $C900
d2ed: 69 ff f1 40  ROL    [$F140]
d2f1: 11 a0 18     SUBA   -$8,X
d2f4: a0 16        SUBA   -$A,X
d2f6: 64 ff 1f 97  LSR    [$1F97]
d2fa: e0 2d        SUBB   $D,Y
d2fc: 00 4b        NEG    <$4B
d2fe: ff ba 1f     STU    $BA1F
d301: da 1f        ORB    <$1F
d303: f6 1f db     LDB    $1FDB
d306: e0 50        SUBB   -$10,U
d308: 00 00        NEG    <$00
d30a: ff ab a0     STU    $ABA0
d30d: 18           X18
d30e: a0 16        SUBA   -$A,X
d310: 64 ff 1f e2  LSR    [$1FE2]
d314: 00 23        NEG    <$23
d316: 00 1e        NEG    <$1E
d318: e0 32        SUBB   -$E,Y
d31a: 1f a6        TFR    CC,inv
d31c: ff c4 1f     STU    $C41F
d31f: e2 00        SBCB   $0,X
d321: 28 00        BVC    $D323
d323: 78 e0 14     ASL    $E014
d326: a0 18        SUBA   -$8,X
d328: a0 16        SUBA   -$A,X
d32a: 64 ff c0 00  LSR    [$C000]
d32e: 4f           CLRA
d32f: e0 00        SUBB   $0,X
d331: 00 00        NEG    <$00
d333: 3c 1f        CWAI   #$1F
d335: e2 ff c4 1f  SBCB   [$C41F]
d339: e2 e0        SBCB   ,S+
d33b: 28 1f        BVC    $D35C
d33d: e2 1f        SBCB   -$1,X
d33f: d8 00        EORB   <$00
d341: 3c e0        CWAI   #$E0
d343: 00 1f        NEG    <$1F
d345: e2 ff d8 00  SBCB   [$D800]
d349: 5a           DECB
d34a: 00 00        NEG    <$00
d34c: 1f c4        TFR    inv,S
d34e: e0 28        SUBB   $8,Y
d350: c0 00        SUBB   #$00
d352: 40           NEGA
d353: f6 00 5a     LDB    >$005A
d356: 00 00        NEG    <$00
d358: 1f a6        TFR    CC,inv
d35a: e0 14        SUBB   -$C,X
d35c: 00 3c        NEG    <$3C
d35e: e0 14        SUBB   -$C,X
d360: 1f c4        TFR    inv,S
d362: 00 14        NEG    <$14
d364: 00 00        NEG    <$00
d366: ff d8 1f     STU    $D81F
d369: c4 e0        ANDB   #$E0
d36b: 14           XHCF
d36c: 00 00        NEG    <$00
d36e: 1f c4        TFR    inv,S
d370: 00 3c        NEG    <$3C
d372: e0 28        SUBB   $8,Y
d374: c0 00        SUBB   #$00
d376: 51           NEGB
d377: e0 00        SUBB   $0,X
d379: 00 1f        NEG    <$1F
d37b: c4 00        ANDB   #$00
d37d: 1e e0        EXG    inv,D
d37f: 3c 00        CWAI   #$00
d381: 1e ff        EXG    inv,inv
d383: d8 00        EORB   <$00
d385: 1e 00        EXG    D,D
d387: 28 1f        BVC    $D3A8
d389: c4 e0        ANDB   #$E0
d38b: 00 00        NEG    <$00
d38d: 1e e0        EXG    inv,D
d38f: 28 1f        BVC    $D3B0
d391: a6 00        LDA    $0,X
d393: 00 00        NEG    <$00
d395: 3c ff        CWAI   #$FF
d397: d8 c0        EORB   <$C0
d399: 00 40        NEG    <$40
d39b: ea 1f        ORB    -$1,X
d39d: a6 00        LDA    $0,X
d39f: 00 00        NEG    <$00
d3a1: 5a           DECB
d3a2: ff ec 1f     STU    $EC1F
d3a5: c4 ff        ANDB   #$FF
d3a7: ec 00        LDD    $0,X
d3a9: 3c 1f        CWAI   #$1F
d3ab: ec 00        LDD    $0,X
d3ad: 00 e0        NEG    <$E0
d3af: 28 00        BVC    $D3B1
d3b1: 3c ff        CWAI   #$FF
d3b3: ec 00        LDD    $0,X
d3b5: 00 00        NEG    <$00
d3b7: 3c 1f        CWAI   #$1F
d3b9: c4 ff        ANDB   #$FF
d3bb: d8 c0        EORB   <$C0
d3bd: 00 44        NEG    <$44
d3bf: 1a b9        ORCC   #$B9
d3c1: ef 56        STU    -$A,U
d3c3: 22 b9        BHI    $D37E
d3c5: ef 42        STU    $2,U
d3c7: 2a b9        BPL    $D382
d3c9: ef 46        STU    $6,U
d3cb: 04 c0        LSR    <$C0
d3cd: 00 46        NEG    <$46
d3cf: 04 b9        LSR    <$B9
d3d1: ef 5e        STU    -$2,U
d3d3: 36 f6        PSHU   PC,S,Y,X,D
d3d5: 71 5c 06     NEG    $5C06
d3d8: 4a           DECA
d3d9: 3e           XRES
d3da: f6 79 41     LDB    $7941
d3dd: 05 b9        LSR    <$B9
d3df: ef 5f        STU    -$1,U
d3e1: 3b           RTI
