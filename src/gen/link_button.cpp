#include "link_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


link_button::___method_bindings link_button::___mb = {};

void *link_button::_detail_class_tag = nullptr;

void link_button::___init_method_bindings() {
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("LinkButton", "get_text");
	___mb.mb_get_underline_mode = gd::api->godot_method_bind_get_method("LinkButton", "get_underline_mode");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("LinkButton", "set_text");
	___mb.mb_set_underline_mode = gd::api->godot_method_bind_get_method("LinkButton", "set_underline_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "LinkButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

link_button *link_button::_new()
{
	return (link_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"LinkButton")());
}
string link_button::get_text() const {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

link_button::UnderlineMode link_button::get_underline_mode() const {
	return (link_button::UnderlineMode) ___godot_icall_int(___mb.mb_get_underline_mode, (const object *) this);
}

void link_button::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void link_button::set_underline_mode(const int64_t underline_mode) {
	___godot_icall_void_int(___mb.mb_set_underline_mode, (const object *) this, underline_mode);
}

}