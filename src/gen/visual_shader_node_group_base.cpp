#include "visual_shader_node_group_base.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_group_base::___method_bindings visual_shader_node_group_base::___mb = {};

void *visual_shader_node_group_base::_detail_class_tag = nullptr;

void visual_shader_node_group_base::___init_method_bindings() {
	___mb.mb_add_input_port = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "add_input_port");
	___mb.mb_add_output_port = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "add_output_port");
	___mb.mb_clear_input_ports = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "clear_input_ports");
	___mb.mb_clear_output_ports = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "clear_output_ports");
	___mb.mb_get_free_input_port_id = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "get_free_input_port_id");
	___mb.mb_get_free_output_port_id = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "get_free_output_port_id");
	___mb.mb_get_input_port_count = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "get_input_port_count");
	___mb.mb_get_inputs = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "get_inputs");
	___mb.mb_get_output_port_count = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "get_output_port_count");
	___mb.mb_get_outputs = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "get_outputs");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "get_size");
	___mb.mb_has_input_port = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "has_input_port");
	___mb.mb_has_output_port = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "has_output_port");
	___mb.mb_is_valid_port_name = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "is_valid_port_name");
	___mb.mb_remove_input_port = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "remove_input_port");
	___mb.mb_remove_output_port = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "remove_output_port");
	___mb.mb_set_input_port_name = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "set_input_port_name");
	___mb.mb_set_input_port_type = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "set_input_port_type");
	___mb.mb_set_inputs = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "set_inputs");
	___mb.mb_set_output_port_name = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "set_output_port_name");
	___mb.mb_set_output_port_type = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "set_output_port_type");
	___mb.mb_set_outputs = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "set_outputs");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("VisualShaderNodeGroupBase", "set_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeGroupBase");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_group_base *visual_shader_node_group_base::_new()
{
	return (visual_shader_node_group_base *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeGroupBase")());
}
void visual_shader_node_group_base::add_input_port(const int64_t id, const int64_t type, const string name) {
	___godot_icall_void_int_int_String(___mb.mb_add_input_port, (const object *) this, id, type, name);
}

void visual_shader_node_group_base::add_output_port(const int64_t id, const int64_t type, const string name) {
	___godot_icall_void_int_int_String(___mb.mb_add_output_port, (const object *) this, id, type, name);
}

void visual_shader_node_group_base::clear_input_ports() {
	___godot_icall_void(___mb.mb_clear_input_ports, (const object *) this);
}

void visual_shader_node_group_base::clear_output_ports() {
	___godot_icall_void(___mb.mb_clear_output_ports, (const object *) this);
}

int64_t visual_shader_node_group_base::get_free_input_port_id() const {
	return ___godot_icall_int(___mb.mb_get_free_input_port_id, (const object *) this);
}

int64_t visual_shader_node_group_base::get_free_output_port_id() const {
	return ___godot_icall_int(___mb.mb_get_free_output_port_id, (const object *) this);
}

int64_t visual_shader_node_group_base::get_input_port_count() const {
	return ___godot_icall_int(___mb.mb_get_input_port_count, (const object *) this);
}

string visual_shader_node_group_base::get_inputs() const {
	return ___godot_icall_String(___mb.mb_get_inputs, (const object *) this);
}

int64_t visual_shader_node_group_base::get_output_port_count() const {
	return ___godot_icall_int(___mb.mb_get_output_port_count, (const object *) this);
}

string visual_shader_node_group_base::get_outputs() const {
	return ___godot_icall_String(___mb.mb_get_outputs, (const object *) this);
}

vector2 visual_shader_node_group_base::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

bool visual_shader_node_group_base::has_input_port(const int64_t id) const {
	return ___godot_icall_bool_int(___mb.mb_has_input_port, (const object *) this, id);
}

bool visual_shader_node_group_base::has_output_port(const int64_t id) const {
	return ___godot_icall_bool_int(___mb.mb_has_output_port, (const object *) this, id);
}

bool visual_shader_node_group_base::is_valid_port_name(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_is_valid_port_name, (const object *) this, name);
}

void visual_shader_node_group_base::remove_input_port(const int64_t id) {
	___godot_icall_void_int(___mb.mb_remove_input_port, (const object *) this, id);
}

void visual_shader_node_group_base::remove_output_port(const int64_t id) {
	___godot_icall_void_int(___mb.mb_remove_output_port, (const object *) this, id);
}

void visual_shader_node_group_base::set_input_port_name(const int64_t id, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_input_port_name, (const object *) this, id, name);
}

void visual_shader_node_group_base::set_input_port_type(const int64_t id, const int64_t type) {
	___godot_icall_void_int_int(___mb.mb_set_input_port_type, (const object *) this, id, type);
}

void visual_shader_node_group_base::set_inputs(const string inputs) {
	___godot_icall_void_String(___mb.mb_set_inputs, (const object *) this, inputs);
}

void visual_shader_node_group_base::set_output_port_name(const int64_t id, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_output_port_name, (const object *) this, id, name);
}

void visual_shader_node_group_base::set_output_port_type(const int64_t id, const int64_t type) {
	___godot_icall_void_int_int(___mb.mb_set_output_port_type, (const object *) this, id, type);
}

void visual_shader_node_group_base::set_outputs(const string outputs) {
	___godot_icall_void_String(___mb.mb_set_outputs, (const object *) this, outputs);
}

void visual_shader_node_group_base::set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const object *) this, size);
}

}