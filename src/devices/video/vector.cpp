// license:BSD-3-Clause
// copyright-holders:Brad Oliver,Aaron Giles,Bernd Wiebelt,Allard van der Bas
/******************************************************************************
 *
 * vector.c
 *
 *        anti-alias code by Andrew Caldwell
 *        (still more to add)
 *
 * 040227 Fixed miny clip scaling which was breaking in mhavoc. AREK
 * 010903 added support for direct RGB modes MLR
 * 980611 use translucent vectors. Thanks to Peter Hirschberg
 *        and Neil Bradley for the inspiration. BW
 * 980307 added cleverer dirty handling. BW, ASG
 *        fixed antialias table .ac
 * 980221 rewrote anti-alias line draw routine
 *        added inline assembly multiply fuction for 8086 based machines
 *        beam diameter added to draw routine
 *        beam diameter is accurate in anti-alias line draw (Tcosin)
 *        flicker added .ac
 * 980203 moved LBO's routines for drawing into a buffer of vertices
 *        from avgdvg.c to this location. Scaling is now initialized
 *        by calling vector_init(...). BW
 * 980202 moved out of msdos.c ASG
 * 980124 added anti-alias line draw routine
 *        modified avgdvg.c and sega.c to support new line draw routine
 *        added two new tables Tinten and Tmerge (for 256 color support)
 *        added find_color routine to build above tables .ac
 *
 * Vector Team
 *
 *        Brad Oliver
 *        Aaron Giles
 *        Bernd Wiebelt
 *        Allard van der Bas
 *        Al Kossow (VECSIM)
 *        Hedley Rainnie (VECSIM)
 *        Eric Smith (VECSIM)
 *        Neil Bradley (technical advice)
 *        Andrew Caldwell (anti-aliasing)
 *
 **************************************************************************** */

#include "emu.h"
#include "vector.h"

#include "emuopts.h"
#include "render.h"
#include "screen.h"


#define VECTOR_WIDTH_DENOM 512

// 20000 is needed for mhavoc (see MT 06668) 10000 is enough for other games
#define MAX_POINTS 20000

float vector_options::s_flicker = 0.0f;
float vector_options::s_beam_width_min = 0.0f;
float vector_options::s_beam_width_max = 0.0f;
float vector_options::s_beam_dot_size = 0.0f;
float vector_options::s_beam_intensity_weight = 0.0f;
float vector_options::s_defocus_threshold = 0.75f;
float vector_options::s_defocus_scale = 1.0f;
float vector_options::s_defocus_gamma = 2.2f;
float vector_options::s_defocus_maxmul = 2.0f;
float vector_options::s_glow_intensity = 0.6f;
bool vector_options::s_antialias = true;

