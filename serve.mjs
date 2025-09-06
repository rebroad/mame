import http from 'http';
import fs from 'fs';
import path from 'path';
import url from 'url';
const __dirname = path.dirname(url.fileURLToPath(import.meta.url));
const root = __dirname;
const port = process.env.PORT || 8000;
const types = { '.html':'text/html', '.js':'application/javascript', '.wasm':'application/wasm', '.json':'application/json', '.png':'image/png', '.jpg':'image/jpeg', '.jpeg':'image/jpeg', '.gif':'image/gif', '.svg':'image/svg+xml', '.css':'text/css', '.ico':'image/x-icon', '.data':'application/octet-stream' };
const server = http.createServer((req, res) => {
  let p = decodeURIComponent(new URL(req.url, `http://${req.headers.host}`).pathname);
  if (p === '/') p = '/index.html';
  const filePath = path.join(root, p);
  fs.readFile(filePath, (err, data) => {
    res.setHeader('Cross-Origin-Opener-Policy', 'same-origin');
    res.setHeader('Cross-Origin-Embedder-Policy', 'require-corp');
    res.setHeader('Cross-Origin-Resource-Policy', 'same-origin');
    res.setHeader('Access-Control-Allow-Origin', '*');
    if (err) { res.writeHead(404); res.end('Not found'); return; }
    const ext = path.extname(filePath).toLowerCase();
    res.setHeader('Content-Type', types[ext] || 'application/octet-stream');
    res.writeHead(200);
    res.end(data);
  });
});
server.listen(port, () => console.log(`Serving ${root} on http://localhost:${port}`));
