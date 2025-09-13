6864: 49           ROLA
6865: bd 98 98     JSR    $9898
6868: bd b9 8b     JSR    $B98B
686b: bd 98 90     JSR    $9890
686e: bd 95 58     JSR    $9558
6871: bd 8b 6d     JSR    $8B6D
6874: bd 70 db     JSR    $70DB
6877: bd 6d d2     JSR    $6DD2
687a: 86 10        LDA    #$10
687c: bd ce 0c     JSR    $CE0C
687f: bd 6f 5f     JSR    $6F5F
6882: fc 4b 0e     LDD    $4B0E
6885: c3 00 01     ADDD   #$0001
6888: fd 4b 0e     STD    $4B0E
688b: 10 83 00 28  CMPD   #$0028
688f: 26 15        BNE    $68A6
6891: b6 4b 15     LDA    $4B15
6894: 81 03        CMPA   #$03
6896: 2d 09        BLT    $68A1
6898: 84 01        ANDA   #$01
689a: 27 05        BEQ    $68A1
689c: bd bd 85     JSR    $BD85
689f: 20 03        BRA    $68A4
68a1: bd bd a8     JSR    $BDA8
68a4: 20 20        BRA    $68C6
68a6: 10 83 00 c8  CMPD   #$00C8
68aa: 26 05        BNE    $68B1
68ac: bd bd ad     JSR    $BDAD
68af: 20 15        BRA    $68C6
68b1: 10 83 01 90  CMPD   #$0190
68b5: 26 05        BNE    $68BC
68b7: bd bd 8a     JSR    $BD8A
68ba: 20 0a        BRA    $68C6
68bc: 10 83 01 a4  CMPD   #$01A4
68c0: 25 04        BCS    $68C6
68c2: 86 21        LDA    #$21
68c4: 97 41        STA    <$41
68c6: 96 e6        LDA    <$E6
68c8: 81 03        CMPA   #$03
68ca: 24 03        BCC    $68CF
68cc: bd 8f 7b     JSR    $8F7B
68cf: 39           RTS
