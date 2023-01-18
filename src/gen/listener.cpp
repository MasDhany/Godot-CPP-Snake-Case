#include "listener.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


listener::___method_bindings listener::___mb = {};

void *listener::_detail_class_tag = nullptr;

void listener::___init_method_bindings() {
	___mb.mb_clear_current = gd::api->godot_method_bind_get_method("Listener", "clear_current");
	___mb.mb_get_listener_transform = gd::api->godot_method_bind_get_method("Listener", "get_listener_transform");
	___mb.mb_is_current = gd::api->godot_method_bind_get_method("Listener", "is_current");
	___mb.mb_make_current = gd::api->godot_method_bind_get_method("Listener", "make_current");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Listener");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

listener *listener::_new()
{
	return (listener *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Listener")());
}
void listener::clear_current() {
	___godot_icall_void(___mb.mb_clear_current, (const object *) this);
}

transform listener::get_listener_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_listener_transform, (const object *) this);
}

bool listener::is_current() const {
	return ___godot_icall_bool(___mb.mb_is_current, (const object *) this);
}

void listener::make_current() {
	___godot_icall_void(___mb.mb_make_current, (const object *) this);
}

}