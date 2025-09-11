# Star Wars ROM File Mapping

## Critical Finding: Use the Correct ROM File!

**ALWAYS use `starwars_rev1_main_cpu.bin` for disassembly work that needs to match MAME traces.**

## ROM File Mapping

### Main CPU ROMs (Active)
- **`starwars_rev1_main_cpu.bin`** = `starwars_rev1_rom.bin` (16KB) - Star Wars revision 1 (`starwars1`) - **THIS IS THE ONE WE USE**

### Archived ROMs (Not Used)
- **`archive/original_starwars/main_cpu_rom.bin`** = `archive/original_starwars/136021.214.1f` (16KB) - Original Star Wars (`starwars`)
- **`archive/older_starwars/136021-114.1f`** (16KB) - Older Star Wars (`starwarso`)

### MAME Version Mapping
- **`starwars`** (original): Uses `136021.214.1f` at 0x6000
- **`starwars1`** (revision 1): Uses `136021.114.1f` at 0x6000
- **`starwarso`** (older): Uses `136021-114.1f` at 0x6000

### Why This Matters
The MAME trace we captured shows:
- PC=0x61D9: writes PA=0x021F to 0x5022
- PC=0x61DF: writes PB=0x3FF7 to 0x5024

This matches the unidasm output from `starwars_rev1_main_cpu.bin` at offset 0x01D4:
```
6000: 02 1f     XNC    <$1F
6002: fd 50 22  STD    $5022
6005: cc 3f f7  LDD    #$3FF7
6008: fd 50 24  STD    $5024
```

The archived `main_cpu_rom.bin` contains different code that doesn't match the MAME trace.

## Do We Need the Archived ROMs?

**No, we don't need the archived ROMs for this project.** We're converting the revision 1 version (`starwars1`) which uses `starwars_rev1_main_cpu.bin`.

## Important Notes

### MAME Debugger Quirk
When comparing MAME traces with ROM disassembly, be aware that MAME debugger reports PC addresses for multi-byte writes as the address of the second byte write, not the first. See `MAME_DEBUGGER_QUIRKS.md` for details.

### Action Items
1. Always use `starwars_rev1_main_cpu.bin` for disassembly
2. Update `complete_memory_map.bin` to use the correct ROM file
3. Document which MAME version we're targeting (`starwars1`)
4. Keep archived ROMs for reference but don't use them
5. **Always use ROM disassembly addresses, not MAME trace addresses for PC values**
