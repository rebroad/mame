#!/usr/bin/env node

/**
 * VVF Player Debug Tool
 *
 * Launches the VVF player in Chrome with full console logging and error reporting.
 *
 * Usage:
 *   ./debug_vvf_player.js                    # Opens player, manual file selection
 *   ./debug_vvf_player.js starwars.vvf       # Opens player and auto-loads file
 *   ./debug_vvf_player.js /path/to/file.vvf  # Opens player with absolute path
 */

const puppeteer = require('puppeteer');
const fs = require('fs');
const path = require('path');

(async () => {
  console.log('🎮 VVF Player Debug Tool');
  console.log('========================\n');

  // Parse command line arguments
  const args = process.argv.slice(2);
  const vvfFile = args[0]; // Optional VVF file path

  if (vvfFile) {
    // Resolve to absolute path
    const absPath = path.resolve(vvfFile);
    if (fs.existsSync(absPath)) {
      console.log(`📁 VVF File: ${absPath}`);
    } else {
      console.error(`❌ VVF file not found: ${absPath}`);
      process.exit(1);
    }
  }

  const browser = await puppeteer.launch({
    headless: false, // Show browser for debugging
    args: [
      '--no-sandbox',
      '--disable-web-security', // Allow local file access
      '--allow-file-access-from-files'
    ]
  });

  const page = await browser.newPage();

  // Enable console logging
  page.on('console', msg => {
    const type = msg.type();
    const text = msg.text();
    const timestamp = new Date().toISOString().split('T')[1].slice(0, -1);

    const emoji = {
      'log': '📝',
      'info': 'ℹ️',
      'warn': '⚠️',
      'error': '❌',
      'debug': '🐛'
    }[type] || '💬';

    console.log(`${emoji} [${timestamp}] ${text}`);
  });

  // Capture page errors with full details
  page.on('pageerror', error => {
    console.log('\n🔥 PAGE ERROR DETECTED:\n');
    console.log(`  Message: ${error.message}`);
    console.log(`  Name: ${error.name}`);

    if (error.stack) {
      console.log('\n  Stack Trace:');
      const stackLines = error.stack.split('\n');

      // Try to extract line numbers from various formats
      let lineNumber = null;
      let fileName = null;

      stackLines.forEach(line => {
        console.log(`    ${line}`);

        // Try different patterns for line numbers
        const patterns = [
          /vvf_player\.html:(\d+):(\d+)/,           // vvf_player.html:297:29
          /file:\/\/.*?vvf_player\.html:(\d+)/,     // file:///path/vvf_player.html:297
          /:(\d+):(\d+)\)?$/,                       // :297:29) or :297:29
          /\(.*?:(\d+):(\d+)\)/,                    // (file://path:297:29)
        ];

        for (const pattern of patterns) {
          const match = line.match(pattern);
          if (match && !lineNumber) {
            lineNumber = match[1];
            if (line.includes('vvf_player.html')) {
              fileName = 'vvf_player.html';
            }
          }
        }
      });

      if (lineNumber) {
        console.log(`\n  ⚡ Error at line: ${lineNumber}${fileName ? ` in ${fileName}` : ''}`);
      } else {
        console.log(`\n  ⚠️  Could not extract line number from stack trace`);
      }
    }
    console.log('');
  });

  // Capture unhandled promise rejections
  page.on('response', async response => {
    const status = response.status();
    if (status >= 400) {
      console.log(`⚠️  HTTP ${status}: ${response.url()}`);
    }
  });

  try {
    // Get absolute path to vvf_player.html
    const playerPath = path.join(__dirname, 'vvf_player.html');

    if (!fs.existsSync(playerPath)) {
      console.error(`❌ vvf_player.html not found at: ${playerPath}`);
      process.exit(1);
    }

    console.log(`📄 Loading player: ${playerPath}\n`);

    // Load the player
    await page.goto(`file://${playerPath}`, {
      waitUntil: 'networkidle0',
      timeout: 10000
    });

    console.log('✅ Player loaded successfully!\n');

    // If VVF file provided, auto-load it
    if (vvfFile) {
      const absPath = path.resolve(vvfFile);
      console.log(`🎬 Auto-loading VVF file...\n`);

      // Inject file loading script
      await page.evaluate(async (filePath) => {
        try {
          // Read file via fetch (works with file:// protocol)
          const response = await fetch(`file://${filePath}`);
          const arrayBuffer = await response.arrayBuffer();

          console.log(`📦 File loaded: ${arrayBuffer.byteLength} bytes`);

          // Parse VVF
          vvfData = parseVVF(arrayBuffer);

          if (vvfData) {
            console.log('✅ VVF parsed successfully!');
            console.log(`  Frames: ${vvfData.header.totalFrames}`);
            console.log(`  Duration: ${(vvfData.header.durationUs / 1000000).toFixed(2)}s`);
            console.log(`  Frame Rate: ${vvfData.header.frameRate / 1000} Hz`);
            console.log(`  Native Size: ${vvfData.header.nativeWidth}×${vvfData.header.nativeHeight}`);
            console.log(`  VVF Size: ${vvfData.header.vvfWidth}×${vvfData.header.vvfHeight}`);

            setupCanvas();
            updateFileInfo();
            document.getElementById('playPauseBtn').disabled = false;
            document.getElementById('stopBtn').disabled = false;
            document.getElementById('statusText').textContent = 'Ready';

            // Log button state
            const playBtn = document.getElementById('playPauseBtn');
            console.log(`▶️  Play button enabled: ${!playBtn.disabled}`);
          } else {
            console.error('❌ Failed to parse VVF file');
          }
        } catch (error) {
          console.error('❌ Error loading file:', error.message);
          console.error('Stack:', error.stack);
        }
      }, absPath);

      // Auto-click play button after a short delay
      setTimeout(async () => {
        console.log('🎬 Auto-clicking Play button...');
        await page.evaluate(() => {
          const playBtn = document.getElementById('playPauseBtn');
          if (playBtn && !playBtn.disabled) {
            console.log('▶️  Clicking play button');
            playBtn.click();
          } else {
            console.error('❌ Play button not available or disabled');
          }
        });
      }, 1000);
    }

    // Wait for user interaction or errors
    console.log('👁️  Monitoring player (press Ctrl+C to exit)...\n');

    // Keep script running
    await new Promise(() => {});

  } catch (error) {
    console.error(`\n❌ Fatal error: ${error.message}`);
    if (error.stack) {
      console.error(`Stack: ${error.stack}`);
    }
    await browser.close();
    process.exit(1);
  }
})();

