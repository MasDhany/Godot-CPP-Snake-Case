#ifndef GODOT_CPP_VISUALSCRIPTPROPERTYGET_HPP
#define GODOT_CPP_VISUALSCRIPTPROPERTYGET_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "variant.hpp"
#include "visual_script_property_get.hpp"

#include "visual_script_node.hpp"
namespace gd {


class visual_script_property_get : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb__get_type_cache;
		godot_method_bind *mb__set_type_cache;
		godot_method_bind *mb_get_base_path;
		godot_method_bind *mb_get_base_script;
		godot_method_bind *mb_get_base_type;
		godot_method_bind *mb_get_basic_type;
		godot_method_bind *mb_get_call_mode;
		godot_method_bind *mb_get_index;
		godot_method_bind *mb_get_property;
		godot_method_bind *mb_set_base_path;
		godot_method_bind *mb_set_base_script;
		godot_method_bind *mb_set_base_type;
		godot_method_bind *mb_set_basic_type;
		godot_method_bind *mb_set_call_mode;
		godot_method_bind *mb_set_index;
		godot_method_bind *mb_set_property;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptPropertyGet"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptPropertyGet"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum CallMode {
		CALL_MODE_SELF = 0,
		CALL_MODE_NODE_PATH = 1,
		CALL_MODE_INSTANCE = 2,
		CALL_MODE_BASIC_TYPE = 3,
	};

	// constants


	static visual_script_property_get *_new();

	// methods
	variant::Type _get_type_cache() const;
	void _set_type_cache(const int64_t type_cache);
	node_path get_base_path() const;
	string get_base_script() const;
	string get_base_type() const;
	variant::Type get_basic_type() const;
	visual_script_property_get::CallMode get_call_mode() const;
	string get_index() const;
	string get_property() const;
	void set_base_path(const node_path base_path);
	void set_base_script(const string base_script);
	void set_base_type(const string base_type);
	void set_basic_type(const int64_t basic_type);
	void set_call_mode(const int64_t mode);
	void set_index(const string index);
	void set_property(const string property);

};

}

#endif