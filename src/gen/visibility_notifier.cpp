#include "visibility_notifier.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visibility_notifier::___method_bindings visibility_notifier::___mb = {};

void *visibility_notifier::_detail_class_tag = nullptr;

void visibility_notifier::___init_method_bindings() {
	___mb.mb_get_aabb = gd::api->godot_method_bind_get_method("VisibilityNotifier", "get_aabb");
	___mb.mb_get_max_distance = gd::api->godot_method_bind_get_method("VisibilityNotifier", "get_max_distance");
	___mb.mb_is_on_screen = gd::api->godot_method_bind_get_method("VisibilityNotifier", "is_on_screen");
	___mb.mb_set_aabb = gd::api->godot_method_bind_get_method("VisibilityNotifier", "set_aabb");
	___mb.mb_set_max_distance = gd::api->godot_method_bind_get_method("VisibilityNotifier", "set_max_distance");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisibilityNotifier");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visibility_notifier *visibility_notifier::_new()
{
	return (visibility_notifier *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisibilityNotifier")());
}
aabb visibility_notifier::get_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_aabb, (const object *) this);
}

real_t visibility_notifier::get_max_distance() const {
	return ___godot_icall_float(___mb.mb_get_max_distance, (const object *) this);
}

bool visibility_notifier::is_on_screen() const {
	return ___godot_icall_bool(___mb.mb_is_on_screen, (const object *) this);
}

void visibility_notifier::set_aabb(const aabb rect) {
	___godot_icall_void_AABB(___mb.mb_set_aabb, (const object *) this, rect);
}

void visibility_notifier::set_max_distance(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_max_distance, (const object *) this, distance);
}

}