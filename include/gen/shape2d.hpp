#ifndef GODOT_CPP_SHAPE2D_HPP
#define GODOT_CPP_SHAPE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class shape2d;

class shape2d : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_collide;
		godot_method_bind *mb_collide_and_get_contacts;
		godot_method_bind *mb_collide_with_motion;
		godot_method_bind *mb_collide_with_motion_and_get_contacts;
		godot_method_bind *mb_draw;
		godot_method_bind *mb_get_custom_solver_bias;
		godot_method_bind *mb_set_custom_solver_bias;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Shape2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Shape2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool collide(const transform2d local_xform, const ref<shape2d> with_shape, const transform2d shape_xform);
	array collide_and_get_contacts(const transform2d local_xform, const ref<shape2d> with_shape, const transform2d shape_xform);
	bool collide_with_motion(const transform2d local_xform, const vector2 local_motion, const ref<shape2d> with_shape, const transform2d shape_xform, const vector2 shape_motion);
	array collide_with_motion_and_get_contacts(const transform2d local_xform, const vector2 local_motion, const ref<shape2d> with_shape, const transform2d shape_xform, const vector2 shape_motion);
	void draw(const rid canvas_item_, const color color_);
	real_t get_custom_solver_bias() const;
	void set_custom_solver_bias(const real_t bias);

};

}

#endif