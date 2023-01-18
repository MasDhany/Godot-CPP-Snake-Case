#include "visual_shader_node_dot_product.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_dot_product::___method_bindings visual_shader_node_dot_product::___mb = {};

void *visual_shader_node_dot_product::_detail_class_tag = nullptr;

void visual_shader_node_dot_product::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeDotProduct");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_dot_product *visual_shader_node_dot_product::_new()
{
	return (visual_shader_node_dot_product *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeDotProduct")());
}
}