#ifndef GODOT_CPP_NETWORKEDMULTIPLAYERCUSTOM_HPP
#define GODOT_CPP_NETWORKEDMULTIPLAYERCUSTOM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "networked_multiplayer_peer.hpp"
namespace gd {


class networked_multiplayer_custom : public networked_multiplayer_peer {
	struct ___method_bindings {
		godot_method_bind *mb_deliver_packet;
		godot_method_bind *mb_initialize;
		godot_method_bind *mb_set_connection_status;
		godot_method_bind *mb_set_max_packet_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NetworkedMultiplayerCustom"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NetworkedMultiplayerCustom"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static networked_multiplayer_custom *_new();

	// methods
	void deliver_packet(const pool_byte_array buffer, const int64_t from_peer_id);
	void initialize(const int64_t self_peer_id);
	void set_connection_status(const int64_t connection_status);
	void set_max_packet_size(const int64_t max_packet_size);

};

}

#endif