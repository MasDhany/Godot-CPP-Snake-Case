#include "baked_lightmap.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "baked_lightmap_data.hpp"
#include "node.hpp"
#include "sky.hpp"


namespace gd {


baked_lightmap::___method_bindings baked_lightmap::___mb = {};

void *baked_lightmap::_detail_class_tag = nullptr;

void baked_lightmap::___init_method_bindings() {
	___mb.mb_bake = gd::api->godot_method_bind_get_method("BakedLightmap", "bake");
	___mb.mb_get_bake_quality = gd::api->godot_method_bind_get_method("BakedLightmap", "get_bake_quality");
	___mb.mb_get_bias = gd::api->godot_method_bind_get_method("BakedLightmap", "get_bias");
	___mb.mb_get_bounce_indirect_energy = gd::api->godot_method_bind_get_method("BakedLightmap", "get_bounce_indirect_energy");
	___mb.mb_get_bounces = gd::api->godot_method_bind_get_method("BakedLightmap", "get_bounces");
	___mb.mb_get_capture_cell_size = gd::api->godot_method_bind_get_method("BakedLightmap", "get_capture_cell_size");
	___mb.mb_get_capture_enabled = gd::api->godot_method_bind_get_method("BakedLightmap", "get_capture_enabled");
	___mb.mb_get_capture_propagation = gd::api->godot_method_bind_get_method("BakedLightmap", "get_capture_propagation");
	___mb.mb_get_capture_quality = gd::api->godot_method_bind_get_method("BakedLightmap", "get_capture_quality");
	___mb.mb_get_default_texels_per_unit = gd::api->godot_method_bind_get_method("BakedLightmap", "get_default_texels_per_unit");
	___mb.mb_get_environment_custom_color = gd::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_color");
	___mb.mb_get_environment_custom_energy = gd::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_energy");
	___mb.mb_get_environment_custom_sky = gd::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_sky");
	___mb.mb_get_environment_custom_sky_rotation_degrees = gd::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_sky_rotation_degrees");
	___mb.mb_get_environment_min_light = gd::api->godot_method_bind_get_method("BakedLightmap", "get_environment_min_light");
	___mb.mb_get_environment_mode = gd::api->godot_method_bind_get_method("BakedLightmap", "get_environment_mode");
	___mb.mb_get_extents = gd::api->godot_method_bind_get_method("BakedLightmap", "get_extents");
	___mb.mb_get_image_path = gd::api->godot_method_bind_get_method("BakedLightmap", "get_image_path");
	___mb.mb_get_light_data = gd::api->godot_method_bind_get_method("BakedLightmap", "get_light_data");
	___mb.mb_get_max_atlas_size = gd::api->godot_method_bind_get_method("BakedLightmap", "get_max_atlas_size");
	___mb.mb_is_generate_atlas_enabled = gd::api->godot_method_bind_get_method("BakedLightmap", "is_generate_atlas_enabled");
	___mb.mb_is_using_color = gd::api->godot_method_bind_get_method("BakedLightmap", "is_using_color");
	___mb.mb_is_using_denoiser = gd::api->godot_method_bind_get_method("BakedLightmap", "is_using_denoiser");
	___mb.mb_is_using_hdr = gd::api->godot_method_bind_get_method("BakedLightmap", "is_using_hdr");
	___mb.mb_set_bake_quality = gd::api->godot_method_bind_get_method("BakedLightmap", "set_bake_quality");
	___mb.mb_set_bias = gd::api->godot_method_bind_get_method("BakedLightmap", "set_bias");
	___mb.mb_set_bounce_indirect_energy = gd::api->godot_method_bind_get_method("BakedLightmap", "set_bounce_indirect_energy");
	___mb.mb_set_bounces = gd::api->godot_method_bind_get_method("BakedLightmap", "set_bounces");
	___mb.mb_set_capture_cell_size = gd::api->godot_method_bind_get_method("BakedLightmap", "set_capture_cell_size");
	___mb.mb_set_capture_enabled = gd::api->godot_method_bind_get_method("BakedLightmap", "set_capture_enabled");
	___mb.mb_set_capture_propagation = gd::api->godot_method_bind_get_method("BakedLightmap", "set_capture_propagation");
	___mb.mb_set_capture_quality = gd::api->godot_method_bind_get_method("BakedLightmap", "set_capture_quality");
	___mb.mb_set_default_texels_per_unit = gd::api->godot_method_bind_get_method("BakedLightmap", "set_default_texels_per_unit");
	___mb.mb_set_environment_custom_color = gd::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_color");
	___mb.mb_set_environment_custom_energy = gd::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_energy");
	___mb.mb_set_environment_custom_sky = gd::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_sky");
	___mb.mb_set_environment_custom_sky_rotation_degrees = gd::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_sky_rotation_degrees");
	___mb.mb_set_environment_min_light = gd::api->godot_method_bind_get_method("BakedLightmap", "set_environment_min_light");
	___mb.mb_set_environment_mode = gd::api->godot_method_bind_get_method("BakedLightmap", "set_environment_mode");
	___mb.mb_set_extents = gd::api->godot_method_bind_get_method("BakedLightmap", "set_extents");
	___mb.mb_set_generate_atlas = gd::api->godot_method_bind_get_method("BakedLightmap", "set_generate_atlas");
	___mb.mb_set_image_path = gd::api->godot_method_bind_get_method("BakedLightmap", "set_image_path");
	___mb.mb_set_light_data = gd::api->godot_method_bind_get_method("BakedLightmap", "set_light_data");
	___mb.mb_set_max_atlas_size = gd::api->godot_method_bind_get_method("BakedLightmap", "set_max_atlas_size");
	___mb.mb_set_use_color = gd::api->godot_method_bind_get_method("BakedLightmap", "set_use_color");
	___mb.mb_set_use_denoiser = gd::api->godot_method_bind_get_method("BakedLightmap", "set_use_denoiser");
	___mb.mb_set_use_hdr = gd::api->godot_method_bind_get_method("BakedLightmap", "set_use_hdr");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BakedLightmap");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

baked_lightmap *baked_lightmap::_new()
{
	return (baked_lightmap *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"BakedLightmap")());
}
baked_lightmap::BakeError baked_lightmap::bake(const node *from_node, const string data_save_path) {
	return (baked_lightmap::BakeError) ___godot_icall_int_Object_String(___mb.mb_bake, (const object *) this, from_node, data_save_path);
}

baked_lightmap::BakeQuality baked_lightmap::get_bake_quality() const {
	return (baked_lightmap::BakeQuality) ___godot_icall_int(___mb.mb_get_bake_quality, (const object *) this);
}

real_t baked_lightmap::get_bias() const {
	return ___godot_icall_float(___mb.mb_get_bias, (const object *) this);
}

real_t baked_lightmap::get_bounce_indirect_energy() const {
	return ___godot_icall_float(___mb.mb_get_bounce_indirect_energy, (const object *) this);
}

int64_t baked_lightmap::get_bounces() const {
	return ___godot_icall_int(___mb.mb_get_bounces, (const object *) this);
}

real_t baked_lightmap::get_capture_cell_size() const {
	return ___godot_icall_float(___mb.mb_get_capture_cell_size, (const object *) this);
}

bool baked_lightmap::get_capture_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_capture_enabled, (const object *) this);
}

