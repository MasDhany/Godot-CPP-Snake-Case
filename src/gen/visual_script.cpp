#include "visual_script.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "visual_script_node.hpp"


namespace gd {


visual_script::___method_bindings visual_script::___mb = {};

void *visual_script::_detail_class_tag = nullptr;

void visual_script::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("VisualScript", "_get_data");
	___mb.mb__node_ports_changed = gd::api->godot_method_bind_get_method("VisualScript", "_node_ports_changed");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("VisualScript", "_set_data");
	___mb.mb_add_custom_signal = gd::api->godot_method_bind_get_method("VisualScript", "add_custom_signal");
	___mb.mb_add_function = gd::api->godot_method_bind_get_method("VisualScript", "add_function");
	___mb.mb_add_node = gd::api->godot_method_bind_get_method("VisualScript", "add_node");
	___mb.mb_add_variable = gd::api->godot_method_bind_get_method("VisualScript", "add_variable");
	___mb.mb_custom_signal_add_argument = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_add_argument");
	___mb.mb_custom_signal_get_argument_count = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_get_argument_count");
	___mb.mb_custom_signal_get_argument_name = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_get_argument_name");
	___mb.mb_custom_signal_get_argument_type = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_get_argument_type");
	___mb.mb_custom_signal_remove_argument = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_remove_argument");
	___mb.mb_custom_signal_set_argument_name = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_set_argument_name");
	___mb.mb_custom_signal_set_argument_type = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_set_argument_type");
	___mb.mb_custom_signal_swap_argument = gd::api->godot_method_bind_get_method("VisualScript", "custom_signal_swap_argument");
	___mb.mb_data_connect = gd::api->godot_method_bind_get_method("VisualScript", "data_connect");
	___mb.mb_data_disconnect = gd::api->godot_method_bind_get_method("VisualScript", "data_disconnect");
	___mb.mb_get_function_node_id = gd::api->godot_method_bind_get_method("VisualScript", "get_function_node_id");
	___mb.mb_get_function_scroll = gd::api->godot_method_bind_get_method("VisualScript", "get_function_scroll");
	___mb.mb_get_node = gd::api->godot_method_bind_get_method("VisualScript", "get_node");
	___mb.mb_get_node_position = gd::api->godot_method_bind_get_method("VisualScript", "get_node_position");
	___mb.mb_get_variable_default_value = gd::api->godot_method_bind_get_method("VisualScript", "get_variable_default_value");
	___mb.mb_get_variable_export = gd::api->godot_method_bind_get_method("VisualScript", "get_variable_export");
	___mb.mb_get_variable_info = gd::api->godot_method_bind_get_method("VisualScript", "get_variable_info");
	___mb.mb_has_custom_signal = gd::api->godot_method_bind_get_method("VisualScript", "has_custom_signal");
	___mb.mb_has_data_connection = gd::api->godot_method_bind_get_method("VisualScript", "has_data_connection");
	___mb.mb_has_function = gd::api->godot_method_bind_get_method("VisualScript", "has_function");
	___mb.mb_has_node = gd::api->godot_method_bind_get_method("VisualScript", "has_node");
	___mb.mb_has_sequence_connection = gd::api->godot_method_bind_get_method("VisualScript", "has_sequence_connection");
	___mb.mb_has_variable = gd::api->godot_method_bind_get_method("VisualScript", "has_variable");
	___mb.mb_remove_custom_signal = gd::api->godot_method_bind_get_method("VisualScript", "remove_custom_signal");
	___mb.mb_remove_function = gd::api->godot_method_bind_get_method("VisualScript", "remove_function");
	___mb.mb_remove_node = gd::api->godot_method_bind_get_method("VisualScript", "remove_node");
	___mb.mb_remove_variable = gd::api->godot_method_bind_get_method("VisualScript", "remove_variable");
	___mb.mb_rename_custom_signal = gd::api->godot_method_bind_get_method("VisualScript", "rename_custom_signal");
	___mb.mb_rename_function = gd::api->godot_method_bind_get_method("VisualScript", "rename_function");
	___mb.mb_rename_variable = gd::api->godot_method_bind_get_method("VisualScript", "rename_variable");
	___mb.mb_sequence_connect = gd::api->godot_method_bind_get_method("VisualScript", "sequence_connect");
	___mb.mb_sequence_disconnect = gd::api->godot_method_bind_get_method("VisualScript", "sequence_disconnect");
	___mb.mb_set_function_scroll = gd::api->godot_method_bind_get_method("VisualScript", "set_function_scroll");
	___mb.mb_set_instance_base_type = gd::api->godot_method_bind_get_method("VisualScript", "set_instance_base_type");
	___mb.mb_set_node_position = gd::api->godot_method_bind_get_method("VisualScript", "set_node_position");
	___mb.mb_set_variable_default_value = gd::api->godot_method_bind_get_method("VisualScript", "set_variable_default_value");
	___mb.mb_set_variable_export = gd::api->godot_method_bind_get_method("VisualScript", "set_variable_export");
	___mb.mb_set_variable_info = gd::api->godot_method_bind_get_method("VisualScript", "set_variable_info");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScript");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script *visual_script::_new()
{
	return (visual_script *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScript")());
}
dictionary visual_script::_get_data() const {
	return ___godot_icall_Dictionary(___mb.mb__get_data, (const object *) this);
}

void visual_script::_node_ports_changed(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__node_ports_changed, (const object *) this, arg0);
}

void visual_script::_set_data(const dictionary data) {
	___godot_icall_void_Dictionary(___mb.mb__set_data, (const object *) this, data);
}

void visual_script::add_custom_signal(const string name) {
	___godot_icall_void_String(___mb.mb_add_custom_signal, (const object *) this, name);
}

void visual_script::add_function(const string name) {
	___godot_icall_void_String(___mb.mb_add_function, (const object *) this, name);
}

void visual_script::add_node(const string func, const int64_t id, const ref<visual_script_node> node_, const vector2 position) {
	___godot_icall_void_String_int_Object_Vector2(___mb.mb_add_node, (const object *) this, func, id, node_.ptr(), position);
}

void visual_script::add_variable(const string name, const variant default_value, const bool _export) {
	___godot_icall_void_String_Variant_bool(___mb.mb_add_variable, (const object *) this, name, default_value, _export);
}

void visual_script::custom_signal_add_argument(const string name, const int64_t type, const string argname, const int64_t index) {
	___godot_icall_void_String_int_String_int(___mb.mb_custom_signal_add_argument, (const object *) this, name, type, argname, index);
}

int64_t visual_script::custom_signal_get_argument_count(const string name) const {
	return ___godot_icall_int_String(___mb.mb_custom_signal_get_argument_count, (const object *) this, name);
}

string visual_script::custom_signal_get_argument_name(const string name, const int64_t argidx) const {
	return ___godot_icall_String_String_int(___mb.mb_custom_signal_get_argument_name, (const object *) this, name, argidx);
}

variant::Type visual_script::custom_signal_get_argument_type(const string name, const int64_t argidx) const {
	return (variant::Type) ___godot_icall_int_String_int(___mb.mb_custom_signal_get_argument_type, (const object *) this, name, argidx);
}

void visual_script::custom_signal_remove_argument(const string name, const int64_t argidx) {
	___godot_icall_void_String_int(___mb.mb_custom_signal_remove_argument, (const object *) this, name, argidx);
}

void visual_script::custom_signal_set_argument_name(const string name, const int64_t argidx, const string argname) {
	___godot_icall_void_String_int_String(___mb.mb_custom_signal_set_argument_name, (const object *) this, name, argidx, argname);
}

void visual_script::custom_signal_set_argument_type(const string name, const int64_t argidx, const int64_t type) {
	___godot_icall_void_String_int_int(___mb.mb_custom_signal_set_argument_type, (const object *) this, name, argidx, type);
}

void visual_script::custom_signal_swap_argument(const string name, const int64_t argidx, const int64_t withidx) {
	___godot_icall_void_String_int_int(___mb.mb_custom_signal_swap_argument, (const object *) this, name, argidx, withidx);
}

void visual_script::data_connect(const string func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
	___godot_icall_void_String_int_int_int_int(___mb.mb_data_connect, (const object *) this, func, from_node, from_port, to_node, to_port);
}

void visual_script::data_disconnect(const string func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
	___godot_icall_void_String_int_int_int_int(___mb.mb_data_disconnect, (const object *) this, func, from_node, from_port, to_node, to_port);
}

int64_t visual_script::get_function_node_id(const string name) const {
	return ___godot_icall_int_String(___mb.mb_get_function_node_id, (const object *) this, name);
}

vector2 visual_script::get_function_scroll(const string name) const {
	return ___godot_icall_Vector2_String(___mb.mb_get_function_scroll, (const object *) this, name);
}

ref<visual_script_node> visual_script::get_node(const string func, const int64_t id) const {
	return ref<visual_script_node>::__internal_constructor(___godot_icall_Object_String_int(___mb.mb_get_node, (const object *) this, func, id));
}

vector2 visual_script::get_node_position(const string func, const int64_t id) const {
	return ___godot_icall_Vector2_String_int(___mb.mb_get_node_position, (const object *) this, func, id);
}

variant visual_script::get_variable_default_value(const string name) const {
	return ___godot_icall_Variant_String(___mb.mb_get_variable_default_value, (const object *) this, name);
}

bool visual_script::get_variable_export(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_get_variable_export, (const object *) this, name);
}

