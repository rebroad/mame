#!/usr/bin/python
##
## license:BSD-3-Clause
## copyright-holders:MAMEdev Team
##
## Smart dependency resolver - only includes what drivers actually USE
## Not what they transitively reference
##

import re
import sys
import os

def extract_used_devices(sourcefile):
    """Extract devices/CPUs actually instantiated by drivers in this source file"""
    devices = {
        'cpus': set(),
        'sounds': set(), 
        'machines': set(),
        'videos': set(),
        'buses': set()
    }
    
    # Common device instantiation patterns
    cpu_patterns = [
        r'MCFG_CPU_ADD.*?([A-Z0-9_]+_CPU)',
        r'MCFG_DEVICE_ADD.*?([A-Z0-9_]+_CPU)',
        r'([A-Z0-9]+)\(config,\s*"[^"]+",',  # Modern config style
        r'\.set_([a-z0-9]+)_tag',  # Tag references
    ]
    
    # Known CPU types (extend as needed)
    known_cpus = {
        'Z80', 'M6502', 'M6800', 'M6809', 'M68000', 'M68010', 'M68020', 'M68030', 'M68040',
        'I8080', 'I8085', 'I8086', 'I80186', 'I80286', 'I386', 'I486', 'PENTIUM',
        'ARM', 'ARM7', 'ARM9', 'MIPS', 'SH2', 'SH4', 'POWERPC', 'MCS48', 'MCS51',
        'CDP1802', 'TMS9900', 'TMS9980', 'TMS9995', 'V20', 'V30', 'V60', 'V70',
        'COP400', 'ADSP21XX', 'DSP32C', 'DSP56K', 'TMS32010', 'TMS32025', 'TMS320C10',
        'H6280', 'HUC6280', 'UPD7810', 'UPD7807', 'NEC', 'V25', 'V33', 'V35',
    }
    
    # Known sound chips
    known_sounds = {
        'YM2151', 'YM2203', 'YM2413', 'YM2608', 'YM2610', 'YM2612', 'YM3526', 'YM3812',
        'AY8910', 'AY8912', 'SN76489', 'SN76496', 'POKEY', 'TIA', 'OKIM6295', 'OKIM6258',
        'DAC', 'SAMPLES', 'SPEAKER', 'HC55516', 'MC3418', 'TMS5220', 'VOTRAX', 'SP0256',
        'ASTROCADE', 'CEM3394', 'DISCRETE', 'FILTER_RC', 'FILTER_VOLUME',
    }
    
    # Known video chips
    known_videos = {
        'MC6845', 'MC6847', 'TMS9918', 'V9938', 'V9958', 'CRT9007', 'CRT9021', 'CRT9028',
        'I8275', 'UPD7220', 'SCN2674', 'HD63484', 'HD6445', 'SED1520',
    }
    
    # Known machine devices
    known_machines = {
        '6821PIA', '6522VIA', '6532RIOT', '6840PTM', '6850ACIA', 'MOS6530',
        '68681', 'Z80CTC', 'Z80PIO', 'Z80SIO', 'Z80DART', 'Z80DMA', 'Z80DAISY',
        'PIT8253', 'PIC8259', 'I8155', 'I8255', 'I8257', 'I8279', 'I8355',
        'BANKDEV', 'GEN_LATCH', 'INPUT_MERGER', 'OUTPUT_LATCH', 'WATCHDOG',
        'TICKET', 'TIMEKPR', 'SEGACRPT', 'NETLIST',
        'TTL7400', 'TTL7474', 'TTL74148', 'TTL74153', 'TTL74157', 'TTL74259',
        'ADC0808', 'ADC0809', 'ADC083X', 'ADC1038', 'ADC1213X',
    }
    
    try:
        with open(sourcefile, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
            
            # Find all device type references
            for pattern in cpu_patterns:
                matches = re.findall(pattern, content, re.IGNORECASE)
                for match in matches:
                    upper_match = match.upper()
                    if upper_match in known_cpus:
                        devices['cpus'].add(upper_match)
                    elif upper_match in known_sounds:
                        devices['sounds'].add(upper_match)
                    elif upper_match in known_videos:
                        devices['videos'].add(upper_match)
                    elif upper_match in known_machines:
                        devices['machines'].add(upper_match)
            
            # Look for explicit device includes
            cpu_includes = re.findall(r'#include\s+"cpu/([^/]+)/([^"]+\.h)"', content)
            for family, header in cpu_includes:
                devices['cpus'].add(family.upper())
            
            sound_includes = re.findall(r'#include\s+"sound/([^"]+\.h)"', content)
            for header in sound_includes:
                device = header.replace('.h', '').upper()
                devices['sounds'].add(device)
                
    except Exception as e:
        sys.stderr.write(f'Error analyzing {sourcefile}: {e}\n')
    
    return devices

def scan_smart_dependencies(root, sources, depth_limit=2):
    """
    Smart dependency scanner - only includes direct dependencies and
    actually-used devices, not everything transitively.
    
    depth_limit: How many levels of #include to follow
                 0 = only driver source
                 1 = driver + direct includes
                 2 = driver + direct + their includes (reasonable)
    """
    seen = set()
    
    def locate_include(path, incdir_bases):
        split = []
        for part in path.split('/'):
            if part and part != '.':
                if part != '..':
                    split.append(part)
                elif split:
                    split.pop()
        
        for incdir in incdir_bases:
            components = incdir + tuple(split)
            fullpath = os.path.join(root, *components)
            if os.path.isfile(fullpath):
                return '/'.join(components)
        return None
    
    def scan_includes(filepath, current_depth):
        if current_depth > depth_limit or filepath in seen:
            return
        
        seen.add(filepath)
        
        # Don't transitively follow device headers beyond depth limit
        components = filepath.split('/')
        if current_depth >= depth_limit and len(components) > 2:
            if components[1] in ('devices', 'lib') and current_depth > 1:
                return  # Stop following device headers
        
        fullpath = os.path.join(root, filepath)
        if not os.path.isfile(fullpath):
            return
        
        try:
            with open(fullpath, 'r', encoding='utf-8', errors='ignore') as f:
                for line in f:
                    # Look for #include "..." statements
                    match = re.search(r'#include\s+"([^"]+)"', line)
                    if match:
                        include_path = match.group(1)
                        
                        # Build include search paths based on current file location
                        file_components = tuple(filepath.split('/')[:-1])
                        include_bases = [
                            file_components,  # Relative to current file
                            ('src', 'devices'),  # devices dir
                            ('src', 'mame', 'shared'),  # shared dir
                            ('src', 'lib'),  # lib dir  
                            ('src', 'emu'),  # emu dir
                            ('src', 'osd'),  # osd dir
                        ]
                        
                        found_path = locate_include(include_path, include_bases)
                        if found_path and found_path not in seen:
                            # Check for sibling implementation files
                            base_path = found_path.rsplit('.', 1)[0]
                            for ext in ['.cpp', '.ipp', '.hxx']:
                                sibling = base_path + ext
                                if os.path.isfile(os.path.join(root, sibling)):
                                    seen.add(sibling)
                            
                            # Recursively scan the included file
                            scan_includes(found_path, current_depth + 1)
                            
        except Exception as e:
            sys.stderr.write(f'Warning: Error scanning {filepath}: {e}\n')
    
    # Start with the driver sources
    for source in sources:
        source_path = '/'.join(x for x in split_path(source) if x)
        scan_includes(source_path, 0)
    
    return seen


def split_path(path):
    components = []
    while True:
        path, basename = os.path.split(path)
        if basename:
            components.append(basename)
        else:
            if path:
                components.append(path)
            return tuple(reversed(components))


if __name__ == '__main__':
    # Test the smart dependency scanner
    if len(sys.argv) < 2:
        print("Usage: smartdep.py <source1.cpp> [source2.cpp] ...")
        sys.exit(1)
    
    root = os.getcwd()
    deps = scan_smart_dependencies(root, sys.argv[1:], depth_limit=2)
    
    print(f"# Smart dependencies ({len(deps)} files)")
    for dep in sorted(deps):
        print(dep)

