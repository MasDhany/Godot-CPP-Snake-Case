#include "physics2_dtest_motion_result.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


physics2_dtest_motion_result::___method_bindings physics2_dtest_motion_result::___mb = {};

void *physics2_dtest_motion_result::_detail_class_tag = nullptr;

void physics2_dtest_motion_result::___init_method_bindings() {
	___mb.mb_get_collider = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collider");
	___mb.mb_get_collider_id = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collider_id");
	___mb.mb_get_collider_rid = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collider_rid");
	___mb.mb_get_collider_shape = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collider_shape");
	___mb.mb_get_collider_velocity = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collider_velocity");
	___mb.mb_get_collision_depth = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collision_depth");
	___mb.mb_get_collision_normal = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collision_normal");
	___mb.mb_get_collision_point = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collision_point");
	___mb.mb_get_collision_safe_fraction = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collision_safe_fraction");
	___mb.mb_get_collision_unsafe_fraction = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_collision_unsafe_fraction");
	___mb.mb_get_motion = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_motion");
	___mb.mb_get_motion_remainder = gd::api->godot_method_bind_get_method("Physics2DTestMotionResult", "get_motion_remainder");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Physics2DTestMotionResult");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

physics2_dtest_motion_result *physics2_dtest_motion_result::_new()
{
	return (physics2_dtest_motion_result *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Physics2DTestMotionResult")());
}
object *physics2_dtest_motion_result::get_collider() const {
	return (object *) ___godot_icall_Object(___mb.mb_get_collider, (const object *) this);
}

int64_t physics2_dtest_motion_result::get_collider_id() const {
	return ___godot_icall_int(___mb.mb_get_collider_id, (const object *) this);
}

rid physics2_dtest_motion_result::get_collider_rid() const {
	return ___godot_icall_RID(___mb.mb_get_collider_rid, (const object *) this);
}

int64_t physics2_dtest_motion_result::get_collider_shape() const {
	return ___godot_icall_int(___mb.mb_get_collider_shape, (const object *) this);
}

vector2 physics2_dtest_motion_result::get_collider_velocity() const {
	return ___godot_icall_Vector2(___mb.mb_get_collider_velocity, (const object *) this);
}

real_t physics2_dtest_motion_result::get_collision_depth() const {
	return ___godot_icall_float(___mb.mb_get_collision_depth, (const object *) this);
}

vector2 physics2_dtest_motion_result::get_collision_normal() const {
	return ___godot_icall_Vector2(___mb.mb_get_collision_normal, (const object *) this);
}

vector2 physics2_dtest_motion_result::get_collision_point() const {
	return ___godot_icall_Vector2(___mb.mb_get_collision_point, (const object *) this);
}

real_t physics2_dtest_motion_result::get_collision_safe_fraction() const {
	return ___godot_icall_float(___mb.mb_get_collision_safe_fraction, (const object *) this);
}

real_t physics2_dtest_motion_result::get_collision_unsafe_fraction() const {
	return ___godot_icall_float(___mb.mb_get_collision_unsafe_fraction, (const object *) this);
}

vector2 physics2_dtest_motion_result::get_motion() const {
	return ___godot_icall_Vector2(___mb.mb_get_motion, (const object *) this);
}

vector2 physics2_dtest_motion_result::get_motion_remainder() const {
	return ___godot_icall_Vector2(___mb.mb_get_motion_remainder, (const object *) this);
}

}