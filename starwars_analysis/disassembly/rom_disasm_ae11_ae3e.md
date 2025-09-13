ae11: b3 50 00  SUBD   $5000
ae14: 2c 49     BGE    $AE5F
ae16: fc 47 00  LDD    $4700
ae19: fd 50 00  STD    $5000
ae1c: 86 86     LDA    #$86
ae1e: bd cd ba  JSR    $CDBA
ae21: fc 50 04  LDD    $5004
ae24: c3 ff 98  ADDD   #$FF98
ae27: 84 1f     ANDA   #$1F
ae29: ed a1     STD    ,Y++
ae2b: fc 50 02  LDD    $5002
ae2e: 84 1f     ANDA   #$1F
ae30: ed a1     STD    ,Y++
ae32: cc 63 ff  LDD    #$63FF
ae35: ed a1     STD    ,Y++
ae37: 86 06     LDA    #$06
ae39: 97 01     STA    <$01
ae3b: fc 50 18  LDD    $5018
ae3e: 7e ae3e     JMP    $ae3e