void vector_options::init(emu_options& options)
{
	// Load and validate beam width parameters
	// TODO: Added robust validation to prevent crashes from invalid config values
	s_beam_width_min = options.beam_width_min();
	if (s_beam_width_min < 0.1f || s_beam_width_min > 10.0f)
	{
		osd_printf_warning("Warning: beam_width_min value %.2f is out of range (0.1-10.0), clamping to 1.0\n", s_beam_width_min);
		s_beam_width_min = 1.0f;
	}

	s_beam_width_max = options.beam_width_max();
	if (s_beam_width_max < 0.1f || s_beam_width_max > 20.0f)
	{
		osd_printf_warning("Warning: beam_width_max value %.2f is out of range (0.1-20.0), clamping to 2.0\n", s_beam_width_max);
		s_beam_width_max = 2.0f;
	}

	if (s_beam_width_max < s_beam_width_min)
	{
		osd_printf_warning("Warning: beam_width_max (%.2f) is less than beam_width_min (%.2f), swapping values\n",
			s_beam_width_max, s_beam_width_min);
		std::swap(s_beam_width_min, s_beam_width_max);
	}

	// Load and validate other parameters
	s_beam_dot_size = options.beam_dot_size();
	if (s_beam_dot_size < 0.1f || s_beam_dot_size > 10.0f)
	{
		osd_printf_warning("Warning: beam_dot_size value %.2f is out of range (0.1-10.0), clamping to 1.0\n", s_beam_dot_size);
		s_beam_dot_size = 1.0f;
	}

	s_beam_intensity_weight = options.beam_intensity_weight();
	if (s_beam_intensity_weight < 0.0f || s_beam_intensity_weight > 2.0f)
	{
		osd_printf_warning("Warning: beam_intensity_weight value %.2f is out of range (0.0-2.0), clamping to 0.0\n", s_beam_intensity_weight);
		s_beam_intensity_weight = 0.0f;
	}

	s_flicker = options.flicker();
	if (s_flicker < 0.0f || s_flicker > 1.0f)
	{
		osd_printf_warning("Warning: flicker value %.2f is out of range (0.0-1.0), clamping to 0.0\n", s_flicker);
		s_flicker = 0.0f;
	}

	s_defocus_threshold = options.vector_defocus_threshold();
	if (s_defocus_threshold < 0.0f || s_defocus_threshold > 2.0f)
	{
		osd_printf_warning("Warning: vector_defocus_threshold value %.2f is out of range (0.0-2.0), clamping to 0.75\n", s_defocus_threshold);
		s_defocus_threshold = 0.75f;
	}

	s_defocus_scale = options.vector_defocus_scale();
	if (s_defocus_scale < 0.1f || s_defocus_scale > 5.0f)
	{
		osd_printf_warning("Warning: vector_defocus_scale value %.2f is out of range (0.1-5.0), clamping to 1.0\n", s_defocus_scale);
		s_defocus_scale = 1.0f;
	}

	s_defocus_gamma = options.vector_defocus_gamma();
	if (s_defocus_gamma < 0.1f || s_defocus_gamma > 5.0f)
	{
		osd_printf_warning("Warning: vector_defocus_gamma value %.2f is out of range (0.1-5.0), clamping to 2.2\n", s_defocus_gamma);
		s_defocus_gamma = 2.2f;
	}

	s_defocus_maxmul = options.vector_defocus_maxmul();
	if (s_defocus_maxmul < 1.0f || s_defocus_maxmul > 10.0f)
	{
		osd_printf_warning("Warning: vector_defocus_maxmul value %.2f is out of range (1.0-10.0), clamping to 2.0\n", s_defocus_maxmul);
		s_defocus_maxmul = 2.0f;
	}

	s_glow_intensity = options.vector_glow_intensity();
	if (s_glow_intensity < 0.0f || s_glow_intensity > 2.0f)
	{
		osd_printf_warning("Warning: vector_glow_intensity value %.2f is out of range (0.0-2.0), clamping to 0.6\n", s_glow_intensity);
		s_glow_intensity = 0.6f;
	}

	s_antialias = options.vector_antialias();
}

// device type definition
DEFINE_DEVICE_TYPE(VECTOR, vector_device, "vector_device", "VECTOR")

vector_device::vector_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock)
	: device_t(mconfig, VECTOR, tag, owner, clock),
		device_video_interface(mconfig, *this),
		m_vector_list(nullptr),
		m_min_intensity(255),
		m_max_intensity(0)
{
}

void vector_device::device_start()
{
	vector_options::init(machine().options());

	m_vector_index = 0;

	/* allocate memory for tables */
	m_vector_list = std::make_unique<point[]>(MAX_POINTS);
}

/*
 * www.dinodini.wordpress.com/2010/04/05/normalized-tunable-sigmoid-functions/
 */
float vector_device::normalized_sigmoid(float n, float k)
{
	// valid for n and k in range of -1.0 and 1.0
	return (n - n * k) / (k - fabs(n) * 2.0f * k + 1.0f);
}


/*
 * Adds a line end point to the vertices list. The vector processor emulation
 * needs to call this.
 */
void vector_device::add_point(int x, int y, rgb_t color, int intensity)
{
	point *newpoint;

	intensity = std::clamp(intensity, 0, 255);

	m_min_intensity = intensity > 0 ? std::min(m_min_intensity, intensity) : m_min_intensity;
	m_max_intensity = intensity > 0 ? std::max(m_max_intensity, intensity) : m_max_intensity;

	if (vector_options::s_flicker && (intensity > 0))
	{
		float random = (float)(machine().rand() & 255) / 255.0f; // random value between 0.0 and 1.0

		intensity -= (int)(intensity * random * vector_options::s_flicker);

		intensity = std::clamp(intensity, 0, 255);
	}

	newpoint = &m_vector_list[m_vector_index];
	newpoint->x = x;
	newpoint->y = y;
	newpoint->col = color;
	newpoint->intensity = intensity;

	m_vector_index++;
	if (m_vector_index >= MAX_POINTS)
	{
		m_vector_index--;
		logerror("*** Warning! Vector list overflow!\n");
	}
}


/*
 * The vector CPU creates a new display list. We save the old display list,
 * but only once per refresh.
 */
