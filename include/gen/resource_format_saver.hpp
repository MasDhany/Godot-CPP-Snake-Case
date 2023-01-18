#ifndef GODOT_CPP_RESOURCEFORMATSAVER_HPP
#define GODOT_CPP_RESOURCEFORMATSAVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class resource;

class resource_format_saver : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_recognized_extensions;
		godot_method_bind *mb_recognize;
		godot_method_bind *mb_save;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ResourceFormatSaver"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ResourceFormatSaver"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static resource_format_saver *_new();

	// methods
	pool_string_array get_recognized_extensions(const ref<resource> resource_);
	bool recognize(const ref<resource> resource_);
	int64_t save(const string path_, const ref<resource> resource_, const int64_t flags);

};

}

#endif