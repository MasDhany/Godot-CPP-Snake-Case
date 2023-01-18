#include "tile_map.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "tile_set.hpp"


namespace gd {


tile_map::___method_bindings tile_map::___mb = {};

void *tile_map::_detail_class_tag = nullptr;

void tile_map::___init_method_bindings() {
	___mb.mb__clear_quadrants = gd::api->godot_method_bind_get_method("TileMap", "_clear_quadrants");
	___mb.mb__get_old_cell_size = gd::api->godot_method_bind_get_method("TileMap", "_get_old_cell_size");
	___mb.mb__get_tile_data = gd::api->godot_method_bind_get_method("TileMap", "_get_tile_data");
	___mb.mb__recreate_quadrants = gd::api->godot_method_bind_get_method("TileMap", "_recreate_quadrants");
	___mb.mb__set_celld = gd::api->godot_method_bind_get_method("TileMap", "_set_celld");
	___mb.mb__set_old_cell_size = gd::api->godot_method_bind_get_method("TileMap", "_set_old_cell_size");
	___mb.mb__set_tile_data = gd::api->godot_method_bind_get_method("TileMap", "_set_tile_data");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("TileMap", "clear");
	___mb.mb_fix_invalid_tiles = gd::api->godot_method_bind_get_method("TileMap", "fix_invalid_tiles");
	___mb.mb_get_cell = gd::api->godot_method_bind_get_method("TileMap", "get_cell");
	___mb.mb_get_cell_autotile_coord = gd::api->godot_method_bind_get_method("TileMap", "get_cell_autotile_coord");
	___mb.mb_get_cell_size = gd::api->godot_method_bind_get_method("TileMap", "get_cell_size");
	___mb.mb_get_cellv = gd::api->godot_method_bind_get_method("TileMap", "get_cellv");
	___mb.mb_get_clip_uv = gd::api->godot_method_bind_get_method("TileMap", "get_clip_uv");
	___mb.mb_get_collision_bounce = gd::api->godot_method_bind_get_method("TileMap", "get_collision_bounce");
	___mb.mb_get_collision_friction = gd::api->godot_method_bind_get_method("TileMap", "get_collision_friction");
	___mb.mb_get_collision_layer = gd::api->godot_method_bind_get_method("TileMap", "get_collision_layer");
	___mb.mb_get_collision_layer_bit = gd::api->godot_method_bind_get_method("TileMap", "get_collision_layer_bit");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("TileMap", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("TileMap", "get_collision_mask_bit");
	___mb.mb_get_collision_use_kinematic = gd::api->godot_method_bind_get_method("TileMap", "get_collision_use_kinematic");
	___mb.mb_get_collision_use_parent = gd::api->godot_method_bind_get_method("TileMap", "get_collision_use_parent");
	___mb.mb_get_custom_transform = gd::api->godot_method_bind_get_method("TileMap", "get_custom_transform");
	___mb.mb_get_half_offset = gd::api->godot_method_bind_get_method("TileMap", "get_half_offset");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("TileMap", "get_mode");
	___mb.mb_get_navigation_layers = gd::api->godot_method_bind_get_method("TileMap", "get_navigation_layers");
	___mb.mb_get_occluder_light_mask = gd::api->godot_method_bind_get_method("TileMap", "get_occluder_light_mask");
	___mb.mb_get_quadrant_size = gd::api->godot_method_bind_get_method("TileMap", "get_quadrant_size");
	___mb.mb_get_tile_origin = gd::api->godot_method_bind_get_method("TileMap", "get_tile_origin");
	___mb.mb_get_tileset = gd::api->godot_method_bind_get_method("TileMap", "get_tileset");
	___mb.mb_get_used_cells = gd::api->godot_method_bind_get_method("TileMap", "get_used_cells");
	___mb.mb_get_used_cells_by_id = gd::api->godot_method_bind_get_method("TileMap", "get_used_cells_by_id");
	___mb.mb_get_used_rect = gd::api->godot_method_bind_get_method("TileMap", "get_used_rect");
	___mb.mb_is_baking_navigation = gd::api->godot_method_bind_get_method("TileMap", "is_baking_navigation");
	___mb.mb_is_cell_transposed = gd::api->godot_method_bind_get_method("TileMap", "is_cell_transposed");
	___mb.mb_is_cell_x_flipped = gd::api->godot_method_bind_get_method("TileMap", "is_cell_x_flipped");
	___mb.mb_is_cell_y_flipped = gd::api->godot_method_bind_get_method("TileMap", "is_cell_y_flipped");
	___mb.mb_is_centered_textures_enabled = gd::api->godot_method_bind_get_method("TileMap", "is_centered_textures_enabled");
	___mb.mb_is_compatibility_mode_enabled = gd::api->godot_method_bind_get_method("TileMap", "is_compatibility_mode_enabled");
	___mb.mb_is_show_collision_enabled = gd::api->godot_method_bind_get_method("TileMap", "is_show_collision_enabled");
	___mb.mb_is_y_sort_mode_enabled = gd::api->godot_method_bind_get_method("TileMap", "is_y_sort_mode_enabled");
	___mb.mb_map_to_world = gd::api->godot_method_bind_get_method("TileMap", "map_to_world");
	___mb.mb_set_bake_navigation = gd::api->godot_method_bind_get_method("TileMap", "set_bake_navigation");
	___mb.mb_set_cell = gd::api->godot_method_bind_get_method("TileMap", "set_cell");
	___mb.mb_set_cell_size = gd::api->godot_method_bind_get_method("TileMap", "set_cell_size");
	___mb.mb_set_cellv = gd::api->godot_method_bind_get_method("TileMap", "set_cellv");
	___mb.mb_set_centered_textures = gd::api->godot_method_bind_get_method("TileMap", "set_centered_textures");
	___mb.mb_set_clip_uv = gd::api->godot_method_bind_get_method("TileMap", "set_clip_uv");
	___mb.mb_set_collision_bounce = gd::api->godot_method_bind_get_method("TileMap", "set_collision_bounce");
	___mb.mb_set_collision_friction = gd::api->godot_method_bind_get_method("TileMap", "set_collision_friction");
	___mb.mb_set_collision_layer = gd::api->godot_method_bind_get_method("TileMap", "set_collision_layer");
	___mb.mb_set_collision_layer_bit = gd::api->godot_method_bind_get_method("TileMap", "set_collision_layer_bit");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("TileMap", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("TileMap", "set_collision_mask_bit");
	___mb.mb_set_collision_use_kinematic = gd::api->godot_method_bind_get_method("TileMap", "set_collision_use_kinematic");
	___mb.mb_set_collision_use_parent = gd::api->godot_method_bind_get_method("TileMap", "set_collision_use_parent");
	___mb.mb_set_compatibility_mode = gd::api->godot_method_bind_get_method("TileMap", "set_compatibility_mode");
	___mb.mb_set_custom_transform = gd::api->godot_method_bind_get_method("TileMap", "set_custom_transform");
	___mb.mb_set_half_offset = gd::api->godot_method_bind_get_method("TileMap", "set_half_offset");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("TileMap", "set_mode");
	___mb.mb_set_navigation_layers = gd::api->godot_method_bind_get_method("TileMap", "set_navigation_layers");
	___mb.mb_set_occluder_light_mask = gd::api->godot_method_bind_get_method("TileMap", "set_occluder_light_mask");
	___mb.mb_set_quadrant_size = gd::api->godot_method_bind_get_method("TileMap", "set_quadrant_size");
	___mb.mb_set_show_collision = gd::api->godot_method_bind_get_method("TileMap", "set_show_collision");
	___mb.mb_set_tile_origin = gd::api->godot_method_bind_get_method("TileMap", "set_tile_origin");
	___mb.mb_set_tileset = gd::api->godot_method_bind_get_method("TileMap", "set_tileset");
	___mb.mb_set_y_sort_mode = gd::api->godot_method_bind_get_method("TileMap", "set_y_sort_mode");
	___mb.mb_update_bitmask_area = gd::api->godot_method_bind_get_method("TileMap", "update_bitmask_area");
	___mb.mb_update_bitmask_region = gd::api->godot_method_bind_get_method("TileMap", "update_bitmask_region");
	___mb.mb_update_dirty_quadrants = gd::api->godot_method_bind_get_method("TileMap", "update_dirty_quadrants");
	___mb.mb_world_to_map = gd::api->godot_method_bind_get_method("TileMap", "world_to_map");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TileMap");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

tile_map *tile_map::_new()
{
	return (tile_map *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TileMap")());
}
void tile_map::_clear_quadrants() {
	___godot_icall_void(___mb.mb__clear_quadrants, (const object *) this);
}

int64_t tile_map::_get_old_cell_size() const {
	return ___godot_icall_int(___mb.mb__get_old_cell_size, (const object *) this);
}

pool_int_array tile_map::_get_tile_data() const {
	return ___godot_icall_PoolIntArray(___mb.mb__get_tile_data, (const object *) this);
}

void tile_map::_recreate_quadrants() {
	___godot_icall_void(___mb.mb__recreate_quadrants, (const object *) this);
}

void tile_map::_set_celld(const vector2 position, const dictionary data) {
	___godot_icall_void_Vector2_Dictionary(___mb.mb__set_celld, (const object *) this, position, data);
}

void tile_map::_set_old_cell_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb__set_old_cell_size, (const object *) this, size);
}

void tile_map::_set_tile_data(const pool_int_array arg0) {
	___godot_icall_void_PoolIntArray(___mb.mb__set_tile_data, (const object *) this, arg0);
}

void tile_map::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void tile_map::fix_invalid_tiles() {
	___godot_icall_void(___mb.mb_fix_invalid_tiles, (const object *) this);
}

int64_t tile_map::get_cell(const int64_t x, const int64_t y) const {
	return ___godot_icall_int_int_int(___mb.mb_get_cell, (const object *) this, x, y);
}

vector2 tile_map::get_cell_autotile_coord(const int64_t x, const int64_t y) const {
	return ___godot_icall_Vector2_int_int(___mb.mb_get_cell_autotile_coord, (const object *) this, x, y);
}

vector2 tile_map::get_cell_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_cell_size, (const object *) this);
}

int64_t tile_map::get_cellv(const vector2 position) const {
	return ___godot_icall_int_Vector2(___mb.mb_get_cellv, (const object *) this, position);
}

bool tile_map::get_clip_uv() const {
	return ___godot_icall_bool(___mb.mb_get_clip_uv, (const object *) this);
}

real_t tile_map::get_collision_bounce() const {
	return ___godot_icall_float(___mb.mb_get_collision_bounce, (const object *) this);
}

real_t tile_map::get_collision_friction() const {
	return ___godot_icall_float(___mb.mb_get_collision_friction, (const object *) this);
}

int64_t tile_map::get_collision_layer() const {
	return ___godot_icall_int(___mb.mb_get_collision_layer, (const object *) this);
}

bool tile_map::get_collision_layer_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_layer_bit, (const object *) this, bit);
}

