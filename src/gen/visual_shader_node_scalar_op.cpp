#include "visual_shader_node_scalar_op.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_scalar_op::___method_bindings visual_shader_node_scalar_op::___mb = {};

void *visual_shader_node_scalar_op::_detail_class_tag = nullptr;

void visual_shader_node_scalar_op::___init_method_bindings() {
	___mb.mb_get_operator = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarOp", "get_operator");
	___mb.mb_set_operator = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarOp", "set_operator");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeScalarOp");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_scalar_op *visual_shader_node_scalar_op::_new()
{
	return (visual_shader_node_scalar_op *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeScalarOp")());
}
visual_shader_node_scalar_op::Operator visual_shader_node_scalar_op::get_operator() const {
	return (visual_shader_node_scalar_op::Operator) ___godot_icall_int(___mb.mb_get_operator, (const object *) this);
}

void visual_shader_node_scalar_op::set_operator(const int64_t op) {
	___godot_icall_void_int(___mb.mb_set_operator, (const object *) this, op);
}

}