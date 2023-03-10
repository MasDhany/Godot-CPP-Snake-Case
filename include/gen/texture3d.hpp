#ifndef GODOT_CPP_TEXTURE3D_HPP
#define GODOT_CPP_TEXTURE3D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "texture_layered.hpp"
namespace gd {


class texture3d : public texture_layered {
	struct ___method_bindings {
		godot_method_bind *mb_create;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Texture3D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Texture3D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static texture3d *_new();

	// methods
	void create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags = 4);

};

}

#endif