#ifndef GODOT_CPP_JSONPARSERESULT_HPP
#define GODOT_CPP_JSONPARSERESULT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class jsonparse_result : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_error;
		godot_method_bind *mb_get_error_line;
		godot_method_bind *mb_get_error_string;
		godot_method_bind *mb_get_result;
		godot_method_bind *mb_set_error;
		godot_method_bind *mb_set_error_line;
		godot_method_bind *mb_set_error_string;
		godot_method_bind *mb_set_result;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "JSONParseResult"; }
	static inline const char *___get_godot_class_name() { return (const char *) "JSONParseResult"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static jsonparse_result *_new();

	// methods
	error get_error() const;
	int64_t get_error_line() const;
	string get_error_string() const;
	variant get_result() const;
	void set_error(const int64_t error_);
	void set_error_line(const int64_t error_line);
	void set_error_string(const string error_string);
	void set_result(const variant result);

};

}

#endif