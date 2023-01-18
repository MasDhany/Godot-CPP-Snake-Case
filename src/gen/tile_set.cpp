#include "tile_set.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "navigation_polygon.hpp"
#include "object.hpp"
#include "occluder_polygon2d.hpp"
#include "shader_material.hpp"
#include "shape2d.hpp"
#include "texture.hpp"


namespace gd {


tile_set::___method_bindings tile_set::___mb = {};

void *tile_set::_detail_class_tag = nullptr;

void tile_set::___init_method_bindings() {
	___mb.mb__forward_atlas_subtile_selection = gd::api->godot_method_bind_get_method("TileSet", "_forward_atlas_subtile_selection");
	___mb.mb__forward_subtile_selection = gd::api->godot_method_bind_get_method("TileSet", "_forward_subtile_selection");
	___mb.mb__is_tile_bound = gd::api->godot_method_bind_get_method("TileSet", "_is_tile_bound");
	___mb.mb_autotile_clear_bitmask_map = gd::api->godot_method_bind_get_method("TileSet", "autotile_clear_bitmask_map");
	___mb.mb_autotile_get_bitmask = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_bitmask");
	___mb.mb_autotile_get_bitmask_mode = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_bitmask_mode");
	___mb.mb_autotile_get_icon_coordinate = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_icon_coordinate");
	___mb.mb_autotile_get_light_occluder = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_light_occluder");
	___mb.mb_autotile_get_navigation_polygon = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_navigation_polygon");
	___mb.mb_autotile_get_size = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_size");
	___mb.mb_autotile_get_spacing = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_spacing");
	___mb.mb_autotile_get_subtile_priority = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_subtile_priority");
	___mb.mb_autotile_get_z_index = gd::api->godot_method_bind_get_method("TileSet", "autotile_get_z_index");
	___mb.mb_autotile_set_bitmask = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_bitmask");
	___mb.mb_autotile_set_bitmask_mode = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_bitmask_mode");
	___mb.mb_autotile_set_icon_coordinate = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_icon_coordinate");
	___mb.mb_autotile_set_light_occluder = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_light_occluder");
	___mb.mb_autotile_set_navigation_polygon = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_navigation_polygon");
	___mb.mb_autotile_set_size = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_size");
	___mb.mb_autotile_set_spacing = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_spacing");
	___mb.mb_autotile_set_subtile_priority = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_subtile_priority");
	___mb.mb_autotile_set_z_index = gd::api->godot_method_bind_get_method("TileSet", "autotile_set_z_index");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("TileSet", "clear");
	___mb.mb_create_tile = gd::api->godot_method_bind_get_method("TileSet", "create_tile");
	___mb.mb_find_tile_by_name = gd::api->godot_method_bind_get_method("TileSet", "find_tile_by_name");
	___mb.mb_get_last_unused_tile_id = gd::api->godot_method_bind_get_method("TileSet", "get_last_unused_tile_id");
	___mb.mb_get_tiles_ids = gd::api->godot_method_bind_get_method("TileSet", "get_tiles_ids");
	___mb.mb_remove_tile = gd::api->godot_method_bind_get_method("TileSet", "remove_tile");
	___mb.mb_tile_add_shape = gd::api->godot_method_bind_get_method("TileSet", "tile_add_shape");
	___mb.mb_tile_get_light_occluder = gd::api->godot_method_bind_get_method("TileSet", "tile_get_light_occluder");
	___mb.mb_tile_get_material = gd::api->godot_method_bind_get_method("TileSet", "tile_get_material");
	___mb.mb_tile_get_modulate = gd::api->godot_method_bind_get_method("TileSet", "tile_get_modulate");
	___mb.mb_tile_get_name = gd::api->godot_method_bind_get_method("TileSet", "tile_get_name");
	___mb.mb_tile_get_navigation_polygon = gd::api->godot_method_bind_get_method("TileSet", "tile_get_navigation_polygon");
	___mb.mb_tile_get_navigation_polygon_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_get_navigation_polygon_offset");
	___mb.mb_tile_get_normal_map = gd::api->godot_method_bind_get_method("TileSet", "tile_get_normal_map");
	___mb.mb_tile_get_occluder_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_get_occluder_offset");
	___mb.mb_tile_get_region = gd::api->godot_method_bind_get_method("TileSet", "tile_get_region");
	___mb.mb_tile_get_shape = gd::api->godot_method_bind_get_method("TileSet", "tile_get_shape");
	___mb.mb_tile_get_shape_count = gd::api->godot_method_bind_get_method("TileSet", "tile_get_shape_count");
	___mb.mb_tile_get_shape_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_get_shape_offset");
	___mb.mb_tile_get_shape_one_way = gd::api->godot_method_bind_get_method("TileSet", "tile_get_shape_one_way");
	___mb.mb_tile_get_shape_one_way_margin = gd::api->godot_method_bind_get_method("TileSet", "tile_get_shape_one_way_margin");
	___mb.mb_tile_get_shape_transform = gd::api->godot_method_bind_get_method("TileSet", "tile_get_shape_transform");
	___mb.mb_tile_get_shapes = gd::api->godot_method_bind_get_method("TileSet", "tile_get_shapes");
	___mb.mb_tile_get_texture = gd::api->godot_method_bind_get_method("TileSet", "tile_get_texture");
	___mb.mb_tile_get_texture_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_get_texture_offset");
	___mb.mb_tile_get_tile_mode = gd::api->godot_method_bind_get_method("TileSet", "tile_get_tile_mode");
	___mb.mb_tile_get_z_index = gd::api->godot_method_bind_get_method("TileSet", "tile_get_z_index");
	___mb.mb_tile_set_light_occluder = gd::api->godot_method_bind_get_method("TileSet", "tile_set_light_occluder");
	___mb.mb_tile_set_material = gd::api->godot_method_bind_get_method("TileSet", "tile_set_material");
	___mb.mb_tile_set_modulate = gd::api->godot_method_bind_get_method("TileSet", "tile_set_modulate");
	___mb.mb_tile_set_name = gd::api->godot_method_bind_get_method("TileSet", "tile_set_name");
	___mb.mb_tile_set_navigation_polygon = gd::api->godot_method_bind_get_method("TileSet", "tile_set_navigation_polygon");
	___mb.mb_tile_set_navigation_polygon_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_set_navigation_polygon_offset");
	___mb.mb_tile_set_normal_map = gd::api->godot_method_bind_get_method("TileSet", "tile_set_normal_map");
	___mb.mb_tile_set_occluder_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_set_occluder_offset");
	___mb.mb_tile_set_region = gd::api->godot_method_bind_get_method("TileSet", "tile_set_region");
	___mb.mb_tile_set_shape = gd::api->godot_method_bind_get_method("TileSet", "tile_set_shape");
	___mb.mb_tile_set_shape_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_set_shape_offset");
	___mb.mb_tile_set_shape_one_way = gd::api->godot_method_bind_get_method("TileSet", "tile_set_shape_one_way");
	___mb.mb_tile_set_shape_one_way_margin = gd::api->godot_method_bind_get_method("TileSet", "tile_set_shape_one_way_margin");
	___mb.mb_tile_set_shape_transform = gd::api->godot_method_bind_get_method("TileSet", "tile_set_shape_transform");
	___mb.mb_tile_set_shapes = gd::api->godot_method_bind_get_method("TileSet", "tile_set_shapes");
	___mb.mb_tile_set_texture = gd::api->godot_method_bind_get_method("TileSet", "tile_set_texture");
	___mb.mb_tile_set_texture_offset = gd::api->godot_method_bind_get_method("TileSet", "tile_set_texture_offset");
	___mb.mb_tile_set_tile_mode = gd::api->godot_method_bind_get_method("TileSet", "tile_set_tile_mode");
	___mb.mb_tile_set_z_index = gd::api->godot_method_bind_get_method("TileSet", "tile_set_z_index");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TileSet");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

tile_set *tile_set::_new()
{
	return (tile_set *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TileSet")());
}
vector2 tile_set::_forward_atlas_subtile_selection(const int64_t atlastile_id, const object *tilemap, const vector2 tile_location) {
	return ___godot_icall_Vector2_int_Object_Vector2(___mb.mb__forward_atlas_subtile_selection, (const object *) this, atlastile_id, tilemap, tile_location);
}

vector2 tile_set::_forward_subtile_selection(const int64_t autotile_id, const int64_t bitmask, const object *tilemap, const vector2 tile_location) {
	return ___godot_icall_Vector2_int_int_Object_Vector2(___mb.mb__forward_subtile_selection, (const object *) this, autotile_id, bitmask, tilemap, tile_location);
}

bool tile_set::_is_tile_bound(const int64_t drawn_id, const int64_t neighbor_id) {
	return ___godot_icall_bool_int_int(___mb.mb__is_tile_bound, (const object *) this, drawn_id, neighbor_id);
}

void tile_set::autotile_clear_bitmask_map(const int64_t id) {
	___godot_icall_void_int(___mb.mb_autotile_clear_bitmask_map, (const object *) this, id);
}

int64_t tile_set::autotile_get_bitmask(const int64_t id, const vector2 coord) {
	return ___godot_icall_int_int_Vector2(___mb.mb_autotile_get_bitmask, (const object *) this, id, coord);
}

tile_set::BitmaskMode tile_set::autotile_get_bitmask_mode(const int64_t id) const {
	return (tile_set::BitmaskMode) ___godot_icall_int_int(___mb.mb_autotile_get_bitmask_mode, (const object *) this, id);
}

vector2 tile_set::autotile_get_icon_coordinate(const int64_t id) const {
	return ___godot_icall_Vector2_int(___mb.mb_autotile_get_icon_coordinate, (const object *) this, id);
}

ref<occluder_polygon2d> tile_set::autotile_get_light_occluder(const int64_t id, const vector2 coord) const {
	return ref<occluder_polygon2d>::__internal_constructor(___godot_icall_Object_int_Vector2(___mb.mb_autotile_get_light_occluder, (const object *) this, id, coord));
}

ref<navigation_polygon> tile_set::autotile_get_navigation_polygon(const int64_t id, const vector2 coord) const {
	return ref<navigation_polygon>::__internal_constructor(___godot_icall_Object_int_Vector2(___mb.mb_autotile_get_navigation_polygon, (const object *) this, id, coord));
}

vector2 tile_set::autotile_get_size(const int64_t id) const {
	return ___godot_icall_Vector2_int(___mb.mb_autotile_get_size, (const object *) this, id);
}

int64_t tile_set::autotile_get_spacing(const int64_t id) const {
	return ___godot_icall_int_int(___mb.mb_autotile_get_spacing, (const object *) this, id);
}

int64_t tile_set::autotile_get_subtile_priority(const int64_t id, const vector2 coord) {
	return ___godot_icall_int_int_Vector2(___mb.mb_autotile_get_subtile_priority, (const object *) this, id, coord);
}

int64_t tile_set::autotile_get_z_index(const int64_t id, const vector2 coord) {
	return ___godot_icall_int_int_Vector2(___mb.mb_autotile_get_z_index, (const object *) this, id, coord);
}

void tile_set::autotile_set_bitmask(const int64_t id, const vector2 bitmask, const int64_t flag) {
	___godot_icall_void_int_Vector2_int(___mb.mb_autotile_set_bitmask, (const object *) this, id, bitmask, flag);
}

void tile_set::autotile_set_bitmask_mode(const int64_t id, const int64_t mode) {
	___godot_icall_void_int_int(___mb.mb_autotile_set_bitmask_mode, (const object *) this, id, mode);
}

void tile_set::autotile_set_icon_coordinate(const int64_t id, const vector2 coord) {
	___godot_icall_void_int_Vector2(___mb.mb_autotile_set_icon_coordinate, (const object *) this, id, coord);
}

void tile_set::autotile_set_light_occluder(const int64_t id, const ref<occluder_polygon2d> light_occluder, const vector2 coord) {
	___godot_icall_void_int_Object_Vector2(___mb.mb_autotile_set_light_occluder, (const object *) this, id, light_occluder.ptr(), coord);
}

void tile_set::autotile_set_navigation_polygon(const int64_t id, const ref<navigation_polygon> navigation_polygon_, const vector2 coord) {
	___godot_icall_void_int_Object_Vector2(___mb.mb_autotile_set_navigation_polygon, (const object *) this, id, navigation_polygon_.ptr(), coord);
}

void tile_set::autotile_set_size(const int64_t id, const vector2 size) {
	___godot_icall_void_int_Vector2(___mb.mb_autotile_set_size, (const object *) this, id, size);
}

void tile_set::autotile_set_spacing(const int64_t id, const int64_t spacing) {
	___godot_icall_void_int_int(___mb.mb_autotile_set_spacing, (const object *) this, id, spacing);
}

void tile_set::autotile_set_subtile_priority(const int64_t id, const vector2 coord, const int64_t priority) {
	___godot_icall_void_int_Vector2_int(___mb.mb_autotile_set_subtile_priority, (const object *) this, id, coord, priority);
}

void tile_set::autotile_set_z_index(const int64_t id, const vector2 coord, const int64_t z_index) {
	___godot_icall_void_int_Vector2_int(___mb.mb_autotile_set_z_index, (const object *) this, id, coord, z_index);
}

void tile_set::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void tile_set::create_tile(const int64_t id) {
	___godot_icall_void_int(___mb.mb_create_tile, (const object *) this, id);
}

int64_t tile_set::find_tile_by_name(const string name) const {
	return ___godot_icall_int_String(___mb.mb_find_tile_by_name, (const object *) this, name);
}

int64_t tile_set::get_last_unused_tile_id() const {
	return ___godot_icall_int(___mb.mb_get_last_unused_tile_id, (const object *) this);
}

array tile_set::get_tiles_ids() const {
	return ___godot_icall_Array(___mb.mb_get_tiles_ids, (const object *) this);
}

void tile_set::remove_tile(const int64_t id) {
	___godot_icall_void_int(___mb.mb_remove_tile, (const object *) this, id);
}

void tile_set::tile_add_shape(const int64_t id, const ref<shape2d> shape_, const transform2d shape_transform, const bool one_way, const vector2 autotile_coord) {
	___godot_icall_void_int_Object_Transform2D_bool_Vector2(___mb.mb_tile_add_shape, (const object *) this, id, shape_.ptr(), shape_transform, one_way, autotile_coord);
}

ref<occluder_polygon2d> tile_set::tile_get_light_occluder(const int64_t id) const {
	return ref<occluder_polygon2d>::__internal_constructor(___godot_icall_Object_int(___mb.mb_tile_get_light_occluder, (const object *) this, id));
}

ref<shader_material> tile_set::tile_get_material(const int64_t id) const {
	return ref<shader_material>::__internal_constructor(___godot_icall_Object_int(___mb.mb_tile_get_material, (const object *) this, id));
}

color tile_set::tile_get_modulate(const int64_t id) const {
	return ___godot_icall_Color_int(___mb.mb_tile_get_modulate, (const object *) this, id);
}

string tile_set::tile_get_name(const int64_t id) const {
	return ___godot_icall_String_int(___mb.mb_tile_get_name, (const object *) this, id);
}

ref<navigation_polygon> tile_set::tile_get_navigation_polygon(const int64_t id) const {
	return ref<navigation_polygon>::__internal_constructor(___godot_icall_Object_int(___mb.mb_tile_get_navigation_polygon, (const object *) this, id));
}

vector2 tile_set::tile_get_navigation_polygon_offset(const int64_t id) const {
	return ___godot_icall_Vector2_int(___mb.mb_tile_get_navigation_polygon_offset, (const object *) this, id);
}

ref<texture> tile_set::tile_get_normal_map(const int64_t id) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_tile_get_normal_map, (const object *) this, id));
}

