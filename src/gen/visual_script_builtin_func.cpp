#include "visual_script_builtin_func.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_builtin_func::___method_bindings visual_script_builtin_func::___mb = {};

void *visual_script_builtin_func::_detail_class_tag = nullptr;

void visual_script_builtin_func::___init_method_bindings() {
	___mb.mb_get_func = gd::api->godot_method_bind_get_method("VisualScriptBuiltinFunc", "get_func");
	___mb.mb_set_func = gd::api->godot_method_bind_get_method("VisualScriptBuiltinFunc", "set_func");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptBuiltinFunc");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_builtin_func *visual_script_builtin_func::_new()
{
	return (visual_script_builtin_func *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptBuiltinFunc")());
}
visual_script_builtin_func::BuiltinFunc visual_script_builtin_func::get_func() {
	return (visual_script_builtin_func::BuiltinFunc) ___godot_icall_int(___mb.mb_get_func, (const object *) this);
}

void visual_script_builtin_func::set_func(const int64_t which) {
	___godot_icall_void_int(___mb.mb_set_func, (const object *) this, which);
}

}