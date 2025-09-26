import http from 'http';
import fs from 'fs';
import path from 'path';
import url from 'url';

// Parse command line arguments
const args = process.argv.slice(2);
const root = args[0] || process.cwd();
const port = parseInt(args[1]) || parseInt(process.env.PORT) || 8000;

console.log(`Serving ${root} on http://localhost:${port}`);
const types = { '.html':'text/html', '.js':'application/javascript', '.wasm':'application/wasm', '.json':'application/json', '.png':'image/png', '.jpg':'image/jpeg', '.jpeg':'image/jpeg', '.gif':'image/gif', '.svg':'image/svg+xml', '.css':'text/css', '.ico':'image/x-icon', '.data':'application/octet-stream' };
const server = http.createServer((req, res) => {
  let p = decodeURIComponent(new URL(req.url, `http://${req.headers.host}`).pathname);
  if (p === '/') p = '/index.html';
  const filePath = path.join(root, p);
  // Handle precompressed wasm
  if (filePath.endsWith('.wasm')) {
    const ae = String(req.headers['accept-encoding'] || '').toLowerCase();
    if (ae.includes('br') && fs.existsSync(filePath + '.br')) {
      res.setHeader('Content-Type', 'application/wasm');
      res.setHeader('Content-Encoding', 'br');
      fs.createReadStream(filePath + '.br').pipe(res);
      return;
    } else if (ae.includes('gzip') && fs.existsSync(filePath + '.gz')) {
      res.setHeader('Content-Type', 'application/wasm');
      res.setHeader('Content-Encoding', 'gzip');
      fs.createReadStream(filePath + '.gz').pipe(res);
      return;
    }
    // Fallback: serve uncompressed WASM if compressed versions fail
    if (fs.existsSync(filePath)) {
      res.setHeader('Content-Type', 'application/wasm');
      fs.createReadStream(filePath).pipe(res);
      return;
    }
  }
  fs.readFile(filePath, (err, data) => {
    res.setHeader('Cross-Origin-Opener-Policy', 'same-origin');
    res.setHeader('Cross-Origin-Embedder-Policy', 'require-corp');
    res.setHeader('Cross-Origin-Resource-Policy', 'same-origin');
    // Required for AudioWorklet and Workers on some browsers
    res.setHeader('Cross-Origin-Resource-Policy', 'same-origin');
    res.setHeader('Origin-Trial', '');
    res.setHeader('Access-Control-Allow-Origin', '*');
    if (err) { res.writeHead(404); res.end('Not found'); return; }
    const ext = path.extname(filePath).toLowerCase();
    res.setHeader('Content-Type', types[ext] || 'application/octet-stream');
    res.writeHead(200);
    res.end(data);
  });
});
server.listen(port);
