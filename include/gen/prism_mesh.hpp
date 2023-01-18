#ifndef GODOT_CPP_PRISMMESH_HPP
#define GODOT_CPP_PRISMMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "primitive_mesh.hpp"
namespace gd {


class prism_mesh : public primitive_mesh {
	struct ___method_bindings {
		godot_method_bind *mb_get_left_to_right;
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_get_subdivide_depth;
		godot_method_bind *mb_get_subdivide_height;
		godot_method_bind *mb_get_subdivide_width;
		godot_method_bind *mb_set_left_to_right;
		godot_method_bind *mb_set_size;
		godot_method_bind *mb_set_subdivide_depth;
		godot_method_bind *mb_set_subdivide_height;
		godot_method_bind *mb_set_subdivide_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PrismMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PrismMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static prism_mesh *_new();

	// methods
	real_t get_left_to_right() const;
	vector3 get_size() const;
	int64_t get_subdivide_depth() const;
	int64_t get_subdivide_height() const;
	int64_t get_subdivide_width() const;
	void set_left_to_right(const real_t left_to_right);
	void set_size(const vector3 size);
	void set_subdivide_depth(const int64_t segments);
	void set_subdivide_height(const int64_t segments);
	void set_subdivide_width(const int64_t segments);

};

}

#endif