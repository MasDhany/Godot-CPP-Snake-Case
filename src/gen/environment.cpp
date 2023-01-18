#include "environment.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "sky.hpp"
#include "texture.hpp"


namespace gd {


environment::___method_bindings environment::___mb = {};

void *environment::_detail_class_tag = nullptr;

void environment::___init_method_bindings() {
	___mb.mb_get_adjustment_brightness = gd::api->godot_method_bind_get_method("Environment", "get_adjustment_brightness");
	___mb.mb_get_adjustment_color_correction = gd::api->godot_method_bind_get_method("Environment", "get_adjustment_color_correction");
	___mb.mb_get_adjustment_contrast = gd::api->godot_method_bind_get_method("Environment", "get_adjustment_contrast");
	___mb.mb_get_adjustment_saturation = gd::api->godot_method_bind_get_method("Environment", "get_adjustment_saturation");
	___mb.mb_get_ambient_light_color = gd::api->godot_method_bind_get_method("Environment", "get_ambient_light_color");
	___mb.mb_get_ambient_light_energy = gd::api->godot_method_bind_get_method("Environment", "get_ambient_light_energy");
	___mb.mb_get_ambient_light_sky_contribution = gd::api->godot_method_bind_get_method("Environment", "get_ambient_light_sky_contribution");
	___mb.mb_get_background = gd::api->godot_method_bind_get_method("Environment", "get_background");
	___mb.mb_get_bg_color = gd::api->godot_method_bind_get_method("Environment", "get_bg_color");
	___mb.mb_get_bg_energy = gd::api->godot_method_bind_get_method("Environment", "get_bg_energy");
	___mb.mb_get_camera_feed_id = gd::api->godot_method_bind_get_method("Environment", "get_camera_feed_id");
	___mb.mb_get_canvas_max_layer = gd::api->godot_method_bind_get_method("Environment", "get_canvas_max_layer");
	___mb.mb_get_dof_blur_far_amount = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_far_amount");
	___mb.mb_get_dof_blur_far_distance = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_far_distance");
	___mb.mb_get_dof_blur_far_quality = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_far_quality");
	___mb.mb_get_dof_blur_far_transition = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_far_transition");
	___mb.mb_get_dof_blur_near_amount = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_near_amount");
	___mb.mb_get_dof_blur_near_distance = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_near_distance");
	___mb.mb_get_dof_blur_near_quality = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_near_quality");
	___mb.mb_get_dof_blur_near_transition = gd::api->godot_method_bind_get_method("Environment", "get_dof_blur_near_transition");
	___mb.mb_get_fog_color = gd::api->godot_method_bind_get_method("Environment", "get_fog_color");
	___mb.mb_get_fog_depth_begin = gd::api->godot_method_bind_get_method("Environment", "get_fog_depth_begin");
	___mb.mb_get_fog_depth_curve = gd::api->godot_method_bind_get_method("Environment", "get_fog_depth_curve");
	___mb.mb_get_fog_depth_end = gd::api->godot_method_bind_get_method("Environment", "get_fog_depth_end");
	___mb.mb_get_fog_height_curve = gd::api->godot_method_bind_get_method("Environment", "get_fog_height_curve");
	___mb.mb_get_fog_height_max = gd::api->godot_method_bind_get_method("Environment", "get_fog_height_max");
	___mb.mb_get_fog_height_min = gd::api->godot_method_bind_get_method("Environment", "get_fog_height_min");
	___mb.mb_get_fog_sun_amount = gd::api->godot_method_bind_get_method("Environment", "get_fog_sun_amount");
	___mb.mb_get_fog_sun_color = gd::api->godot_method_bind_get_method("Environment", "get_fog_sun_color");
	___mb.mb_get_fog_transmit_curve = gd::api->godot_method_bind_get_method("Environment", "get_fog_transmit_curve");
	___mb.mb_get_glow_blend_mode = gd::api->godot_method_bind_get_method("Environment", "get_glow_blend_mode");
	___mb.mb_get_glow_bloom = gd::api->godot_method_bind_get_method("Environment", "get_glow_bloom");
	___mb.mb_get_glow_hdr_bleed_scale = gd::api->godot_method_bind_get_method("Environment", "get_glow_hdr_bleed_scale");
	___mb.mb_get_glow_hdr_bleed_threshold = gd::api->godot_method_bind_get_method("Environment", "get_glow_hdr_bleed_threshold");
	___mb.mb_get_glow_hdr_luminance_cap = gd::api->godot_method_bind_get_method("Environment", "get_glow_hdr_luminance_cap");
	___mb.mb_get_glow_intensity = gd::api->godot_method_bind_get_method("Environment", "get_glow_intensity");
	___mb.mb_get_glow_strength = gd::api->godot_method_bind_get_method("Environment", "get_glow_strength");
	___mb.mb_get_sky = gd::api->godot_method_bind_get_method("Environment", "get_sky");
	___mb.mb_get_sky_custom_fov = gd::api->godot_method_bind_get_method("Environment", "get_sky_custom_fov");
	___mb.mb_get_sky_orientation = gd::api->godot_method_bind_get_method("Environment", "get_sky_orientation");
	___mb.mb_get_sky_rotation = gd::api->godot_method_bind_get_method("Environment", "get_sky_rotation");
	___mb.mb_get_sky_rotation_degrees = gd::api->godot_method_bind_get_method("Environment", "get_sky_rotation_degrees");
	___mb.mb_get_ssao_ao_channel_affect = gd::api->godot_method_bind_get_method("Environment", "get_ssao_ao_channel_affect");
	___mb.mb_get_ssao_bias = gd::api->godot_method_bind_get_method("Environment", "get_ssao_bias");
	___mb.mb_get_ssao_blur = gd::api->godot_method_bind_get_method("Environment", "get_ssao_blur");
	___mb.mb_get_ssao_color = gd::api->godot_method_bind_get_method("Environment", "get_ssao_color");
	___mb.mb_get_ssao_direct_light_affect = gd::api->godot_method_bind_get_method("Environment", "get_ssao_direct_light_affect");
	___mb.mb_get_ssao_edge_sharpness = gd::api->godot_method_bind_get_method("Environment", "get_ssao_edge_sharpness");
	___mb.mb_get_ssao_intensity = gd::api->godot_method_bind_get_method("Environment", "get_ssao_intensity");
	___mb.mb_get_ssao_intensity2 = gd::api->godot_method_bind_get_method("Environment", "get_ssao_intensity2");
	___mb.mb_get_ssao_quality = gd::api->godot_method_bind_get_method("Environment", "get_ssao_quality");
	___mb.mb_get_ssao_radius = gd::api->godot_method_bind_get_method("Environment", "get_ssao_radius");
	___mb.mb_get_ssao_radius2 = gd::api->godot_method_bind_get_method("Environment", "get_ssao_radius2");
	___mb.mb_get_ssr_depth_tolerance = gd::api->godot_method_bind_get_method("Environment", "get_ssr_depth_tolerance");
	___mb.mb_get_ssr_fade_in = gd::api->godot_method_bind_get_method("Environment", "get_ssr_fade_in");
	___mb.mb_get_ssr_fade_out = gd::api->godot_method_bind_get_method("Environment", "get_ssr_fade_out");
	___mb.mb_get_ssr_max_steps = gd::api->godot_method_bind_get_method("Environment", "get_ssr_max_steps");
	___mb.mb_get_tonemap_auto_exposure = gd::api->godot_method_bind_get_method("Environment", "get_tonemap_auto_exposure");
	___mb.mb_get_tonemap_auto_exposure_grey = gd::api->godot_method_bind_get_method("Environment", "get_tonemap_auto_exposure_grey");
	___mb.mb_get_tonemap_auto_exposure_max = gd::api->godot_method_bind_get_method("Environment", "get_tonemap_auto_exposure_max");
	___mb.mb_get_tonemap_auto_exposure_min = gd::api->godot_method_bind_get_method("Environment", "get_tonemap_auto_exposure_min");
	___mb.mb_get_tonemap_auto_exposure_speed = gd::api->godot_method_bind_get_method("Environment", "get_tonemap_auto_exposure_speed");
	___mb.mb_get_tonemap_exposure = gd::api->godot_method_bind_get_method("Environment", "get_tonemap_exposure");
	___mb.mb_get_tonemap_white = gd::api->godot_method_bind_get_method("Environment", "get_tonemap_white");
	___mb.mb_get_tonemapper = gd::api->godot_method_bind_get_method("Environment", "get_tonemapper");
	___mb.mb_is_adjustment_enabled = gd::api->godot_method_bind_get_method("Environment", "is_adjustment_enabled");
	___mb.mb_is_dof_blur_far_enabled = gd::api->godot_method_bind_get_method("Environment", "is_dof_blur_far_enabled");
	___mb.mb_is_dof_blur_near_enabled = gd::api->godot_method_bind_get_method("Environment", "is_dof_blur_near_enabled");
	___mb.mb_is_fog_depth_enabled = gd::api->godot_method_bind_get_method("Environment", "is_fog_depth_enabled");
	___mb.mb_is_fog_enabled = gd::api->godot_method_bind_get_method("Environment", "is_fog_enabled");
	___mb.mb_is_fog_height_enabled = gd::api->godot_method_bind_get_method("Environment", "is_fog_height_enabled");
	___mb.mb_is_fog_transmit_enabled = gd::api->godot_method_bind_get_method("Environment", "is_fog_transmit_enabled");
	___mb.mb_is_glow_bicubic_upscale_enabled = gd::api->godot_method_bind_get_method("Environment", "is_glow_bicubic_upscale_enabled");
	___mb.mb_is_glow_enabled = gd::api->godot_method_bind_get_method("Environment", "is_glow_enabled");
	___mb.mb_is_glow_high_quality_enabled = gd::api->godot_method_bind_get_method("Environment", "is_glow_high_quality_enabled");
	___mb.mb_is_glow_level_enabled = gd::api->godot_method_bind_get_method("Environment", "is_glow_level_enabled");
	___mb.mb_is_ssao_enabled = gd::api->godot_method_bind_get_method("Environment", "is_ssao_enabled");
	___mb.mb_is_ssr_enabled = gd::api->godot_method_bind_get_method("Environment", "is_ssr_enabled");
	___mb.mb_is_ssr_rough = gd::api->godot_method_bind_get_method("Environment", "is_ssr_rough");
	___mb.mb_set_adjustment_brightness = gd::api->godot_method_bind_get_method("Environment", "set_adjustment_brightness");
	___mb.mb_set_adjustment_color_correction = gd::api->godot_method_bind_get_method("Environment", "set_adjustment_color_correction");
	___mb.mb_set_adjustment_contrast = gd::api->godot_method_bind_get_method("Environment", "set_adjustment_contrast");
	___mb.mb_set_adjustment_enable = gd::api->godot_method_bind_get_method("Environment", "set_adjustment_enable");
	___mb.mb_set_adjustment_saturation = gd::api->godot_method_bind_get_method("Environment", "set_adjustment_saturation");
	___mb.mb_set_ambient_light_color = gd::api->godot_method_bind_get_method("Environment", "set_ambient_light_color");
	___mb.mb_set_ambient_light_energy = gd::api->godot_method_bind_get_method("Environment", "set_ambient_light_energy");
	___mb.mb_set_ambient_light_sky_contribution = gd::api->godot_method_bind_get_method("Environment", "set_ambient_light_sky_contribution");
	___mb.mb_set_background = gd::api->godot_method_bind_get_method("Environment", "set_background");
	___mb.mb_set_bg_color = gd::api->godot_method_bind_get_method("Environment", "set_bg_color");
	___mb.mb_set_bg_energy = gd::api->godot_method_bind_get_method("Environment", "set_bg_energy");
	___mb.mb_set_camera_feed_id = gd::api->godot_method_bind_get_method("Environment", "set_camera_feed_id");
	___mb.mb_set_canvas_max_layer = gd::api->godot_method_bind_get_method("Environment", "set_canvas_max_layer");
	___mb.mb_set_dof_blur_far_amount = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_far_amount");
	___mb.mb_set_dof_blur_far_distance = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_far_distance");
	___mb.mb_set_dof_blur_far_enabled = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_far_enabled");
	___mb.mb_set_dof_blur_far_quality = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_far_quality");
	___mb.mb_set_dof_blur_far_transition = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_far_transition");
	___mb.mb_set_dof_blur_near_amount = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_near_amount");
	___mb.mb_set_dof_blur_near_distance = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_near_distance");
	___mb.mb_set_dof_blur_near_enabled = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_near_enabled");
	___mb.mb_set_dof_blur_near_quality = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_near_quality");
	___mb.mb_set_dof_blur_near_transition = gd::api->godot_method_bind_get_method("Environment", "set_dof_blur_near_transition");
	___mb.mb_set_fog_color = gd::api->godot_method_bind_get_method("Environment", "set_fog_color");
	___mb.mb_set_fog_depth_begin = gd::api->godot_method_bind_get_method("Environment", "set_fog_depth_begin");
	___mb.mb_set_fog_depth_curve = gd::api->godot_method_bind_get_method("Environment", "set_fog_depth_curve");
	___mb.mb_set_fog_depth_enabled = gd::api->godot_method_bind_get_method("Environment", "set_fog_depth_enabled");
	___mb.mb_set_fog_depth_end = gd::api->godot_method_bind_get_method("Environment", "set_fog_depth_end");
	___mb.mb_set_fog_enabled = gd::api->godot_method_bind_get_method("Environment", "set_fog_enabled");
	___mb.mb_set_fog_height_curve = gd::api->godot_method_bind_get_method("Environment", "set_fog_height_curve");
	___mb.mb_set_fog_height_enabled = gd::api->godot_method_bind_get_method("Environment", "set_fog_height_enabled");
	___mb.mb_set_fog_height_max = gd::api->godot_method_bind_get_method("Environment", "set_fog_height_max");
	___mb.mb_set_fog_height_min = gd::api->godot_method_bind_get_method("Environment", "set_fog_height_min");
	___mb.mb_set_fog_sun_amount = gd::api->godot_method_bind_get_method("Environment", "set_fog_sun_amount");
	___mb.mb_set_fog_sun_color = gd::api->godot_method_bind_get_method("Environment", "set_fog_sun_color");
	___mb.mb_set_fog_transmit_curve = gd::api->godot_method_bind_get_method("Environment", "set_fog_transmit_curve");
	___mb.mb_set_fog_transmit_enabled = gd::api->godot_method_bind_get_method("Environment", "set_fog_transmit_enabled");
	___mb.mb_set_glow_bicubic_upscale = gd::api->godot_method_bind_get_method("Environment", "set_glow_bicubic_upscale");
	___mb.mb_set_glow_blend_mode = gd::api->godot_method_bind_get_method("Environment", "set_glow_blend_mode");
	___mb.mb_set_glow_bloom = gd::api->godot_method_bind_get_method("Environment", "set_glow_bloom");
	___mb.mb_set_glow_enabled = gd::api->godot_method_bind_get_method("Environment", "set_glow_enabled");
	___mb.mb_set_glow_hdr_bleed_scale = gd::api->godot_method_bind_get_method("Environment", "set_glow_hdr_bleed_scale");
	___mb.mb_set_glow_hdr_bleed_threshold = gd::api->godot_method_bind_get_method("Environment", "set_glow_hdr_bleed_threshold");
	___mb.mb_set_glow_hdr_luminance_cap = gd::api->godot_method_bind_get_method("Environment", "set_glow_hdr_luminance_cap");
	___mb.mb_set_glow_high_quality = gd::api->godot_method_bind_get_method("Environment", "set_glow_high_quality");
	___mb.mb_set_glow_intensity = gd::api->godot_method_bind_get_method("Environment", "set_glow_intensity");
	___mb.mb_set_glow_level = gd::api->godot_method_bind_get_method("Environment", "set_glow_level");
	___mb.mb_set_glow_strength = gd::api->godot_method_bind_get_method("Environment", "set_glow_strength");
	___mb.mb_set_sky = gd::api->godot_method_bind_get_method("Environment", "set_sky");
	___mb.mb_set_sky_custom_fov = gd::api->godot_method_bind_get_method("Environment", "set_sky_custom_fov");
	___mb.mb_set_sky_orientation = gd::api->godot_method_bind_get_method("Environment", "set_sky_orientation");
	___mb.mb_set_sky_rotation = gd::api->godot_method_bind_get_method("Environment", "set_sky_rotation");
	___mb.mb_set_sky_rotation_degrees = gd::api->godot_method_bind_get_method("Environment", "set_sky_rotation_degrees");
	___mb.mb_set_ssao_ao_channel_affect = gd::api->godot_method_bind_get_method("Environment", "set_ssao_ao_channel_affect");
	___mb.mb_set_ssao_bias = gd::api->godot_method_bind_get_method("Environment", "set_ssao_bias");
	___mb.mb_set_ssao_blur = gd::api->godot_method_bind_get_method("Environment", "set_ssao_blur");
	___mb.mb_set_ssao_color = gd::api->godot_method_bind_get_method("Environment", "set_ssao_color");
	___mb.mb_set_ssao_direct_light_affect = gd::api->godot_method_bind_get_method("Environment", "set_ssao_direct_light_affect");
	___mb.mb_set_ssao_edge_sharpness = gd::api->godot_method_bind_get_method("Environment", "set_ssao_edge_sharpness");
	___mb.mb_set_ssao_enabled = gd::api->godot_method_bind_get_method("Environment", "set_ssao_enabled");
	___mb.mb_set_ssao_intensity = gd::api->godot_method_bind_get_method("Environment", "set_ssao_intensity");
	___mb.mb_set_ssao_intensity2 = gd::api->godot_method_bind_get_method("Environment", "set_ssao_intensity2");
	___mb.mb_set_ssao_quality = gd::api->godot_method_bind_get_method("Environment", "set_ssao_quality");
	___mb.mb_set_ssao_radius = gd::api->godot_method_bind_get_method("Environment", "set_ssao_radius");
	___mb.mb_set_ssao_radius2 = gd::api->godot_method_bind_get_method("Environment", "set_ssao_radius2");
	___mb.mb_set_ssr_depth_tolerance = gd::api->godot_method_bind_get_method("Environment", "set_ssr_depth_tolerance");
	___mb.mb_set_ssr_enabled = gd::api->godot_method_bind_get_method("Environment", "set_ssr_enabled");
	___mb.mb_set_ssr_fade_in = gd::api->godot_method_bind_get_method("Environment", "set_ssr_fade_in");
	___mb.mb_set_ssr_fade_out = gd::api->godot_method_bind_get_method("Environment", "set_ssr_fade_out");
	___mb.mb_set_ssr_max_steps = gd::api->godot_method_bind_get_method("Environment", "set_ssr_max_steps");
	___mb.mb_set_ssr_rough = gd::api->godot_method_bind_get_method("Environment", "set_ssr_rough");
	___mb.mb_set_tonemap_auto_exposure = gd::api->godot_method_bind_get_method("Environment", "set_tonemap_auto_exposure");
	___mb.mb_set_tonemap_auto_exposure_grey = gd::api->godot_method_bind_get_method("Environment", "set_tonemap_auto_exposure_grey");
	___mb.mb_set_tonemap_auto_exposure_max = gd::api->godot_method_bind_get_method("Environment", "set_tonemap_auto_exposure_max");
	___mb.mb_set_tonemap_auto_exposure_min = gd::api->godot_method_bind_get_method("Environment", "set_tonemap_auto_exposure_min");
	___mb.mb_set_tonemap_auto_exposure_speed = gd::api->godot_method_bind_get_method("Environment", "set_tonemap_auto_exposure_speed");
	___mb.mb_set_tonemap_exposure = gd::api->godot_method_bind_get_method("Environment", "set_tonemap_exposure");
	___mb.mb_set_tonemap_white = gd::api->godot_method_bind_get_method("Environment", "set_tonemap_white");
	___mb.mb_set_tonemapper = gd::api->godot_method_bind_get_method("Environment", "set_tonemapper");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Environment");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

environment *environment::_new()
{
	return (environment *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Environment")());
}
real_t environment::get_adjustment_brightness() const {
	return ___godot_icall_float(___mb.mb_get_adjustment_brightness, (const object *) this);
}

ref<texture> environment::get_adjustment_color_correction() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_adjustment_color_correction, (const object *) this));
}

