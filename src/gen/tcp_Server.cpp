#include "tcp_Server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "stream_peer_tcp.hpp"


namespace gd {


tcp_Server::___method_bindings tcp_Server::___mb = {};

void *tcp_Server::_detail_class_tag = nullptr;

void tcp_Server::___init_method_bindings() {
	___mb.mb_is_connection_available = gd::api->godot_method_bind_get_method("TCP_Server", "is_connection_available");
	___mb.mb_is_listening = gd::api->godot_method_bind_get_method("TCP_Server", "is_listening");
	___mb.mb_listen = gd::api->godot_method_bind_get_method("TCP_Server", "listen");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("TCP_Server", "stop");
	___mb.mb_take_connection = gd::api->godot_method_bind_get_method("TCP_Server", "take_connection");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TCP_Server");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

tcp_Server *tcp_Server::_new()
{
	return (tcp_Server *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TCP_Server")());
}
bool tcp_Server::is_connection_available() const {
	return ___godot_icall_bool(___mb.mb_is_connection_available, (const object *) this);
}

bool tcp_Server::is_listening() const {
	return ___godot_icall_bool(___mb.mb_is_listening, (const object *) this);
}

error tcp_Server::listen(const int64_t port, const string bind_address) {
	return (error) ___godot_icall_int_int_String(___mb.mb_listen, (const object *) this, port, bind_address);
}

void tcp_Server::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

ref<stream_peer_tcp> tcp_Server::take_connection() {
	return ref<stream_peer_tcp>::__internal_constructor(___godot_icall_Object(___mb.mb_take_connection, (const object *) this));
}

}