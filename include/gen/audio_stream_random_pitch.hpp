#ifndef GODOT_CPP_AUDIOSTREAMRANDOMPITCH_HPP
#define GODOT_CPP_AUDIOSTREAMRANDOMPITCH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_stream.hpp"
namespace gd {

class audio_stream;

class audio_stream_random_pitch : public audio_stream {
	struct ___method_bindings {
		godot_method_bind *mb_get_audio_stream;
		godot_method_bind *mb_get_random_pitch;
		godot_method_bind *mb_set_audio_stream;
		godot_method_bind *mb_set_random_pitch;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioStreamRandomPitch"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioStreamRandomPitch"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_stream_random_pitch *_new();

	// methods
	ref<audio_stream> get_audio_stream() const;
	real_t get_random_pitch() const;
	void set_audio_stream(const ref<audio_stream> stream);
	void set_random_pitch(const real_t scale);

};

}

#endif