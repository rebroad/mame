ca9d: 30 04     LEAX   $4,X
ca9f: 8c 4a b6  CMPX   #$4AB6
caa2: 25 eb     BCS    $CA8F
caa4: 39        RTS
caa5: bd ca b7  JSR    $CAB7
caa8: 86 00     LDA    #$00
caaa: b7 4a ee  STA    $4AEE
caad: cc 00 00  LDD    #$0000
cab0: fd 4a ef  STD    $4AEF
cab3: 8e 4a b6  LDX    #$4AB6
cab6: 39        RTS
cab7: bf 4a ec  STX    $4AEC
caba: ce 4a d1  LDU    #$4AD1
cabd: 8e 4a b2  LDX    #$4AB2
cac0: bc 4a ec  CMPX   $4AEC
cac3: 27 19     BEQ    $CADE
cac5: 7e cac5     JMP    $cac5