real_t environment::get_adjustment_contrast() const {
	return ___godot_icall_float(___mb.mb_get_adjustment_contrast, (const object *) this);
}

real_t environment::get_adjustment_saturation() const {
	return ___godot_icall_float(___mb.mb_get_adjustment_saturation, (const object *) this);
}

color environment::get_ambient_light_color() const {
	return ___godot_icall_Color(___mb.mb_get_ambient_light_color, (const object *) this);
}

real_t environment::get_ambient_light_energy() const {
	return ___godot_icall_float(___mb.mb_get_ambient_light_energy, (const object *) this);
}

real_t environment::get_ambient_light_sky_contribution() const {
	return ___godot_icall_float(___mb.mb_get_ambient_light_sky_contribution, (const object *) this);
}

environment::BGMode environment::get_background() const {
	return (environment::BGMode) ___godot_icall_int(___mb.mb_get_background, (const object *) this);
}

color environment::get_bg_color() const {
	return ___godot_icall_Color(___mb.mb_get_bg_color, (const object *) this);
}

real_t environment::get_bg_energy() const {
	return ___godot_icall_float(___mb.mb_get_bg_energy, (const object *) this);
}

int64_t environment::get_camera_feed_id() const {
	return ___godot_icall_int(___mb.mb_get_camera_feed_id, (const object *) this);
}

