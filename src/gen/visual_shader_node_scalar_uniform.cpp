#include "visual_shader_node_scalar_uniform.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_scalar_uniform::___method_bindings visual_shader_node_scalar_uniform::___mb = {};

void *visual_shader_node_scalar_uniform::_detail_class_tag = nullptr;

void visual_shader_node_scalar_uniform::___init_method_bindings() {
	___mb.mb_get_default_value = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "get_default_value");
	___mb.mb_get_hint = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "get_hint");
	___mb.mb_get_max = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "get_max");
	___mb.mb_get_min = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "get_min");
	___mb.mb_get_step = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "get_step");
	___mb.mb_is_default_value_enabled = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "is_default_value_enabled");
	___mb.mb_set_default_value = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "set_default_value");
	___mb.mb_set_default_value_enabled = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "set_default_value_enabled");
	___mb.mb_set_hint = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "set_hint");
	___mb.mb_set_max = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "set_max");
	___mb.mb_set_min = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "set_min");
	___mb.mb_set_step = gd::api->godot_method_bind_get_method("VisualShaderNodeScalarUniform", "set_step");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeScalarUniform");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_scalar_uniform *visual_shader_node_scalar_uniform::_new()
{
	return (visual_shader_node_scalar_uniform *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeScalarUniform")());
}
real_t visual_shader_node_scalar_uniform::get_default_value() const {
	return ___godot_icall_float(___mb.mb_get_default_value, (const object *) this);
}

visual_shader_node_scalar_uniform::Hint visual_shader_node_scalar_uniform::get_hint() const {
	return (visual_shader_node_scalar_uniform::Hint) ___godot_icall_int(___mb.mb_get_hint, (const object *) this);
}

real_t visual_shader_node_scalar_uniform::get_max() const {
	return ___godot_icall_float(___mb.mb_get_max, (const object *) this);
}

real_t visual_shader_node_scalar_uniform::get_min() const {
	return ___godot_icall_float(___mb.mb_get_min, (const object *) this);
}

real_t visual_shader_node_scalar_uniform::get_step() const {
	return ___godot_icall_float(___mb.mb_get_step, (const object *) this);
}

bool visual_shader_node_scalar_uniform::is_default_value_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_default_value_enabled, (const object *) this);
}

void visual_shader_node_scalar_uniform::set_default_value(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_default_value, (const object *) this, value);
}

void visual_shader_node_scalar_uniform::set_default_value_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_default_value_enabled, (const object *) this, enabled);
}

void visual_shader_node_scalar_uniform::set_hint(const int64_t hint) {
	___godot_icall_void_int(___mb.mb_set_hint, (const object *) this, hint);
}

void visual_shader_node_scalar_uniform::set_max(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_max, (const object *) this, value);
}

void visual_shader_node_scalar_uniform::set_min(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_min, (const object *) this, value);
}

void visual_shader_node_scalar_uniform::set_step(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_step, (const object *) this, value);
}

}