#include "canvas_item.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "font.hpp"
#include "input_event.hpp"
#include "material.hpp"
#include "mesh.hpp"
#include "multi_mesh.hpp"
#include "style_box.hpp"
#include "texture.hpp"
#include "world2d.hpp"


namespace gd {


canvas_item::___method_bindings canvas_item::___mb = {};

void *canvas_item::_detail_class_tag = nullptr;

void canvas_item::___init_method_bindings() {
	___mb.mb__draw = gd::api->godot_method_bind_get_method("CanvasItem", "_draw");
	___mb.mb__edit_get_pivot = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_get_pivot");
	___mb.mb__edit_get_position = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_get_position");
	___mb.mb__edit_get_rect = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_get_rect");
	___mb.mb__edit_get_rotation = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_get_rotation");
	___mb.mb__edit_get_scale = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_get_scale");
	___mb.mb__edit_get_state = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_get_state");
	___mb.mb__edit_get_transform = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_get_transform");
	___mb.mb__edit_set_pivot = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_set_pivot");
	___mb.mb__edit_set_position = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_set_position");
	___mb.mb__edit_set_rect = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_set_rect");
	___mb.mb__edit_set_rotation = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_set_rotation");
	___mb.mb__edit_set_scale = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_set_scale");
	___mb.mb__edit_set_state = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_set_state");
	___mb.mb__edit_use_pivot = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_use_pivot");
	___mb.mb__edit_use_rect = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_use_rect");
	___mb.mb__edit_use_rotation = gd::api->godot_method_bind_get_method("CanvasItem", "_edit_use_rotation");
	___mb.mb__is_on_top = gd::api->godot_method_bind_get_method("CanvasItem", "_is_on_top");
	___mb.mb__set_on_top = gd::api->godot_method_bind_get_method("CanvasItem", "_set_on_top");
	___mb.mb__toplevel_raise_self = gd::api->godot_method_bind_get_method("CanvasItem", "_toplevel_raise_self");
	___mb.mb__toplevel_visibility_changed = gd::api->godot_method_bind_get_method("CanvasItem", "_toplevel_visibility_changed");
	___mb.mb__update_callback = gd::api->godot_method_bind_get_method("CanvasItem", "_update_callback");
	___mb.mb_draw_arc = gd::api->godot_method_bind_get_method("CanvasItem", "draw_arc");
	___mb.mb_draw_char = gd::api->godot_method_bind_get_method("CanvasItem", "draw_char");
	___mb.mb_draw_circle = gd::api->godot_method_bind_get_method("CanvasItem", "draw_circle");
	___mb.mb_draw_colored_polygon = gd::api->godot_method_bind_get_method("CanvasItem", "draw_colored_polygon");
	___mb.mb_draw_line = gd::api->godot_method_bind_get_method("CanvasItem", "draw_line");
	___mb.mb_draw_mesh = gd::api->godot_method_bind_get_method("CanvasItem", "draw_mesh");
	___mb.mb_draw_multiline = gd::api->godot_method_bind_get_method("CanvasItem", "draw_multiline");
	___mb.mb_draw_multiline_colors = gd::api->godot_method_bind_get_method("CanvasItem", "draw_multiline_colors");
	___mb.mb_draw_multimesh = gd::api->godot_method_bind_get_method("CanvasItem", "draw_multimesh");
	___mb.mb_draw_polygon = gd::api->godot_method_bind_get_method("CanvasItem", "draw_polygon");
	___mb.mb_draw_polyline = gd::api->godot_method_bind_get_method("CanvasItem", "draw_polyline");
	___mb.mb_draw_polyline_colors = gd::api->godot_method_bind_get_method("CanvasItem", "draw_polyline_colors");
	___mb.mb_draw_primitive = gd::api->godot_method_bind_get_method("CanvasItem", "draw_primitive");
	___mb.mb_draw_rect = gd::api->godot_method_bind_get_method("CanvasItem", "draw_rect");
	___mb.mb_draw_set_transform = gd::api->godot_method_bind_get_method("CanvasItem", "draw_set_transform");
	___mb.mb_draw_set_transform_matrix = gd::api->godot_method_bind_get_method("CanvasItem", "draw_set_transform_matrix");
	___mb.mb_draw_string = gd::api->godot_method_bind_get_method("CanvasItem", "draw_string");
	___mb.mb_draw_style_box = gd::api->godot_method_bind_get_method("CanvasItem", "draw_style_box");
	___mb.mb_draw_texture = gd::api->godot_method_bind_get_method("CanvasItem", "draw_texture");
	___mb.mb_draw_texture_rect = gd::api->godot_method_bind_get_method("CanvasItem", "draw_texture_rect");
	___mb.mb_draw_texture_rect_region = gd::api->godot_method_bind_get_method("CanvasItem", "draw_texture_rect_region");
	___mb.mb_force_update_transform = gd::api->godot_method_bind_get_method("CanvasItem", "force_update_transform");
	___mb.mb_get_canvas = gd::api->godot_method_bind_get_method("CanvasItem", "get_canvas");
	___mb.mb_get_canvas_item = gd::api->godot_method_bind_get_method("CanvasItem", "get_canvas_item");
	___mb.mb_get_canvas_transform = gd::api->godot_method_bind_get_method("CanvasItem", "get_canvas_transform");
	___mb.mb_get_global_mouse_position = gd::api->godot_method_bind_get_method("CanvasItem", "get_global_mouse_position");
	___mb.mb_get_global_transform = gd::api->godot_method_bind_get_method("CanvasItem", "get_global_transform");
	___mb.mb_get_global_transform_with_canvas = gd::api->godot_method_bind_get_method("CanvasItem", "get_global_transform_with_canvas");
	___mb.mb_get_light_mask = gd::api->godot_method_bind_get_method("CanvasItem", "get_light_mask");
	___mb.mb_get_local_mouse_position = gd::api->godot_method_bind_get_method("CanvasItem", "get_local_mouse_position");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("CanvasItem", "get_material");
	___mb.mb_get_modulate = gd::api->godot_method_bind_get_method("CanvasItem", "get_modulate");
	___mb.mb_get_self_modulate = gd::api->godot_method_bind_get_method("CanvasItem", "get_self_modulate");
	___mb.mb_get_transform = gd::api->godot_method_bind_get_method("CanvasItem", "get_transform");
	___mb.mb_get_use_parent_material = gd::api->godot_method_bind_get_method("CanvasItem", "get_use_parent_material");
	___mb.mb_get_viewport_rect = gd::api->godot_method_bind_get_method("CanvasItem", "get_viewport_rect");
	___mb.mb_get_viewport_transform = gd::api->godot_method_bind_get_method("CanvasItem", "get_viewport_transform");
	___mb.mb_get_world_2d = gd::api->godot_method_bind_get_method("CanvasItem", "get_world_2d");
	___mb.mb_hide = gd::api->godot_method_bind_get_method("CanvasItem", "hide");
	___mb.mb_is_draw_behind_parent_enabled = gd::api->godot_method_bind_get_method("CanvasItem", "is_draw_behind_parent_enabled");
	___mb.mb_is_local_transform_notification_enabled = gd::api->godot_method_bind_get_method("CanvasItem", "is_local_transform_notification_enabled");
	___mb.mb_is_set_as_toplevel = gd::api->godot_method_bind_get_method("CanvasItem", "is_set_as_toplevel");
	___mb.mb_is_transform_notification_enabled = gd::api->godot_method_bind_get_method("CanvasItem", "is_transform_notification_enabled");
	___mb.mb_is_visible = gd::api->godot_method_bind_get_method("CanvasItem", "is_visible");
	___mb.mb_is_visible_in_tree = gd::api->godot_method_bind_get_method("CanvasItem", "is_visible_in_tree");
	___mb.mb_make_canvas_position_local = gd::api->godot_method_bind_get_method("CanvasItem", "make_canvas_position_local");
	___mb.mb_make_input_local = gd::api->godot_method_bind_get_method("CanvasItem", "make_input_local");
	___mb.mb_set_as_toplevel = gd::api->godot_method_bind_get_method("CanvasItem", "set_as_toplevel");
	___mb.mb_set_draw_behind_parent = gd::api->godot_method_bind_get_method("CanvasItem", "set_draw_behind_parent");
	___mb.mb_set_light_mask = gd::api->godot_method_bind_get_method("CanvasItem", "set_light_mask");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("CanvasItem", "set_material");
	___mb.mb_set_modulate = gd::api->godot_method_bind_get_method("CanvasItem", "set_modulate");
	___mb.mb_set_notify_local_transform = gd::api->godot_method_bind_get_method("CanvasItem", "set_notify_local_transform");
	___mb.mb_set_notify_transform = gd::api->godot_method_bind_get_method("CanvasItem", "set_notify_transform");
	___mb.mb_set_self_modulate = gd::api->godot_method_bind_get_method("CanvasItem", "set_self_modulate");
	___mb.mb_set_use_parent_material = gd::api->godot_method_bind_get_method("CanvasItem", "set_use_parent_material");
	___mb.mb_set_visible = gd::api->godot_method_bind_get_method("CanvasItem", "set_visible");
	___mb.mb_show = gd::api->godot_method_bind_get_method("CanvasItem", "show");
	___mb.mb_update = gd::api->godot_method_bind_get_method("CanvasItem", "update");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CanvasItem");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void canvas_item::_draw() {
	___godot_icall_void(___mb.mb__draw, (const object *) this);
}

vector2 canvas_item::_edit_get_pivot() const {
	return ___godot_icall_Vector2(___mb.mb__edit_get_pivot, (const object *) this);
}

vector2 canvas_item::_edit_get_position() const {
	return ___godot_icall_Vector2(___mb.mb__edit_get_position, (const object *) this);
}

rect2 canvas_item::_edit_get_rect() const {
	return ___godot_icall_Rect2(___mb.mb__edit_get_rect, (const object *) this);
}

real_t canvas_item::_edit_get_rotation() const {
	return ___godot_icall_float(___mb.mb__edit_get_rotation, (const object *) this);
}

vector2 canvas_item::_edit_get_scale() const {
	return ___godot_icall_Vector2(___mb.mb__edit_get_scale, (const object *) this);
}

dictionary canvas_item::_edit_get_state() const {
	return ___godot_icall_Dictionary(___mb.mb__edit_get_state, (const object *) this);
}

transform2d canvas_item::_edit_get_transform() const {
	return ___godot_icall_Transform2D(___mb.mb__edit_get_transform, (const object *) this);
}

void canvas_item::_edit_set_pivot(const vector2 pivot) {
	___godot_icall_void_Vector2(___mb.mb__edit_set_pivot, (const object *) this, pivot);
}

void canvas_item::_edit_set_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb__edit_set_position, (const object *) this, position);
}

