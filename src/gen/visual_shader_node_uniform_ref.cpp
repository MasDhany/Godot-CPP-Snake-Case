#include "visual_shader_node_uniform_ref.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_uniform_ref::___method_bindings visual_shader_node_uniform_ref::___mb = {};

void *visual_shader_node_uniform_ref::_detail_class_tag = nullptr;

void visual_shader_node_uniform_ref::___init_method_bindings() {
	___mb.mb_get_uniform_name = gd::api->godot_method_bind_get_method("VisualShaderNodeUniformRef", "get_uniform_name");
	___mb.mb_set_uniform_name = gd::api->godot_method_bind_get_method("VisualShaderNodeUniformRef", "set_uniform_name");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeUniformRef");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_uniform_ref *visual_shader_node_uniform_ref::_new()
{
	return (visual_shader_node_uniform_ref *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeUniformRef")());
}
string visual_shader_node_uniform_ref::get_uniform_name() const {
	return ___godot_icall_String(___mb.mb_get_uniform_name, (const object *) this);
}

void visual_shader_node_uniform_ref::set_uniform_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_uniform_name, (const object *) this, name);
}

}