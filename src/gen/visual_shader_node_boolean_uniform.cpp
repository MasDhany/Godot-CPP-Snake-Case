#include "visual_shader_node_boolean_uniform.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_boolean_uniform::___method_bindings visual_shader_node_boolean_uniform::___mb = {};

void *visual_shader_node_boolean_uniform::_detail_class_tag = nullptr;

void visual_shader_node_boolean_uniform::___init_method_bindings() {
	___mb.mb_get_default_value = gd::api->godot_method_bind_get_method("VisualShaderNodeBooleanUniform", "get_default_value");
	___mb.mb_is_default_value_enabled = gd::api->godot_method_bind_get_method("VisualShaderNodeBooleanUniform", "is_default_value_enabled");
	___mb.mb_set_default_value = gd::api->godot_method_bind_get_method("VisualShaderNodeBooleanUniform", "set_default_value");
	___mb.mb_set_default_value_enabled = gd::api->godot_method_bind_get_method("VisualShaderNodeBooleanUniform", "set_default_value_enabled");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeBooleanUniform");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_boolean_uniform *visual_shader_node_boolean_uniform::_new()
{
	return (visual_shader_node_boolean_uniform *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeBooleanUniform")());
}
bool visual_shader_node_boolean_uniform::get_default_value() const {
	return ___godot_icall_bool(___mb.mb_get_default_value, (const object *) this);
}

bool visual_shader_node_boolean_uniform::is_default_value_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_default_value_enabled, (const object *) this);
}

void visual_shader_node_boolean_uniform::set_default_value(const bool value) {
	___godot_icall_void_bool(___mb.mb_set_default_value, (const object *) this, value);
}

void visual_shader_node_boolean_uniform::set_default_value_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_default_value_enabled, (const object *) this, enabled);
}

}