int64_t environment::get_canvas_max_layer() const {
	return ___godot_icall_int(___mb.mb_get_canvas_max_layer, (const object *) this);
}

real_t environment::get_dof_blur_far_amount() const {
	return ___godot_icall_float(___mb.mb_get_dof_blur_far_amount, (const object *) this);
}

real_t environment::get_dof_blur_far_distance() const {
	return ___godot_icall_float(___mb.mb_get_dof_blur_far_distance, (const object *) this);
}

environment::DOFBlurQuality environment::get_dof_blur_far_quality() const {
	return (environment::DOFBlurQuality) ___godot_icall_int(___mb.mb_get_dof_blur_far_quality, (const object *) this);
}

real_t environment::get_dof_blur_far_transition() const {
	return ___godot_icall_float(___mb.mb_get_dof_blur_far_transition, (const object *) this);
}

real_t environment::get_dof_blur_near_amount() const {
	return ___godot_icall_float(___mb.mb_get_dof_blur_near_amount, (const object *) this);
}

real_t environment::get_dof_blur_near_distance() const {
	return ___godot_icall_float(___mb.mb_get_dof_blur_near_distance, (const object *) this);
}

environment::DOFBlurQuality environment::get_dof_blur_near_quality() const {
	return (environment::DOFBlurQuality) ___godot_icall_int(___mb.mb_get_dof_blur_near_quality, (const object *) this);
}

