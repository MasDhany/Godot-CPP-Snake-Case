#include "visual_script_global_constant.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_global_constant::___method_bindings visual_script_global_constant::___mb = {};

void *visual_script_global_constant::_detail_class_tag = nullptr;

void visual_script_global_constant::___init_method_bindings() {
	___mb.mb_get_global_constant = gd::api->godot_method_bind_get_method("VisualScriptGlobalConstant", "get_global_constant");
	___mb.mb_set_global_constant = gd::api->godot_method_bind_get_method("VisualScriptGlobalConstant", "set_global_constant");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptGlobalConstant");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_global_constant *visual_script_global_constant::_new()
{
	return (visual_script_global_constant *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptGlobalConstant")());
}
int64_t visual_script_global_constant::get_global_constant() {
	return ___godot_icall_int(___mb.mb_get_global_constant, (const object *) this);
}

void visual_script_global_constant::set_global_constant(const int64_t index) {
	___godot_icall_void_int(___mb.mb_set_global_constant, (const object *) this, index);
}

}