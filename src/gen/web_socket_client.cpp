#include "web_socket_client.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "x509_certificate.hpp"


namespace gd {


web_socket_client::___method_bindings web_socket_client::___mb = {};

void *web_socket_client::_detail_class_tag = nullptr;

void web_socket_client::___init_method_bindings() {
	___mb.mb_connect_to_url = gd::api->godot_method_bind_get_method("WebSocketClient", "connect_to_url");
	___mb.mb_disconnect_from_host = gd::api->godot_method_bind_get_method("WebSocketClient", "disconnect_from_host");
	___mb.mb_get_connected_host = gd::api->godot_method_bind_get_method("WebSocketClient", "get_connected_host");
	___mb.mb_get_connected_port = gd::api->godot_method_bind_get_method("WebSocketClient", "get_connected_port");
	___mb.mb_get_trusted_ssl_certificate = gd::api->godot_method_bind_get_method("WebSocketClient", "get_trusted_ssl_certificate");
	___mb.mb_is_verify_ssl_enabled = gd::api->godot_method_bind_get_method("WebSocketClient", "is_verify_ssl_enabled");
	___mb.mb_set_trusted_ssl_certificate = gd::api->godot_method_bind_get_method("WebSocketClient", "set_trusted_ssl_certificate");
	___mb.mb_set_verify_ssl_enabled = gd::api->godot_method_bind_get_method("WebSocketClient", "set_verify_ssl_enabled");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebSocketClient");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

web_socket_client *web_socket_client::_new()
{
	return (web_socket_client *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WebSocketClient")());
}
error web_socket_client::connect_to_url(const string url, const pool_string_array protocols, const bool gd_mp_api, const pool_string_array custom_headers) {
	return (error) ___godot_icall_int_String_PoolStringArray_bool_PoolStringArray(___mb.mb_connect_to_url, (const object *) this, url, protocols, gd_mp_api, custom_headers);
}

void web_socket_client::disconnect_from_host(const int64_t code, const string reason) {
	___godot_icall_void_int_String(___mb.mb_disconnect_from_host, (const object *) this, code, reason);
}

string web_socket_client::get_connected_host() const {
	return ___godot_icall_String(___mb.mb_get_connected_host, (const object *) this);
}

int64_t web_socket_client::get_connected_port() const {
	return ___godot_icall_int(___mb.mb_get_connected_port, (const object *) this);
}

ref<x509_certificate> web_socket_client::get_trusted_ssl_certificate() const {
	return ref<x509_certificate>::__internal_constructor(___godot_icall_Object(___mb.mb_get_trusted_ssl_certificate, (const object *) this));
}

bool web_socket_client::is_verify_ssl_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_verify_ssl_enabled, (const object *) this);
}

void web_socket_client::set_trusted_ssl_certificate(const ref<x509_certificate> certificate) {
	___godot_icall_void_Object(___mb.mb_set_trusted_ssl_certificate, (const object *) this, certificate.ptr());
}

void web_socket_client::set_verify_ssl_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_verify_ssl_enabled, (const object *) this, enabled);
}

}