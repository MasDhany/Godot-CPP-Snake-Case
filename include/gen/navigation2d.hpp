#ifndef GODOT_CPP_NAVIGATION2D_HPP
#define GODOT_CPP_NAVIGATION2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {


class navigation2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_get_cell_size;
		godot_method_bind *mb_get_closest_point;
		godot_method_bind *mb_get_closest_point_owner;
		godot_method_bind *mb_get_edge_connection_margin;
		godot_method_bind *mb_get_navigation_layers;
		godot_method_bind *mb_get_rid;
		godot_method_bind *mb_get_simple_path;
		godot_method_bind *mb_set_cell_size;
		godot_method_bind *mb_set_edge_connection_margin;
		godot_method_bind *mb_set_navigation_layers;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Navigation2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Navigation2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static navigation2d *_new();

	// methods
	real_t get_cell_size() const;
	vector2 get_closest_point(const vector2 to_point) const;
	rid get_closest_point_owner(const vector2 to_point) const;
	real_t get_edge_connection_margin() const;
	int64_t get_navigation_layers() const;
	rid get_rid() const;
	pool_vector2_array get_simple_path(const vector2 start, const vector2 end, const bool optimize = true) const;
	void set_cell_size(const real_t cell_size);
	void set_edge_connection_margin(const real_t margin);
	void set_navigation_layers(const int64_t navigation_layers);

};

}

#endif