real_t environment::get_dof_blur_near_transition() const {
	return ___godot_icall_float(___mb.mb_get_dof_blur_near_transition, (const object *) this);
}

color environment::get_fog_color() const {
	return ___godot_icall_Color(___mb.mb_get_fog_color, (const object *) this);
}

real_t environment::get_fog_depth_begin() const {
	return ___godot_icall_float(___mb.mb_get_fog_depth_begin, (const object *) this);
}

real_t environment::get_fog_depth_curve() const {
	return ___godot_icall_float(___mb.mb_get_fog_depth_curve, (const object *) this);
}

real_t environment::get_fog_depth_end() const {
	return ___godot_icall_float(___mb.mb_get_fog_depth_end, (const object *) this);
}

real_t environment::get_fog_height_curve() const {
	return ___godot_icall_float(___mb.mb_get_fog_height_curve, (const object *) this);
}

real_t environment::get_fog_height_max() const {
	return ___godot_icall_float(___mb.mb_get_fog_height_max, (const object *) this);
}

real_t environment::get_fog_height_min() const {
	return ___godot_icall_float(___mb.mb_get_fog_height_min, (const object *) this);
}

real_t environment::get_fog_sun_amount() const {
	return ___godot_icall_float(___mb.mb_get_fog_sun_amount, (const object *) this);
}

