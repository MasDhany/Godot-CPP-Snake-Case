#include "button_group.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "base_button.hpp"


namespace gd {


button_group::___method_bindings button_group::___mb = {};

void *button_group::_detail_class_tag = nullptr;

void button_group::___init_method_bindings() {
	___mb.mb_get_buttons = gd::api->godot_method_bind_get_method("ButtonGroup", "get_buttons");
	___mb.mb_get_pressed_button = gd::api->godot_method_bind_get_method("ButtonGroup", "get_pressed_button");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ButtonGroup");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

button_group *button_group::_new()
{
	return (button_group *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ButtonGroup")());
}
array button_group::get_buttons() {
	return ___godot_icall_Array(___mb.mb_get_buttons, (const object *) this);
}

base_button *button_group::get_pressed_button() {
	return (base_button *) ___godot_icall_Object(___mb.mb_get_pressed_button, (const object *) this);
}

}