#ifndef GODOT_CPP_JSONRPC_HPP
#define GODOT_CPP_JSONRPC_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class object;

class jsonrpc : public object {
	struct ___method_bindings {
		godot_method_bind *mb_make_notification;
		godot_method_bind *mb_make_request;
		godot_method_bind *mb_make_response;
		godot_method_bind *mb_make_response_error;
		godot_method_bind *mb_process_action;
		godot_method_bind *mb_process_string;
		godot_method_bind *mb_set_scope;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "JSONRPC"; }
	static inline const char *___get_godot_class_name() { return (const char *) "JSONRPC"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ErrorCode {
		PARSE_ERROR = -32700,
		INTERNAL_ERROR = -32603,
		INVALID_PARAMS = -32602,
		METHOD_NOT_FOUND = -32601,
		INVALID_REQUEST = -32600,
	};

	// constants


	static jsonrpc *_new();

	// methods
	dictionary make_notification(const string method, const variant params);
	dictionary make_request(const string method, const variant params, const variant id);
	dictionary make_response(const variant result, const variant id);
	dictionary make_response_error(const int64_t code, const string message, const variant id = variant()) const;
	variant process_action(const variant action, const bool recurse = false);
	string process_string(const string action);
	void set_scope(const string scope, const object *target);

};

}

#endif