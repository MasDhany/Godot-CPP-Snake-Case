#ifndef GODOT_CPP_SPRINGARM_HPP
#define GODOT_CPP_SPRINGARM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class shape;

class spring_arm : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_add_excluded_object;
		godot_method_bind *mb_clear_excluded_objects;
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_hit_length;
		godot_method_bind *mb_get_length;
		godot_method_bind *mb_get_margin;
		godot_method_bind *mb_get_shape;
		godot_method_bind *mb_remove_excluded_object;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_length;
		godot_method_bind *mb_set_margin;
		godot_method_bind *mb_set_shape;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SpringArm"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SpringArm"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static spring_arm *_new();

	// methods
	void add_excluded_object(const rid rid);
	void clear_excluded_objects();
	int64_t get_collision_mask();
	real_t get_hit_length();
	real_t get_length() const;
	real_t get_margin();
	ref<shape> get_shape() const;
	bool remove_excluded_object(const rid rid);
	void set_collision_mask(const int64_t mask);
	void set_length(const real_t length);
	void set_margin(const real_t margin);
	void set_shape(const ref<shape> shape_);

};

}

#endif