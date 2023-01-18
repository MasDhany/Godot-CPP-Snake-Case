#ifndef GODOT_CPP_OCCLUDERSHAPEPOLYGON_HPP
#define GODOT_CPP_OCCLUDERSHAPEPOLYGON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "occluder_shape.hpp"
namespace gd {


class occluder_shape_polygon : public occluder_shape {
	struct ___method_bindings {
		godot_method_bind *mb_get_hole_points;
		godot_method_bind *mb_get_polygon_points;
		godot_method_bind *mb_is_two_way;
		godot_method_bind *mb_set_hole_point;
		godot_method_bind *mb_set_hole_points;
		godot_method_bind *mb_set_polygon_point;
		godot_method_bind *mb_set_polygon_points;
		godot_method_bind *mb_set_two_way;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "OccluderShapePolygon"; }
	static inline const char *___get_godot_class_name() { return (const char *) "OccluderShapePolygon"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static occluder_shape_polygon *_new();

	// methods
	pool_vector2_array get_hole_points() const;
	pool_vector2_array get_polygon_points() const;
	bool is_two_way() const;
	void set_hole_point(const int64_t index, const vector2 position);
	void set_hole_points(const pool_vector2_array points);
	void set_polygon_point(const int64_t index, const vector2 position);
	void set_polygon_points(const pool_vector2_array points);
	void set_two_way(const bool two_way);

};

}

#endif