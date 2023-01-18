#include "visual_script_constant.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_constant::___method_bindings visual_script_constant::___mb = {};

void *visual_script_constant::_detail_class_tag = nullptr;

void visual_script_constant::___init_method_bindings() {
	___mb.mb_get_constant_type = gd::api->godot_method_bind_get_method("VisualScriptConstant", "get_constant_type");
	___mb.mb_get_constant_value = gd::api->godot_method_bind_get_method("VisualScriptConstant", "get_constant_value");
	___mb.mb_set_constant_type = gd::api->godot_method_bind_get_method("VisualScriptConstant", "set_constant_type");
	___mb.mb_set_constant_value = gd::api->godot_method_bind_get_method("VisualScriptConstant", "set_constant_value");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptConstant");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_constant *visual_script_constant::_new()
{
	return (visual_script_constant *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptConstant")());
}
variant::Type visual_script_constant::get_constant_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_constant_type, (const object *) this);
}

variant visual_script_constant::get_constant_value() const {
	return ___godot_icall_Variant(___mb.mb_get_constant_value, (const object *) this);
}

void visual_script_constant::set_constant_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_constant_type, (const object *) this, type);
}

void visual_script_constant::set_constant_value(const variant value) {
	___godot_icall_void_Variant(___mb.mb_set_constant_value, (const object *) this, value);
}

}