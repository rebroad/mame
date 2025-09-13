e764: a6 84     LDA    ,X
e766: bd e7 90  JSR    $E790
e769: 96 ad     LDA    <$AD
e76b: 2e 05     BGT    $E772
e76d: cc b9 13  LDD    #$B913
e770: ed a1     STD    ,Y++
e772: a6 01     LDA    $1,X
e774: bd e7 90  JSR    $E790
e777: a6 02     LDA    $2,X
e779: 44        LSRA
e77a: 44        LSRA
e77b: 44        LSRA
e77c: 44        LSRA
e77d: bd e7 ad  JSR    $E7AD
e780: 96 ad     LDA    <$AD
e782: 2e 05     BGT    $E789
e784: cc b9 13  LDD    #$B913
e787: ed a1     STD    ,Y++
e789: a6 02     LDA    $2,X
e78b: bd e7 ad  JSR    $E7AD
e78e: a6 03     LDA    $3,X
e790: 7e e790     JMP    $e790
