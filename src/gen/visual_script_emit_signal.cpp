#include "visual_script_emit_signal.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_emit_signal::___method_bindings visual_script_emit_signal::___mb = {};

void *visual_script_emit_signal::_detail_class_tag = nullptr;

void visual_script_emit_signal::___init_method_bindings() {
	___mb.mb_get_signal = gd::api->godot_method_bind_get_method("VisualScriptEmitSignal", "get_signal");
	___mb.mb_set_signal = gd::api->godot_method_bind_get_method("VisualScriptEmitSignal", "set_signal");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptEmitSignal");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_emit_signal *visual_script_emit_signal::_new()
{
	return (visual_script_emit_signal *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptEmitSignal")());
}
string visual_script_emit_signal::get_signal() const {
	return ___godot_icall_String(___mb.mb_get_signal, (const object *) this);
}

void visual_script_emit_signal::set_signal(const string name) {
	___godot_icall_void_String(___mb.mb_set_signal, (const object *) this, name);
}

}