#include "room.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


room::___method_bindings room::___mb = {};

void *room::_detail_class_tag = nullptr;

void room::___init_method_bindings() {
	___mb.mb_get_points = gd::api->godot_method_bind_get_method("Room", "get_points");
	___mb.mb_get_room_simplify = gd::api->godot_method_bind_get_method("Room", "get_room_simplify");
	___mb.mb_get_use_default_simplify = gd::api->godot_method_bind_get_method("Room", "get_use_default_simplify");
	___mb.mb_set_point = gd::api->godot_method_bind_get_method("Room", "set_point");
	___mb.mb_set_points = gd::api->godot_method_bind_get_method("Room", "set_points");
	___mb.mb_set_room_simplify = gd::api->godot_method_bind_get_method("Room", "set_room_simplify");
	___mb.mb_set_use_default_simplify = gd::api->godot_method_bind_get_method("Room", "set_use_default_simplify");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Room");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

room *room::_new()
{
	return (room *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Room")());
}
pool_vector3_array room::get_points() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_points, (const object *) this);
}

real_t room::get_room_simplify() const {
	return ___godot_icall_float(___mb.mb_get_room_simplify, (const object *) this);
}

bool room::get_use_default_simplify() const {
	return ___godot_icall_bool(___mb.mb_get_use_default_simplify, (const object *) this);
}

void room::set_point(const int64_t index, const vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_point, (const object *) this, index, position);
}

void room::set_points(const pool_vector3_array points) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_points, (const object *) this, points);
}

void room::set_room_simplify(const real_t p_value) {
	___godot_icall_void_float(___mb.mb_set_room_simplify, (const object *) this, p_value);
}

void room::set_use_default_simplify(const bool p_use) {
	___godot_icall_void_bool(___mb.mb_set_use_default_simplify, (const object *) this, p_use);
}

}