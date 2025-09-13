e7dc: 39        RTS
e7dd: f6 48 ae  LDB    $48AE
e7e0: 8e ed a8  LDX    #$EDA8
e7e3: 3a        ABX
e7e4: 3a        ABX
e7e5: ec 84     LDD    ,X
e7e7: ed a1     STD    ,Y++
e7e9: 39        RTS
e7ea: f6 48 ae  LDB    $48AE
e7ed: 8e ea 50  LDX    #$EA50
e7f0: 3a        ABX
e7f1: 3a        ABX
e7f2: 3a        ABX
e7f3: 3a        ABX
e7f4: ec 02     LDD    $2,X
e7f6: ed a1     STD    ,Y++
e7f8: ec 84     LDD    ,X
e7fa: 20 15     BRA    $E811
e7fc: f6 48 ae  LDB    $48AE
e7ff: 8e ea 50  LDX    #$EA50
e802: 3a        ABX
e803: 3a        ABX
e804: 3a        ABX
e805: 3a        ABX
e806: ec 02     LDD    $2,X
e808: b3 48 af  SUBD   $48AF
e80b: 84 1f     ANDA   #$1F
e80d: ed a1     STD    ,Y++
e80f: ec 84     LDD    ,X
e811: 7e e811     JMP    $e811
