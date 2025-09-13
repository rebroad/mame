#!/usr/bin/env python3
"""
Unidasm Wrapper

This module provides a clean, consistent interface to the unidasm disassembler
with proper error handling and the dd skip method for accurate disassembly.

This is the single source of truth for all unidasm calls in the project.
"""

import subprocess
import tempfile
import os
from typing import List, Optional, Tuple
from pathlib import Path

def run_unidasm(rom_file: str, start_addr: str, end_addr: Optional[str] = None, arch: str = "m6809") -> List[str]:
    """
    Run unidasm on a specific address range using dd to extract the window.
    
    This method uses the dd skip technique to ensure unidasm can properly
    find the start of code, which it struggles with when given raw addresses.
    
    Args:
        rom_file: Path to the ROM file
        start_addr: Start address (hex string, e.g., "0xf448")
        end_addr: Optional end address (hex string)
        arch: Architecture (default: "m6809")
    
    Returns:
        List of disassembly lines
        
    Raises:
        FileNotFoundError: If unidasm is not found
        subprocess.CalledProcessError: If unidasm fails
        ValueError: If addresses are invalid
    """
    try:
        start_int = int(start_addr, 16)
        
        # Calculate the number of bytes to extract
        if end_addr:
            end_int = int(end_addr, 16)
            count = end_int - start_int + 1  # Include the end address
        else:
            # Default to 512 bytes if no end address specified
            count = 512
        
        # Use dd to extract the specific byte range
        with tempfile.NamedTemporaryFile(delete=False, suffix='.bin') as temp_file:
            temp_file_path = temp_file.name
        
        try:
            # Extract the byte range using dd
            dd_cmd = ["dd", f"if={rom_file}", f"of={temp_file_path}", f"bs=1", f"skip={start_int}", f"count={count}"]
            dd_result = subprocess.run(dd_cmd, capture_output=True, text=True, check=True)
            
            # Run unidasm on the extracted window with correct base address
            unidasm_cmd = ["unidasm", "-arch", arch, temp_file_path, "-basepc", start_addr]
            unidasm_result = subprocess.run(unidasm_cmd, capture_output=True, text=True, check=True, timeout=30)
            
            lines = []
            for line in unidasm_result.stdout.split('\n'):
                line = line.strip()
                if line and not line.startswith(';'):
                    # unidasm with -basepc already shows correct absolute addresses
                    lines.append(line)
            
            return lines
            
        finally:
            # Clean up temporary file
            if os.path.exists(temp_file_path):
                os.unlink(temp_file_path)
                
    except subprocess.CalledProcessError as e:
        if "unidasm" in str(e):
            raise FileNotFoundError("Error: unidasm not found. Please install unidasm.")
        else:
            raise
    except ValueError as e:
        raise ValueError(f"Invalid address format: {e}")

