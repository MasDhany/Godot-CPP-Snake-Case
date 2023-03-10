#ifndef GODOT_CPP_AUDIOEFFECTEQ_HPP
#define GODOT_CPP_AUDIOEFFECTEQ_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_effect.hpp"
namespace gd {


class audio_effect_eq : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_band_count;
		godot_method_bind *mb_get_band_gain_db;
		godot_method_bind *mb_set_band_gain_db;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectEQ"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectEQ"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_effect_eq *_new();

	// methods
	int64_t get_band_count() const;
	real_t get_band_gain_db(const int64_t band_idx) const;
	void set_band_gain_db(const int64_t band_idx, const real_t volume_db);

};

}

#endif