real_t baked_lightmap::get_capture_propagation() const {
	return ___godot_icall_float(___mb.mb_get_capture_propagation, (const object *) this);
}

baked_lightmap::BakeQuality baked_lightmap::get_capture_quality() const {
	return (baked_lightmap::BakeQuality) ___godot_icall_int(___mb.mb_get_capture_quality, (const object *) this);
}

real_t baked_lightmap::get_default_texels_per_unit() const {
	return ___godot_icall_float(___mb.mb_get_default_texels_per_unit, (const object *) this);
}

color baked_lightmap::get_environment_custom_color() const {
	return ___godot_icall_Color(___mb.mb_get_environment_custom_color, (const object *) this);
}

real_t baked_lightmap::get_environment_custom_energy() const {
	return ___godot_icall_float(___mb.mb_get_environment_custom_energy, (const object *) this);
}

ref<sky> baked_lightmap::get_environment_custom_sky() const {
	return ref<sky>::__internal_constructor(___godot_icall_Object(___mb.mb_get_environment_custom_sky, (const object *) this));
}

vector3 baked_lightmap::get_environment_custom_sky_rotation_degrees() const {
	return ___godot_icall_Vector3(___mb.mb_get_environment_custom_sky_rotation_degrees, (const object *) this);
}

color baked_lightmap::get_environment_min_light() const {
	return ___godot_icall_Color(___mb.mb_get_environment_min_light, (const object *) this);
}

baked_lightmap::EnvironmentMode baked_lightmap::get_environment_mode() const {
	return (baked_lightmap::EnvironmentMode) ___godot_icall_int(___mb.mb_get_environment_mode, (const object *) this);
}

vector3 baked_lightmap::get_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_extents, (const object *) this);
}

string baked_lightmap::get_image_path() const {
	return ___godot_icall_String(___mb.mb_get_image_path, (const object *) this);
}

