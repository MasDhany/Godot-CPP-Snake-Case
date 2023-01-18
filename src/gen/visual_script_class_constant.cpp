#include "visual_script_class_constant.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_class_constant::___method_bindings visual_script_class_constant::___mb = {};

void *visual_script_class_constant::_detail_class_tag = nullptr;

void visual_script_class_constant::___init_method_bindings() {
	___mb.mb_get_base_type = gd::api->godot_method_bind_get_method("VisualScriptClassConstant", "get_base_type");
	___mb.mb_get_class_constant = gd::api->godot_method_bind_get_method("VisualScriptClassConstant", "get_class_constant");
	___mb.mb_set_base_type = gd::api->godot_method_bind_get_method("VisualScriptClassConstant", "set_base_type");
	___mb.mb_set_class_constant = gd::api->godot_method_bind_get_method("VisualScriptClassConstant", "set_class_constant");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptClassConstant");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_class_constant *visual_script_class_constant::_new()
{
	return (visual_script_class_constant *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptClassConstant")());
}
string visual_script_class_constant::get_base_type() {
	return ___godot_icall_String(___mb.mb_get_base_type, (const object *) this);
}

string visual_script_class_constant::get_class_constant() {
	return ___godot_icall_String(___mb.mb_get_class_constant, (const object *) this);
}

void visual_script_class_constant::set_base_type(const string name) {
	___godot_icall_void_String(___mb.mb_set_base_type, (const object *) this, name);
}

void visual_script_class_constant::set_class_constant(const string name) {
	___godot_icall_void_String(___mb.mb_set_class_constant, (const object *) this, name);
}

}