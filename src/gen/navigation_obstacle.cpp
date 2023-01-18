#include "navigation_obstacle.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


navigation_obstacle::___method_bindings navigation_obstacle::___mb = {};

void *navigation_obstacle::_detail_class_tag = nullptr;

void navigation_obstacle::___init_method_bindings() {
	___mb.mb_get_navigation = gd::api->godot_method_bind_get_method("NavigationObstacle", "get_navigation");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("NavigationObstacle", "get_radius");
	___mb.mb_get_rid = gd::api->godot_method_bind_get_method("NavigationObstacle", "get_rid");
	___mb.mb_is_radius_estimated = gd::api->godot_method_bind_get_method("NavigationObstacle", "is_radius_estimated");
	___mb.mb_set_estimate_radius = gd::api->godot_method_bind_get_method("NavigationObstacle", "set_estimate_radius");
	___mb.mb_set_navigation = gd::api->godot_method_bind_get_method("NavigationObstacle", "set_navigation");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("NavigationObstacle", "set_radius");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationObstacle");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation_obstacle *navigation_obstacle::_new()
{
	return (navigation_obstacle *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NavigationObstacle")());
}
node *navigation_obstacle::get_navigation() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_navigation, (const object *) this);
}

real_t navigation_obstacle::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

rid navigation_obstacle::get_rid() const {
	return ___godot_icall_RID(___mb.mb_get_rid, (const object *) this);
}

bool navigation_obstacle::is_radius_estimated() const {
	return ___godot_icall_bool(___mb.mb_is_radius_estimated, (const object *) this);
}

void navigation_obstacle::set_estimate_radius(const bool estimate_radius) {
	___godot_icall_void_bool(___mb.mb_set_estimate_radius, (const object *) this, estimate_radius);
}

void navigation_obstacle::set_navigation(const node *navigation_) {
	___godot_icall_void_Object(___mb.mb_set_navigation, (const object *) this, navigation_);
}

void navigation_obstacle::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

}