int64_t tile_map::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool tile_map::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

bool tile_map::get_collision_use_kinematic() const {
	return ___godot_icall_bool(___mb.mb_get_collision_use_kinematic, (const object *) this);
}

bool tile_map::get_collision_use_parent() const {
	return ___godot_icall_bool(___mb.mb_get_collision_use_parent, (const object *) this);
}

transform2d tile_map::get_custom_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_custom_transform, (const object *) this);
}

tile_map::HalfOffset tile_map::get_half_offset() const {
	return (tile_map::HalfOffset) ___godot_icall_int(___mb.mb_get_half_offset, (const object *) this);
}

tile_map::Mode tile_map::get_mode() const {
	return (tile_map::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

int64_t tile_map::get_navigation_layers() {
	return ___godot_icall_int(___mb.mb_get_navigation_layers, (const object *) this);
}

int64_t tile_map::get_occluder_light_mask() const {
	return ___godot_icall_int(___mb.mb_get_occluder_light_mask, (const object *) this);
}

int64_t tile_map::get_quadrant_size() const {
	return ___godot_icall_int(___mb.mb_get_quadrant_size, (const object *) this);
}

tile_map::TileOrigin tile_map::get_tile_origin() const {
	return (tile_map::TileOrigin) ___godot_icall_int(___mb.mb_get_tile_origin, (const object *) this);
}

ref<tile_set> tile_map::get_tileset() const {
	return ref<tile_set>::__internal_constructor(___godot_icall_Object(___mb.mb_get_tileset, (const object *) this));
}

array tile_map::get_used_cells() const {
	return ___godot_icall_Array(___mb.mb_get_used_cells, (const object *) this);
}

array tile_map::get_used_cells_by_id(const int64_t id) const {
	return ___godot_icall_Array_int(___mb.mb_get_used_cells_by_id, (const object *) this, id);
}

rect2 tile_map::get_used_rect() {
	return ___godot_icall_Rect2(___mb.mb_get_used_rect, (const object *) this);
}

bool tile_map::is_baking_navigation() {
	return ___godot_icall_bool(___mb.mb_is_baking_navigation, (const object *) this);
}

bool tile_map::is_cell_transposed(const int64_t x, const int64_t y) const {
	return ___godot_icall_bool_int_int(___mb.mb_is_cell_transposed, (const object *) this, x, y);
}

bool tile_map::is_cell_x_flipped(const int64_t x, const int64_t y) const {
	return ___godot_icall_bool_int_int(___mb.mb_is_cell_x_flipped, (const object *) this, x, y);
}

bool tile_map::is_cell_y_flipped(const int64_t x, const int64_t y) const {
	return ___godot_icall_bool_int_int(___mb.mb_is_cell_y_flipped, (const object *) this, x, y);
}

bool tile_map::is_centered_textures_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_centered_textures_enabled, (const object *) this);
}

