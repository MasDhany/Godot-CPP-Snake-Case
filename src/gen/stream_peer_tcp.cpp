#include "stream_peer_tcp.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


stream_peer_tcp::___method_bindings stream_peer_tcp::___mb = {};

void *stream_peer_tcp::_detail_class_tag = nullptr;

void stream_peer_tcp::___init_method_bindings() {
	___mb.mb_connect_to_host = gd::api->godot_method_bind_get_method("StreamPeerTCP", "connect_to_host");
	___mb.mb_disconnect_from_host = gd::api->godot_method_bind_get_method("StreamPeerTCP", "disconnect_from_host");
	___mb.mb_get_connected_host = gd::api->godot_method_bind_get_method("StreamPeerTCP", "get_connected_host");
	___mb.mb_get_connected_port = gd::api->godot_method_bind_get_method("StreamPeerTCP", "get_connected_port");
	___mb.mb_get_status = gd::api->godot_method_bind_get_method("StreamPeerTCP", "get_status");
	___mb.mb_is_connected_to_host = gd::api->godot_method_bind_get_method("StreamPeerTCP", "is_connected_to_host");
	___mb.mb_set_no_delay = gd::api->godot_method_bind_get_method("StreamPeerTCP", "set_no_delay");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StreamPeerTCP");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

stream_peer_tcp *stream_peer_tcp::_new()
{
	return (stream_peer_tcp *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StreamPeerTCP")());
}
error stream_peer_tcp::connect_to_host(const string host, const int64_t port) {
	return (error) ___godot_icall_int_String_int(___mb.mb_connect_to_host, (const object *) this, host, port);
}

void stream_peer_tcp::disconnect_from_host() {
	___godot_icall_void(___mb.mb_disconnect_from_host, (const object *) this);
}

string stream_peer_tcp::get_connected_host() const {
	return ___godot_icall_String(___mb.mb_get_connected_host, (const object *) this);
}

int64_t stream_peer_tcp::get_connected_port() const {
	return ___godot_icall_int(___mb.mb_get_connected_port, (const object *) this);
}

stream_peer_tcp::Status stream_peer_tcp::get_status() {
	return (stream_peer_tcp::Status) ___godot_icall_int(___mb.mb_get_status, (const object *) this);
}

bool stream_peer_tcp::is_connected_to_host() const {
	return ___godot_icall_bool(___mb.mb_is_connected_to_host, (const object *) this);
}

void stream_peer_tcp::set_no_delay(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_no_delay, (const object *) this, enabled);
}

}