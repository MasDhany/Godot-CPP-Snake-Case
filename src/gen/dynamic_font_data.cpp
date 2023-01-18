#include "dynamic_font_data.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


dynamic_font_data::___method_bindings dynamic_font_data::___mb = {};

void *dynamic_font_data::_detail_class_tag = nullptr;

void dynamic_font_data::___init_method_bindings() {
	___mb.mb_get_font_path = gd::api->godot_method_bind_get_method("DynamicFontData", "get_font_path");
	___mb.mb_get_hinting = gd::api->godot_method_bind_get_method("DynamicFontData", "get_hinting");
	___mb.mb_get_override_oversampling = gd::api->godot_method_bind_get_method("DynamicFontData", "get_override_oversampling");
	___mb.mb_is_antialiased = gd::api->godot_method_bind_get_method("DynamicFontData", "is_antialiased");
	___mb.mb_set_antialiased = gd::api->godot_method_bind_get_method("DynamicFontData", "set_antialiased");
	___mb.mb_set_font_path = gd::api->godot_method_bind_get_method("DynamicFontData", "set_font_path");
	___mb.mb_set_hinting = gd::api->godot_method_bind_get_method("DynamicFontData", "set_hinting");
	___mb.mb_set_override_oversampling = gd::api->godot_method_bind_get_method("DynamicFontData", "set_override_oversampling");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "DynamicFontData");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

dynamic_font_data *dynamic_font_data::_new()
{
	return (dynamic_font_data *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"DynamicFontData")());
}
string dynamic_font_data::get_font_path() const {
	return ___godot_icall_String(___mb.mb_get_font_path, (const object *) this);
}

dynamic_font_data::Hinting dynamic_font_data::get_hinting() const {
	return (dynamic_font_data::Hinting) ___godot_icall_int(___mb.mb_get_hinting, (const object *) this);
}

real_t dynamic_font_data::get_override_oversampling() const {
	return ___godot_icall_float(___mb.mb_get_override_oversampling, (const object *) this);
}

bool dynamic_font_data::is_antialiased() const {
	return ___godot_icall_bool(___mb.mb_is_antialiased, (const object *) this);
}

void dynamic_font_data::set_antialiased(const bool antialiased) {
	___godot_icall_void_bool(___mb.mb_set_antialiased, (const object *) this, antialiased);
}

void dynamic_font_data::set_font_path(const string path_) {
	___godot_icall_void_String(___mb.mb_set_font_path, (const object *) this, path_);
}

void dynamic_font_data::set_hinting(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_hinting, (const object *) this, mode);
}

void dynamic_font_data::set_override_oversampling(const real_t oversampling) {
	___godot_icall_void_float(___mb.mb_set_override_oversampling, (const object *) this, oversampling);
}

}