void vector_device::clear_list(void)
{
	m_vector_index = 0;
}


uint32_t vector_device::screen_update(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	uint32_t flags = PRIMFLAG_ANTIALIAS(1) | PRIMFLAG_BLENDMODE(BLENDMODE_ADD) | PRIMFLAG_VECTOR(1);
	const rectangle &visarea = screen.visible_area();
	float xscale = 1.0f / (65536 * visarea.width());
	float yscale = 1.0f / (65536 * visarea.height());
	float xoffs = (float)visarea.min_x;
	float yoffs = (float)visarea.min_y;

	point *curpoint;
	int lastx = 0;
	int lasty = 0;
	bool had_prev_render = false; // last segment emitted a visible line
	float prev_tx = 0.0f, prev_ty = 0.0f; // previous segment direction (normalized by previous length usage)
	float prev_len = 0.0f;

	curpoint = m_vector_list.get();

	screen.container().empty();
	screen.container().add_rect(0.0f, 0.0f, 1.0f, 1.0f, rgb_t(0xff,0x00,0x00,0x00), PRIMFLAG_BLENDMODE(BLENDMODE_ALPHA) | PRIMFLAG_VECTORBUF(1));

	for (int i = 0; i < m_vector_index; i++)
	{
		render_bounds coords;

		float intensity = (float)curpoint->intensity / 255.0f;
		float intensity_weight = normalized_sigmoid(intensity, vector_options::s_beam_intensity_weight);

		// TODO: Vector CRT authenticity (deduced from hardware docs): model HV sag/overdrive-driven defocus.
		// Tie beam width and/or a post-process defocus amount to instantaneous/accumulated beam current,
		// rather than only this static per-segment intensity mapping. Consider exporting a per-segment
		// "overdrive" factor to the renderer so bright events (e.g., Death Star explosion) defocus the beam.
		// Also consider temporal accumulation for phosphor persistence.
		// Calculate beam width based on intensity, with proper min/max clamping
		float beam_width;
		if (m_min_intensity == m_max_intensity)
		{
			// No intensity variation - use minimum width
			beam_width = vector_options::s_beam_width_min;
		}
		else
		{
			// Clamp intensity_weight to valid range [0,1] to prevent exceeding maximum
			float clamped_weight = std::clamp(intensity_weight, 0.0f, 1.0f);
			// Scale from min to max based on intensity
			beam_width = vector_options::s_beam_width_min + clamped_weight * (vector_options::s_beam_width_max - vector_options::s_beam_width_min);
		}

		// normalize width
		beam_width *= 1.0f / (float)VECTOR_WIDTH_DENOM;

		// apply point scale for points
		if (lastx == curpoint->x && lasty == curpoint->y)
			beam_width *= vector_options::s_beam_dot_size;

		coords.x0 = ((float)lastx - xoffs) * xscale;
		coords.y0 = ((float)lasty - yoffs) * yscale;
		coords.x1 = ((float)curpoint->x - xoffs) * xscale;
		coords.y1 = ((float)curpoint->y - yoffs) * yscale;

		if (curpoint->intensity != 0)
		{
			// TODO: Endpoint handling (logical deduction): distribute intensity along the segment or taper
			// near joins to avoid hotspots from additive overlap. An intensity ramp or proper caps could
			// reduce artifacts and better match analog beam integration.
			// Endpoint falloff: trim a tiny portion at the start of the segment
			// to reduce double-contribution at shared joins. Keep geometry stable
			// and proportional to beam width to avoid visible gaps.
			float tx = coords.x1 - coords.x0;
			float ty = coords.y1 - coords.y0;
			float len = std::sqrt(tx * tx + ty * ty);
			if (had_prev_render && len > 0.0f)
			{
				// Angle-aware trimming: stronger for near-colinear segments, lighter for sharp corners
				float cosang = 0.0f;
				if (prev_len > 0.0f)
				{
					float curr_norm_x = tx / len;
					float curr_norm_y = ty / len;
					cosang = prev_tx * curr_norm_x + prev_ty * curr_norm_y; // [-1..1]
				}
				// base trims
				float max_trim_colinear = beam_width * 3.0f; // aggressive: up to 3x beam width on colinear joins
				float max_trim_corner   = beam_width * 1.0f; // corners also more aggressive
				float seg_cap_colinear  = len * 0.70f;
				float seg_cap_corner    = len * 0.50f;
				float max_trim = (cosang > 0.0f) ? max_trim_colinear : max_trim_corner;
				float seg_cap = (cosang > 0.0f) ? seg_cap_colinear : seg_cap_corner;
				float trim = std::min(max_trim, seg_cap);
				float nx = tx / len;
				float ny = ty / len;
				coords.x0 += nx * trim;
				coords.y0 += ny * trim;
			}

			// Draw main line with full intensity
			screen.container().add_line(
				coords.x0, coords.y0, coords.x1, coords.y1,
				beam_width,
				(curpoint->intensity << 24) | (curpoint->col & 0xffffff),
				flags);

			// Add CRT glow effect by drawing multiple overlapping lines with decreasing intensity
			// This simulates the phosphor persistence and bloom of a real vector CRT
			if (curpoint->intensity > 0 && vector_options::s_glow_intensity > 0.0f)
			{
				// Calculate glow parameters based on intensity and user setting
				float glow_intensity = curpoint->intensity * vector_options::s_glow_intensity;
				float glow_width = beam_width * 1.5f; // Glow extends beyond main line

				// Draw 3 glow layers with decreasing intensity and increasing width
				for (int glow_layer = 0; glow_layer < 3; glow_layer++)
				{
					float layer_intensity = glow_intensity * (1.0f - glow_layer * 0.3f);
					float layer_width = glow_width + glow_layer * beam_width * 0.5f;

					if (layer_intensity > 0.1f) // Only draw if intensity is meaningful
					{
						uint32_t glow_color = ((uint32_t)layer_intensity << 24) | (curpoint->col & 0xffffff);
						screen.container().add_line(
							coords.x0, coords.y0, coords.x1, coords.y1,
							layer_width, glow_color, flags);
					}
				}
			}

			// Apply overdrive-induced defocus effect for bright segments (logical deduction from hardware behavior)
			// Simulates HV sag causing beam defocus during high current draw
			if (vector_options::s_defocus_scale > 0.0f && curpoint->intensity > 0)
			{
				// Calculate defocus amount based on intensity
				float norm_intensity = intensity;
				if (vector_options::s_defocus_gamma > 0.0001f)
				{
					norm_intensity = std::pow(norm_intensity, 1.0f / vector_options::s_defocus_gamma);
				}

				float overdrive = std::max(0.0f, (norm_intensity - vector_options::s_defocus_threshold) /
					std::max(1e-6f, (1.0f - vector_options::s_defocus_threshold)));
				float defocus_mul = std::clamp(1.0f + vector_options::s_defocus_scale * overdrive, 1.0f, vector_options::s_defocus_maxmul);

				if (defocus_mul > 1.05f) // Only apply if there's a meaningful defocus effect
				{
					// Draw additional offset copies to simulate defocus blur
					float defocus_offset = beam_width * (defocus_mul - 1.0f) * 0.5f;

					// Safety check: limit defocus offset to prevent excessive primitive generation
					defocus_offset = std::min(defocus_offset, beam_width * 2.0f);

					// Only add defocus if offset is meaningful and coordinates are valid
					if (defocus_offset > 0.1f &&
						std::isfinite(coords.x0) && std::isfinite(coords.y0) &&
						std::isfinite(coords.x1) && std::isfinite(coords.y1))
					{
						float defocus_intensity = curpoint->intensity * 0.3f; // Reduced intensity for blur copies
						uint32_t defocus_color = ((uint32_t)defocus_intensity << 24) | (curpoint->col & 0xffffff);

						// Only add 2 offset copies instead of 4 to reduce primitive count
						// Horizontal offset
						screen.container().add_line(
							coords.x0 + defocus_offset, coords.y0, coords.x1 + defocus_offset, coords.y1,
							beam_width, defocus_color, flags);
						screen.container().add_line(
							coords.x0 - defocus_offset, coords.y0, coords.x1 - defocus_offset, coords.y1,
							beam_width, defocus_color, flags);
					}
				}
			}

			had_prev_render = true;
			// update previous direction
			float tx2 = coords.x1 - coords.x0;
			float ty2 = coords.y1 - coords.y0;
			prev_len = std::sqrt(tx2 * tx2 + ty2 * ty2);
			if (prev_len > 0.0f)
			{
				prev_tx = tx2 / prev_len;
				prev_ty = ty2 / prev_len;
			}
		}
		else
		{
			had_prev_render = false;
			prev_len = 0.0f;
		}

		lastx = curpoint->x;
		lasty = curpoint->y;

		curpoint++;
	}

	return 0;
}
