#!/usr/bin/env python3
import os
from assembly_to_cpp_converter import AssemblyToCppConverter

ROM = 'complete_memory_map.bin'
START = 0xD91A
BYTES = 256

def main():
    if not os.path.exists(ROM):
        print(f"ROM file not found: {ROM}")
        return
    conv = AssemblyToCppConverter(ROM)
    instrs = conv.disassemble_6809(START, BYTES)
    out = []
    out.append(f"# Disassembly @ $ {START:04X}\n")
    for addr, ins, size in instrs:
        out.append(f"- ${addr:04X}: {ins}")
    with open('rom_disasm_d91a.md', 'w') as f:
        f.write('\n'.join(out) + '\n')
    print(f"Wrote rom_disasm_d91a.md with {len(instrs)} instructions")

if __name__ == '__main__':
    main()


