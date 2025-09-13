60ca: b6 48 14  LDA    $4814
60cd: 26 05     BNE    $60D4
60cf: b7 4b 31  STA    $4B31
60d2: 20 20     BRA    $60F4
60d4: b6 4b 31  LDA    $4B31
60d7: 26 0b     BNE    $60E4
60d9: bd bd 12  JSR    $BD12
60dc: b6 48 14  LDA    $4814
60df: b7 4b 31  STA    $4B31
60e2: 20 10     BRA    $60F4
60e4: b6 4b 31  LDA    $4B31
60e7: b1 48 14  CMPA   $4814
60ea: 24 08     BCC    $60F4
60ec: bd bd 03  JSR    $BD03
60ef: 86 ff     LDA    #$FF
60f1: b7 4b 31  STA    $4B31
60f4: 7e 60f4     JMP    $60f4
