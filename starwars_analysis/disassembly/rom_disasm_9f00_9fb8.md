9f00: 60 00     NEG    $0,X
9f02: 03 01     COM    <$01
9f04: 04 30     LSR    <$30
9f06: 00 80     NEG    <$80
9f08: 00 01     NEG    <$01
9f0a: 02 05     XNC    <$05
9f0c: 30 00     LEAX   $0,X
9f0e: a0 00     SUBA   $0,X
9f10: 01 01     NEG    <$01
9f12: 06 30     ROR    <$30
9f14: 00 b0     NEG    <$B0
9f16: 00 01     NEG    <$01
9f18: 01 07     NEG    <$07
9f1a: 30 00     LEAX   $0,X
9f1c: d0 00     SUBB   <$00
9f1e: 03 01     COM    <$01
9f20: 08 30     ASL    <$30
9f22: 00 e0     NEG    <$E0
9f24: 00 03     NEG    <$03
9f26: 00 09     NEG    <$09
9f28: 30 00     LEAX   $0,X
9f2a: 00 00     NEG    <$00
9f2c: 03 00     COM    <$00
9f2e: 0a 30     DEC    <$30
9f30: 00 20     NEG    <$20
9f32: 00 03     NEG    <$03
9f34: 00 0b     NEG    <$0B
9f36: 30 00     LEAX   $0,X
9f38: 30 00     LEAX   $0,X
9f3a: 03 01     COM    <$01
9f3c: 0c 30     INC    <$30
9f3e: 00 50     NEG    <$50
9f40: 00 01     NEG    <$01
9f42: 01 0d     NEG    <$0D
9f44: 30 00     LEAX   $0,X
9f46: 60 00     NEG    $0,X
9f48: 01 01     NEG    <$01
9f4a: 0e 40     JMP    <$40
9f4c: 00 d0     NEG    <$D0
9f4e: 00 01     NEG    <$01
9f50: 02 0f     XNC    <$0F
9f52: 40        NEGA
9f53: 00 e0     NEG    <$E0
9f55: 00 01     NEG    <$01
9f57: 00 10     NEG    <$10
9f59: 40        NEGA
9f5a: 00 00     NEG    <$00
9f5c: 00 01     NEG    <$01
9f5e: 00 11     NEG    <$11
9f60: 40        NEGA
9f61: 00 20     NEG    <$20
9f63: 00 01     NEG    <$01
9f65: 00 12     NEG    <$12
9f67: 40        NEGA
9f68: 00 30     NEG    <$30
9f6a: 00 01     NEG    <$01
9f6c: 02 13     XNC    <$13
9f6e: 48        ASLA
9f6f: 00 58     NEG    <$58
9f71: 00 03     NEG    <$03
9f73: 02 14     XNC    <$14
9f75: 54        LSRB
9f76: 00 70     NEG    <$70
9f78: 00 03     NEG    <$03
9f7a: 02 15     XNC    <$15
9f7c: 60 00     NEG    $0,X
9f7e: 90 00     SUBA   <$00
9f80: 01 03     NEG    <$03
9f82: 16 60 00  LBRA   $FF85
9f85: 70 00 01  NEG    >$0001
9f88: 03 17     COM    <$17
9f8a: 68 00     ASL    $0,X
9f8c: f0 00 01  SUBB   >$0001
9f8f: 00 18     NEG    <$18
9f91: 68 00     ASL    $0,X
9f93: 10 00 01  NEG    <$01
9f96: 00 19     NEG    <$19
9f98: 70 00 c0  NEG    >$00C0
9f9b: 00 01     NEG    <$01
9f9d: 01 1a     NEG    <$1A
9f9f: 70 00 40  NEG    >$0040
9fa2: 00 01     NEG    <$01
9fa4: 01 1b     NEG    <$1B
9fa6: 80 00     SUBA   #$00
9fa8: a0 00     SUBA   $0,X
9faa: 01 03     NEG    <$03
9fac: 1c 80     ANDCC  #$80
9fae: 00 e0     NEG    <$E0
9fb0: 00 01     NEG    <$01
9fb2: 03 1d     COM    <$1D
9fb4: 80 00     SUBA   #$00
9fb6: 20 00     BRA    $9FB8
9fb8: 7e 9fb8     JMP    $9fb8
