#ifndef GODOT_CPP_TCP_SERVER_HPP
#define GODOT_CPP_TCP_SERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class stream_peer_tcp;

class tcp_Server : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_is_connection_available;
		godot_method_bind *mb_is_listening;
		godot_method_bind *mb_listen;
		godot_method_bind *mb_stop;
		godot_method_bind *mb_take_connection;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TCP_Server"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TCP_Server"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static tcp_Server *_new();

	// methods
	bool is_connection_available() const;
	bool is_listening() const;
	error listen(const int64_t port, const string bind_address = "*");
	void stop();
	ref<stream_peer_tcp> take_connection();

};

}

#endif