dictionary visual_script::get_variable_info(const string name) const {
	return ___godot_icall_Dictionary_String(___mb.mb_get_variable_info, (const object *) this, name);
}

bool visual_script::has_custom_signal(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_custom_signal, (const object *) this, name);
}

bool visual_script::has_data_connection(const string func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
	return ___godot_icall_bool_String_int_int_int_int(___mb.mb_has_data_connection, (const object *) this, func, from_node, from_port, to_node, to_port);
}

bool visual_script::has_function(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_function, (const object *) this, name);
}

bool visual_script::has_node(const string func, const int64_t id) const {
	return ___godot_icall_bool_String_int(___mb.mb_has_node, (const object *) this, func, id);
}

bool visual_script::has_sequence_connection(const string func, const int64_t from_node, const int64_t from_output, const int64_t to_node) const {
	return ___godot_icall_bool_String_int_int_int(___mb.mb_has_sequence_connection, (const object *) this, func, from_node, from_output, to_node);
}

bool visual_script::has_variable(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_variable, (const object *) this, name);
}

void visual_script::remove_custom_signal(const string name) {
	___godot_icall_void_String(___mb.mb_remove_custom_signal, (const object *) this, name);
}

void visual_script::remove_function(const string name) {
	___godot_icall_void_String(___mb.mb_remove_function, (const object *) this, name);
}

