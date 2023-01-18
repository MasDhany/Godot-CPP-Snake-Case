#include "visual_shader_node_color_constant.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_color_constant::___method_bindings visual_shader_node_color_constant::___mb = {};

void *visual_shader_node_color_constant::_detail_class_tag = nullptr;

void visual_shader_node_color_constant::___init_method_bindings() {
	___mb.mb_get_constant = gd::api->godot_method_bind_get_method("VisualShaderNodeColorConstant", "get_constant");
	___mb.mb_set_constant = gd::api->godot_method_bind_get_method("VisualShaderNodeColorConstant", "set_constant");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeColorConstant");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_color_constant *visual_shader_node_color_constant::_new()
{
	return (visual_shader_node_color_constant *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeColorConstant")());
}
color visual_shader_node_color_constant::get_constant() const {
	return ___godot_icall_Color(___mb.mb_get_constant, (const object *) this);
}

void visual_shader_node_color_constant::set_constant(const color value) {
	___godot_icall_void_Color(___mb.mb_set_constant, (const object *) this, value);
}

}