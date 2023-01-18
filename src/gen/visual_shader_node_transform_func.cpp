#include "visual_shader_node_transform_func.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_transform_func::___method_bindings visual_shader_node_transform_func::___mb = {};

void *visual_shader_node_transform_func::_detail_class_tag = nullptr;

void visual_shader_node_transform_func::___init_method_bindings() {
	___mb.mb_get_function = gd::api->godot_method_bind_get_method("VisualShaderNodeTransformFunc", "get_function");
	___mb.mb_set_function = gd::api->godot_method_bind_get_method("VisualShaderNodeTransformFunc", "set_function");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeTransformFunc");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_transform_func *visual_shader_node_transform_func::_new()
{
	return (visual_shader_node_transform_func *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeTransformFunc")());
}
visual_shader_node_transform_func::Function visual_shader_node_transform_func::get_function() const {
	return (visual_shader_node_transform_func::Function) ___godot_icall_int(___mb.mb_get_function, (const object *) this);
}

void visual_shader_node_transform_func::set_function(const int64_t func) {
	___godot_icall_void_int(___mb.mb_set_function, (const object *) this, func);
}

}