#ifndef GODOT_CPP_AUDIOEFFECTSPECTRUMANALYZER_HPP
#define GODOT_CPP_AUDIOEFFECTSPECTRUMANALYZER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "audio_effect_spectrum_analyzer.hpp"

#include "audio_effect.hpp"
namespace gd {


class audio_effect_spectrum_analyzer : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_buffer_length;
		godot_method_bind *mb_get_fft_size;
		godot_method_bind *mb_get_tap_back_pos;
		godot_method_bind *mb_set_buffer_length;
		godot_method_bind *mb_set_fft_size;
		godot_method_bind *mb_set_tap_back_pos;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectSpectrumAnalyzer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectSpectrumAnalyzer"; }
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


	static audio_effect_spectrum_analyzer *_new();

	// methods
	real_t get_buffer_length() const;
	audio_effect_spectrum_analyzer::FFT_Size get_fft_size() const;
	real_t get_tap_back_pos() const;
	void set_buffer_length(const real_t seconds);
	void set_fft_size(const int64_t size);
	void set_tap_back_pos(const real_t seconds);

};

}

#endif