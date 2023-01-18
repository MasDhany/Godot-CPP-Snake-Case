#ifndef GODOT_CPP_DAMPEDSPRINGJOINT2D_HPP
#define GODOT_CPP_DAMPEDSPRINGJOINT2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "joint2d.hpp"
namespace gd {


class damped_spring_joint2d : public joint2d {
	struct ___method_bindings {
		godot_method_bind *mb_get_damping;
		godot_method_bind *mb_get_length;
		godot_method_bind *mb_get_rest_length;
		godot_method_bind *mb_get_stiffness;
		godot_method_bind *mb_set_damping;
		godot_method_bind *mb_set_length;
		godot_method_bind *mb_set_rest_length;
		godot_method_bind *mb_set_stiffness;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "DampedSpringJoint2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "DampedSpringJoint2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static damped_spring_joint2d *_new();

	// methods
	real_t get_damping() const;
	real_t get_length() const;
	real_t get_rest_length() const;
	real_t get_stiffness() const;
	void set_damping(const real_t damping);
	void set_length(const real_t length);
	void set_rest_length(const real_t rest_length);
	void set_stiffness(const real_t stiffness);

};

}

#endif