vector2 tile_set::tile_get_occluder_offset(const int64_t id) const {
	return ___godot_icall_Vector2_int(___mb.mb_tile_get_occluder_offset, (const object *) this, id);
}

rect2 tile_set::tile_get_region(const int64_t id) const {
	return ___godot_icall_Rect2_int(___mb.mb_tile_get_region, (const object *) this, id);
}

ref<shape2d> tile_set::tile_get_shape(const int64_t id, const int64_t shape_id) const {
	return ref<shape2d>::__internal_constructor(___godot_icall_Object_int_int(___mb.mb_tile_get_shape, (const object *) this, id, shape_id));
}

int64_t tile_set::tile_get_shape_count(const int64_t id) const {
	return ___godot_icall_int_int(___mb.mb_tile_get_shape_count, (const object *) this, id);
}

vector2 tile_set::tile_get_shape_offset(const int64_t id, const int64_t shape_id) const {
	return ___godot_icall_Vector2_int_int(___mb.mb_tile_get_shape_offset, (const object *) this, id, shape_id);
}

bool tile_set::tile_get_shape_one_way(const int64_t id, const int64_t shape_id) const {
	return ___godot_icall_bool_int_int(___mb.mb_tile_get_shape_one_way, (const object *) this, id, shape_id);
}

