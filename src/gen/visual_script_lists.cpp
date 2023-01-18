#include "visual_script_lists.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_lists::___method_bindings visual_script_lists::___mb = {};

void *visual_script_lists::_detail_class_tag = nullptr;

void visual_script_lists::___init_method_bindings() {
	___mb.mb_add_input_data_port = gd::api->godot_method_bind_get_method("VisualScriptLists", "add_input_data_port");
	___mb.mb_add_output_data_port = gd::api->godot_method_bind_get_method("VisualScriptLists", "add_output_data_port");
	___mb.mb_remove_input_data_port = gd::api->godot_method_bind_get_method("VisualScriptLists", "remove_input_data_port");
	___mb.mb_remove_output_data_port = gd::api->godot_method_bind_get_method("VisualScriptLists", "remove_output_data_port");
	___mb.mb_set_input_data_port_name = gd::api->godot_method_bind_get_method("VisualScriptLists", "set_input_data_port_name");
	___mb.mb_set_input_data_port_type = gd::api->godot_method_bind_get_method("VisualScriptLists", "set_input_data_port_type");
	___mb.mb_set_output_data_port_name = gd::api->godot_method_bind_get_method("VisualScriptLists", "set_output_data_port_name");
	___mb.mb_set_output_data_port_type = gd::api->godot_method_bind_get_method("VisualScriptLists", "set_output_data_port_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptLists");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void visual_script_lists::add_input_data_port(const int64_t type, const string name, const int64_t index) {
	___godot_icall_void_int_String_int(___mb.mb_add_input_data_port, (const object *) this, type, name, index);
}

void visual_script_lists::add_output_data_port(const int64_t type, const string name, const int64_t index) {
	___godot_icall_void_int_String_int(___mb.mb_add_output_data_port, (const object *) this, type, name, index);
}

void visual_script_lists::remove_input_data_port(const int64_t index) {
	___godot_icall_void_int(___mb.mb_remove_input_data_port, (const object *) this, index);
}

void visual_script_lists::remove_output_data_port(const int64_t index) {
	___godot_icall_void_int(___mb.mb_remove_output_data_port, (const object *) this, index);
}

void visual_script_lists::set_input_data_port_name(const int64_t index, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_input_data_port_name, (const object *) this, index, name);
}

void visual_script_lists::set_input_data_port_type(const int64_t index, const int64_t type) {
	___godot_icall_void_int_int(___mb.mb_set_input_data_port_type, (const object *) this, index, type);
}

void visual_script_lists::set_output_data_port_name(const int64_t index, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_output_data_port_name, (const object *) this, index, name);
}

void visual_script_lists::set_output_data_port_type(const int64_t index, const int64_t type) {
	___godot_icall_void_int_int(___mb.mb_set_output_data_port_type, (const object *) this, index, type);
}

}