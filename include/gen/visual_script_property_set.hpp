#ifndef GODOT_CPP_VISUALSCRIPTPROPERTYSET_HPP
#define GODOT_CPP_VISUALSCRIPTPROPERTYSET_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "variant.hpp"
#include "visual_script_property_set.hpp"

#include "visual_script_node.hpp"
namespace gd {


class visual_script_property_set : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb__get_type_cache;
		godot_method_bind *mb__set_type_cache;
		godot_method_bind *mb_get_assign_op;
		godot_method_bind *mb_get_base_path;
		godot_method_bind *mb_get_base_script;
		godot_method_bind *mb_get_base_type;
		godot_method_bind *mb_get_basic_type;
		godot_method_bind *mb_get_call_mode;
		godot_method_bind *mb_get_index;
		godot_method_bind *mb_get_property;
		godot_method_bind *mb_set_assign_op;
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

	static inline const char *___get_class_name() { return (const char *) "VisualScriptPropertySet"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptPropertySet"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AssignOp {
		ASSIGN_OP_NONE = 0,
		ASSIGN_OP_ADD = 1,
		ASSIGN_OP_SUB = 2,
		ASSIGN_OP_MUL = 3,
		ASSIGN_OP_DIV = 4,
		ASSIGN_OP_MOD = 5,
		ASSIGN_OP_SHIFT_LEFT = 6,
		ASSIGN_OP_SHIFT_RIGHT = 7,
		ASSIGN_OP_BIT_AND = 8,
		ASSIGN_OP_BIT_OR = 9,
		ASSIGN_OP_BIT_XOR = 10,
	};
	enum CallMode {
		CALL_MODE_SELF = 0,
		CALL_MODE_NODE_PATH = 1,
		CALL_MODE_INSTANCE = 2,
		CALL_MODE_BASIC_TYPE = 3,
	};

	// constants


	static visual_script_property_set *_new();

	// methods
	dictionary _get_type_cache() const;
	void _set_type_cache(const dictionary type_cache);
	visual_script_property_set::AssignOp get_assign_op() const;
	node_path get_base_path() const;
	string get_base_script() const;
	string get_base_type() const;
	variant::Type get_basic_type() const;
	visual_script_property_set::CallMode get_call_mode() const;
	string get_index() const;
	string get_property() const;
	void set_assign_op(const int64_t assign_op);
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