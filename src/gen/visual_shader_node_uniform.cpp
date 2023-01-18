#include "visual_shader_node_uniform.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_uniform::___method_bindings visual_shader_node_uniform::___mb = {};

void *visual_shader_node_uniform::_detail_class_tag = nullptr;

void visual_shader_node_uniform::___init_method_bindings() {
	___mb.mb_get_uniform_name = gd::api->godot_method_bind_get_method("VisualShaderNodeUniform", "get_uniform_name");
	___mb.mb_set_uniform_name = gd::api->godot_method_bind_get_method("VisualShaderNodeUniform", "set_uniform_name");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeUniform");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

string visual_shader_node_uniform::get_uniform_name() const {
	return ___godot_icall_String(___mb.mb_get_uniform_name, (const object *) this);
}

void visual_shader_node_uniform::set_uniform_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_uniform_name, (const object *) this, name);
}

}