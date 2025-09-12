f86c: c6 07           LDB    #$07
f86e: 44              LSRA
f86f: 24 05           BCC    $F876
f871: be 30 22        LDX    $3022
f874: 20 03           BRA    $F879
f876: be 30 32        LDX    $3032
f879: af a1           STX    ,Y++
f87b: 5a              DECB
f87c: 2a f0           BPL    $F86E
f87e: cc 80 40        LDD    #$8040
f881: ed a1           STD    ,Y++
f883: 39              RTS
