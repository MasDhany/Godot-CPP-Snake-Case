#include "popup.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


popup::___method_bindings popup::___mb = {};

void *popup::_detail_class_tag = nullptr;

void popup::___init_method_bindings() {
	___mb.mb_is_exclusive = gd::api->godot_method_bind_get_method("Popup", "is_exclusive");
	___mb.mb_popup = gd::api->godot_method_bind_get_method("Popup", "popup");
	___mb.mb_popup_centered = gd::api->godot_method_bind_get_method("Popup", "popup_centered");
	___mb.mb_popup_centered_clamped = gd::api->godot_method_bind_get_method("Popup", "popup_centered_clamped");
	___mb.mb_popup_centered_minsize = gd::api->godot_method_bind_get_method("Popup", "popup_centered_minsize");
	___mb.mb_popup_centered_ratio = gd::api->godot_method_bind_get_method("Popup", "popup_centered_ratio");
	___mb.mb_set_as_minsize = gd::api->godot_method_bind_get_method("Popup", "set_as_minsize");
	___mb.mb_set_exclusive = gd::api->godot_method_bind_get_method("Popup", "set_exclusive");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Popup");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

popup *popup::_new()
{
	return (popup *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Popup")());
}
bool popup::is_exclusive() const {
	return ___godot_icall_bool(___mb.mb_is_exclusive, (const object *) this);
}

void popup::popup_(const rect2 bounds) {
	___godot_icall_void_Rect2(___mb.mb_popup, (const object *) this, bounds);
}

void popup::popup_centered(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_popup_centered, (const object *) this, size);
}

void popup::popup_centered_clamped(const vector2 size, const real_t fallback_ratio) {
	___godot_icall_void_Vector2_float(___mb.mb_popup_centered_clamped, (const object *) this, size, fallback_ratio);
}

void popup::popup_centered_minsize(const vector2 minsize) {
	___godot_icall_void_Vector2(___mb.mb_popup_centered_minsize, (const object *) this, minsize);
}

void popup::popup_centered_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_popup_centered_ratio, (const object *) this, ratio);
}

void popup::set_as_minsize() {
	___godot_icall_void(___mb.mb_set_as_minsize, (const object *) this);
}

void popup::set_exclusive(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_exclusive, (const object *) this, enable);
}

}