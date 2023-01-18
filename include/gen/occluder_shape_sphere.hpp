#ifndef GODOT_CPP_OCCLUDERSHAPESPHERE_HPP
#define GODOT_CPP_OCCLUDERSHAPESPHERE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "occluder_shape.hpp"
namespace gd {


class occluder_shape_sphere : public occluder_shape {
	struct ___method_bindings {
		godot_method_bind *mb_get_spheres;
		godot_method_bind *mb_set_sphere_position;
		godot_method_bind *mb_set_sphere_radius;
		godot_method_bind *mb_set_spheres;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "OccluderShapeSphere"; }
	static inline const char *___get_godot_class_name() { return (const char *) "OccluderShapeSphere"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static occluder_shape_sphere *_new();

	// methods
	array get_spheres() const;
	void set_sphere_position(const int64_t index, const vector3 position);
	void set_sphere_radius(const int64_t index, const real_t radius);
	void set_spheres(const array spheres);

};

}

#endif