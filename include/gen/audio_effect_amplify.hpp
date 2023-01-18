#ifndef GODOT_CPP_AUDIOEFFECTAMPLIFY_HPP
#define GODOT_CPP_AUDIOEFFECTAMPLIFY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_effect.hpp"
namespace gd {


class audio_effect_amplify : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_volume_db;
		godot_method_bind *mb_set_volume_db;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectAmplify"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectAmplify"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_effect_amplify *_new();

	// methods
	real_t get_volume_db() const;
	void set_volume_db(const real_t volume);

};

}

#endif