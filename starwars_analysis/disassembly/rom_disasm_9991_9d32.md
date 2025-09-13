9991: 01 00     NEG    <$00
9993: 19        DAA
9994: 70 00 f0  NEG    >$00F0
9997: 00 02     NEG    <$02
9999: 02 1a     XNC    <$1A
999b: 70 00 10  NEG    >$0010
999e: 00 02     NEG    <$02
99a0: 02 1b     XNC    <$1B
99a2: 80 00     SUBA   #$00
99a4: 90 00     SUBA   <$00
99a6: 01 03     NEG    <$03
99a8: 1c 80     ANDCC  #$80
99aa: 00 d8     NEG    <$D8
99ac: 00 01     NEG    <$01
99ae: 00 1d     NEG    <$1D
99b0: 80 00     SUBA   #$00
99b2: 28 00     BVC    $99B4
99b4: 01 00     NEG    <$00
99b6: 1e 80     EXG    A,D
99b8: 00 70     NEG    <$70
99ba: 00 01     NEG    <$01
99bc: 02 1f     XNC    <$1F
99be: 30 00     LEAX   $0,X
99c0: 88 00     EORA   #$00
99c2: 01 02     NEG    <$02
99c4: 00 30     NEG    <$30
99c6: 00 98     NEG    <$98
99c8: 00 03     NEG    <$03
99ca: 02 01     XNC    <$01
99cc: 30 00     LEAX   $0,X
99ce: a8 00     EORA   $0,X
99d0: 03 02     COM    <$02
99d2: 02 30     XNC    <$30
99d4: 00 b8     NEG    <$B8
99d6: 00 01     NEG    <$01
99d8: 02 03     XNC    <$03
99da: 30 00     LEAX   $0,X
99dc: e8 00     EORB   $0,X
99de: 01 00     NEG    <$00
99e0: 04 30     LSR    <$30
99e2: 00 f8     NEG    <$F8
99e4: 00 03     NEG    <$03
99e6: 00 05     NEG    <$05
99e8: 30 00     LEAX   $0,X
99ea: 08 00     ASL    <$00
99ec: 03 00     COM    <$00
99ee: 06 30     ROR    <$30
99f0: 00 18     NEG    <$18
99f2: 00 01     NEG    <$01
99f4: 00 07     NEG    <$07
99f6: 30 00     LEAX   $0,X
99f8: 48        ASLA
99f9: 00 01     NEG    <$01
99fb: 03 08     COM    <$08
99fd: 30 00     LEAX   $0,X
99ff: 58        ASLB
9a00: 00 03     NEG    <$03
9a02: 03 09     COM    <$09
9a04: 30 00     LEAX   $0,X
9a06: 68 00     ASL    $0,X
9a08: 03 03     COM    <$03
9a0a: 0a 30     DEC    <$30
9a0c: 00 78     NEG    <$78
9a0e: 00 01     NEG    <$01
9a10: 03 0b     COM    <$0B
9a12: 40        NEGA
9a13: 00 90     NEG    <$90
9a15: 00 01     NEG    <$01
9a17: 02 0c     XNC    <$0C
9a19: 40        NEGA
9a1a: 00 a0     NEG    <$A0
9a1c: 00 03     NEG    <$03
9a1e: 02 0d     XNC    <$0D
9a20: 40        NEGA
9a21: 00 b0     NEG    <$B0
9a23: 00 01     NEG    <$01
9a25: 02 0e     XNC    <$0E
9a27: 40        NEGA
9a28: 00 f0     NEG    <$F0
9a2a: 00 01     NEG    <$01
9a2c: 00 0f     NEG    <$0F
9a2e: 40        NEGA
9a2f: 00 10     NEG    <$10
9a31: 00 01     NEG    <$01
9a33: 00 10     NEG    <$10
9a35: 40        NEGA
9a36: 00 50     NEG    <$50
9a38: 00 01     NEG    <$01
9a3a: 03 11     COM    <$11
9a3c: 40        NEGA
9a3d: 00 60     NEG    <$60
9a3f: 00 03     NEG    <$03
9a41: 03 12     COM    <$12
9a43: 40        NEGA
9a44: 00 70     NEG    <$70
9a46: 00 01     NEG    <$01
9a48: 03 13     COM    <$13
9a4a: 54        LSRB
9a4b: 00 cc     NEG    <$CC
9a4d: 00 03     NEG    <$03
9a4f: 01 14     NEG    <$14
9a51: 54        LSRB
9a52: 00 34     NEG    <$34
9a54: 00 03     NEG    <$03
9a56: 01 15     NEG    <$15
9a58: 60 00     NEG    $0,X
9a5a: a0 00     SUBA   $0,X
9a5c: 01 01     NEG    <$01
9a5e: 16 60 00  LBRA   $FA61
9a61: e0 00     SUBB   $0,X
9a63: 03 00     COM    <$00
9a65: 17 60 00  LBSR   $FA68
9a68: 20 00     BRA    $9A6A
9a6a: 03 00     COM    <$00
9a6c: 18        X18
9a6d: 60 00     NEG    $0,X
9a6f: 60 00     NEG    $0,X
9a71: 01 01     NEG    <$01
9a73: 19        DAA
9a74: 74 00 e0  LSR    >$00E0
9a77: 00 01     NEG    <$01
9a79: 01 1a     NEG    <$1A
9a7b: 74 00 20  LSR    >$0020
9a7e: 00 01     NEG    <$01
9a80: 01 1b     NEG    <$1B
9a82: 80 00     SUBA   #$00
9a84: 98 00     EORA   <$00
9a86: 01 02     NEG    <$02
9a88: 1c 80     ANDCC  #$80
9a8a: 00 b8     NEG    <$B8
9a8c: 00 01     NEG    <$01
9a8e: 02 1d     XNC    <$1D
9a90: 80 00     SUBA   #$00
9a92: 48        ASLA
9a93: 00 01     NEG    <$01
9a95: 03 1e     COM    <$1E
9a97: 80 00     SUBA   #$00
9a99: 68 00     ASL    $0,X
9a9b: 01 03     NEG    <$03
9a9d: 1f 04     TFR    D,S
9a9f: 00 30     NEG    <$30
9aa1: 00 03     NEG    <$03
9aa3: 01 00     NEG    <$00
9aa5: 0c 00     INC    <$00
9aa7: 20 00     BRA    $9AA9
9aa9: 03 00     COM    <$00
9aab: 01 10     NEG    <$10
9aad: 00 98     NEG    <$98
9aaf: 00 03     NEG    <$03
9ab1: 01 02     NEG    <$02
9ab3: 14        XHCF
9ab4: 00 48     NEG    <$48
9ab6: 00 03     NEG    <$03
9ab8: 01 03     NEG    <$03
9aba: 18        X18
9abb: 00 b0     NEG    <$B0
9abd: 00 03     NEG    <$03
9abf: 03 04     COM    <$04
9ac1: 18        X18
9ac2: 00 d0     NEG    <$D0
9ac4: 00 03     NEG    <$03
9ac6: 00 05     NEG    <$05
9ac8: 20 00     BRA    $9ACA
9aca: c0 00     SUBB   #$00
9acc: 03 01     COM    <$01
9ace: 06 24     ROR    <$24
9ad0: 00 38     NEG    <$38
9ad2: 00 03     NEG    <$03
9ad4: 02 07     XNC    <$07
9ad6: 24 00     BCC    $9AD8
9ad8: 70 00 03  NEG    >$0003
9adb: 02 08     XNC    <$08
9add: 28 00     BVC    $9ADF
9adf: 00 00     NEG    <$00
9ae1: 03 00     COM    <$00
9ae3: 09 30     ROL    <$30
9ae5: 00 88     NEG    <$88
9ae7: 00 03     NEG    <$03
9ae9: 01 0a     NEG    <$0A
9aeb: 40        NEGA
9aec: 00 80     NEG    <$80
9aee: 00 03     NEG    <$03
9af0: 01 0b     NEG    <$0B
9af2: 44        LSRA
9af3: 00 60     NEG    <$60
9af5: 00 03     NEG    <$03
9af7: 02 0c     XNC    <$0C
9af9: 48        ASLA
9afa: 00 90     NEG    <$90
9afc: 00 03     NEG    <$03
9afe: 01 0d     NEG    <$0D
9b00: 48        ASLA
9b01: 00 a8     NEG    <$A8
9b03: 00 03     NEG    <$03
9b05: 03 0e     COM    <$0E
9b07: 4c        INCA
9b08: 00 50     NEG    <$50
9b0a: 00 03     NEG    <$03
9b0c: 02 0f     XNC    <$0F
9b0e: 50        NEGB
9b0f: 00 e0     NEG    <$E0
9b11: 00 03     NEG    <$03
9b13: 03 10     COM    <$10
9b15: 50        NEGB
9b16: 00 00     NEG    <$00
9b18: 00 03     NEG    <$03
9b1a: 02 11     XNC    <$11
9b1c: 50        NEGB
9b1d: 00 28     NEG    <$28
9b1f: 00 03     NEG    <$03
9b21: 00 12     NEG    <$12
9b23: 68 00     ASL    $0,X
9b25: b8 00 03  EORA   >$0003
9b28: 03 13     COM    <$13
9b2a: 68 00     ASL    $0,X
9b2c: d8 00     EORB   <$00
9b2e: 03 00     COM    <$00
9b30: 14        XHCF
9b31: 70 00 a0  NEG    >$00A0
9b34: 00 03     NEG    <$03
9b36: 03 15     COM    <$15
9b38: 70 00 e8  NEG    >$00E8
9b3b: 00 03     NEG    <$03
9b3d: 00 16     NEG    <$16
9b3f: 70 00 18  NEG    >$0018
9b42: 00 03     NEG    <$03
9b44: 03 17     COM    <$17
9b46: 70 00 58  NEG    >$0058
9b49: 00 03     NEG    <$03
9b4b: 03 18     COM    <$18
9b4d: 78 00 f8  ASL    >$00F8
9b50: 00 03     NEG    <$03
9b52: 00 19     NEG    <$19
9b54: 78 00 40  ASL    >$0040
9b57: 00 03     NEG    <$03
9b59: 02 1a     XNC    <$1A
9b5b: 78 00 68  ASL    >$0068
9b5e: 00 03     NEG    <$03
9b60: 02 1b     XNC    <$1B
9b62: 00 00     NEG    <$00
9b64: 90 00     SUBA   <$00
9b66: 01 00     NEG    <$00
9b68: 00 00     NEG    <$00
9b6a: 00 b0     NEG    <$B0
9b6c: 00 01     NEG    <$01
9b6e: 00 01     NEG    <$01
9b70: 00 00     NEG    <$00
9b72: d0 00     SUBB   <$00
9b74: 01 00     NEG    <$00
9b76: 02 00     XNC    <$00
9b78: 00 f0     NEG    <$F0
9b7a: 00 01     NEG    <$01
9b7c: 00 03     NEG    <$03
9b7e: 00 00     NEG    <$00
9b80: 10 00 01  NEG    <$01
9b83: 00 04     NEG    <$04
9b85: 00 00     NEG    <$00
9b87: 30 00     LEAX   $0,X
9b89: 01 00     NEG    <$00
9b8b: 05 00     LSR    <$00
9b8d: 00 50     NEG    <$50
9b8f: 00 01     NEG    <$01
9b91: 00 06     NEG    <$06
9b93: 00 00     NEG    <$00
9b95: 70 00 01  NEG    >$0001
9b98: 00 07     NEG    <$07
9b9a: 10 00 c8  NEG    <$C8
9b9d: 00 01     NEG    <$01
9b9f: 02 08     XNC    <$08
9ba1: 28 00     BVC    $9BA3
9ba3: c0 00     SUBB   #$00
9ba5: 01 02     NEG    <$02
9ba7: 09 30     ROL    <$30
9ba9: 00 88     NEG    <$88
9bab: 00 01     NEG    <$01
9bad: 02 0a     XNC    <$0A
9baf: 30 00     LEAX   $0,X
9bb1: a8 00     EORA   $0,X
9bb3: 01 02     NEG    <$02
9bb5: 0b 30     XDEC   <$30
9bb7: 00 48     NEG    <$48
9bb9: 00 01     NEG    <$01
9bbb: 02 0c     XNC    <$0C
9bbd: 30 00     LEAX   $0,X
9bbf: 68 00     ASL    $0,X
9bc1: 01 02     NEG    <$02
9bc3: 0d 40     TST    <$40
9bc5: 00 a0     NEG    <$A0
9bc7: 00 01     NEG    <$01
9bc9: 03 0e     COM    <$0E
9bcb: 40        NEGA
9bcc: 00 40     NEG    <$40
9bce: 00 01     NEG    <$01
9bd0: 02 0f     XNC    <$0F
9bd2: 40        NEGA
9bd3: 00 60     NEG    <$60
9bd5: 00 01     NEG    <$01
9bd7: 03 10     COM    <$10
9bd9: 40        NEGA
9bda: 00 80     NEG    <$80
9bdc: 00 01     NEG    <$01
9bde: 03 11     COM    <$11
9be0: 60 00     NEG    $0,X
9be2: 00 00     NEG    <$00
9be4: 01 03     NEG    <$03
9be6: 12        NOP
9be7: 68 00     ASL    $0,X
9be9: 84 00     ANDA   #$00
9beb: 01 03     NEG    <$03
9bed: 13        SYNC
9bee: 70 00 98  NEG    >$0098
9bf1: 00 01     NEG    <$01
9bf3: 01 14     NEG    <$14
9bf5: 70 00 b8  NEG    >$00B8
9bf8: 00 01     NEG    <$01
9bfa: 01 15     NEG    <$15
9bfc: 70 00 d8  NEG    >$00D8
9bff: 00 01     NEG    <$01
9c01: 01 16     NEG    <$16
9c03: 70 00 f8  NEG    >$00F8
9c06: 00 01     NEG    <$01
9c08: 01 17     NEG    <$17
9c0a: 70 00 18  NEG    >$0018
9c0d: 00 01     NEG    <$01
9c0f: 01 18     NEG    <$18
9c11: 70 00 38  NEG    >$0038
9c14: 00 01     NEG    <$01
9c16: 01 19     NEG    <$19
9c18: 70 00 58  NEG    >$0058
9c1b: 00 01     NEG    <$01
9c1d: 01 1a     NEG    <$1A
9c1f: 70 00 78  NEG    >$0078
9c22: 00 01     NEG    <$01
9c24: 01 1b     NEG    <$1B
9c26: 30 00     LEAX   $0,X
9c28: e8 00     EORB   $0,X
9c2a: 01 02     NEG    <$02
9c2c: 1c 30     ANDCC  #$30
9c2e: 00 08     NEG    <$08
9c30: 00 01     NEG    <$01
9c32: 02 1d     XNC    <$1D
9c34: 40        NEGA
9c35: 00 f8     NEG    <$F8
9c37: 00 01     NEG    <$01
9c39: 03 1e     COM    <$1E
9c3b: 40        NEGA
9c3c: 00 18     NEG    <$18
9c3e: 00 01     NEG    <$01
9c40: 03 1f     COM    <$1F
9c42: 08 00     ASL    <$00
9c44: a8 00     EORA   $0,X
9c46: 03 02     COM    <$02
9c48: 00 08     NEG    <$08
9c4a: 00 58     NEG    <$58
9c4c: 00 03     NEG    <$03
9c4e: 02 01     XNC    <$01
9c50: 0c 00     INC    <$00
9c52: e8 00     EORB   $0,X
9c54: 01 00     NEG    <$00
9c56: 02 0c     XNC    <$0C
9c58: 00 18     NEG    <$18
9c5a: 00 01     NEG    <$01
9c5c: 00 03     NEG    <$03
9c5e: 14        XHCF
9c5f: 00 c4     NEG    <$C4
9c61: 00 01     NEG    <$01
9c63: 00 04     NEG    <$04
9c65: 14        XHCF
9c66: 00 3c     NEG    <$3C
9c68: 00 01     NEG    <$01
9c6a: 00 05     NEG    <$05
9c6c: 28 00     BVC    $9C6E
9c6e: a8 00     EORA   $0,X
9c70: 01 02     NEG    <$02
9c72: 06 28     ROR    <$28
9c74: 00 58     NEG    <$58
9c76: 00 01     NEG    <$01
9c78: 02 07     XNC    <$07
9c7a: 30 00     LEAX   $0,X
9c7c: 00 00     NEG    <$00
9c7e: 03 00     COM    <$00
9c80: 08 38     ASL    <$38
9c82: 00 e0     NEG    <$E0
9c84: 00 01     NEG    <$01
9c86: 00 09     NEG    <$09
9c88: 38 00     XANDCC #$00
9c8a: 20 00     BRA    $9C8C
9c8c: 01 00     NEG    <$00
9c8e: 0a 48     DEC    <$48
9c90: 00 c0     NEG    <$C0
9c92: 00 01     NEG    <$01
9c94: 03 0b     COM    <$0B
9c96: 48        ASLA
9c97: 00 40     NEG    <$40
9c99: 00 01     NEG    <$01
9c9b: 03 0c     COM    <$0C
9c9d: 50        NEGB
9c9e: 00 90     NEG    <$90
9ca0: 00 01     NEG    <$01
9ca2: 03 0d     COM    <$0D
9ca4: 50        NEGB
9ca5: 00 d8     NEG    <$D8
9ca7: 00 03     NEG    <$03
9ca9: 01 0e     NEG    <$0E
9cab: 50        NEGB
9cac: 00 28     NEG    <$28
9cae: 00 03     NEG    <$03
9cb0: 01 0f     NEG    <$0F
9cb2: 50        NEGB
9cb3: 00 70     NEG    <$70
9cb5: 00 01     NEG    <$01
9cb7: 02 10     XNC    <$10
9cb9: 58        ASLB
9cba: 00 f0     NEG    <$F0
9cbc: 00 03     NEG    <$03
9cbe: 02 11     XNC    <$11
9cc0: 58        ASLB
9cc1: 00 10     NEG    <$10
9cc3: 00 03     NEG    <$03
9cc5: 02 12     XNC    <$12
9cc7: 68 00     ASL    $0,X
9cc9: b8 00 01  EORA   >$0001
9ccc: 00 13     NEG    <$13
9cce: 68 00     ASL    $0,X
9cd0: 48        ASLA
9cd1: 00 01     NEG    <$01
9cd3: 00 14     NEG    <$14
9cd5: 70 00 88  NEG    >$0088
9cd8: 00 01     NEG    <$01
9cda: 03 15     COM    <$15
9cdc: 70 00 a0  NEG    >$00A0
9cdf: 00 01     NEG    <$01
9ce1: 01 16     NEG    <$16
9ce3: 70 00 d0  NEG    >$00D0
9ce6: 00 01     NEG    <$01
9ce8: 03 17     COM    <$17
9cea: 70 00 00  NEG    >$0000
9ced: 00 01     NEG    <$01
9cef: 01 18     NEG    <$18
9cf1: 70 00 30  NEG    >$0030
9cf4: 00 01     NEG    <$01
9cf6: 03 19     COM    <$19
9cf8: 70 00 60  NEG    >$0060
9cfb: 00 01     NEG    <$01
9cfd: 01 1a     NEG    <$1A
9cff: 70 00 78  NEG    >$0078
9d02: 00 01     NEG    <$01
9d04: 03 1b     COM    <$1B
9d06: 80 00     SUBA   #$00
9d08: b0 00 01  SUBA   >$0001
9d0b: 00 1c     NEG    <$1C
9d0d: 80 00     SUBA   #$00
9d0f: e8 00     EORB   $0,X
9d11: 01 01     NEG    <$01
9d13: 1d        SEX
9d14: 80 00     SUBA   #$00
9d16: 18        X18
9d17: 00 01     NEG    <$01
9d19: 01 1e     NEG    <$1E
9d1b: 80 00     SUBA   #$00
9d1d: 50        NEGB
9d1e: 00 01     NEG    <$01
9d20: 00 1f     NEG    <$1F
9d22: 60 00     NEG    $0,X
9d24: 98 00     EORA   <$00
9d26: 01 02     NEG    <$02
9d28: 00 10     NEG    <$10
9d2a: 00 68     NEG    <$68
9d2c: 00 01     NEG    <$01
9d2e: 02 01     XNC    <$01
9d30: 20 00     BRA    $9D32
9d32: 7e 9d32     JMP    $9d32
