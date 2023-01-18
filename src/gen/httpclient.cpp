#include "httpclient.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "stream_peer.hpp"


namespace gd {


httpclient::___method_bindings httpclient::___mb = {};

void *httpclient::_detail_class_tag = nullptr;

void httpclient::___init_method_bindings() {
	___mb.mb_close = gd::api->godot_method_bind_get_method("HTTPClient", "close");
	___mb.mb_connect_to_host = gd::api->godot_method_bind_get_method("HTTPClient", "connect_to_host");
	___mb.mb_get_connection = gd::api->godot_method_bind_get_method("HTTPClient", "get_connection");
	___mb.mb_get_read_chunk_size = gd::api->godot_method_bind_get_method("HTTPClient", "get_read_chunk_size");
	___mb.mb_get_response_body_length = gd::api->godot_method_bind_get_method("HTTPClient", "get_response_body_length");
	___mb.mb_get_response_code = gd::api->godot_method_bind_get_method("HTTPClient", "get_response_code");
	___mb.mb_get_response_headers = gd::api->godot_method_bind_get_method("HTTPClient", "get_response_headers");
	___mb.mb_get_response_headers_as_dictionary = gd::api->godot_method_bind_get_method("HTTPClient", "get_response_headers_as_dictionary");
	___mb.mb_get_status = gd::api->godot_method_bind_get_method("HTTPClient", "get_status");
	___mb.mb_has_response = gd::api->godot_method_bind_get_method("HTTPClient", "has_response");
	___mb.mb_is_blocking_mode_enabled = gd::api->godot_method_bind_get_method("HTTPClient", "is_blocking_mode_enabled");
	___mb.mb_is_response_chunked = gd::api->godot_method_bind_get_method("HTTPClient", "is_response_chunked");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("HTTPClient", "poll");
	___mb.mb_query_string_from_dict = gd::api->godot_method_bind_get_method("HTTPClient", "query_string_from_dict");
	___mb.mb_read_response_body_chunk = gd::api->godot_method_bind_get_method("HTTPClient", "read_response_body_chunk");
	___mb.mb_request = gd::api->godot_method_bind_get_method("HTTPClient", "request");
	___mb.mb_request_raw = gd::api->godot_method_bind_get_method("HTTPClient", "request_raw");
	___mb.mb_set_blocking_mode = gd::api->godot_method_bind_get_method("HTTPClient", "set_blocking_mode");
	___mb.mb_set_connection = gd::api->godot_method_bind_get_method("HTTPClient", "set_connection");
	___mb.mb_set_http_proxy = gd::api->godot_method_bind_get_method("HTTPClient", "set_http_proxy");
	___mb.mb_set_https_proxy = gd::api->godot_method_bind_get_method("HTTPClient", "set_https_proxy");
	___mb.mb_set_read_chunk_size = gd::api->godot_method_bind_get_method("HTTPClient", "set_read_chunk_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "HTTPClient");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

httpclient *httpclient::_new()
{
	return (httpclient *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"HTTPClient")());
}
void httpclient::close() {
	___godot_icall_void(___mb.mb_close, (const object *) this);
}

error httpclient::connect_to_host(const string host, const int64_t port, const bool use_ssl, const bool verify_host) {
	return (error) ___godot_icall_int_String_int_bool_bool(___mb.mb_connect_to_host, (const object *) this, host, port, use_ssl, verify_host);
}

ref<stream_peer> httpclient::get_connection() const {
	return ref<stream_peer>::__internal_constructor(___godot_icall_Object(___mb.mb_get_connection, (const object *) this));
}

int64_t httpclient::get_read_chunk_size() const {
	return ___godot_icall_int(___mb.mb_get_read_chunk_size, (const object *) this);
}

int64_t httpclient::get_response_body_length() const {
	return ___godot_icall_int(___mb.mb_get_response_body_length, (const object *) this);
}

int64_t httpclient::get_response_code() const {
	return ___godot_icall_int(___mb.mb_get_response_code, (const object *) this);
}

pool_string_array httpclient::get_response_headers() {
	return ___godot_icall_PoolStringArray(___mb.mb_get_response_headers, (const object *) this);
}

dictionary httpclient::get_response_headers_as_dictionary() {
	return ___godot_icall_Dictionary(___mb.mb_get_response_headers_as_dictionary, (const object *) this);
}

httpclient::Status httpclient::get_status() const {
	return (httpclient::Status) ___godot_icall_int(___mb.mb_get_status, (const object *) this);
}

bool httpclient::has_response() const {
	return ___godot_icall_bool(___mb.mb_has_response, (const object *) this);
}

bool httpclient::is_blocking_mode_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_blocking_mode_enabled, (const object *) this);
}

bool httpclient::is_response_chunked() const {
	return ___godot_icall_bool(___mb.mb_is_response_chunked, (const object *) this);
}

error httpclient::poll() {
	return (error) ___godot_icall_int(___mb.mb_poll, (const object *) this);
}

string httpclient::query_string_from_dict(const dictionary fields) {
	return ___godot_icall_String_Dictionary(___mb.mb_query_string_from_dict, (const object *) this, fields);
}

pool_byte_array httpclient::read_response_body_chunk() {
	return ___godot_icall_PoolByteArray(___mb.mb_read_response_body_chunk, (const object *) this);
}

error httpclient::request(const int64_t method, const string url, const pool_string_array headers, const string body) {
	return (error) ___godot_icall_int_int_String_PoolStringArray_String(___mb.mb_request, (const object *) this, method, url, headers, body);
}

error httpclient::request_raw(const int64_t method, const string url, const pool_string_array headers, const pool_byte_array body) {
	return (error) ___godot_icall_int_int_String_PoolStringArray_PoolByteArray(___mb.mb_request_raw, (const object *) this, method, url, headers, body);
}

void httpclient::set_blocking_mode(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_blocking_mode, (const object *) this, enabled);
}

void httpclient::set_connection(const ref<stream_peer> connection) {
	___godot_icall_void_Object(___mb.mb_set_connection, (const object *) this, connection.ptr());
}

void httpclient::set_http_proxy(const string host, const int64_t port) {
	___godot_icall_void_String_int(___mb.mb_set_http_proxy, (const object *) this, host, port);
}

void httpclient::set_https_proxy(const string host, const int64_t port) {
	___godot_icall_void_String_int(___mb.mb_set_https_proxy, (const object *) this, host, port);
}

void httpclient::set_read_chunk_size(const int64_t bytes) {
	___godot_icall_void_int(___mb.mb_set_read_chunk_size, (const object *) this, bytes);
}

}