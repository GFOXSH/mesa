/*
 * XML DRI client-side driver configuration
 * Copyright (C) 2003 Felix Kuehling
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * FELIX KUEHLING, OR ANY OTHER CONTRIBUTORS BE LIABLE FOR ANY CLAIM, 
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE 
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 */
/**
 * \file t_options.h
 * \brief Templates of common options
 * \author Felix Kuehling
 *
 * This file defines macros for common options that can be used to
 * construct driConfigOptions in the drivers. This file is only a
 * template containing English descriptions for options wrapped in
 * gettext(). xgettext can be used to extract translatable
 * strings. These strings can then be translated by anyone familiar
 * with GNU gettext. gen_xmlpool.py takes this template and fills in
 * all the translations. The result (options.h) is included by
 * xmlpool.h which in turn can be included by drivers.
 *
 * The macros used to describe otions in this file are defined in
 * ../xmlpool.h.
 */

/* This is needed for xgettext to extract translatable strings.
 * gen_xmlpool.py will discard this line. */
#include <libintl.h>

/*
 * predefined option sections and options with multi-lingual descriptions
 */


/**
 * \brief Debugging options
 */
#define DRI_CONF_SECTION_DEBUG \
DRI_CONF_SECTION_BEGIN \
	DRI_CONF_DESC(en,gettext("Debugging"))

#define DRI_CONF_NO_RAST(def) \
DRI_CONF_OPT_BEGIN_B(no_rast, def) \
        DRI_CONF_DESC(en,gettext("Disable 3D acceleration")) \
DRI_CONF_OPT_END

#define DRI_CONF_PERFORMANCE_BOXES(def) \
DRI_CONF_OPT_BEGIN_B(performance_boxes, def) \
        DRI_CONF_DESC(en,gettext("Show performance boxes")) \
DRI_CONF_OPT_END

#define DRI_CONF_ALWAYS_FLUSH_BATCH(def) \
DRI_CONF_OPT_BEGIN_B(always_flush_batch, def) \
        DRI_CONF_DESC(en,gettext("Enable flushing batchbuffer after each draw call")) \
DRI_CONF_OPT_END

#define DRI_CONF_ALWAYS_FLUSH_CACHE(def) \
DRI_CONF_OPT_BEGIN_B(always_flush_cache, def) \
        DRI_CONF_DESC(en,gettext("Enable flushing GPU caches with each draw call")) \
DRI_CONF_OPT_END

#define DRI_CONF_DISABLE_THROTTLING(def) \
DRI_CONF_OPT_BEGIN_B(disable_throttling, def) \
	DRI_CONF_DESC(en,gettext("Disable throttling on first batch after flush")) \
DRI_CONF_OPT_END

#define DRI_CONF_FORCE_GLSL_EXTENSIONS_WARN(def) \
DRI_CONF_OPT_BEGIN_B(force_glsl_extensions_warn, def) \
        DRI_CONF_DESC(en,gettext("Force GLSL extension default behavior to 'warn'")) \
DRI_CONF_OPT_END

#define DRI_CONF_DISABLE_BLEND_FUNC_EXTENDED(def) \
DRI_CONF_OPT_BEGIN_B(disable_blend_func_extended, def) \
        DRI_CONF_DESC(en,gettext("Disable dual source blending")) \
DRI_CONF_OPT_END

#define DRI_CONF_DUAL_COLOR_BLEND_BY_LOCATION(def) \
DRI_CONF_OPT_BEGIN_B(dual_color_blend_by_location, def) \
        DRI_CONF_DESC(en,gettext("Identify dual color blending sources by location rather than index")) \
DRI_CONF_OPT_END

#define DRI_CONF_DISABLE_GLSL_LINE_CONTINUATIONS(def) \
DRI_CONF_OPT_BEGIN_B(disable_glsl_line_continuations, def) \
        DRI_CONF_DESC(en,gettext("Disable backslash-based line continuations in GLSL source")) \
DRI_CONF_OPT_END

#define DRI_CONF_DISABLE_SHADER_BIT_ENCODING(def) \
DRI_CONF_OPT_BEGIN_B(disable_shader_bit_encoding, def) \
        DRI_CONF_DESC(en,gettext("Disable GL_ARB_shader_bit_encoding")) \
