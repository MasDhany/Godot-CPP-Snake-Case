#ifndef GODOT_CPP_PATH_HPP
#define GODOT_CPP_PATH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class curve3d;

class path : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb__curve_changed;
		godot_method_bind *mb_get_curve;
		godot_method_bind *mb_set_curve;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Path"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Path"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static path *_new();

	// methods
	void _curve_changed();
	ref<curve3d> get_curve() const;
	void set_curve(const ref<curve3d> curve_);

};

}

#endif