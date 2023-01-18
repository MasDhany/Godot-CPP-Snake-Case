#ifndef GODOT_CPP_WEBSOCKETMULTIPLAYERPEER_HPP
#define GODOT_CPP_WEBSOCKETMULTIPLAYERPEER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "networked_multiplayer_peer.hpp"
namespace gd {

class web_socket_peer;

class web_socket_multiplayer_peer : public networked_multiplayer_peer {
	struct ___method_bindings {
		godot_method_bind *mb_get_peer;
		godot_method_bind *mb_set_buffers;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebSocketMultiplayerPeer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebSocketMultiplayerPeer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	ref<web_socket_peer> get_peer(const int64_t peer_id) const;
	error set_buffers(const int64_t input_buffer_size_kb, const int64_t input_max_packets, const int64_t output_buffer_size_kb, const int64_t output_max_packets);

};

}

#endif