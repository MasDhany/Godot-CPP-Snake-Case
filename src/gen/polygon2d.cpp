#include "polygon2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


polygon2d::___method_bindings polygon2d::___mb = {};

void *polygon2d::_detail_class_tag = nullptr;

void polygon2d::___init_method_bindings() {
	___mb.mb__get_bones = gd::api->godot_method_bind_get_method("Polygon2D", "_get_bones");
	___mb.mb__set_bones = gd::api->godot_method_bind_get_method("Polygon2D", "_set_bones");
	___mb.mb__skeleton_bone_setup_changed = gd::api->godot_method_bind_get_method("Polygon2D", "_skeleton_bone_setup_changed");
	___mb.mb_add_bone = gd::api->godot_method_bind_get_method("Polygon2D", "add_bone");
	___mb.mb_clear_bones = gd::api->godot_method_bind_get_method("Polygon2D", "clear_bones");
	___mb.mb_erase_bone = gd::api->godot_method_bind_get_method("Polygon2D", "erase_bone");
	___mb.mb_get_antialiased = gd::api->godot_method_bind_get_method("Polygon2D", "get_antialiased");
	___mb.mb_get_bone_count = gd::api->godot_method_bind_get_method("Polygon2D", "get_bone_count");
	___mb.mb_get_bone_path = gd::api->godot_method_bind_get_method("Polygon2D", "get_bone_path");
	___mb.mb_get_bone_weights = gd::api->godot_method_bind_get_method("Polygon2D", "get_bone_weights");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("Polygon2D", "get_color");
	___mb.mb_get_internal_vertex_count = gd::api->godot_method_bind_get_method("Polygon2D", "get_internal_vertex_count");
	___mb.mb_get_invert = gd::api->godot_method_bind_get_method("Polygon2D", "get_invert");
	___mb.mb_get_invert_border = gd::api->godot_method_bind_get_method("Polygon2D", "get_invert_border");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("Polygon2D", "get_offset");
	___mb.mb_get_polygon = gd::api->godot_method_bind_get_method("Polygon2D", "get_polygon");
	___mb.mb_get_polygons = gd::api->godot_method_bind_get_method("Polygon2D", "get_polygons");
	___mb.mb_get_skeleton = gd::api->godot_method_bind_get_method("Polygon2D", "get_skeleton");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("Polygon2D", "get_texture");
	___mb.mb_get_texture_offset = gd::api->godot_method_bind_get_method("Polygon2D", "get_texture_offset");
	___mb.mb_get_texture_rotation = gd::api->godot_method_bind_get_method("Polygon2D", "get_texture_rotation");
	___mb.mb_get_texture_rotation_degrees = gd::api->godot_method_bind_get_method("Polygon2D", "get_texture_rotation_degrees");
	___mb.mb_get_texture_scale = gd::api->godot_method_bind_get_method("Polygon2D", "get_texture_scale");
	___mb.mb_get_uv = gd::api->godot_method_bind_get_method("Polygon2D", "get_uv");
	___mb.mb_get_vertex_colors = gd::api->godot_method_bind_get_method("Polygon2D", "get_vertex_colors");
	___mb.mb_set_antialiased = gd::api->godot_method_bind_get_method("Polygon2D", "set_antialiased");
	___mb.mb_set_bone_path = gd::api->godot_method_bind_get_method("Polygon2D", "set_bone_path");
	___mb.mb_set_bone_weights = gd::api->godot_method_bind_get_method("Polygon2D", "set_bone_weights");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("Polygon2D", "set_color");
	___mb.mb_set_internal_vertex_count = gd::api->godot_method_bind_get_method("Polygon2D", "set_internal_vertex_count");
	___mb.mb_set_invert = gd::api->godot_method_bind_get_method("Polygon2D", "set_invert");
	___mb.mb_set_invert_border = gd::api->godot_method_bind_get_method("Polygon2D", "set_invert_border");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("Polygon2D", "set_offset");
	___mb.mb_set_polygon = gd::api->godot_method_bind_get_method("Polygon2D", "set_polygon");
	___mb.mb_set_polygons = gd::api->godot_method_bind_get_method("Polygon2D", "set_polygons");
	___mb.mb_set_skeleton = gd::api->godot_method_bind_get_method("Polygon2D", "set_skeleton");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("Polygon2D", "set_texture");
	___mb.mb_set_texture_offset = gd::api->godot_method_bind_get_method("Polygon2D", "set_texture_offset");
	___mb.mb_set_texture_rotation = gd::api->godot_method_bind_get_method("Polygon2D", "set_texture_rotation");
	___mb.mb_set_texture_rotation_degrees = gd::api->godot_method_bind_get_method("Polygon2D", "set_texture_rotation_degrees");
	___mb.mb_set_texture_scale = gd::api->godot_method_bind_get_method("Polygon2D", "set_texture_scale");
	___mb.mb_set_uv = gd::api->godot_method_bind_get_method("Polygon2D", "set_uv");
	___mb.mb_set_vertex_colors = gd::api->godot_method_bind_get_method("Polygon2D", "set_vertex_colors");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Polygon2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

polygon2d *polygon2d::_new()
{
	return (polygon2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Polygon2D")());
}
array polygon2d::_get_bones() const {
	return ___godot_icall_Array(___mb.mb__get_bones, (const object *) this);
}

void polygon2d::_set_bones(const array bones) {
	___godot_icall_void_Array(___mb.mb__set_bones, (const object *) this, bones);
}

void polygon2d::_skeleton_bone_setup_changed() {
	___godot_icall_void(___mb.mb__skeleton_bone_setup_changed, (const object *) this);
}

void polygon2d::add_bone(const node_path path_, const pool_real_array weights) {
	___godot_icall_void_NodePath_PoolRealArray(___mb.mb_add_bone, (const object *) this, path_, weights);
}

void polygon2d::clear_bones() {
	___godot_icall_void(___mb.mb_clear_bones, (const object *) this);
}

void polygon2d::erase_bone(const int64_t index) {
	___godot_icall_void_int(___mb.mb_erase_bone, (const object *) this, index);
}

bool polygon2d::get_antialiased() const {
	return ___godot_icall_bool(___mb.mb_get_antialiased, (const object *) this);
}

int64_t polygon2d::get_bone_count() const {
	return ___godot_icall_int(___mb.mb_get_bone_count, (const object *) this);
}

node_path polygon2d::get_bone_path(const int64_t index) const {
	return ___godot_icall_NodePath_int(___mb.mb_get_bone_path, (const object *) this, index);
}

pool_real_array polygon2d::get_bone_weights(const int64_t index) const {
	return ___godot_icall_PoolRealArray_int(___mb.mb_get_bone_weights, (const object *) this, index);
}

color polygon2d::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

int64_t polygon2d::get_internal_vertex_count() const {
	return ___godot_icall_int(___mb.mb_get_internal_vertex_count, (const object *) this);
}

bool polygon2d::get_invert() const {
	return ___godot_icall_bool(___mb.mb_get_invert, (const object *) this);
}

real_t polygon2d::get_invert_border() const {
	return ___godot_icall_float(___mb.mb_get_invert_border, (const object *) this);
}

vector2 polygon2d::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

pool_vector2_array polygon2d::get_polygon() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_polygon, (const object *) this);
}