bool tile_map::is_compatibility_mode_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_compatibility_mode_enabled, (const object *) this);
}

bool tile_map::is_show_collision_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_show_collision_enabled, (const object *) this);
}

bool tile_map::is_y_sort_mode_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_y_sort_mode_enabled, (const object *) this);
}

vector2 tile_map::map_to_world(const vector2 map_position, const bool ignore_half_ofs) const {
	return ___godot_icall_Vector2_Vector2_bool(___mb.mb_map_to_world, (const object *) this, map_position, ignore_half_ofs);
}

void tile_map::set_bake_navigation(const bool bake_navigation) {
	___godot_icall_void_bool(___mb.mb_set_bake_navigation, (const object *) this, bake_navigation);
}

void tile_map::set_cell(const int64_t x, const int64_t y, const int64_t tile, const bool flip_x, const bool flip_y, const bool transpose, const vector2 autotile_coord) {
	___godot_icall_void_int_int_int_bool_bool_bool_Vector2(___mb.mb_set_cell, (const object *) this, x, y, tile, flip_x, flip_y, transpose, autotile_coord);
}

void tile_map::set_cell_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_cell_size, (const object *) this, size);
}

void tile_map::set_cellv(const vector2 position, const int64_t tile, const bool flip_x, const bool flip_y, const bool transpose, const vector2 autotile_coord) {
	___godot_icall_void_Vector2_int_bool_bool_bool_Vector2(___mb.mb_set_cellv, (const object *) this, position, tile, flip_x, flip_y, transpose, autotile_coord);
}

