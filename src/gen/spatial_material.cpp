#include "spatial_material.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


spatial_material::___method_bindings spatial_material::___mb = {};

void *spatial_material::_detail_class_tag = nullptr;

void spatial_material::___init_method_bindings() {
	___mb.mb_get_albedo = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_albedo");
	___mb.mb_get_alpha_scissor_threshold = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_alpha_scissor_threshold");
	___mb.mb_get_anisotropy = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_anisotropy");
	___mb.mb_get_ao_light_affect = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_ao_light_affect");
	___mb.mb_get_ao_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_ao_texture_channel");
	___mb.mb_get_async_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_async_mode");
	___mb.mb_get_billboard_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_billboard_mode");
	___mb.mb_get_blend_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_blend_mode");
	___mb.mb_get_clearcoat = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_clearcoat");
	___mb.mb_get_clearcoat_gloss = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_clearcoat_gloss");
	___mb.mb_get_cull_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_cull_mode");
	___mb.mb_get_depth_deep_parallax_flip_binormal = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_depth_deep_parallax_flip_binormal");
	___mb.mb_get_depth_deep_parallax_flip_tangent = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_depth_deep_parallax_flip_tangent");
	___mb.mb_get_depth_deep_parallax_max_layers = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_depth_deep_parallax_max_layers");
	___mb.mb_get_depth_deep_parallax_min_layers = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_depth_deep_parallax_min_layers");
	___mb.mb_get_depth_draw_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_depth_draw_mode");
	___mb.mb_get_depth_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_depth_scale");
	___mb.mb_get_detail_blend_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_detail_blend_mode");
	___mb.mb_get_detail_uv = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_detail_uv");
	___mb.mb_get_diffuse_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_diffuse_mode");
	___mb.mb_get_distance_fade = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_distance_fade");
	___mb.mb_get_distance_fade_max_distance = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_distance_fade_max_distance");
	___mb.mb_get_distance_fade_min_distance = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_distance_fade_min_distance");
	___mb.mb_get_emission = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_emission");
	___mb.mb_get_emission_energy = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_emission_energy");
	___mb.mb_get_emission_operator = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_emission_operator");
	___mb.mb_get_feature = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_feature");
	___mb.mb_get_flag = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_flag");
	___mb.mb_get_grow = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_grow");
	___mb.mb_get_line_width = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_line_width");
	___mb.mb_get_metallic = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_metallic");
	___mb.mb_get_metallic_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_metallic_texture_channel");
	___mb.mb_get_normal_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_normal_scale");
	___mb.mb_get_particles_anim_h_frames = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_particles_anim_h_frames");
	___mb.mb_get_particles_anim_loop = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_particles_anim_loop");
	___mb.mb_get_particles_anim_v_frames = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_particles_anim_v_frames");
	___mb.mb_get_point_size = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_point_size");
	___mb.mb_get_proximity_fade_distance = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_proximity_fade_distance");
	___mb.mb_get_refraction = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_refraction");
	___mb.mb_get_refraction_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_refraction_texture_channel");
	___mb.mb_get_rim = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_rim");
	___mb.mb_get_rim_tint = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_rim_tint");
	___mb.mb_get_roughness = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_roughness");
	___mb.mb_get_roughness_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_roughness_texture_channel");
	___mb.mb_get_specular = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_specular");
	___mb.mb_get_specular_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_specular_mode");
	___mb.mb_get_subsurface_scattering_strength = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_subsurface_scattering_strength");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_texture");
	___mb.mb_get_transmission = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_transmission");
	___mb.mb_get_uv1_offset = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_uv1_offset");
	___mb.mb_get_uv1_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_uv1_scale");
	___mb.mb_get_uv1_triplanar_blend_sharpness = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_uv1_triplanar_blend_sharpness");
	___mb.mb_get_uv2_offset = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_uv2_offset");
	___mb.mb_get_uv2_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_uv2_scale");
	___mb.mb_get_uv2_triplanar_blend_sharpness = gd::api->godot_method_bind_get_method("SpatialMaterial", "get_uv2_triplanar_blend_sharpness");
	___mb.mb_is_depth_deep_parallax_enabled = gd::api->godot_method_bind_get_method("SpatialMaterial", "is_depth_deep_parallax_enabled");
	___mb.mb_is_grow_enabled = gd::api->godot_method_bind_get_method("SpatialMaterial", "is_grow_enabled");
	___mb.mb_is_proximity_fade_enabled = gd::api->godot_method_bind_get_method("SpatialMaterial", "is_proximity_fade_enabled");
	___mb.mb_set_albedo = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_albedo");
	___mb.mb_set_alpha_scissor_threshold = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_alpha_scissor_threshold");
	___mb.mb_set_anisotropy = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_anisotropy");
	___mb.mb_set_ao_light_affect = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_ao_light_affect");
	___mb.mb_set_ao_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_ao_texture_channel");
	___mb.mb_set_async_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_async_mode");
	___mb.mb_set_billboard_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_billboard_mode");
	___mb.mb_set_blend_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_blend_mode");
	___mb.mb_set_clearcoat = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_clearcoat");
	___mb.mb_set_clearcoat_gloss = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_clearcoat_gloss");
	___mb.mb_set_cull_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_cull_mode");
	___mb.mb_set_depth_deep_parallax = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_depth_deep_parallax");
	___mb.mb_set_depth_deep_parallax_flip_binormal = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_depth_deep_parallax_flip_binormal");
	___mb.mb_set_depth_deep_parallax_flip_tangent = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_depth_deep_parallax_flip_tangent");
	___mb.mb_set_depth_deep_parallax_max_layers = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_depth_deep_parallax_max_layers");
	___mb.mb_set_depth_deep_parallax_min_layers = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_depth_deep_parallax_min_layers");
	___mb.mb_set_depth_draw_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_depth_draw_mode");
	___mb.mb_set_depth_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_depth_scale");
	___mb.mb_set_detail_blend_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_detail_blend_mode");
	___mb.mb_set_detail_uv = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_detail_uv");
	___mb.mb_set_diffuse_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_diffuse_mode");
	___mb.mb_set_distance_fade = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_distance_fade");
	___mb.mb_set_distance_fade_max_distance = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_distance_fade_max_distance");
	___mb.mb_set_distance_fade_min_distance = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_distance_fade_min_distance");
	___mb.mb_set_emission = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_emission");
	___mb.mb_set_emission_energy = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_emission_energy");
	___mb.mb_set_emission_operator = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_emission_operator");
	___mb.mb_set_feature = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_feature");
	___mb.mb_set_flag = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_flag");
	___mb.mb_set_grow = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_grow");
	___mb.mb_set_grow_enabled = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_grow_enabled");
	___mb.mb_set_line_width = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_line_width");
	___mb.mb_set_metallic = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_metallic");
	___mb.mb_set_metallic_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_metallic_texture_channel");
	___mb.mb_set_normal_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_normal_scale");
	___mb.mb_set_particles_anim_h_frames = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_particles_anim_h_frames");
	___mb.mb_set_particles_anim_loop = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_particles_anim_loop");
	___mb.mb_set_particles_anim_v_frames = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_particles_anim_v_frames");
	___mb.mb_set_point_size = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_point_size");
	___mb.mb_set_proximity_fade = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_proximity_fade");
	___mb.mb_set_proximity_fade_distance = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_proximity_fade_distance");
	___mb.mb_set_refraction = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_refraction");
	___mb.mb_set_refraction_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_refraction_texture_channel");
	___mb.mb_set_rim = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_rim");
	___mb.mb_set_rim_tint = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_rim_tint");
	___mb.mb_set_roughness = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_roughness");
	___mb.mb_set_roughness_texture_channel = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_roughness_texture_channel");
	___mb.mb_set_specular = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_specular");
	___mb.mb_set_specular_mode = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_specular_mode");
	___mb.mb_set_subsurface_scattering_strength = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_subsurface_scattering_strength");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_texture");
	___mb.mb_set_transmission = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_transmission");
	___mb.mb_set_uv1_offset = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_uv1_offset");
	___mb.mb_set_uv1_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_uv1_scale");
	___mb.mb_set_uv1_triplanar_blend_sharpness = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_uv1_triplanar_blend_sharpness");
	___mb.mb_set_uv2_offset = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_uv2_offset");
	___mb.mb_set_uv2_scale = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_uv2_scale");
	___mb.mb_set_uv2_triplanar_blend_sharpness = gd::api->godot_method_bind_get_method("SpatialMaterial", "set_uv2_triplanar_blend_sharpness");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SpatialMaterial");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

