#include "visual_script_deconstruct.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_deconstruct::___method_bindings visual_script_deconstruct::___mb = {};

void *visual_script_deconstruct::_detail_class_tag = nullptr;

void visual_script_deconstruct::___init_method_bindings() {
	___mb.mb__get_elem_cache = gd::api->godot_method_bind_get_method("VisualScriptDeconstruct", "_get_elem_cache");
	___mb.mb__set_elem_cache = gd::api->godot_method_bind_get_method("VisualScriptDeconstruct", "_set_elem_cache");
	___mb.mb_get_deconstruct_type = gd::api->godot_method_bind_get_method("VisualScriptDeconstruct", "get_deconstruct_type");
	___mb.mb_set_deconstruct_type = gd::api->godot_method_bind_get_method("VisualScriptDeconstruct", "set_deconstruct_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptDeconstruct");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_deconstruct *visual_script_deconstruct::_new()
{
	return (visual_script_deconstruct *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptDeconstruct")());
}
array visual_script_deconstruct::_get_elem_cache() const {
	return ___godot_icall_Array(___mb.mb__get_elem_cache, (const object *) this);
}

void visual_script_deconstruct::_set_elem_cache(const array _cache) {
	___godot_icall_void_Array(___mb.mb__set_elem_cache, (const object *) this, _cache);
}

variant::Type visual_script_deconstruct::get_deconstruct_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_deconstruct_type, (const object *) this);
}

void visual_script_deconstruct::set_deconstruct_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_deconstruct_type, (const object *) this, type);
}

}