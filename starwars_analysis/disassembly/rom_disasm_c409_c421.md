c409: e6 c0     LDB    ,U+
c40b: e7 80     STB    ,X+
c40d: bc 4a fa  CMPX   $4AFA
c410: 25 f7     BCS    $C409
c412: 39        RTS
c413: bd c2 c3  JSR    $C2C3
c416: 27 37     BEQ    $C44F
c418: b7 4a fa  STA    $4AFA
c41b: 8e 45 00  LDX    #$4500
c41e: ce 4c 00  LDU    #$4C00
c421: 7e c421     JMP    $c421
