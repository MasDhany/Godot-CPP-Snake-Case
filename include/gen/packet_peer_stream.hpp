#ifndef GODOT_CPP_PACKETPEERSTREAM_HPP
#define GODOT_CPP_PACKETPEERSTREAM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "packet_peer.hpp"
namespace gd {

class stream_peer;

class packet_peer_stream : public packet_peer {
	struct ___method_bindings {
		godot_method_bind *mb_get_input_buffer_max_size;
		godot_method_bind *mb_get_output_buffer_max_size;
		godot_method_bind *mb_get_stream_peer;
		godot_method_bind *mb_set_input_buffer_max_size;
		godot_method_bind *mb_set_output_buffer_max_size;
		godot_method_bind *mb_set_stream_peer;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PacketPeerStream"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PacketPeerStream"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static packet_peer_stream *_new();

	// methods
	int64_t get_input_buffer_max_size() const;
	int64_t get_output_buffer_max_size() const;
	ref<stream_peer> get_stream_peer() const;
	void set_input_buffer_max_size(const int64_t max_size_bytes);
	void set_output_buffer_max_size(const int64_t max_size_bytes);
	void set_stream_peer(const ref<stream_peer> peer);

};

}

#endif