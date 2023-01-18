#include "visual_script_input_action.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_input_action::___method_bindings visual_script_input_action::___mb = {};

void *visual_script_input_action::_detail_class_tag = nullptr;

void visual_script_input_action::___init_method_bindings() {
	___mb.mb_get_action_mode = gd::api->godot_method_bind_get_method("VisualScriptInputAction", "get_action_mode");
	___mb.mb_get_action_name = gd::api->godot_method_bind_get_method("VisualScriptInputAction", "get_action_name");
	___mb.mb_set_action_mode = gd::api->godot_method_bind_get_method("VisualScriptInputAction", "set_action_mode");
	___mb.mb_set_action_name = gd::api->godot_method_bind_get_method("VisualScriptInputAction", "set_action_name");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptInputAction");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_input_action *visual_script_input_action::_new()
{
	return (visual_script_input_action *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptInputAction")());
}
visual_script_input_action::Mode visual_script_input_action::get_action_mode() const {
	return (visual_script_input_action::Mode) ___godot_icall_int(___mb.mb_get_action_mode, (const object *) this);
}

string visual_script_input_action::get_action_name() const {
	return ___godot_icall_String(___mb.mb_get_action_name, (const object *) this);
}

void visual_script_input_action::set_action_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_action_mode, (const object *) this, mode);
}

void visual_script_input_action::set_action_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_action_name, (const object *) this, name);
}

}