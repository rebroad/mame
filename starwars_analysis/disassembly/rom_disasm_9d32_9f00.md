9d32: d0 00        SUBB   <$00
9d34: 03 01        COM    <$01
9d36: 02 30        XNC    <$30
9d38: 00 90        NEG    <$90
9d3a: 00 03        NEG    <$03
9d3c: 02 03        XNC    <$03
9d3e: 30 00        LEAX   $0,X
9d40: e0 00        SUBB   $0,X
9d42: 01 00        NEG    <$00
9d44: 04 30        LSR    <$30
9d46: 00 20        NEG    <$20
9d48: 00 01        NEG    <$01
9d4a: 00 05        NEG    <$05
9d4c: 30 00        LEAX   $0,X
9d4e: 70 00 03     NEG    >$0003
9d51: 02 06        XNC    <$06
9d53: 38 00        XANDCC #$00
9d55: b8 00 01     EORA   >$0001
9d58: 01 07        NEG    <$07
9d5a: 38 00        XANDCC #$00
9d5c: 48           ASLA
9d5d: 00 01        NEG    <$01
9d5f: 01 08        NEG    <$08
9d61: 40           NEGA
9d62: 00 90        NEG    <$90
9d64: 00 01        NEG    <$01
9d66: 03 09        COM    <$09
9d68: 40           NEGA
9d69: 00 e8        NEG    <$E8
9d6b: 00 03        NEG    <$03
9d6d: 00 0a        NEG    <$0A
9d6f: 40           NEGA
9d70: 00 18        NEG    <$18
9d72: 00 03        NEG    <$03
9d74: 00 0b        NEG    <$0B
9d76: 40           NEGA
9d77: 00 48        NEG    <$48
9d79: 00 01        NEG    <$01
9d7b: 01 0c        NEG    <$0C
9d7d: 50           NEGB
9d7e: 00 e0        NEG    <$E0
9d80: 00 03        NEG    <$03
9d82: 00 0d        NEG    <$0D
9d84: 50           NEGB
9d85: 00 f0        NEG    <$F0
9d87: 00 01        NEG    <$01
9d89: 00 0e        NEG    <$0E
9d8b: 50           NEGB
9d8c: 00 10        NEG    <$10
9d8e: 00 01        NEG    <$01
9d90: 00 0f        NEG    <$0F
9d92: 50           NEGB
9d93: 00 20        NEG    <$20
9d95: 00 03        NEG    <$03
9d97: 00 10        NEG    <$10
9d99: 60 00        NEG    $0,X
9d9b: 88 00        EORA   #$00
9d9d: 01 03        NEG    <$03
9d9f: 11 60 00     NEG    $0,X
9da2: a0 00        SUBA   $0,X
9da4: 01 02        NEG    <$02
9da6: 12           NOP
9da7: 60 00        NEG    $0,X
9da9: c0 00        SUBB   #$00
9dab: 01 01        NEG    <$01
9dad: 13           SYNC
9dae: 60 00        NEG    $0,X
9db0: d0 00        SUBB   <$00
9db2: 01 01        NEG    <$01
9db4: 14           XHCF
9db5: 60 00        NEG    $0,X
9db7: f8 00 01     EORB   >$0001
9dba: 00 15        NEG    <$15
9dbc: 60 00        NEG    $0,X
9dbe: 08 00        ASL    <$00
9dc0: 01 00        NEG    <$00
9dc2: 16 60 00     LBRA   $FDC5
9dc5: 30 00        LEAX   $0,X
9dc7: 01 01        NEG    <$01
9dc9: 17 60 00     LBSR   $FDCC
9dcc: 40           NEGA
9dcd: 00 01        NEG    <$01
9dcf: 01 18        NEG    <$18
9dd1: 60 00        NEG    $0,X
9dd3: 60 00        NEG    $0,X
9dd5: 01 02        NEG    <$02
9dd7: 19           DAA
9dd8: 60 00        NEG    $0,X
9dda: 80 00        SUBA   #$00
9ddc: 01 02        NEG    <$02
9dde: 1a 70        ORCC   #$70
9de0: 00 00        NEG    <$00
9de2: 00 01        NEG    <$01
9de4: 00 1b        NEG    <$1B
9de6: 80 00        SUBA   #$00
9de8: a8 00        EORA   $0,X
9dea: 01 03        NEG    <$03
9dec: 1c 80        ANDCC  #$80
9dee: 00 e0        NEG    <$E0
9df0: 00 01        NEG    <$01
9df2: 03 1d        COM    <$1D
9df4: 80 00        SUBA   #$00
9df6: 20 00        BRA    $9DF8
9df8: 01 03        NEG    <$03
9dfa: 1e 80        EXG    A,D
9dfc: 00 58        NEG    <$58
9dfe: 00 01        NEG    <$01
9e00: 03 1f        COM    <$1F
9e02: 00 00        NEG    <$00
9e04: b8 00 01     EORA   >$0001
9e07: 02 00        XNC    <$00
9e09: 00 00        NEG    <$00
9e0b: 48           ASLA
9e0c: 00 01        NEG    <$01
9e0e: 02 01        XNC    <$01
9e10: 10 00 a0     NEG    <$A0
9e13: 00 01        NEG    <$01
9e15: 03 02        COM    <$02
9e17: 10 00 e0     NEG    <$E0
9e1a: 00 01        NEG    <$01
9e1c: 01 03        NEG    <$03
9e1e: 10 00 f8     NEG    <$F8
9e21: 00 01        NEG    <$01
9e23: 00 04        NEG    <$04
9e25: 10 00 08     NEG    <$08
9e28: 00 01        NEG    <$01
9e2a: 00 05        NEG    <$05
9e2c: 10 00 20     NEG    <$20
9e2f: 00 01        NEG    <$01
9e31: 01 06        NEG    <$06
9e33: 20 00        BRA    $9E35
9e35: c8 00        EORB   #$00
9e37: 01 01        NEG    <$01
9e39: 07 20        ASR    <$20
9e3b: 00 38        NEG    <$38
9e3d: 00 01        NEG    <$01
9e3f: 01 08        NEG    <$08
9e41: 2c 00        BGE    $9E43
9e43: e4 00        ANDB   $0,X
9e45: 01 00        NEG    <$00
9e47: 09 2c        ROL    <$2C
9e49: 00 1c        NEG    <$1C
9e4b: 00 01        NEG    <$01
9e4d: 00 0a        NEG    <$0A
9e4f: 30 00        LEAX   $0,X
9e51: 90 00        SUBA   <$00
9e53: 01 03        NEG    <$03
9e55: 0b 40        XDEC   <$40
9e57: 00 00        NEG    <$00
9e59: 00 03        NEG    <$03
9e5b: 01 0c        NEG    <$0C
9e5d: 50           NEGB
9e5e: 00 00        NEG    <$00
9e60: 00 01        NEG    <$01
9e62: 01 0d        NEG    <$0D
9e64: 50           NEGB
9e65: 00 80        NEG    <$80
9e67: 00 03        NEG    <$03
9e69: 03 0e        COM    <$0E
9e6b: 60 00        NEG    $0,X
9e6d: e8 00        EORB   $0,X
9e6f: 03 01        COM    <$01
9e71: 0f 60        CLR    <$60
9e73: 00 18        NEG    <$18
9e75: 00 03        NEG    <$03
9e77: 01 10        NEG    <$10
9e79: 60 00        NEG    $0,X
9e7b: 80 00        SUBA   #$00
9e7d: 01 03        NEG    <$03
9e7f: 11 70 00 88  NEG    >$0088
9e83: 00 03        NEG    <$03
9e85: 02 12        XNC    <$12
9e87: 70 00 a0     NEG    >$00A0
9e8a: 00 01        NEG    <$01
9e8c: 00 13        NEG    <$13
9e8e: 70 00 b0     NEG    >$00B0
9e91: 00 01        NEG    <$01
9e93: 00 14        NEG    <$14
9e95: 70 00 f0     NEG    >$00F0
9e98: 00 01        NEG    <$01
9e9a: 03 15        COM    <$15
9e9c: 70 00 10     NEG    >$0010
9e9f: 00 01        NEG    <$01
9ea1: 03 16        COM    <$16
9ea3: 70 00 50     NEG    >$0050
9ea6: 00 01        NEG    <$01
9ea8: 00 17        NEG    <$17
9eaa: 70 00 60     NEG    >$0060
9ead: 00 01        NEG    <$01
9eaf: 00 18        NEG    <$18
9eb1: 70 00 78     NEG    >$0078
9eb4: 00 03        NEG    <$03
9eb6: 02 19        XNC    <$19
9eb8: 78 00 e0     ASL    >$00E0
9ebb: 00 03        NEG    <$03
9ebd: 03 1a        COM    <$1A
9ebf: 78 00 20     ASL    >$0020
9ec2: 00 03        NEG    <$03
9ec4: 03 1b        COM    <$1B
9ec6: 40           NEGA
9ec7: 00 b0        NEG    <$B0
9ec9: 00 01        NEG    <$01
9ecb: 02 1c        XNC    <$1C
9ecd: 40           NEGA
9ece: 00 c0        NEG    <$C0
9ed0: 00 01        NEG    <$01
9ed2: 02 1d        XNC    <$1D
9ed4: 40           NEGA
9ed5: 00 30        NEG    <$30
9ed7: 00 01        NEG    <$01
9ed9: 02 1e        XNC    <$1E
9edb: 40           NEGA
9edc: 00 40        NEG    <$40
9ede: 00 01        NEG    <$01
9ee0: 02 1f        XNC    <$1F
9ee2: 20 00        BRA    $9EE4
9ee4: 80 00        SUBA   #$00
9ee6: 03 02        COM    <$02
9ee8: 00 20        NEG    <$20
9eea: 00 a0        NEG    <$A0
9eec: 00 03        NEG    <$03
9eee: 01 01        NEG    <$01
9ef0: 20 00        BRA    $9EF2
9ef2: b0 00 03     SUBA   >$0003
9ef5: 01 02        NEG    <$02
9ef7: 20 00        BRA    $9EF9
9ef9: 50           NEGB
9efa: 00 03        NEG    <$03
9efc: 01 03        NEG    <$03
9efe: 20 00        BRA    $9F00
9f00: 7e 9f00     JMP    $9f00
