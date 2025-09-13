9fb8: 01 03     NEG    <$03
9fba: 1e 80     EXG    A,D
9fbc: 00 60     NEG    <$60
9fbe: 00 01     NEG    <$01
9fc0: 03 1f     COM    <$1F
9fc2: 00 00     NEG    <$00
9fc4: 00 00     NEG    <$00
9fc6: 01 01     NEG    <$01
9fc8: 00 18     NEG    <$18
9fca: 00 80     NEG    <$80
9fcc: 00 01     NEG    <$01
9fce: 03 01     COM    <$01
9fd0: 20 00     BRA    $9FD2
9fd2: d8 00     EORB   <$00
9fd4: 01 01     NEG    <$01
9fd6: 02 20     XNC    <$20
9fd8: 00 28     NEG    <$28
9fda: 00 01     NEG    <$01
9fdc: 01 03     NEG    <$03
9fde: 30 00     LEAX   $0,X
9fe0: 90 00     SUBA   <$00
9fe2: 01 02     NEG    <$02
9fe4: 04 30     LSR    <$30
9fe6: 00 60     NEG    <$60
9fe8: 00 03     NEG    <$03
9fea: 02 05     XNC    <$05
9fec: 30 00     LEAX   $0,X
9fee: 70 00 01  NEG    >$0001
9ff1: 02 06     XNC    <$06
9ff3: 38 00     XANDCC #$00
9ff5: b0 00 01  SUBA   >$0001
9ff8: 03 07     COM    <$07
9ffa: 38 00     XANDCC #$00
9ffc: e0 00     SUBB   $0,X
9ffe: 01 00     NEG    <$00
a000: 08 38     ASL    <$38
a002: 00 20     NEG    <$20
a004: 00 01     NEG    <$01
a006: 00 09     NEG    <$09
a008: 38 00     XANDCC #$00
a00a: 50        NEGB
a00b: 00 01     NEG    <$01
a00d: 03 0a     COM    <$0A
a00f: 48        ASLA
a010: 00 e8     NEG    <$E8
a012: 00 01     NEG    <$01
a014: 00 0b     NEG    <$0B
a016: 48        ASLA
a017: 00 18     NEG    <$18
a019: 00 01     NEG    <$01
a01b: 00 0c     NEG    <$0C
a01d: 50        NEGB
a01e: 00 88     NEG    <$88
a020: 00 01     NEG    <$01
a022: 02 0d     XNC    <$0D
a024: 50        NEGB
a025: 00 a0     NEG    <$A0
a027: 00 01     NEG    <$01
a029: 03 0e     COM    <$0E
a02b: 50        NEGB
a02c: 00 c0     NEG    <$C0
a02e: 00 01     NEG    <$01
a030: 01 0f     NEG    <$0F
a032: 50        NEGB
a033: 00 40     NEG    <$40
a035: 00 01     NEG    <$01
a037: 01 10     NEG    <$10
a039: 50        NEGB
a03a: 00 60     NEG    <$60
a03c: 00 01     NEG    <$01
a03e: 03 11     COM    <$11
a040: 50        NEGB
a041: 00 78     NEG    <$78
a043: 00 01     NEG    <$01
a045: 02 12     XNC    <$12
a047: 5c        INCB
a048: 00 e4     NEG    <$E4
a04a: 00 01     NEG    <$01
a04c: 00 13     NEG    <$13
a04e: 5c        INCB
a04f: 00 1c     NEG    <$1C
a051: 00 01     NEG    <$01
a053: 00 14     NEG    <$14
a055: 60 00     NEG    $0,X
a057: f0 00 01  SUBB   >$0001
a05a: 00 15     NEG    <$15
a05c: 60 00     NEG    $0,X
a05e: 10 00 01  NEG    <$01
a061: 00 16     NEG    <$16
a063: 60 00     NEG    $0,X
a065: 7c 00 01  INC    >$0001
a068: 03 17     COM    <$17
a06a: 70 00 c8  NEG    >$00C8
a06d: 00 01     NEG    <$01
a06f: 01 18     NEG    <$18
a071: 70 00 f8  NEG    >$00F8
a074: 00 01     NEG    <$01
a076: 00 19     NEG    <$19
a078: 70 00 08  NEG    >$0008
a07b: 00 01     NEG    <$01
a07d: 00 1a     NEG    <$1A
a07f: 70 00 38  NEG    >$0038
a082: 00 01     NEG    <$01
a084: 01 1b     NEG    <$1B
a086: 00 00     NEG    <$00
a088: a0 00     SUBA   $0,X
a08a: 01 03     NEG    <$03
a08c: 1c 00     ANDCC  #$00
a08e: 00 c0     NEG    <$C0
a090: 00 01     NEG    <$01
a092: 02 1d     XNC    <$1D
a094: 00 00     NEG    <$00
a096: 40        NEGA
a097: 00 01     NEG    <$01
a099: 02 1e     XNC    <$1E
a09b: 00 00     NEG    <$00
a09d: 60 00     NEG    $0,X
a09f: 01 03     NEG    <$03
a0a1: 1f 10     TFR    X,D
a0a3: 00 e0     NEG    <$E0
a0a5: 00 01     NEG    <$01
a0a7: 01 00     NEG    <$00
a0a9: 10 00 20  NEG    <$20
a0ac: 00 01     NEG    <$01
a0ae: 01 01     NEG    <$01
a0b0: 20 00     BRA    $A0B2
a0b2: c0 00     SUBB   #$00
a0b4: 03 01     COM    <$01
a0b6: 02 20     XNC    <$20
a0b8: 00 40     NEG    <$40
a0ba: 00 03     NEG    <$03
a0bc: 01 03     NEG    <$03
a0be: 28 00     BVC    $A0C0
a0c0: e0 00     SUBB   $0,X
a0c2: 01 00     NEG    <$00
a0c4: 04 28     LSR    <$28
a0c6: 00 20     NEG    <$20
a0c8: 00 01     NEG    <$01
a0ca: 00 05     NEG    <$05
a0cc: 30 00     LEAX   $0,X
a0ce: 90 00     SUBA   <$00
a0d0: 03 02     COM    <$02
a0d2: 06 30     ROR    <$30
a0d4: 00 a0     NEG    <$A0
a0d6: 00 03     NEG    <$03
a0d8: 02 07     XNC    <$07
a0da: 30 00     LEAX   $0,X
a0dc: 60 00     NEG    $0,X
a0de: 03 02     COM    <$02
a0e0: 08 38     ASL    <$38
a0e2: 00 b0     NEG    <$B0
a0e4: 00 01     NEG    <$01
a0e6: 01 09     NEG    <$09
a0e8: 38 00     XANDCC #$00
a0ea: 50        NEGB
a0eb: 00 01     NEG    <$01
a0ed: 01 0a     NEG    <$0A
a0ef: 40        NEGA
a0f0: 00 d0     NEG    <$D0
a0f2: 00 03     NEG    <$03
a0f4: 00 0b     NEG    <$0B
a0f6: 40        NEGA
a0f7: 00 00     NEG    <$00
a0f9: 00 03     NEG    <$03
a0fb: 00 0c     NEG    <$0C
a0fd: 40        NEGA
a0fe: 00 30     NEG    <$30
a100: 00 03     NEG    <$03
a102: 00 0d     NEG    <$0D
a104: 40        NEGA
a105: 00 80     NEG    <$80
a107: 00 01     NEG    <$01
a109: 01 0e     NEG    <$0E
a10b: 50        NEGB
a10c: 00 88     NEG    <$88
a10e: 00 01     NEG    <$01
a110: 02 0f     XNC    <$0F
a112: 50        NEGB
a113: 00 00     NEG    <$00
a115: 00 01     NEG    <$01
a117: 00 10     NEG    <$10
a119: 50        NEGB
a11a: 00 78     NEG    <$78
a11c: 00 01     NEG    <$01
a11e: 02 11     XNC    <$11
a120: 60 00     NEG    $0,X
a122: c0 00     SUBB   #$00
a124: 01 00     NEG    <$00
a126: 12        NOP
a127: 60 00     NEG    $0,X
a129: 40        NEGA
a12a: 00 01     NEG    <$01
a12c: 00 13     NEG    <$13
a12e: 68 00     ASL    $0,X
a130: d0 00     SUBB   <$00
a132: 01 00     NEG    <$00
a134: 14        XHCF
a135: 68 00     ASL    $0,X
a137: 30 00     LEAX   $0,X
a139: 01 00     NEG    <$00
a13b: 15        XHCF
a13c: 70 00 90  NEG    >$0090
a13f: 00 01     NEG    <$01
a141: 01 16     NEG    <$16
a143: 70 00 a0  NEG    >$00A0
a146: 00 01     NEG    <$01
a148: 01 17     NEG    <$17
a14a: 70 00 f0  NEG    >$00F0
a14d: 00 01     NEG    <$01
a14f: 00 18     NEG    <$18
a151: 70 00 10  NEG    >$0010
a154: 00 01     NEG    <$01
a156: 00 19     NEG    <$19
a158: 70 00 60  NEG    >$0060
a15b: 00 01     NEG    <$01
a15d: 01 1a     NEG    <$1A
a15f: 70 00 70  NEG    >$0070
a162: 00 01     NEG    <$01
a164: 01 1b     NEG    <$1B
a166: 10 00 b8  NEG    <$B8
a169: 00 01     NEG    <$01
a16b: 02 1c     XNC    <$1C
a16d: 10 00 58  NEG    <$58
a170: 00 01     NEG    <$01
a172: 02 1d     XNC    <$1D
a174: 20 00     BRA    $A176
a176: 98 00     EORA   <$00
a178: 01 02     NEG    <$02
a17a: 1e 20     EXG    Y,D
a17c: 00 70     NEG    <$70
a17e: 00 01     NEG    <$01
a180: 02 1f     XNC    <$1F
a182: 9a 9e     ORA    <$9E
a184: 9b 62     ADDA   <$62
a186: 9e e2     LDX    <$E2
a188: 9f a6     STX    <$A6
a18a: 99 be     ADCA   <$BE
a18c: 9a 82     ORA    <$82
a18e: a0 a2     SUBA   ,-Y
a190: a1 66     CMPA   $6,S
a192: 9e 02     LDX    <$02
a194: 9e c6     LDX    <$C6
a196: 98 de     EORA   <$DE
a198: 99 a2     ADCA   <$A2
a19a: 9d 22     JSR    <$22
a19c: 9d e6     JSR    <$E6
a19e: 9c 42     CMPX   <$42
a1a0: 9d 06     JSR    <$06
a1a2: 9f c2     STX    <$C2
a1a4: a0 86     SUBA   A,X
a1a6: 9b 62     ADDA   <$62
a1a8: 9c 26     CMPX   <$26
a1aa: 9e e2     LDX    <$E2
a1ac: 9f c2     STX    <$C2
a1ae: 99 be     ADCA   <$BE
a1b0: 9a 9e     ORA    <$9E
a1b2: a0 a2     SUBA   ,-Y
a1b4: a1 82     CMPA   ,-X
a1b6: 9e 02     LDX    <$02
a1b8: 9e e2     LDX    <$E2
a1ba: 98 de     EORA   <$DE
a1bc: 99 be     ADCA   <$BE
a1be: 9d 22     JSR    <$22
a1c0: 9e 02     LDX    <$02
a1c2: 9c 42     CMPX   <$42
a1c4: 9d 22     JSR    <$22
a1c6: 9f c2     STX    <$C2
a1c8: a0 a2     SUBA   ,-Y
a1ca: 9b 62     ADDA   <$62
a1cc: 9c 42     CMPX   <$42
a1ce: 7e a1ce     JMP    $a1ce
