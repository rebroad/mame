# Archived Star Wars ROM Files

This directory contains ROM files that are **NOT USED** in the current conversion project.

## Directory Structure

### `original_starwars/`
- Contains the original Star Wars ROM files
- MAME version: `starwars`
- ROM file: `136021.214.1f` (16KB)
- **DO NOT USE** - This is not the version we're converting

### `older_starwars/`
- Contains older Star Wars ROM files
- MAME version: `starwarso`
- ROM file: `136021-114.1f` (16KB)
- **DO NOT USE** - This is not the version we're converting

## Active ROM Files

The ROM files we're actually using are in the parent directory:
- `starwars_rev1_main_cpu.bin` - Main CPU ROM for Star Wars revision 1
- `starwars_rev1_rom.bin` - Original ROM file (same as above)

## Why These Are Archived

These ROM files contain different code that doesn't match our MAME trace. We're specifically targeting Star Wars revision 1 (`starwars1` in MAME) which uses the files in the parent directory.
