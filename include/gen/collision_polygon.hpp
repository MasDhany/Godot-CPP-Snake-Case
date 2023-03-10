#ifndef GODOT_CPP_COLLISIONPOLYGON_HPP
#define GODOT_CPP_COLLISIONPOLYGON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {


class collision_polygon : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb__is_editable_3d_polygon;
		godot_method_bind *mb_get_depth;
		godot_method_bind *mb_get_margin;
		godot_method_bind *mb_get_polygon;
		godot_method_bind *mb_is_disabled;
		godot_method_bind *mb_set_depth;
		godot_method_bind *mb_set_disabled;
		godot_method_bind *mb_set_margin;
		godot_method_bind *mb_set_polygon;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CollisionPolygon"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CollisionPolygon"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static collision_polygon *_new();

	// methods
	bool _is_editable_3d_polygon() const;
	real_t get_depth() const;
	real_t get_margin() const;
	pool_vector2_array get_polygon() const;
	bool is_disabled() const;
	void set_depth(const real_t depth);
	void set_disabled(const bool disabled);
	void set_margin(const real_t margin);
	void set_polygon(const pool_vector2_array polygon);

};

}

#endif