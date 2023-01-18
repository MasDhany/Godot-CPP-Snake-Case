#include "web_socket_server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "crypto_key.hpp"
#include "x509_certificate.hpp"


namespace gd {


web_socket_server::___method_bindings web_socket_server::___mb = {};

void *web_socket_server::_detail_class_tag = nullptr;

void web_socket_server::___init_method_bindings() {
	___mb.mb_disconnect_peer = gd::api->godot_method_bind_get_method("WebSocketServer", "disconnect_peer");
	___mb.mb_get_bind_ip = gd::api->godot_method_bind_get_method("WebSocketServer", "get_bind_ip");
	___mb.mb_get_ca_chain = gd::api->godot_method_bind_get_method("WebSocketServer", "get_ca_chain");
	___mb.mb_get_handshake_timeout = gd::api->godot_method_bind_get_method("WebSocketServer", "get_handshake_timeout");
	___mb.mb_get_peer_address = gd::api->godot_method_bind_get_method("WebSocketServer", "get_peer_address");
	___mb.mb_get_peer_port = gd::api->godot_method_bind_get_method("WebSocketServer", "get_peer_port");
	___mb.mb_get_private_key = gd::api->godot_method_bind_get_method("WebSocketServer", "get_private_key");
	___mb.mb_get_ssl_certificate = gd::api->godot_method_bind_get_method("WebSocketServer", "get_ssl_certificate");
	___mb.mb_has_peer = gd::api->godot_method_bind_get_method("WebSocketServer", "has_peer");
	___mb.mb_is_listening = gd::api->godot_method_bind_get_method("WebSocketServer", "is_listening");
	___mb.mb_listen = gd::api->godot_method_bind_get_method("WebSocketServer", "listen");
	___mb.mb_set_bind_ip = gd::api->godot_method_bind_get_method("WebSocketServer", "set_bind_ip");
	___mb.mb_set_ca_chain = gd::api->godot_method_bind_get_method("WebSocketServer", "set_ca_chain");
	___mb.mb_set_extra_headers = gd::api->godot_method_bind_get_method("WebSocketServer", "set_extra_headers");
	___mb.mb_set_handshake_timeout = gd::api->godot_method_bind_get_method("WebSocketServer", "set_handshake_timeout");
	___mb.mb_set_private_key = gd::api->godot_method_bind_get_method("WebSocketServer", "set_private_key");
	___mb.mb_set_ssl_certificate = gd::api->godot_method_bind_get_method("WebSocketServer", "set_ssl_certificate");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("WebSocketServer", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebSocketServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

web_socket_server *web_socket_server::_new()
{
	return (web_socket_server *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WebSocketServer")());
}
void web_socket_server::disconnect_peer(const int64_t id, const int64_t code, const string reason) {
	___godot_icall_void_int_int_String(___mb.mb_disconnect_peer, (const object *) this, id, code, reason);
}

string web_socket_server::get_bind_ip() const {
	return ___godot_icall_String(___mb.mb_get_bind_ip, (const object *) this);
}

ref<x509_certificate> web_socket_server::get_ca_chain() const {
	return ref<x509_certificate>::__internal_constructor(___godot_icall_Object(___mb.mb_get_ca_chain, (const object *) this));
}

real_t web_socket_server::get_handshake_timeout() const {
	return ___godot_icall_float(___mb.mb_get_handshake_timeout, (const object *) this);
}

string web_socket_server::get_peer_address(const int64_t id) const {
	return ___godot_icall_String_int(___mb.mb_get_peer_address, (const object *) this, id);
}

int64_t web_socket_server::get_peer_port(const int64_t id) const {
	return ___godot_icall_int_int(___mb.mb_get_peer_port, (const object *) this, id);
}

ref<crypto_key> web_socket_server::get_private_key() const {
	return ref<crypto_key>::__internal_constructor(___godot_icall_Object(___mb.mb_get_private_key, (const object *) this));
}

ref<x509_certificate> web_socket_server::get_ssl_certificate() const {
	return ref<x509_certificate>::__internal_constructor(___godot_icall_Object(___mb.mb_get_ssl_certificate, (const object *) this));
}

bool web_socket_server::has_peer(const int64_t id) const {
	return ___godot_icall_bool_int(___mb.mb_has_peer, (const object *) this, id);
}

bool web_socket_server::is_listening() const {
	return ___godot_icall_bool(___mb.mb_is_listening, (const object *) this);
}

error web_socket_server::listen(const int64_t port, const pool_string_array protocols, const bool gd_mp_api) {
	return (error) ___godot_icall_int_int_PoolStringArray_bool(___mb.mb_listen, (const object *) this, port, protocols, gd_mp_api);
}

void web_socket_server::set_bind_ip(const string ip_) {
	___godot_icall_void_String(___mb.mb_set_bind_ip, (const object *) this, ip_);
}

void web_socket_server::set_ca_chain(const ref<x509_certificate> ca_chain) {
	___godot_icall_void_Object(___mb.mb_set_ca_chain, (const object *) this, ca_chain.ptr());
}

void web_socket_server::set_extra_headers(const pool_string_array headers) {
	___godot_icall_void_PoolStringArray(___mb.mb_set_extra_headers, (const object *) this, headers);
}

void web_socket_server::set_handshake_timeout(const real_t timeout) {
	___godot_icall_void_float(___mb.mb_set_handshake_timeout, (const object *) this, timeout);
}

void web_socket_server::set_private_key(const ref<crypto_key> key) {
	___godot_icall_void_Object(___mb.mb_set_private_key, (const object *) this, key.ptr());
}

void web_socket_server::set_ssl_certificate(const ref<x509_certificate> certificate) {
	___godot_icall_void_Object(___mb.mb_set_ssl_certificate, (const object *) this, certificate.ptr());
}

void web_socket_server::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}