void canvas_item::_edit_set_rect(const rect2 rect) {
	___godot_icall_void_Rect2(___mb.mb__edit_set_rect, (const object *) this, rect);
}

void canvas_item::_edit_set_rotation(const real_t degrees) {
	___godot_icall_void_float(___mb.mb__edit_set_rotation, (const object *) this, degrees);
}

void canvas_item::_edit_set_scale(const vector2 scale) {
	___godot_icall_void_Vector2(___mb.mb__edit_set_scale, (const object *) this, scale);
}

void canvas_item::_edit_set_state(const dictionary state) {
	___godot_icall_void_Dictionary(___mb.mb__edit_set_state, (const object *) this, state);
}

bool canvas_item::_edit_use_pivot() const {
	return ___godot_icall_bool(___mb.mb__edit_use_pivot, (const object *) this);
}

bool canvas_item::_edit_use_rect() const {
	return ___godot_icall_bool(___mb.mb__edit_use_rect, (const object *) this);
}

bool canvas_item::_edit_use_rotation() const {
	return ___godot_icall_bool(___mb.mb__edit_use_rotation, (const object *) this);
}

bool canvas_item::_is_on_top() const {
	return ___godot_icall_bool(___mb.mb__is_on_top, (const object *) this);
}

void canvas_item::_set_on_top(const bool on_top) {
	___godot_icall_void_bool(___mb.mb__set_on_top, (const object *) this, on_top);
}

