#ifndef GODOT_CPP_PACKETPEERUDP_HPP
#define GODOT_CPP_PACKETPEERUDP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "packet_peer.hpp"
namespace gd {


class packet_peer_udp : public packet_peer {
	struct ___method_bindings {
		godot_method_bind *mb_close;
		godot_method_bind *mb_connect_to_host;
		godot_method_bind *mb_get_packet_ip;
		godot_method_bind *mb_get_packet_port;
		godot_method_bind *mb_is_connected_to_host;
		godot_method_bind *mb_is_listening;
		godot_method_bind *mb_join_multicast_group;
		godot_method_bind *mb_leave_multicast_group;
		godot_method_bind *mb_listen;
		godot_method_bind *mb_set_broadcast_enabled;
		godot_method_bind *mb_set_dest_address;
		godot_method_bind *mb_wait;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PacketPeerUDP"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PacketPeerUDP"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static packet_peer_udp *_new();

	// methods
	void close();
	error connect_to_host(const string host, const int64_t port);
	string get_packet_ip() const;
	int64_t get_packet_port() const;
	bool is_connected_to_host() const;
	bool is_listening() const;
	error join_multicast_group(const string multicast_address, const string interface_name);
	error leave_multicast_group(const string multicast_address, const string interface_name);
	error listen(const int64_t port, const string bind_address = "*", const int64_t recv_buf_size = 65536);
	void set_broadcast_enabled(const bool enabled);
	error set_dest_address(const string host, const int64_t port);
	error wait();

};

}

#endif