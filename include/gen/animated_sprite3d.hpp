#ifndef GODOT_CPP_ANIMATEDSPRITE3D_HPP
#define GODOT_CPP_ANIMATEDSPRITE3D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "sprite_base3d.hpp"
namespace gd {

class sprite_frames;

class animated_sprite3d : public sprite_base3d {
	struct ___method_bindings {
		godot_method_bind *mb__is_playing;
		godot_method_bind *mb__res_changed;
		godot_method_bind *mb__set_playing;
		godot_method_bind *mb_get_animation;
		godot_method_bind *mb_get_frame;
		godot_method_bind *mb_get_sprite_frames;
		godot_method_bind *mb_is_playing;
		godot_method_bind *mb_play;
		godot_method_bind *mb_set_animation;
		godot_method_bind *mb_set_frame;
		godot_method_bind *mb_set_sprite_frames;
		godot_method_bind *mb_stop;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimatedSprite3D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimatedSprite3D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static animated_sprite3d *_new();

	// methods
	bool _is_playing() const;
	void _res_changed();
	void _set_playing(const bool playing);
	string get_animation() const;
	int64_t get_frame() const;
	ref<sprite_frames> get_sprite_frames() const;
	bool is_playing() const;
	void play(const string anim = "");
	void set_animation(const string animation_);
	void set_frame(const int64_t frame);
	void set_sprite_frames(const ref<sprite_frames> sprite_frames_);
	void stop();

};

}

#endif