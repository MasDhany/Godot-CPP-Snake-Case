#include "httprequest.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


httprequest::___method_bindings httprequest::___mb = {};

void *httprequest::_detail_class_tag = nullptr;

void httprequest::___init_method_bindings() {
	___mb.mb__redirect_request = gd::api->godot_method_bind_get_method("HTTPRequest", "_redirect_request");
	___mb.mb__request_done = gd::api->godot_method_bind_get_method("HTTPRequest", "_request_done");
	___mb.mb__timeout = gd::api->godot_method_bind_get_method("HTTPRequest", "_timeout");
	___mb.mb_cancel_request = gd::api->godot_method_bind_get_method("HTTPRequest", "cancel_request");
	___mb.mb_get_body_size = gd::api->godot_method_bind_get_method("HTTPRequest", "get_body_size");
	___mb.mb_get_body_size_limit = gd::api->godot_method_bind_get_method("HTTPRequest", "get_body_size_limit");
	___mb.mb_get_download_chunk_size = gd::api->godot_method_bind_get_method("HTTPRequest", "get_download_chunk_size");
	___mb.mb_get_download_file = gd::api->godot_method_bind_get_method("HTTPRequest", "get_download_file");
	___mb.mb_get_downloaded_bytes = gd::api->godot_method_bind_get_method("HTTPRequest", "get_downloaded_bytes");
	___mb.mb_get_http_client_status = gd::api->godot_method_bind_get_method("HTTPRequest", "get_http_client_status");
	___mb.mb_get_max_redirects = gd::api->godot_method_bind_get_method("HTTPRequest", "get_max_redirects");
	___mb.mb_get_timeout = gd::api->godot_method_bind_get_method("HTTPRequest", "get_timeout");
	___mb.mb_is_using_threads = gd::api->godot_method_bind_get_method("HTTPRequest", "is_using_threads");
	___mb.mb_request = gd::api->godot_method_bind_get_method("HTTPRequest", "request");
	___mb.mb_request_raw = gd::api->godot_method_bind_get_method("HTTPRequest", "request_raw");
	___mb.mb_set_body_size_limit = gd::api->godot_method_bind_get_method("HTTPRequest", "set_body_size_limit");
	___mb.mb_set_download_chunk_size = gd::api->godot_method_bind_get_method("HTTPRequest", "set_download_chunk_size");
	___mb.mb_set_download_file = gd::api->godot_method_bind_get_method("HTTPRequest", "set_download_file");
	___mb.mb_set_http_proxy = gd::api->godot_method_bind_get_method("HTTPRequest", "set_http_proxy");
	___mb.mb_set_https_proxy = gd::api->godot_method_bind_get_method("HTTPRequest", "set_https_proxy");
	___mb.mb_set_max_redirects = gd::api->godot_method_bind_get_method("HTTPRequest", "set_max_redirects");
	___mb.mb_set_timeout = gd::api->godot_method_bind_get_method("HTTPRequest", "set_timeout");
	___mb.mb_set_use_threads = gd::api->godot_method_bind_get_method("HTTPRequest", "set_use_threads");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "HTTPRequest");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

httprequest *httprequest::_new()
{
	return (httprequest *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"HTTPRequest")());
}
void httprequest::_redirect_request(const string arg0) {
	___godot_icall_void_String(___mb.mb__redirect_request, (const object *) this, arg0);
}

void httprequest::_request_done(const int64_t arg0, const int64_t arg1, const pool_string_array arg2, const pool_byte_array arg3) {
	___godot_icall_void_int_int_PoolStringArray_PoolByteArray(___mb.mb__request_done, (const object *) this, arg0, arg1, arg2, arg3);
}

void httprequest::_timeout() {
	___godot_icall_void(___mb.mb__timeout, (const object *) this);
}

void httprequest::cancel_request() {
	___godot_icall_void(___mb.mb_cancel_request, (const object *) this);
}

int64_t httprequest::get_body_size() const {
	return ___godot_icall_int(___mb.mb_get_body_size, (const object *) this);
}

int64_t httprequest::get_body_size_limit() const {
	return ___godot_icall_int(___mb.mb_get_body_size_limit, (const object *) this);
}

int64_t httprequest::get_download_chunk_size() const {
	return ___godot_icall_int(___mb.mb_get_download_chunk_size, (const object *) this);
}

string httprequest::get_download_file() const {
	return ___godot_icall_String(___mb.mb_get_download_file, (const object *) this);
}

int64_t httprequest::get_downloaded_bytes() const {
	return ___godot_icall_int(___mb.mb_get_downloaded_bytes, (const object *) this);
}

httpclient::Status httprequest::get_http_client_status() const {
	return (httpclient::Status) ___godot_icall_int(___mb.mb_get_http_client_status, (const object *) this);
}

int64_t httprequest::get_max_redirects() const {
	return ___godot_icall_int(___mb.mb_get_max_redirects, (const object *) this);
}

real_t httprequest::get_timeout() {
	return ___godot_icall_float(___mb.mb_get_timeout, (const object *) this);
}

bool httprequest::is_using_threads() const {
	return ___godot_icall_bool(___mb.mb_is_using_threads, (const object *) this);
}

error httprequest::request(const string url, const pool_string_array custom_headers, const bool ssl_validate_domain, const int64_t method, const string request_data) {
	return (error) ___godot_icall_int_String_PoolStringArray_bool_int_String(___mb.mb_request, (const object *) this, url, custom_headers, ssl_validate_domain, method, request_data);
}

error httprequest::request_raw(const string url, const pool_string_array custom_headers, const bool ssl_validate_domain, const int64_t method, const pool_byte_array request_data_raw) {
	return (error) ___godot_icall_int_String_PoolStringArray_bool_int_PoolByteArray(___mb.mb_request_raw, (const object *) this, url, custom_headers, ssl_validate_domain, method, request_data_raw);
}

void httprequest::set_body_size_limit(const int64_t bytes) {
	___godot_icall_void_int(___mb.mb_set_body_size_limit, (const object *) this, bytes);
}

void httprequest::set_download_chunk_size(const int64_t chunk_size) {
	___godot_icall_void_int(___mb.mb_set_download_chunk_size, (const object *) this, chunk_size);
}

void httprequest::set_download_file(const string path_) {
	___godot_icall_void_String(___mb.mb_set_download_file, (const object *) this, path_);
}

void httprequest::set_http_proxy(const string host, const int64_t port) {
	___godot_icall_void_String_int(___mb.mb_set_http_proxy, (const object *) this, host, port);
}

void httprequest::set_https_proxy(const string host, const int64_t port) {
	___godot_icall_void_String_int(___mb.mb_set_https_proxy, (const object *) this, host, port);
}

void httprequest::set_max_redirects(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_max_redirects, (const object *) this, amount);
}

void httprequest::set_timeout(const real_t timeout) {
	___godot_icall_void_float(___mb.mb_set_timeout, (const object *) this, timeout);
}

void httprequest::set_use_threads(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_threads, (const object *) this, enable);
}

}