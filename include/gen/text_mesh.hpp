#ifndef GODOT_CPP_TEXTMESH_HPP
#define GODOT_CPP_TEXTMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "text_mesh.hpp"

#include "primitive_mesh.hpp"
namespace gd {

class font;

class text_mesh : public primitive_mesh {
	struct ___method_bindings {
		godot_method_bind *mb__font_changed;
		godot_method_bind *mb_get_curve_step;
		godot_method_bind *mb_get_depth;
		godot_method_bind *mb_get_font;
		godot_method_bind *mb_get_horizontal_alignment;
		godot_method_bind *mb_get_pixel_size;
		godot_method_bind *mb_get_text;
		godot_method_bind *mb_is_uppercase;
		godot_method_bind *mb_set_curve_step;
		godot_method_bind *mb_set_depth;
		godot_method_bind *mb_set_font;
		godot_method_bind *mb_set_horizontal_alignment;
		godot_method_bind *mb_set_pixel_size;
		godot_method_bind *mb_set_text;
		godot_method_bind *mb_set_uppercase;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TextMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TextMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Align {
		ALIGN_LEFT = 0,
		ALIGN_CENTER = 1,
		ALIGN_RIGHT = 2,
	};

	// constants


	static text_mesh *_new();

	// methods
	void _font_changed();
	real_t get_curve_step() const;
	real_t get_depth() const;
	ref<font> get_font() const;
	text_mesh::Align get_horizontal_alignment() const;
	real_t get_pixel_size() const;
	string get_text() const;
	bool is_uppercase() const;
	void set_curve_step(const real_t curve_step);
	void set_depth(const real_t depth);
	void set_font(const ref<font> font_);
	void set_horizontal_alignment(const int64_t alignment);
	void set_pixel_size(const real_t pixel_size);
	void set_text(const string text);
	void set_uppercase(const bool enable);

};

}

#endif