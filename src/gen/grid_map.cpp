#include "grid_map.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh_library.hpp"
#include "physics_material.hpp"
#include "resource.hpp"


namespace gd {


grid_map::___method_bindings grid_map::___mb = {};

void *grid_map::_detail_class_tag = nullptr;

void grid_map::___init_method_bindings() {
	___mb.mb__update_octants_callback = gd::api->godot_method_bind_get_method("GridMap", "_update_octants_callback");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("GridMap", "clear");
	___mb.mb_clear_baked_meshes = gd::api->godot_method_bind_get_method("GridMap", "clear_baked_meshes");
	___mb.mb_get_bake_mesh_instance = gd::api->godot_method_bind_get_method("GridMap", "get_bake_mesh_instance");
	___mb.mb_get_bake_meshes = gd::api->godot_method_bind_get_method("GridMap", "get_bake_meshes");
	___mb.mb_get_cell_item = gd::api->godot_method_bind_get_method("GridMap", "get_cell_item");
	___mb.mb_get_cell_item_orientation = gd::api->godot_method_bind_get_method("GridMap", "get_cell_item_orientation");
	___mb.mb_get_cell_scale = gd::api->godot_method_bind_get_method("GridMap", "get_cell_scale");
	___mb.mb_get_cell_size = gd::api->godot_method_bind_get_method("GridMap", "get_cell_size");
	___mb.mb_get_center_x = gd::api->godot_method_bind_get_method("GridMap", "get_center_x");
	___mb.mb_get_center_y = gd::api->godot_method_bind_get_method("GridMap", "get_center_y");
	___mb.mb_get_center_z = gd::api->godot_method_bind_get_method("GridMap", "get_center_z");
	___mb.mb_get_collision_layer = gd::api->godot_method_bind_get_method("GridMap", "get_collision_layer");
	___mb.mb_get_collision_layer_bit = gd::api->godot_method_bind_get_method("GridMap", "get_collision_layer_bit");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("GridMap", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("GridMap", "get_collision_mask_bit");
	___mb.mb_get_mesh_library = gd::api->godot_method_bind_get_method("GridMap", "get_mesh_library");
	___mb.mb_get_meshes = gd::api->godot_method_bind_get_method("GridMap", "get_meshes");
	___mb.mb_get_navigation_layers = gd::api->godot_method_bind_get_method("GridMap", "get_navigation_layers");
	___mb.mb_get_octant_size = gd::api->godot_method_bind_get_method("GridMap", "get_octant_size");
	___mb.mb_get_physics_material = gd::api->godot_method_bind_get_method("GridMap", "get_physics_material");
	___mb.mb_get_use_in_baked_light = gd::api->godot_method_bind_get_method("GridMap", "get_use_in_baked_light");
	___mb.mb_get_used_cells = gd::api->godot_method_bind_get_method("GridMap", "get_used_cells");
	___mb.mb_get_used_cells_by_item = gd::api->godot_method_bind_get_method("GridMap", "get_used_cells_by_item");
	___mb.mb_is_baking_navigation = gd::api->godot_method_bind_get_method("GridMap", "is_baking_navigation");
	___mb.mb_make_baked_meshes = gd::api->godot_method_bind_get_method("GridMap", "make_baked_meshes");
	___mb.mb_map_to_world = gd::api->godot_method_bind_get_method("GridMap", "map_to_world");
	___mb.mb_resource_changed = gd::api->godot_method_bind_get_method("GridMap", "resource_changed");
	___mb.mb_set_bake_navigation = gd::api->godot_method_bind_get_method("GridMap", "set_bake_navigation");
	___mb.mb_set_cell_item = gd::api->godot_method_bind_get_method("GridMap", "set_cell_item");
	___mb.mb_set_cell_scale = gd::api->godot_method_bind_get_method("GridMap", "set_cell_scale");
	___mb.mb_set_cell_size = gd::api->godot_method_bind_get_method("GridMap", "set_cell_size");
	___mb.mb_set_center_x = gd::api->godot_method_bind_get_method("GridMap", "set_center_x");
	___mb.mb_set_center_y = gd::api->godot_method_bind_get_method("GridMap", "set_center_y");
	___mb.mb_set_center_z = gd::api->godot_method_bind_get_method("GridMap", "set_center_z");
	___mb.mb_set_clip = gd::api->godot_method_bind_get_method("GridMap", "set_clip");
	___mb.mb_set_collision_layer = gd::api->godot_method_bind_get_method("GridMap", "set_collision_layer");
	___mb.mb_set_collision_layer_bit = gd::api->godot_method_bind_get_method("GridMap", "set_collision_layer_bit");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("GridMap", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("GridMap", "set_collision_mask_bit");
	___mb.mb_set_mesh_library = gd::api->godot_method_bind_get_method("GridMap", "set_mesh_library");
	___mb.mb_set_navigation_layers = gd::api->godot_method_bind_get_method("GridMap", "set_navigation_layers");
	___mb.mb_set_octant_size = gd::api->godot_method_bind_get_method("GridMap", "set_octant_size");
	___mb.mb_set_physics_material = gd::api->godot_method_bind_get_method("GridMap", "set_physics_material");
	___mb.mb_set_use_in_baked_light = gd::api->godot_method_bind_get_method("GridMap", "set_use_in_baked_light");
	___mb.mb_world_to_map = gd::api->godot_method_bind_get_method("GridMap", "world_to_map");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GridMap");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

grid_map *grid_map::_new()
{
	return (grid_map *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GridMap")());
}
void grid_map::_update_octants_callback() {
	___godot_icall_void(___mb.mb__update_octants_callback, (const object *) this);
}

void grid_map::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void grid_map::clear_baked_meshes() {
	___godot_icall_void(___mb.mb_clear_baked_meshes, (const object *) this);
}

rid grid_map::get_bake_mesh_instance(const int64_t idx) {
	return ___godot_icall_RID_int(___mb.mb_get_bake_mesh_instance, (const object *) this, idx);
}

array grid_map::get_bake_meshes() {
	return ___godot_icall_Array(___mb.mb_get_bake_meshes, (const object *) this);
}

int64_t grid_map::get_cell_item(const int64_t x, const int64_t y, const int64_t z) const {
	return ___godot_icall_int_int_int_int(___mb.mb_get_cell_item, (const object *) this, x, y, z);
}

int64_t grid_map::get_cell_item_orientation(const int64_t x, const int64_t y, const int64_t z) const {
	return ___godot_icall_int_int_int_int(___mb.mb_get_cell_item_orientation, (const object *) this, x, y, z);
}

real_t grid_map::get_cell_scale() const {
	return ___godot_icall_float(___mb.mb_get_cell_scale, (const object *) this);
}

vector3 grid_map::get_cell_size() const {
	return ___godot_icall_Vector3(___mb.mb_get_cell_size, (const object *) this);
}

bool grid_map::get_center_x() const {
	return ___godot_icall_bool(___mb.mb_get_center_x, (const object *) this);
}

bool grid_map::get_center_y() const {
	return ___godot_icall_bool(___mb.mb_get_center_y, (const object *) this);
}

bool grid_map::get_center_z() const {
	return ___godot_icall_bool(___mb.mb_get_center_z, (const object *) this);
}

int64_t grid_map::get_collision_layer() const {
	return ___godot_icall_int(___mb.mb_get_collision_layer, (const object *) this);
}

bool grid_map::get_collision_layer_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_layer_bit, (const object *) this, bit);
}

int64_t grid_map::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool grid_map::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

ref<mesh_library> grid_map::get_mesh_library() const {
	return ref<mesh_library>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh_library, (const object *) this));
}

array grid_map::get_meshes() const {
	return ___godot_icall_Array(___mb.mb_get_meshes, (const object *) this);
}

int64_t grid_map::get_navigation_layers() {
	return ___godot_icall_int(___mb.mb_get_navigation_layers, (const object *) this);
}

int64_t grid_map::get_octant_size() const {
	return ___godot_icall_int(___mb.mb_get_octant_size, (const object *) this);
}

ref<physics_material> grid_map::get_physics_material() const {
	return ref<physics_material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_physics_material, (const object *) this));
}

