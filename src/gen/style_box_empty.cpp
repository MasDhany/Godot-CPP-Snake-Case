#include "style_box_empty.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


style_box_empty::___method_bindings style_box_empty::___mb = {};

void *style_box_empty::_detail_class_tag = nullptr;

void style_box_empty::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StyleBoxEmpty");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

style_box_empty *style_box_empty::_new()
{
	return (style_box_empty *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StyleBoxEmpty")());
}
}