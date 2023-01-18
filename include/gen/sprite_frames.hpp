#ifndef GODOT_CPP_SPRITEFRAMES_HPP
#define GODOT_CPP_SPRITEFRAMES_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class texture;

class sprite_frames : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_animations;
		godot_method_bind *mb__get_frames;
		godot_method_bind *mb__set_animations;
		godot_method_bind *mb__set_frames;
		godot_method_bind *mb_add_animation;
		godot_method_bind *mb_add_frame;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_clear_all;
		godot_method_bind *mb_get_animation_loop;
		godot_method_bind *mb_get_animation_names;
		godot_method_bind *mb_get_animation_speed;
		godot_method_bind *mb_get_frame;
		godot_method_bind *mb_get_frame_count;
		godot_method_bind *mb_has_animation;
		godot_method_bind *mb_remove_animation;
		godot_method_bind *mb_remove_frame;
		godot_method_bind *mb_rename_animation;
		godot_method_bind *mb_set_animation_loop;
		godot_method_bind *mb_set_animation_speed;
		godot_method_bind *mb_set_frame;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SpriteFrames"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SpriteFrames"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static sprite_frames *_new();

	// methods
	array _get_animations() const;
	array _get_frames() const;
	void _set_animations(const array arg0);
	void _set_frames(const array arg0);
	void add_animation(const string anim);
	void add_frame(const string anim, const ref<texture> frame, const int64_t at_position = -1);
	void clear(const string anim);
	void clear_all();
	bool get_animation_loop(const string anim) const;
	pool_string_array get_animation_names() const;
	real_t get_animation_speed(const string anim) const;
	ref<texture> get_frame(const string anim, const int64_t idx) const;
	int64_t get_frame_count(const string anim) const;
	bool has_animation(const string anim) const;
	void remove_animation(const string anim);
	void remove_frame(const string anim, const int64_t idx);
	void rename_animation(const string anim, const string newname);
	void set_animation_loop(const string anim, const bool loop);
	void set_animation_speed(const string anim, const real_t speed);
	void set_frame(const string anim, const int64_t idx, const ref<texture> txt);

};

}

#endif