ae6e: 86 00     LDA    #$00
ae70: 97 bd     STA    <$BD
ae72: 86 00     LDA    #$00
ae74: 97 bc     STA    <$BC
ae76: 1a 10     ORCC   #$10
ae78: 96 31     LDA    <$31
ae7a: 27 0b     BEQ    $AE87
ae7c: 7c 4b 1b  INC    $4B1B
ae7f: 0f bd     CLR    <$BD
ae81: c6 08     LDB    #$08
ae83: d7 b7     STB    <$B7
ae85: 0f 31     CLR    <$31
ae87: 96 b7     LDA    <$B7
ae89: 2f 14     BLE    $AE9F
ae8b: 0a b7     DEC    <$B7
ae8d: 97 bc     STA    <$BC
ae8f: dc 74     LDD    <$74
ae91: dd b8     STD    <$B8
ae93: dc 6b     LDD    <$6B
ae95: dd ba     STD    <$BA
ae97: dc 2d     LDD    <$2D
ae99: dd b3     STD    <$B3
ae9b: dc 2f     LDD    <$2F
ae9d: dd b5     STD    <$B5
ae9f: 1c ef     ANDCC  #$EF
aea1: 96 b7     LDA    <$B7
aea3: 81 07     CMPA   #$07
aea5: 26 0b     BNE    $AEB2
aea7: b6 4b 36  LDA    $4B36
aeaa: 26 03     BNE    $AEAF
aeac: 7a 4b 36  DEC    $4B36
aeaf: bd be 16  JSR    $BE16
aeb2: 7e aeb2     JMP    $aeb2