DRI_CONF_OPT_END

#define DRI_CONF_FORCE_GLSL_VERSION(def) \
DRI_CONF_OPT_BEGIN_V(force_glsl_version, int, def, "0:999") \
        DRI_CONF_DESC(en,gettext("Force a default GLSL version for shaders that lack an explicit #version line")) \
DRI_CONF_OPT_END

#define DRI_CONF_ALLOW_GLSL_EXTENSION_DIRECTIVE_MIDSHADER(def) \
DRI_CONF_OPT_BEGIN_B(allow_glsl_extension_directive_midshader, def) \
        DRI_CONF_DESC(en,gettext("Allow GLSL #extension directives in the middle of shaders")) \
DRI_CONF_OPT_END

#define DRI_CONF_ALLOW_GLSL_BUILTIN_VARIABLE_REDECLARATION(def) \
DRI_CONF_OPT_BEGIN_B(allow_glsl_builtin_variable_redeclaration, def) \
        DRI_CONF_DESC(en,gettext("Allow GLSL built-in variables to be redeclared verbatim")) \
DRI_CONF_OPT_END

#define DRI_CONF_ALLOW_HIGHER_COMPAT_VERSION(def) \
DRI_CONF_OPT_BEGIN_B(allow_higher_compat_version, def) \
        DRI_CONF_DESC(en,gettext("Allow a higher compat profile (version 3.1+) for apps that request it")) \
DRI_CONF_OPT_END

#define DRI_CONF_FORCE_GLSL_ABS_SQRT(def) \
DRI_CONF_OPT_BEGIN_B(force_glsl_abs_sqrt, def) \
        DRI_CONF_DESC(en,gettext("Force computing the absolute value for sqrt() and inversesqrt()")) \
DRI_CONF_OPT_END

#define DRI_CONF_GLSL_CORRECT_DERIVATIVES_AFTER_DISCARD(def) \
DRI_CONF_OPT_BEGIN_B(glsl_correct_derivatives_after_discard, def) \
        DRI_CONF_DESC(en,gettext("Implicit and explicit derivatives after a discard behave as if the discard didn't happen")) \
DRI_CONF_OPT_END

#define DRI_CONF_ALLOW_GLSL_CROSS_STAGE_INTERPOLATION_MISMATCH(def) \
DRI_CONF_OPT_BEGIN_B(allow_glsl_cross_stage_interpolation_mismatch, def) \
        DRI_CONF_DESC(en,gettext("Allow interpolation qualifier mismatch across shader stages")) \
DRI_CONF_OPT_END

/**
 * \brief Image quality-related options
 */
#define DRI_CONF_SECTION_QUALITY \
DRI_CONF_SECTION_BEGIN \
	DRI_CONF_DESC(en,gettext("Image Quality"))

#define DRI_CONF_EXCESS_MIPMAP(def) \
DRI_CONF_OPT_BEGIN_B(excess_mipmap, def) \
	DRI_CONF_DESC(en,"Enable extra mipmap level") \
DRI_CONF_OPT_END

#define DRI_CONF_TEXTURE_DEPTH_FB       0
#define DRI_CONF_TEXTURE_DEPTH_32       1
#define DRI_CONF_TEXTURE_DEPTH_16       2
#define DRI_CONF_TEXTURE_DEPTH_FORCE_16 3
#define DRI_CONF_TEXTURE_DEPTH(def) \
DRI_CONF_OPT_BEGIN_V(texture_depth,enum,def,"0:3") \
	DRI_CONF_DESC_BEGIN(en,gettext("Texture color depth")) \
                DRI_CONF_ENUM(0,gettext("Prefer frame buffer color depth")) \
                DRI_CONF_ENUM(1,gettext("Prefer 32 bits per texel")) \
                DRI_CONF_ENUM(2,gettext("Prefer 16 bits per texel")) \
                DRI_CONF_ENUM(3,gettext("Force 16 bits per texel")) \
        DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_DEF_MAX_ANISOTROPY(def,range) \