spatial_material *spatial_material::_new()
{
	return (spatial_material *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SpatialMaterial")());
}
color spatial_material::get_albedo() const {
	return ___godot_icall_Color(___mb.mb_get_albedo, (const object *) this);
}

real_t spatial_material::get_alpha_scissor_threshold() const {
	return ___godot_icall_float(___mb.mb_get_alpha_scissor_threshold, (const object *) this);
}

real_t spatial_material::get_anisotropy() const {
	return ___godot_icall_float(___mb.mb_get_anisotropy, (const object *) this);
}

real_t spatial_material::get_ao_light_affect() const {
	return ___godot_icall_float(___mb.mb_get_ao_light_affect, (const object *) this);
}

spatial_material::TextureChannel spatial_material::get_ao_texture_channel() const {
	return (spatial_material::TextureChannel) ___godot_icall_int(___mb.mb_get_ao_texture_channel, (const object *) this);
}

spatial_material::AsyncMode spatial_material::get_async_mode() const {
	return (spatial_material::AsyncMode) ___godot_icall_int(___mb.mb_get_async_mode, (const object *) this);
}

spatial_material::BillboardMode spatial_material::get_billboard_mode() const {
	return (spatial_material::BillboardMode) ___godot_icall_int(___mb.mb_get_billboard_mode, (const object *) this);
}

spatial_material::BlendMode spatial_material::get_blend_mode() const {
	return (spatial_material::BlendMode) ___godot_icall_int(___mb.mb_get_blend_mode, (const object *) this);
}

real_t spatial_material::get_clearcoat() const {
	return ___godot_icall_float(___mb.mb_get_clearcoat, (const object *) this);
}

real_t spatial_material::get_clearcoat_gloss() const {
	return ___godot_icall_float(___mb.mb_get_clearcoat_gloss, (const object *) this);
}

spatial_material::CullMode spatial_material::get_cull_mode() const {
	return (spatial_material::CullMode) ___godot_icall_int(___mb.mb_get_cull_mode, (const object *) this);
}

bool spatial_material::get_depth_deep_parallax_flip_binormal() const {
	return ___godot_icall_bool(___mb.mb_get_depth_deep_parallax_flip_binormal, (const object *) this);
}

bool spatial_material::get_depth_deep_parallax_flip_tangent() const {
	return ___godot_icall_bool(___mb.mb_get_depth_deep_parallax_flip_tangent, (const object *) this);
}

int64_t spatial_material::get_depth_deep_parallax_max_layers() const {
	return ___godot_icall_int(___mb.mb_get_depth_deep_parallax_max_layers, (const object *) this);
}

int64_t spatial_material::get_depth_deep_parallax_min_layers() const {
	return ___godot_icall_int(___mb.mb_get_depth_deep_parallax_min_layers, (const object *) this);
}

spatial_material::DepthDrawMode spatial_material::get_depth_draw_mode() const {
	return (spatial_material::DepthDrawMode) ___godot_icall_int(___mb.mb_get_depth_draw_mode, (const object *) this);
}

real_t spatial_material::get_depth_scale() const {
	return ___godot_icall_float(___mb.mb_get_depth_scale, (const object *) this);
}

spatial_material::BlendMode spatial_material::get_detail_blend_mode() const {
	return (spatial_material::BlendMode) ___godot_icall_int(___mb.mb_get_detail_blend_mode, (const object *) this);
}

spatial_material::DetailUV spatial_material::get_detail_uv() const {
	return (spatial_material::DetailUV) ___godot_icall_int(___mb.mb_get_detail_uv, (const object *) this);
}

spatial_material::DiffuseMode spatial_material::get_diffuse_mode() const {
	return (spatial_material::DiffuseMode) ___godot_icall_int(___mb.mb_get_diffuse_mode, (const object *) this);
}

spatial_material::DistanceFadeMode spatial_material::get_distance_fade() const {
	return (spatial_material::DistanceFadeMode) ___godot_icall_int(___mb.mb_get_distance_fade, (const object *) this);
}

real_t spatial_material::get_distance_fade_max_distance() const {
	return ___godot_icall_float(___mb.mb_get_distance_fade_max_distance, (const object *) this);
}

real_t spatial_material::get_distance_fade_min_distance() const {
	return ___godot_icall_float(___mb.mb_get_distance_fade_min_distance, (const object *) this);
}

color spatial_material::get_emission() const {
	return ___godot_icall_Color(___mb.mb_get_emission, (const object *) this);
}

real_t spatial_material::get_emission_energy() const {
	return ___godot_icall_float(___mb.mb_get_emission_energy, (const object *) this);
}

spatial_material::EmissionOperator spatial_material::get_emission_operator() const {
	return (spatial_material::EmissionOperator) ___godot_icall_int(___mb.mb_get_emission_operator, (const object *) this);
}

bool spatial_material::get_feature(const int64_t feature) const {
	return ___godot_icall_bool_int(___mb.mb_get_feature, (const object *) this, feature);
}

bool spatial_material::get_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_flag, (const object *) this, flag);
}

