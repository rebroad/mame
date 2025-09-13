64a6: f7 4b 11  STB    $4B11
64a9: fc 4b 10  LDD    $4B10
64ac: ed a1     STD    ,Y++
64ae: bd c7 fd  JSR    $C7FD
64b1: bd d9 23  JSR    $D923
64b4: bd 61 2f  JSR    $612F
64b7: bd 6d ca  JSR    $6DCA
64ba: fc 4b 0e  LDD    $4B0E
64bd: 83 00 01  SUBD   #$0001
64c0: fd 4b 0e  STD    $4B0E
64c3: 2a 04     BPL    $64C9
64c5: 86 05     LDA    #$05
64c7: 97 41     STA    <$41
64c9: 7e 64c9     JMP    $64c9
