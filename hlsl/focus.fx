// license:BSD-3-Clause
// copyright-holders:Ryan Holtz,ImJezze
//-----------------------------------------------------------------------------
// Defocus Effect
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Sampler Definitions
//-----------------------------------------------------------------------------

texture Diffuse;

sampler DiffuseSampler = sampler_state
{
	Texture = <Diffuse>;
	MipFilter = LINEAR;
	MinFilter = LINEAR;
	MagFilter = LINEAR;
	AddressU = CLAMP;
	AddressV = CLAMP;
	AddressW = CLAMP;
};

//-----------------------------------------------------------------------------
// Vertex Definitions
//-----------------------------------------------------------------------------

struct VS_OUTPUT
{
	float4 Position : POSITION;
	float4 Color : COLOR0;
	float2 TexCoord : TEXCOORD0;
};

struct VS_INPUT
{
	float3 Position : POSITION;
	float4 Color : COLOR0;
	float2 TexCoord : TEXCOORD0;
};

struct PS_INPUT
{
	float4 Color : COLOR0;
	float2 TexCoord : TEXCOORD0;
};

//-----------------------------------------------------------------------------
// Defocus Vertex Shader
//-----------------------------------------------------------------------------

uniform float2 ScreenDims;
uniform float2 TargetDims;

VS_OUTPUT vs_main(VS_INPUT Input)
{
	VS_OUTPUT Output = (VS_OUTPUT)0;

	Output.Position = float4(Input.Position.xyz, 1.0f);
	Output.Position.xy /= ScreenDims;
	Output.Position.y = 1.0f - Output.Position.y; // flip y
	Output.Position.xy -= 0.5f; // center
	Output.Position.xy *= 2.0f; // zoom

	float2 TexCoord = Input.TexCoord;
	TexCoord += 0.5f / TargetDims; // half texel offset correction (DX9)

	Output.TexCoord = TexCoord;

	Output.Color = Input.Color;

	return Output;
}

//-----------------------------------------------------------------------------
// Defocus Pixel Shader
//-----------------------------------------------------------------------------

uniform float2 Defocus = float2(0.0f, 0.0f);
// Added parameters to emulate overdrive-induced defocus on vector CRTs (logical deduction from hardware behavior)
// OverdriveThreshold: luminance threshold [0..1] above which defocus increases
// OverdriveScale: how strongly luminance above threshold increases defocus
// OverdriveGamma: non-linear response shaping for luminance
// DefocusMaxMul: clamp on the multiplicative defocus factor
uniform float OverdriveThreshold = 0.75f;
uniform float OverdriveScale = 1.0f;
uniform float OverdriveGamma = 2.2f;
uniform float DefocusMaxMul = 2.0f;

// previously this pass was applied two times with offsets of 0.25, 0.5, 0.75, 1.0
// now this pass is applied only once with offsets of 0.25, 0.55, 1.0, 1.6 to achieve the same appearance as before till a maximum defocus of 2.0
static const float2 CoordOffset8[8] =
{
	// 0.075x² + 0.225x + 0.25
	float2(-1.60f,  0.25f),
	float2(-1.00f, -0.55f),
	float2(-0.55f,  1.00f),
	float2(-0.25f, -1.60f),
	float2( 0.25f,  1.60f),
	float2( 0.55f, -1.00f),
	float2( 1.00f,  0.55f),
	float2( 1.60f, -0.25f),
};

float4 ps_main(PS_INPUT Input) : COLOR
{
	// imaginary texel dimensions independed from source and target dimension
	float2 TexelDims = (1.0f / 1024.0f);

	// Sample source to derive local brightness (approx. beam current). Use linearized luminance.
	float4 center = tex2D(DiffuseSampler, Input.TexCoord);
	float luma = dot(center.rgb, float3(0.299f, 0.587f, 0.114f));
	luma = pow(saturate(luma), 1.0f / max(OverdriveGamma, 0.0001f));
	float od = saturate((luma - OverdriveThreshold) / max(1e-6f, (1.0f - OverdriveThreshold)));
	float defocusMul = saturate(1.0f + OverdriveScale * od);
	defocusMul = min(defocusMul, max(DefocusMaxMul, 1.0f));

	float2 DefocusTexelDims = Defocus * defocusMul * TexelDims;

	float4 texel = tex2D(DiffuseSampler, Input.TexCoord);
	for (int i = 0; i < 8; i++)
	{
		texel += tex2D(DiffuseSampler, Input.TexCoord + CoordOffset8[i] * DefocusTexelDims);
	}

	return texel / 9.0f;
}

//-----------------------------------------------------------------------------
// Defocus Technique
//-----------------------------------------------------------------------------

technique DefaultTechnique
{
	pass Pass0
	{
		Lighting = FALSE;

		VertexShader = compile vs_3_0 vs_main();
		PixelShader = compile ps_3_0 ps_main();
	}
}