void tile_map::set_centered_textures(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_centered_textures, (const object *) this, enable);
}

void tile_map::set_clip_uv(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_clip_uv, (const object *) this, enable);
}

void tile_map::set_collision_bounce(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_collision_bounce, (const object *) this, value);
}

void tile_map::set_collision_friction(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_collision_friction, (const object *) this, value);
}

void tile_map::set_collision_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_collision_layer, (const object *) this, layer);
}

void tile_map::set_collision_layer_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_layer_bit, (const object *) this, bit, value);
}

void tile_map::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void tile_map::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void tile_map::set_collision_use_kinematic(const bool use_kinematic) {
	___godot_icall_void_bool(___mb.mb_set_collision_use_kinematic, (const object *) this, use_kinematic);
}

void tile_map::set_collision_use_parent(const bool use_parent) {
	___godot_icall_void_bool(___mb.mb_set_collision_use_parent, (const object *) this, use_parent);
}

void tile_map::set_compatibility_mode(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_compatibility_mode, (const object *) this, enable);
}

void tile_map::set_custom_transform(const transform2d custom_transform) {
	___godot_icall_void_Transform2D(___mb.mb_set_custom_transform, (const object *) this, custom_transform);
}

void tile_map::set_half_offset(const int64_t half_offset) {
	___godot_icall_void_int(___mb.mb_set_half_offset, (const object *) this, half_offset);
}

void tile_map::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void tile_map::set_navigation_layers(const int64_t navigation_layers) {
	___godot_icall_void_int(___mb.mb_set_navigation_layers, (const object *) this, navigation_layers);
}

void tile_map::set_occluder_light_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_occluder_light_mask, (const object *) this, mask);
}

void tile_map::set_quadrant_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_quadrant_size, (const object *) this, size);
}

void tile_map::set_show_collision(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_show_collision, (const object *) this, enable);
}

void tile_map::set_tile_origin(const int64_t origin) {
	___godot_icall_void_int(___mb.mb_set_tile_origin, (const object *) this, origin);
}

void tile_map::set_tileset(const ref<tile_set> tileset) {
	___godot_icall_void_Object(___mb.mb_set_tileset, (const object *) this, tileset.ptr());
}

void tile_map::set_y_sort_mode(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_y_sort_mode, (const object *) this, enable);
}

void tile_map::update_bitmask_area(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_update_bitmask_area, (const object *) this, position);
}

void tile_map::update_bitmask_region(const vector2 start, const vector2 end) {
	___godot_icall_void_Vector2_Vector2(___mb.mb_update_bitmask_region, (const object *) this, start, end);
}

void tile_map::update_dirty_quadrants() {
	___godot_icall_void(___mb.mb_update_dirty_quadrants, (const object *) this);
}

vector2 tile_map::world_to_map(const vector2 world_position) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_world_to_map, (const object *) this, world_position);
}

}