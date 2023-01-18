#ifndef GODOT_CPP_AUDIOEFFECTSPECTRUMANALYZERINSTANCE_HPP
#define GODOT_CPP_AUDIOEFFECTSPECTRUMANALYZERINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_effect_instance.hpp"
namespace gd {


class audio_effect_spectrum_analyzer_instance : public audio_effect_instance {
	struct ___method_bindings {
		godot_method_bind *mb_get_magnitude_for_frequency_range;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectSpectrumAnalyzerInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectSpectrumAnalyzerInstance"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum MagnitudeMode {
		MAGNITUDE_AVERAGE = 0,
		MAGNITUDE_MAX = 1,
	};

	// constants

	// methods
	vector2 get_magnitude_for_frequency_range(const real_t from_hz, const real_t to_hz, const int64_t mode = 1) const;

};

}

#endif