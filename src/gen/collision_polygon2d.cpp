#include "collision_polygon2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


collision_polygon2d::___method_bindings collision_polygon2d::___mb = {};

void *collision_polygon2d::_detail_class_tag = nullptr;

void collision_polygon2d::___init_method_bindings() {
	___mb.mb_get_build_mode = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "get_build_mode");
	___mb.mb_get_one_way_collision_margin = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "get_one_way_collision_margin");
	___mb.mb_get_polygon = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "get_polygon");
	___mb.mb_is_disabled = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "is_disabled");
	___mb.mb_is_one_way_collision_enabled = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "is_one_way_collision_enabled");
	___mb.mb_set_build_mode = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "set_build_mode");
	___mb.mb_set_disabled = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "set_disabled");
	___mb.mb_set_one_way_collision = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "set_one_way_collision");
	___mb.mb_set_one_way_collision_margin = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "set_one_way_collision_margin");
	___mb.mb_set_polygon = gd::api->godot_method_bind_get_method("CollisionPolygon2D", "set_polygon");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CollisionPolygon2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

collision_polygon2d *collision_polygon2d::_new()
{
	return (collision_polygon2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CollisionPolygon2D")());
}
collision_polygon2d::BuildMode collision_polygon2d::get_build_mode() const {
	return (collision_polygon2d::BuildMode) ___godot_icall_int(___mb.mb_get_build_mode, (const object *) this);
}

real_t collision_polygon2d::get_one_way_collision_margin() const {
	return ___godot_icall_float(___mb.mb_get_one_way_collision_margin, (const object *) this);
}

pool_vector2_array collision_polygon2d::get_polygon() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_polygon, (const object *) this);
}

bool collision_polygon2d::is_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_disabled, (const object *) this);
}

bool collision_polygon2d::is_one_way_collision_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_one_way_collision_enabled, (const object *) this);
}

void collision_polygon2d::set_build_mode(const int64_t build_mode) {
	___godot_icall_void_int(___mb.mb_set_build_mode, (const object *) this, build_mode);
}

void collision_polygon2d::set_disabled(const bool disabled) {
	___godot_icall_void_bool(___mb.mb_set_disabled, (const object *) this, disabled);
}

void collision_polygon2d::set_one_way_collision(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_one_way_collision, (const object *) this, enabled);
}

void collision_polygon2d::set_one_way_collision_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_one_way_collision_margin, (const object *) this, margin);
}

void collision_polygon2d::set_polygon(const pool_vector2_array polygon) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_polygon, (const object *) this, polygon);
}

}