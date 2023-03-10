#ifndef GODOT_CPP_TWEEN_HPP
#define GODOT_CPP_TWEEN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "tween.hpp"

#include "node.hpp"
namespace gd {

class object;

class tween : public node {
	struct ___method_bindings {
		godot_method_bind *mb__remove_by_uid;
		godot_method_bind *mb_follow_method;
		godot_method_bind *mb_follow_property;
		godot_method_bind *mb_get_runtime;
		godot_method_bind *mb_get_speed_scale;
		godot_method_bind *mb_get_tween_process_mode;
		godot_method_bind *mb_interpolate_callback;
		godot_method_bind *mb_interpolate_deferred_callback;
		godot_method_bind *mb_interpolate_method;
		godot_method_bind *mb_interpolate_property;
		godot_method_bind *mb_is_active;
		godot_method_bind *mb_is_repeat;
		godot_method_bind *mb_remove;
		godot_method_bind *mb_remove_all;
		godot_method_bind *mb_reset;
		godot_method_bind *mb_reset_all;
		godot_method_bind *mb_resume;
		godot_method_bind *mb_resume_all;
		godot_method_bind *mb_seek;
		godot_method_bind *mb_set_active;
		godot_method_bind *mb_set_repeat;
		godot_method_bind *mb_set_speed_scale;
		godot_method_bind *mb_set_tween_process_mode;
		godot_method_bind *mb_start;
		godot_method_bind *mb_stop;
		godot_method_bind *mb_stop_all;
		godot_method_bind *mb_targeting_method;
		godot_method_bind *mb_targeting_property;
		godot_method_bind *mb_tell;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Tween"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Tween"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TransitionType {
		TRANS_LINEAR = 0,
		TRANS_SINE = 1,
		TRANS_QUINT = 2,
		TRANS_QUART = 3,
		TRANS_QUAD = 4,
		TRANS_EXPO = 5,
		TRANS_ELASTIC = 6,
		TRANS_CUBIC = 7,
		TRANS_CIRC = 8,
		TRANS_BOUNCE = 9,
		TRANS_BACK = 10,
	};
	enum TweenProcessMode {
		TWEEN_PROCESS_PHYSICS = 0,
		TWEEN_PROCESS_IDLE = 1,
	};
	enum EaseType {
		EASE_IN = 0,
		EASE_OUT = 1,
		EASE_IN_OUT = 2,
		EASE_OUT_IN = 3,
	};

	// constants


	static tween *_new();

	// methods
	void _remove_by_uid(const int64_t uid);
	bool follow_method(const object *object_, const string method, const variant initial_val, const object *target, const string target_method, const real_t duration, const int64_t trans_type = 0, const int64_t ease_type = 2, const real_t delay = 0);
	bool follow_property(const object *object_, const node_path property, const variant initial_val, const object *target, const node_path target_property, const real_t duration, const int64_t trans_type = 0, const int64_t ease_type = 2, const real_t delay = 0);
	real_t get_runtime() const;
	real_t get_speed_scale() const;
	tween::TweenProcessMode get_tween_process_mode() const;
	bool interpolate_callback(const object *object_, const real_t duration, const string callback, const variant arg1 = variant(), const variant arg2 = variant(), const variant arg3 = variant(), const variant arg4 = variant(), const variant arg5 = variant(), const variant arg6 = variant(), const variant arg7 = variant(), const variant arg8 = variant());
	bool interpolate_deferred_callback(const object *object_, const real_t duration, const string callback, const variant arg1 = variant(), const variant arg2 = variant(), const variant arg3 = variant(), const variant arg4 = variant(), const variant arg5 = variant(), const variant arg6 = variant(), const variant arg7 = variant(), const variant arg8 = variant());
	bool interpolate_method(const object *object_, const string method, const variant initial_val, const variant final_val, const real_t duration, const int64_t trans_type = 0, const int64_t ease_type = 2, const real_t delay = 0);
	bool interpolate_property(const object *object_, const node_path property, const variant initial_val, const variant final_val, const real_t duration, const int64_t trans_type = 0, const int64_t ease_type = 2, const real_t delay = 0);
	bool is_active() const;
	bool is_repeat() const;
	bool remove(const object *object_, const string key = "");
	bool remove_all();
	bool reset(const object *object_, const string key = "");
	bool reset_all();
	bool resume(const object *object_, const string key = "");
	bool resume_all();
	bool seek(const real_t time_);
	void set_active(const bool active);
	void set_repeat(const bool repeat);
	void set_speed_scale(const real_t speed);
	void set_tween_process_mode(const int64_t mode);
	bool start();
	bool stop(const object *object_, const string key = "");
	bool stop_all();
	bool targeting_method(const object *object_, const string method, const object *initial, const string initial_method, const variant final_val, const real_t duration, const int64_t trans_type = 0, const int64_t ease_type = 2, const real_t delay = 0);
	bool targeting_property(const object *object_, const node_path property, const object *initial, const node_path initial_val, const variant final_val, const real_t duration, const int64_t trans_type = 0, const int64_t ease_type = 2, const real_t delay = 0);
	real_t tell() const;

};

}

#endif