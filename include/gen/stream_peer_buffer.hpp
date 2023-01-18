#ifndef GODOT_CPP_STREAMPEERBUFFER_HPP
#define GODOT_CPP_STREAMPEERBUFFER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "stream_peer.hpp"
namespace gd {

class stream_peer_buffer;

class stream_peer_buffer : public stream_peer {
	struct ___method_bindings {
		godot_method_bind *mb_clear;
		godot_method_bind *mb_duplicate;
		godot_method_bind *mb_get_data_array;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_resize;
		godot_method_bind *mb_seek;
		godot_method_bind *mb_set_data_array;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StreamPeerBuffer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "StreamPeerBuffer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static stream_peer_buffer *_new();

	// methods
	void clear();
	ref<stream_peer_buffer> duplicate() const;
	pool_byte_array get_data_array() const;
	int64_t get_position() const;
	int64_t get_size() const;
	void resize(const int64_t size);
	void seek(const int64_t position);
	void set_data_array(const pool_byte_array data);

};

}

#endif