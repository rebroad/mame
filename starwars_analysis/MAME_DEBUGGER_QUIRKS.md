# MAME Debugger Quirks and Gotchas

## PC Address Reporting for Multi-Byte Writes

### The Issue
When using MAME's debugger to trace memory writes, the PC address reported for multi-byte operations (like `STD` - Store Double) refers to the **second byte write**, not the first.

### Example: Star Wars PA/PB Writes

**ROM Disassembly (correct):**
```
61D3: CC 02 1F     LDD    #$021F
61D6: FD 50 22     STD    $5022    ; Writes 0x02 to 0x5022, then 0x1F to 0x5023
61D9: CC 3F F7     LDD    #$3FF7
61DC: FD 50 24     STD    $5024    ; Writes 0x3F to 0x5024, then 0xF7 to 0x5025
```

**MAME Debugger Output:**
```
W 5022 02 @61D9    ; Shows PC=0x61D9 for the 0x02 write to 0x5022
W 5023 1F @61D9    ; Shows PC=0x61D9 for the 0x1F write to 0x5023
W 5024 3F @61DF    ; Shows PC=0x61DF for the 0x3F write to 0x5024  
W 5025 F7 @61DF    ; Shows PC=0x61DF for the 0xF7 write to 0x5025
```

### Why This Happens
The MAME debugger captures memory writes as they occur. For a `STD` instruction:
1. First byte is written at the instruction's PC address
2. Second byte is written at PC + 3 (after the `STD` instruction)
3. The debugger reports the PC address of the **second byte write**

### Impact on C++ Conversion
When converting ROM code to C++, always use the **ROM disassembly addresses** (PC=0x61D3, PC=0x61D9) not the MAME trace addresses (PC=0x61D9, PC=0x61DF).

### General Rule
For any multi-byte memory operation in MAME traces:
- Subtract the instruction length from the reported PC address to get the actual instruction address
- For `STD` (3-byte instruction): subtract 3 from the reported PC
- For `LDD` (3-byte instruction): subtract 3 from the reported PC
- Always verify against ROM disassembly

### Verification
When in doubt, cross-reference MAME traces with ROM disassembly using `unidasm` or similar tools to get the correct PC addresses.
