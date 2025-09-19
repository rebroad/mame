$input v_color0, v_texcoord0

// license:BSD-3-Clause
// copyright-holders:Ryan Holtz,ImJezze
//-----------------------------------------------------------------------------
// Defocus Effect
//-----------------------------------------------------------------------------

#include "common.sh"

// Autos
uniform vec4 u_tex_size0;

// User-supplied
uniform vec4 u_defocus;
// Added parameters to emulate overdrive-induced defocus on vector CRTs (logical deduction from hardware behavior)
uniform float u_overdrive_threshold; // [0..1]
uniform float u_overdrive_scale;     // >=0
uniform float u_overdrive_gamma;     // >0
uniform float u_overdrive_maxmul;    // >=1

// Samplers
SAMPLER2D(s_tex, 0);

//-----------------------------------------------------------------------------
// Constants
//-----------------------------------------------------------------------------

void main()
{
	// DEBUG: Add a visible tint to verify this shader is running
	vec4 debug_tint = vec4(1.0, 0.9, 0.9, 1.0); // Slight red tint

	// TODO: Intensity-coupled defocus (deduced): feed an overdrive scalar from CPU-side to scale u_defocus
	// during bright events. Requires adding a uniform updated from vector stats (e.g., average/max alpha).
	// previously this pass was applied two times with offsets of 0.25, 0.5, 0.75, 1.0
	// now this pass is applied only once with offsets of 0.25, 0.55, 1.0, 1.6 to achieve the same appearance as before till a maximum defocus of 2.0
	// 0.075x² + 0.225x + 0.25
	const vec2 Coord1Offset = vec2(-1.60,  0.25);
	const vec2 Coord2Offset = vec2(-1.00, -0.55);
	const vec2 Coord3Offset = vec2(-0.55,  1.00);
	const vec2 Coord4Offset = vec2(-0.25, -1.60);
	const vec2 Coord5Offset = vec2( 0.25,  1.60);
	const vec2 Coord6Offset = vec2( 0.55, -1.00);
	const vec2 Coord7Offset = vec2( 1.00,  0.55);
	const vec2 Coord8Offset = vec2( 1.60, -0.25);

	// imaginary texel dimensions independed from source and target dimension
	vec2 TexelDims = vec2_splat(1.0 / 1024.0);

	// Sample local brightness and modulate defocus accordingly
	vec4 center = texture2D(s_tex, v_texcoord0);
	float luma = dot(center.rgb, vec3(0.299, 0.587, 0.114));
	float gamma = max(u_overdrive_gamma, 0.0001);
	luma = pow_s(saturate(luma), 1.0 / gamma);
	float od = saturate((luma - u_overdrive_threshold) / max(1e-6, (1.0 - u_overdrive_threshold)));
	float defocusMul = saturate(1.0 + u_overdrive_scale * od);
	defocusMul = min(defocusMul, max(u_overdrive_maxmul, 1.0));
	vec2 DefocusTexelDims = u_defocus.xy * defocusMul * TexelDims.xy;

	vec4 d0 = texture2D(s_tex, v_texcoord0);
	vec4 d1 = texture2D(s_tex, v_texcoord0 + Coord1Offset * DefocusTexelDims);
	vec4 d2 = texture2D(s_tex, v_texcoord0 + Coord2Offset * DefocusTexelDims);
	vec4 d3 = texture2D(s_tex, v_texcoord0 + Coord3Offset * DefocusTexelDims);
	vec4 d4 = texture2D(s_tex, v_texcoord0 + Coord4Offset * DefocusTexelDims);
	vec4 d5 = texture2D(s_tex, v_texcoord0 + Coord5Offset * DefocusTexelDims);
	vec4 d6 = texture2D(s_tex, v_texcoord0 + Coord6Offset * DefocusTexelDims);
	vec4 d7 = texture2D(s_tex, v_texcoord0 + Coord7Offset * DefocusTexelDims);
	vec4 d8 = texture2D(s_tex, v_texcoord0 + Coord8Offset * DefocusTexelDims);

	vec4 blurred = (d0 + d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8) / 9.0;

	blurred.a = blurred.a + d0.a;
	gl_FragColor = (blurred * v_color0) * debug_tint;
}
