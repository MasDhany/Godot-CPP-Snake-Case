#ifndef GODOT_CPP_WEBRTCMULTIPLAYER_HPP
#define GODOT_CPP_WEBRTCMULTIPLAYER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "networked_multiplayer_peer.hpp"
namespace gd {

class web_rtcpeer_connection;

class web_rtcmultiplayer : public networked_multiplayer_peer {
	struct ___method_bindings {
		godot_method_bind *mb_add_peer;
		godot_method_bind *mb_close;
		godot_method_bind *mb_get_peer;
		godot_method_bind *mb_get_peers;
		godot_method_bind *mb_has_peer;
		godot_method_bind *mb_initialize;
		godot_method_bind *mb_remove_peer;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebRTCMultiplayer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebRTCMultiplayer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static web_rtcmultiplayer *_new();

	// methods
	error add_peer(const ref<web_rtcpeer_connection> peer, const int64_t peer_id, const int64_t unreliable_lifetime = 1);
	void close();
	dictionary get_peer(const int64_t peer_id);
	dictionary get_peers();
	bool has_peer(const int64_t peer_id);
	error initialize(const int64_t peer_id, const bool server_compatibility = false);
	void remove_peer(const int64_t peer_id);

};

}

#endif