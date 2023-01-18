#ifndef GODOT_CPP_SCENETREETWEEN_HPP
#define GODOT_CPP_SCENETREETWEEN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class callback_tweener;
class interval_tweener;
class method_tweener;
class node;
class object;
class property_tweener;
class scene_tree_tween;

class scene_tree_tween : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_bind_node;
		godot_method_bind *mb_chain;
		godot_method_bind *mb_custom_step;
		godot_method_bind *mb_get_total_elapsed_time;
		godot_method_bind *mb_interpolate_value;
		godot_method_bind *mb_is_running;
		godot_method_bind *mb_is_valid;
		godot_method_bind *mb_kill;
		godot_method_bind *mb_parallel;
		godot_method_bind *mb_pause;
		godot_method_bind *mb_play;
		godot_method_bind *mb_set_ease;
		godot_method_bind *mb_set_loops;
		godot_method_bind *mb_set_parallel;
		godot_method_bind *mb_set_pause_mode;
		godot_method_bind *mb_set_process_mode;
		godot_method_bind *mb_set_speed_scale;
		godot_method_bind *mb_set_trans;
		godot_method_bind *mb_stop;
		godot_method_bind *mb_tween_callback;
		godot_method_bind *mb_tween_interval;
		godot_method_bind *mb_tween_method;
		godot_method_bind *mb_tween_property;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SceneTreeTween"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SceneTreeTween"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TweenPauseMode {
		TWEEN_PAUSE_BOUND = 0,
		TWEEN_PAUSE_STOP = 1,
		TWEEN_PAUSE_PROCESS = 2,
	};

	// constants


	static scene_tree_tween *_new();

	// methods
	ref<scene_tree_tween> bind_node(const node *node_);
	ref<scene_tree_tween> chain();
	bool custom_step(const real_t delta);
	real_t get_total_elapsed_time() const;
	variant interpolate_value(const variant initial_value, const variant delta_value, const real_t elapsed_time, const real_t duration, const int64_t trans_type, const int64_t ease_type) const;
	bool is_running() const;
	bool is_valid() const;
	void kill();
	ref<scene_tree_tween> parallel();
	void pause();
	void play();
	ref<scene_tree_tween> set_ease(const int64_t ease);
	ref<scene_tree_tween> set_loops(const int64_t loops = 0);
	ref<scene_tree_tween> set_parallel(const bool parallel = true);
	ref<scene_tree_tween> set_pause_mode(const int64_t mode);
	ref<scene_tree_tween> set_process_mode(const int64_t mode);
	ref<scene_tree_tween> set_speed_scale(const real_t speed);
	ref<scene_tree_tween> set_trans(const int64_t trans);
	void stop();
	ref<callback_tweener> tween_callback(const object *object_, const string method, const array binds = array());
	ref<interval_tweener> tween_interval(const real_t time_);
	ref<method_tweener> tween_method(const object *object_, const string method, const variant from, const variant to, const real_t duration, const array binds = array());
	ref<property_tweener> tween_property(const object *object_, const node_path property, const variant final_val, const real_t duration);

};

}

#endif