color environment::get_fog_sun_color() const {
	return ___godot_icall_Color(___mb.mb_get_fog_sun_color, (const object *) this);
}

real_t environment::get_fog_transmit_curve() const {
	return ___godot_icall_float(___mb.mb_get_fog_transmit_curve, (const object *) this);
}

environment::GlowBlendMode environment::get_glow_blend_mode() const {
	return (environment::GlowBlendMode) ___godot_icall_int(___mb.mb_get_glow_blend_mode, (const object *) this);
}

real_t environment::get_glow_bloom() const {
	return ___godot_icall_float(___mb.mb_get_glow_bloom, (const object *) this);
}

real_t environment::get_glow_hdr_bleed_scale() const {
	return ___godot_icall_float(___mb.mb_get_glow_hdr_bleed_scale, (const object *) this);
}

real_t environment::get_glow_hdr_bleed_threshold() const {
	return ___godot_icall_float(___mb.mb_get_glow_hdr_bleed_threshold, (const object *) this);
}

real_t environment::get_glow_hdr_luminance_cap() const {
	return ___godot_icall_float(___mb.mb_get_glow_hdr_luminance_cap, (const object *) this);
}

real_t environment::get_glow_intensity() const {
	return ___godot_icall_float(___mb.mb_get_glow_intensity, (const object *) this);
}

real_t environment::get_glow_strength() const {
	return ___godot_icall_float(___mb.mb_get_glow_strength, (const object *) this);
}

ref<sky> environment::get_sky() const {
	return ref<sky>::__internal_constructor(___godot_icall_Object(___mb.mb_get_sky, (const object *) this));
}

