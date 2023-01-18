#ifndef GODOT_CPP_TEXTUREBUTTON_HPP
#define GODOT_CPP_TEXTUREBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "texture_button.hpp"

#include "base_button.hpp"
namespace gd {

class bit_map;
class texture;

class texture_button : public base_button {
	struct ___method_bindings {
		godot_method_bind *mb_get_click_mask;
		godot_method_bind *mb_get_disabled_texture;
		godot_method_bind *mb_get_expand;
		godot_method_bind *mb_get_focused_texture;
		godot_method_bind *mb_get_hover_texture;
		godot_method_bind *mb_get_normal_texture;
		godot_method_bind *mb_get_pressed_texture;
		godot_method_bind *mb_get_stretch_mode;
		godot_method_bind *mb_is_flipped_h;
		godot_method_bind *mb_is_flipped_v;
		godot_method_bind *mb_set_click_mask;
		godot_method_bind *mb_set_disabled_texture;
		godot_method_bind *mb_set_expand;
		godot_method_bind *mb_set_flip_h;
		godot_method_bind *mb_set_flip_v;
		godot_method_bind *mb_set_focused_texture;
		godot_method_bind *mb_set_hover_texture;
		godot_method_bind *mb_set_normal_texture;
		godot_method_bind *mb_set_pressed_texture;
		godot_method_bind *mb_set_stretch_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TextureButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TextureButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum StretchMode {
		STRETCH_SCALE = 0,
		STRETCH_TILE = 1,
		STRETCH_KEEP = 2,
		STRETCH_KEEP_CENTERED = 3,
		STRETCH_KEEP_ASPECT = 4,
		STRETCH_KEEP_ASPECT_CENTERED = 5,
		STRETCH_KEEP_ASPECT_COVERED = 6,
	};

	// constants


	static texture_button *_new();

	// methods
	ref<bit_map> get_click_mask() const;
	ref<texture> get_disabled_texture() const;
	bool get_expand() const;
	ref<texture> get_focused_texture() const;
	ref<texture> get_hover_texture() const;
	ref<texture> get_normal_texture() const;
	ref<texture> get_pressed_texture() const;
	texture_button::StretchMode get_stretch_mode() const;
	bool is_flipped_h() const;
	bool is_flipped_v() const;
	void set_click_mask(const ref<bit_map> mask);
	void set_disabled_texture(const ref<texture> texture_);
	void set_expand(const bool p_expand);
	void set_flip_h(const bool enable);
	void set_flip_v(const bool enable);
	void set_focused_texture(const ref<texture> texture_);
	void set_hover_texture(const ref<texture> texture_);
	void set_normal_texture(const ref<texture> texture_);
	void set_pressed_texture(const ref<texture> texture_);
	void set_stretch_mode(const int64_t p_mode);

};

}

#endif