#include "touch_screen_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "bit_map.hpp"
#include "input_event.hpp"
#include "shape2d.hpp"
#include "texture.hpp"


namespace gd {


touch_screen_button::___method_bindings touch_screen_button::___mb = {};

void *touch_screen_button::_detail_class_tag = nullptr;

void touch_screen_button::___init_method_bindings() {
	___mb.mb__input = gd::api->godot_method_bind_get_method("TouchScreenButton", "_input");
	___mb.mb_get_action = gd::api->godot_method_bind_get_method("TouchScreenButton", "get_action");
	___mb.mb_get_bitmask = gd::api->godot_method_bind_get_method("TouchScreenButton", "get_bitmask");
	___mb.mb_get_shape = gd::api->godot_method_bind_get_method("TouchScreenButton", "get_shape");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("TouchScreenButton", "get_texture");
	___mb.mb_get_texture_pressed = gd::api->godot_method_bind_get_method("TouchScreenButton", "get_texture_pressed");
	___mb.mb_get_visibility_mode = gd::api->godot_method_bind_get_method("TouchScreenButton", "get_visibility_mode");
	___mb.mb_is_passby_press_enabled = gd::api->godot_method_bind_get_method("TouchScreenButton", "is_passby_press_enabled");
	___mb.mb_is_pressed = gd::api->godot_method_bind_get_method("TouchScreenButton", "is_pressed");
	___mb.mb_is_shape_centered = gd::api->godot_method_bind_get_method("TouchScreenButton", "is_shape_centered");
	___mb.mb_is_shape_visible = gd::api->godot_method_bind_get_method("TouchScreenButton", "is_shape_visible");
	___mb.mb_set_action = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_action");
	___mb.mb_set_bitmask = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_bitmask");
	___mb.mb_set_passby_press = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_passby_press");
	___mb.mb_set_shape = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_shape");
	___mb.mb_set_shape_centered = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_shape_centered");
	___mb.mb_set_shape_visible = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_shape_visible");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_texture");
	___mb.mb_set_texture_pressed = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_texture_pressed");
	___mb.mb_set_visibility_mode = gd::api->godot_method_bind_get_method("TouchScreenButton", "set_visibility_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TouchScreenButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

touch_screen_button *touch_screen_button::_new()
{
	return (touch_screen_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TouchScreenButton")());
}
void touch_screen_button::_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__input, (const object *) this, arg0.ptr());
}

string touch_screen_button::get_action() const {
	return ___godot_icall_String(___mb.mb_get_action, (const object *) this);
}

ref<bit_map> touch_screen_button::get_bitmask() const {
	return ref<bit_map>::__internal_constructor(___godot_icall_Object(___mb.mb_get_bitmask, (const object *) this));
}

ref<shape2d> touch_screen_button::get_shape() const {
	return ref<shape2d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shape, (const object *) this));
}

ref<texture> touch_screen_button::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

ref<texture> touch_screen_button::get_texture_pressed() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture_pressed, (const object *) this));
}

touch_screen_button::VisibilityMode touch_screen_button::get_visibility_mode() const {
	return (touch_screen_button::VisibilityMode) ___godot_icall_int(___mb.mb_get_visibility_mode, (const object *) this);
}

bool touch_screen_button::is_passby_press_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_passby_press_enabled, (const object *) this);
}

bool touch_screen_button::is_pressed() const {
	return ___godot_icall_bool(___mb.mb_is_pressed, (const object *) this);
}

bool touch_screen_button::is_shape_centered() const {
	return ___godot_icall_bool(___mb.mb_is_shape_centered, (const object *) this);
}

bool touch_screen_button::is_shape_visible() const {
	return ___godot_icall_bool(___mb.mb_is_shape_visible, (const object *) this);
}

void touch_screen_button::set_action(const string action) {
	___godot_icall_void_String(___mb.mb_set_action, (const object *) this, action);
}

void touch_screen_button::set_bitmask(const ref<bit_map> bitmask) {
	___godot_icall_void_Object(___mb.mb_set_bitmask, (const object *) this, bitmask.ptr());
}

void touch_screen_button::set_passby_press(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_passby_press, (const object *) this, enabled);
}

void touch_screen_button::set_shape(const ref<shape2d> shape_) {
	___godot_icall_void_Object(___mb.mb_set_shape, (const object *) this, shape_.ptr());
}

void touch_screen_button::set_shape_centered(const bool _bool) {
	___godot_icall_void_bool(___mb.mb_set_shape_centered, (const object *) this, _bool);
}

void touch_screen_button::set_shape_visible(const bool _bool) {
	___godot_icall_void_bool(___mb.mb_set_shape_visible, (const object *) this, _bool);
}

void touch_screen_button::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void touch_screen_button::set_texture_pressed(const ref<texture> texture_pressed) {
	___godot_icall_void_Object(___mb.mb_set_texture_pressed, (const object *) this, texture_pressed.ptr());
}

void touch_screen_button::set_visibility_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_visibility_mode, (const object *) this, mode);
}

}