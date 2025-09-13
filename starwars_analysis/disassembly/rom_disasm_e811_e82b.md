e811: ed a1     STD    ,Y++
e813: bd e8 21  JSR    $E821
e816: cc 72 00  LDD    #$7200
e819: ed a1     STD    ,Y++
e81b: cc 80 40  LDD    #$8040
e81e: ed a1     STD    ,Y++
e820: 39        RTS
e821: 8e e8 94  LDX    #$E894
e824: f6 48 ae  LDB    $48AE
e827: 3a        ABX
e828: 3a        ABX
e829: ae 84     LDX    ,X
e82b: 7e e82b     JMP    $e82b