real_t spatial_material::get_grow() const {
	return ___godot_icall_float(___mb.mb_get_grow, (const object *) this);
}

real_t spatial_material::get_line_width() const {
	return ___godot_icall_float(___mb.mb_get_line_width, (const object *) this);
}

real_t spatial_material::get_metallic() const {
	return ___godot_icall_float(___mb.mb_get_metallic, (const object *) this);
}

spatial_material::TextureChannel spatial_material::get_metallic_texture_channel() const {
	return (spatial_material::TextureChannel) ___godot_icall_int(___mb.mb_get_metallic_texture_channel, (const object *) this);
}

real_t spatial_material::get_normal_scale() const {
	return ___godot_icall_float(___mb.mb_get_normal_scale, (const object *) this);
}

int64_t spatial_material::get_particles_anim_h_frames() const {
	return ___godot_icall_int(___mb.mb_get_particles_anim_h_frames, (const object *) this);
}

bool spatial_material::get_particles_anim_loop() const {
	return ___godot_icall_bool(___mb.mb_get_particles_anim_loop, (const object *) this);
}

int64_t spatial_material::get_particles_anim_v_frames() const {
	return ___godot_icall_int(___mb.mb_get_particles_anim_v_frames, (const object *) this);
}

real_t spatial_material::get_point_size() const {
	return ___godot_icall_float(___mb.mb_get_point_size, (const object *) this);
}

