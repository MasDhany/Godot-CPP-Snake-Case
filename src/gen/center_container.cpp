#include "center_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


center_container::___method_bindings center_container::___mb = {};

void *center_container::_detail_class_tag = nullptr;

void center_container::___init_method_bindings() {
	___mb.mb_is_using_top_left = gd::api->godot_method_bind_get_method("CenterContainer", "is_using_top_left");
	___mb.mb_set_use_top_left = gd::api->godot_method_bind_get_method("CenterContainer", "set_use_top_left");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CenterContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

center_container *center_container::_new()
{
	return (center_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CenterContainer")());
}
bool center_container::is_using_top_left() const {
	return ___godot_icall_bool(___mb.mb_is_using_top_left, (const object *) this);
}

void center_container::set_use_top_left(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_top_left, (const object *) this, enable);
}

}