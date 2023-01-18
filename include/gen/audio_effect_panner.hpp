#ifndef GODOT_CPP_AUDIOEFFECTPANNER_HPP
#define GODOT_CPP_AUDIOEFFECTPANNER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_effect.hpp"
namespace gd {


class audio_effect_panner : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_pan;
		godot_method_bind *mb_set_pan;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectPanner"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectPanner"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_effect_panner *_new();

	// methods
	real_t get_pan() const;
	void set_pan(const real_t cpanume);

};

}

#endif