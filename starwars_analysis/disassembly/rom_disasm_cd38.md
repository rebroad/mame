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
cdc0: 2b fb     BMI    $0085
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
ce5a: 20 47     BRA    $016B
ce5c: 4f        CLRA
ce5d: 54        LSRB
ce5e: 20 57     BRA    $017F
ce60: 49        ROLA
ce61: 52        XNCB
ce62: 45        LSRA
ce63: 44        LSRA
ce64: a7 3e     STA    -$2,Y
ce66: ff ff ff  STU    $FFFF
ce69: ff ff ff  STU    $FFFF
ce6c: ff ff ff  STU    $FFFF
ce6f: ff ff ff  STU    $FFFF
ce72: ff ff ff  STU    $FFFF
ce75: ff ff ff  STU    $FFFF
ce78: ff ff ff  STU    $FFFF
ce7b: ff ff ff  STU    $FFFF
ce7e: ff ff ff  STU    $FFFF
ce81: ff ff ff  STU    $FFFF
ce84: ff ff ff  STU    $FFFF
ce87: ff ff ff  STU    $FFFF
ce8a: ff ff ff  STU    $FFFF
ce8d: ff ff ff  STU    $FFFF
ce90: ff ff ff  STU    $FFFF
ce93: ff ff ff  STU    $FFFF
ce96: ff ff ff  STU    $FFFF
ce99: ff ff ff  STU    $FFFF
ce9c: ff ff ff  STU    $FFFF
ce9f: ff ff ff  STU    $FFFF
cea2: ff ff ff  STU    $FFFF
cea5: ff ff ff  STU    $FFFF
cea8: ff ff ff  STU    $FFFF
ceab: ff ff ff  STU    $FFFF
ceae: ff ff ff  STU    $FFFF
ceb1: ff ff ff  STU    $FFFF
ceb4: ff ff ff  STU    $FFFF
ceb7: ff ff ff  STU    $FFFF
ceba: ff ff ff  STU    $FFFF
cebd: ff ff ff  STU    $FFFF
cec0: ff ff ff  STU    $FFFF
cec3: ff ff ff  STU    $FFFF
cec6: ff ff ff  STU    $FFFF
cec9: ff 43 4f  STU    $434F
cecc: 50        NEGB
cecd: 59        ROLB
cece: 52        XNCB
cecf: 49        ROLA
ced0: 47        ASRA
ced1: 48        ASLA
ced2: 54        LSRB
ced3: 20 31     BRA    $01CE
ced5: 39        RTS
ced6: 38 33     XANDCC #$33
ced8: 20 41     BRA    $01E3
ceda: 54        LSRB
cedb: 41        NEGA
cedc: 52        XNCB
cedd: 49        ROLA
cede: 1a f6     ORCC   #$F6
cee0: 1d        SEX
cee1: a8 00     EORA   $0,X
cee3: 00 e2     NEG    <$E2
cee5: 08 1f     ASL    <$1F
cee7: 7e e0 00  JMP    $E000
ceea: 00 00     NEG    <$00
ceec: ff 74 bb  STU    $74BB
ceef: 91 1e     CMPA   <$1E
cef1: c0 ff     SUBB   #$FF
cef3: ce bb 8b  LDU    #$BB8B
cef6: 00 00     NEG    <$00
cef8: ff 4c bb  STU    $4CBB
cefb: 91 01     CMPA   <$01
cefd: 40        NEGA
cefe: e0 50     SUBB   -$10,U
cf00: 00 00     NEG    <$00
cf02: ff 4c 51  STU    $4C51
cf05: fb 1f ec  ADDB   $1FEC
cf08: e0 32     SUBB   -$E,Y
cf0a: 1f a6     TFR    CC,inv
cf0c: e0 32     SUBB   -$E,Y
cf0e: bb 91 1f  ADDA   $911F
cf11: b0 ff ec  SUBA   $FFEC
cf14: bb 91 1f  ADDA   $911F
cf17: 9c ff     CMPX   <$FF
cf19: 88 bb     EORA   #$BB
cf1b: 8b 00     ADDA   #$00
cf1d: 00 fe     NEG    <$FE
cf1f: 0c bb     INC    <$BB
cf21: 8b 00     ADDA   #$00
cf23: 8c e0 5a  CMPX   #$E05A
cf26: 00 00     NEG    <$00
cf28: e1 40     CMPB   $0,U
cf2a: 4a        DECA
cf2b: e5 00     BITB   $0,X
cf2d: 14        XHCF
cf2e: ff d8 bb  STU    $D8BB
cf31: 85 00     BITA   #$00
cf33: 5a        DECB
cf34: ff ce bb  STU    $CEBB
cf37: 8b 1a     ADDA   #$00
