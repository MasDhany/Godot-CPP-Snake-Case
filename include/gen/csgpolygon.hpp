#ifndef GODOT_CPP_CSGPOLYGON_HPP
#define GODOT_CPP_CSGPOLYGON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "csgpolygon.hpp"

#include "csgprimitive.hpp"
namespace gd {

class material;

class csgpolygon : public csgprimitive {
	struct ___method_bindings {
		godot_method_bind *mb__has_editable_3d_polygon_no_depth;
		godot_method_bind *mb__is_editable_3d_polygon;
		godot_method_bind *mb__path_changed;
		godot_method_bind *mb__path_exited;
		godot_method_bind *mb_get_depth;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_get_path_interval;
		godot_method_bind *mb_get_path_interval_type;
		godot_method_bind *mb_get_path_node;
		godot_method_bind *mb_get_path_rotation;
		godot_method_bind *mb_get_path_simplify_angle;
		godot_method_bind *mb_get_path_u_distance;
		godot_method_bind *mb_get_polygon;
		godot_method_bind *mb_get_smooth_faces;
		godot_method_bind *mb_get_spin_degrees;
		godot_method_bind *mb_get_spin_sides;
		godot_method_bind *mb_is_path_continuous_u;
		godot_method_bind *mb_is_path_joined;
		godot_method_bind *mb_is_path_local;
		godot_method_bind *mb_set_depth;
		godot_method_bind *mb_set_material;
		godot_method_bind *mb_set_mode;
		godot_method_bind *mb_set_path_continuous_u;
		godot_method_bind *mb_set_path_interval;
		godot_method_bind *mb_set_path_interval_type;
		godot_method_bind *mb_set_path_joined;
		godot_method_bind *mb_set_path_local;
		godot_method_bind *mb_set_path_node;
		godot_method_bind *mb_set_path_rotation;
		godot_method_bind *mb_set_path_simplify_angle;
		godot_method_bind *mb_set_path_u_distance;
		godot_method_bind *mb_set_polygon;
		godot_method_bind *mb_set_smooth_faces;
		godot_method_bind *mb_set_spin_degrees;
		godot_method_bind *mb_set_spin_sides;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CSGPolygon"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CSGPolygon"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PathIntervalType {
		PATH_INTERVAL_DISTANCE = 0,
		PATH_INTERVAL_SUBDIVIDE = 1,
	};
	enum PathRotation {
		PATH_ROTATION_POLYGON = 0,
		PATH_ROTATION_PATH = 1,
		PATH_ROTATION_PATH_FOLLOW = 2,
	};
	enum Mode {
		MODE_DEPTH = 0,
		MODE_SPIN = 1,
		MODE_PATH = 2,
	};

	// constants


	static csgpolygon *_new();

	// methods
	bool _has_editable_3d_polygon_no_depth() const;
	bool _is_editable_3d_polygon() const;
	void _path_changed();
	void _path_exited();
	real_t get_depth() const;
	ref<material> get_material() const;
	csgpolygon::Mode get_mode() const;
	real_t get_path_interval() const;
	csgpolygon::PathIntervalType get_path_interval_type() const;
	node_path get_path_node() const;
	csgpolygon::PathRotation get_path_rotation() const;
	real_t get_path_simplify_angle() const;
	real_t get_path_u_distance() const;
	pool_vector2_array get_polygon() const;
	bool get_smooth_faces() const;
	real_t get_spin_degrees() const;
	int64_t get_spin_sides() const;
	bool is_path_continuous_u() const;
	bool is_path_joined() const;
	bool is_path_local() const;
	void set_depth(const real_t depth);
	void set_material(const ref<material> material_);
	void set_mode(const int64_t mode);
	void set_path_continuous_u(const bool enable);
	void set_path_interval(const real_t path_interval);
	void set_path_interval_type(const int64_t interval_type);
	void set_path_joined(const bool enable);
	void set_path_local(const bool enable);
	void set_path_node(const node_path path_);
	void set_path_rotation(const int64_t path_rotation);
	void set_path_simplify_angle(const real_t degrees);
	void set_path_u_distance(const real_t distance);
	void set_polygon(const pool_vector2_array polygon);
	void set_smooth_faces(const bool smooth_faces);
	void set_spin_degrees(const real_t degrees);
	void set_spin_sides(const int64_t spin_sides);

};

}

#endif