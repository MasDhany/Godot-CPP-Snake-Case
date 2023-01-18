#include "kinematic_collision.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


kinematic_collision::___method_bindings kinematic_collision::___mb = {};

void *kinematic_collision::_detail_class_tag = nullptr;

void kinematic_collision::___init_method_bindings() {
	___mb.mb_get_angle = gd::api->godot_method_bind_get_method("KinematicCollision", "get_angle");
	___mb.mb_get_collider = gd::api->godot_method_bind_get_method("KinematicCollision", "get_collider");
	___mb.mb_get_collider_id = gd::api->godot_method_bind_get_method("KinematicCollision", "get_collider_id");
	___mb.mb_get_collider_metadata = gd::api->godot_method_bind_get_method("KinematicCollision", "get_collider_metadata");
	___mb.mb_get_collider_rid = gd::api->godot_method_bind_get_method("KinematicCollision", "get_collider_rid");
	___mb.mb_get_collider_shape = gd::api->godot_method_bind_get_method("KinematicCollision", "get_collider_shape");
	___mb.mb_get_collider_shape_index = gd::api->godot_method_bind_get_method("KinematicCollision", "get_collider_shape_index");
	___mb.mb_get_collider_velocity = gd::api->godot_method_bind_get_method("KinematicCollision", "get_collider_velocity");
	___mb.mb_get_local_shape = gd::api->godot_method_bind_get_method("KinematicCollision", "get_local_shape");
	___mb.mb_get_normal = gd::api->godot_method_bind_get_method("KinematicCollision", "get_normal");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("KinematicCollision", "get_position");
	___mb.mb_get_remainder = gd::api->godot_method_bind_get_method("KinematicCollision", "get_remainder");
	___mb.mb_get_travel = gd::api->godot_method_bind_get_method("KinematicCollision", "get_travel");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "KinematicCollision");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

kinematic_collision *kinematic_collision::_new()
{
	return (kinematic_collision *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"KinematicCollision")());
}
real_t kinematic_collision::get_angle(const vector3 up_direction) const {
	return ___godot_icall_float_Vector3(___mb.mb_get_angle, (const object *) this, up_direction);
}

object *kinematic_collision::get_collider() const {
	return (object *) ___godot_icall_Object(___mb.mb_get_collider, (const object *) this);
}

int64_t kinematic_collision::get_collider_id() const {
	return ___godot_icall_int(___mb.mb_get_collider_id, (const object *) this);
}

variant kinematic_collision::get_collider_metadata() const {
	return ___godot_icall_Variant(___mb.mb_get_collider_metadata, (const object *) this);
}

rid kinematic_collision::get_collider_rid() const {
	return ___godot_icall_RID(___mb.mb_get_collider_rid, (const object *) this);
}

object *kinematic_collision::get_collider_shape() const {
	return (object *) ___godot_icall_Object(___mb.mb_get_collider_shape, (const object *) this);
}

int64_t kinematic_collision::get_collider_shape_index() const {
	return ___godot_icall_int(___mb.mb_get_collider_shape_index, (const object *) this);
}

vector3 kinematic_collision::get_collider_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_collider_velocity, (const object *) this);
}

object *kinematic_collision::get_local_shape() const {
	return (object *) ___godot_icall_Object(___mb.mb_get_local_shape, (const object *) this);
}

vector3 kinematic_collision::get_normal() const {
	return ___godot_icall_Vector3(___mb.mb_get_normal, (const object *) this);
}

vector3 kinematic_collision::get_position() const {
	return ___godot_icall_Vector3(___mb.mb_get_position, (const object *) this);
}

vector3 kinematic_collision::get_remainder() const {
	return ___godot_icall_Vector3(___mb.mb_get_remainder, (const object *) this);
}

vector3 kinematic_collision::get_travel() const {
	return ___godot_icall_Vector3(___mb.mb_get_travel, (const object *) this);
}

}