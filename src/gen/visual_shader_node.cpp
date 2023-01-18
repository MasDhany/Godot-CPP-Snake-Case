#include "visual_shader_node.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node::___method_bindings visual_shader_node::___mb = {};

void *visual_shader_node::_detail_class_tag = nullptr;

void visual_shader_node::___init_method_bindings() {
	___mb.mb_get_default_input_values = gd::api->godot_method_bind_get_method("VisualShaderNode", "get_default_input_values");
	___mb.mb_get_input_port_default_value = gd::api->godot_method_bind_get_method("VisualShaderNode", "get_input_port_default_value");
	___mb.mb_get_output_port_for_preview = gd::api->godot_method_bind_get_method("VisualShaderNode", "get_output_port_for_preview");
	___mb.mb_set_default_input_values = gd::api->godot_method_bind_get_method("VisualShaderNode", "set_default_input_values");
	___mb.mb_set_input_port_default_value = gd::api->godot_method_bind_get_method("VisualShaderNode", "set_input_port_default_value");
	___mb.mb_set_output_port_for_preview = gd::api->godot_method_bind_get_method("VisualShaderNode", "set_output_port_for_preview");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNode");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array visual_shader_node::get_default_input_values() const {
	return ___godot_icall_Array(___mb.mb_get_default_input_values, (const object *) this);
}

variant visual_shader_node::get_input_port_default_value(const int64_t port) const {
	return ___godot_icall_Variant_int(___mb.mb_get_input_port_default_value, (const object *) this, port);
}

int64_t visual_shader_node::get_output_port_for_preview() const {
	return ___godot_icall_int(___mb.mb_get_output_port_for_preview, (const object *) this);
}

void visual_shader_node::set_default_input_values(const array values) {
	___godot_icall_void_Array(___mb.mb_set_default_input_values, (const object *) this, values);
}

void visual_shader_node::set_input_port_default_value(const int64_t port, const variant value) {
	___godot_icall_void_int_Variant(___mb.mb_set_input_port_default_value, (const object *) this, port, value);
}

void visual_shader_node::set_output_port_for_preview(const int64_t port) {
	___godot_icall_void_int(___mb.mb_set_output_port_for_preview, (const object *) this, port);
}

}