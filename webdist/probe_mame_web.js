const puppeteer = require('puppeteer');

(async () => {
  console.log('🔍 Probing MAME WebAssembly build...');

  const browser = await puppeteer.launch({
    headless: false, // Set to true for headless mode
    args: [
      '--no-sandbox',
      '--disable-setuid-sandbox',
      '--disable-dev-shm-usage',
      '--disable-gpu',
      '--enable-unsafe-swiftshader',
      '--disable-web-security', // Allow cross-origin requests
      '--disable-features=VizDisplayCompositor'
    ]
  });

  const page = await browser.newPage();

  try {
    const port = process.argv[2] || '8001';
    console.log(`📍 Loading http://localhost:${port}...`);

    // Capture console messages
    const consoleMessages = [];
    page.on('console', msg => {
      const type = msg.type();
      const text = msg.text();
      consoleMessages.push(`[${type.toUpperCase()}] ${text}`);
      console.log(`[${type.toUpperCase()}] ${text}`);
    });

    // Capture page errors
    page.on('pageerror', error => {
      consoleMessages.push(`[PAGE ERROR] ${error.message}`);
      console.log(`[PAGE ERROR] ${error.message}`);
    });

    // Capture network errors
    page.on('requestfailed', request => {
      consoleMessages.push(`[NETWORK ERROR] ${request.url()} - ${request.failure().errorText}`);
      console.log(`[NETWORK ERROR] ${request.url()} - ${request.failure().errorText}`);
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
      
      return {
        width: canvas.width,
        height: canvas.height,
        style: canvas.style.cssText,
        visible: canvas.offsetWidth > 0 && canvas.offsetHeight > 0,
        hasContent: canvas.getContext('2d').getImageData(0, 0, canvas.width, canvas.height).data.some(pixel => pixel !== 0)
      };
    });

    console.log('📊 Canvas info:', canvasInfo);

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

    console.log('📊 Module info:', moduleInfo);

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

    if (errorElements.length > 0) {
      console.log('⚠️ Error elements found:', errorElements);
    }

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
    console.log('\n📁 Debug info saved to: mame_web_debug.json');

    // Keep browser open for manual inspection
    console.log('\n🔍 Browser will stay open for manual inspection...');
    console.log('Press Ctrl+C to close');

    // Wait indefinitely (user can close manually)
    await new Promise(() => {});

  } catch (error) {
    console.log(`❌ Error: ${error.message}`);
  }

  // Uncomment to auto-close browser
  // await browser.close();
})();
