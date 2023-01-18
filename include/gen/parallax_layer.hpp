#ifndef GODOT_CPP_PARALLAXLAYER_HPP
#define GODOT_CPP_PARALLAXLAYER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {


class parallax_layer : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_get_mirroring;
		godot_method_bind *mb_get_motion_offset;
		godot_method_bind *mb_get_motion_scale;
		godot_method_bind *mb_set_mirroring;
		godot_method_bind *mb_set_motion_offset;
		godot_method_bind *mb_set_motion_scale;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ParallaxLayer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ParallaxLayer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static parallax_layer *_new();

	// methods
	vector2 get_mirroring() const;
	vector2 get_motion_offset() const;
	vector2 get_motion_scale() const;
	void set_mirroring(const vector2 mirror);
	void set_motion_offset(const vector2 offset);
	void set_motion_scale(const vector2 scale);

};

}

#endif