def find_intelligent_boundaries(rom_file: str, start_addr: str, arch: str = "m6809") -> Tuple[Optional[str], set]:
    """
    Find routine boundaries using intelligent analysis that considers jump targets.
    
    Args:
        rom_file: Path to the ROM file
        start_addr: Start address (hex string)
        arch: Architecture (default: "m6809")
    
    Returns:
        Tuple of (end_address, external_targets_set)
    """
    try:
        # Get disassembly for a reasonable range (use larger default for long routines)
        # For boundary detection, we need a larger range to find the actual end
        start_int = int(start_addr, 16)
        end_addr = f"{start_int + 2048:04X}"  # Use 2048 bytes instead of 512
        lines = run_unidasm(rom_file, start_addr, end_addr, arch=arch)
        
        start_int = int(start_addr, 16)
        end_candidates = []
        jump_targets = set()
        
        for i, line in enumerate(lines):
            if not re.match(r'^[0-9a-f]+:', line, re.IGNORECASE):
                continue
                
            addr_match = re.match(r'^([0-9a-f]+):', line, re.IGNORECASE)
            if not addr_match:
                continue
                
            addr = addr_match.group(1)
            addr_int = int(addr, 16)
            
            # Skip if we haven't reached the start address yet
            if addr_int < start_int:
                continue
            
            # Collect jump targets from this line
            branch_matches = re.findall(r'\b(BEQ|BNE|BCC|BCS|BVC|BVS|BMI|BPL|BHI|BLS|BGE|BLT|BGT|BLE|BRA)\s+\$?([0-9A-Fa-f]{4})\b', line, re.IGNORECASE)
            for _, target in branch_matches:
                jump_targets.add(target.lower())
            
            # Look for end boundary instructions
            if re.search(r'\b(39.*RTS|3b.*RTI|3f.*SWI)\b', line, re.IGNORECASE):
                # Check if the next address is a jump target
                next_addr = f"{addr_int + 1:04x}".lower()
                
                # Only stop at RTS if the next address is not a jump target
                if next_addr not in jump_targets:
                    end_candidates.append((addr, addr_int, "return"))
            elif re.search(r'\b(7e.*JMP)\b', line, re.IGNORECASE):
                # Check if it's a jump to self (infinite loop) or external jump
                jmp_target = _extract_jump_target(line)
                if jmp_target and jmp_target.lower() == addr.lower():
                    end_candidates.append((addr, addr_int, "infinite_loop"))
                elif jmp_target:
                    # External jump - this might be the end
                    end_candidates.append((addr, addr_int, "external_jump"))
            elif re.search(r'\b(20.*BRA|16.*LBRA)\b', line, re.IGNORECASE):
                # Only consider BRA as routine end if it's jumping far away (external jump)
                bra_target = _extract_branch_target(line)
                if bra_target:
                    try:
                        target_int = int(bra_target, 16)
                        # Only consider it a boundary if it's jumping far away (more than 128 bytes)
                        # Short BRA instructions are internal control flow, not routine boundaries
                        if abs(target_int - addr_int) > 128:
                            end_candidates.append((addr, addr_int, "branch"))
                    except ValueError:
                        pass
        
        if not end_candidates:
            return None, set()
        
        # Prioritize end candidates: return > external_jump > branch > infinite_loop
        priority_order = ["return", "external_jump", "branch", "infinite_loop"]
        
        for priority in priority_order:
            # Find the FIRST (closest) boundary of this priority type
            first_boundary = None
            for addr, addr_int, reason in end_candidates:
                if reason == priority:
                    if first_boundary is None or addr_int < first_boundary[1]:
                        first_boundary = (addr, addr_int, reason)
            
            if first_boundary:
                addr, addr_int, reason = first_boundary
                # Filter jump targets that are outside the routine range
                end_int = addr_int
                external_targets = {target for target in jump_targets 
                                  if int(target, 16) < start_int or int(target, 16) > end_int}
                return addr, external_targets
        
        # Fallback: return the first candidate
        end_int = end_candidates[0][1]
        external_targets = {target for target in jump_targets 
                          if int(target, 16) < start_int or int(target, 16) > end_int}
        return end_candidates[0][0], external_targets
        
    except Exception as e:
        print(f"Error finding routine boundaries: {e}")
        return None, set()

def find_routine_end(rom_file: str, start_addr: str, arch: str = "m6809") -> Optional[str]:
    """
    Find the end of a routine using intelligent boundary detection.
    
    Args:
        rom_file: Path to the ROM file
        start_addr: Start address (hex string)
        arch: Architecture (default: "m6809")
    
    Returns:
        End address as hex string, or None if not found
    """
    end_addr, _ = find_intelligent_boundaries(rom_file, start_addr, arch)
    return end_addr

def _extract_jump_target(line: str) -> Optional[str]:
    """Extract the target address from a JMP instruction"""
    match = re.search(r'\b7e\s+([0-9a-f]+)\b', line, re.IGNORECASE)
    if match:
        return match.group(1)
    return None

def _extract_branch_target(line: str) -> Optional[str]:
    """Extract the target address from a BRA instruction"""
    # Match BRA $XXXX pattern
    match = re.search(r'\b20\s+([0-9a-f]{4})\b', line, re.IGNORECASE)
    if match:
        return match.group(1)
    # Match LBRA $XXXX pattern  
    match = re.search(r'\b16\s+([0-9a-f]{4})\b', line, re.IGNORECASE)
    if match:
        return match.group(1)
    return None

def run_unidasm_full(rom_file: str, arch: str = "m6809") -> List[str]:
    """
    Run unidasm on the entire ROM file.
    
    Args:
        rom_file: Path to the ROM file
        arch: Architecture (default: "m6809")
    
    Returns:
        List of all disassembly lines
    """
    try:
        result = subprocess.run(["unidasm", "-arch", arch, rom_file], 
                              capture_output=True, text=True, check=True, timeout=30)
        return result.stdout.split('\n')
    except subprocess.CalledProcessError as e:
        if "unidasm" in str(e):
            raise FileNotFoundError("Error: unidasm not found. Please install unidasm.")
        else:
            raise

def validate_unidasm() -> bool:
    """
    Check if unidasm is available and working.
    
    Returns:
        True if unidasm is available, False otherwise
    """
    try:
        subprocess.run(["unidasm", "--help"], capture_output=True, check=True)
        return True
    except (subprocess.CalledProcessError, FileNotFoundError):
        return False

# Import regex for the find_routine_end function
import re
