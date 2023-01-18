#include "visual_shader_node_compare.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_compare::___method_bindings visual_shader_node_compare::___mb = {};

void *visual_shader_node_compare::_detail_class_tag = nullptr;

void visual_shader_node_compare::___init_method_bindings() {
	___mb.mb_get_comparison_type = gd::api->godot_method_bind_get_method("VisualShaderNodeCompare", "get_comparison_type");
	___mb.mb_get_condition = gd::api->godot_method_bind_get_method("VisualShaderNodeCompare", "get_condition");
	___mb.mb_get_function = gd::api->godot_method_bind_get_method("VisualShaderNodeCompare", "get_function");
	___mb.mb_set_comparison_type = gd::api->godot_method_bind_get_method("VisualShaderNodeCompare", "set_comparison_type");
	___mb.mb_set_condition = gd::api->godot_method_bind_get_method("VisualShaderNodeCompare", "set_condition");
	___mb.mb_set_function = gd::api->godot_method_bind_get_method("VisualShaderNodeCompare", "set_function");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeCompare");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_compare *visual_shader_node_compare::_new()
{
	return (visual_shader_node_compare *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeCompare")());
}
visual_shader_node_compare::ComparisonType visual_shader_node_compare::get_comparison_type() const {
	return (visual_shader_node_compare::ComparisonType) ___godot_icall_int(___mb.mb_get_comparison_type, (const object *) this);
}

visual_shader_node_compare::Condition visual_shader_node_compare::get_condition() const {
	return (visual_shader_node_compare::Condition) ___godot_icall_int(___mb.mb_get_condition, (const object *) this);
}

visual_shader_node_compare::Function visual_shader_node_compare::get_function() const {
	return (visual_shader_node_compare::Function) ___godot_icall_int(___mb.mb_get_function, (const object *) this);
}

void visual_shader_node_compare::set_comparison_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_comparison_type, (const object *) this, type);
}

void visual_shader_node_compare::set_condition(const int64_t condition) {
	___godot_icall_void_int(___mb.mb_set_condition, (const object *) this, condition);
}

void visual_shader_node_compare::set_function(const int64_t func) {
	___godot_icall_void_int(___mb.mb_set_function, (const object *) this, func);
}

}