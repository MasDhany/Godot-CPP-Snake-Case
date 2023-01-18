#include "animation_node_blend_space2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation_root_node.hpp"


namespace gd {


animation_node_blend_space2d::___method_bindings animation_node_blend_space2d::___mb = {};

void *animation_node_blend_space2d::_detail_class_tag = nullptr;

void animation_node_blend_space2d::___init_method_bindings() {
	___mb.mb__add_blend_point = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_add_blend_point");
	___mb.mb__get_triangles = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_get_triangles");
	___mb.mb__set_triangles = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_set_triangles");
	___mb.mb__tree_changed = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_tree_changed");
	___mb.mb__update_triangles = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_update_triangles");
	___mb.mb_add_blend_point = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "add_blend_point");
	___mb.mb_add_triangle = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "add_triangle");
	___mb.mb_get_auto_triangles = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_auto_triangles");
	___mb.mb_get_blend_mode = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_blend_mode");
	___mb.mb_get_blend_point_count = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_blend_point_count");
	___mb.mb_get_blend_point_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_blend_point_node");
	___mb.mb_get_blend_point_position = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_blend_point_position");
	___mb.mb_get_max_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_max_space");
	___mb.mb_get_min_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_min_space");
	___mb.mb_get_snap = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_snap");
	___mb.mb_get_triangle_count = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_triangle_count");
	___mb.mb_get_triangle_point = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_triangle_point");
	___mb.mb_get_x_label = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_x_label");
	___mb.mb_get_y_label = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_y_label");
	___mb.mb_remove_blend_point = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "remove_blend_point");
	___mb.mb_remove_triangle = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "remove_triangle");
	___mb.mb_set_auto_triangles = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_auto_triangles");
	___mb.mb_set_blend_mode = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_blend_mode");
	___mb.mb_set_blend_point_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_blend_point_node");
	___mb.mb_set_blend_point_position = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_blend_point_position");
	___mb.mb_set_max_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_max_space");
	___mb.mb_set_min_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_min_space");
	___mb.mb_set_snap = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_snap");
	___mb.mb_set_x_label = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_x_label");
	___mb.mb_set_y_label = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_y_label");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeBlendSpace2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_blend_space2d *animation_node_blend_space2d::_new()
{
	return (animation_node_blend_space2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeBlendSpace2D")());
}
void animation_node_blend_space2d::_add_blend_point(const int64_t index, const ref<animation_root_node> node_) {
	___godot_icall_void_int_Object(___mb.mb__add_blend_point, (const object *) this, index, node_.ptr());
}

pool_int_array animation_node_blend_space2d::_get_triangles() const {
	return ___godot_icall_PoolIntArray(___mb.mb__get_triangles, (const object *) this);
}

void animation_node_blend_space2d::_set_triangles(const pool_int_array triangles) {
	___godot_icall_void_PoolIntArray(___mb.mb__set_triangles, (const object *) this, triangles);
}

void animation_node_blend_space2d::_tree_changed() {
	___godot_icall_void(___mb.mb__tree_changed, (const object *) this);
}

void animation_node_blend_space2d::_update_triangles() {
	___godot_icall_void(___mb.mb__update_triangles, (const object *) this);
}

void animation_node_blend_space2d::add_blend_point(const ref<animation_root_node> node_, const vector2 pos, const int64_t at_index) {
	___godot_icall_void_Object_Vector2_int(___mb.mb_add_blend_point, (const object *) this, node_.ptr(), pos, at_index);
}

void animation_node_blend_space2d::add_triangle(const int64_t x, const int64_t y, const int64_t z, const int64_t at_index) {
	___godot_icall_void_int_int_int_int(___mb.mb_add_triangle, (const object *) this, x, y, z, at_index);
}

bool animation_node_blend_space2d::get_auto_triangles() const {
	return ___godot_icall_bool(___mb.mb_get_auto_triangles, (const object *) this);
}

animation_node_blend_space2d::BlendMode animation_node_blend_space2d::get_blend_mode() const {
	return (animation_node_blend_space2d::BlendMode) ___godot_icall_int(___mb.mb_get_blend_mode, (const object *) this);
}

int64_t animation_node_blend_space2d::get_blend_point_count() const {
	return ___godot_icall_int(___mb.mb_get_blend_point_count, (const object *) this);
}

ref<animation_root_node> animation_node_blend_space2d::get_blend_point_node(const int64_t point) const {
	return ref<animation_root_node>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_blend_point_node, (const object *) this, point));
}

vector2 animation_node_blend_space2d::get_blend_point_position(const int64_t point) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_blend_point_position, (const object *) this, point);
}

vector2 animation_node_blend_space2d::get_max_space() const {
	return ___godot_icall_Vector2(___mb.mb_get_max_space, (const object *) this);
}

vector2 animation_node_blend_space2d::get_min_space() const {
	return ___godot_icall_Vector2(___mb.mb_get_min_space, (const object *) this);
}

vector2 animation_node_blend_space2d::get_snap() const {
	return ___godot_icall_Vector2(___mb.mb_get_snap, (const object *) this);
}

int64_t animation_node_blend_space2d::get_triangle_count() const {
	return ___godot_icall_int(___mb.mb_get_triangle_count, (const object *) this);
}

int64_t animation_node_blend_space2d::get_triangle_point(const int64_t triangle, const int64_t point) {
	return ___godot_icall_int_int_int(___mb.mb_get_triangle_point, (const object *) this, triangle, point);
}

string animation_node_blend_space2d::get_x_label() const {
	return ___godot_icall_String(___mb.mb_get_x_label, (const object *) this);
}

string animation_node_blend_space2d::get_y_label() const {
	return ___godot_icall_String(___mb.mb_get_y_label, (const object *) this);
}

void animation_node_blend_space2d::remove_blend_point(const int64_t point) {
	___godot_icall_void_int(___mb.mb_remove_blend_point, (const object *) this, point);
}

void animation_node_blend_space2d::remove_triangle(const int64_t triangle) {
	___godot_icall_void_int(___mb.mb_remove_triangle, (const object *) this, triangle);
}

void animation_node_blend_space2d::set_auto_triangles(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_auto_triangles, (const object *) this, enable);
}

void animation_node_blend_space2d::set_blend_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_blend_mode, (const object *) this, mode);
}

void animation_node_blend_space2d::set_blend_point_node(const int64_t point, const ref<animation_root_node> node_) {
	___godot_icall_void_int_Object(___mb.mb_set_blend_point_node, (const object *) this, point, node_.ptr());
}

void animation_node_blend_space2d::set_blend_point_position(const int64_t point, const vector2 pos) {
	___godot_icall_void_int_Vector2(___mb.mb_set_blend_point_position, (const object *) this, point, pos);
}

void animation_node_blend_space2d::set_max_space(const vector2 max_space) {
	___godot_icall_void_Vector2(___mb.mb_set_max_space, (const object *) this, max_space);
}

void animation_node_blend_space2d::set_min_space(const vector2 min_space) {
	___godot_icall_void_Vector2(___mb.mb_set_min_space, (const object *) this, min_space);
}

void animation_node_blend_space2d::set_snap(const vector2 snap) {
	___godot_icall_void_Vector2(___mb.mb_set_snap, (const object *) this, snap);
}

void animation_node_blend_space2d::set_x_label(const string text) {
	___godot_icall_void_String(___mb.mb_set_x_label, (const object *) this, text);
}

void animation_node_blend_space2d::set_y_label(const string text) {
	___godot_icall_void_String(___mb.mb_set_y_label, (const object *) this, text);
}

}