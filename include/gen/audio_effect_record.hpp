#ifndef GODOT_CPP_AUDIOEFFECTRECORD_HPP
#define GODOT_CPP_AUDIOEFFECTRECORD_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "audio_stream_sample.hpp"

#include "audio_effect.hpp"
namespace gd {

class audio_stream_sample;

class audio_effect_record : public audio_effect {
	struct ___method_bindings {
		godot_method_bind *mb_get_format;
		godot_method_bind *mb_get_recording;
		godot_method_bind *mb_is_recording_active;
		godot_method_bind *mb_set_format;
		godot_method_bind *mb_set_recording_active;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectRecord"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectRecord"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_effect_record *_new();

	// methods
	audio_stream_sample::Format get_format() const;
	ref<audio_stream_sample> get_recording() const;
	bool is_recording_active() const;
	void set_format(const int64_t format);
	void set_recording_active(const bool record);

};

}

#endif