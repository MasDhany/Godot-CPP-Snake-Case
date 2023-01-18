#include "hscroll_bar.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


hscroll_bar::___method_bindings hscroll_bar::___mb = {};

void *hscroll_bar::_detail_class_tag = nullptr;

void hscroll_bar::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "HScrollBar");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

hscroll_bar *hscroll_bar::_new()
{
	return (hscroll_bar *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"HScrollBar")());
}
}