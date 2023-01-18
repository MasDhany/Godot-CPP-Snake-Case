#include "web_socket_peer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


web_socket_peer::___method_bindings web_socket_peer::___mb = {};

void *web_socket_peer::_detail_class_tag = nullptr;

void web_socket_peer::___init_method_bindings() {
	___mb.mb_close = gd::api->godot_method_bind_get_method("WebSocketPeer", "close");
	___mb.mb_get_connected_host = gd::api->godot_method_bind_get_method("WebSocketPeer", "get_connected_host");
	___mb.mb_get_connected_port = gd::api->godot_method_bind_get_method("WebSocketPeer", "get_connected_port");
	___mb.mb_get_current_outbound_buffered_amount = gd::api->godot_method_bind_get_method("WebSocketPeer", "get_current_outbound_buffered_amount");
	___mb.mb_get_write_mode = gd::api->godot_method_bind_get_method("WebSocketPeer", "get_write_mode");
	___mb.mb_is_connected_to_host = gd::api->godot_method_bind_get_method("WebSocketPeer", "is_connected_to_host");
	___mb.mb_set_no_delay = gd::api->godot_method_bind_get_method("WebSocketPeer", "set_no_delay");
	___mb.mb_set_write_mode = gd::api->godot_method_bind_get_method("WebSocketPeer", "set_write_mode");
	___mb.mb_was_string_packet = gd::api->godot_method_bind_get_method("WebSocketPeer", "was_string_packet");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WebSocketPeer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

web_socket_peer *web_socket_peer::_new()
{
	return (web_socket_peer *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WebSocketPeer")());
}
void web_socket_peer::close(const int64_t code, const string reason) {
	___godot_icall_void_int_String(___mb.mb_close, (const object *) this, code, reason);
}

string web_socket_peer::get_connected_host() const {
	return ___godot_icall_String(___mb.mb_get_connected_host, (const object *) this);
}

int64_t web_socket_peer::get_connected_port() const {
	return ___godot_icall_int(___mb.mb_get_connected_port, (const object *) this);
}

int64_t web_socket_peer::get_current_outbound_buffered_amount() const {
	return ___godot_icall_int(___mb.mb_get_current_outbound_buffered_amount, (const object *) this);
}

web_socket_peer::WriteMode web_socket_peer::get_write_mode() const {
	return (web_socket_peer::WriteMode) ___godot_icall_int(___mb.mb_get_write_mode, (const object *) this);
}

bool web_socket_peer::is_connected_to_host() const {
	return ___godot_icall_bool(___mb.mb_is_connected_to_host, (const object *) this);
}

void web_socket_peer::set_no_delay(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_no_delay, (const object *) this, enabled);
}

void web_socket_peer::set_write_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_write_mode, (const object *) this, mode);
}

bool web_socket_peer::was_string_packet() const {
	return ___godot_icall_bool(___mb.mb_was_string_packet, (const object *) this);
}

}