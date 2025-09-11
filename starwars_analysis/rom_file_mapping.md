# Star Wars ROM File Mapping

## Critical Finding: Use the Correct ROM File!

**ALWAYS use `main_cpu_rom_alt.bin` for disassembly work that needs to match MAME traces.**

## ROM File Mapping

### Main CPU ROMs
- **`main_cpu_rom.bin`** = `136021.214.1f` (16KB) - Original Star Wars (`starwars`)
- **`main_cpu_rom_alt.bin`** = `136021.114.1f` (16KB) - Star Wars revision 1 (`starwars1`)

### MAME Version Mapping
- **`starwars`** (original): Uses `136021.214.1f` at 0x6000
- **`starwars1`** (revision 1): Uses `136021.114.1f` at 0x6000
- **`starwarso`** (older): Uses `136021-114.1f` at 0x6000

### Why This Matters
The MAME trace we captured shows:
- PC=0x61D9: writes PA=0x021F to 0x5022
- PC=0x61DF: writes PB=0x3FF7 to 0x5024

This matches the unidasm output from `main_cpu_rom_alt.bin` at offset 0x01D4:
```
6000: 02 1f     XNC    <$1F
6002: fd 50 22  STD    $5022
6005: cc 3f f7  LDD    #$3FF7
6008: fd 50 24  STD    $5024
```

The `main_cpu_rom.bin` contains different code that doesn't match the MAME trace.

## Do We Need main_cpu_rom.bin?

**No, we don't need `main_cpu_rom.bin` for this project.** We're converting the revision 1 version (`starwars1`) which uses `main_cpu_rom_alt.bin`.

## Action Items
1. Always use `main_cpu_rom_alt.bin` for disassembly
2. Update `complete_memory_map.bin` to use the correct ROM file
3. Document which MAME version we're targeting (`starwars1`)
