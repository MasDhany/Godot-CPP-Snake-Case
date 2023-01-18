#include "visual_script_custom_node.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_custom_node::___method_bindings visual_script_custom_node::___mb = {};

void *visual_script_custom_node::_detail_class_tag = nullptr;

void visual_script_custom_node::___init_method_bindings() {
	___mb.mb__get_caption = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_caption");
	___mb.mb__get_category = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_category");
	___mb.mb__get_input_value_port_count = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_input_value_port_count");
	___mb.mb__get_input_value_port_hint = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_input_value_port_hint");
	___mb.mb__get_input_value_port_hint_string = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_input_value_port_hint_string");
	___mb.mb__get_input_value_port_name = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_input_value_port_name");
	___mb.mb__get_input_value_port_type = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_input_value_port_type");
	___mb.mb__get_output_sequence_port_count = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_output_sequence_port_count");
	___mb.mb__get_output_sequence_port_text = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_output_sequence_port_text");
	___mb.mb__get_output_value_port_count = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_output_value_port_count");
	___mb.mb__get_output_value_port_hint = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_output_value_port_hint");
	___mb.mb__get_output_value_port_hint_string = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_output_value_port_hint_string");
	___mb.mb__get_output_value_port_name = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_output_value_port_name");
	___mb.mb__get_output_value_port_type = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_output_value_port_type");
	___mb.mb__get_text = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_text");
	___mb.mb__get_working_memory_size = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_get_working_memory_size");
	___mb.mb__has_input_sequence_port = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_has_input_sequence_port");
	___mb.mb__script_changed = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_script_changed");
	___mb.mb__step = gd::api->godot_method_bind_get_method("VisualScriptCustomNode", "_step");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptCustomNode");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_custom_node *visual_script_custom_node::_new()
{
	return (visual_script_custom_node *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptCustomNode")());
}
string visual_script_custom_node::_get_caption() {
	return ___godot_icall_String(___mb.mb__get_caption, (const object *) this);
}

string visual_script_custom_node::_get_category() {
	return ___godot_icall_String(___mb.mb__get_category, (const object *) this);
}

int64_t visual_script_custom_node::_get_input_value_port_count() {
	return ___godot_icall_int(___mb.mb__get_input_value_port_count, (const object *) this);
}

int64_t visual_script_custom_node::_get_input_value_port_hint(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb__get_input_value_port_hint, (const object *) this, idx);
}

string visual_script_custom_node::_get_input_value_port_hint_string(const int64_t idx) {
	return ___godot_icall_String_int(___mb.mb__get_input_value_port_hint_string, (const object *) this, idx);
}

string visual_script_custom_node::_get_input_value_port_name(const int64_t idx) {
	return ___godot_icall_String_int(___mb.mb__get_input_value_port_name, (const object *) this, idx);
}

int64_t visual_script_custom_node::_get_input_value_port_type(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb__get_input_value_port_type, (const object *) this, idx);
}

int64_t visual_script_custom_node::_get_output_sequence_port_count() {
	return ___godot_icall_int(___mb.mb__get_output_sequence_port_count, (const object *) this);
}

string visual_script_custom_node::_get_output_sequence_port_text(const int64_t idx) {
	return ___godot_icall_String_int(___mb.mb__get_output_sequence_port_text, (const object *) this, idx);
}

int64_t visual_script_custom_node::_get_output_value_port_count() {
	return ___godot_icall_int(___mb.mb__get_output_value_port_count, (const object *) this);
}

int64_t visual_script_custom_node::_get_output_value_port_hint(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb__get_output_value_port_hint, (const object *) this, idx);
}

string visual_script_custom_node::_get_output_value_port_hint_string(const int64_t idx) {
	return ___godot_icall_String_int(___mb.mb__get_output_value_port_hint_string, (const object *) this, idx);
}

string visual_script_custom_node::_get_output_value_port_name(const int64_t idx) {
	return ___godot_icall_String_int(___mb.mb__get_output_value_port_name, (const object *) this, idx);
}

int64_t visual_script_custom_node::_get_output_value_port_type(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb__get_output_value_port_type, (const object *) this, idx);
}

string visual_script_custom_node::_get_text() {
	return ___godot_icall_String(___mb.mb__get_text, (const object *) this);
}

int64_t visual_script_custom_node::_get_working_memory_size() {
	return ___godot_icall_int(___mb.mb__get_working_memory_size, (const object *) this);
}

bool visual_script_custom_node::_has_input_sequence_port() {
	return ___godot_icall_bool(___mb.mb__has_input_sequence_port, (const object *) this);
}

void visual_script_custom_node::_script_changed() {
	___godot_icall_void(___mb.mb__script_changed, (const object *) this);
}

variant visual_script_custom_node::_step(const array inputs, const array outputs, const int64_t start_mode, const array working_mem) {
	return ___godot_icall_Variant_Array_Array_int_Array(___mb.mb__step, (const object *) this, inputs, outputs, start_mode, working_mem);
}

}