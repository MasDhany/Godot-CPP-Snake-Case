#ifndef GODOT_CPP_ASPECTRATIOCONTAINER_HPP
#define GODOT_CPP_ASPECTRATIOCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "aspect_ratio_container.hpp"

#include "container.hpp"
namespace gd {


class aspect_ratio_container : public container {
	struct ___method_bindings {
		godot_method_bind *mb_get_alignment_horizontal;
		godot_method_bind *mb_get_alignment_vertical;
		godot_method_bind *mb_get_ratio;
		godot_method_bind *mb_get_stretch_mode;
		godot_method_bind *mb_set_alignment_horizontal;
		godot_method_bind *mb_set_alignment_vertical;
		godot_method_bind *mb_set_ratio;
		godot_method_bind *mb_set_stretch_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AspectRatioContainer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AspectRatioContainer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AlignMode {
		ALIGN_BEGIN = 0,
		ALIGN_CENTER = 1,
		ALIGN_END = 2,
	};
	enum StretchMode {
		STRETCH_WIDTH_CONTROLS_HEIGHT = 0,
		STRETCH_HEIGHT_CONTROLS_WIDTH = 1,
		STRETCH_FIT = 2,
		STRETCH_COVER = 3,
	};

	// constants


	static aspect_ratio_container *_new();

	// methods
	aspect_ratio_container::AlignMode get_alignment_horizontal() const;
	aspect_ratio_container::AlignMode get_alignment_vertical() const;
	real_t get_ratio() const;
	aspect_ratio_container::StretchMode get_stretch_mode() const;
	void set_alignment_horizontal(const int64_t alignment_horizontal);
	void set_alignment_vertical(const int64_t alignment_vertical);
	void set_ratio(const real_t ratio);
	void set_stretch_mode(const int64_t stretch_mode);

};

}

#endif