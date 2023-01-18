#include "visual_script_yield_signal.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_yield_signal::___method_bindings visual_script_yield_signal::___mb = {};

void *visual_script_yield_signal::_detail_class_tag = nullptr;

void visual_script_yield_signal::___init_method_bindings() {
	___mb.mb_get_base_path = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "get_base_path");
	___mb.mb_get_base_type = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "get_base_type");
	___mb.mb_get_call_mode = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "get_call_mode");
	___mb.mb_get_signal = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "get_signal");
	___mb.mb_set_base_path = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "set_base_path");
	___mb.mb_set_base_type = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "set_base_type");
	___mb.mb_set_call_mode = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "set_call_mode");
	___mb.mb_set_signal = gd::api->godot_method_bind_get_method("VisualScriptYieldSignal", "set_signal");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptYieldSignal");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_yield_signal *visual_script_yield_signal::_new()
{
	return (visual_script_yield_signal *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptYieldSignal")());
}
node_path visual_script_yield_signal::get_base_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_base_path, (const object *) this);
}

string visual_script_yield_signal::get_base_type() const {
	return ___godot_icall_String(___mb.mb_get_base_type, (const object *) this);
}

visual_script_yield_signal::CallMode visual_script_yield_signal::get_call_mode() const {
	return (visual_script_yield_signal::CallMode) ___godot_icall_int(___mb.mb_get_call_mode, (const object *) this);
}

string visual_script_yield_signal::get_signal() const {
	return ___godot_icall_String(___mb.mb_get_signal, (const object *) this);
}

void visual_script_yield_signal::set_base_path(const node_path base_path) {
	___godot_icall_void_NodePath(___mb.mb_set_base_path, (const object *) this, base_path);
}

void visual_script_yield_signal::set_base_type(const string base_type) {
	___godot_icall_void_String(___mb.mb_set_base_type, (const object *) this, base_type);
}

void visual_script_yield_signal::set_call_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_call_mode, (const object *) this, mode);
}

void visual_script_yield_signal::set_signal(const string signal) {
	___godot_icall_void_String(___mb.mb_set_signal, (const object *) this, signal);
}

}