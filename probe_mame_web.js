#!/usr/bin/env node

const puppeteer = require('puppeteer');
const fs = require('fs');
const path = require('path');

(async () => {
  console.log('🔍 Probing MAME WebAssembly build...');

  // Parse command line arguments
  const args = process.argv.slice(2); // Remove 'node' and script name
  const nothrot = args.includes('-nothrot');

  // Get URL from command line arguments (first non-flag argument that's NOT a number)
  const urlArg = args.find(arg => !arg.startsWith('-') && isNaN(parseInt(arg)));

  // Filter out flags to get the port number (for localhost fallback)
  const portArg = args.find(arg => !arg.startsWith('-') && !isNaN(parseInt(arg)));

  const browserArgs = [
	'--no-sandbox' // Required for Ubuntu 23.10+ with AppArmor restrictions
  ];

  if (nothrot) {
	browserArgs.push('--disable-frame-rate-limit');
	console.log('🚫 Chrome frame rate limiting disabled (--disable-frame-rate-limit)');
  }

  const browser = await puppeteer.launch({
	headless: false, // Set to true for headless mode
	args: browserArgs
  });

  // Get the first available page or create a new one
  const pages = await browser.pages();
  let page;

  if (pages.length > 0) {
	page = pages[0];
	// Close any additional tabs
	for (let i = 1; i < pages.length; i++) {
	  await pages[i].close();
	}
  } else {
	page = await browser.newPage();
  }

  try {
	// Determine target URL
	let targetUrl = urlArg;

	if (!targetUrl) {
		// No URL provided, try to read port from file first, then fall back to command line argument
		let port = portArg; // Command line argument takes precedence

		if (!port) {
			// Try to read from .mame_web_port file
			const portFile = path.join(__dirname, '.mame_web_port');
			try {
				if (fs.existsSync(portFile)) {
					port = fs.readFileSync(portFile, 'utf8').trim();
					console.log(`📄 Using port ${port} from .mame_web_port file`);
				}
			} catch (err) {
				console.log('⚠️  Could not read .mame_web_port file:', err.message);
			}
		}

		// Final fallback
		if (!port) {
			port = '8000';
			console.log('⚠️  No port specified, using default: 8000');
		}

		targetUrl = `http://localhost:${port}`;
	} else {
		// URL provided, ensure it has protocol if not provided
		if (!targetUrl.startsWith('http://') && !targetUrl.startsWith('https://')) {
			targetUrl = 'http://' + targetUrl;
		}
	}
    console.log(`📍 Target URL: ${targetUrl}`);

	// Capture console messages - set up BEFORE page loads
	const consoleMessages = [];

	// Set up console listener immediately after page creation
	page.on('console', msg => {
	  const type = msg.type();
	  const text = msg.text();

	  // Filter out annoying deprecation warnings
	  if (text.includes('ScriptProcessorNode is deprecated') ||
		  text.includes('AudioContext was not allowed to start')) {
		console.log(`🔍 FILTERED OUT: ${text}`);
		return; // Skip these warnings
	  }

	  // Add timestamp in same format as MAME STATS (last 5 digits)
	  // Use performance.now() directly - it's already in milliseconds
	  const timestamp = performance.now();

	  // Round down to integer milliseconds (like machine.cpp does)
	  const timestampMs = Math.floor(timestamp);
	  const timestampStr = `[${timestampMs.toString().slice(-5)}ms]`;

	  consoleMessages.push(`[${type.toUpperCase()}] ${timestampStr} ${text}`);
	  console.log(`[${type.toUpperCase()}] ${timestampStr} ${text}`);
	});

	// Also set up page error listener
	page.on('pageerror', error => {
	  console.log(`🔍 PAGE ERROR: ${error.message}`);
	  console.log(`🔍 PAGE ERROR STACK: ${error.stack}`);
	});

	// Set up request listener to see when page starts loading
	page.on('request', request => {
	  console.log(`🔍 REQUEST: ${request.url()}`);
	});

	// Set up response listener to see when page finishes loading
	page.on('response', response => {
	  if (response.url().includes('index.html')) {
		console.log(`🔍 RESPONSE: ${response.url()} - Status: ${response.status()}`);
	  }
	});

	// Capture page errors with detailed information
	page.on('pageerror', error => {
	  const errorInfo = {
		message: error.message,
		stack: error.stack,
		name: error.name
	  };

	  // Extract line number from stack trace if available
	  let lineInfo = '';
	  if (error.stack) {
		const stackLines = error.stack.split('\n');

		// Look for line numbers in various formats
		for (const line of stackLines) {
		  // Try different patterns for line numbers
		  const patterns = [
			/\(http:\/\/localhost:\d+\/\):(\d+)/,  // (http://localhost:8001/):281
			/\(http:\/\/localhost:\d+\/index\.html\):(\d+)/,  // (http://localhost:8001/index.html):281
			/\(https?:\/\/[^)]+\):(\d+)/,  // (http://example.com/):281 or (https://example.com/):281
			/\(https?:\/\/[^)]+\/index\.html\):(\d+)/,  // (http://example.com/index.html):281
			/index\.html:(\d+)/,  // index.html:281
			/:(\d+):(\d+)/,  // :281:28 (line:column)
			/at.*:(\d+)/  // at <anonymous>:281
		  ];

		  for (const pattern of patterns) {
			const match = line.match(pattern);
			if (match) {
			  lineInfo = ` (line ${match[1]})`;
			  break;
			}
		  }

		  if (lineInfo) break;
		}
	  }

	  const errorMessage = `[PAGE ERROR] ${error.message}${lineInfo}`;
	  consoleMessages.push(errorMessage);
	  console.log(errorMessage);

	  // Also log the full stack trace for debugging
	  if (error.stack) {
		console.log(`[STACK TRACE] ${error.stack}`);
	  }
	});

	// Capture network errors (but filter out normal Emscripten behavior)
	page.on('requestfailed', request => {
	  const url = request.url();
	  const errorText = request.failure().errorText;

	  // Filter out normal Emscripten WASM loading behavior
	  if (url.includes('starwarswasm.wasm') && errorText === 'net::ERR_ABORTED') {
		return; // Skip this - it's normal Emscripten behavior
	  }

	  consoleMessages.push(`[NETWORK ERROR] ${url} - ${errorText}`);
	  console.log(`[NETWORK ERROR] ${url} - ${errorText}`);
	});

	await page.goto(targetUrl, {
	  waitUntil: 'networkidle0',
	  timeout: 30000
	});

	console.log('✅ Page loaded successfully');

	// Wait for MAME to initialize
	console.log('⏳ Waiting for MAME initialization...');
	await new Promise(resolve => setTimeout(resolve, 5000));

	// Check if canvas is visible and has content
	const canvasInfo = await page.evaluate(() => {
	  const canvas = document.getElementById('canvas');
	  if (!canvas) return { error: 'Canvas not found' };

	  const info = {
		width: canvas.width,
		height: canvas.height,
		style: canvas.style.cssText,
		visible: canvas.offsetWidth > 0 && canvas.offsetHeight > 0,
		hasContent: false
	  };

	  try {
		const ctx2d = canvas.getContext && canvas.getContext('2d');
		if (ctx2d && canvas.width && canvas.height) {
		  const img = ctx2d.getImageData(0, 0, canvas.width, canvas.height).data;
		  info.hasContent = Array.prototype.some.call(img, p => p !== 0);
		  return info;
		}
	  } catch (_) {}

	  try {
		const gl = (canvas.getContext && (canvas.getContext('webgl2') || canvas.getContext('webgl') || canvas.getContext('experimental-webgl')));
		if (gl && canvas.width && canvas.height) {
		  const buf = new Uint8Array(canvas.width * canvas.height * 4);
		  gl.readPixels(0, 0, canvas.width, canvas.height, gl.RGBA, gl.UNSIGNED_BYTE, buf);
		  info.hasContent = Array.prototype.some.call(buf, p => p !== 0);
		}
	  } catch (_) {}

	  return info;
	});

	// console.log('📊 Canvas info:', canvasInfo); // Only output to debug file

	// Check if MAME Module is loaded
	const moduleInfo = await page.evaluate(() => {
	  if (typeof Module === 'undefined') return { error: 'Module not defined' };

	  return {
		loaded: typeof Module !== 'undefined',
		arguments: Module.arguments || [],
		canvas: Module.canvas ? 'defined' : 'undefined',
		print: typeof Module.print,
		printErr: typeof Module.printErr
	  };
	});

	// console.log('📊 Module info:', moduleInfo); // Only output to debug file

	// Check for any error messages in the page
	const errorElements = await page.evaluate(() => {
	  const errors = [];
	  const elements = document.querySelectorAll('*');
	  elements.forEach(el => {
		if (el.textContent && el.textContent.includes('error')) {
		  errors.push(el.textContent.trim());
		}
	  });
	  return errors;
	});

	// Save console output to file
	const output = {
	  timestamp: new Date().toISOString(),
	  url: targetUrl,
	  canvasInfo: canvasInfo,
	  moduleInfo: moduleInfo,
	  consoleMessages: consoleMessages,
	  errorElements: errorElements
	};

	fs.writeFileSync('mame_web_debug.json', JSON.stringify(output, null, 2));
	fs.writeFileSync('console_capture.txt', consoleMessages.join('\n'));
	console.log('\n📁 Debug info saved to: mame_web_debug.json');
	console.log('📁 Console output saved to: console_capture.txt');

	// Wait indefinitely (user can close manually)
	await new Promise(() => {});

  } catch (error) {
	console.log(`❌ Error: ${error.message}`);
  }

  // Uncomment to auto-close browser
  // await browser.close();
})();
