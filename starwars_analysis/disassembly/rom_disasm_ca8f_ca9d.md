ca8f: dc 5c  LDD    <$5C
ca91: a3 84  SUBD   ,X
ca93: 22 10  BHI    $CAA5
ca95: 26 06  BNE    $CA9D
ca97: dc 5e  LDD    <$5E
ca99: a3 02  SUBD   $2,X
ca9b: 24 08  BCC    $CAA5
ca9d: 7e ca9d     JMP    $ca9d
