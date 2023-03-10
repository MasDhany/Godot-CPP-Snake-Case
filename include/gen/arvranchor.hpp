#ifndef GODOT_CPP_ARVRANCHOR_HPP
#define GODOT_CPP_ARVRANCHOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class mesh;

class arvranchor : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_anchor_id;
		godot_method_bind *mb_get_anchor_name;
		godot_method_bind *mb_get_is_active;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_plane;
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_set_anchor_id;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ARVRAnchor"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ARVRAnchor"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static arvranchor *_new();

	// methods
	int64_t get_anchor_id() const;
	string get_anchor_name() const;
	bool get_is_active() const;
	ref<mesh> get_mesh() const;
	plane get_plane() const;
	vector3 get_size() const;
	void set_anchor_id(const int64_t anchor_id);

};

}

#endif