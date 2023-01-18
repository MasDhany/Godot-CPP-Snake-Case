#ifndef GODOT_CPP_CSGTORUS_HPP
#define GODOT_CPP_CSGTORUS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "csgprimitive.hpp"
namespace gd {

class material;

class csgtorus : public csgprimitive {
	struct ___method_bindings {
		godot_method_bind *mb_get_inner_radius;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_outer_radius;
		godot_method_bind *mb_get_ring_sides;
		godot_method_bind *mb_get_sides;
		godot_method_bind *mb_get_smooth_faces;
		godot_method_bind *mb_set_inner_radius;
		godot_method_bind *mb_set_material;
		godot_method_bind *mb_set_outer_radius;
		godot_method_bind *mb_set_ring_sides;
		godot_method_bind *mb_set_sides;
		godot_method_bind *mb_set_smooth_faces;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CSGTorus"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CSGTorus"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static csgtorus *_new();

	// methods
	real_t get_inner_radius() const;
	ref<material> get_material() const;
	real_t get_outer_radius() const;
	int64_t get_ring_sides() const;
	int64_t get_sides() const;
	bool get_smooth_faces() const;
	void set_inner_radius(const real_t radius);
	void set_material(const ref<material> material_);
	void set_outer_radius(const real_t radius);
	void set_ring_sides(const int64_t sides);
	void set_sides(const int64_t sides);
	void set_smooth_faces(const bool smooth_faces);

};

}

#endif