#ifndef GODOT_CPP_GRADIENTTEXTURE_HPP
#define GODOT_CPP_GRADIENTTEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "texture.hpp"
namespace gd {

class gradient;

class gradient_texture : public texture {
	struct ___method_bindings {
		godot_method_bind *mb__update;
		godot_method_bind *mb_get_gradient;
		godot_method_bind *mb_set_gradient;
		godot_method_bind *mb_set_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GradientTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GradientTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static gradient_texture *_new();

	// methods
	void _update();
	ref<gradient> get_gradient() const;
	void set_gradient(const ref<gradient> gradient_);
	void set_width(const int64_t width);

};

}

#endif