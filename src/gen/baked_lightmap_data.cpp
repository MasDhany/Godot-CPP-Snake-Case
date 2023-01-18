#include "baked_lightmap_data.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


baked_lightmap_data::___method_bindings baked_lightmap_data::___mb = {};

void *baked_lightmap_data::_detail_class_tag = nullptr;

void baked_lightmap_data::___init_method_bindings() {
	___mb.mb__get_user_data = gd::api->godot_method_bind_get_method("BakedLightmapData", "_get_user_data");
	___mb.mb__set_user_data = gd::api->godot_method_bind_get_method("BakedLightmapData", "_set_user_data");
	___mb.mb_add_user = gd::api->godot_method_bind_get_method("BakedLightmapData", "add_user");
	___mb.mb_clear_data = gd::api->godot_method_bind_get_method("BakedLightmapData", "clear_data");
	___mb.mb_clear_users = gd::api->godot_method_bind_get_method("BakedLightmapData", "clear_users");
	___mb.mb_get_bounds = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_bounds");
	___mb.mb_get_cell_space_transform = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_cell_space_transform");
	___mb.mb_get_cell_subdiv = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_cell_subdiv");
	___mb.mb_get_energy = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_energy");
	___mb.mb_get_octree = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_octree");
	___mb.mb_get_user_count = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_user_count");
	___mb.mb_get_user_lightmap = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_user_lightmap");
	___mb.mb_get_user_path = gd::api->godot_method_bind_get_method("BakedLightmapData", "get_user_path");
	___mb.mb_is_interior = gd::api->godot_method_bind_get_method("BakedLightmapData", "is_interior");
	___mb.mb_set_bounds = gd::api->godot_method_bind_get_method("BakedLightmapData", "set_bounds");
	___mb.mb_set_cell_space_transform = gd::api->godot_method_bind_get_method("BakedLightmapData", "set_cell_space_transform");
	___mb.mb_set_cell_subdiv = gd::api->godot_method_bind_get_method("BakedLightmapData", "set_cell_subdiv");
	___mb.mb_set_energy = gd::api->godot_method_bind_get_method("BakedLightmapData", "set_energy");
	___mb.mb_set_interior = gd::api->godot_method_bind_get_method("BakedLightmapData", "set_interior");
	___mb.mb_set_octree = gd::api->godot_method_bind_get_method("BakedLightmapData", "set_octree");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BakedLightmapData");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

baked_lightmap_data *baked_lightmap_data::_new()
{
	return (baked_lightmap_data *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"BakedLightmapData")());
}
array baked_lightmap_data::_get_user_data() const {
	return ___godot_icall_Array(___mb.mb__get_user_data, (const object *) this);
}

void baked_lightmap_data::_set_user_data(const array data) {
	___godot_icall_void_Array(___mb.mb__set_user_data, (const object *) this, data);
}

void baked_lightmap_data::add_user(const node_path path_, const ref<resource> lightmap, const int64_t lightmap_slice, const rect2 lightmap_uv_rect, const int64_t instance) {
	___godot_icall_void_NodePath_Object_int_Rect2_int(___mb.mb_add_user, (const object *) this, path_, lightmap.ptr(), lightmap_slice, lightmap_uv_rect, instance);
}

void baked_lightmap_data::clear_data() {
	___godot_icall_void(___mb.mb_clear_data, (const object *) this);
}

void baked_lightmap_data::clear_users() {
	___godot_icall_void(___mb.mb_clear_users, (const object *) this);
}

aabb baked_lightmap_data::get_bounds() const {
	return ___godot_icall_AABB(___mb.mb_get_bounds, (const object *) this);
}

transform baked_lightmap_data::get_cell_space_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_cell_space_transform, (const object *) this);
}

int64_t baked_lightmap_data::get_cell_subdiv() const {
	return ___godot_icall_int(___mb.mb_get_cell_subdiv, (const object *) this);
}

real_t baked_lightmap_data::get_energy() const {
	return ___godot_icall_float(___mb.mb_get_energy, (const object *) this);
}

pool_byte_array baked_lightmap_data::get_octree() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_octree, (const object *) this);
}

int64_t baked_lightmap_data::get_user_count() const {
	return ___godot_icall_int(___mb.mb_get_user_count, (const object *) this);
}

ref<resource> baked_lightmap_data::get_user_lightmap(const int64_t user_idx) const {
	return ref<resource>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_user_lightmap, (const object *) this, user_idx));
}

node_path baked_lightmap_data::get_user_path(const int64_t user_idx) const {
	return ___godot_icall_NodePath_int(___mb.mb_get_user_path, (const object *) this, user_idx);
}

bool baked_lightmap_data::is_interior() const {
	return ___godot_icall_bool(___mb.mb_is_interior, (const object *) this);
}

void baked_lightmap_data::set_bounds(const aabb bounds) {
	___godot_icall_void_AABB(___mb.mb_set_bounds, (const object *) this, bounds);
}

void baked_lightmap_data::set_cell_space_transform(const transform xform) {
	___godot_icall_void_Transform(___mb.mb_set_cell_space_transform, (const object *) this, xform);
}

void baked_lightmap_data::set_cell_subdiv(const int64_t cell_subdiv) {
	___godot_icall_void_int(___mb.mb_set_cell_subdiv, (const object *) this, cell_subdiv);
}

void baked_lightmap_data::set_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_energy, (const object *) this, energy);
}

void baked_lightmap_data::set_interior(const bool interior) {
	___godot_icall_void_bool(___mb.mb_set_interior, (const object *) this, interior);
}

void baked_lightmap_data::set_octree(const pool_byte_array octree) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_octree, (const object *) this, octree);
}

}