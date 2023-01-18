#include "physics_direct_space_state.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "physics_shape_query_parameters.hpp"


namespace gd {


physics_direct_space_state::___method_bindings physics_direct_space_state::___mb = {};

void *physics_direct_space_state::_detail_class_tag = nullptr;

void physics_direct_space_state::___init_method_bindings() {
	___mb.mb_cast_motion = gd::api->godot_method_bind_get_method("PhysicsDirectSpaceState", "cast_motion");
	___mb.mb_collide_shape = gd::api->godot_method_bind_get_method("PhysicsDirectSpaceState", "collide_shape");
	___mb.mb_get_rest_info = gd::api->godot_method_bind_get_method("PhysicsDirectSpaceState", "get_rest_info");
	___mb.mb_intersect_point = gd::api->godot_method_bind_get_method("PhysicsDirectSpaceState", "intersect_point");
	___mb.mb_intersect_ray = gd::api->godot_method_bind_get_method("PhysicsDirectSpaceState", "intersect_ray");
	___mb.mb_intersect_shape = gd::api->godot_method_bind_get_method("PhysicsDirectSpaceState", "intersect_shape");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicsDirectSpaceState");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array physics_direct_space_state::cast_motion(const ref<physics_shape_query_parameters> shape_, const vector3 motion) {
	return ___godot_icall_Array_Object_Vector3(___mb.mb_cast_motion, (const object *) this, shape_.ptr(), motion);
}

array physics_direct_space_state::collide_shape(const ref<physics_shape_query_parameters> shape_, const int64_t max_results) {
	return ___godot_icall_Array_Object_int(___mb.mb_collide_shape, (const object *) this, shape_.ptr(), max_results);
}

dictionary physics_direct_space_state::get_rest_info(const ref<physics_shape_query_parameters> shape_) {
	return ___godot_icall_Dictionary_Object(___mb.mb_get_rest_info, (const object *) this, shape_.ptr());
}

array physics_direct_space_state::intersect_point(const vector3 point, const int64_t max_results, const array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
	return ___godot_icall_Array_Vector3_int_Array_int_bool_bool(___mb.mb_intersect_point, (const object *) this, point, max_results, exclude, collision_layer, collide_with_bodies, collide_with_areas);
}

dictionary physics_direct_space_state::intersect_ray(const vector3 from, const vector3 to, const array exclude, const int64_t collision_mask, const bool collide_with_bodies, const bool collide_with_areas) {
	return ___godot_icall_Dictionary_Vector3_Vector3_Array_int_bool_bool(___mb.mb_intersect_ray, (const object *) this, from, to, exclude, collision_mask, collide_with_bodies, collide_with_areas);
}

array physics_direct_space_state::intersect_shape(const ref<physics_shape_query_parameters> shape_, const int64_t max_results) {
	return ___godot_icall_Array_Object_int(___mb.mb_intersect_shape, (const object *) this, shape_.ptr(), max_results);
}

}