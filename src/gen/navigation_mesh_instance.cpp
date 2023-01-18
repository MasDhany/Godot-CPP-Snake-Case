#include "navigation_mesh_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "navigation_mesh.hpp"


namespace gd {


navigation_mesh_instance::___method_bindings navigation_mesh_instance::___mb = {};

void *navigation_mesh_instance::_detail_class_tag = nullptr;

void navigation_mesh_instance::___init_method_bindings() {
	___mb.mb__bake_finished = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "_bake_finished");
	___mb.mb_bake_navigation_mesh = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "bake_navigation_mesh");
	___mb.mb_get_enter_cost = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "get_enter_cost");
	___mb.mb_get_navigation_layers = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "get_navigation_layers");
	___mb.mb_get_navigation_mesh = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "get_navigation_mesh");
	___mb.mb_get_region_rid = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "get_region_rid");
	___mb.mb_get_travel_cost = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "get_travel_cost");
	___mb.mb_is_enabled = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "is_enabled");
	___mb.mb_set_enabled = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "set_enabled");
	___mb.mb_set_enter_cost = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "set_enter_cost");
	___mb.mb_set_navigation_layers = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "set_navigation_layers");
	___mb.mb_set_navigation_mesh = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "set_navigation_mesh");
	___mb.mb_set_travel_cost = gd::api->godot_method_bind_get_method("NavigationMeshInstance", "set_travel_cost");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationMeshInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation_mesh_instance *navigation_mesh_instance::_new()
{
	return (navigation_mesh_instance *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NavigationMeshInstance")());
}
void navigation_mesh_instance::_bake_finished(const ref<navigation_mesh> nav_mesh) {
	___godot_icall_void_Object(___mb.mb__bake_finished, (const object *) this, nav_mesh.ptr());
}

void navigation_mesh_instance::bake_navigation_mesh(const bool on_thread) {
	___godot_icall_void_bool(___mb.mb_bake_navigation_mesh, (const object *) this, on_thread);
}

real_t navigation_mesh_instance::get_enter_cost() const {
	return ___godot_icall_float(___mb.mb_get_enter_cost, (const object *) this);
}

int64_t navigation_mesh_instance::get_navigation_layers() const {
	return ___godot_icall_int(___mb.mb_get_navigation_layers, (const object *) this);
}

ref<navigation_mesh> navigation_mesh_instance::get_navigation_mesh() const {
	return ref<navigation_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_navigation_mesh, (const object *) this));
}

rid navigation_mesh_instance::get_region_rid() const {
	return ___godot_icall_RID(___mb.mb_get_region_rid, (const object *) this);
}

real_t navigation_mesh_instance::get_travel_cost() const {
	return ___godot_icall_float(___mb.mb_get_travel_cost, (const object *) this);
}

bool navigation_mesh_instance::is_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_enabled, (const object *) this);
}

void navigation_mesh_instance::set_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_enabled, (const object *) this, enabled);
}

void navigation_mesh_instance::set_enter_cost(const real_t enter_cost) {
	___godot_icall_void_float(___mb.mb_set_enter_cost, (const object *) this, enter_cost);
}

void navigation_mesh_instance::set_navigation_layers(const int64_t navigation_layers) {
	___godot_icall_void_int(___mb.mb_set_navigation_layers, (const object *) this, navigation_layers);
}

void navigation_mesh_instance::set_navigation_mesh(const ref<navigation_mesh> navmesh) {
	___godot_icall_void_Object(___mb.mb_set_navigation_mesh, (const object *) this, navmesh.ptr());
}

void navigation_mesh_instance::set_travel_cost(const real_t travel_cost) {
	___godot_icall_void_float(___mb.mb_set_travel_cost, (const object *) this, travel_cost);
}

}