c24e: 81 03     CMPA   #$03
c250: 24 61     BCC    $C2B3
c252: 81 02     CMPA   #$02
c254: 25 29     BCS    $C27F
c256: 8e c7 b7  LDX    #$C7B7
c259: e6 86     LDB    A,X
c25b: c0 02     SUBB   #$02
c25d: f7 4a fb  STB    $4AFB
c260: c6 45     LDB    #$45
c262: f7 4a fa  STB    $4AFA
c265: 8e c7 b6  LDX    #$C7B6
c268: e6 86     LDB    A,X
c26a: 8e c7 07  LDX    #$C707
c26d: 3a        ABX
c26e: 1f 13     TFR    X,U
c270: 8e 45 00  LDX    #$4500
c273: 3a        ABX
c274: e6 c0     LDB    ,U+
c276: e7 80     STB    ,X+
c278: bc 4a fa  CMPX   $4AFA
c27b: 25 f7     BCS    $C274
c27d: 20 34     BRA    $C2B3
c27f: 1f 89     TFR    A,B
c281: 4d        TSTA
c282: 26 17     BNE    $C29B
c284: 96 27     LDA    <$27
c286: b7 4a fa  STA    $4AFA
c289: 96 24     LDA    <$24
c28b: b7 4a fb  STA    $4AFB
c28e: 86 00     LDA    #$00
c290: b7 4a fc  STA    $4AFC
c293: 8e 45 00  LDX    #$4500
c296: bd c6 f4  JSR    $C6F4
c299: 20 16     BRA    $C2B1
c29b: 8e 45 08  LDX    #$4508
c29e: ce cc 98  LDU    #$CC98
c2a1: 86 0b     LDA    #$0B
c2a3: bd c6 f9  JSR    $C6F9
c2a6: 8e 45 20  LDX    #$4520
c2a9: ce cc 7a  LDU    #$CC7A
c2ac: 86 08     LDA    #$08
c2ae: bd c6 f9  JSR    $C6F9
c2b1: 1f 98     TFR    B,A
c2b3: bd c2 c3  JSR    $C2C3
c2b6: 27 0a     BEQ    $C2C2
c2b8: e7 01     STB    $1,X
c2ba: 54        LSRB
c2bb: 54        LSRB
c2bc: 54        LSRB
c2bd: 54        LSRB
c2be: e7 84     STB    ,X
c2c0: c6 ff     LDB    #$FF
c2c2: 39        RTS
c2c3: 7e c2c3     JMP    $c2c3
