c421: ec 81        LDD    ,X++
c423: ed c1        STD    ,U++
c425: 8c 46 00     CMPX   #$4600
c428: 25 f7        BCS    $C421
c42a: bd c6 b8     JSR    $C6B8
c42d: 8e 45 00     LDX    #$4500
c430: 10 8e 4c 00  LDY    #$4C00
c434: 7e c434     JMP    $c434
