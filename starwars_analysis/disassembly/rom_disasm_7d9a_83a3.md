7d9a: 0a 01     DEC    <$01
7d9c: 00 00     NEG    <$00
7d9e: 01 a0     NEG    <$A0
7da0: a0 01     SUBA   $1,X
7da2: 00 00     NEG    <$00
7da4: 01 0a     NEG    <$0A
7da6: 0a 01     DEC    <$01
7da8: 00 00     NEG    <$00
7daa: 01 a0     NEG    <$A0
7dac: a0 01     SUBA   $1,X
7dae: 00 00     NEG    <$00
7db0: 05 02     LSR    <$02
7db2: 80 80     SUBA   #$80
7db4: 02 8c     XNC    <$8C
7db6: 83 02 b0  SUBD   #$02B0
7db9: 80 02     SUBA   #$02
7dbb: 80 b0     SUBA   #$B0
7dbd: 02 02     XNC    <$02
7dbf: 02 02     XNC    <$02
7dc1: 32 0e     LEAS   $E,X
7dc3: 02 0e     XNC    <$0E
7dc5: c2 02     SBCB   #$02
7dc7: 02 02     XNC    <$02
7dc9: 05 02     LSR    <$02
7dcb: 02 02     XNC    <$02
7dcd: 02 32     XNC    <$32
7dcf: 32 02     LEAS   $2,X
7dd1: 02 02     XNC    <$02
7dd3: 02 c8     XNC    <$C8
7dd5: c8 02     EORB   #$02
7dd7: 08 08     ASL    <$08
7dd9: 02 08     XNC    <$08
7ddb: 08 02     ASL    <$02
7ddd: e0 e0     SUBB   ,S+
7ddf: 02 20     XNC    <$20
7de1: 20 05     BRA    $7DE8
7de3: 01 22     NEG    <$22
7de5: 88 01     EORA   #$01
7de7: 00 00     NEG    <$00
7de9: 01 88     NEG    <$88
7deb: 22 01     BHI    $7DEE
7ded: 33 cc 01  LEAU   $7DF1,PCR
7df0: a0 0a     SUBA   $A,X
7df2: 01 00     NEG    <$00
7df4: 00 01     NEG    <$01
7df6: 0a a0     DEC    <$A0
7df8: 01 c0     NEG    <$C0
7dfa: 03 02     COM    <$02
7dfc: 28 82     BVC    $7D80
7dfe: 02 00     XNC    <$00
7e00: 00 02     NEG    <$02
7e02: 88 28     EORA   #$28
7e04: 02 00     XNC    <$00
7e06: 00 05     NEG    <$05
7e08: 02 41     XNC    <$41
7e0a: 41        NEGA
7e0b: 02 41     XNC    <$41
7e0d: 41        NEGA
7e0e: 02 14     XNC    <$14
7e10: 14        XHCF
7e11: 02 14     XNC    <$14
7e13: 14        XHCF
7e14: 02 41     XNC    <$41
7e16: 41        NEGA
7e17: 02 41     XNC    <$41
7e19: 41        NEGA
7e1a: 01 3c     NEG    <$3C
7e1c: 3c 01     CWAI   #$01
7e1e: c3 c3 05  ADDD   #$C305
7e21: 02 80     XNC    <$80
7e23: 80 02     SUBA   #$02
7e25: 00 00     NEG    <$00
7e27: 02 08     XNC    <$08
7e29: 08 01     ASL    <$01
7e2b: 00 00     NEG    <$00
7e2d: 02 e0     XNC    <$E0
7e2f: e0 02     SUBB   $2,X
7e31: 03 03     COM    <$03
7e33: 02 0e     XNC    <$0E
7e35: 0e 02     JMP    <$02
7e37: b0 b0 01  SUBA   $B001
7e3a: 00 00     NEG    <$00
7e3c: 05 02     LSR    <$02
7e3e: 00 00     NEG    <$00
7e40: 02 0a     XNC    <$0A
7e42: 0a 02     DEC    <$02
7e44: 30 30     LEAX   -$10,Y
7e46: 02 00     XNC    <$00
7e48: 00 02     NEG    <$02
7e4a: 2b 2b     BMI    $7E77
7e4c: 02 00     XNC    <$00
7e4e: 00 02     NEG    <$02
7e50: c0 c0     SUBB   #$C0
7e52: 02 ac     XNC    <$AC
7e54: ac 05     CMPX   $5,X
7e56: 02 03     XNC    <$03
7e58: 03 02     COM    <$02
7e5a: 02 00     XNC    <$00
7e5c: 01 c0     NEG    <$C0
7e5e: 02 02     XNC    <$02
7e60: 02 30     XNC    <$30
7e62: 01 30     NEG    <$30
7e64: 02 02     XNC    <$02
7e66: 02 0c     XNC    <$0C
7e68: 01 0c     NEG    <$0C
7e6a: 02 02     XNC    <$02
7e6c: 02 c0     XNC    <$C0
7e6e: 01 00     NEG    <$00
7e70: 02 02     XNC    <$02
7e72: 00 00     NEG    <$00
7e74: 05 01     LSR    <$01
7e76: 02 02     XNC    <$02
7e78: 01 00     NEG    <$00
7e7a: 00 01     NEG    <$01
7e7c: 02 02     XNC    <$02
7e7e: 01 00     NEG    <$00
7e80: 00 01     NEG    <$01
7e82: 00 00     NEG    <$00
7e84: 02 f2     XNC    <$F2
7e86: f2 01 0c  SBCB   $010C
7e89: 0c 01     INC    <$01
7e8b: 02 02     XNC    <$02
7e8d: 01 00     NEG    <$00
7e8f: 00 01     NEG    <$01
7e91: a8 a8 02  EORA   $02,Y
7e94: 00 00     NEG    <$00
7e96: 02 03     XNC    <$03
7e98: 03 01     COM    <$01
7e9a: 00 00     NEG    <$00
7e9c: 05 02     LSR    <$02
7e9e: 2a aa     BPL    $7E4A
7ea0: 01 00     NEG    <$00
7ea2: 00 02     NEG    <$02
7ea4: aa a8 02  ORA    $02,Y
7ea7: 00 03     NEG    <$03
7ea9: 02 00     XNC    <$00
7eab: 0c 02     INC    <$02
7ead: 00 03     NEG    <$03
7eaf: 02 aa     XNC    <$AA
7eb1: a8 01     EORA   $1,X
7eb3: 00 00     NEG    <$00
7eb5: 02 2a     XNC    <$2A
7eb7: aa 05     ORA    $5,X
7eb9: 02 0c     XNC    <$0C
7ebb: 0c 02     INC    <$02
7ebd: 03 03     COM    <$03
7ebf: 02 a0     XNC    <$A0
7ec1: a0 01     SUBA   $1,X
7ec3: 03 03     COM    <$03
7ec5: 01 0a     NEG    <$0A
7ec7: 0a 01     DEC    <$01
7ec9: 28 28     BVC    $7EF3
7ecb: 01 0a     NEG    <$0A
7ecd: 0a 02     DEC    <$02
7ecf: a0 a0     SUBA   ,Y+
7ed1: 02 00     XNC    <$00
7ed3: 00 02     NEG    <$02
7ed5: a3 a3     SUBD   ,--Y
7ed7: 05 02     LSR    <$02
7ed9: a8 a8 02  EORA   $02,Y
7edc: 00 00     NEG    <$00
7ede: 02 2a     XNC    <$2A
7ee0: 2a 02     BPL    $7EE4
7ee2: 00 00     NEG    <$00
7ee4: 02 a8     XNC    <$A8
7ee6: a8 02     EORA   $2,X
7ee8: 00 00     NEG    <$00
7eea: 02 2a     XNC    <$2A
7eec: 2a 02     BPL    $7EF0
7eee: 00 00     NEG    <$00
7ef0: 05 02     LSR    <$02
7ef2: 88 88     EORA   #$88
7ef4: 01 22     NEG    <$22
7ef6: 22 01     BHI    $7EF9
7ef8: 00 00     NEG    <$00
7efa: 02 cc     XNC    <$CC
7efc: cc 02 82  LDD    #$0282
7eff: 82 01     SBCA   #$01
7f01: 28 28     BVC    $7F2B
7f03: 01 00     NEG    <$00
7f05: 00 01     NEG    <$01
7f07: aa 00     ORA    $0,X
7f09: 01 00     NEG    <$00
7f0b: aa 01     ORA    $1,X
7f0d: 00 00     NEG    <$00
7f0f: 02 a8     XNC    <$A8
7f11: a8 01     EORA   $1,X
7f13: 2a 2a     BPL    $7F3F
7f15: 05 01     LSR    <$01
7f17: 0a a0     DEC    <$A0
7f19: 01 c0     NEG    <$C0
7f1b: 0c 01     INC    <$01
7f1d: a0 0a     SUBA   $A,X
7f1f: 01 00     NEG    <$00
7f21: 00 01     NEG    <$01
7f23: 28 00     BVC    $7F25
7f25: 01 03     NEG    <$03
7f27: c0 01     SUBB   #$01
7f29: 28 28     BVC    $7F53
7f2b: 01 00     NEG    <$00
7f2d: 00 01     NEG    <$01
7f2f: 80 80     SUBA   #$80
7f31: 01 30     NEG    <$30
7f33: 03 01     COM    <$01
7f35: 02 02     XNC    <$02
7f37: 01 0c     NEG    <$0C
7f39: 00 01     NEG    <$01
7f3b: 28 00     BVC    $7F3D
7f3d: 01 00     NEG    <$00
7f3f: 30 01     LEAX   $1,X
7f41: 82 28     SBCA   #$28
7f43: 01 00     NEG    <$00
7f45: 00 05     NEG    <$05
7f47: 01 80     NEG    <$80
7f49: 80 01     SUBA   #$01
7f4b: 20 20     BRA    $7F6D
7f4d: 01 08     NEG    <$08
7f4f: 08 01     ASL    <$01
7f51: 30 0c     LEAX   $C,X
7f53: 01 2a     NEG    <$2A
7f55: 2a 01     BPL    $7F58
7f57: c0 c0     SUBB   #$C0
7f59: 01 20     NEG    <$20
7f5b: 20 01     BRA    $7F5E
7f5d: 00 00     NEG    <$00
7f5f: 01 20     NEG    <$20
7f61: 20 01     BRA    $7F64
7f63: c0 c0     SUBB   #$C0
7f65: 01 20     NEG    <$20
7f67: 20 01     BRA    $7F6A
7f69: c0 c0     SUBB   #$C0
7f6b: 01 a8     NEG    <$A8
7f6d: a8 01     EORA   $1,X
7f6f: 08 08     ASL    <$08
7f71: 01 03     NEG    <$03
7f73: 03 01     COM    <$01
7f75: 08 08     ASL    <$08
7f77: 05 02     LSR    <$02
7f79: 00 00     NEG    <$00
7f7b: 02 02     XNC    <$02
7f7d: 02 02     XNC    <$02
7f7f: 00 00     NEG    <$00
7f81: 01 82     NEG    <$82
7f83: 82 01     SBCA   #$01
7f85: 3c 3c     CWAI   #$3C
7f87: 01 3c     NEG    <$3C
7f89: 3c 01     CWAI   #$01
7f8b: 82 82     SBCA   #$82
7f8d: 02 00     XNC    <$00
7f8f: 00 02     NEG    <$02
7f91: 02 02     XNC    <$02
7f93: 02 00     XNC    <$00
7f95: 00 05     NEG    <$05
7f97: 01 00     NEG    <$00
7f99: 00 01     NEG    <$01
7f9b: 02 02     XNC    <$02
7f9d: 02 8c     XNC    <$8C
7f9f: 8c 01 02  CMPX   #$0102
7fa2: 02 02     XNC    <$02
7fa4: b0 b0 01  SUBA   $B001
7fa7: 02 02     XNC    <$02
7fa9: 02 8c     XNC    <$8C
7fab: 8c 01 02  CMPX   #$0102
7fae: 02 02     XNC    <$02
7fb0: b0 b0 01  SUBA   $B001
7fb3: 02 02     XNC    <$02
7fb5: 02 80     XNC    <$80
7fb7: 80 05     SUBA   #$05
7fb9: 02 0a     XNC    <$0A
7fbb: 0a 02     DEC    <$02
7fbd: b0 b0 02  SUBA   $B002
7fc0: 2c 2c     BGE    $7FEE
7fc2: 02 0b     XNC    <$0B
7fc4: 0b 02     XDEC   <$02
7fc6: 00 00     NEG    <$00
7fc8: 02 0e     XNC    <$0E
7fca: 0e 02     JMP    <$02
7fcc: 38 38     XANDCC #$38
7fce: 02 e0     XNC    <$E0
7fd0: e0 05     SUBB   $5,X
7fd2: 01 00     NEG    <$00
7fd4: aa 01     ORA    $1,X
7fd6: 00 00     NEG    <$00
7fd8: 01 aa     NEG    <$AA
7fda: 00 01     NEG    <$01
7fdc: 00 00     NEG    <$00
7fde: 01 00     NEG    <$00
7fe0: aa 01     ORA    $1,X
7fe2: 00 00     NEG    <$00
7fe4: 01 aa     NEG    <$AA
7fe6: 00 01     NEG    <$01
7fe8: 00 00     NEG    <$00
7fea: 01 00     NEG    <$00
7fec: aa 01     ORA    $1,X
7fee: 00 00     NEG    <$00
7ff0: 01 aa     NEG    <$AA
7ff2: 00 01     NEG    <$01
7ff4: 00 00     NEG    <$00
7ff6: 01 00     NEG    <$00
7ff8: aa 01     ORA    $1,X
7ffa: 00 00     NEG    <$00
7ffc: 01 aa     NEG    <$AA
7ffe: 00 01     NEG    <$01
8000: 00 00     NEG    <$00
8002: 05 01     LSR    <$01
8004: b0 b0 01  SUBA   $B001
8007: 2c 2c     BGE    $8035
8009: 01 08     NEG    <$08
800b: 08 02     ASL    <$02
800d: 00 00     NEG    <$00
800f: 02 0a     XNC    <$0A
8011: 0a 02     DEC    <$02
8013: a0 a0     SUBA   ,Y+
8015: 02 0a     XNC    <$0A
8017: 0a 02     DEC    <$02
8019: 00 00     NEG    <$00
801b: 01 b0     NEG    <$B0
801d: b0 01 2c  SUBA   $012C
8020: 2c 01     BGE    $8023
8022: 08 08     ASL    <$08
8024: 05 01     LSR    <$01
8026: aa 00     ORA    $0,X
8028: 01 00     NEG    <$00
802a: 00 01     NEG    <$01
802c: 00 aa     NEG    <$AA
802e: 01 00     NEG    <$00
8030: 00 02     NEG    <$02
8032: aa 00     ORA    $0,X
8034: 01 0a     NEG    <$0A
8036: 0a 02     DEC    <$02
8038: 00 00     NEG    <$00
803a: 01 a0     NEG    <$A0
803c: a0 02     SUBA   $2,X
803e: 0a 0a     DEC    <$0A
8040: 01 00     NEG    <$00
8042: aa 01     ORA    $1,X
8044: 00 00     NEG    <$00
8046: 01 aa     NEG    <$AA
8048: 00 01     NEG    <$01
804a: 00 00     NEG    <$00
804c: 05 02     LSR    <$02
804e: 00 00     NEG    <$00
8050: 02 32     XNC    <$32
8052: 0e 02     JMP    <$02
8054: 02 02     XNC    <$02
8056: 02 08     XNC    <$08
8058: 08 02     ASL    <$02
805a: c8 c8     EORB   #$C8
805c: 02 20     XNC    <$20
805e: 20 02     BRA    $8062
8060: 20 20     BRA    $8082
8062: 02 00     XNC    <$00
8064: 00 05     NEG    <$05
8066: 02 00     XNC    <$00
8068: 00 02     NEG    <$02
806a: 8c 8c 02  CMPX   #$8C02
806d: 80 80     SUBA   #$80
806f: 02 23     XNC    <$23
8071: 23 02     BLS    $8075
8073: 20 20     BRA    $8095
8075: 02 08     XNC    <$08
8077: 08 02     ASL    <$02
8079: 0b 0b     XDEC   <$0B
807b: 02 00     XNC    <$00
807d: 00 05     NEG    <$05
807f: 01 00     NEG    <$00
8081: 00 02     NEG    <$02
8083: 2a 2a     BPL    $80AF
8085: 01 20     NEG    <$20
8087: 20 02     BRA    $808B
8089: c0 c0     SUBB   #$C0
808b: 02 30     XNC    <$30
808d: 30 02     LEAX   $2,X
808f: cc cc 02  LDD    #$CC02
8092: 33 33     LEAU   -$D,Y
8094: 01 0c     NEG    <$0C
8096: 0c 04     INC    <$04
8098: 03 03     COM    <$03
809a: 03 01     COM    <$01
809c: a8 aa     EORA   F,Y
809e: 01 00     NEG    <$00
80a0: 00 01     NEG    <$01
80a2: 03 aa     COM    <$AA
80a4: 02 aa     XNC    <$AA
80a6: 03 01     COM    <$01
80a8: 00 aa     NEG    <$AA
80aa: 01 00     NEG    <$00
80ac: 00 01     NEG    <$01
80ae: 00 00     NEG    <$00
80b0: 01 a2     NEG    <$A2
80b2: aa 01     ORA    $1,X
80b4: 00 00     NEG    <$00
80b6: 01 00     NEG    <$00
80b8: 00 01     NEG    <$01
80ba: 00 aa     NEG    <$AA
80bc: 02 aa     XNC    <$AA
80be: 00 01     NEG    <$01
80c0: 00 aa     NEG    <$AA
80c2: 01 00     NEG    <$00
80c4: 00 05     NEG    <$05
80c6: 01 00     NEG    <$00
80c8: 00 01     NEG    <$01
80ca: c0 30     SUBB   #$30
80cc: 02 0a     XNC    <$0A
80ce: 0a 01     DEC    <$01
80d0: 30 c0     LEAX   ,U+
80d2: 01 00     NEG    <$00
80d4: 00 01     NEG    <$01
80d6: c0 30     SUBB   #$30
80d8: 02 0a     XNC    <$0A
80da: 0a 01     DEC    <$01
80dc: 30 c0     LEAX   ,U+
80de: 01 00     NEG    <$00
80e0: 00 01     NEG    <$01
80e2: c0 30     SUBB   #$30
80e4: 02 0a     XNC    <$0A
80e6: 0a 01     DEC    <$01
80e8: 00 00     NEG    <$00
80ea: 01 00     NEG    <$00
80ec: 00 05     NEG    <$05
80ee: 01 02     NEG    <$02
80f0: 02 02     XNC    <$02
80f2: 30 80     LEAX   ,X+
80f4: 02 0c     XNC    <$0C
80f6: 20 02     BRA    $80FA
80f8: c2 0a     SBCB   #$0A
80fa: 01 02     NEG    <$02
80fc: 02 02     XNC    <$02
80fe: 0a c2     DEC    <$C2
8100: 02 20     XNC    <$20
8102: 0c 02     INC    <$02
8104: 80 30     SUBA   #$30
8106: 02 02     XNC    <$02
8108: 02 05     XNC    <$05
810a: 01 02     NEG    <$02
810c: 02 01     XNC    <$01
810e: c0 c0     SUBB   #$C0
8110: 01 20     NEG    <$20
8112: 20 01     BRA    $8115
8114: 0e 0e     JMP    <$0E
8116: 01 08     NEG    <$08
8118: 08 02     ASL    <$02
811a: 00 00     NEG    <$00
811c: 01 02     NEG    <$02
811e: 02 01     XNC    <$01
8120: 2c 2c     BGE    $814E
8122: 01 80     NEG    <$80
8124: 80 01     SUBA   #$01
8126: 02 02     XNC    <$02
8128: 02 00     XNC    <$00
812a: 00 01     NEG    <$01
812c: 8c 8c 01  CMPX   #$8C01
812f: 20 20     BRA    $8151
8131: 01 03     NEG    <$03
8133: 03 05     COM    <$05
8135: 01 03     NEG    <$03
8137: 03 02     COM    <$02
8139: 02 02     XNC    <$02
813b: 01 08     NEG    <$08
813d: 08 02     ASL    <$02
813f: b0 b0 02  SUBA   $B002
8142: 08 08     ASL    <$08
8144: 01 32     NEG    <$32
8146: 32 02     LEAS   $2,X
8148: c8 c8     EORB   #$C8
814a: 02 80     XNC    <$80
814c: 80 01     SUBA   #$01
814e: 20 20     BRA    $8170
8150: 02 0b     XNC    <$0B
8152: 0b 05     XDEC   <$05
8154: 01 0e     NEG    <$0E
8156: 0e 02     JMP    <$02
8158: 0a 00     DEC    <$00
815a: 01 a0     NEG    <$A0
815c: a0 02     SUBA   $2,X
815e: 00 0a     NEG    <$0A
8160: 01 fa     NEG    <$FA
8162: fa 02 0a  ORB    $020A
8165: 00 01     NEG    <$01
8167: a0 a0     SUBA   ,Y+
8169: 02 00     XNC    <$00
816b: 0a 01     DEC    <$01
816d: fa fa 02  ORB    $FA02
8170: 0a 00     DEC    <$00
8172: 01 02     NEG    <$02
8174: 02 05     XNC    <$05
8176: 01 aa     NEG    <$AA
8178: 2a 01     BPL    $817B
817a: 00 00     NEG    <$00
817c: 01 aa     NEG    <$AA
817e: 03 02     COM    <$02
8180: 03 aa     COM    <$AA
8182: 01 aa     NEG    <$AA
8184: 00 01     NEG    <$01
8186: 00 00     NEG    <$00
8188: 01 00     NEG    <$00
818a: 00 01     NEG    <$01
818c: aa 8a     ORA    F,X
818e: 01 00     NEG    <$00
8190: 00 01     NEG    <$01
8192: 00 00     NEG    <$00
8194: 01 aa     NEG    <$AA
8196: 00 02     NEG    <$02
8198: 00 aa     NEG    <$AA
819a: 01 aa     NEG    <$AA
819c: 00 01     NEG    <$01
819e: 00 00     NEG    <$00
81a0: 05 02     LSR    <$02
81a2: 2a 2a     BPL    $81CE
81a4: 01 00     NEG    <$00
81a6: 00 02     NEG    <$02
81a8: a8 a8 01  EORA   $01,Y
81ab: 00 00     NEG    <$00
81ad: 02 2a     XNC    <$2A
81af: 2a 01     BPL    $81B2
81b1: 00 00     NEG    <$00
81b3: 02 a8     XNC    <$A8
81b5: a8 01     EORA   $1,X
81b7: 00 00     NEG    <$00
81b9: 02 8a     XNC    <$8A
81bb: aa 01     ORA    $1,X
81bd: 00 00     NEG    <$00
81bf: 01 aa     NEG    <$AA
81c1: a2 05     SBCA   $5,X
81c3: 01 00     NEG    <$00
81c5: 00 02     NEG    <$02
81c7: 30 0c     LEAX   $C,X
81c9: 01 00     NEG    <$00
81cb: 00 02     NEG    <$02
81cd: 00 00     NEG    <$00
81cf: 02 0c     XNC    <$0C
81d1: 30 01     LEAX   $1,X
81d3: 00 00     NEG    <$00
81d5: 02 30     XNC    <$30
81d7: 0c 01     INC    <$01
81d9: 00 00     NEG    <$00
81db: 02 00     XNC    <$00
81dd: 00 02     NEG    <$02
81df: 0c 30     INC    <$30
81e1: 05 02     LSR    <$02
81e3: 00 00     NEG    <$00
81e5: 01 00     NEG    <$00
81e7: 00 01     NEG    <$01
81e9: 00 00     NEG    <$00
81eb: 01 00     NEG    <$00
81ed: 00 02     NEG    <$02
81ef: 00 00     NEG    <$00
81f1: 02 3c     XNC    <$3C
81f3: 3c 02     CWAI   #$02
81f5: 00 00     NEG    <$00
81f7: 02 c3     XNC    <$C3
81f9: c3 01 00  ADDD   #$0100
81fc: 00 02     NEG    <$02
81fe: 00 00     NEG    <$00
8200: 05 01     LSR    <$01
8202: 00 00     NEG    <$00
8204: 01 c0     NEG    <$C0
8206: c0 02     SUBB   #$02
8208: 30 30     LEAX   -$10,Y
820a: 01 0c     NEG    <$0C
820c: 0c 01     INC    <$01
820e: 03 03     COM    <$03
8210: 02 00     XNC    <$00
8212: 00 01     NEG    <$01
8214: c0 c0     SUBB   #$C0
8216: 02 30     XNC    <$30
8218: 30 01     LEAX   $1,X
821a: 0c 0c     INC    <$0C
821c: 01 03     NEG    <$03
821e: 03 02     COM    <$02
8220: 00 00     NEG    <$00
8222: 01 00     NEG    <$00
8224: 00 05     NEG    <$05
8226: 02 00     XNC    <$00
8228: 00 02     NEG    <$02
822a: 02 02     XNC    <$02
822c: 02 38     XNC    <$38
822e: 38 01     XANDCC #$01
8230: a3 a3     SUBD   ,--Y
8232: 01 02     NEG    <$02
8234: 02 02     XNC    <$02
8236: 8c 8c 02  CMPX   #$8C02
8239: 02 02     XNC    <$02
823b: 02 38     XNC    <$38
823d: 38 02     XANDCC #$02
823f: 00 00     NEG    <$00
8241: 05 01     LSR    <$01
8243: 02 02     XNC    <$02
8245: 01 00     NEG    <$00
8247: 00 02     NEG    <$02
8249: 32 0c     LEAS   $C,X
824b: 01 c0     NEG    <$C0
824d: 32 02     LEAS   $2,X
824f: 00 00     NEG    <$00
8251: 01 83     NEG    <$83
8253: e3 01     ADDD   $1,X
8255: 30 00     LEAX   $0,X
8257: 02 03     XNC    <$03
8259: 00 01     NEG    <$01
825b: 00 b2     NEG    <$B2
825d: 01 ac     NEG    <$AC
825f: 0c 02     INC    <$02
8261: 00 00     NEG    <$00
8263: 01 00     NEG    <$00
8265: 00 05     NEG    <$05
8267: 02 00     XNC    <$00
8269: 00 02     NEG    <$02
826b: 00 00     NEG    <$00
826d: 01 c3     NEG    <$C3
826f: c3 02 00  ADDD   #$0200
8272: 00 01     NEG    <$01
8274: c3 c3 02  ADDD   #$C302
8277: 00 00     NEG    <$00
8279: 01 c3     NEG    <$C3
827b: c3 02 00  ADDD   #$0200
827e: 00 01     NEG    <$01
8280: c3 c3 02  ADDD   #$C302
8283: 00 00     NEG    <$00
8285: 05 01     LSR    <$01
8287: 00 00     NEG    <$00
8289: 02 00     XNC    <$00
828b: 00 01     NEG    <$01
828d: c3 00 02  ADDD   #$0002
8290: 00 00     NEG    <$00
8292: 02 3c     XNC    <$3C
8294: 00 01     NEG    <$01
8296: 00 c3     NEG    <$C3
8298: 02 00     XNC    <$00
829a: 00 01     NEG    <$01
829c: 00 3c     NEG    <$3C
829e: 02 00     XNC    <$00
82a0: 00 02     NEG    <$02
82a2: 00 00     NEG    <$00
82a4: 05 02     LSR    <$02
82a6: aa 8a     ORA    F,X
82a8: 02 00     XNC    <$00
82aa: 00 02     NEG    <$02
82ac: ba aa 02  ORA    $AA02
82af: 00 00     NEG    <$00
82b1: 02 aa     XNC    <$AA
82b3: ab 02     ADDA   $2,X
82b5: 00 00     NEG    <$00
82b7: 02 ae     XNC    <$AE
82b9: aa 02     ORA    $2,X
82bb: 00 00     NEG    <$00
82bd: 05 01     LSR    <$01
82bf: 14        XHCF
82c0: 14        XHCF
82c1: 01 bf     NEG    <$BF
82c3: bf 01 14  STX    $0114
82c6: 14        XHCF
82c7: 05 01     LSR    <$01
82c9: 00 00     NEG    <$00
82cb: 01 95     NEG    <$95
82cd: 95 01     BITA   <$01
82cf: 00 00     NEG    <$00
82d1: 05 01     LSR    <$01
82d3: 00 00     NEG    <$00
82d5: 01 56     NEG    <$56
82d7: 56        RORB
82d8: 01 00     NEG    <$00
82da: 00 05     NEG    <$05
82dc: 01 00     NEG    <$00
82de: 00 01     NEG    <$01
82e0: 55        LSRB
82e1: 55        LSRB
82e2: 01 00     NEG    <$00
82e4: 00 05     NEG    <$05
82e6: 01 14     NEG    <$14
82e8: 14        XHCF
82e9: 01 fe     NEG    <$FE
82eb: fe 01 14  LDU    $0114
82ee: 14        XHCF
82ef: 05 01     LSR    <$01
82f1: 14        XHCF
82f2: 14        XHCF
82f3: 01 ff     NEG    <$FF
82f5: ff 01 14  STU    $0114
82f8: 14        XHCF
82f9: 05 01     LSR    <$01
82fb: 55        LSRB
82fc: 55        LSRB
82fd: 01 15     NEG    <$15
82ff: 15        XHCF
8300: 01 05     NEG    <$05
8302: 05 01     LSR    <$01
8304: 00 00     NEG    <$00
8306: 01 05     NEG    <$05
8308: 05 01     LSR    <$01
830a: 00 00     NEG    <$00
830c: 01 05     NEG    <$05
830e: 05 01     LSR    <$01
8310: 00 00     NEG    <$00
8312: 01 05     NEG    <$05
8314: 05 01     LSR    <$01
8316: 00 00     NEG    <$00
8318: 01 01     NEG    <$01
831a: 01 01     NEG    <$01
831c: 00 00     NEG    <$00
831e: 01 01     NEG    <$01
8320: 01 04     NEG    <$04
8322: 00 00     NEG    <$00
8324: 03 01     COM    <$01
8326: 00 00     NEG    <$00
8328: 02 2a     XNC    <$2A
832a: 2a 01     BPL    $832D
832c: 00 00     NEG    <$00
832e: 02 40     XNC    <$40
8330: 40        NEGA
8331: 02 10     XNC    <$10
8333: 10 02 04  XNC    <$04
8336: 04 02     LSR    <$02
8338: 01 01     NEG    <$01
833a: 01 ff     NEG    <$FF
833c: ff 04 ff  STU    $04FF
833f: ff 03 86  STU    $0386
8342: 00 97     NEG    <$97
8344: 44        LSRA
8345: 97 45     STA    <$45
8347: 8e 49 89  LDX    #$4989
834a: 86 00     LDA    #$00
834c: a7 80     STA    ,X+
834e: 8c 49 a9  CMPX   #$49A9
8351: 25 f9     BCS    $834C
8353: f6 4b 12  LDB    $4B12
8356: 58        ASLB
8357: 8e 7c c0  LDX    #$7CC0
835a: 3a        ABX
835b: 8c 7c d6  CMPX   #$7CD6
835e: 25 05     BCS    $8365
8360: ce 4b 3f  LDU    #$4B3F
8363: 20 02     BRA    $8367
8365: ee 84     LDU    ,X
8367: ff 49 a9  STU    $49A9
836a: ff 49 ab  STU    $49AB
836d: ee c4     LDU    ,U
836f: cc 00 00  LDD    #$0000
8372: b7 49 c0  STA    $49C0
8375: fd 49 b1  STD    $49B1
8378: fd 49 b5  STD    $49B5
837b: 97 92     STA    <$92
837d: 97 95     STA    <$95
837f: ff 49 af  STU    $49AF
8382: ff 49 b3  STU    $49B3
8385: bd 84 34  JSR    $8434
8388: bd 84 08  JSR    $8408
838b: bd 83 ce  JSR    $83CE
838e: bd 83 ce  JSR    $83CE
8391: bd 83 ce  JSR    $83CE
8394: bd 83 ce  JSR    $83CE
8397: bd 83 ce  JSR    $83CE
839a: bd 83 ce  JSR    $83CE
839d: bd 83 ce  JSR    $83CE
83a0: bd 83 ce  JSR    $83CE
83a3: 39        RTS
