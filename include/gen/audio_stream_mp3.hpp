#ifndef GODOT_CPP_AUDIOSTREAMMP3_HPP
#define GODOT_CPP_AUDIOSTREAMMP3_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_stream.hpp"
namespace gd {


class audio_stream_mp3 : public audio_stream {
	struct ___method_bindings {
		godot_method_bind *mb_get_data;
		godot_method_bind *mb_get_loop_offset;
		godot_method_bind *mb_has_loop;
		godot_method_bind *mb_set_data;
		godot_method_bind *mb_set_loop;
		godot_method_bind *mb_set_loop_offset;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioStreamMP3"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioStreamMP3"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_stream_mp3 *_new();

	// methods
	pool_byte_array get_data() const;
	real_t get_loop_offset() const;
	bool has_loop() const;
	void set_data(const pool_byte_array data);
	void set_loop(const bool enable);
	void set_loop_offset(const real_t seconds);

};

}

#endif