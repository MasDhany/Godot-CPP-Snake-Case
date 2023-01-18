#include "visual_script_return.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_return::___method_bindings visual_script_return::___mb = {};

void *visual_script_return::_detail_class_tag = nullptr;

void visual_script_return::___init_method_bindings() {
	___mb.mb_get_return_type = gd::api->godot_method_bind_get_method("VisualScriptReturn", "get_return_type");
	___mb.mb_is_return_value_enabled = gd::api->godot_method_bind_get_method("VisualScriptReturn", "is_return_value_enabled");
	___mb.mb_set_enable_return_value = gd::api->godot_method_bind_get_method("VisualScriptReturn", "set_enable_return_value");
	___mb.mb_set_return_type = gd::api->godot_method_bind_get_method("VisualScriptReturn", "set_return_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptReturn");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_return *visual_script_return::_new()
{
	return (visual_script_return *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptReturn")());
}
variant::Type visual_script_return::get_return_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_return_type, (const object *) this);
}

bool visual_script_return::is_return_value_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_return_value_enabled, (const object *) this);
}

void visual_script_return::set_enable_return_value(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_enable_return_value, (const object *) this, enable);
}

void visual_script_return::set_return_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_return_type, (const object *) this, type);
}

}