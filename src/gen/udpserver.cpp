#include "udpserver.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "packet_peer_udp.hpp"


namespace gd {


udpserver::___method_bindings udpserver::___mb = {};

void *udpserver::_detail_class_tag = nullptr;

void udpserver::___init_method_bindings() {
	___mb.mb_get_max_pending_connections = gd::api->godot_method_bind_get_method("UDPServer", "get_max_pending_connections");
	___mb.mb_is_connection_available = gd::api->godot_method_bind_get_method("UDPServer", "is_connection_available");
	___mb.mb_is_listening = gd::api->godot_method_bind_get_method("UDPServer", "is_listening");
	___mb.mb_listen = gd::api->godot_method_bind_get_method("UDPServer", "listen");
	___mb.mb_poll = gd::api->godot_method_bind_get_method("UDPServer", "poll");
	___mb.mb_set_max_pending_connections = gd::api->godot_method_bind_get_method("UDPServer", "set_max_pending_connections");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("UDPServer", "stop");
	___mb.mb_take_connection = gd::api->godot_method_bind_get_method("UDPServer", "take_connection");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "UDPServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

udpserver *udpserver::_new()
{
	return (udpserver *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"UDPServer")());
}
int64_t udpserver::get_max_pending_connections() const {
	return ___godot_icall_int(___mb.mb_get_max_pending_connections, (const object *) this);
}

bool udpserver::is_connection_available() const {
	return ___godot_icall_bool(___mb.mb_is_connection_available, (const object *) this);
}

bool udpserver::is_listening() const {
	return ___godot_icall_bool(___mb.mb_is_listening, (const object *) this);
}

error udpserver::listen(const int64_t port, const string bind_address) {
	return (error) ___godot_icall_int_int_String(___mb.mb_listen, (const object *) this, port, bind_address);
}

error udpserver::poll() {
	return (error) ___godot_icall_int(___mb.mb_poll, (const object *) this);
}

void udpserver::set_max_pending_connections(const int64_t max_pending_connections) {
	___godot_icall_void_int(___mb.mb_set_max_pending_connections, (const object *) this, max_pending_connections);
}

void udpserver::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

ref<packet_peer_udp> udpserver::take_connection() {
	return ref<packet_peer_udp>::__internal_constructor(___godot_icall_Object(___mb.mb_take_connection, (const object *) this));
}

}