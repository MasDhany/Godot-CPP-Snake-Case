#ifndef GODOT_CPP_NAVIGATIONPOLYGON_HPP
#define GODOT_CPP_NAVIGATIONPOLYGON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class navigation_mesh;

class navigation_polygon : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_outlines;
		godot_method_bind *mb__get_polygons;
		godot_method_bind *mb__set_outlines;
		godot_method_bind *mb__set_polygons;
		godot_method_bind *mb_add_outline;
		godot_method_bind *mb_add_outline_at_index;
		godot_method_bind *mb_add_polygon;
		godot_method_bind *mb_clear_outlines;
		godot_method_bind *mb_clear_polygons;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_outline;
		godot_method_bind *mb_get_outline_count;
		godot_method_bind *mb_get_polygon;
		godot_method_bind *mb_get_polygon_count;
		godot_method_bind *mb_get_vertices;
		godot_method_bind *mb_make_polygons_from_outlines;
		godot_method_bind *mb_remove_outline;
		godot_method_bind *mb_set_outline;
		godot_method_bind *mb_set_vertices;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NavigationPolygon"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NavigationPolygon"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static navigation_polygon *_new();

	// methods
	array _get_outlines() const;
	array _get_polygons() const;
	void _set_outlines(const array outlines);
	void _set_polygons(const array polygons);
	void add_outline(const pool_vector2_array outline);
	void add_outline_at_index(const pool_vector2_array outline, const int64_t index);
	void add_polygon(const pool_int_array polygon);
	void clear_outlines();
	void clear_polygons();
	ref<navigation_mesh> get_mesh();
	pool_vector2_array get_outline(const int64_t idx) const;
	int64_t get_outline_count() const;
	pool_int_array get_polygon(const int64_t idx);
	int64_t get_polygon_count() const;
	pool_vector2_array get_vertices() const;
	void make_polygons_from_outlines();
	void remove_outline(const int64_t idx);
	void set_outline(const int64_t idx, const pool_vector2_array outline);
	void set_vertices(const pool_vector2_array vertices);

};

}

#endif