void canvas_item::_toplevel_raise_self() {
	___godot_icall_void(___mb.mb__toplevel_raise_self, (const object *) this);
}

void canvas_item::_toplevel_visibility_changed(const bool visible) {
	___godot_icall_void_bool(___mb.mb__toplevel_visibility_changed, (const object *) this, visible);
}

void canvas_item::_update_callback() {
	___godot_icall_void(___mb.mb__update_callback, (const object *) this);
}

void canvas_item::draw_arc(const vector2 center, const real_t radius, const real_t start_angle, const real_t end_angle, const int64_t point_count, const color color_, const real_t width, const bool antialiased) {
	___godot_icall_void_Vector2_float_float_float_int_Color_float_bool(___mb.mb_draw_arc, (const object *) this, center, radius, start_angle, end_angle, point_count, color_, width, antialiased);
}

real_t canvas_item::draw_char(const ref<font> font_, const vector2 position, const string _char, const string next, const color modulate) {
	return ___godot_icall_float_Object_Vector2_String_String_Color(___mb.mb_draw_char, (const object *) this, font_.ptr(), position, _char, next, modulate);
}

void canvas_item::draw_circle(const vector2 position, const real_t radius, const color color_) {
	___godot_icall_void_Vector2_float_Color(___mb.mb_draw_circle, (const object *) this, position, radius, color_);
}

