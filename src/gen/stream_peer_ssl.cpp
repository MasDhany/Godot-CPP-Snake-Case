#include "stream_peer_ssl.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "crypto_key.hpp"
#include "stream_peer.hpp"
#include "x509_certificate.hpp"


namespace gd {


stream_peer_ssl::___method_bindings stream_peer_ssl::___mb = {};

void *stream_peer_ssl::_detail_class_tag = nullptr;

void stream_peer_ssl::___init_method_bindings() {
	___mb.mb_accept_stream = gd::api->godot_method_bind_get_method("StreamPeerSSL", "accept_stream");
	___mb.mb_connect_to_stream = gd::api->godot_method_bind_get_method("StreamPeerSSL", "connect_to_stream");
	___mb.mb_disconnect_from_stream = gd::api->godot_method_bind_get_method("StreamPeerSSL", "disconnect_from_stream");
	___mb.mb_get_status = gd::api->godot_method_bind_get_method("StreamPeerSSL", "get_status");
	___mb.mb_is_blocking_handshake_enabled = gd::api->godot_method_bind_get_method("StreamPeerSSL", "is_blocking_handshake_enabled");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("StreamPeerSSL", "poll");
	___mb.mb_set_blocking_handshake_enabled = gd::api->godot_method_bind_get_method("StreamPeerSSL", "set_blocking_handshake_enabled");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StreamPeerSSL");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

stream_peer_ssl *stream_peer_ssl::_new()
{
	return (stream_peer_ssl *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StreamPeerSSL")());
}
error stream_peer_ssl::accept_stream(const ref<stream_peer> stream, const ref<crypto_key> private_key, const ref<x509_certificate> certificate, const ref<x509_certificate> chain) {
	return (error) ___godot_icall_int_Object_Object_Object_Object(___mb.mb_accept_stream, (const object *) this, stream.ptr(), private_key.ptr(), certificate.ptr(), chain.ptr());
}

error stream_peer_ssl::connect_to_stream(const ref<stream_peer> stream, const bool validate_certs, const string for_hostname, const ref<x509_certificate> valid_certificate) {
	return (error) ___godot_icall_int_Object_bool_String_Object(___mb.mb_connect_to_stream, (const object *) this, stream.ptr(), validate_certs, for_hostname, valid_certificate.ptr());
}

void stream_peer_ssl::disconnect_from_stream() {
	___godot_icall_void(___mb.mb_disconnect_from_stream, (const object *) this);
}

stream_peer_ssl::Status stream_peer_ssl::get_status() const {
	return (stream_peer_ssl::Status) ___godot_icall_int(___mb.mb_get_status, (const object *) this);
}

bool stream_peer_ssl::is_blocking_handshake_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_blocking_handshake_enabled, (const object *) this);
}

void stream_peer_ssl::poll() {
	___godot_icall_void(___mb.mb_poll, (const object *) this);
}

void stream_peer_ssl::set_blocking_handshake_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_blocking_handshake_enabled, (const object *) this, enabled);
}

}