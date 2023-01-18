#ifndef GODOT_CPP_ASTAR2D_HPP
#define GODOT_CPP_ASTAR2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class astar2d : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__compute_cost;
		godot_method_bind *mb__estimate_cost;
		godot_method_bind *mb_add_point;
		godot_method_bind *mb_are_points_connected;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_connect_points;
		godot_method_bind *mb_disconnect_points;
		godot_method_bind *mb_get_available_point_id;
		godot_method_bind *mb_get_closest_point;
		godot_method_bind *mb_get_closest_position_in_segment;
		godot_method_bind *mb_get_id_path;
		godot_method_bind *mb_get_point_capacity;
		godot_method_bind *mb_get_point_connections;
		godot_method_bind *mb_get_point_count;
		godot_method_bind *mb_get_point_path;
		godot_method_bind *mb_get_point_position;
		godot_method_bind *mb_get_point_weight_scale;
		godot_method_bind *mb_get_points;
		godot_method_bind *mb_has_point;
		godot_method_bind *mb_is_point_disabled;
		godot_method_bind *mb_remove_point;
		godot_method_bind *mb_reserve_space;
		godot_method_bind *mb_set_point_disabled;
		godot_method_bind *mb_set_point_position;
		godot_method_bind *mb_set_point_weight_scale;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AStar2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AStar2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static astar2d *_new();

	// methods
	real_t _compute_cost(const int64_t from_id, const int64_t to_id);
	real_t _estimate_cost(const int64_t from_id, const int64_t to_id);
	void add_point(const int64_t id, const vector2 position, const real_t weight_scale = 1);
	bool are_points_connected(const int64_t id, const int64_t to_id, const bool bidirectional = true) const;
	void clear();
	void connect_points(const int64_t id, const int64_t to_id, const bool bidirectional = true);
	void disconnect_points(const int64_t id, const int64_t to_id, const bool bidirectional = true);
	int64_t get_available_point_id() const;
	int64_t get_closest_point(const vector2 to_position, const bool include_disabled = false) const;
	vector2 get_closest_position_in_segment(const vector2 to_position) const;
	pool_int_array get_id_path(const int64_t from_id, const int64_t to_id);
	int64_t get_point_capacity() const;
	pool_int_array get_point_connections(const int64_t id);
	int64_t get_point_count() const;
	pool_vector2_array get_point_path(const int64_t from_id, const int64_t to_id);
	vector2 get_point_position(const int64_t id) const;
	real_t get_point_weight_scale(const int64_t id) const;
	array get_points();
	bool has_point(const int64_t id) const;
	bool is_point_disabled(const int64_t id) const;
	void remove_point(const int64_t id);
	void reserve_space(const int64_t num_nodes);
	void set_point_disabled(const int64_t id, const bool disabled = true);
	void set_point_position(const int64_t id, const vector2 position);
	void set_point_weight_scale(const int64_t id, const real_t weight_scale);

};

}

#endif