void canvas_item::draw_colored_polygon(const pool_vector2_array points, const color color_, const pool_vector2_array uvs, const ref<texture> texture_, const ref<texture> normal_map, const bool antialiased) {
	___godot_icall_void_PoolVector2Array_Color_PoolVector2Array_Object_Object_bool(___mb.mb_draw_colored_polygon, (const object *) this, points, color_, uvs, texture_.ptr(), normal_map.ptr(), antialiased);
}

void canvas_item::draw_line(const vector2 from, const vector2 to, const color color_, const real_t width, const bool antialiased) {
	___godot_icall_void_Vector2_Vector2_Color_float_bool(___mb.mb_draw_line, (const object *) this, from, to, color_, width, antialiased);
}

void canvas_item::draw_mesh(const ref<mesh> mesh_, const ref<texture> texture_, const ref<texture> normal_map, const transform2d transform_, const color modulate) {
	___godot_icall_void_Object_Object_Object_Transform2D_Color(___mb.mb_draw_mesh, (const object *) this, mesh_.ptr(), texture_.ptr(), normal_map.ptr(), transform_, modulate);
}

void canvas_item::draw_multiline(const pool_vector2_array points, const color color_, const real_t width, const bool antialiased) {
	___godot_icall_void_PoolVector2Array_Color_float_bool(___mb.mb_draw_multiline, (const object *) this, points, color_, width, antialiased);
}

void canvas_item::draw_multiline_colors(const pool_vector2_array points, const pool_color_array colors, const real_t width, const bool antialiased) {
	___godot_icall_void_PoolVector2Array_PoolColorArray_float_bool(___mb.mb_draw_multiline_colors, (const object *) this, points, colors, width, antialiased);
}

void canvas_item::draw_multimesh(const ref<multi_mesh> multimesh, const ref<texture> texture_, const ref<texture> normal_map) {
	___godot_icall_void_Object_Object_Object(___mb.mb_draw_multimesh, (const object *) this, multimesh.ptr(), texture_.ptr(), normal_map.ptr());
}

void canvas_item::draw_polygon(const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs, const ref<texture> texture_, const ref<texture> normal_map, const bool antialiased) {
	___godot_icall_void_PoolVector2Array_PoolColorArray_PoolVector2Array_Object_Object_bool(___mb.mb_draw_polygon, (const object *) this, points, colors, uvs, texture_.ptr(), normal_map.ptr(), antialiased);
}