real_t environment::get_sky_custom_fov() const {
	return ___godot_icall_float(___mb.mb_get_sky_custom_fov, (const object *) this);
}

basis environment::get_sky_orientation() const {
	return ___godot_icall_Basis(___mb.mb_get_sky_orientation, (const object *) this);
}

vector3 environment::get_sky_rotation() const {
	return ___godot_icall_Vector3(___mb.mb_get_sky_rotation, (const object *) this);
}

vector3 environment::get_sky_rotation_degrees() const {
	return ___godot_icall_Vector3(___mb.mb_get_sky_rotation_degrees, (const object *) this);
}

real_t environment::get_ssao_ao_channel_affect() const {
	return ___godot_icall_float(___mb.mb_get_ssao_ao_channel_affect, (const object *) this);
}

real_t environment::get_ssao_bias() const {
	return ___godot_icall_float(___mb.mb_get_ssao_bias, (const object *) this);
}

environment::SSAOBlur environment::get_ssao_blur() const {
	return (environment::SSAOBlur) ___godot_icall_int(___mb.mb_get_ssao_blur, (const object *) this);
}

color environment::get_ssao_color() const {
	return ___godot_icall_Color(___mb.mb_get_ssao_color, (const object *) this);
}

real_t environment::get_ssao_direct_light_affect() const {
	return ___godot_icall_float(___mb.mb_get_ssao_direct_light_affect, (const object *) this);
}

real_t environment::get_ssao_edge_sharpness() const {
	return ___godot_icall_float(___mb.mb_get_ssao_edge_sharpness, (const object *) this);
}

real_t environment::get_ssao_intensity() const {
	return ___godot_icall_float(___mb.mb_get_ssao_intensity, (const object *) this);
}

real_t environment::get_ssao_intensity2() const {
	return ___godot_icall_float(___mb.mb_get_ssao_intensity2, (const object *) this);
}

environment::SSAOQuality environment::get_ssao_quality() const {
	return (environment::SSAOQuality) ___godot_icall_int(___mb.mb_get_ssao_quality, (const object *) this);
}

real_t environment::get_ssao_radius() const {
	return ___godot_icall_float(___mb.mb_get_ssao_radius, (const object *) this);
}

real_t environment::get_ssao_radius2() const {
	return ___godot_icall_float(___mb.mb_get_ssao_radius2, (const object *) this);
}

real_t environment::get_ssr_depth_tolerance() const {
	return ___godot_icall_float(___mb.mb_get_ssr_depth_tolerance, (const object *) this);
}

real_t environment::get_ssr_fade_in() const {
	return ___godot_icall_float(___mb.mb_get_ssr_fade_in, (const object *) this);
}

real_t environment::get_ssr_fade_out() const {
	return ___godot_icall_float(___mb.mb_get_ssr_fade_out, (const object *) this);
}

int64_t environment::get_ssr_max_steps() const {
	return ___godot_icall_int(___mb.mb_get_ssr_max_steps, (const object *) this);
}

bool environment::get_tonemap_auto_exposure() const {
	return ___godot_icall_bool(___mb.mb_get_tonemap_auto_exposure, (const object *) this);
}

real_t environment::get_tonemap_auto_exposure_grey() const {
	return ___godot_icall_float(___mb.mb_get_tonemap_auto_exposure_grey, (const object *) this);
}

real_t environment::get_tonemap_auto_exposure_max() const {
	return ___godot_icall_float(___mb.mb_get_tonemap_auto_exposure_max, (const object *) this);
}

real_t environment::get_tonemap_auto_exposure_min() const {
	return ___godot_icall_float(___mb.mb_get_tonemap_auto_exposure_min, (const object *) this);
}

real_t environment::get_tonemap_auto_exposure_speed() const {
	return ___godot_icall_float(___mb.mb_get_tonemap_auto_exposure_speed, (const object *) this);
}

real_t environment::get_tonemap_exposure() const {
	return ___godot_icall_float(___mb.mb_get_tonemap_exposure, (const object *) this);
}

real_t environment::get_tonemap_white() const {
	return ___godot_icall_float(___mb.mb_get_tonemap_white, (const object *) this);
}

environment::ToneMapper environment::get_tonemapper() const {
	return (environment::ToneMapper) ___godot_icall_int(___mb.mb_get_tonemapper, (const object *) this);
}

bool environment::is_adjustment_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_adjustment_enabled, (const object *) this);
}

bool environment::is_dof_blur_far_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_dof_blur_far_enabled, (const object *) this);
}

bool environment::is_dof_blur_near_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_dof_blur_near_enabled, (const object *) this);
}

bool environment::is_fog_depth_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_fog_depth_enabled, (const object *) this);
}

bool environment::is_fog_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_fog_enabled, (const object *) this);
}

bool environment::is_fog_height_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_fog_height_enabled, (const object *) this);
}

bool environment::is_fog_transmit_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_fog_transmit_enabled, (const object *) this);
}

bool environment::is_glow_bicubic_upscale_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_glow_bicubic_upscale_enabled, (const object *) this);
}

bool environment::is_glow_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_glow_enabled, (const object *) this);
}

bool environment::is_glow_high_quality_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_glow_high_quality_enabled, (const object *) this);
}

bool environment::is_glow_level_enabled(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_glow_level_enabled, (const object *) this, idx);
}

