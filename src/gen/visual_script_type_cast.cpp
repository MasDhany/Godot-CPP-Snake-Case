#include "visual_script_type_cast.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_type_cast::___method_bindings visual_script_type_cast::___mb = {};

void *visual_script_type_cast::_detail_class_tag = nullptr;

void visual_script_type_cast::___init_method_bindings() {
	___mb.mb_get_base_script = gd::api->godot_method_bind_get_method("VisualScriptTypeCast", "get_base_script");
	___mb.mb_get_base_type = gd::api->godot_method_bind_get_method("VisualScriptTypeCast", "get_base_type");
	___mb.mb_set_base_script = gd::api->godot_method_bind_get_method("VisualScriptTypeCast", "set_base_script");
	___mb.mb_set_base_type = gd::api->godot_method_bind_get_method("VisualScriptTypeCast", "set_base_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptTypeCast");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_type_cast *visual_script_type_cast::_new()
{
	return (visual_script_type_cast *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptTypeCast")());
}
string visual_script_type_cast::get_base_script() const {
	return ___godot_icall_String(___mb.mb_get_base_script, (const object *) this);
}

string visual_script_type_cast::get_base_type() const {
	return ___godot_icall_String(___mb.mb_get_base_type, (const object *) this);
}

void visual_script_type_cast::set_base_script(const string path_) {
	___godot_icall_void_String(___mb.mb_set_base_script, (const object *) this, path_);
}

void visual_script_type_cast::set_base_type(const string type) {
	___godot_icall_void_String(___mb.mb_set_base_type, (const object *) this, type);
}

}