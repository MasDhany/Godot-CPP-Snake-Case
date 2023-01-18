#ifndef GODOT_CPP_PACKETPEER_HPP
#define GODOT_CPP_PACKETPEER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class packet_peer : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_available_packet_count;
		godot_method_bind *mb_get_encode_buffer_max_size;
		godot_method_bind *mb_get_packet;
		godot_method_bind *mb_get_packet_error;
		godot_method_bind *mb_get_var;
		godot_method_bind *mb_is_object_decoding_allowed;
		godot_method_bind *mb_put_packet;
		godot_method_bind *mb_put_var;
		godot_method_bind *mb_set_allow_object_decoding;
		godot_method_bind *mb_set_encode_buffer_max_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PacketPeer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PacketPeer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	int64_t get_available_packet_count() const;
	int64_t get_encode_buffer_max_size() const;
	pool_byte_array get_packet();
	error get_packet_error() const;
	variant get_var(const bool allow_objects = false);
	bool is_object_decoding_allowed() const;
	error put_packet(const pool_byte_array buffer);
	error put_var(const variant var, const bool full_objects = false);
	void set_allow_object_decoding(const bool enable);
	void set_encode_buffer_max_size(const int64_t max_size);

};

}

#endif