#include "proximity_group.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


proximity_group::___method_bindings proximity_group::___mb = {};

void *proximity_group::_detail_class_tag = nullptr;

void proximity_group::___init_method_bindings() {
	___mb.mb__proximity_group_broadcast = gd::api->godot_method_bind_get_method("ProximityGroup", "_proximity_group_broadcast");
	___mb.mb_broadcast = gd::api->godot_method_bind_get_method("ProximityGroup", "broadcast");
	___mb.mb_get_dispatch_mode = gd::api->godot_method_bind_get_method("ProximityGroup", "get_dispatch_mode");
	___mb.mb_get_grid_radius = gd::api->godot_method_bind_get_method("ProximityGroup", "get_grid_radius");
	___mb.mb_get_group_name = gd::api->godot_method_bind_get_method("ProximityGroup", "get_group_name");
	___mb.mb_set_dispatch_mode = gd::api->godot_method_bind_get_method("ProximityGroup", "set_dispatch_mode");
	___mb.mb_set_grid_radius = gd::api->godot_method_bind_get_method("ProximityGroup", "set_grid_radius");
	___mb.mb_set_group_name = gd::api->godot_method_bind_get_method("ProximityGroup", "set_group_name");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ProximityGroup");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

proximity_group *proximity_group::_new()
{
	return (proximity_group *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ProximityGroup")());
}
void proximity_group::_proximity_group_broadcast(const string method, const variant parameters) {
	___godot_icall_void_String_Variant(___mb.mb__proximity_group_broadcast, (const object *) this, method, parameters);
}

void proximity_group::broadcast(const string method, const variant parameters) {
	___godot_icall_void_String_Variant(___mb.mb_broadcast, (const object *) this, method, parameters);
}

proximity_group::DispatchMode proximity_group::get_dispatch_mode() const {
	return (proximity_group::DispatchMode) ___godot_icall_int(___mb.mb_get_dispatch_mode, (const object *) this);
}

vector3 proximity_group::get_grid_radius() const {
	return ___godot_icall_Vector3(___mb.mb_get_grid_radius, (const object *) this);
}

string proximity_group::get_group_name() const {
	return ___godot_icall_String(___mb.mb_get_group_name, (const object *) this);
}

void proximity_group::set_dispatch_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_dispatch_mode, (const object *) this, mode);
}

void proximity_group::set_grid_radius(const vector3 radius) {
	___godot_icall_void_Vector3(___mb.mb_set_grid_radius, (const object *) this, radius);
}

void proximity_group::set_group_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_group_name, (const object *) this, name);
}

}