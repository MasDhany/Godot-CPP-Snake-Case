#ifndef GODOT_CPP_CLASSDB_HPP
#define GODOT_CPP_CLASSDB_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class object;

class class_db : public object {
	static class_db *_singleton;

	class_db();

	struct ___method_bindings {
		godot_method_bind *mb_can_instance;
		godot_method_bind *mb_class_exists;
		godot_method_bind *mb_class_get_category;
		godot_method_bind *mb_class_get_enum_constants;
		godot_method_bind *mb_class_get_enum_list;
		godot_method_bind *mb_class_get_integer_constant;
		godot_method_bind *mb_class_get_integer_constant_enum;
		godot_method_bind *mb_class_get_integer_constant_list;
		godot_method_bind *mb_class_get_method_list;
		godot_method_bind *mb_class_get_property;
		godot_method_bind *mb_class_get_property_list;
		godot_method_bind *mb_class_get_signal;
		godot_method_bind *mb_class_get_signal_list;
		godot_method_bind *mb_class_has_enum;
		godot_method_bind *mb_class_has_integer_constant;
		godot_method_bind *mb_class_has_method;
		godot_method_bind *mb_class_has_signal;
		godot_method_bind *mb_class_set_property;
		godot_method_bind *mb_get_class_list;
		godot_method_bind *mb_get_inheriters_from_class;
		godot_method_bind *mb_get_parent_class;
		godot_method_bind *mb_instance;
		godot_method_bind *mb_is_class_enabled;
		godot_method_bind *mb_is_parent_class;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline class_db *get_singleton()
	{
		if (!class_db::_singleton) {
			class_db::_singleton = new class_db;
		}
		return class_db::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "ClassDB"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ClassDB"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool can_instance(const string _class) const;
	bool class_exists(const string _class) const;
	string class_get_category(const string _class) const;
	pool_string_array class_get_enum_constants(const string _class, const string _enum, const bool no_inheritance = false) const;
	pool_string_array class_get_enum_list(const string _class, const bool no_inheritance = false) const;
	int64_t class_get_integer_constant(const string _class, const string name) const;
	string class_get_integer_constant_enum(const string _class, const string name, const bool no_inheritance = false) const;
	pool_string_array class_get_integer_constant_list(const string _class, const bool no_inheritance = false) const;
	array class_get_method_list(const string _class, const bool no_inheritance = false) const;
	variant class_get_property(const object *object_, const string property) const;
	array class_get_property_list(const string _class, const bool no_inheritance = false) const;
	dictionary class_get_signal(const string _class, const string signal) const;
	array class_get_signal_list(const string _class, const bool no_inheritance = false) const;
	bool class_has_enum(const string _class, const string name, const bool no_inheritance = false) const;
	bool class_has_integer_constant(const string _class, const string name) const;
	bool class_has_method(const string _class, const string method, const bool no_inheritance = false) const;
	bool class_has_signal(const string _class, const string signal) const;
	error class_set_property(const object *object_, const string property, const variant value) const;
	pool_string_array get_class_list() const;
	pool_string_array get_inheriters_from_class(const string _class) const;
	string get_parent_class(const string _class) const;
	variant instance(const string _class) const;
	bool is_class_enabled(const string _class) const;
	bool is_parent_class(const string _class, const string inherits) const;

};

}

#endif