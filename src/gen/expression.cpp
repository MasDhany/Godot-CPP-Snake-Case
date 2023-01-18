#include "expression.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


expression::___method_bindings expression::___mb = {};

void *expression::_detail_class_tag = nullptr;

void expression::___init_method_bindings() {
	___mb.mb_execute = gd::api->godot_method_bind_get_method("Expression", "execute");
	___mb.mb_get_error_text = gd::api->godot_method_bind_get_method("Expression", "get_error_text");
	___mb.mb_has_execute_failed = gd::api->godot_method_bind_get_method("Expression", "has_execute_failed");
	___mb.mb_parse = gd::api->godot_method_bind_get_method("Expression", "parse");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Expression");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

expression *expression::_new()
{
	return (expression *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Expression")());
}
variant expression::execute(const array inputs, const object *base_instance, const bool show_error) {
	return ___godot_icall_Variant_Array_Object_bool(___mb.mb_execute, (const object *) this, inputs, base_instance, show_error);
}

string expression::get_error_text() const {
	return ___godot_icall_String(___mb.mb_get_error_text, (const object *) this);
}

bool expression::has_execute_failed() const {
	return ___godot_icall_bool(___mb.mb_has_execute_failed, (const object *) this);
}

error expression::parse(const string expression_, const pool_string_array input_names) {
	return (error) ___godot_icall_int_String_PoolStringArray(___mb.mb_parse, (const object *) this, expression_, input_names);
}

}