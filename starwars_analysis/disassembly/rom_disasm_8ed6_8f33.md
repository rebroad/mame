8ed6: bd cc c0  JSR    $CCC0
8ed9: f6 4b 14  LDB    $4B14
8edc: 58        ASLB
8edd: 8e 90 70  LDX    #$9070
8ee0: 3a        ABX
8ee1: 8c 90 7c  CMPX   #$907C
8ee4: 25 0e     BCS    $8EF4
8ee6: b6 4b 14  LDA    $4B14
8ee9: 44        LSRA
8eea: 25 05     BCS    $8EF1
8eec: 8e 90 78  LDX    #$9078
8eef: 20 03     BRA    $8EF4
8ef1: 8e 90 7a  LDX    #$907A
8ef4: ae 84     LDX    ,X
8ef6: d6 dd     LDB    <$DD
8ef8: e1 80     CMPB   ,X+
8efa: 23 02     BLS    $8EFE
8efc: e6 1f     LDB    -$1,X
8efe: 58        ASLB
8eff: ec 85     LDD    B,X
8f01: dd e4     STD    <$E4
8f03: 0f e6     CLR    <$E6
8f05: 8e 49 00  LDX    #$4900
8f08: 9f 5a     STX    <$5A
8f0a: 6f 03     CLR    $3,X
8f0c: de e4     LDU    <$E4
8f0e: 27 19     BEQ    $8F29
8f10: a6 c4     LDA    ,U
8f12: 27 15     BEQ    $8F29
8f14: 0c e6     INC    <$E6
8f16: ec c4     LDD    ,U
8f18: dd e0     STD    <$E0
8f1a: ec 42     LDD    $2,U
8f1c: dd de     STD    <$DE
8f1e: ec 44     LDD    $4,U
8f20: dd e2     STD    <$E2
8f22: 33 46     LEAU   $6,U
8f24: df e4     STU    <$E4
8f26: bd 8f 34  JSR    $8F34
8f29: 9e 5a     LDX    <$5A
8f2b: 30 88 19  LEAX   $19,X
8f2e: 8c 49 4b  CMPX   #$494B
8f31: 25 d5     BCS    $8F08
8f33: 39        RTS
