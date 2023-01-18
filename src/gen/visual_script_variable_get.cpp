#include "visual_script_variable_get.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_variable_get::___method_bindings visual_script_variable_get::___mb = {};

void *visual_script_variable_get::_detail_class_tag = nullptr;

void visual_script_variable_get::___init_method_bindings() {
	___mb.mb_get_variable = gd::api->godot_method_bind_get_method("VisualScriptVariableGet", "get_variable");
	___mb.mb_set_variable = gd::api->godot_method_bind_get_method("VisualScriptVariableGet", "set_variable");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptVariableGet");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_variable_get *visual_script_variable_get::_new()
{
	return (visual_script_variable_get *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptVariableGet")());
}
string visual_script_variable_get::get_variable() const {
	return ___godot_icall_String(___mb.mb_get_variable, (const object *) this);
}

void visual_script_variable_get::set_variable(const string name) {
	___godot_icall_void_String(___mb.mb_set_variable, (const object *) this, name);
}

}