cc5b: 8e 4a b6  LDX    #$4AB6
cc5e: ce cc 7a  LDU    #$CC7A
cc61: ec c1     LDD    ,U++
cc63: ed 81     STD    ,X++
cc65: 8c 4a d4  CMPX   #$4AD4
cc68: 25 f7     BCS    $CC61
cc6a: 8e 4a 8e  LDX    #$4A8E
cc6d: ce cc 98  LDU    #$CC98
cc70: ec c1     LDD    ,U++
cc72: ed 81     STD    ,X++
cc74: 8c 4a b6  CMPX   #$4AB6
cc77: 25 f7     BCS    $CC70
cc79: 39        RTS
cc7a: 0f 02     CLR    <$02
cc7c: 09 17     ROL    <$17
cc7e: 01 0e     NEG    <$0E
cc80: 08 01     ASL    <$01
cc82: 0e 07     JMP    <$07
cc84: 0a 12     DEC    <$12
cc86: 0d 0c     TST    <$0C
cc88: 08 0a     ASL    <$0A
cc8a: 05 04     LSR    <$04
cc8c: 0e 0c     JMP    <$0C
cc8e: 01 05     NEG    <$05
cc90: 0a 04     DEC    <$04
cc92: 05 01     LSR    <$01
cc94: 12        NOP
cc95: 12        NOP
cc96: 0c 0d     INC    <$0D
cc98: 01 28     NEG    <$28
cc9a: 53        COMB
cc9b: 53        COMB
cc9c: 01 11     NEG    <$11
cc9e: 09 36     ROL    <$36
cca0: 01 02     NEG    <$02
cca2: 46        RORA
cca3: 50        NEGB
cca4: 00 87     NEG    <$87
cca6: 25 51     BCS    $CCF9
cca8: 00 81     NEG    <$81
ccaa: 35 53     PULS   CC,A,X,U
ccac: 00 70     NEG    <$70
ccae: 48        ASLA
ccaf: 99 00     ADCA   <$00
ccb1: 51        NEGB
ccb2: 80 00     SUBA   #$00
ccb4: 00 49     NEG    <$49
ccb6: 21 59     BRN    $CD11
ccb8: 00 38     NEG    <$38
ccba: 47        ASRA
ccbb: 66 00     ROR    $0,X
ccbd: 38 06     XANDCC #$06
ccbf: 55        LSRB
ccc0: 1a 01     ORCC   #$01
ccc2: 76 46 84  ROR    $4684
ccc5: bd 67 0d  JSR    $670D
ccc8: 7f 46 84  CLR    $4684
cccb: 39        RTS
cccc: 1a 01     ORCC   #$01
ccce: 76 46 84  ROR    $4684
ccd1: bd 67 24  JSR    $6724
ccd4: 7f 46 84  CLR    $4684
ccd7: 39        RTS
ccd8: 1a 01     ORCC   #$01
ccda: 76 46 84  ROR    $4684
ccdd: bd 67 26  JSR    $6726
cce0: 7f 46 84  CLR    $4684
cce3: 39        RTS
cce4: 1a 01     ORCC   #$01
cce6: 76 46 84  ROR    $4684
cce9: bd 67 61  JSR    $6761
ccec: 7f 46 84  CLR    $4684
ccef: 39        RTS
ccf0: 1a 01     ORCC   #$01
ccf2: 76 46 84  ROR    $4684
ccf5: bd 67 61  JSR    $6761
ccf8: 7f 46 84  CLR    $4684
ccfb: 39        RTS
ccfc: 1a 01     ORCC   #$01
ccfe: 76 46 84  ROR    $4684
cd01: bd 67 82  JSR    $6782
cd04: 7f 46 84  CLR    $4684
cd07: 39        RTS
cd08: 1a 01     ORCC   #$01
cd0a: 76 46 84  ROR    $4684
cd0d: bd 67 aa  JSR    $67AA
cd10: 7f 46 84  CLR    $4684
cd13: 39        RTS
cd14: 1a 01     ORCC   #$01
cd16: 76 46 84  ROR    $4684
cd19: bd 67 d2  JSR    $67D2
cd1c: 7f 46 84  CLR    $4684
cd1f: 39        RTS
cd20: 1a 01     ORCC   #$01
cd22: 76 46 84  ROR    $4684
cd25: bd 67 d4  JSR    $67D4
cd28: 7f 46 84  CLR    $4684
cd2b: 39        RTS
cd2c: 1a 01     ORCC   #$01
cd2e: 76 46 84  ROR    $4684
cd31: bd 68 19  JSR    $6819
cd34: 7f 46 84  CLR    $4684
cd37: 39        RTS
cd38: 1a 01     ORCC   #$01
cd3a: 76 46 84  ROR    $4684
cd3d: bd 68 64  JSR    $6864
cd40: 7f 46 84  CLR    $4684
cd43: 39        RTS
cd44: 1a 01     ORCC   #$01
cd46: 76 46 84  ROR    $4684
cd49: bd 68 c7  JSR    $68C7
cd4c: 7f 46 84  CLR    $4684
cd4f: 39        RTS
cd50: 1a 01     ORCC   #$01
cd52: 76 46 84  ROR    $4684
cd55: bd 69 2d  JSR    $692D
cd58: 7f 46 84  CLR    $4684
cd5b: 39        RTS
cd5c: 1a 01     ORCC   #$01
cd5e: 76 46 84  ROR    $4684
cd61: bd 69 78  JSR    $6978
cd64: 7f 46 84  CLR    $4684
cd67: 39        RTS
cd68: 1a 01     ORCC   #$01
cd6a: 76 46 84  ROR    $4684
cd6d: bd 6a 0c  JSR    $6A0C
cd70: 7f 46 84  CLR    $4684
cd73: 39        RTS
cd74: 1a 01     ORCC   #$01
cd76: 76 46 84  ROR    $4684
cd79: bd 6a a0  JSR    $6AA0
cd7c: 7f 46 84  CLR    $4684
cd7f: 39        RTS
cd80: 1a 01     ORCC   #$01
cd82: 76 46 84  ROR    $4684
cd85: bd 7d 9a  JSR    $7D9A
cd88: 7f 46 84  CLR    $4684
cd8b: 39        RTS
cd8c: 1a 01     ORCC   #$01
cd8e: 76 46 84  ROR    $4684
cd91: bd 7e af  JSR    $7EAF
cd94: 7f 46 84  CLR    $4684
cd97: 39        RTS
cd98: 47        ASRA
cd99: 56        RORB
cd9a: 47        ASRA
cd9b: 56        RORB
cd9c: 47        ASRA
cd9d: 56        RORB
cd9e: 47        ASRA
cd9f: 56        RORB
cda0: 47        ASRA
cda1: 56        RORB
cda2: 47        ASRA
cda3: 56        RORB
cda4: 47        ASRA
cda5: 56        RORB
cda6: 47        ASRA
cda7: 56        RORB
cda8: 39        RTS
cda9: 58        ASLB
cdaa: 49        ROLA
cdab: 58        ASLB
cdac: 49        ROLA
cdad: 58        ASLB
cdae: 49        ROLA
cdaf: 58        ASLB
cdb0: 49        ROLA
cdb1: 58        ASLB
cdb2: 49        ROLA
cdb3: 58        ASLB
cdb4: 49        ROLA
cdb5: 58        ASLB
cdb6: 49        ROLA
cdb7: 58        ASLB
cdb8: 49        ROLA
cdb9: 39        RTS
cdba: b7 47 00  STA    $4700
cdbd: 7d 43 20  TST    $4320
cdc0: 2b fb     BMI    $CDBD
cdc2: 39        RTS
cdc3: cc 00 00  LDD    #$0000
cdc6: ed 56     STD    -$A,U
cdc8: ed 5e     STD    -$2,U
cdca: ed 46     STD    $6,U
cdcc: ed 48     STD    $8,U
cdce: ed 4a     STD    $A,U
cdd0: ed 4c     STD    $C,U
cdd2: ed 52     STD    -$E,U
cdd4: ed 54     STD    -$C,U
cdd6: ed 58     STD    -$8,U
cdd8: ed 5c     STD    -$4,U
cdda: ed c4     STD    ,U
cddc: ed 42     STD    $2,U
cdde: 86 40     LDA    #$40
cde0: ed 50     STD    -$10,U
cde2: ed 5a     STD    -$6,U
cde4: ed 44     STD    $4,U
cde6: 39        RTS
cde7: fc 50 2a  LDD    $502A
cdea: fe 50 30  LDU    $5030
cded: fd 50 30  STD    $5030
cdf0: ff 50 2a  STU    $502A
cdf3: fc 50 2c  LDD    $502C
cdf6: fe 50 38  LDU    $5038
cdf9: fd 50 38  STD    $5038
cdfc: ff 50 2c  STU    $502C
cdff: fc 50 34  LDD    $5034
ce02: fe 50 3a  LDU    $503A
ce05: fd 50 3a  STD    $503A
ce08: ff 50 34  STU    $5034
ce0b: 39        RTS
ce0c: b7 47 02  STA    $4702
ce0f: 7f 47 01  CLR    $4701
ce12: 86 77     LDA    #$77
ce14: bd cd ba  JSR    $CDBA
ce17: 39        RTS
ce18: b7 47 02  STA    $4702
ce1b: 7f 47 01  CLR    $4701
ce1e: 86 80     LDA    #$80
ce20: bd cd ba  JSR    $CDBA
ce23: 39        RTS
ce24: cc 00 10  LDD    #$0010
ce27: fd 47 01  STD    $4701
ce2a: 86 00     LDA    #$00
ce2c: 7e cd ba  JMP    $CDBA
ce2f: cc 00 10  LDD    #$0010
ce32: fd 47 01  STD    $4701
ce35: 86 0e     LDA    #$0E
ce37: 7e cd ba  JMP    $CDBA
ce3a: cc 00 10  LDD    #$0010
ce3d: fd 47 01  STD    $4701
ce40: 86 1c     LDA    #$1C
ce42: 7e cd ba  JMP    $CDBA
ce45: dc 53     LDD    <$53
ce47: dd 54     STD    <$54
ce49: b6 47 03  LDA    $4703
ce4c: 97 53     STA    <$53
ce4e: 39        RTS
ce4f: 13        SYNC
ce50: d8 35     EORB   <$35
ce52: 8f 04 c4  XSTX   #$04C4
ce55: 55        LSRB
ce56: 52        XNCB
ce57: 46        RORA
ce58: 45        LSRA
ce59: 59        ROLB
ce5a: 20 00     BRA    $CE5C
