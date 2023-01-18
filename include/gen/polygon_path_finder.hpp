#ifndef GODOT_CPP_POLYGONPATHFINDER_HPP
#define GODOT_CPP_POLYGONPATHFINDER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class polygon_path_finder : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_data;
		godot_method_bind *mb__set_data;
		godot_method_bind *mb_find_path;
		godot_method_bind *mb_get_bounds;
		godot_method_bind *mb_get_closest_point;
		godot_method_bind *mb_get_intersections;
		godot_method_bind *mb_get_point_penalty;
		godot_method_bind *mb_is_point_inside;
		godot_method_bind *mb_set_point_penalty;
		godot_method_bind *mb_setup;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PolygonPathFinder"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PolygonPathFinder"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static polygon_path_finder *_new();

	// methods
	dictionary _get_data() const;
	void _set_data(const dictionary arg0);
	pool_vector2_array find_path(const vector2 from, const vector2 to);
	rect2 get_bounds() const;
	vector2 get_closest_point(const vector2 point) const;
	pool_vector2_array get_intersections(const vector2 from, const vector2 to) const;
	real_t get_point_penalty(const int64_t idx) const;
	bool is_point_inside(const vector2 point) const;
	void set_point_penalty(const int64_t idx, const real_t penalty);
	void setup(const pool_vector2_array points, const pool_int_array connections);

};

}

#endif