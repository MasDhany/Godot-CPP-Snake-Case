#include "navigation_polygon_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "navigation_polygon.hpp"


namespace gd {


navigation_polygon_instance::___method_bindings navigation_polygon_instance::___mb = {};

void *navigation_polygon_instance::_detail_class_tag = nullptr;

void navigation_polygon_instance::___init_method_bindings() {
	___mb.mb__map_changed = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "_map_changed");
	___mb.mb__navpoly_changed = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "_navpoly_changed");
	___mb.mb_get_enter_cost = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "get_enter_cost");
	___mb.mb_get_navigation_layers = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "get_navigation_layers");
	___mb.mb_get_navigation_polygon = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "get_navigation_polygon");
	___mb.mb_get_region_rid = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "get_region_rid");
	___mb.mb_get_travel_cost = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "get_travel_cost");
	___mb.mb_is_enabled = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "is_enabled");
	___mb.mb_set_enabled = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "set_enabled");
	___mb.mb_set_enter_cost = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "set_enter_cost");
	___mb.mb_set_navigation_layers = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "set_navigation_layers");
	___mb.mb_set_navigation_polygon = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "set_navigation_polygon");
	___mb.mb_set_travel_cost = gd::api->godot_method_bind_get_method("NavigationPolygonInstance", "set_travel_cost");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationPolygonInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation_polygon_instance *navigation_polygon_instance::_new()
{
	return (navigation_polygon_instance *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NavigationPolygonInstance")());
}
void navigation_polygon_instance::_map_changed(const rid arg0) {
	___godot_icall_void_RID(___mb.mb__map_changed, (const object *) this, arg0);
}

void navigation_polygon_instance::_navpoly_changed() {
	___godot_icall_void(___mb.mb__navpoly_changed, (const object *) this);
}

real_t navigation_polygon_instance::get_enter_cost() const {
	return ___godot_icall_float(___mb.mb_get_enter_cost, (const object *) this);
}

int64_t navigation_polygon_instance::get_navigation_layers() const {
	return ___godot_icall_int(___mb.mb_get_navigation_layers, (const object *) this);
}

ref<navigation_polygon> navigation_polygon_instance::get_navigation_polygon() const {
	return ref<navigation_polygon>::__internal_constructor(___godot_icall_Object(___mb.mb_get_navigation_polygon, (const object *) this));
}

rid navigation_polygon_instance::get_region_rid() const {
	return ___godot_icall_RID(___mb.mb_get_region_rid, (const object *) this);
}

real_t navigation_polygon_instance::get_travel_cost() const {
	return ___godot_icall_float(___mb.mb_get_travel_cost, (const object *) this);
}

bool navigation_polygon_instance::is_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_enabled, (const object *) this);
}

void navigation_polygon_instance::set_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_enabled, (const object *) this, enabled);
}

void navigation_polygon_instance::set_enter_cost(const real_t enter_cost) {
	___godot_icall_void_float(___mb.mb_set_enter_cost, (const object *) this, enter_cost);
}

void navigation_polygon_instance::set_navigation_layers(const int64_t navigation_layers) {
	___godot_icall_void_int(___mb.mb_set_navigation_layers, (const object *) this, navigation_layers);
}

void navigation_polygon_instance::set_navigation_polygon(const ref<navigation_polygon> navpoly) {
	___godot_icall_void_Object(___mb.mb_set_navigation_polygon, (const object *) this, navpoly.ptr());
}

void navigation_polygon_instance::set_travel_cost(const real_t travel_cost) {
	___godot_icall_void_float(___mb.mb_set_travel_cost, (const object *) this, travel_cost);
}

}