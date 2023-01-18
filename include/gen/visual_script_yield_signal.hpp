#ifndef GODOT_CPP_VISUALSCRIPTYIELDSIGNAL_HPP
#define GODOT_CPP_VISUALSCRIPTYIELDSIGNAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_script_yield_signal.hpp"

#include "visual_script_node.hpp"
namespace gd {


class visual_script_yield_signal : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_base_path;
		godot_method_bind *mb_get_base_type;
		godot_method_bind *mb_get_call_mode;
		godot_method_bind *mb_get_signal;
		godot_method_bind *mb_set_base_path;
		godot_method_bind *mb_set_base_type;
		godot_method_bind *mb_set_call_mode;
		godot_method_bind *mb_set_signal;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptYieldSignal"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptYieldSignal"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum CallMode {
		CALL_MODE_SELF = 0,
		CALL_MODE_NODE_PATH = 1,
		CALL_MODE_INSTANCE = 2,
	};

	// constants


	static visual_script_yield_signal *_new();

	// methods
	node_path get_base_path() const;
	string get_base_type() const;
	visual_script_yield_signal::CallMode get_call_mode() const;
	string get_signal() const;
	void set_base_path(const node_path base_path);
	void set_base_type(const string base_type);
	void set_call_mode(const int64_t mode);
	void set_signal(const string signal);

};

}

#endif