void canvas_item::draw_polyline(const pool_vector2_array points, const color color_, const real_t width, const bool antialiased) {
	___godot_icall_void_PoolVector2Array_Color_float_bool(___mb.mb_draw_polyline, (const object *) this, points, color_, width, antialiased);
}

void canvas_item::draw_polyline_colors(const pool_vector2_array points, const pool_color_array colors, const real_t width, const bool antialiased) {
	___godot_icall_void_PoolVector2Array_PoolColorArray_float_bool(___mb.mb_draw_polyline_colors, (const object *) this, points, colors, width, antialiased);
}

void canvas_item::draw_primitive(const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs, const ref<texture> texture_, const real_t width, const ref<texture> normal_map) {
	___godot_icall_void_PoolVector2Array_PoolColorArray_PoolVector2Array_Object_float_Object(___mb.mb_draw_primitive, (const object *) this, points, colors, uvs, texture_.ptr(), width, normal_map.ptr());
}

void canvas_item::draw_rect(const rect2 rect, const color color_, const bool filled, const real_t width, const bool antialiased) {
	___godot_icall_void_Rect2_Color_bool_float_bool(___mb.mb_draw_rect, (const object *) this, rect, color_, filled, width, antialiased);
}

void canvas_item::draw_set_transform(const vector2 position, const real_t rotation, const vector2 scale) {
	___godot_icall_void_Vector2_float_Vector2(___mb.mb_draw_set_transform, (const object *) this, position, rotation, scale);
}

void canvas_item::draw_set_transform_matrix(const transform2d xform) {
	___godot_icall_void_Transform2D(___mb.mb_draw_set_transform_matrix, (const object *) this, xform);
}

void canvas_item::draw_string(const ref<font> font_, const vector2 position, const string text, const color modulate, const int64_t clip_w) {
	___godot_icall_void_Object_Vector2_String_Color_int(___mb.mb_draw_string, (const object *) this, font_.ptr(), position, text, modulate, clip_w);
}

void canvas_item::draw_style_box(const ref<style_box> style_box_, const rect2 rect) {
	___godot_icall_void_Object_Rect2(___mb.mb_draw_style_box, (const object *) this, style_box_.ptr(), rect);
}

void canvas_item::draw_texture(const ref<texture> texture_, const vector2 position, const color modulate, const ref<texture> normal_map) {
	___godot_icall_void_Object_Vector2_Color_Object(___mb.mb_draw_texture, (const object *) this, texture_.ptr(), position, modulate, normal_map.ptr());
}

void canvas_item::draw_texture_rect(const ref<texture> texture_, const rect2 rect, const bool tile, const color modulate, const bool transpose, const ref<texture> normal_map) {
	___godot_icall_void_Object_Rect2_bool_Color_bool_Object(___mb.mb_draw_texture_rect, (const object *) this, texture_.ptr(), rect, tile, modulate, transpose, normal_map.ptr());
}

void canvas_item::draw_texture_rect_region(const ref<texture> texture_, const rect2 rect, const rect2 src_rect, const color modulate, const bool transpose, const ref<texture> normal_map, const bool clip_uv) {
	___godot_icall_void_Object_Rect2_Rect2_Color_bool_Object_bool(___mb.mb_draw_texture_rect_region, (const object *) this, texture_.ptr(), rect, src_rect, modulate, transpose, normal_map.ptr(), clip_uv);
}

void canvas_item::force_update_transform() {
	___godot_icall_void(___mb.mb_force_update_transform, (const object *) this);
}

rid canvas_item::get_canvas() const {
	return ___godot_icall_RID(___mb.mb_get_canvas, (const object *) this);
}

rid canvas_item::get_canvas_item() const {
	return ___godot_icall_RID(___mb.mb_get_canvas_item, (const object *) this);
}

