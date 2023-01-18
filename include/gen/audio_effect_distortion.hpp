#ifndef GODOT_CPP_AUDIOEFFECTDISTORTION_HPP
#define GODOT_CPP_AUDIOEFFECTDISTORTION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "audio_effect_distortion.hpp"

#include "audio_effect.hpp"
namespace gd {


class audio_effect_distortion : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_drive;
		godot_method_bind *mb_get_keep_hf_hz;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_get_post_gain;
		godot_method_bind *mb_get_pre_gain;
		godot_method_bind *mb_set_drive;
		godot_method_bind *mb_set_keep_hf_hz;
		godot_method_bind *mb_set_mode;
		godot_method_bind *mb_set_post_gain;
		godot_method_bind *mb_set_pre_gain;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectDistortion"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectDistortion"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_CLIP = 0,
		MODE_ATAN = 1,
		MODE_LOFI = 2,
		MODE_OVERDRIVE = 3,
		MODE_WAVESHAPE = 4,
	};

	// constants


	static audio_effect_distortion *_new();

	// methods
	real_t get_drive() const;
	real_t get_keep_hf_hz() const;
	audio_effect_distortion::Mode get_mode() const;
	real_t get_post_gain() const;
	real_t get_pre_gain() const;
	void set_drive(const real_t drive);
	void set_keep_hf_hz(const real_t keep_hf_hz);
	void set_mode(const int64_t mode);
	void set_post_gain(const real_t post_gain);
	void set_pre_gain(const real_t pre_gain);

};

}

#endif