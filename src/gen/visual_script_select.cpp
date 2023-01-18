#include "visual_script_select.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_select::___method_bindings visual_script_select::___mb = {};

void *visual_script_select::_detail_class_tag = nullptr;

void visual_script_select::___init_method_bindings() {
	___mb.mb_get_typed = gd::api->godot_method_bind_get_method("VisualScriptSelect", "get_typed");
	___mb.mb_set_typed = gd::api->godot_method_bind_get_method("VisualScriptSelect", "set_typed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptSelect");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_select *visual_script_select::_new()
{
	return (visual_script_select *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptSelect")());
}
variant::Type visual_script_select::get_typed() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_typed, (const object *) this);
}

void visual_script_select::set_typed(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_typed, (const object *) this, type);
}

}