bool grid_map::get_use_in_baked_light() const {
	return ___godot_icall_bool(___mb.mb_get_use_in_baked_light, (const object *) this);
}

array grid_map::get_used_cells() const {
	return ___godot_icall_Array(___mb.mb_get_used_cells, (const object *) this);
}

array grid_map::get_used_cells_by_item(const int64_t item) const {
	return ___godot_icall_Array_int(___mb.mb_get_used_cells_by_item, (const object *) this, item);
}

bool grid_map::is_baking_navigation() {
	return ___godot_icall_bool(___mb.mb_is_baking_navigation, (const object *) this);
}

void grid_map::make_baked_meshes(const bool gen_lightmap_uv, const real_t lightmap_uv_texel_size) {
	___godot_icall_void_bool_float(___mb.mb_make_baked_meshes, (const object *) this, gen_lightmap_uv, lightmap_uv_texel_size);
}

vector3 grid_map::map_to_world(const int64_t x, const int64_t y, const int64_t z) const {
	return ___godot_icall_Vector3_int_int_int(___mb.mb_map_to_world, (const object *) this, x, y, z);
}

void grid_map::resource_changed(const ref<resource> resource_) {
	___godot_icall_void_Object(___mb.mb_resource_changed, (const object *) this, resource_.ptr());
}