real_t spatial_material::get_proximity_fade_distance() const {
	return ___godot_icall_float(___mb.mb_get_proximity_fade_distance, (const object *) this);
}

real_t spatial_material::get_refraction() const {
	return ___godot_icall_float(___mb.mb_get_refraction, (const object *) this);
}

spatial_material::TextureChannel spatial_material::get_refraction_texture_channel() const {
	return (spatial_material::TextureChannel) ___godot_icall_int(___mb.mb_get_refraction_texture_channel, (const object *) this);
}

real_t spatial_material::get_rim() const {
	return ___godot_icall_float(___mb.mb_get_rim, (const object *) this);
}

real_t spatial_material::get_rim_tint() const {
	return ___godot_icall_float(___mb.mb_get_rim_tint, (const object *) this);
}

real_t spatial_material::get_roughness() const {
	return ___godot_icall_float(___mb.mb_get_roughness, (const object *) this);
}

spatial_material::TextureChannel spatial_material::get_roughness_texture_channel() const {
	return (spatial_material::TextureChannel) ___godot_icall_int(___mb.mb_get_roughness_texture_channel, (const object *) this);
}

real_t spatial_material::get_specular() const {
	return ___godot_icall_float(___mb.mb_get_specular, (const object *) this);
}

spatial_material::SpecularMode spatial_material::get_specular_mode() const {
	return (spatial_material::SpecularMode) ___godot_icall_int(___mb.mb_get_specular_mode, (const object *) this);
}

