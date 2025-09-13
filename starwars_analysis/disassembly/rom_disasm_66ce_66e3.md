66ce: fc 4b 0e     LDD    $4B0E
66d1: c3 00 01     ADDD   #$0001
66d4: fd 4b 0e     STD    $4B0E
66d7: 10 83 02 80  CMPD   #$0280
66db: 25 06        BCS    $66E3
66dd: cc ff ff     LDD    #$FFFF
66e0: fd 4a ec     STD    $4AEC
66e3: 7e 66e3     JMP    $66e3
