#ifndef GODOT_CPP_BACKBUFFERCOPY_HPP
#define GODOT_CPP_BACKBUFFERCOPY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "back_buffer_copy.hpp"

#include "node2d.hpp"
namespace gd {


class back_buffer_copy : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_get_copy_mode;
		godot_method_bind *mb_get_rect;
		godot_method_bind *mb_set_copy_mode;
		godot_method_bind *mb_set_rect;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BackBufferCopy"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BackBufferCopy"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum CopyMode {
		COPY_MODE_DISABLED = 0,
		COPY_MODE_RECT = 1,
		COPY_MODE_VIEWPORT = 2,
	};

	// constants


	static back_buffer_copy *_new();

	// methods
	back_buffer_copy::CopyMode get_copy_mode() const;
	rect2 get_rect() const;
	void set_copy_mode(const int64_t copy_mode);
	void set_rect(const rect2 rect);

};

}

#endif