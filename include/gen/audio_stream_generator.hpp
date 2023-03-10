#ifndef GODOT_CPP_AUDIOSTREAMGENERATOR_HPP
#define GODOT_CPP_AUDIOSTREAMGENERATOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "audio_stream.hpp"
namespace gd {


class audio_stream_generator : public audio_stream {
	struct ___method_bindings {
		godot_method_bind *mb_get_buffer_length;
		godot_method_bind *mb_get_mix_rate;
		godot_method_bind *mb_set_buffer_length;
		godot_method_bind *mb_set_mix_rate;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioStreamGenerator"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioStreamGenerator"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static audio_stream_generator *_new();

	// methods
	real_t get_buffer_length() const;
	real_t get_mix_rate() const;
	void set_buffer_length(const real_t seconds);
	void set_mix_rate(const real_t hz);

};

}

#endif