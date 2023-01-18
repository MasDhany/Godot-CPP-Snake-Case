#include "canvas_layer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


canvas_layer::___method_bindings canvas_layer::___mb = {};

void *canvas_layer::_detail_class_tag = nullptr;

void canvas_layer::___init_method_bindings() {
	___mb.mb_get_canvas = gd::api->godot_method_bind_get_method("CanvasLayer", "get_canvas");
	___mb.mb_get_custom_viewport = gd::api->godot_method_bind_get_method("CanvasLayer", "get_custom_viewport");
	___mb.mb_get_follow_viewport_scale = gd::api->godot_method_bind_get_method("CanvasLayer", "get_follow_viewport_scale");
	___mb.mb_get_layer = gd::api->godot_method_bind_get_method("CanvasLayer", "get_layer");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("CanvasLayer", "get_offset");
	___mb.mb_get_rotation = gd::api->godot_method_bind_get_method("CanvasLayer", "get_rotation");
	___mb.mb_get_rotation_degrees = gd::api->godot_method_bind_get_method("CanvasLayer", "get_rotation_degrees");
	___mb.mb_get_scale = gd::api->godot_method_bind_get_method("CanvasLayer", "get_scale");
	___mb.mb_get_transform = gd::api->godot_method_bind_get_method("CanvasLayer", "get_transform");
	___mb.mb_hide = gd::api->godot_method_bind_get_method("CanvasLayer", "hide");
	___mb.mb_is_following_viewport = gd::api->godot_method_bind_get_method("CanvasLayer", "is_following_viewport");
	___mb.mb_is_visible = gd::api->godot_method_bind_get_method("CanvasLayer", "is_visible");
	___mb.mb_set_custom_viewport = gd::api->godot_method_bind_get_method("CanvasLayer", "set_custom_viewport");
	___mb.mb_set_follow_viewport = gd::api->godot_method_bind_get_method("CanvasLayer", "set_follow_viewport");
	___mb.mb_set_follow_viewport_scale = gd::api->godot_method_bind_get_method("CanvasLayer", "set_follow_viewport_scale");
	___mb.mb_set_layer = gd::api->godot_method_bind_get_method("CanvasLayer", "set_layer");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("CanvasLayer", "set_offset");
	___mb.mb_set_rotation = gd::api->godot_method_bind_get_method("CanvasLayer", "set_rotation");
	___mb.mb_set_rotation_degrees = gd::api->godot_method_bind_get_method("CanvasLayer", "set_rotation_degrees");
	___mb.mb_set_scale = gd::api->godot_method_bind_get_method("CanvasLayer", "set_scale");
	___mb.mb_set_transform = gd::api->godot_method_bind_get_method("CanvasLayer", "set_transform");
	___mb.mb_set_visible = gd::api->godot_method_bind_get_method("CanvasLayer", "set_visible");
	___mb.mb_show = gd::api->godot_method_bind_get_method("CanvasLayer", "show");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CanvasLayer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

canvas_layer *canvas_layer::_new()
{
	return (canvas_layer *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CanvasLayer")());
}
rid canvas_layer::get_canvas() const {
	return ___godot_icall_RID(___mb.mb_get_canvas, (const object *) this);
}

node *canvas_layer::get_custom_viewport() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_custom_viewport, (const object *) this);
}

real_t canvas_layer::get_follow_viewport_scale() const {
	return ___godot_icall_float(___mb.mb_get_follow_viewport_scale, (const object *) this);
}

int64_t canvas_layer::get_layer() const {
	return ___godot_icall_int(___mb.mb_get_layer, (const object *) this);
}

vector2 canvas_layer::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

real_t canvas_layer::get_rotation() const {
	return ___godot_icall_float(___mb.mb_get_rotation, (const object *) this);
}

real_t canvas_layer::get_rotation_degrees() const {
	return ___godot_icall_float(___mb.mb_get_rotation_degrees, (const object *) this);
}

vector2 canvas_layer::get_scale() const {
	return ___godot_icall_Vector2(___mb.mb_get_scale, (const object *) this);
}

transform2d canvas_layer::get_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_transform, (const object *) this);
}

void canvas_layer::hide() {
	___godot_icall_void(___mb.mb_hide, (const object *) this);
}

bool canvas_layer::is_following_viewport() const {
	return ___godot_icall_bool(___mb.mb_is_following_viewport, (const object *) this);
}

bool canvas_layer::is_visible() const {
	return ___godot_icall_bool(___mb.mb_is_visible, (const object *) this);
}

void canvas_layer::set_custom_viewport(const node *viewport_) {
	___godot_icall_void_Object(___mb.mb_set_custom_viewport, (const object *) this, viewport_);
}

void canvas_layer::set_follow_viewport(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_follow_viewport, (const object *) this, enable);
}

void canvas_layer::set_follow_viewport_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_follow_viewport_scale, (const object *) this, scale);
}

void canvas_layer::set_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_layer, (const object *) this, layer);
}

void canvas_layer::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void canvas_layer::set_rotation(const real_t radians) {
	___godot_icall_void_float(___mb.mb_set_rotation, (const object *) this, radians);
}

void canvas_layer::set_rotation_degrees(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_rotation_degrees, (const object *) this, degrees);
}

void canvas_layer::set_scale(const vector2 scale) {
	___godot_icall_void_Vector2(___mb.mb_set_scale, (const object *) this, scale);
}

void canvas_layer::set_transform(const transform2d transform_) {
	___godot_icall_void_Transform2D(___mb.mb_set_transform, (const object *) this, transform_);
}

void canvas_layer::set_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_visible, (const object *) this, visible);
}

void canvas_layer::show() {
	___godot_icall_void(___mb.mb_show, (const object *) this);
}

}