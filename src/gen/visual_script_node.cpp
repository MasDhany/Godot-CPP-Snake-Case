#include "visual_script_node.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "visual_script.hpp"


namespace gd {


visual_script_node::___method_bindings visual_script_node::___mb = {};

void *visual_script_node::_detail_class_tag = nullptr;

void visual_script_node::___init_method_bindings() {
	___mb.mb__get_default_input_values = gd::api->godot_method_bind_get_method("VisualScriptNode", "_get_default_input_values");
	___mb.mb__set_default_input_values = gd::api->godot_method_bind_get_method("VisualScriptNode", "_set_default_input_values");
	___mb.mb_get_default_input_value = gd::api->godot_method_bind_get_method("VisualScriptNode", "get_default_input_value");
	___mb.mb_get_visual_script = gd::api->godot_method_bind_get_method("VisualScriptNode", "get_visual_script");
	___mb.mb_ports_changed_notify = gd::api->godot_method_bind_get_method("VisualScriptNode", "ports_changed_notify");
	___mb.mb_set_default_input_value = gd::api->godot_method_bind_get_method("VisualScriptNode", "set_default_input_value");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptNode");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array visual_script_node::_get_default_input_values() const {
	return ___godot_icall_Array(___mb.mb__get_default_input_values, (const object *) this);
}

void visual_script_node::_set_default_input_values(const array values) {
	___godot_icall_void_Array(___mb.mb__set_default_input_values, (const object *) this, values);
}

variant visual_script_node::get_default_input_value(const int64_t port_idx) const {
	return ___godot_icall_Variant_int(___mb.mb_get_default_input_value, (const object *) this, port_idx);
}

ref<visual_script> visual_script_node::get_visual_script() const {
	return ref<visual_script>::__internal_constructor(___godot_icall_Object(___mb.mb_get_visual_script, (const object *) this));
}

void visual_script_node::ports_changed_notify() {
	___godot_icall_void(___mb.mb_ports_changed_notify, (const object *) this);
}

void visual_script_node::set_default_input_value(const int64_t port_idx, const variant value) {
	___godot_icall_void_int_Variant(___mb.mb_set_default_input_value, (const object *) this, port_idx, value);
}

}