void visual_script::remove_node(const string func, const int64_t id) {
	___godot_icall_void_String_int(___mb.mb_remove_node, (const object *) this, func, id);
}

void visual_script::remove_variable(const string name) {
	___godot_icall_void_String(___mb.mb_remove_variable, (const object *) this, name);
}

void visual_script::rename_custom_signal(const string name, const string new_name) {
	___godot_icall_void_String_String(___mb.mb_rename_custom_signal, (const object *) this, name, new_name);
}

void visual_script::rename_function(const string name, const string new_name) {
	___godot_icall_void_String_String(___mb.mb_rename_function, (const object *) this, name, new_name);
}

void visual_script::rename_variable(const string name, const string new_name) {
	___godot_icall_void_String_String(___mb.mb_rename_variable, (const object *) this, name, new_name);
}

void visual_script::sequence_connect(const string func, const int64_t from_node, const int64_t from_output, const int64_t to_node) {
	___godot_icall_void_String_int_int_int(___mb.mb_sequence_connect, (const object *) this, func, from_node, from_output, to_node);
}

void visual_script::sequence_disconnect(const string func, const int64_t from_node, const int64_t from_output, const int64_t to_node) {
	___godot_icall_void_String_int_int_int(___mb.mb_sequence_disconnect, (const object *) this, func, from_node, from_output, to_node);
}

void visual_script::set_function_scroll(const string name, const vector2 ofs) {
	___godot_icall_void_String_Vector2(___mb.mb_set_function_scroll, (const object *) this, name, ofs);
}

void visual_script::set_instance_base_type(const string type) {
	___godot_icall_void_String(___mb.mb_set_instance_base_type, (const object *) this, type);
}

void visual_script::set_node_position(const string func, const int64_t id, const vector2 position) {
	___godot_icall_void_String_int_Vector2(___mb.mb_set_node_position, (const object *) this, func, id, position);
}

void visual_script::set_variable_default_value(const string name, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_variable_default_value, (const object *) this, name, value);
}

void visual_script::set_variable_export(const string name, const bool enable) {
	___godot_icall_void_String_bool(___mb.mb_set_variable_export, (const object *) this, name, enable);
}

void visual_script::set_variable_info(const string name, const dictionary value) {
	___godot_icall_void_String_Dictionary(___mb.mb_set_variable_info, (const object *) this, name, value);
}

}