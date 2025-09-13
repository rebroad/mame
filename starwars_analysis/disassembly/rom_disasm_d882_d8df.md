d882: 80 24     SUBA   #$24
d884: 04 0c     LSR    <$0C
d886: 12        NOP
d887: 0c 12     INC    <$12
d889: d7 13     STB    <$13
d88b: 96 09     LDA    <$09
d88d: 84 03     ANDA   #$03
d88f: 27 1b     BEQ    $D8AC
d891: 1f 89     TFR    A,B
d893: 40        NEGA
d894: 47        ASRA
d895: 9b 12     ADDA   <$12
d897: 2a 0b     BPL    $D8A4
d899: 0d 13     TST    <$13
d89b: 2a 11     BPL    $D8AE
d89d: 4c        INCA
d89e: 2b 0e     BMI    $D8AE
d8a0: 08 13     ASL    <$13
d8a2: 04 13     LSR    <$13
d8a4: c1 01     CMPB   #$01
d8a6: 26 02     BNE    $D8AA
d8a8: 0c 14     INC    <$14
d8aa: 0c 14     INC    <$14
d8ac: 97 12     STA    <$12
d8ae: d6 0a     LDB    <$0A
d8b0: c4 0f     ANDB   #$0F
d8b2: 26 2a     BNE    $D8DE
d8b4: 8e 48 17  LDX    #$4817
d8b7: a6 84     LDA    ,X
d8b9: 2a 05     BPL    $D8C0
d8bb: 84 7f     ANDA   #$7F
d8bd: 5c        INCB
d8be: a7 84     STA    ,X
d8c0: 30 1f     LEAX   -$1,X
d8c2: 8c 48 15  CMPX   #$4815
d8c5: 2c f0     BGE    $D8B7
d8c7: 5d        TSTB
d8c8: 26 14     BNE    $D8DE
d8ca: 8e 48 17  LDX    #$4817
d8cd: a6 84     LDA    ,X
d8cf: 27 06     BEQ    $D8D7
d8d1: 8b 7f     ADDA   #$7F
d8d3: a7 84     STA    ,X
d8d5: 20 07     BRA    $D8DE
d8d7: 30 1f     LEAX   -$1,X
d8d9: 8c 48 15  CMPX   #$4815
d8dc: 2c ef     BGE    $D8CD
d8de: 39        RTS
d8df: 7e d8df     JMP    $d8df
