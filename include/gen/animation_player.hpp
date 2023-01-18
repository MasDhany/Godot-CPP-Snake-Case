#ifndef GODOT_CPP_ANIMATIONPLAYER_HPP
#define GODOT_CPP_ANIMATIONPLAYER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "animation_player.hpp"

#include "node.hpp"
namespace gd {

class animation;
class node;

class animation_player : public node {
	struct ___method_bindings {
		godot_method_bind *mb__animation_changed;
		godot_method_bind *mb__node_removed;
		godot_method_bind *mb_add_animation;
		godot_method_bind *mb_advance;
		godot_method_bind *mb_animation_get_next;
		godot_method_bind *mb_animation_set_next;
		godot_method_bind *mb_clear_caches;
		godot_method_bind *mb_clear_queue;
		godot_method_bind *mb_find_animation;
		godot_method_bind *mb_get_animation;
		godot_method_bind *mb_get_animation_list;
		godot_method_bind *mb_get_animation_process_mode;
		godot_method_bind *mb_get_assigned_animation;
		godot_method_bind *mb_get_autoplay;
		godot_method_bind *mb_get_blend_time;
		godot_method_bind *mb_get_current_animation;
		godot_method_bind *mb_get_current_animation_length;
		godot_method_bind *mb_get_current_animation_position;
		godot_method_bind *mb_get_default_blend_time;
		godot_method_bind *mb_get_method_call_mode;
		godot_method_bind *mb_get_playing_speed;
		godot_method_bind *mb_get_queue;
		godot_method_bind *mb_get_root;
		godot_method_bind *mb_get_speed_scale;
		godot_method_bind *mb_has_animation;
		godot_method_bind *mb_is_active;
		godot_method_bind *mb_is_playing;
		godot_method_bind *mb_is_reset_on_save_enabled;
		godot_method_bind *mb_play;
		godot_method_bind *mb_play_backwards;
		godot_method_bind *mb_queue;
		godot_method_bind *mb_remove_animation;
		godot_method_bind *mb_rename_animation;
		godot_method_bind *mb_seek;
		godot_method_bind *mb_set_active;
		godot_method_bind *mb_set_animation_process_mode;
		godot_method_bind *mb_set_assigned_animation;
		godot_method_bind *mb_set_autoplay;
		godot_method_bind *mb_set_blend_time;
		godot_method_bind *mb_set_current_animation;
		godot_method_bind *mb_set_default_blend_time;
		godot_method_bind *mb_set_method_call_mode;
		godot_method_bind *mb_set_reset_on_save_enabled;
		godot_method_bind *mb_set_root;
		godot_method_bind *mb_set_speed_scale;
		godot_method_bind *mb_stop;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationPlayer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationPlayer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AnimationProcessMode {
		ANIMATION_PROCESS_PHYSICS = 0,
		ANIMATION_PROCESS_IDLE = 1,
		ANIMATION_PROCESS_MANUAL = 2,
	};
	enum AnimationMethodCallMode {
		ANIMATION_METHOD_CALL_DEFERRED = 0,
		ANIMATION_METHOD_CALL_IMMEDIATE = 1,
	};

	// constants


	static animation_player *_new();

	// methods
	void _animation_changed();
	void _node_removed(const node *arg0);
	error add_animation(const string name, const ref<animation> animation_);
	void advance(const real_t delta);
	string animation_get_next(const string anim_from) const;
	void animation_set_next(const string anim_from, const string anim_to);
	void clear_caches();
	void clear_queue();
	string find_animation(const ref<animation> animation_) const;
	ref<animation> get_animation(const string name) const;
	pool_string_array get_animation_list() const;
	animation_player::AnimationProcessMode get_animation_process_mode() const;
	string get_assigned_animation() const;
	string get_autoplay() const;
	real_t get_blend_time(const string anim_from, const string anim_to) const;
	string get_current_animation() const;
	real_t get_current_animation_length() const;
	real_t get_current_animation_position() const;
	real_t get_default_blend_time() const;
	animation_player::AnimationMethodCallMode get_method_call_mode() const;
	real_t get_playing_speed() const;
	pool_string_array get_queue();
	node_path get_root() const;
	real_t get_speed_scale() const;
	bool has_animation(const string name) const;
	bool is_active() const;
	bool is_playing() const;
	bool is_reset_on_save_enabled() const;
	void play(const string name = "", const real_t custom_blend = -1, const real_t custom_speed = 1, const bool from_end = false);
	void play_backwards(const string name = "", const real_t custom_blend = -1);
	void queue(const string name);
	void remove_animation(const string name);
	void rename_animation(const string name, const string newname);
	void seek(const real_t seconds, const bool update = false);
	void set_active(const bool active);
	void set_animation_process_mode(const int64_t mode);
	void set_assigned_animation(const string anim);
	void set_autoplay(const string name);
	void set_blend_time(const string anim_from, const string anim_to, const real_t sec);
	void set_current_animation(const string anim);
	void set_default_blend_time(const real_t sec);
	void set_method_call_mode(const int64_t mode);
	void set_reset_on_save_enabled(const bool enabled);
	void set_root(const node_path path_);
	void set_speed_scale(const real_t speed);
	void stop(const bool reset = true);

};

}

#endif