DRI_CONF_OPT_BEGIN_V(def_max_anisotropy,float,def,range) \
        DRI_CONF_DESC(en,gettext("Initial maximum value for anisotropic texture filtering")) \
DRI_CONF_OPT_END

#define DRI_CONF_NO_NEG_LOD_BIAS(def) \
DRI_CONF_OPT_BEGIN_B(no_neg_lod_bias, def) \
        DRI_CONF_DESC(en,gettext("Forbid negative texture LOD bias")) \
DRI_CONF_OPT_END

#define DRI_CONF_PRECISE_TRIG(def) \
DRI_CONF_OPT_BEGIN_B(precise_trig, def) \
        DRI_CONF_DESC(en,gettext("Prefer accuracy over performance in trig functions")) \
DRI_CONF_OPT_END

#define DRI_CONF_COLOR_REDUCTION_ROUND 0
#define DRI_CONF_COLOR_REDUCTION_DITHER 1
#define DRI_CONF_COLOR_REDUCTION(def) \
DRI_CONF_OPT_BEGIN_V(color_reduction,enum,def,"0:1") \
        DRI_CONF_DESC_BEGIN(en,gettext("Initial color reduction method")) \
                DRI_CONF_ENUM(0,gettext("Round colors")) \
                DRI_CONF_ENUM(1,gettext("Dither colors")) \
        DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_ROUND_TRUNC 0
#define DRI_CONF_ROUND_ROUND 1
#define DRI_CONF_ROUND_MODE(def) \
DRI_CONF_OPT_BEGIN_V(round_mode,enum,def,"0:1") \
	DRI_CONF_DESC_BEGIN(en,gettext("Color rounding method")) \
                DRI_CONF_ENUM(0,gettext("Round color components downward")) \
                DRI_CONF_ENUM(1,gettext("Round to nearest color")) \
        DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_DITHER_XERRORDIFF 0
#define DRI_CONF_DITHER_XERRORDIFFRESET 1
#define DRI_CONF_DITHER_ORDERED 2
#define DRI_CONF_DITHER_MODE(def) \
DRI_CONF_OPT_BEGIN_V(dither_mode,enum,def,"0:2") \
	DRI_CONF_DESC_BEGIN(en,gettext("Color dithering method")) \
                DRI_CONF_ENUM(0,gettext("Horizontal error diffusion")) \
                DRI_CONF_ENUM(1,gettext("Horizontal error diffusion, reset error at line start")) \
                DRI_CONF_ENUM(2,gettext("Ordered 2D color dithering")) \
        DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_FLOAT_DEPTH(def) \
DRI_CONF_OPT_BEGIN_B(float_depth, def) \
        DRI_CONF_DESC(en,gettext("Floating point depth buffer")) \
DRI_CONF_OPT_END

#define DRI_CONF_PP_CELSHADE(def) \
DRI_CONF_OPT_BEGIN_V(pp_celshade,enum,def,"0:1") \
        DRI_CONF_DESC(en,gettext("A post-processing filter to cel-shade the output")) \
DRI_CONF_OPT_END

#define DRI_CONF_PP_NORED(def) \
DRI_CONF_OPT_BEGIN_V(pp_nored,enum,def,"0:1") \
        DRI_CONF_DESC(en,gettext("A post-processing filter to remove the red channel")) \
DRI_CONF_OPT_END

#define DRI_CONF_PP_NOGREEN(def) \
DRI_CONF_OPT_BEGIN_V(pp_nogreen,enum,def,"0:1") \
        DRI_CONF_DESC(en,gettext("A post-processing filter to remove the green channel")) \
DRI_CONF_OPT_END

#define DRI_CONF_PP_NOBLUE(def) \
DRI_CONF_OPT_BEGIN_V(pp_noblue,enum,def,"0:1") \
        DRI_CONF_DESC(en,gettext("A post-processing filter to remove the blue channel")) \
DRI_CONF_OPT_END

