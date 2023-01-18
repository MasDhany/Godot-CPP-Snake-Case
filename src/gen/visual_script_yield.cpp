#include "visual_script_yield.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_yield::___method_bindings visual_script_yield::___mb = {};

void *visual_script_yield::_detail_class_tag = nullptr;

void visual_script_yield::___init_method_bindings() {
	___mb.mb_get_wait_time = gd::api->godot_method_bind_get_method("VisualScriptYield", "get_wait_time");
	___mb.mb_get_yield_mode = gd::api->godot_method_bind_get_method("VisualScriptYield", "get_yield_mode");
	___mb.mb_set_wait_time = gd::api->godot_method_bind_get_method("VisualScriptYield", "set_wait_time");
	___mb.mb_set_yield_mode = gd::api->godot_method_bind_get_method("VisualScriptYield", "set_yield_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptYield");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_yield *visual_script_yield::_new()
{
	return (visual_script_yield *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptYield")());
}
real_t visual_script_yield::get_wait_time() {
	return ___godot_icall_float(___mb.mb_get_wait_time, (const object *) this);
}

visual_script_yield::YieldMode visual_script_yield::get_yield_mode() {
	return (visual_script_yield::YieldMode) ___godot_icall_int(___mb.mb_get_yield_mode, (const object *) this);
}

void visual_script_yield::set_wait_time(const real_t sec) {
	___godot_icall_void_float(___mb.mb_set_wait_time, (const object *) this, sec);
}

void visual_script_yield::set_yield_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_yield_mode, (const object *) this, mode);
}

}