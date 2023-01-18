#include "ysort.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


ysort::___method_bindings ysort::___mb = {};

void *ysort::_detail_class_tag = nullptr;

void ysort::___init_method_bindings() {
	___mb.mb_is_sort_enabled = gd::api->godot_method_bind_get_method("YSort", "is_sort_enabled");
	___mb.mb_set_sort_enabled = gd::api->godot_method_bind_get_method("YSort", "set_sort_enabled");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "YSort");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ysort *ysort::_new()
{
	return (ysort *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"YSort")());
}
bool ysort::is_sort_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_sort_enabled, (const object *) this);
}

void ysort::set_sort_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_sort_enabled, (const object *) this, enabled);
}

}