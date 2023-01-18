#ifndef GODOT_CPP_PHYSICSDIRECTSPACESTATE_HPP
#define GODOT_CPP_PHYSICSDIRECTSPACESTATE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class physics_shape_query_parameters;

class physics_direct_space_state : public object {
	struct ___method_bindings {
		godot_method_bind *mb_cast_motion;
		godot_method_bind *mb_collide_shape;
		godot_method_bind *mb_get_rest_info;
		godot_method_bind *mb_intersect_point;
		godot_method_bind *mb_intersect_ray;
		godot_method_bind *mb_intersect_shape;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PhysicsDirectSpaceState"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PhysicsDirectSpaceState"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	array cast_motion(const ref<physics_shape_query_parameters> shape_, const vector3 motion);
	array collide_shape(const ref<physics_shape_query_parameters> shape_, const int64_t max_results = 32);
	dictionary get_rest_info(const ref<physics_shape_query_parameters> shape_);
	array intersect_point(const vector3 point, const int64_t max_results = 32, const array exclude = array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
	dictionary intersect_ray(const vector3 from, const vector3 to, const array exclude = array(), const int64_t collision_mask = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
	array intersect_shape(const ref<physics_shape_query_parameters> shape_, const int64_t max_results = 32);

};

}

#endif