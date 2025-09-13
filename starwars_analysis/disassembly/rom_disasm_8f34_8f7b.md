8f34: 86 01        LDA    #$01
8f36: a7 03        STA    $3,X
8f38: ee 84        LDU    ,X
8f3a: bd cd c3     JSR    $CDC3
8f3d: ee 84        LDU    ,X
8f3f: 86 c0        LDA    #$C0
8f41: a7 50        STA    -$10,U
8f43: a7 5a        STA    -$6,U
8f45: 4f           CLRA
8f46: a7 09        STA    $9,X
8f48: a7 08        STA    $8,X
8f4a: a7 06        STA    $6,X
8f4c: a7 05        STA    $5,X
8f4e: a7 0b        STA    $B,X
8f50: de e0        LDU    <$E0
8f52: a6 41        LDA    $1,U
8f54: a7 07        STA    $7,X
8f56: ee 84        LDU    ,X
8f58: 9e e2        LDX    <$E2
8f5a: ec 84        LDD    ,X
8f5c: ed 48        STD    $8,U
8f5e: ec 02        LDD    $2,X
8f60: ed 4a        STD    $A,U
8f62: ec 04        LDD    $4,X
8f64: ed 4c        STD    $C,U
8f66: 9e 5a        LDX    <$5A
8f68: dc de        LDD    <$DE
8f6a: ed 0d        STD    $D,X
8f6c: bd 8e 23     JSR    $8E23
8f6f: 9e 5a        LDX    <$5A
8f71: e6 9f 48 e0  LDB    [$48E0]
8f75: e7 04        STB    $4,X
8f77: bd cc cc     JSR    $CCCC
8f7a: 39           RTS
8f7b: 7e 8f7b     JMP    $8f7b
