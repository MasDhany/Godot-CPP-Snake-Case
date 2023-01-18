#include "visual_shader_node_input.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_input::___method_bindings visual_shader_node_input::___mb = {};

void *visual_shader_node_input::_detail_class_tag = nullptr;

void visual_shader_node_input::___init_method_bindings() {
	___mb.mb_get_input_name = gd::api->godot_method_bind_get_method("VisualShaderNodeInput", "get_input_name");
	___mb.mb_get_input_real_name = gd::api->godot_method_bind_get_method("VisualShaderNodeInput", "get_input_real_name");
	___mb.mb_set_input_name = gd::api->godot_method_bind_get_method("VisualShaderNodeInput", "set_input_name");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeInput");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_input *visual_shader_node_input::_new()
{
	return (visual_shader_node_input *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeInput")());
}
string visual_shader_node_input::get_input_name() const {
	return ___godot_icall_String(___mb.mb_get_input_name, (const object *) this);
}

string visual_shader_node_input::get_input_real_name() const {
	return ___godot_icall_String(___mb.mb_get_input_real_name, (const object *) this);
}

void visual_shader_node_input::set_input_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_input_name, (const object *) this, name);
}

}