const puppeteer = require('puppeteer');

(async () => {
  console.log('🔍 Probing MAME WebAssembly build...');

  // Check for -nothrot argument
  const nothrot = process.argv.includes('-nothrot');

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
	const port = process.argv[2];
	console.log(`📍 Loading http://localhost:${port}...`);

	// Capture console messages
	const consoleMessages = [];
	page.on('console', msg => {
	  const type = msg.type();
	  const text = msg.text();

	  // Filter out annoying deprecation warnings
	  if (text.includes('ScriptProcessorNode is deprecated') ||
		  text.includes('AudioContext was not allowed to start')) {
		return; // Skip these warnings
	  }

	  consoleMessages.push(`[${type.toUpperCase()}] ${text}`);
	  console.log(`[${type.toUpperCase()}] ${text}`);
	});

	// Capture page errors
	page.on('pageerror', error => {
	  consoleMessages.push(`[PAGE ERROR] ${error.message}`);
	  console.log(`[PAGE ERROR] ${error.message}`);
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

	await page.goto(`http://localhost:${port}`, {
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
	const fs = require('fs');
	const output = {
	  timestamp: new Date().toISOString(),
	  port: port,
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
