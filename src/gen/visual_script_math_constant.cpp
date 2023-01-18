#include "visual_script_math_constant.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_math_constant::___method_bindings visual_script_math_constant::___mb = {};

void *visual_script_math_constant::_detail_class_tag = nullptr;

void visual_script_math_constant::___init_method_bindings() {
	___mb.mb_get_math_constant = gd::api->godot_method_bind_get_method("VisualScriptMathConstant", "get_math_constant");
	___mb.mb_set_math_constant = gd::api->godot_method_bind_get_method("VisualScriptMathConstant", "set_math_constant");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptMathConstant");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_math_constant *visual_script_math_constant::_new()
{
	return (visual_script_math_constant *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptMathConstant")());
}
visual_script_math_constant::MathConstant visual_script_math_constant::get_math_constant() {
	return (visual_script_math_constant::MathConstant) ___godot_icall_int(___mb.mb_get_math_constant, (const object *) this);
}

void visual_script_math_constant::set_math_constant(const int64_t which) {
	___godot_icall_void_int(___mb.mb_set_math_constant, (const object *) this, which);
}

}