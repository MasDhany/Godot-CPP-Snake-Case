#ifndef GODOT_CPP_NAVIGATION_HPP
#define GODOT_CPP_NAVIGATION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {


class navigation : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_cell_height;
		godot_method_bind *mb_get_cell_size;
		godot_method_bind *mb_get_closest_point;
		godot_method_bind *mb_get_closest_point_normal;
		godot_method_bind *mb_get_closest_point_owner;
		godot_method_bind *mb_get_closest_point_to_segment;
		godot_method_bind *mb_get_edge_connection_margin;
		godot_method_bind *mb_get_navigation_layers;
		godot_method_bind *mb_get_rid;
		godot_method_bind *mb_get_simple_path;
		godot_method_bind *mb_get_up_vector;
		godot_method_bind *mb_set_cell_height;
		godot_method_bind *mb_set_cell_size;
		godot_method_bind *mb_set_edge_connection_margin;
		godot_method_bind *mb_set_navigation_layers;
		godot_method_bind *mb_set_up_vector;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Navigation"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Navigation"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static navigation *_new();

	// methods
	real_t get_cell_height() const;
	real_t get_cell_size() const;
	vector3 get_closest_point(const vector3 to_point) const;
	vector3 get_closest_point_normal(const vector3 to_point) const;
	rid get_closest_point_owner(const vector3 to_point) const;
	vector3 get_closest_point_to_segment(const vector3 start, const vector3 end, const bool use_collision = false) const;
	real_t get_edge_connection_margin() const;
	int64_t get_navigation_layers() const;
	rid get_rid() const;
	pool_vector3_array get_simple_path(const vector3 start, const vector3 end, const bool optimize = true) const;
	vector3 get_up_vector() const;
	void set_cell_height(const real_t cell_height);
	void set_cell_size(const real_t cell_size);
	void set_edge_connection_margin(const real_t margin);
	void set_navigation_layers(const int64_t navigation_layers);
	void set_up_vector(const vector3 up);

};

}

#endif