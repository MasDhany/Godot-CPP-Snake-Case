#include "visual_shader_node_custom.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_custom::___method_bindings visual_shader_node_custom::___mb = {};

void *visual_shader_node_custom::_detail_class_tag = nullptr;

void visual_shader_node_custom::___init_method_bindings() {
	___mb.mb__get_category = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_category");
	___mb.mb__get_code = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_code");
	___mb.mb__get_description = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_description");
	___mb.mb__get_global_code = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_global_code");
	___mb.mb__get_input_port_count = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_input_port_count");
	___mb.mb__get_input_port_name = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_input_port_name");
	___mb.mb__get_input_port_type = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_input_port_type");
	___mb.mb__get_name = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_name");
	___mb.mb__get_output_port_count = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_output_port_count");
	___mb.mb__get_output_port_name = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_output_port_name");
	___mb.mb__get_output_port_type = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_output_port_type");
	___mb.mb__get_return_icon_type = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_return_icon_type");
	___mb.mb__get_subcategory = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_subcategory");
	___mb.mb__is_initialized = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_is_initialized");
	___mb.mb__set_initialized = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_set_initialized");
	___mb.mb__set_input_port_default_value = gd::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_set_input_port_default_value");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeCustom");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_custom *visual_shader_node_custom::_new()
{
	return (visual_shader_node_custom *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeCustom")());
}
string visual_shader_node_custom::_get_category() {
	return ___godot_icall_String(___mb.mb__get_category, (const object *) this);
}

string visual_shader_node_custom::_get_code(const array input_vars, const array output_vars, const int64_t mode, const int64_t type) {
	return ___godot_icall_String_Array_Array_int_int(___mb.mb__get_code, (const object *) this, input_vars, output_vars, mode, type);
}

string visual_shader_node_custom::_get_description() {
	return ___godot_icall_String(___mb.mb__get_description, (const object *) this);
}

string visual_shader_node_custom::_get_global_code(const int64_t mode) {
	return ___godot_icall_String_int(___mb.mb__get_global_code, (const object *) this, mode);
}

int64_t visual_shader_node_custom::_get_input_port_count() {
	return ___godot_icall_int(___mb.mb__get_input_port_count, (const object *) this);
}

string visual_shader_node_custom::_get_input_port_name(const int64_t port) {
	return ___godot_icall_String_int(___mb.mb__get_input_port_name, (const object *) this, port);
}

int64_t visual_shader_node_custom::_get_input_port_type(const int64_t port) {
	return ___godot_icall_int_int(___mb.mb__get_input_port_type, (const object *) this, port);
}

string visual_shader_node_custom::_get_name() {
	return ___godot_icall_String(___mb.mb__get_name, (const object *) this);
}

int64_t visual_shader_node_custom::_get_output_port_count() {
	return ___godot_icall_int(___mb.mb__get_output_port_count, (const object *) this);
}

string visual_shader_node_custom::_get_output_port_name(const int64_t port) {
	return ___godot_icall_String_int(___mb.mb__get_output_port_name, (const object *) this, port);
}

int64_t visual_shader_node_custom::_get_output_port_type(const int64_t port) {
	return ___godot_icall_int_int(___mb.mb__get_output_port_type, (const object *) this, port);
}

int64_t visual_shader_node_custom::_get_return_icon_type() {
	return ___godot_icall_int(___mb.mb__get_return_icon_type, (const object *) this);
}

string visual_shader_node_custom::_get_subcategory() {
	return ___godot_icall_String(___mb.mb__get_subcategory, (const object *) this);
}

bool visual_shader_node_custom::_is_initialized() {
	return ___godot_icall_bool(___mb.mb__is_initialized, (const object *) this);
}

void visual_shader_node_custom::_set_initialized(const bool enabled) {
	___godot_icall_void_bool(___mb.mb__set_initialized, (const object *) this, enabled);
}

void visual_shader_node_custom::_set_input_port_default_value(const int64_t port, const variant value) {
	___godot_icall_void_int_Variant(___mb.mb__set_input_port_default_value, (const object *) this, port, value);
}

}