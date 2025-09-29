// Cloudflare Worker: proxy GitHub Pages and inject COOP/COEP headers
// Set ORIGIN in wrangler.toml to your GitHub Pages domain, e.g. https://rebroad.github.io/mame/

export default {
  async fetch(request, env, ctx) {
    const reqUrl = new URL(request.url);
    const originBase = (env && env.ORIGIN) || 'https://rebroad.github.io/mame/';
    const originUrl = new URL(reqUrl.pathname + reqUrl.search, originBase);
    const acceptEncoding = (request.headers.get('Accept-Encoding') || '').toLowerCase();

    // Try compressed variants for .wasm
    if (reqUrl.pathname.endsWith('.wasm')) {
      if (acceptEncoding.includes('br')) {
        const resp = await tryCompressed(originUrl, '.br', 'br', request);
        if (resp) return withCommonHeaders(resp, /*wasm*/ true);
      }
      if (acceptEncoding.includes('gzip')) {
        const resp = await tryCompressed(originUrl, '.gz', 'gzip', request);
        if (resp) return withCommonHeaders(resp, /*wasm*/ true);
      }
    }

    // Default proxy fetch
    const upstream = await fetch(originUrl.toString(), {
      method: request.method,
      headers: passthroughHeaders(request.headers),
      body: request.method === 'GET' || request.method === 'HEAD' ? undefined : request.body,
      redirect: 'follow'
    });

    // Copy upstream response, adjust headers
    const res = new Response(upstream.body, upstream);
    return withCommonHeaders(res, reqUrl.pathname.endsWith('.wasm'));
  }
}

async function tryCompressed(baseUrl, ext, encoding, request) {
  const u = new URL(baseUrl);
  u.pathname = u.pathname + ext;
  const r = await fetch(u.toString(), {
    method: 'GET',
    headers: passthroughHeaders(request.headers),
    redirect: 'follow'
  });
  if (r.ok) {
    const res = new Response(r.body, r);
    res.headers.set('Content-Encoding', encoding);
    res.headers.set('Content-Type', 'application/wasm');
    res.headers.delete('Content-Length'); // length changes due to encoding
    res.headers.append('Vary', 'Accept-Encoding');
    return res;
  }
  return null;
}

function passthroughHeaders(h) {
  const out = new Headers();
  // Pass through a conservative subset; omit hop-by-hop and problematic headers
  for (const [k, v] of h.entries()) {
    const key = k.toLowerCase();
    if (['connection', 'transfer-encoding', 'content-length', 'host'].includes(key)) continue;
    out.set(k, v);
  }
  return out;
}

function withCommonHeaders(res, isWasm) {
  const h = res.headers;
  h.set('Cross-Origin-Opener-Policy', 'same-origin');
  h.set('Cross-Origin-Embedder-Policy', 'require-corp');
  h.set('Cross-Origin-Resource-Policy', 'same-origin');
  if (isWasm) {
    // Ensure correct type and vary
    if (!h.has('Content-Type')) h.set('Content-Type', 'application/wasm');
    h.append('Vary', 'Accept-Encoding');
  }
  return res;
}


