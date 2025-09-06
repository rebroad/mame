// Cloudflare Worker: proxy GitHub Pages and inject COOP/COEP headers
// Set ORIGIN in wrangler.toml to your GitHub Pages domain, e.g. https://rebroad.github.io/mame/

export default {
	async fetch(request, env, ctx) {
		const url = new URL(request.url);
		// Map incoming request path to origin, preserving base path in ORIGIN
		const base = new URL(env.ORIGIN);
		const target = new URL(base.toString());
		const basePath = base.pathname.endsWith('/') ? base.pathname.slice(0, -1) : base.pathname;
		target.pathname = basePath + url.pathname;
		target.search = url.search;
		const upstreamReq = new Request(target.toString(), request);
		const upstreamRes = await fetch(upstreamReq, {
			cf: { cacheTtl: 60, cacheEverything: true }
		});
		const newHeaders = new Headers(upstreamRes.headers);
		newHeaders.set('Cross-Origin-Opener-Policy', 'same-origin');
		newHeaders.set('Cross-Origin-Embedder-Policy', 'require-corp');
		newHeaders.set('Cross-Origin-Resource-Policy', 'same-origin');
		return new Response(upstreamRes.body, {
			status: upstreamRes.status,
			statusText: upstreamRes.statusText,
			headers: newHeaders
		});
	}
};