#define DRI_CONF_PP_JIMENEZMLAA(def,min,max) \
DRI_CONF_OPT_BEGIN_V(pp_jimenezmlaa,int,def, # min ":" # max ) \
        DRI_CONF_DESC(en,gettext("Morphological anti-aliasing based on Jimenez\\\' MLAA. 0 to disable, 8 for default quality")) \
DRI_CONF_OPT_END

#define DRI_CONF_PP_JIMENEZMLAA_COLOR(def,min,max) \
DRI_CONF_OPT_BEGIN_V(pp_jimenezmlaa_color,int,def, # min ":" # max ) \
        DRI_CONF_DESC(en,gettext("Morphological anti-aliasing based on Jimenez\\\' MLAA. 0 to disable, 8 for default quality. Color version, usable with 2d GL apps")) \
DRI_CONF_OPT_END



/**
 * \brief Performance-related options
 */
#define DRI_CONF_SECTION_PERFORMANCE \
DRI_CONF_SECTION_BEGIN \
        DRI_CONF_DESC(en,gettext("Performance"))

#define DRI_CONF_TCL_SW 0
#define DRI_CONF_TCL_PIPELINED 1
#define DRI_CONF_TCL_VTXFMT 2
#define DRI_CONF_TCL_CODEGEN 3
#define DRI_CONF_TCL_MODE(def) \
DRI_CONF_OPT_BEGIN_V(tcl_mode,enum,def,"0:3") \
        DRI_CONF_DESC_BEGIN(en,gettext("TCL mode (Transformation, Clipping, Lighting)")) \
                DRI_CONF_ENUM(0,gettext("Use software TCL pipeline")) \
                DRI_CONF_ENUM(1,gettext("Use hardware TCL as first TCL pipeline stage")) \
                DRI_CONF_ENUM(2,gettext("Bypass the TCL pipeline")) \
                DRI_CONF_ENUM(3,gettext("Bypass the TCL pipeline with state-based machine code generated on-the-fly")) \
        DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_FTHROTTLE_BUSY 0
#define DRI_CONF_FTHROTTLE_USLEEPS 1
#define DRI_CONF_FTHROTTLE_IRQS 2
#define DRI_CONF_FTHROTTLE_MODE(def) \
DRI_CONF_OPT_BEGIN_V(fthrottle_mode,enum,def,"0:2") \
        DRI_CONF_DESC_BEGIN(en,gettext("Method to limit rendering latency")) \
                DRI_CONF_ENUM(0,gettext("Busy waiting for the graphics hardware")) \
                DRI_CONF_ENUM(1,gettext("Sleep for brief intervals while waiting for the graphics hardware")) \
                DRI_CONF_ENUM(2,gettext("Let the graphics hardware emit a software interrupt and sleep")) \
        DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_VBLANK_NEVER 0
#define DRI_CONF_VBLANK_DEF_INTERVAL_0 1
#define DRI_CONF_VBLANK_DEF_INTERVAL_1 2
#define DRI_CONF_VBLANK_ALWAYS_SYNC 3
#define DRI_CONF_VBLANK_MODE(def) \
DRI_CONF_OPT_BEGIN_V(vblank_mode,enum,def,"0:3") \
        DRI_CONF_DESC_BEGIN(en,gettext("Synchronization with vertical refresh (swap intervals)")) \
                DRI_CONF_ENUM(0,gettext("Never synchronize with vertical refresh, ignore application's choice")) \
                DRI_CONF_ENUM(1,gettext("Initial swap interval 0, obey application's choice")) \
                DRI_CONF_ENUM(2,gettext("Initial swap interval 1, obey application's choice")) \
                DRI_CONF_ENUM(3,gettext("Always synchronize with vertical refresh, application chooses the minimum swap interval")) \
        DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_HYPERZ_DISABLED 0
#define DRI_CONF_HYPERZ_ENABLED 1
#define DRI_CONF_HYPERZ(def) \
DRI_CONF_OPT_BEGIN_B(hyperz, def) \
        DRI_CONF_DESC(en,gettext("Use HyperZ to boost performance")) \
DRI_CONF_OPT_END

#define DRI_CONF_MAX_TEXTURE_UNITS(def,min,max) \
DRI_CONF_OPT_BEGIN_V(texture_units,int,def, # min ":" # max ) \
        DRI_CONF_DESC(en,gettext("Number of texture units used")) \
DRI_CONF_OPT_END

#define DRI_CONF_TEXTURE_BLEND_QUALITY(def,range) \
DRI_CONF_OPT_BEGIN_V(texture_blend_quality,float,def,range) \
	DRI_CONF_DESC(en,gettext("Texture filtering quality vs. speed, AKA ???brilinear??? texture filtering")) \
DRI_CONF_OPT_END

#define DRI_CONF_TEXTURE_HEAPS_ALL 0
#define DRI_CONF_TEXTURE_HEAPS_CARD 1
#define DRI_CONF_TEXTURE_HEAPS_GART 2
#define DRI_CONF_TEXTURE_HEAPS(def) \
DRI_CONF_OPT_BEGIN_V(texture_heaps,enum,def,"0:2") \
	DRI_CONF_DESC_BEGIN(en,gettext("Used types of texture memory")) \
		DRI_CONF_ENUM(0,gettext("All available memory")) \
		DRI_CONF_ENUM(1,gettext("Only card memory (if available)")) \
		DRI_CONF_ENUM(2,gettext("Only GART (AGP/PCIE) memory (if available)")) \
	DRI_CONF_DESC_END \
DRI_CONF_OPT_END

#define DRI_CONF_MESA_GLTHREAD(def) \
DRI_CONF_OPT_BEGIN_B(mesa_glthread, def) \
        DRI_CONF_DESC(en,gettext("Enable offloading GL driver work to a separate thread")) \
DRI_CONF_OPT_END

#define DRI_CONF_MESA_NO_ERROR(def) \
DRI_CONF_OPT_BEGIN_B(mesa_no_error, def) \
        DRI_CONF_DESC(en,gettext("Disable GL driver error checking")) \
DRI_CONF_OPT_END

#define DRI_CONF_DISABLE_EXT_BUFFER_AGE(def) \
DRI_CONF_OPT_BEGIN_B(glx_disable_ext_buffer_age, def) \
   DRI_CONF_DESC(en, gettext("Disable the GLX_EXT_buffer_age extension")) \
DRI_CONF_OPT_END

#define DRI_CONF_DISABLE_OML_SYNC_CONTROL(def) \
DRI_CONF_OPT_BEGIN_B(glx_disable_oml_sync_control, def) \
   DRI_CONF_DESC(en, gettext("Disable the GLX_OML_sync_control extension")) \
DRI_CONF_OPT_END


/**
 * \brief Software-fallback options.  To allow using features (like
 * GL_ARB_vertex_program) on GPUs that don't otherwise support the feature.
 */
#define DRI_CONF_SECTION_SOFTWARE \
DRI_CONF_SECTION_BEGIN \
        DRI_CONF_DESC(en,gettext("Features that are not hardware-accelerated"))

#define DRI_CONF_ARB_VERTEX_PROGRAM(def) \
DRI_CONF_OPT_BEGIN_B(arb_vertex_program, def) \
        DRI_CONF_DESC(en,gettext("Enable extension GL_ARB_vertex_program")) \
DRI_CONF_OPT_END



/**
 * \brief Miscellaneous configuration options
 */
#define DRI_CONF_SECTION_MISCELLANEOUS \
DRI_CONF_SECTION_BEGIN \
        DRI_CONF_DESC(en,gettext("Miscellaneous"))

#define DRI_CONF_ALWAYS_HAVE_DEPTH_BUFFER(def) \
DRI_CONF_OPT_BEGIN_B(always_have_depth_buffer, def) \
        DRI_CONF_DESC(en,gettext("Create all visuals with a depth buffer")) \
DRI_CONF_OPT_END

#define DRI_CONF_GLSL_ZERO_INIT(def) \
DRI_CONF_OPT_BEGIN_B(glsl_zero_init, def) \
        DRI_CONF_DESC(en,gettext("Force uninitialized variables to default to zero")) \
DRI_CONF_OPT_END

/**
 * \brief Initialization configuration options
 */
#define DRI_CONF_SECTION_INITIALIZATION \
DRI_CONF_SECTION_BEGIN \
        DRI_CONF_DESC(en,gettext("Initialization"))

#define DRI_CONF_DEVICE_ID_PATH_TAG(def) \
DRI_CONF_OPT_BEGIN(device_id, string, def) \
        DRI_CONF_DESC(en,gettext("Define the graphic device to use if possible")) \
DRI_CONF_OPT_END

/**
 * \brief Gallium-Nine specific configuration options
 */

#define DRI_CONF_SECTION_NINE \
DRI_CONF_SECTION_BEGIN \
        DRI_CONF_DESC(en,gettext("Gallium Nine"))

#define DRI_CONF_NINE_THROTTLE(def) \
DRI_CONF_OPT_BEGIN(throttle_value, int, def) \
        DRI_CONF_DESC(en,gettext("Define the throttling value. -1 for no throttling, -2 for default (usually 2), 0 for glfinish behaviour")) \
DRI_CONF_OPT_END

#define DRI_CONF_NINE_THREADSUBMIT(def) \
DRI_CONF_OPT_BEGIN_B(thread_submit, def) \
        DRI_CONF_DESC(en,gettext("Use an additional thread to submit buffers.")) \
DRI_CONF_OPT_END

#define DRI_CONF_NINE_OVERRIDEVENDOR(def) \
DRI_CONF_OPT_BEGIN(override_vendorid, int, def) \
        DRI_CONF_DESC(en,gettext("Define the vendor_id to report. This allows faking another hardware vendor.")) \
DRI_CONF_OPT_END

#define DRI_CONF_NINE_ALLOWDISCARDDELAYEDRELEASE(def) \
DRI_CONF_OPT_BEGIN_B(discard_delayed_release, def) \
        DRI_CONF_DESC(en,gettext("Whether to allow the display server to release buffers with a delay when using d3d's presentation mode DISCARD. Default to true. Set to false if suffering from lag (thread_submit=true can also help in this situation).")) \
DRI_CONF_OPT_END

#define DRI_CONF_NINE_TEARFREEDISCARD(def) \
DRI_CONF_OPT_BEGIN_B(tearfree_discard, def) \
        DRI_CONF_DESC(en,gettext("Whether to make d3d's presentation mode DISCARD (games usually use that mode) Tear Free. If rendering above screen refresh, some frames will get skipped. false by default.")) \
DRI_CONF_OPT_END

#define DRI_CONF_NINE_CSMT(def) \
DRI_CONF_OPT_BEGIN(csmt_force, int, def) \
        DRI_CONF_DESC(en,gettext("If set to 1, force gallium nine CSMT. If set to 0, disable it. By default (-1) CSMT is enabled on known thread-safe drivers.")) \
DRI_CONF_OPT_END

/**
 * \brief radeonsi specific configuration options
 */

#define DRI_CONF_RADEONSI_ENABLE_SISCHED(def) \
DRI_CONF_OPT_BEGIN_B(radeonsi_enable_sisched, def) \
        DRI_CONF_DESC(en,gettext("Use the LLVM sisched option for shader compiles")) \
DRI_CONF_OPT_END

#define DRI_CONF_RADEONSI_ASSUME_NO_Z_FIGHTS(def) \
DRI_CONF_OPT_BEGIN_B(radeonsi_assume_no_z_fights, def) \
        DRI_CONF_DESC(en,gettext("Assume no Z fights (enables aggressive out-of-order rasterization to improve performance; may cause rendering errors)")) \
DRI_CONF_OPT_END

#define DRI_CONF_RADEONSI_COMMUTATIVE_BLEND_ADD(def) \
DRI_CONF_OPT_BEGIN_B(radeonsi_commutative_blend_add, def) \
        DRI_CONF_DESC(en,gettext("Commutative additive blending optimizations (may cause rendering errors)")) \
DRI_CONF_OPT_END

#define DRI_CONF_RADEONSI_CLEAR_DB_CACHE_BEFORE_CLEAR(def) \
DRI_CONF_OPT_BEGIN_B(radeonsi_clear_db_cache_before_clear, def) \
        DRI_CONF_DESC(en,"Clear DB cache before fast depth clear") \
DRI_CONF_OPT_END
