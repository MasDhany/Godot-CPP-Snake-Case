#include "collision_polygon.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


collision_polygon::___method_bindings collision_polygon::___mb = {};

void *collision_polygon::_detail_class_tag = nullptr;

void collision_polygon::___init_method_bindings() {
	___mb.mb__is_editable_3d_polygon = gd::api->godot_method_bind_get_method("CollisionPolygon", "_is_editable_3d_polygon");
	___mb.mb_get_depth = gd::api->godot_method_bind_get_method("CollisionPolygon", "get_depth");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("CollisionPolygon", "get_margin");
	___mb.mb_get_polygon = gd::api->godot_method_bind_get_method("CollisionPolygon", "get_polygon");
	___mb.mb_is_disabled = gd::api->godot_method_bind_get_method("CollisionPolygon", "is_disabled");
	___mb.mb_set_depth = gd::api->godot_method_bind_get_method("CollisionPolygon", "set_depth");
	___mb.mb_set_disabled = gd::api->godot_method_bind_get_method("CollisionPolygon", "set_disabled");
	___mb.mb_set_margin = gd::api->godot_method_bind_get_method("CollisionPolygon", "set_margin");
	___mb.mb_set_polygon = gd::api->godot_method_bind_get_method("CollisionPolygon", "set_polygon");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CollisionPolygon");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

collision_polygon *collision_polygon::_new()
{
	return (collision_polygon *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CollisionPolygon")());
}
bool collision_polygon::_is_editable_3d_polygon() const {
	return ___godot_icall_bool(___mb.mb__is_editable_3d_polygon, (const object *) this);
}

real_t collision_polygon::get_depth() const {
	return ___godot_icall_float(___mb.mb_get_depth, (const object *) this);
}

real_t collision_polygon::get_margin() const {
	return ___godot_icall_float(___mb.mb_get_margin, (const object *) this);
}

pool_vector2_array collision_polygon::get_polygon() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_polygon, (const object *) this);
}

bool collision_polygon::is_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_disabled, (const object *) this);
}

void collision_polygon::set_depth(const real_t depth) {
	___godot_icall_void_float(___mb.mb_set_depth, (const object *) this, depth);
}

void collision_polygon::set_disabled(const bool disabled) {
	___godot_icall_void_bool(___mb.mb_set_disabled, (const object *) this, disabled);
}

void collision_polygon::set_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_margin, (const object *) this, margin);
}

void collision_polygon::set_polygon(const pool_vector2_array polygon) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_polygon, (const object *) this, polygon);
}

}