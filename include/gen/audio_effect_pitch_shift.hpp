#ifndef GODOT_CPP_AUDIOEFFECTPITCHSHIFT_HPP
#define GODOT_CPP_AUDIOEFFECTPITCHSHIFT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "audio_effect_pitch_shift.hpp"

#include "audio_effect.hpp"
namespace gd {


class audio_effect_pitch_shift : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_fft_size;
		godot_method_bind *mb_get_oversampling;
		godot_method_bind *mb_get_pitch_scale;
		godot_method_bind *mb_set_fft_size;
		godot_method_bind *mb_set_oversampling;
		godot_method_bind *mb_set_pitch_scale;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectPitchShift"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectPitchShift"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum FFT_Size {
		FFT_SIZE_256 = 0,
		FFT_SIZE_512 = 1,
		FFT_SIZE_1024 = 2,
		FFT_SIZE_2048 = 3,
		FFT_SIZE_4096 = 4,
		FFT_SIZE_MAX = 5,
	};

	// constants


	static audio_effect_pitch_shift *_new();

	// methods
	audio_effect_pitch_shift::FFT_Size get_fft_size() const;
	int64_t get_oversampling() const;
	real_t get_pitch_scale() const;
	void set_fft_size(const int64_t size);
	void set_oversampling(const int64_t amount);
	void set_pitch_scale(const real_t rate);

};

}

#endif