real_t spatial_material::get_subsurface_scattering_strength() const {
	return ___godot_icall_float(___mb.mb_get_subsurface_scattering_strength, (const object *) this);
}

ref<texture> spatial_material::get_texture(const int64_t param) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_texture, (const object *) this, param));
}

color spatial_material::get_transmission() const {
	return ___godot_icall_Color(___mb.mb_get_transmission, (const object *) this);
}

vector3 spatial_material::get_uv1_offset() const {
	return ___godot_icall_Vector3(___mb.mb_get_uv1_offset, (const object *) this);
}

vector3 spatial_material::get_uv1_scale() const {
	return ___godot_icall_Vector3(___mb.mb_get_uv1_scale, (const object *) this);
}

real_t spatial_material::get_uv1_triplanar_blend_sharpness() const {
	return ___godot_icall_float(___mb.mb_get_uv1_triplanar_blend_sharpness, (const object *) this);
}

vector3 spatial_material::get_uv2_offset() const {
	return ___godot_icall_Vector3(___mb.mb_get_uv2_offset, (const object *) this);
}

vector3 spatial_material::get_uv2_scale() const {
	return ___godot_icall_Vector3(___mb.mb_get_uv2_scale, (const object *) this);
}

real_t spatial_material::get_uv2_triplanar_blend_sharpness() const {
	return ___godot_icall_float(___mb.mb_get_uv2_triplanar_blend_sharpness, (const object *) this);
}

bool spatial_material::is_depth_deep_parallax_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_depth_deep_parallax_enabled, (const object *) this);
}

bool spatial_material::is_grow_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_grow_enabled, (const object *) this);
}

bool spatial_material::is_proximity_fade_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_proximity_fade_enabled, (const object *) this);
}

void spatial_material::set_albedo(const color albedo) {
	___godot_icall_void_Color(___mb.mb_set_albedo, (const object *) this, albedo);
}

void spatial_material::set_alpha_scissor_threshold(const real_t threshold) {
	___godot_icall_void_float(___mb.mb_set_alpha_scissor_threshold, (const object *) this, threshold);
}

void spatial_material::set_anisotropy(const real_t anisotropy) {
	___godot_icall_void_float(___mb.mb_set_anisotropy, (const object *) this, anisotropy);
}

void spatial_material::set_ao_light_affect(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_ao_light_affect, (const object *) this, amount);
}

void spatial_material::set_ao_texture_channel(const int64_t channel) {
	___godot_icall_void_int(___mb.mb_set_ao_texture_channel, (const object *) this, channel);
}

void spatial_material::set_async_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_async_mode, (const object *) this, mode);
}

void spatial_material::set_billboard_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_billboard_mode, (const object *) this, mode);
}

void spatial_material::set_blend_mode(const int64_t blend_mode) {
	___godot_icall_void_int(___mb.mb_set_blend_mode, (const object *) this, blend_mode);
}

void spatial_material::set_clearcoat(const real_t clearcoat) {
	___godot_icall_void_float(___mb.mb_set_clearcoat, (const object *) this, clearcoat);
}

