#ifndef GODOT_CPP_CUBEMAP_HPP
#define GODOT_CPP_CUBEMAP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "cube_map.hpp"

#include "resource.hpp"
namespace gd {

class image;

class cube_map : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_flags;
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_lossy_storage_quality;
		godot_method_bind *mb_get_side;
		godot_method_bind *mb_get_storage;
		godot_method_bind *mb_get_width;
		godot_method_bind *mb_set_flags;
		godot_method_bind *mb_set_lossy_storage_quality;
		godot_method_bind *mb_set_side;
		godot_method_bind *mb_set_storage;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CubeMap"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CubeMap"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Flags {
		FLAG_MIPMAPS = 1,
		FLAG_REPEAT = 2,
		FLAG_FILTER = 4,
		FLAGS_DEFAULT = 7,
	};
	enum Side {
		SIDE_LEFT = 0,
		SIDE_RIGHT = 1,
		SIDE_BOTTOM = 2,
		SIDE_TOP = 3,
		SIDE_FRONT = 4,
		SIDE_BACK = 5,
	};
	enum Storage {
		STORAGE_RAW = 0,
		STORAGE_COMPRESS_LOSSY = 1,
		STORAGE_COMPRESS_LOSSLESS = 2,
	};

	// constants


	static cube_map *_new();

	// methods
	int64_t get_flags() const;
	int64_t get_height() const;
	real_t get_lossy_storage_quality() const;
	ref<image> get_side(const int64_t side) const;
	cube_map::Storage get_storage() const;
	int64_t get_width() const;
	void set_flags(const int64_t flags);
	void set_lossy_storage_quality(const real_t quality);
	void set_side(const int64_t side, const ref<image> image_);
	void set_storage(const int64_t mode);

};

}

#endif