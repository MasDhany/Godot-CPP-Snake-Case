#ifndef GODOT_CPP_BUTTON_HPP
#define GODOT_CPP_BUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "button.hpp"

#include "base_button.hpp"
namespace gd {

class texture;

class button : public base_button {
	struct ___method_bindings {
		godot_method_bind *mb_get_button_icon;
		godot_method_bind *mb_get_clip_text;
		godot_method_bind *mb_get_icon_align;
		godot_method_bind *mb_get_text;
		godot_method_bind *mb_get_text_align;
		godot_method_bind *mb_is_expand_icon;
		godot_method_bind *mb_is_flat;
		godot_method_bind *mb_set_button_icon;
		godot_method_bind *mb_set_clip_text;
		godot_method_bind *mb_set_expand_icon;
		godot_method_bind *mb_set_flat;
		godot_method_bind *mb_set_icon_align;
		godot_method_bind *mb_set_text;
		godot_method_bind *mb_set_text_align;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Button"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Button"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TextAlign {
		ALIGN_LEFT = 0,
		ALIGN_CENTER = 1,
		ALIGN_RIGHT = 2,
	};

	// constants


	static button *_new();

	// methods
	ref<texture> get_button_icon() const;
	bool get_clip_text() const;
	button::TextAlign get_icon_align() const;
	string get_text() const;
	button::TextAlign get_text_align() const;
	bool is_expand_icon() const;
	bool is_flat() const;
	void set_button_icon(const ref<texture> texture_);
	void set_clip_text(const bool enabled);
	void set_expand_icon(const bool enabled);
	void set_flat(const bool enabled);
	void set_icon_align(const int64_t icon_align);
	void set_text(const string text);
	void set_text_align(const int64_t align);

};

}

#endif