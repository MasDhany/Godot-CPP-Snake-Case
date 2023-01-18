#include "visual_script_local_var_set.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_local_var_set::___method_bindings visual_script_local_var_set::___mb = {};

void *visual_script_local_var_set::_detail_class_tag = nullptr;

void visual_script_local_var_set::___init_method_bindings() {
	___mb.mb_get_var_name = gd::api->godot_method_bind_get_method("VisualScriptLocalVarSet", "get_var_name");
	___mb.mb_get_var_type = gd::api->godot_method_bind_get_method("VisualScriptLocalVarSet", "get_var_type");
	___mb.mb_set_var_name = gd::api->godot_method_bind_get_method("VisualScriptLocalVarSet", "set_var_name");
	___mb.mb_set_var_type = gd::api->godot_method_bind_get_method("VisualScriptLocalVarSet", "set_var_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptLocalVarSet");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_local_var_set *visual_script_local_var_set::_new()
{
	return (visual_script_local_var_set *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptLocalVarSet")());
}
string visual_script_local_var_set::get_var_name() const {
	return ___godot_icall_String(___mb.mb_get_var_name, (const object *) this);
}

variant::Type visual_script_local_var_set::get_var_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_var_type, (const object *) this);
}

void visual_script_local_var_set::set_var_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_var_name, (const object *) this, name);
}

void visual_script_local_var_set::set_var_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_var_type, (const object *) this, type);
}

}