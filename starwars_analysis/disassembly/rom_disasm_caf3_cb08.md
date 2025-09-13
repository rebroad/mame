caf3: be 4a ec  LDX    $4AEC
caf6: f6 4a ee  LDB    $4AEE
caf9: 3a        ABX
cafa: 1f 13     TFR    X,U
cafc: b6 4a ee  LDA    $4AEE
caff: 81 03     CMPA   #$03
cb01: 25 05     BCS    $CB08
cb03: 8e cc 10  LDX    #$CC10
cb06: 20 03     BRA    $CB0B
cb08: 7e cb08     JMP    $cb08