real_t tile_set::tile_get_shape_one_way_margin(const int64_t id, const int64_t shape_id) const {
	return ___godot_icall_float_int_int(___mb.mb_tile_get_shape_one_way_margin, (const object *) this, id, shape_id);
}

transform2d tile_set::tile_get_shape_transform(const int64_t id, const int64_t shape_id) const {
	return ___godot_icall_Transform2D_int_int(___mb.mb_tile_get_shape_transform, (const object *) this, id, shape_id);
}

array tile_set::tile_get_shapes(const int64_t id) const {
	return ___godot_icall_Array_int(___mb.mb_tile_get_shapes, (const object *) this, id);
}

ref<texture> tile_set::tile_get_texture(const int64_t id) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_tile_get_texture, (const object *) this, id));
}

vector2 tile_set::tile_get_texture_offset(const int64_t id) const {
	return ___godot_icall_Vector2_int(___mb.mb_tile_get_texture_offset, (const object *) this, id);
}

tile_set::TileMode tile_set::tile_get_tile_mode(const int64_t id) const {
	return (tile_set::TileMode) ___godot_icall_int_int(___mb.mb_tile_get_tile_mode, (const object *) this, id);
}

int64_t tile_set::tile_get_z_index(const int64_t id) const {
	return ___godot_icall_int_int(___mb.mb_tile_get_z_index, (const object *) this, id);
}

