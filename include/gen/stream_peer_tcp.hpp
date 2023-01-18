#ifndef GODOT_CPP_STREAMPEERTCP_HPP
#define GODOT_CPP_STREAMPEERTCP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "stream_peer_tcp.hpp"

#include "stream_peer.hpp"
namespace gd {


class stream_peer_tcp : public stream_peer {
	struct ___method_bindings {
		godot_method_bind *mb_connect_to_host;
		godot_method_bind *mb_disconnect_from_host;
		godot_method_bind *mb_get_connected_host;
		godot_method_bind *mb_get_connected_port;
		godot_method_bind *mb_get_status;
		godot_method_bind *mb_is_connected_to_host;
		godot_method_bind *mb_set_no_delay;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StreamPeerTCP"; }
	static inline const char *___get_godot_class_name() { return (const char *) "StreamPeerTCP"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Status {
		STATUS_NONE = 0,
		STATUS_CONNECTING = 1,
		STATUS_CONNECTED = 2,
		STATUS_ERROR = 3,
	};

	// constants


	static stream_peer_tcp *_new();

	// methods
	error connect_to_host(const string host, const int64_t port);
	void disconnect_from_host();
	string get_connected_host() const;
	int64_t get_connected_port() const;
	stream_peer_tcp::Status get_status();
	bool is_connected_to_host() const;
	void set_no_delay(const bool enabled);

};

}

#endif