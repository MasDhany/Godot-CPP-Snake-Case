#ifndef GODOT_CPP_AUDIOEFFECTSTEREOENHANCE_HPP
#define GODOT_CPP_AUDIOEFFECTSTEREOENHANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_effect.hpp"
namespace gd {


class audio_effect_stereo_enhance : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_pan_pullout;
		godot_method_bind *mb_get_surround;
		godot_method_bind *mb_get_time_pullout;
		godot_method_bind *mb_set_pan_pullout;
		godot_method_bind *mb_set_surround;
		godot_method_bind *mb_set_time_pullout;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectStereoEnhance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectStereoEnhance"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_effect_stereo_enhance *_new();

	// methods
	real_t get_pan_pullout() const;
	real_t get_surround() const;
	real_t get_time_pullout() const;
	void set_pan_pullout(const real_t amount);
	void set_surround(const real_t amount);
	void set_time_pullout(const real_t amount);

};

}

#endif