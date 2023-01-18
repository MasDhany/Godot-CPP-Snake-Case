#include "button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


button::___method_bindings button::___mb = {};

void *button::_detail_class_tag = nullptr;

void button::___init_method_bindings() {
	___mb.mb_get_button_icon = gd::api->godot_method_bind_get_method("Button", "get_button_icon");
	___mb.mb_get_clip_text = gd::api->godot_method_bind_get_method("Button", "get_clip_text");
	___mb.mb_get_icon_align = gd::api->godot_method_bind_get_method("Button", "get_icon_align");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("Button", "get_text");
	___mb.mb_get_text_align = gd::api->godot_method_bind_get_method("Button", "get_text_align");
	___mb.mb_is_expand_icon = gd::api->godot_method_bind_get_method("Button", "is_expand_icon");
	___mb.mb_is_flat = gd::api->godot_method_bind_get_method("Button", "is_flat");
	___mb.mb_set_button_icon = gd::api->godot_method_bind_get_method("Button", "set_button_icon");
	___mb.mb_set_clip_text = gd::api->godot_method_bind_get_method("Button", "set_clip_text");
	___mb.mb_set_expand_icon = gd::api->godot_method_bind_get_method("Button", "set_expand_icon");
	___mb.mb_set_flat = gd::api->godot_method_bind_get_method("Button", "set_flat");
	___mb.mb_set_icon_align = gd::api->godot_method_bind_get_method("Button", "set_icon_align");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("Button", "set_text");
	___mb.mb_set_text_align = gd::api->godot_method_bind_get_method("Button", "set_text_align");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Button");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

button *button::_new()
{
	return (button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Button")());
}
ref<texture> button::get_button_icon() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_button_icon, (const object *) this));
}

bool button::get_clip_text() const {
	return ___godot_icall_bool(___mb.mb_get_clip_text, (const object *) this);
}

button::TextAlign button::get_icon_align() const {
	return (button::TextAlign) ___godot_icall_int(___mb.mb_get_icon_align, (const object *) this);
}

string button::get_text() const {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

button::TextAlign button::get_text_align() const {
	return (button::TextAlign) ___godot_icall_int(___mb.mb_get_text_align, (const object *) this);
}

bool button::is_expand_icon() const {
	return ___godot_icall_bool(___mb.mb_is_expand_icon, (const object *) this);
}

bool button::is_flat() const {
	return ___godot_icall_bool(___mb.mb_is_flat, (const object *) this);
}

void button::set_button_icon(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_button_icon, (const object *) this, texture_.ptr());
}

void button::set_clip_text(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_clip_text, (const object *) this, enabled);
}

void button::set_expand_icon(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_expand_icon, (const object *) this, enabled);
}

void button::set_flat(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_flat, (const object *) this, enabled);
}

void button::set_icon_align(const int64_t icon_align) {
	___godot_icall_void_int(___mb.mb_set_icon_align, (const object *) this, icon_align);
}

void button::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void button::set_text_align(const int64_t align) {
	___godot_icall_void_int(___mb.mb_set_text_align, (const object *) this, align);
}

}