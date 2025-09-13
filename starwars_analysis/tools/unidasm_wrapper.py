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
            count = end_int - start_int
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

def find_routine_end(rom_file: str, start_addr: str, arch: str = "m6809") -> Optional[str]:
    """
    Find the end of a routine by looking for common termination patterns.
    
    Args:
        rom_file: Path to the ROM file
        start_addr: Start address (hex string)
        arch: Architecture (default: "m6809")
    
    Returns:
        End address as hex string, or None if not found
    """
    try:
        # Get disassembly for a reasonable range
        lines = run_unidasm(rom_file, start_addr, arch=arch)
        
        # Look for common termination patterns
        termination_patterns = [
            r'RTS',           # Return from subroutine
            r'RTI',           # Return from interrupt
            r'JMP\s+\$([0-9A-Fa-f]+)',  # Jump to another routine
            r'BRA\s+\$([0-9A-Fa-f]+)',  # Branch to another routine
        ]
        
        for i, line in enumerate(lines):
            for pattern in termination_patterns:
                if re.search(pattern, line):
                    # Extract address from the line
                    addr_match = re.search(r'([0-9A-Fa-f]{4,6})', line)
                    if addr_match:
                        return addr_match.group(1)
        
        # If no clear termination found, return None
        return None
        
    except Exception as e:
        print(f"Error finding routine end: {e}")
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
