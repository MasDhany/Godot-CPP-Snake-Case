#ifndef GODOT_CPP_COLLISIONSHAPE_HPP
#define GODOT_CPP_COLLISIONSHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class resource;
class shape;

class collision_shape : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_shape;
		godot_method_bind *mb_is_disabled;
		godot_method_bind *mb_make_convex_from_brothers;
		godot_method_bind *mb_resource_changed;
		godot_method_bind *mb_set_disabled;
		godot_method_bind *mb_set_shape;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CollisionShape"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CollisionShape"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static collision_shape *_new();

	// methods
	ref<shape> get_shape() const;
	bool is_disabled() const;
	void make_convex_from_brothers();
	void resource_changed(const ref<resource> resource_);
	void set_disabled(const bool enable);
	void set_shape(const ref<shape> shape_);

};

}

#endif