ref<baked_lightmap_data> baked_lightmap::get_light_data() const {
	return ref<baked_lightmap_data>::__internal_constructor(___godot_icall_Object(___mb.mb_get_light_data, (const object *) this));
}

int64_t baked_lightmap::get_max_atlas_size() const {
	return ___godot_icall_int(___mb.mb_get_max_atlas_size, (const object *) this);
}

bool baked_lightmap::is_generate_atlas_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_generate_atlas_enabled, (const object *) this);
}

bool baked_lightmap::is_using_color() const {
	return ___godot_icall_bool(___mb.mb_is_using_color, (const object *) this);
}

bool baked_lightmap::is_using_denoiser() const {
	return ___godot_icall_bool(___mb.mb_is_using_denoiser, (const object *) this);
}

bool baked_lightmap::is_using_hdr() const {
	return ___godot_icall_bool(___mb.mb_is_using_hdr, (const object *) this);
}

void baked_lightmap::set_bake_quality(const int64_t quality) {
	___godot_icall_void_int(___mb.mb_set_bake_quality, (const object *) this, quality);
}

void baked_lightmap::set_bias(const real_t bias) {
	___godot_icall_void_float(___mb.mb_set_bias, (const object *) this, bias);
}

void baked_lightmap::set_bounce_indirect_energy(const real_t bounce_indirect_energy) {
	___godot_icall_void_float(___mb.mb_set_bounce_indirect_energy, (const object *) this, bounce_indirect_energy);
}

void baked_lightmap::set_bounces(const int64_t bounces) {
	___godot_icall_void_int(___mb.mb_set_bounces, (const object *) this, bounces);
}

void baked_lightmap::set_capture_cell_size(const real_t capture_cell_size) {
	___godot_icall_void_float(___mb.mb_set_capture_cell_size, (const object *) this, capture_cell_size);
}

void baked_lightmap::set_capture_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_capture_enabled, (const object *) this, enabled);
}

void baked_lightmap::set_capture_propagation(const real_t propagation) {
	___godot_icall_void_float(___mb.mb_set_capture_propagation, (const object *) this, propagation);
}

void baked_lightmap::set_capture_quality(const int64_t capture_quality) {
	___godot_icall_void_int(___mb.mb_set_capture_quality, (const object *) this, capture_quality);
}

void baked_lightmap::set_default_texels_per_unit(const real_t texels) {
	___godot_icall_void_float(___mb.mb_set_default_texels_per_unit, (const object *) this, texels);
}

void baked_lightmap::set_environment_custom_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_environment_custom_color, (const object *) this, color_);
}

void baked_lightmap::set_environment_custom_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_environment_custom_energy, (const object *) this, energy);
}

void baked_lightmap::set_environment_custom_sky(const ref<sky> sky_) {
	___godot_icall_void_Object(___mb.mb_set_environment_custom_sky, (const object *) this, sky_.ptr());
}

void baked_lightmap::set_environment_custom_sky_rotation_degrees(const vector3 rotation) {
	___godot_icall_void_Vector3(___mb.mb_set_environment_custom_sky_rotation_degrees, (const object *) this, rotation);
}

void baked_lightmap::set_environment_min_light(const color min_light) {
	___godot_icall_void_Color(___mb.mb_set_environment_min_light, (const object *) this, min_light);
}

void baked_lightmap::set_environment_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_environment_mode, (const object *) this, mode);
}

void baked_lightmap::set_extents(const vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_extents, (const object *) this, extents);
}

void baked_lightmap::set_generate_atlas(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_generate_atlas, (const object *) this, enabled);
}

void baked_lightmap::set_image_path(const string image_path) {
	___godot_icall_void_String(___mb.mb_set_image_path, (const object *) this, image_path);
}

void baked_lightmap::set_light_data(const ref<baked_lightmap_data> data) {
	___godot_icall_void_Object(___mb.mb_set_light_data, (const object *) this, data.ptr());
}

void baked_lightmap::set_max_atlas_size(const int64_t max_atlas_size) {
	___godot_icall_void_int(___mb.mb_set_max_atlas_size, (const object *) this, max_atlas_size);
}

void baked_lightmap::set_use_color(const bool use_denoiser) {
	___godot_icall_void_bool(___mb.mb_set_use_color, (const object *) this, use_denoiser);
}

void baked_lightmap::set_use_denoiser(const bool use_denoiser) {
	___godot_icall_void_bool(___mb.mb_set_use_denoiser, (const object *) this, use_denoiser);
}

void baked_lightmap::set_use_hdr(const bool use_denoiser) {
	___godot_icall_void_bool(___mb.mb_set_use_hdr, (const object *) this, use_denoiser);
}

}