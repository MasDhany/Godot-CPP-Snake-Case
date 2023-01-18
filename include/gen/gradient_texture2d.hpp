#ifndef GODOT_CPP_GRADIENTTEXTURE2D_HPP
#define GODOT_CPP_GRADIENTTEXTURE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "gradient_texture2d.hpp"

#include "texture.hpp"
namespace gd {

class gradient;

class gradient_texture2d : public texture {
	struct ___method_bindings {
		godot_method_bind *mb__queue_update;
		godot_method_bind *mb__update;
		godot_method_bind *mb_get_fill;
		godot_method_bind *mb_get_fill_from;
		godot_method_bind *mb_get_fill_to;
		godot_method_bind *mb_get_gradient;
		godot_method_bind *mb_get_repeat;
		godot_method_bind *mb_is_using_hdr;
		godot_method_bind *mb_set_fill;
		godot_method_bind *mb_set_fill_from;
		godot_method_bind *mb_set_fill_to;
		godot_method_bind *mb_set_gradient;
		godot_method_bind *mb_set_height;
		godot_method_bind *mb_set_repeat;
		godot_method_bind *mb_set_use_hdr;
		godot_method_bind *mb_set_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GradientTexture2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GradientTexture2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Fill {
		FILL_LINEAR = 0,
		FILL_RADIAL = 1,
	};
	enum Repeat {
		REPEAT_NONE = 0,
		REPEAT = 1,
		REPEAT_MIRROR = 2,
	};

	// constants


	static gradient_texture2d *_new();

	// methods
	void _queue_update();
	void _update();
	gradient_texture2d::Fill get_fill() const;
	vector2 get_fill_from() const;
	vector2 get_fill_to() const;
	ref<gradient> get_gradient() const;
	gradient_texture2d::Repeat get_repeat() const;
	bool is_using_hdr() const;
	void set_fill(const int64_t fill);
	void set_fill_from(const vector2 fill_from);
	void set_fill_to(const vector2 fill_to);
	void set_gradient(const ref<gradient> gradient_);
	void set_height(const int64_t height);
	void set_repeat(const int64_t repeat);
	void set_use_hdr(const bool enabled);
	void set_width(const int64_t width);

};

}

#endif