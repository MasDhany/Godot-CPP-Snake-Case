#ifndef GODOT_CPP_AUDIOSTREAMSAMPLE_HPP
#define GODOT_CPP_AUDIOSTREAMSAMPLE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "audio_stream_sample.hpp"

#include "audio_stream.hpp"
namespace gd {


class audio_stream_sample : public audio_stream {
	struct ___method_bindings {
		godot_method_bind *mb_get_data;
		godot_method_bind *mb_get_format;
		godot_method_bind *mb_get_loop_begin;
		godot_method_bind *mb_get_loop_end;
		godot_method_bind *mb_get_loop_mode;
		godot_method_bind *mb_get_mix_rate;
		godot_method_bind *mb_is_stereo;
		godot_method_bind *mb_save_to_wav;
		godot_method_bind *mb_set_data;
		godot_method_bind *mb_set_format;
		godot_method_bind *mb_set_loop_begin;
		godot_method_bind *mb_set_loop_end;
		godot_method_bind *mb_set_loop_mode;
		godot_method_bind *mb_set_mix_rate;
		godot_method_bind *mb_set_stereo;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioStreamSample"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioStreamSample"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum LoopMode {
		LOOP_DISABLED = 0,
		LOOP_FORWARD = 1,
		LOOP_PING_PONG = 2,
		LOOP_BACKWARD = 3,
	};
	enum Format {
		FORMAT_8_BITS = 0,
		FORMAT_16_BITS = 1,
		FORMAT_IMA_ADPCM = 2,
	};

	// constants


	static audio_stream_sample *_new();

	// methods
	pool_byte_array get_data() const;
	audio_stream_sample::Format get_format() const;
	int64_t get_loop_begin() const;
	int64_t get_loop_end() const;
	audio_stream_sample::LoopMode get_loop_mode() const;
	int64_t get_mix_rate() const;
	bool is_stereo() const;
	error save_to_wav(const string path_);
	void set_data(const pool_byte_array data);
	void set_format(const int64_t format);
	void set_loop_begin(const int64_t loop_begin);
	void set_loop_end(const int64_t loop_end);
	void set_loop_mode(const int64_t loop_mode);
	void set_mix_rate(const int64_t mix_rate);
	void set_stereo(const bool stereo);

};

}

#endif