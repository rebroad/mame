# Old Implementation Archive

## What This Contains
- **C++ implementation** based on faulty disassembly data
- **Disassembly files** generated from incorrect routine addresses
- **Game logic** based on wrong understanding of ROM routines

## Why It Was Archived
- All routine addresses were incorrect (e.g., 6EA2 was actually at 0x0EA2, not 0x6EA2)
- Disassembly files contained code fragments, not complete routines
- C++ implementations were based on non-existent routines
- The entire foundation was built on faulty data

## What We Learned
- UNIDASM is not faulty - it works exactly as designed
- The problem was incorrect assumptions about routine locations
- Validation tools are essential to catch such issues
- Always verify routine boundaries before implementing C++ code
- MAME trace matching was misleading - we were comparing hardware outputs, not ROM code

## Date Archived
Thu Sep 11 10:14:39 PM BST 2025

## Next Steps
- Find actual routine addresses in the ROM
- Regenerate disassembly files from correct addresses
- Implement C++ code based on real, validated routines
- Trace actual ROM execution, not just hardware port writes
