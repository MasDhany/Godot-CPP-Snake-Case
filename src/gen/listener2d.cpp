#include "listener2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


listener2d::___method_bindings listener2d::___mb = {};

void *listener2d::_detail_class_tag = nullptr;

void listener2d::___init_method_bindings() {
	___mb.mb_clear_current = gd::api->godot_method_bind_get_method("Listener2D", "clear_current");
	___mb.mb_is_current = gd::api->godot_method_bind_get_method("Listener2D", "is_current");
	___mb.mb_make_current = gd::api->godot_method_bind_get_method("Listener2D", "make_current");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Listener2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

listener2d *listener2d::_new()
{
	return (listener2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Listener2D")());
}
void listener2d::clear_current() {
	___godot_icall_void(___mb.mb_clear_current, (const object *) this);
}

bool listener2d::is_current() const {
	return ___godot_icall_bool(___mb.mb_is_current, (const object *) this);
}

void listener2d::make_current() {
	___godot_icall_void(___mb.mb_make_current, (const object *) this);
}

}