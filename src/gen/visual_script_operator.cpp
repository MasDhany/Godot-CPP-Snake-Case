#include "visual_script_operator.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_operator::___method_bindings visual_script_operator::___mb = {};

void *visual_script_operator::_detail_class_tag = nullptr;

void visual_script_operator::___init_method_bindings() {
	___mb.mb_get_operator = gd::api->godot_method_bind_get_method("VisualScriptOperator", "get_operator");
	___mb.mb_get_typed = gd::api->godot_method_bind_get_method("VisualScriptOperator", "get_typed");
	___mb.mb_set_operator = gd::api->godot_method_bind_get_method("VisualScriptOperator", "set_operator");
	___mb.mb_set_typed = gd::api->godot_method_bind_get_method("VisualScriptOperator", "set_typed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptOperator");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_operator *visual_script_operator::_new()
{
	return (visual_script_operator *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptOperator")());
}
variant::Operator visual_script_operator::get_operator() const {
	return (variant::Operator) ___godot_icall_int(___mb.mb_get_operator, (const object *) this);
}

variant::Type visual_script_operator::get_typed() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_typed, (const object *) this);
}

void visual_script_operator::set_operator(const int64_t op) {
	___godot_icall_void_int(___mb.mb_set_operator, (const object *) this, op);
}

void visual_script_operator::set_typed(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_typed, (const object *) this, type);
}

}