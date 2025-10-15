#!/usr/bin/python
##
## license:BSD-3-Clause
## copyright-holders:MAMEdev Team
##
## Minimal dependency resolver for specific drivers
## Only includes CPUs/devices actually used by the specified drivers
##

import re
import sys
import os

def extract_driver_machines(sourcefile, drivers):
    """Extract MACHINE_CONFIG for specific drivers only"""
    configs = {}
    current_driver = None
    in_machine_config = False
    machine_lines = []
    
    with open(sourcefile, 'r', encoding='utf-8', errors='ignore') as f:
        for line in f:
            # Look for GAME/COMP/CONS declarations
            match = re.search(r'\b(GAME|COMP|CONS|SYST)\s*\(\s*\w+\s*,\s*(\w+)', line)
            if match:
                driver_name = match.group(2)
                if driver_name in drivers:
                    current_driver = driver_name
                    configs[driver_name] = {'cpus': set(), 'sounds': set(), 'machines': set(), 'videos': set()}
            
            # Extract device references within this driver's scope
            if current_driver:
                # CPU references
                for cpu in re.findall(r'MCFG_CPU_ADD.*?(\w+_CPU_\w+|Z80|M6502|M68000|I8080)', line):
                    configs[current_driver]['cpus'].add(cpu)
                for cpu in re.findall(r'(?:Z80|M6502|M6809|M68000|I8086|ARM|MIPS|SH|POWERPC|SPARC)\(', line):
                    configs[current_driver]['cpus'].add(cpu)
                
                # Sound references  
                for sound in re.findall(r'(YM\w+|AY8910|SN76\w+|POKEY|TIA|OKIM6295|DAC)', line):
                    configs[current_driver]['sounds'].add(sound)
    
    return configs

def generate_minimal_filter(root, drivers_list):
    """Generate minimal .flt for specific drivers"""
    drivers = set(line.strip() for line in drivers_list if line.strip())
    
    # Find which source files contain these drivers
    mame_lst = os.path.join(root, 'src', 'mame', 'mame.lst')
    source_files = set()
    current_source = None
    
    with open(mame_lst, 'r') as f:
        for line in f:
            line = line.strip()
            if line.startswith('@source:'):
                current_source = line.split(':', 1)[1]
            elif line in drivers and current_source:
                source_files.add(current_source)
    
    print(f"// Minimal filter for drivers: {', '.join(sorted(drivers))}")
    for src in sorted(source_files):
        print(f'"{src}"')

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: minimal_driver_deps.py <driver1> [driver2] ...")
        sys.exit(1)
    
    root = os.getcwd()
    generate_minimal_filter(root, sys.argv[1:])