bool environment::is_ssao_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_ssao_enabled, (const object *) this);
}

bool environment::is_ssr_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_ssr_enabled, (const object *) this);
}

bool environment::is_ssr_rough() const {
	return ___godot_icall_bool(___mb.mb_is_ssr_rough, (const object *) this);
}

void environment::set_adjustment_brightness(const real_t brightness) {
	___godot_icall_void_float(___mb.mb_set_adjustment_brightness, (const object *) this, brightness);
}

void environment::set_adjustment_color_correction(const ref<texture> color_correction) {
	___godot_icall_void_Object(___mb.mb_set_adjustment_color_correction, (const object *) this, color_correction.ptr());
}

void environment::set_adjustment_contrast(const real_t contrast) {
	___godot_icall_void_float(___mb.mb_set_adjustment_contrast, (const object *) this, contrast);
}

void environment::set_adjustment_enable(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_adjustment_enable, (const object *) this, enabled);
}

void environment::set_adjustment_saturation(const real_t saturation) {
	___godot_icall_void_float(___mb.mb_set_adjustment_saturation, (const object *) this, saturation);
}

void environment::set_ambient_light_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_ambient_light_color, (const object *) this, color_);
}

void environment::set_ambient_light_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_ambient_light_energy, (const object *) this, energy);
}

void environment::set_ambient_light_sky_contribution(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_ambient_light_sky_contribution, (const object *) this, energy);
}

void environment::set_background(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_background, (const object *) this, mode);
}

void environment::set_bg_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_bg_color, (const object *) this, color_);
}

void environment::set_bg_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_bg_energy, (const object *) this, energy);
}

void environment::set_camera_feed_id(const int64_t camera_feed_id) {
	___godot_icall_void_int(___mb.mb_set_camera_feed_id, (const object *) this, camera_feed_id);
}

void environment::set_canvas_max_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_canvas_max_layer, (const object *) this, layer);
}

void environment::set_dof_blur_far_amount(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_dof_blur_far_amount, (const object *) this, intensity);
}

void environment::set_dof_blur_far_distance(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_dof_blur_far_distance, (const object *) this, intensity);
}

void environment::set_dof_blur_far_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_dof_blur_far_enabled, (const object *) this, enabled);
}

void environment::set_dof_blur_far_quality(const int64_t intensity) {
	___godot_icall_void_int(___mb.mb_set_dof_blur_far_quality, (const object *) this, intensity);
}

void environment::set_dof_blur_far_transition(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_dof_blur_far_transition, (const object *) this, intensity);
}

void environment::set_dof_blur_near_amount(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_dof_blur_near_amount, (const object *) this, intensity);
}

void environment::set_dof_blur_near_distance(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_dof_blur_near_distance, (const object *) this, intensity);
}

void environment::set_dof_blur_near_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_dof_blur_near_enabled, (const object *) this, enabled);
}

void environment::set_dof_blur_near_quality(const int64_t level) {
	___godot_icall_void_int(___mb.mb_set_dof_blur_near_quality, (const object *) this, level);
}

void environment::set_dof_blur_near_transition(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_dof_blur_near_transition, (const object *) this, intensity);
}

void environment::set_fog_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_fog_color, (const object *) this, color_);
}

void environment::set_fog_depth_begin(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_fog_depth_begin, (const object *) this, distance);
}

void environment::set_fog_depth_curve(const real_t curve_) {
	___godot_icall_void_float(___mb.mb_set_fog_depth_curve, (const object *) this, curve_);
}

void environment::set_fog_depth_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_fog_depth_enabled, (const object *) this, enabled);
}

void environment::set_fog_depth_end(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_fog_depth_end, (const object *) this, distance);
}

void environment::set_fog_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_fog_enabled, (const object *) this, enabled);
}

void environment::set_fog_height_curve(const real_t curve_) {
	___godot_icall_void_float(___mb.mb_set_fog_height_curve, (const object *) this, curve_);
}

void environment::set_fog_height_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_fog_height_enabled, (const object *) this, enabled);
}

void environment::set_fog_height_max(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_fog_height_max, (const object *) this, height);
}

void environment::set_fog_height_min(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_fog_height_min, (const object *) this, height);
}

void environment::set_fog_sun_amount(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_fog_sun_amount, (const object *) this, amount);
}

void environment::set_fog_sun_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_fog_sun_color, (const object *) this, color_);
}

void environment::set_fog_transmit_curve(const real_t curve_) {
	___godot_icall_void_float(___mb.mb_set_fog_transmit_curve, (const object *) this, curve_);
}

void environment::set_fog_transmit_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_fog_transmit_enabled, (const object *) this, enabled);
}

void environment::set_glow_bicubic_upscale(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_glow_bicubic_upscale, (const object *) this, enabled);
}

void environment::set_glow_blend_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_glow_blend_mode, (const object *) this, mode);
}

void environment::set_glow_bloom(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_glow_bloom, (const object *) this, amount);
}

void environment::set_glow_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_glow_enabled, (const object *) this, enabled);
}

void environment::set_glow_hdr_bleed_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_glow_hdr_bleed_scale, (const object *) this, scale);
}

void environment::set_glow_hdr_bleed_threshold(const real_t threshold) {
	___godot_icall_void_float(___mb.mb_set_glow_hdr_bleed_threshold, (const object *) this, threshold);
}

