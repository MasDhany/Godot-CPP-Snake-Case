#include "physics2_ddirect_space_state.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "physics2_dshape_query_parameters.hpp"


namespace gd {


physics2_ddirect_space_state::___method_bindings physics2_ddirect_space_state::___mb = {};

void *physics2_ddirect_space_state::_detail_class_tag = nullptr;

void physics2_ddirect_space_state::___init_method_bindings() {
	___mb.mb_cast_motion = gd::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "cast_motion");
	___mb.mb_collide_shape = gd::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "collide_shape");
	___mb.mb_get_rest_info = gd::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "get_rest_info");
	___mb.mb_intersect_point = gd::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_point");
	___mb.mb_intersect_point_on_canvas = gd::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_point_on_canvas");
	___mb.mb_intersect_ray = gd::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_ray");
	___mb.mb_intersect_shape = gd::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_shape");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Physics2DDirectSpaceState");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array physics2_ddirect_space_state::cast_motion(const ref<physics2_dshape_query_parameters> shape_) {
	return ___godot_icall_Array_Object(___mb.mb_cast_motion, (const object *) this, shape_.ptr());
}

array physics2_ddirect_space_state::collide_shape(const ref<physics2_dshape_query_parameters> shape_, const int64_t max_results) {
	return ___godot_icall_Array_Object_int(___mb.mb_collide_shape, (const object *) this, shape_.ptr(), max_results);
}

dictionary physics2_ddirect_space_state::get_rest_info(const ref<physics2_dshape_query_parameters> shape_) {
	return ___godot_icall_Dictionary_Object(___mb.mb_get_rest_info, (const object *) this, shape_.ptr());
}

array physics2_ddirect_space_state::intersect_point(const vector2 point, const int64_t max_results, const array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
	return ___godot_icall_Array_Vector2_int_Array_int_bool_bool(___mb.mb_intersect_point, (const object *) this, point, max_results, exclude, collision_layer, collide_with_bodies, collide_with_areas);
}

array physics2_ddirect_space_state::intersect_point_on_canvas(const vector2 point, const int64_t canvas_instance_id, const int64_t max_results, const array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
	return ___godot_icall_Array_Vector2_int_int_Array_int_bool_bool(___mb.mb_intersect_point_on_canvas, (const object *) this, point, canvas_instance_id, max_results, exclude, collision_layer, collide_with_bodies, collide_with_areas);
}

dictionary physics2_ddirect_space_state::intersect_ray(const vector2 from, const vector2 to, const array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
	return ___godot_icall_Dictionary_Vector2_Vector2_Array_int_bool_bool(___mb.mb_intersect_ray, (const object *) this, from, to, exclude, collision_layer, collide_with_bodies, collide_with_areas);
}

array physics2_ddirect_space_state::intersect_shape(const ref<physics2_dshape_query_parameters> shape_, const int64_t max_results) {
	return ___godot_icall_Array_Object_int(___mb.mb_intersect_shape, (const object *) this, shape_.ptr(), max_results);
}

}