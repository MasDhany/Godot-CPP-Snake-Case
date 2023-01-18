#ifndef GODOT_CPP_PINJOINT_HPP
#define GODOT_CPP_PINJOINT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "joint.hpp"
namespace gd {


class pin_joint : public joint {
	struct ___method_bindings {
		godot_method_bind *mb_get_param;
		godot_method_bind *mb_set_param;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PinJoint"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PinJoint"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Param {
		PARAM_BIAS = 0,
		PARAM_DAMPING = 1,
		PARAM_IMPULSE_CLAMP = 2,
	};

	// constants


	static pin_joint *_new();

	// methods
	real_t get_param(const int64_t param) const;
	void set_param(const int64_t param, const real_t value);

};

}

#endif