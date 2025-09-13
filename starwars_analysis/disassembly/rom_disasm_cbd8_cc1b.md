cbd8: ff 9c fe     STU    $9CFE
cbdb: 24 ff        BCC    $CBDC
cbdd: cc fe 24     LDD    #$FE24
cbe0: ff fc fe     STU    $FCFE
cbe3: 24 00        BCC    $CBE5
cbe5: 2c fe        BGE    $CBE5
cbe7: 24 00        BCC    $CBE9
cbe9: 5c           INCB
cbea: fe 24 00     LDU    $2400
cbed: 8c fe 24     CMPX   #$FE24
cbf0: 00 bc        NEG    <$BC
cbf2: fe 24 00     LDU    $2400
cbf5: ec fe        LDD    [W,S]
cbf7: 24 01        BCC    $CBFA
cbf9: 1c fe        ANDCC  #$FE
cbfb: 24 01        BCC    $CBFE
cbfd: 1c fe        ANDCC  #$FE
cbff: 54           LSRB
cc00: 01 1c        NEG    <$1C
cc02: fe 84 01     LDU    $8401
cc05: 1c fe        ANDCC  #$FE
cc07: b4 01 1c     ANDA   $011C
cc0a: fe e4 01     LDU    $E401
cc0d: 1c ff        ANDCC  #$FF
cc0f: 14           XHCF
cc10: 01 1c        NEG    <$1C
cc12: ff 74 01     STU    $7401
cc15: 1c ff        ANDCC  #$FF
cc17: a4 bd cc 5b  ANDA   [$9876,PCR]
cc1b: 7e cc18     JMP    $cc18