void tile_set::tile_set_light_occluder(const int64_t id, const ref<occluder_polygon2d> light_occluder) {
	___godot_icall_void_int_Object(___mb.mb_tile_set_light_occluder, (const object *) this, id, light_occluder.ptr());
}

void tile_set::tile_set_material(const int64_t id, const ref<shader_material> material_) {
	___godot_icall_void_int_Object(___mb.mb_tile_set_material, (const object *) this, id, material_.ptr());
}

void tile_set::tile_set_modulate(const int64_t id, const color color_) {
	___godot_icall_void_int_Color(___mb.mb_tile_set_modulate, (const object *) this, id, color_);
}

void tile_set::tile_set_name(const int64_t id, const string name) {
	___godot_icall_void_int_String(___mb.mb_tile_set_name, (const object *) this, id, name);
}

void tile_set::tile_set_navigation_polygon(const int64_t id, const ref<navigation_polygon> navigation_polygon_) {
	___godot_icall_void_int_Object(___mb.mb_tile_set_navigation_polygon, (const object *) this, id, navigation_polygon_.ptr());
}

void tile_set::tile_set_navigation_polygon_offset(const int64_t id, const vector2 navigation_polygon_offset) {
	___godot_icall_void_int_Vector2(___mb.mb_tile_set_navigation_polygon_offset, (const object *) this, id, navigation_polygon_offset);
}

