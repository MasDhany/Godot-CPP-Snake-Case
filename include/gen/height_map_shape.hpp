#ifndef GODOT_CPP_HEIGHTMAPSHAPE_HPP
#define GODOT_CPP_HEIGHTMAPSHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "shape.hpp"
namespace gd {


class height_map_shape : public shape {
	struct ___method_bindings {
		godot_method_bind *mb_get_map_data;
		godot_method_bind *mb_get_map_depth;
		godot_method_bind *mb_get_map_width;
		godot_method_bind *mb_set_map_data;
		godot_method_bind *mb_set_map_depth;
		godot_method_bind *mb_set_map_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "HeightMapShape"; }
	static inline const char *___get_godot_class_name() { return (const char *) "HeightMapShape"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static height_map_shape *_new();

	// methods
	pool_real_array get_map_data() const;
	int64_t get_map_depth() const;
	int64_t get_map_width() const;
	void set_map_data(const pool_real_array data);
	void set_map_depth(const int64_t height);
	void set_map_width(const int64_t width);

};

}

#endif