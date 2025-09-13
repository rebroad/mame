cc18: bd cc 5b  JSR    $CC5B
cc1b: 86 01     LDA    #$01
cc1d: bd c2 c3  JSR    $C2C3
cc20: 26 16     BNE    $CC38
cc22: ce 4a b6  LDU    #$4AB6
cc25: 8e 45 20  LDX    #$4520
cc28: 86 08     LDA    #$08
cc2a: bd c6 d9  JSR    $C6D9
cc2d: ce 4a 8e  LDU    #$4A8E
cc30: 8e 45 08  LDX    #$4508
cc33: 86 0b     LDA    #$0B
cc35: bd c6 d9  JSR    $C6D9
cc38: 8e 4a b6  LDX    #$4AB6
cc3b: a6 80     LDA    ,X+
cc3d: 81 1b     CMPA   #$1B
cc3f: 24 1a     BCC    $CC5B
cc41: 8c 4a d4  CMPX   #$4AD4
cc44: 25 f5     BCS    $CC3B
cc46: 8e 4a 8e  LDX    #$4A8E
cc49: a6 80     LDA    ,X+
cc4b: 81 a0     CMPA   #$A0
cc4d: 24 0c     BCC    $CC5B
cc4f: 84 0f     ANDA   #$0F
cc51: 81 0a     CMPA   #$0A
cc53: 24 06     BCC    $CC5B
cc55: 8c 4a b6  CMPX   #$4AB6
cc58: 25 ef     BCS    $CC49
cc5a: 39        RTS
cc5b: 8e 4a b6  LDX    #$4AB6
cc5e: ce cc 7a  LDU    #$CC7A
cc61: ec c1     LDD    ,U++
cc63: ed 81     STD    ,X++
cc65: 8c 4a d4  CMPX   #$4AD4
cc68: 25 f7     BCS    $CC61
cc6a: 8e 4a 8e  LDX    #$4A8E
cc6d: ce cc 98  LDU    #$CC98
cc70: ec c1     LDD    ,U++
cc72: ed 81     STD    ,X++
cc74: 8c 4a b6  CMPX   #$4AB6
cc77: 25 f7     BCS    $CC70
cc79: 39        RTS
