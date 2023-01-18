#ifndef GODOT_CPP_COLLISIONPOLYGON2D_HPP
#define GODOT_CPP_COLLISIONPOLYGON2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "collision_polygon2d.hpp"

#include "node2d.hpp"
namespace gd {


class collision_polygon2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_get_build_mode;
		godot_method_bind *mb_get_one_way_collision_margin;
		godot_method_bind *mb_get_polygon;
		godot_method_bind *mb_is_disabled;
		godot_method_bind *mb_is_one_way_collision_enabled;
		godot_method_bind *mb_set_build_mode;
		godot_method_bind *mb_set_disabled;
		godot_method_bind *mb_set_one_way_collision;
		godot_method_bind *mb_set_one_way_collision_margin;
		godot_method_bind *mb_set_polygon;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CollisionPolygon2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CollisionPolygon2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum BuildMode {
		BUILD_SOLIDS = 0,
		BUILD_SEGMENTS = 1,
	};

	// constants


	static collision_polygon2d *_new();

	// methods
	collision_polygon2d::BuildMode get_build_mode() const;
	real_t get_one_way_collision_margin() const;
	pool_vector2_array get_polygon() const;
	bool is_disabled() const;
	bool is_one_way_collision_enabled() const;
	void set_build_mode(const int64_t build_mode);
	void set_disabled(const bool disabled);
	void set_one_way_collision(const bool enabled);
	void set_one_way_collision_margin(const real_t margin);
	void set_polygon(const pool_vector2_array polygon);

};

}

#endif