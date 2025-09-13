83a4: ce 4b 3f     LDU    #$4B3F
83a7: 8e 7c 7e     LDX    #$7C7E
83aa: ec 81        LDD    ,X++
83ac: ed c1        STD    ,U++
83ae: 11 83 4b 5f  CMPU   #$4B5F
83b2: 25 f6        BCS    $83AA
83b4: ce 4b 43     LDU    #$4B43
83b7: 8e 7c 9e     LDX    #$7C9E
83ba: 86 11        LDA    #$11
83bc: f6 47 03     LDB    $4703
83bf: 3d           MUL
83c0: 48           ASLA
83c1: ec 86        LDD    A,X
83c3: ed c4        STD    ,U
83c5: 33 44        LEAU   $4,U
83c7: 11 83 4b 5f  CMPU   #$4B5F
83cb: 25 ed        BCS    $83BA
83cd: 39           RTS
83ce: 7e 83ce     JMP    $83ce