void environment::set_glow_hdr_luminance_cap(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_glow_hdr_luminance_cap, (const object *) this, amount);
}

void environment::set_glow_high_quality(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_glow_high_quality, (const object *) this, enabled);
}

void environment::set_glow_intensity(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_glow_intensity, (const object *) this, intensity);
}

void environment::set_glow_level(const int64_t idx, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_glow_level, (const object *) this, idx, enabled);
}

void environment::set_glow_strength(const real_t strength) {
	___godot_icall_void_float(___mb.mb_set_glow_strength, (const object *) this, strength);
}

void environment::set_sky(const ref<sky> sky_) {
	___godot_icall_void_Object(___mb.mb_set_sky, (const object *) this, sky_.ptr());
}

void environment::set_sky_custom_fov(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_sky_custom_fov, (const object *) this, scale);
}

void environment::set_sky_orientation(const basis orientation) {
	___godot_icall_void_Basis(___mb.mb_set_sky_orientation, (const object *) this, orientation);
}

void environment::set_sky_rotation(const vector3 euler_radians) {
	___godot_icall_void_Vector3(___mb.mb_set_sky_rotation, (const object *) this, euler_radians);
}

void environment::set_sky_rotation_degrees(const vector3 euler_degrees) {
	___godot_icall_void_Vector3(___mb.mb_set_sky_rotation_degrees, (const object *) this, euler_degrees);
}

void environment::set_ssao_ao_channel_affect(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_ssao_ao_channel_affect, (const object *) this, amount);
}

void environment::set_ssao_bias(const real_t bias) {
	___godot_icall_void_float(___mb.mb_set_ssao_bias, (const object *) this, bias);
}

void environment::set_ssao_blur(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_ssao_blur, (const object *) this, mode);
}

void environment::set_ssao_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_ssao_color, (const object *) this, color_);
}

void environment::set_ssao_direct_light_affect(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_ssao_direct_light_affect, (const object *) this, amount);
}

void environment::set_ssao_edge_sharpness(const real_t edge_sharpness) {
	___godot_icall_void_float(___mb.mb_set_ssao_edge_sharpness, (const object *) this, edge_sharpness);
}

void environment::set_ssao_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_ssao_enabled, (const object *) this, enabled);
}

void environment::set_ssao_intensity(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_ssao_intensity, (const object *) this, intensity);
}

void environment::set_ssao_intensity2(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_ssao_intensity2, (const object *) this, intensity);
}

void environment::set_ssao_quality(const int64_t quality) {
	___godot_icall_void_int(___mb.mb_set_ssao_quality, (const object *) this, quality);
}

void environment::set_ssao_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_ssao_radius, (const object *) this, radius);
}

void environment::set_ssao_radius2(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_ssao_radius2, (const object *) this, radius);
}

void environment::set_ssr_depth_tolerance(const real_t depth_tolerance) {
	___godot_icall_void_float(___mb.mb_set_ssr_depth_tolerance, (const object *) this, depth_tolerance);
}

void environment::set_ssr_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_ssr_enabled, (const object *) this, enabled);
}

void environment::set_ssr_fade_in(const real_t fade_in) {
	___godot_icall_void_float(___mb.mb_set_ssr_fade_in, (const object *) this, fade_in);
}

void environment::set_ssr_fade_out(const real_t fade_out) {
	___godot_icall_void_float(___mb.mb_set_ssr_fade_out, (const object *) this, fade_out);
}

void environment::set_ssr_max_steps(const int64_t max_steps) {
	___godot_icall_void_int(___mb.mb_set_ssr_max_steps, (const object *) this, max_steps);
}

void environment::set_ssr_rough(const bool rough) {
	___godot_icall_void_bool(___mb.mb_set_ssr_rough, (const object *) this, rough);
}

void environment::set_tonemap_auto_exposure(const bool auto_exposure) {
	___godot_icall_void_bool(___mb.mb_set_tonemap_auto_exposure, (const object *) this, auto_exposure);
}

void environment::set_tonemap_auto_exposure_grey(const real_t exposure_grey) {
	___godot_icall_void_float(___mb.mb_set_tonemap_auto_exposure_grey, (const object *) this, exposure_grey);
}

void environment::set_tonemap_auto_exposure_max(const real_t exposure_max) {
	___godot_icall_void_float(___mb.mb_set_tonemap_auto_exposure_max, (const object *) this, exposure_max);
}

void environment::set_tonemap_auto_exposure_min(const real_t exposure_min) {
	___godot_icall_void_float(___mb.mb_set_tonemap_auto_exposure_min, (const object *) this, exposure_min);
}

void environment::set_tonemap_auto_exposure_speed(const real_t exposure_speed) {
	___godot_icall_void_float(___mb.mb_set_tonemap_auto_exposure_speed, (const object *) this, exposure_speed);
}

void environment::set_tonemap_exposure(const real_t exposure) {
	___godot_icall_void_float(___mb.mb_set_tonemap_exposure, (const object *) this, exposure);
}

void environment::set_tonemap_white(const real_t white) {
	___godot_icall_void_float(___mb.mb_set_tonemap_white, (const object *) this, white);
}

void environment::set_tonemapper(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_tonemapper, (const object *) this, mode);
}

}