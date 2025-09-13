cac5: ec 1c     LDD    -$4,X
cac7: ed 84     STD    ,X
cac9: ec 1e     LDD    -$2,X
cacb: ed 02     STD    $2,X
cacd: ec 5d     LDD    -$3,U
cacf: ed c4     STD    ,U
cad1: a6 5f     LDA    -$1,U
cad3: a7 42     STA    $2,U
cad5: 33 5d     LEAU   -$3,U
cad7: 30 1c     LEAX   -$4,X
cad9: bc 4a ec  CMPX   $4AEC
cadc: 22 e7     BHI    $CAC5
cade: ff 4a ec  STU    $4AEC
cae1: 86 00     LDA    #$00
cae3: a7 c4     STA    ,U
cae5: cc 00 00  LDD    #$0000
cae8: ed 41     STD    $1,U
caea: dc 5c     LDD    <$5C
caec: ed 84     STD    ,X
caee: dc 5e     LDD    <$5E
caf0: ed 02     STD    $2,X
caf2: 39        RTS
