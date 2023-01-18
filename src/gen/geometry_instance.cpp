#include "geometry_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


geometry_instance::___method_bindings geometry_instance::___mb = {};

void *geometry_instance::_detail_class_tag = nullptr;

void geometry_instance::___init_method_bindings() {
	___mb.mb_get_cast_shadows_setting = gd::api->godot_method_bind_get_method("GeometryInstance", "get_cast_shadows_setting");
	___mb.mb_get_extra_cull_margin = gd::api->godot_method_bind_get_method("GeometryInstance", "get_extra_cull_margin");
	___mb.mb_get_flag = gd::api->godot_method_bind_get_method("GeometryInstance", "get_flag");
	___mb.mb_get_generate_lightmap = gd::api->godot_method_bind_get_method("GeometryInstance", "get_generate_lightmap");
	___mb.mb_get_lightmap_scale = gd::api->godot_method_bind_get_method("GeometryInstance", "get_lightmap_scale");
	___mb.mb_get_lod_max_distance = gd::api->godot_method_bind_get_method("GeometryInstance", "get_lod_max_distance");
	___mb.mb_get_lod_max_hysteresis = gd::api->godot_method_bind_get_method("GeometryInstance", "get_lod_max_hysteresis");
	___mb.mb_get_lod_min_distance = gd::api->godot_method_bind_get_method("GeometryInstance", "get_lod_min_distance");
	___mb.mb_get_lod_min_hysteresis = gd::api->godot_method_bind_get_method("GeometryInstance", "get_lod_min_hysteresis");
	___mb.mb_get_material_overlay = gd::api->godot_method_bind_get_method("GeometryInstance", "get_material_overlay");
	___mb.mb_get_material_override = gd::api->godot_method_bind_get_method("GeometryInstance", "get_material_override");
	___mb.mb_set_cast_shadows_setting = gd::api->godot_method_bind_get_method("GeometryInstance", "set_cast_shadows_setting");
	___mb.mb_set_custom_aabb = gd::api->godot_method_bind_get_method("GeometryInstance", "set_custom_aabb");
	___mb.mb_set_extra_cull_margin = gd::api->godot_method_bind_get_method("GeometryInstance", "set_extra_cull_margin");
	___mb.mb_set_flag = gd::api->godot_method_bind_get_method("GeometryInstance", "set_flag");
	___mb.mb_set_generate_lightmap = gd::api->godot_method_bind_get_method("GeometryInstance", "set_generate_lightmap");
	___mb.mb_set_lightmap_scale = gd::api->godot_method_bind_get_method("GeometryInstance", "set_lightmap_scale");
	___mb.mb_set_lod_max_distance = gd::api->godot_method_bind_get_method("GeometryInstance", "set_lod_max_distance");
	___mb.mb_set_lod_max_hysteresis = gd::api->godot_method_bind_get_method("GeometryInstance", "set_lod_max_hysteresis");
	___mb.mb_set_lod_min_distance = gd::api->godot_method_bind_get_method("GeometryInstance", "set_lod_min_distance");
	___mb.mb_set_lod_min_hysteresis = gd::api->godot_method_bind_get_method("GeometryInstance", "set_lod_min_hysteresis");
	___mb.mb_set_material_overlay = gd::api->godot_method_bind_get_method("GeometryInstance", "set_material_overlay");
	___mb.mb_set_material_override = gd::api->godot_method_bind_get_method("GeometryInstance", "set_material_override");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GeometryInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

geometry_instance::ShadowCastingSetting geometry_instance::get_cast_shadows_setting() const {
	return (geometry_instance::ShadowCastingSetting) ___godot_icall_int(___mb.mb_get_cast_shadows_setting, (const object *) this);
}

real_t geometry_instance::get_extra_cull_margin() const {
	return ___godot_icall_float(___mb.mb_get_extra_cull_margin, (const object *) this);
}

bool geometry_instance::get_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_flag, (const object *) this, flag);
}

bool geometry_instance::get_generate_lightmap() {
	return ___godot_icall_bool(___mb.mb_get_generate_lightmap, (const object *) this);
}

geometry_instance::LightmapScale geometry_instance::get_lightmap_scale() const {
	return (geometry_instance::LightmapScale) ___godot_icall_int(___mb.mb_get_lightmap_scale, (const object *) this);
}

real_t geometry_instance::get_lod_max_distance() const {
	return ___godot_icall_float(___mb.mb_get_lod_max_distance, (const object *) this);
}

real_t geometry_instance::get_lod_max_hysteresis() const {
	return ___godot_icall_float(___mb.mb_get_lod_max_hysteresis, (const object *) this);
}

real_t geometry_instance::get_lod_min_distance() const {
	return ___godot_icall_float(___mb.mb_get_lod_min_distance, (const object *) this);
}

real_t geometry_instance::get_lod_min_hysteresis() const {
	return ___godot_icall_float(___mb.mb_get_lod_min_hysteresis, (const object *) this);
}

ref<material> geometry_instance::get_material_overlay() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material_overlay, (const object *) this));
}

ref<material> geometry_instance::get_material_override() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material_override, (const object *) this));
}

void geometry_instance::set_cast_shadows_setting(const int64_t shadow_casting_setting) {
	___godot_icall_void_int(___mb.mb_set_cast_shadows_setting, (const object *) this, shadow_casting_setting);
}

void geometry_instance::set_custom_aabb(const aabb aabb_) {
	___godot_icall_void_AABB(___mb.mb_set_custom_aabb, (const object *) this, aabb_);
}

void geometry_instance::set_extra_cull_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_extra_cull_margin, (const object *) this, margin);
}

void geometry_instance::set_flag(const int64_t flag, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_flag, (const object *) this, flag, value);
}

void geometry_instance::set_generate_lightmap(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_generate_lightmap, (const object *) this, enabled);
}

void geometry_instance::set_lightmap_scale(const int64_t scale) {
	___godot_icall_void_int(___mb.mb_set_lightmap_scale, (const object *) this, scale);
}

void geometry_instance::set_lod_max_distance(const real_t mode) {
	___godot_icall_void_float(___mb.mb_set_lod_max_distance, (const object *) this, mode);
}

void geometry_instance::set_lod_max_hysteresis(const real_t mode) {
	___godot_icall_void_float(___mb.mb_set_lod_max_hysteresis, (const object *) this, mode);
}

void geometry_instance::set_lod_min_distance(const real_t mode) {
	___godot_icall_void_float(___mb.mb_set_lod_min_distance, (const object *) this, mode);
}

void geometry_instance::set_lod_min_hysteresis(const real_t mode) {
	___godot_icall_void_float(___mb.mb_set_lod_min_hysteresis, (const object *) this, mode);
}

void geometry_instance::set_material_overlay(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material_overlay, (const object *) this, material_.ptr());
}

void geometry_instance::set_material_override(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material_override, (const object *) this, material_.ptr());
}

}