transform2d canvas_item::get_canvas_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_canvas_transform, (const object *) this);
}

vector2 canvas_item::get_global_mouse_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_global_mouse_position, (const object *) this);
}

transform2d canvas_item::get_global_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_global_transform, (const object *) this);
}

transform2d canvas_item::get_global_transform_with_canvas() const {
	return ___godot_icall_Transform2D(___mb.mb_get_global_transform_with_canvas, (const object *) this);
}

int64_t canvas_item::get_light_mask() const {
	return ___godot_icall_int(___mb.mb_get_light_mask, (const object *) this);
}

vector2 canvas_item::get_local_mouse_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_local_mouse_position, (const object *) this);
}

ref<material> canvas_item::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

color canvas_item::get_modulate() const {
	return ___godot_icall_Color(___mb.mb_get_modulate, (const object *) this);
}

color canvas_item::get_self_modulate() const {
	return ___godot_icall_Color(___mb.mb_get_self_modulate, (const object *) this);
}

transform2d canvas_item::get_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_transform, (const object *) this);
}

bool canvas_item::get_use_parent_material() const {
	return ___godot_icall_bool(___mb.mb_get_use_parent_material, (const object *) this);
}

rect2 canvas_item::get_viewport_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_viewport_rect, (const object *) this);
}

transform2d canvas_item::get_viewport_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_viewport_transform, (const object *) this);
}

ref<world2d> canvas_item::get_world_2d() const {
	return ref<world2d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_world_2d, (const object *) this));
}

void canvas_item::hide() {
	___godot_icall_void(___mb.mb_hide, (const object *) this);
}

bool canvas_item::is_draw_behind_parent_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_draw_behind_parent_enabled, (const object *) this);
}

bool canvas_item::is_local_transform_notification_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_local_transform_notification_enabled, (const object *) this);
}

bool canvas_item::is_set_as_toplevel() const {
	return ___godot_icall_bool(___mb.mb_is_set_as_toplevel, (const object *) this);
}

bool canvas_item::is_transform_notification_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_transform_notification_enabled, (const object *) this);
}

bool canvas_item::is_visible() const {
	return ___godot_icall_bool(___mb.mb_is_visible, (const object *) this);
}

bool canvas_item::is_visible_in_tree() const {
	return ___godot_icall_bool(___mb.mb_is_visible_in_tree, (const object *) this);
}

vector2 canvas_item::make_canvas_position_local(const vector2 screen_point) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_make_canvas_position_local, (const object *) this, screen_point);
}

ref<input_event> canvas_item::make_input_local(const ref<input_event> event) const {
	return ref<input_event>::__internal_constructor(___godot_icall_Object_Object(___mb.mb_make_input_local, (const object *) this, event.ptr()));
}

void canvas_item::set_as_toplevel(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_as_toplevel, (const object *) this, enable);
}

void canvas_item::set_draw_behind_parent(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_draw_behind_parent, (const object *) this, enable);
}

void canvas_item::set_light_mask(const int64_t light_mask) {
	___godot_icall_void_int(___mb.mb_set_light_mask, (const object *) this, light_mask);
}

void canvas_item::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void canvas_item::set_modulate(const color modulate) {
	___godot_icall_void_Color(___mb.mb_set_modulate, (const object *) this, modulate);
}

void canvas_item::set_notify_local_transform(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_notify_local_transform, (const object *) this, enable);
}

void canvas_item::set_notify_transform(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_notify_transform, (const object *) this, enable);
}

void canvas_item::set_self_modulate(const color self_modulate) {
	___godot_icall_void_Color(___mb.mb_set_self_modulate, (const object *) this, self_modulate);
}

void canvas_item::set_use_parent_material(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_parent_material, (const object *) this, enable);
}

void canvas_item::set_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_visible, (const object *) this, visible);
}

void canvas_item::show() {
	___godot_icall_void(___mb.mb_show, (const object *) this);
}

void canvas_item::update() {
	___godot_icall_void(___mb.mb_update, (const object *) this);
}

}