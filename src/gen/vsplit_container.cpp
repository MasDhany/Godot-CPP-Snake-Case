#include "vsplit_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


vsplit_container::___method_bindings vsplit_container::___mb = {};

void *vsplit_container::_detail_class_tag = nullptr;

void vsplit_container::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VSplitContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

vsplit_container *vsplit_container::_new()
{
	return (vsplit_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VSplitContainer")());
}
}