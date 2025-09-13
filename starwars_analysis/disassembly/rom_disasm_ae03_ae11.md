ae03: b3 50 00  SUBD   $5000
ae06: 2c 57     BGE    $AE5F
ae08: fc 50 04  LDD    $5004
ae0b: 2a 04     BPL    $AE11
ae0d: 43        COMA
ae0e: 50        NEGB
ae0f: 82 ff     SBCA   #$FF
ae11: 7e ae11     JMP    $ae11
