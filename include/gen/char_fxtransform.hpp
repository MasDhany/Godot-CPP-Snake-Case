#ifndef GODOT_CPP_CHARFXTRANSFORM_HPP
#define GODOT_CPP_CHARFXTRANSFORM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class char_fxtransform : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_absolute_index;
		godot_method_bind *mb_get_character;
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_elapsed_time;
		godot_method_bind *mb_get_environment;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_get_relative_index;
		godot_method_bind *mb_is_visible;
		godot_method_bind *mb_set_absolute_index;
		godot_method_bind *mb_set_character;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_elapsed_time;
		godot_method_bind *mb_set_environment;
		godot_method_bind *mb_set_offset;
		godot_method_bind *mb_set_relative_index;
		godot_method_bind *mb_set_visibility;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CharFXTransform"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CharFXTransform"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static char_fxtransform *_new();

	// methods
	int64_t get_absolute_index();
	int64_t get_character();
	color get_color();
	real_t get_elapsed_time();
	dictionary get_environment();
	vector2 get_offset();
	int64_t get_relative_index();
	bool is_visible();
	void set_absolute_index(const int64_t index);
	void set_character(const int64_t character);
	void set_color(const color color_);
	void set_elapsed_time(const real_t time_);
	void set_environment(const dictionary environment_);
	void set_offset(const vector2 offset);
	void set_relative_index(const int64_t index);
	void set_visibility(const bool visibility);

};

}

#endif