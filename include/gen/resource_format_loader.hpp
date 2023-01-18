#ifndef GODOT_CPP_RESOURCEFORMATLOADER_HPP
#define GODOT_CPP_RESOURCEFORMATLOADER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class resource_format_loader : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_dependencies;
		godot_method_bind *mb_get_recognized_extensions;
		godot_method_bind *mb_get_resource_type;
		godot_method_bind *mb_handles_type;
		godot_method_bind *mb_load;
		godot_method_bind *mb_rename_dependencies;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ResourceFormatLoader"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ResourceFormatLoader"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static resource_format_loader *_new();

	// methods
	void get_dependencies(const string path_, const string add_types);
	pool_string_array get_recognized_extensions();
	string get_resource_type(const string path_);
	bool handles_type(const string _typename);
	variant load(const string path_, const string original_path);
	int64_t rename_dependencies(const string path_, const string renames);

};

}

#endif