void spatial_material::set_clearcoat_gloss(const real_t clearcoat_gloss) {
	___godot_icall_void_float(___mb.mb_set_clearcoat_gloss, (const object *) this, clearcoat_gloss);
}

void spatial_material::set_cull_mode(const int64_t cull_mode) {
	___godot_icall_void_int(___mb.mb_set_cull_mode, (const object *) this, cull_mode);
}

void spatial_material::set_depth_deep_parallax(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_depth_deep_parallax, (const object *) this, enable);
}

void spatial_material::set_depth_deep_parallax_flip_binormal(const bool flip) {
	___godot_icall_void_bool(___mb.mb_set_depth_deep_parallax_flip_binormal, (const object *) this, flip);
}

void spatial_material::set_depth_deep_parallax_flip_tangent(const bool flip) {
	___godot_icall_void_bool(___mb.mb_set_depth_deep_parallax_flip_tangent, (const object *) this, flip);
}

void spatial_material::set_depth_deep_parallax_max_layers(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_depth_deep_parallax_max_layers, (const object *) this, layer);
}

void spatial_material::set_depth_deep_parallax_min_layers(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_depth_deep_parallax_min_layers, (const object *) this, layer);
}

void spatial_material::set_depth_draw_mode(const int64_t depth_draw_mode) {
	___godot_icall_void_int(___mb.mb_set_depth_draw_mode, (const object *) this, depth_draw_mode);
}

void spatial_material::set_depth_scale(const real_t depth_scale) {
	___godot_icall_void_float(___mb.mb_set_depth_scale, (const object *) this, depth_scale);
}

void spatial_material::set_detail_blend_mode(const int64_t detail_blend_mode) {
	___godot_icall_void_int(___mb.mb_set_detail_blend_mode, (const object *) this, detail_blend_mode);
}

void spatial_material::set_detail_uv(const int64_t detail_uv) {
	___godot_icall_void_int(___mb.mb_set_detail_uv, (const object *) this, detail_uv);
}

void spatial_material::set_diffuse_mode(const int64_t diffuse_mode) {
	___godot_icall_void_int(___mb.mb_set_diffuse_mode, (const object *) this, diffuse_mode);
}

void spatial_material::set_distance_fade(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_distance_fade, (const object *) this, mode);
}

void spatial_material::set_distance_fade_max_distance(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_distance_fade_max_distance, (const object *) this, distance);
}

void spatial_material::set_distance_fade_min_distance(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_distance_fade_min_distance, (const object *) this, distance);
}

void spatial_material::set_emission(const color emission) {
	___godot_icall_void_Color(___mb.mb_set_emission, (const object *) this, emission);
}

void spatial_material::set_emission_energy(const real_t emission_energy) {
	___godot_icall_void_float(___mb.mb_set_emission_energy, (const object *) this, emission_energy);
}

void spatial_material::set_emission_operator(const int64_t _operator) {
	___godot_icall_void_int(___mb.mb_set_emission_operator, (const object *) this, _operator);
}

void spatial_material::set_feature(const int64_t feature, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_feature, (const object *) this, feature, enable);
}

void spatial_material::set_flag(const int64_t flag, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_flag, (const object *) this, flag, enable);
}

void spatial_material::set_grow(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_grow, (const object *) this, amount);
}

void spatial_material::set_grow_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_grow_enabled, (const object *) this, enable);
}

void spatial_material::set_line_width(const real_t line_width) {
	___godot_icall_void_float(___mb.mb_set_line_width, (const object *) this, line_width);
}

void spatial_material::set_metallic(const real_t metallic) {
	___godot_icall_void_float(___mb.mb_set_metallic, (const object *) this, metallic);
}

void spatial_material::set_metallic_texture_channel(const int64_t channel) {
	___godot_icall_void_int(___mb.mb_set_metallic_texture_channel, (const object *) this, channel);
}

void spatial_material::set_normal_scale(const real_t normal_scale) {
	___godot_icall_void_float(___mb.mb_set_normal_scale, (const object *) this, normal_scale);
}

