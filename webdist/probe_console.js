// Headless console probe using Puppeteer
// Usage: node probe_console.js [port]

const fs = require('fs');

(async () => {
  const portArg = process.argv[2];
  let port = portArg;
  if (!port) {
    try { port = fs.readFileSync('/tmp/mame_web_port.txt', 'utf8').trim(); } catch {}
  }
  if (!port) port = '8000';

  let puppeteer;
  try { puppeteer = require('puppeteer'); } catch (e) {
    console.error('Puppeteer not installed. Run: npm install puppeteer');
    process.exit(1);
  }

  const browser = await puppeteer.launch({ headless: true, args: ['--no-sandbox','--disable-setuid-sandbox'] });
  const page = await browser.newPage();

  const logs = [];
  page.on('console', msg => logs.push(`[${msg.type()}] ${msg.text()}`));
  page.on('pageerror', err => logs.push(`[pageerror] ${err.message}`));
  page.on('requestfailed', req => logs.push(`[requestfailed] ${req.url()} ${req.failure()?.errorText}`));
  page.on('response', resp => {
    try {
      const status = resp.status();
      if (status >= 400) logs.push(`[response ${status}] ${resp.url()}`);
    } catch {}
  });

  const url = `http://localhost:${port}/index.html`;
  try {
    await page.goto(url, { waitUntil: 'domcontentloaded', timeout: 15000 });
    // Let the app initialize (use standard delay for compatibility)
    await new Promise(r => setTimeout(r, 5000));
  } catch (e) {
    logs.push(`[goto-error] ${e.message}`);
  }

  const outPath = 'console_capture.txt';
  fs.writeFileSync(outPath, logs.join('\n'));
  console.log(`Captured ${logs.length} console lines to ${outPath}`);
  await browser.close();
})();


