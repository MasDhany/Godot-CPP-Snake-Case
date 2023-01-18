#ifndef GODOT_CPP_RESOURCESAVER_HPP
#define GODOT_CPP_RESOURCESAVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class resource;

class resource_saver : public object {
	static resource_saver *_singleton;

	resource_saver();

	struct ___method_bindings {
		godot_method_bind *mb_get_recognized_extensions;
		godot_method_bind *mb_save;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline resource_saver *get_singleton()
	{
		if (!resource_saver::_singleton) {
			resource_saver::_singleton = new resource_saver;
		}
		return resource_saver::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "ResourceSaver"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ResourceSaver"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum SaverFlags {
		FLAG_RELATIVE_PATHS = 1,
		FLAG_BUNDLE_RESOURCES = 2,
		FLAG_CHANGE_PATH = 4,
		FLAG_OMIT_EDITOR_PROPERTIES = 8,
		FLAG_SAVE_BIG_ENDIAN = 16,
		FLAG_COMPRESS = 32,
		FLAG_REPLACE_SUBRESOURCE_PATHS = 64,
	};

	// constants

	// methods
	pool_string_array get_recognized_extensions(const ref<resource> type);
	error save(const string path_, const ref<resource> resource_, const int64_t flags = 0);

};

}

#endif