void grid_map::set_bake_navigation(const bool bake_navigation) {
	___godot_icall_void_bool(___mb.mb_set_bake_navigation, (const object *) this, bake_navigation);
}

void grid_map::set_cell_item(const int64_t x, const int64_t y, const int64_t z, const int64_t item, const int64_t orientation) {
	___godot_icall_void_int_int_int_int_int(___mb.mb_set_cell_item, (const object *) this, x, y, z, item, orientation);
}

void grid_map::set_cell_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_cell_scale, (const object *) this, scale);
}

void grid_map::set_cell_size(const vector3 size) {
	___godot_icall_void_Vector3(___mb.mb_set_cell_size, (const object *) this, size);
}

void grid_map::set_center_x(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_center_x, (const object *) this, enable);
}

void grid_map::set_center_y(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_center_y, (const object *) this, enable);
}

void grid_map::set_center_z(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_center_z, (const object *) this, enable);
}

void grid_map::set_clip(const bool enabled, const bool clipabove, const int64_t floor, const int64_t axis) {
	___godot_icall_void_bool_bool_int_int(___mb.mb_set_clip, (const object *) this, enabled, clipabove, floor, axis);
}

void grid_map::set_collision_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_collision_layer, (const object *) this, layer);
}

void grid_map::set_collision_layer_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_layer_bit, (const object *) this, bit, value);
}

void grid_map::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void grid_map::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void grid_map::set_mesh_library(const ref<mesh_library> mesh_library_) {
	___godot_icall_void_Object(___mb.mb_set_mesh_library, (const object *) this, mesh_library_.ptr());
}

void grid_map::set_navigation_layers(const int64_t navigation_layers) {
	___godot_icall_void_int(___mb.mb_set_navigation_layers, (const object *) this, navigation_layers);
}

void grid_map::set_octant_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_octant_size, (const object *) this, size);
}

void grid_map::set_physics_material(const ref<physics_material> material_) {
	___godot_icall_void_Object(___mb.mb_set_physics_material, (const object *) this, material_.ptr());
}

void grid_map::set_use_in_baked_light(const bool use_in_baked_light) {
	___godot_icall_void_bool(___mb.mb_set_use_in_baked_light, (const object *) this, use_in_baked_light);
}

vector3 grid_map::world_to_map(const vector3 pos) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_world_to_map, (const object *) this, pos);
}

}