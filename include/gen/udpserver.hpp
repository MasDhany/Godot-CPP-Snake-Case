#ifndef GODOT_CPP_UDPSERVER_HPP
#define GODOT_CPP_UDPSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class packet_peer_udp;

class udpserver : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_max_pending_connections;
		godot_method_bind *mb_is_connection_available;
		godot_method_bind *mb_is_listening;
		godot_method_bind *mb_listen;
		godot_method_bind *mb_poll;
		godot_method_bind *mb_set_max_pending_connections;
		godot_method_bind *mb_stop;
		godot_method_bind *mb_take_connection;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "UDPServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "UDPServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static udpserver *_new();

	// methods
	int64_t get_max_pending_connections() const;
	bool is_connection_available() const;
	bool is_listening() const;
	error listen(const int64_t port, const string bind_address = "*");
	error poll();
	void set_max_pending_connections(const int64_t max_pending_connections);
	void stop();
	ref<packet_peer_udp> take_connection();

};

}

#endif