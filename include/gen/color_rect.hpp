#ifndef GODOT_CPP_COLORRECT_HPP
#define GODOT_CPP_COLORRECT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "control.hpp"
namespace gd {


class color_rect : public control {
	struct ___method_bindings {
		godot_method_bind *mb_get_frame_color;
		godot_method_bind *mb_set_frame_color;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ColorRect"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ColorRect"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static color_rect *_new();

	// methods
	color get_frame_color() const;
	void set_frame_color(const color color_);

};

}

#endif