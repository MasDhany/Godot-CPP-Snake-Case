#include "packet_peer_dtls.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "packet_peer_udp.hpp"
#include "x509_certificate.hpp"


namespace gd {


packet_peer_dtls::___method_bindings packet_peer_dtls::___mb = {};

void *packet_peer_dtls::_detail_class_tag = nullptr;

void packet_peer_dtls::___init_method_bindings() {
	___mb.mb_connect_to_peer = gd::api->godot_method_bind_get_method("PacketPeerDTLS", "connect_to_peer");
	___mb.mb_disconnect_from_peer = gd::api->godot_method_bind_get_method("PacketPeerDTLS", "disconnect_from_peer");
	___mb.mb_get_status = gd::api->godot_method_bind_get_method("PacketPeerDTLS", "get_status");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("PacketPeerDTLS", "poll");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PacketPeerDTLS");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

packet_peer_dtls *packet_peer_dtls::_new()
{
	return (packet_peer_dtls *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PacketPeerDTLS")());
}
error packet_peer_dtls::connect_to_peer(const ref<packet_peer_udp> packet_peer_, const bool validate_certs, const string for_hostname, const ref<x509_certificate> valid_certificate) {
	return (error) ___godot_icall_int_Object_bool_String_Object(___mb.mb_connect_to_peer, (const object *) this, packet_peer_.ptr(), validate_certs, for_hostname, valid_certificate.ptr());
}

void packet_peer_dtls::disconnect_from_peer() {
	___godot_icall_void(___mb.mb_disconnect_from_peer, (const object *) this);
}

packet_peer_dtls::Status packet_peer_dtls::get_status() const {
	return (packet_peer_dtls::Status) ___godot_icall_int(___mb.mb_get_status, (const object *) this);
}

void packet_peer_dtls::poll() {
	___godot_icall_void(___mb.mb_poll, (const object *) this);
}

}