void tile_set::tile_set_normal_map(const int64_t id, const ref<texture> normal_map) {
	___godot_icall_void_int_Object(___mb.mb_tile_set_normal_map, (const object *) this, id, normal_map.ptr());
}

void tile_set::tile_set_occluder_offset(const int64_t id, const vector2 occluder_offset) {
	___godot_icall_void_int_Vector2(___mb.mb_tile_set_occluder_offset, (const object *) this, id, occluder_offset);
}

void tile_set::tile_set_region(const int64_t id, const rect2 region) {
	___godot_icall_void_int_Rect2(___mb.mb_tile_set_region, (const object *) this, id, region);
}

void tile_set::tile_set_shape(const int64_t id, const int64_t shape_id, const ref<shape2d> shape_) {
	___godot_icall_void_int_int_Object(___mb.mb_tile_set_shape, (const object *) this, id, shape_id, shape_.ptr());
}

void tile_set::tile_set_shape_offset(const int64_t id, const int64_t shape_id, const vector2 shape_offset) {
	___godot_icall_void_int_int_Vector2(___mb.mb_tile_set_shape_offset, (const object *) this, id, shape_id, shape_offset);
}

void tile_set::tile_set_shape_one_way(const int64_t id, const int64_t shape_id, const bool one_way) {
	___godot_icall_void_int_int_bool(___mb.mb_tile_set_shape_one_way, (const object *) this, id, shape_id, one_way);
}

void tile_set::tile_set_shape_one_way_margin(const int64_t id, const int64_t shape_id, const real_t one_way) {
	___godot_icall_void_int_int_float(___mb.mb_tile_set_shape_one_way_margin, (const object *) this, id, shape_id, one_way);
}

void tile_set::tile_set_shape_transform(const int64_t id, const int64_t shape_id, const transform2d shape_transform) {
	___godot_icall_void_int_int_Transform2D(___mb.mb_tile_set_shape_transform, (const object *) this, id, shape_id, shape_transform);
}

void tile_set::tile_set_shapes(const int64_t id, const array shapes) {
	___godot_icall_void_int_Array(___mb.mb_tile_set_shapes, (const object *) this, id, shapes);
}

void tile_set::tile_set_texture(const int64_t id, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_tile_set_texture, (const object *) this, id, texture_.ptr());
}

void tile_set::tile_set_texture_offset(const int64_t id, const vector2 texture_offset) {
	___godot_icall_void_int_Vector2(___mb.mb_tile_set_texture_offset, (const object *) this, id, texture_offset);
}

void tile_set::tile_set_tile_mode(const int64_t id, const int64_t tilemode) {
	___godot_icall_void_int_int(___mb.mb_tile_set_tile_mode, (const object *) this, id, tilemode);
}

void tile_set::tile_set_z_index(const int64_t id, const int64_t z_index) {
	___godot_icall_void_int_int(___mb.mb_tile_set_z_index, (const object *) this, id, z_index);
}

}