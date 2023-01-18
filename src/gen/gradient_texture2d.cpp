#include "gradient_texture2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "gradient.hpp"


namespace gd {


gradient_texture2d::___method_bindings gradient_texture2d::___mb = {};

void *gradient_texture2d::_detail_class_tag = nullptr;

void gradient_texture2d::___init_method_bindings() {
	___mb.mb__queue_update = gd::api->godot_method_bind_get_method("GradientTexture2D", "_queue_update");
	___mb.mb__update = gd::api->godot_method_bind_get_method("GradientTexture2D", "_update");
	___mb.mb_get_fill = gd::api->godot_method_bind_get_method("GradientTexture2D", "get_fill");
	___mb.mb_get_fill_from = gd::api->godot_method_bind_get_method("GradientTexture2D", "get_fill_from");
	___mb.mb_get_fill_to = gd::api->godot_method_bind_get_method("GradientTexture2D", "get_fill_to");
	___mb.mb_get_gradient = gd::api->godot_method_bind_get_method("GradientTexture2D", "get_gradient");
	___mb.mb_get_repeat = gd::api->godot_method_bind_get_method("GradientTexture2D", "get_repeat");
	___mb.mb_is_using_hdr = gd::api->godot_method_bind_get_method("GradientTexture2D", "is_using_hdr");
	___mb.mb_set_fill = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_fill");
	___mb.mb_set_fill_from = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_fill_from");
	___mb.mb_set_fill_to = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_fill_to");
	___mb.mb_set_gradient = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_gradient");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_height");
	___mb.mb_set_repeat = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_repeat");
	___mb.mb_set_use_hdr = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_use_hdr");
	___mb.mb_set_width = gd::api->godot_method_bind_get_method("GradientTexture2D", "set_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GradientTexture2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gradient_texture2d *gradient_texture2d::_new()
{
	return (gradient_texture2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GradientTexture2D")());
}
void gradient_texture2d::_queue_update() {
	___godot_icall_void(___mb.mb__queue_update, (const object *) this);
}

void gradient_texture2d::_update() {
	___godot_icall_void(___mb.mb__update, (const object *) this);
}

gradient_texture2d::Fill gradient_texture2d::get_fill() const {
	return (gradient_texture2d::Fill) ___godot_icall_int(___mb.mb_get_fill, (const object *) this);
}

vector2 gradient_texture2d::get_fill_from() const {
	return ___godot_icall_Vector2(___mb.mb_get_fill_from, (const object *) this);
}

vector2 gradient_texture2d::get_fill_to() const {
	return ___godot_icall_Vector2(___mb.mb_get_fill_to, (const object *) this);
}

ref<gradient> gradient_texture2d::get_gradient() const {
	return ref<gradient>::__internal_constructor(___godot_icall_Object(___mb.mb_get_gradient, (const object *) this));
}

gradient_texture2d::Repeat gradient_texture2d::get_repeat() const {
	return (gradient_texture2d::Repeat) ___godot_icall_int(___mb.mb_get_repeat, (const object *) this);
}

bool gradient_texture2d::is_using_hdr() const {
	return ___godot_icall_bool(___mb.mb_is_using_hdr, (const object *) this);
}

void gradient_texture2d::set_fill(const int64_t fill) {
	___godot_icall_void_int(___mb.mb_set_fill, (const object *) this, fill);
}

void gradient_texture2d::set_fill_from(const vector2 fill_from) {
	___godot_icall_void_Vector2(___mb.mb_set_fill_from, (const object *) this, fill_from);
}

void gradient_texture2d::set_fill_to(const vector2 fill_to) {
	___godot_icall_void_Vector2(___mb.mb_set_fill_to, (const object *) this, fill_to);
}

void gradient_texture2d::set_gradient(const ref<gradient> gradient_) {
	___godot_icall_void_Object(___mb.mb_set_gradient, (const object *) this, gradient_.ptr());
}

void gradient_texture2d::set_height(const int64_t height) {
	___godot_icall_void_int(___mb.mb_set_height, (const object *) this, height);
}

void gradient_texture2d::set_repeat(const int64_t repeat) {
	___godot_icall_void_int(___mb.mb_set_repeat, (const object *) this, repeat);
}

void gradient_texture2d::set_use_hdr(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_use_hdr, (const object *) this, enabled);
}

void gradient_texture2d::set_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_width, (const object *) this, width);
}

}