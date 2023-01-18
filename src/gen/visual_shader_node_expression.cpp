#include "visual_shader_node_expression.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_expression::___method_bindings visual_shader_node_expression::___mb = {};

void *visual_shader_node_expression::_detail_class_tag = nullptr;

void visual_shader_node_expression::___init_method_bindings() {
	___mb.mb_get_expression = gd::api->godot_method_bind_get_method("VisualShaderNodeExpression", "get_expression");
	___mb.mb_set_expression = gd::api->godot_method_bind_get_method("VisualShaderNodeExpression", "set_expression");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeExpression");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_expression *visual_shader_node_expression::_new()
{
	return (visual_shader_node_expression *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeExpression")());
}
string visual_shader_node_expression::get_expression() const {
	return ___godot_icall_String(___mb.mb_get_expression, (const object *) this);
}

void visual_shader_node_expression::set_expression(const string expression_) {
	___godot_icall_void_String(___mb.mb_set_expression, (const object *) this, expression_);
}

}