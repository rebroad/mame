d912: 30 01        LEAX   $1,X
d914: bc 4a d9     CMPX   $4AD9
d917: 25 e1        BCS    $D8FA
d919: 39           RTS
d91a: 8e 4a 52     LDX    #$4A52
d91d: 6f 84        CLR    ,X
d91f: bf 4a d9     STX    $4AD9
d922: 39           RTS
d923: ce 4a 52     LDU    #$4A52
d926: 11 b3 4a d9  CMPU   $4AD9
d92a: 24 15        BCC    $D941
d92c: e6 c0        LDB    ,U+
d92e: c1 d6        CMPB   #$D6
d930: 24 09        BCC    $D93B
d932: f7 48 ae     STB    $48AE
d935: bd e7 dd     JSR    $E7DD
d938: bd e7 fc     JSR    $E7FC
d93b: 11 b3 4a d9  CMPU   $4AD9
d93f: 25 eb        BCS    $D92C
d941: 39           RTS
d942: ce 4a 52     LDU    #$4A52
d945: 11 b3 4a d9  CMPU   $4AD9
d949: 24 12        BCC    $D95D
d94b: e6 c0        LDB    ,U+
d94d: c1 d6        CMPB   #$D6
d94f: 24 06        BCC    $D957
d951: f7 48 ae     STB    $48AE
d954: bd e7 fc     JSR    $E7FC
d957: 11 b3 4a d9  CMPU   $4AD9
d95b: 25 ee        BCS    $D94B
d95d: 7e d95d     JMP    $d95d
