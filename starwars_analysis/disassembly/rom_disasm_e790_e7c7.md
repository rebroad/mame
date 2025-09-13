e790: 1f 89     TFR    A,B
e792: 54        LSRB
e793: 54        LSRB
e794: 54        LSRB
e795: c4 1e     ANDB   #$1E
e797: 26 09     BNE    $E7A2
e799: 0d ad     TST    <$AD
e79b: 2f 05     BLE    $E7A2
e79d: fe 30 02  LDU    $3002
e7a0: 20 07     BRA    $E7A9
e7a2: 0f ad     CLR    <$AD
e7a4: ce 30 04  LDU    #$3004
e7a7: ee c5     LDU    B,U
e7a9: 0a ad     DEC    <$AD
e7ab: ef a1     STU    ,Y++
e7ad: 48        ASLA
e7ae: 84 1e     ANDA   #$1E
e7b0: 26 09     BNE    $E7BB
e7b2: 0d ad     TST    <$AD
e7b4: 2f 05     BLE    $E7BB
e7b6: fe 30 02  LDU    $3002
e7b9: 20 07     BRA    $E7C2
e7bb: 0f ad     CLR    <$AD
e7bd: ce 30 04  LDU    #$3004
e7c0: ee c6     LDU    A,U
e7c2: 0a ad     DEC    <$AD
e7c4: ef a1     STU    ,Y++
e7c6: 39        RTS
e7c7: 7e e7c7     JMP    $e7c7