void spatial_material::set_particles_anim_h_frames(const int64_t frames) {
	___godot_icall_void_int(___mb.mb_set_particles_anim_h_frames, (const object *) this, frames);
}

void spatial_material::set_particles_anim_loop(const bool loop) {
	___godot_icall_void_bool(___mb.mb_set_particles_anim_loop, (const object *) this, loop);
}

void spatial_material::set_particles_anim_v_frames(const int64_t frames) {
	___godot_icall_void_int(___mb.mb_set_particles_anim_v_frames, (const object *) this, frames);
}

void spatial_material::set_point_size(const real_t point_size) {
	___godot_icall_void_float(___mb.mb_set_point_size, (const object *) this, point_size);
}

void spatial_material::set_proximity_fade(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_proximity_fade, (const object *) this, enabled);
}

void spatial_material::set_proximity_fade_distance(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_proximity_fade_distance, (const object *) this, distance);
}

void spatial_material::set_refraction(const real_t refraction) {
	___godot_icall_void_float(___mb.mb_set_refraction, (const object *) this, refraction);
}

void spatial_material::set_refraction_texture_channel(const int64_t channel) {
	___godot_icall_void_int(___mb.mb_set_refraction_texture_channel, (const object *) this, channel);
}

void spatial_material::set_rim(const real_t rim) {
	___godot_icall_void_float(___mb.mb_set_rim, (const object *) this, rim);
}

void spatial_material::set_rim_tint(const real_t rim_tint) {
	___godot_icall_void_float(___mb.mb_set_rim_tint, (const object *) this, rim_tint);
}

void spatial_material::set_roughness(const real_t roughness) {
	___godot_icall_void_float(___mb.mb_set_roughness, (const object *) this, roughness);
}

void spatial_material::set_roughness_texture_channel(const int64_t channel) {
	___godot_icall_void_int(___mb.mb_set_roughness_texture_channel, (const object *) this, channel);
}

void spatial_material::set_specular(const real_t specular) {
	___godot_icall_void_float(___mb.mb_set_specular, (const object *) this, specular);
}

void spatial_material::set_specular_mode(const int64_t specular_mode) {
	___godot_icall_void_int(___mb.mb_set_specular_mode, (const object *) this, specular_mode);
}

void spatial_material::set_subsurface_scattering_strength(const real_t strength) {
	___godot_icall_void_float(___mb.mb_set_subsurface_scattering_strength, (const object *) this, strength);
}

void spatial_material::set_texture(const int64_t param, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_set_texture, (const object *) this, param, texture_.ptr());
}

void spatial_material::set_transmission(const color transmission) {
	___godot_icall_void_Color(___mb.mb_set_transmission, (const object *) this, transmission);
}

void spatial_material::set_uv1_offset(const vector3 offset) {
	___godot_icall_void_Vector3(___mb.mb_set_uv1_offset, (const object *) this, offset);
}

void spatial_material::set_uv1_scale(const vector3 scale) {
	___godot_icall_void_Vector3(___mb.mb_set_uv1_scale, (const object *) this, scale);
}

void spatial_material::set_uv1_triplanar_blend_sharpness(const real_t sharpness) {
	___godot_icall_void_float(___mb.mb_set_uv1_triplanar_blend_sharpness, (const object *) this, sharpness);
}

void spatial_material::set_uv2_offset(const vector3 offset) {
	___godot_icall_void_Vector3(___mb.mb_set_uv2_offset, (const object *) this, offset);
}

void spatial_material::set_uv2_scale(const vector3 scale) {
	___godot_icall_void_Vector3(___mb.mb_set_uv2_scale, (const object *) this, scale);
}

void spatial_material::set_uv2_triplanar_blend_sharpness(const real_t sharpness) {
	___godot_icall_void_float(___mb.mb_set_uv2_triplanar_blend_sharpness, (const object *) this, sharpness);
}

}