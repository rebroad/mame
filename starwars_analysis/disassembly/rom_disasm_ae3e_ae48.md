ae3e: 0a 01  DEC    <$01
ae40: 27 06  BEQ    $AE48
ae42: 58     ASLB
ae43: 49     ROLA
ae44: 2a f8  BPL    $AE3E
ae46: 84 7f  ANDA   #$7F
ae48: 7e ae48     JMP    $ae48
