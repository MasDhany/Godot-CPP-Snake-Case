#ifndef GODOT_CPP_VISUALSCRIPTFUNCTIONCALL_HPP
#define GODOT_CPP_VISUALSCRIPTFUNCTIONCALL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "variant.hpp"
#include "visual_script_function_call.hpp"

#include "visual_script_node.hpp"
namespace gd {


class visual_script_function_call : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb__get_argument_cache;
		godot_method_bind *mb__set_argument_cache;
		godot_method_bind *mb_get_base_path;
		godot_method_bind *mb_get_base_script;
		godot_method_bind *mb_get_base_type;
		godot_method_bind *mb_get_basic_type;
		godot_method_bind *mb_get_call_mode;
		godot_method_bind *mb_get_function;
		godot_method_bind *mb_get_rpc_call_mode;
		godot_method_bind *mb_get_singleton;
		godot_method_bind *mb_get_use_default_args;
		godot_method_bind *mb_get_validate;
		godot_method_bind *mb_set_base_path;
		godot_method_bind *mb_set_base_script;
		godot_method_bind *mb_set_base_type;
		godot_method_bind *mb_set_basic_type;
		godot_method_bind *mb_set_call_mode;
		godot_method_bind *mb_set_function;
		godot_method_bind *mb_set_rpc_call_mode;
		godot_method_bind *mb_set_singleton;
		godot_method_bind *mb_set_use_default_args;
		godot_method_bind *mb_set_validate;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptFunctionCall"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptFunctionCall"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum RPCCallMode {
		RPC_DISABLED = 0,
		RPC_RELIABLE = 1,
		RPC_UNRELIABLE = 2,
		RPC_RELIABLE_TO_ID = 3,
		RPC_UNRELIABLE_TO_ID = 4,
	};
	enum CallMode {
		CALL_MODE_SELF = 0,
		CALL_MODE_NODE_PATH = 1,
		CALL_MODE_INSTANCE = 2,
		CALL_MODE_BASIC_TYPE = 3,
		CALL_MODE_SINGLETON = 4,
	};

	// constants


	static visual_script_function_call *_new();

	// methods
	dictionary _get_argument_cache() const;
	void _set_argument_cache(const dictionary argument_cache);
	node_path get_base_path() const;
	string get_base_script() const;
	string get_base_type() const;
	variant::Type get_basic_type() const;
	visual_script_function_call::CallMode get_call_mode() const;
	string get_function() const;
	visual_script_function_call::RPCCallMode get_rpc_call_mode() const;
	string get_singleton() const;
	int64_t get_use_default_args() const;
	bool get_validate() const;
	void set_base_path(const node_path base_path);
	void set_base_script(const string base_script);
	void set_base_type(const string base_type);
	void set_basic_type(const int64_t basic_type);
	void set_call_mode(const int64_t mode);
	void set_function(const string function);
	void set_rpc_call_mode(const int64_t mode);
	void set_singleton(const string singleton);
	void set_use_default_args(const int64_t amount);
	void set_validate(const bool enable);

};

}

#endif