array polygon2d::get_polygons() const {
	return ___godot_icall_Array(___mb.mb_get_polygons, (const object *) this);
}

node_path polygon2d::get_skeleton() const {
	return ___godot_icall_NodePath(___mb.mb_get_skeleton, (const object *) this);
}

ref<texture> polygon2d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

vector2 polygon2d::get_texture_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_texture_offset, (const object *) this);
}

real_t polygon2d::get_texture_rotation() const {
	return ___godot_icall_float(___mb.mb_get_texture_rotation, (const object *) this);
}

real_t polygon2d::get_texture_rotation_degrees() const {
	return ___godot_icall_float(___mb.mb_get_texture_rotation_degrees, (const object *) this);
}

vector2 polygon2d::get_texture_scale() const {
	return ___godot_icall_Vector2(___mb.mb_get_texture_scale, (const object *) this);
}

pool_vector2_array polygon2d::get_uv() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_uv, (const object *) this);
}

pool_color_array polygon2d::get_vertex_colors() const {
	return ___godot_icall_PoolColorArray(___mb.mb_get_vertex_colors, (const object *) this);
}

void polygon2d::set_antialiased(const bool antialiased) {
	___godot_icall_void_bool(___mb.mb_set_antialiased, (const object *) this, antialiased);
}

void polygon2d::set_bone_path(const int64_t index, const node_path path_) {
	___godot_icall_void_int_NodePath(___mb.mb_set_bone_path, (const object *) this, index, path_);
}

void polygon2d::set_bone_weights(const int64_t index, const pool_real_array weights) {
	___godot_icall_void_int_PoolRealArray(___mb.mb_set_bone_weights, (const object *) this, index, weights);
}

void polygon2d::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void polygon2d::set_internal_vertex_count(const int64_t internal_vertex_count) {
	___godot_icall_void_int(___mb.mb_set_internal_vertex_count, (const object *) this, internal_vertex_count);
}

void polygon2d::set_invert(const bool invert) {
	___godot_icall_void_bool(___mb.mb_set_invert, (const object *) this, invert);
}

void polygon2d::set_invert_border(const real_t invert_border) {
	___godot_icall_void_float(___mb.mb_set_invert_border, (const object *) this, invert_border);
}

void polygon2d::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void polygon2d::set_polygon(const pool_vector2_array polygon) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_polygon, (const object *) this, polygon);
}

void polygon2d::set_polygons(const array polygons) {
	___godot_icall_void_Array(___mb.mb_set_polygons, (const object *) this, polygons);
}

void polygon2d::set_skeleton(const node_path skeleton_) {
	___godot_icall_void_NodePath(___mb.mb_set_skeleton, (const object *) this, skeleton_);
}

void polygon2d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void polygon2d::set_texture_offset(const vector2 texture_offset) {
	___godot_icall_void_Vector2(___mb.mb_set_texture_offset, (const object *) this, texture_offset);
}

void polygon2d::set_texture_rotation(const real_t texture_rotation) {
	___godot_icall_void_float(___mb.mb_set_texture_rotation, (const object *) this, texture_rotation);
}

void polygon2d::set_texture_rotation_degrees(const real_t texture_rotation) {
	___godot_icall_void_float(___mb.mb_set_texture_rotation_degrees, (const object *) this, texture_rotation);
}

void polygon2d::set_texture_scale(const vector2 texture_scale) {
	___godot_icall_void_Vector2(___mb.mb_set_texture_scale, (const object *) this, texture_scale);
}

void polygon2d::set_uv(const pool_vector2_array uv) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_uv, (const object *) this, uv);
}

void polygon2d::set_vertex_colors(const pool_color_array vertex_colors) {
	___godot_icall_void_PoolColorArray(___mb.mb_set_vertex_colors, (const object *) this, vertex_colors);
}

}