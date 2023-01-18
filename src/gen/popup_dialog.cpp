#include "popup_dialog.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


popup_dialog::___method_bindings popup_dialog::___mb = {};

void *popup_dialog::_detail_class_tag = nullptr;

void popup_dialog::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PopupDialog");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

popup_dialog *popup_dialog::_new()
{
	return (popup_dialog *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PopupDialog")());
}
}