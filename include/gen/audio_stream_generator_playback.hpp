#ifndef GODOT_CPP_AUDIOSTREAMGENERATORPLAYBACK_HPP
#define GODOT_CPP_AUDIOSTREAMGENERATORPLAYBACK_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_stream_playback_resampled.hpp"
namespace gd {


class audio_stream_generator_playback : public audio_stream_playback_resampled {
	struct ___method_bindings {
		godot_method_bind *mb_can_push_buffer;
		godot_method_bind *mb_clear_buffer;
		godot_method_bind *mb_get_frames_available;
		godot_method_bind *mb_get_skips;
		godot_method_bind *mb_push_buffer;
		godot_method_bind *mb_push_frame;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioStreamGeneratorPlayback"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioStreamGeneratorPlayback"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool can_push_buffer(const int64_t amount) const;
	void clear_buffer();
	int64_t get_frames_available() const;
	int64_t get_skips() const;
	bool push_buffer(const pool_vector2_array frames);
	bool push_frame(const vector2 frame);

};

}

#endif