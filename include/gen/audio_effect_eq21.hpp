#ifndef GODOT_CPP_AUDIOEFFECTEQ21_HPP
#define GODOT_CPP_AUDIOEFFECTEQ21_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_effect_eq.hpp"
namespace gd {


class audio_effect_eq21 : public audio_effect_eq {
	struct ___method_bindings {
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectEQ21"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectEQ21"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_effect_eq21 *_new();

	// methods

};

}

#endif