#include "portal.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


portal::___method_bindings portal::___mb = {};

void *portal::_detail_class_tag = nullptr;

void portal::___init_method_bindings() {
	___mb.mb_get_linked_room = gd::api->godot_method_bind_get_method("Portal", "get_linked_room");
	___mb.mb_get_points = gd::api->godot_method_bind_get_method("Portal", "get_points");
	___mb.mb_get_portal_active = gd::api->godot_method_bind_get_method("Portal", "get_portal_active");
	___mb.mb_get_portal_margin = gd::api->godot_method_bind_get_method("Portal", "get_portal_margin");
	___mb.mb_get_use_default_margin = gd::api->godot_method_bind_get_method("Portal", "get_use_default_margin");
	___mb.mb_is_two_way = gd::api->godot_method_bind_get_method("Portal", "is_two_way");
	___mb.mb_set_linked_room = gd::api->godot_method_bind_get_method("Portal", "set_linked_room");
	___mb.mb_set_point = gd::api->godot_method_bind_get_method("Portal", "set_point");
	___mb.mb_set_points = gd::api->godot_method_bind_get_method("Portal", "set_points");
	___mb.mb_set_portal_active = gd::api->godot_method_bind_get_method("Portal", "set_portal_active");
	___mb.mb_set_portal_margin = gd::api->godot_method_bind_get_method("Portal", "set_portal_margin");
	___mb.mb_set_two_way = gd::api->godot_method_bind_get_method("Portal", "set_two_way");
	___mb.mb_set_use_default_margin = gd::api->godot_method_bind_get_method("Portal", "set_use_default_margin");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Portal");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

portal *portal::_new()
{
	return (portal *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Portal")());
}
node_path portal::get_linked_room() const {
	return ___godot_icall_NodePath(___mb.mb_get_linked_room, (const object *) this);
}

pool_vector2_array portal::get_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_points, (const object *) this);
}

bool portal::get_portal_active() const {
	return ___godot_icall_bool(___mb.mb_get_portal_active, (const object *) this);
}

real_t portal::get_portal_margin() const {
	return ___godot_icall_float(___mb.mb_get_portal_margin, (const object *) this);
}

bool portal::get_use_default_margin() const {
	return ___godot_icall_bool(___mb.mb_get_use_default_margin, (const object *) this);
}

bool portal::is_two_way() const {
	return ___godot_icall_bool(___mb.mb_is_two_way, (const object *) this);
}

void portal::set_linked_room(const node_path p_room) {
	___godot_icall_void_NodePath(___mb.mb_set_linked_room, (const object *) this, p_room);
}

void portal::set_point(const int64_t index, const vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_point, (const object *) this, index, position);
}

void portal::set_points(const pool_vector2_array points) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_points, (const object *) this, points);
}

void portal::set_portal_active(const bool p_active) {
	___godot_icall_void_bool(___mb.mb_set_portal_active, (const object *) this, p_active);
}

void portal::set_portal_margin(const real_t p_margin) {
	___godot_icall_void_float(___mb.mb_set_portal_margin, (const object *) this, p_margin);
}

void portal::set_two_way(const bool p_two_way) {
	___godot_icall_void_bool(___mb.mb_set_two_way, (const object *) this, p_two_way);
}

void portal::set_use_default_margin(const bool p_use) {
	___godot_icall_void_bool(___mb.mb_set_use_default_margin, (const object *) this, p_use);
}

}