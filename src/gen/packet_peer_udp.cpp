#include "packet_peer_udp.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


packet_peer_udp::___method_bindings packet_peer_udp::___mb = {};

void *packet_peer_udp::_detail_class_tag = nullptr;

void packet_peer_udp::___init_method_bindings() {
	___mb.mb_close = gd::api->godot_method_bind_get_method("PacketPeerUDP", "close");
	___mb.mb_connect_to_host = gd::api->godot_method_bind_get_method("PacketPeerUDP", "connect_to_host");
	___mb.mb_get_packet_ip = gd::api->godot_method_bind_get_method("PacketPeerUDP", "get_packet_ip");
	___mb.mb_get_packet_port = gd::api->godot_method_bind_get_method("PacketPeerUDP", "get_packet_port");
	___mb.mb_is_connected_to_host = gd::api->godot_method_bind_get_method("PacketPeerUDP", "is_connected_to_host");
	___mb.mb_is_listening = gd::api->godot_method_bind_get_method("PacketPeerUDP", "is_listening");
	___mb.mb_join_multicast_group = gd::api->godot_method_bind_get_method("PacketPeerUDP", "join_multicast_group");
	___mb.mb_leave_multicast_group = gd::api->godot_method_bind_get_method("PacketPeerUDP", "leave_multicast_group");
	___mb.mb_listen = gd::api->godot_method_bind_get_method("PacketPeerUDP", "listen");
	___mb.mb_set_broadcast_enabled = gd::api->godot_method_bind_get_method("PacketPeerUDP", "set_broadcast_enabled");
	___mb.mb_set_dest_address = gd::api->godot_method_bind_get_method("PacketPeerUDP", "set_dest_address");
	___mb.mb_wait = gd::api->godot_method_bind_get_method("PacketPeerUDP", "wait");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PacketPeerUDP");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

packet_peer_udp *packet_peer_udp::_new()
{
	return (packet_peer_udp *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PacketPeerUDP")());
}
void packet_peer_udp::close() {
	___godot_icall_void(___mb.mb_close, (const object *) this);
}

error packet_peer_udp::connect_to_host(const string host, const int64_t port) {
	return (error) ___godot_icall_int_String_int(___mb.mb_connect_to_host, (const object *) this, host, port);
}

string packet_peer_udp::get_packet_ip() const {
	return ___godot_icall_String(___mb.mb_get_packet_ip, (const object *) this);
}

int64_t packet_peer_udp::get_packet_port() const {
	return ___godot_icall_int(___mb.mb_get_packet_port, (const object *) this);
}

bool packet_peer_udp::is_connected_to_host() const {
	return ___godot_icall_bool(___mb.mb_is_connected_to_host, (const object *) this);
}

bool packet_peer_udp::is_listening() const {
	return ___godot_icall_bool(___mb.mb_is_listening, (const object *) this);
}

error packet_peer_udp::join_multicast_group(const string multicast_address, const string interface_name) {
	return (error) ___godot_icall_int_String_String(___mb.mb_join_multicast_group, (const object *) this, multicast_address, interface_name);
}

error packet_peer_udp::leave_multicast_group(const string multicast_address, const string interface_name) {
	return (error) ___godot_icall_int_String_String(___mb.mb_leave_multicast_group, (const object *) this, multicast_address, interface_name);
}

error packet_peer_udp::listen(const int64_t port, const string bind_address, const int64_t recv_buf_size) {
	return (error) ___godot_icall_int_int_String_int(___mb.mb_listen, (const object *) this, port, bind_address, recv_buf_size);
}

void packet_peer_udp::set_broadcast_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_broadcast_enabled, (const object *) this, enabled);
}

error packet_peer_udp::set_dest_address(const string host, const int64_t port) {
	return (error) ___godot_icall_int_String_int(___mb.mb_set_dest_address, (const object *) this, host, port);
}

error packet_peer_udp::wait() {
	return (error) ___godot_icall_int(___mb.mb_wait, (const object *) this);
}

}