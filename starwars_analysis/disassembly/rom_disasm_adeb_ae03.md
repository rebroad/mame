adeb: fc 50 00     LDD    $5000
adee: 10 83 00 01  CMPD   #$0001
adf2: 2d 6b        BLT    $AE5F
adf4: fd 47 04     STD    $4704
adf7: fd 50 18     STD    $5018
adfa: fc 50 02     LDD    $5002
adfd: 2a 04        BPL    $AE03
adff: 43           COMA
ae00: 50           NEGB
ae01: 82 ff        SBCA   #$FF
ae03: 7e ae03     JMP    $ae03
