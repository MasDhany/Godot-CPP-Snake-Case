#include "visual_script_basic_type_constant.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_basic_type_constant::___method_bindings visual_script_basic_type_constant::___mb = {};

void *visual_script_basic_type_constant::_detail_class_tag = nullptr;

void visual_script_basic_type_constant::___init_method_bindings() {
	___mb.mb_get_basic_type = gd::api->godot_method_bind_get_method("VisualScriptBasicTypeConstant", "get_basic_type");
	___mb.mb_get_basic_type_constant = gd::api->godot_method_bind_get_method("VisualScriptBasicTypeConstant", "get_basic_type_constant");
	___mb.mb_set_basic_type = gd::api->godot_method_bind_get_method("VisualScriptBasicTypeConstant", "set_basic_type");
	___mb.mb_set_basic_type_constant = gd::api->godot_method_bind_get_method("VisualScriptBasicTypeConstant", "set_basic_type_constant");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptBasicTypeConstant");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_basic_type_constant *visual_script_basic_type_constant::_new()
{
	return (visual_script_basic_type_constant *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptBasicTypeConstant")());
}
variant::Type visual_script_basic_type_constant::get_basic_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_basic_type, (const object *) this);
}

string visual_script_basic_type_constant::get_basic_type_constant() const {
	return ___godot_icall_String(___mb.mb_get_basic_type_constant, (const object *) this);
}

void visual_script_basic_type_constant::set_basic_type(const int64_t name) {
	___godot_icall_void_int(___mb.mb_set_basic_type, (const object *) this, name);
}

void visual_script_basic_type_constant::set_basic_type_constant(const string name) {
	___godot_icall_void_String(___mb.mb_set_basic_type_constant, (const object *) this, name);
}

}