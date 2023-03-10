#ifndef GODOT_CPP_ENGINE_HPP
#define GODOT_CPP_ENGINE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class main_loop;
class object;

class engine : public object {
	static engine *_singleton;

	engine();

	struct ___method_bindings {
		godot_method_bind *mb_get_author_info;
		godot_method_bind *mb_get_copyright_info;
		godot_method_bind *mb_get_donor_info;
		godot_method_bind *mb_get_frames_drawn;
		godot_method_bind *mb_get_frames_per_second;
		godot_method_bind *mb_get_idle_frames;
		godot_method_bind *mb_get_iterations_per_second;
		godot_method_bind *mb_get_license_info;
		godot_method_bind *mb_get_license_text;
		godot_method_bind *mb_get_main_loop;
		godot_method_bind *mb_get_physics_frames;
		godot_method_bind *mb_get_physics_interpolation_fraction;
		godot_method_bind *mb_get_physics_jitter_fix;
		godot_method_bind *mb_get_singleton;
		godot_method_bind *mb_get_target_fps;
		godot_method_bind *mb_get_time_scale;
		godot_method_bind *mb_get_version_info;
		godot_method_bind *mb_has_singleton;
		godot_method_bind *mb_is_editor_hint;
		godot_method_bind *mb_is_in_physics_frame;
		godot_method_bind *mb_is_printing_error_messages;
		godot_method_bind *mb_set_editor_hint;
		godot_method_bind *mb_set_iterations_per_second;
		godot_method_bind *mb_set_physics_jitter_fix;
		godot_method_bind *mb_set_print_error_messages;
		godot_method_bind *mb_set_target_fps;
		godot_method_bind *mb_set_time_scale;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline engine *get_singleton()
	{
		if (!engine::_singleton) {
			engine::_singleton = new engine;
		}
		return engine::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "Engine"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Engine"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	dictionary get_author_info() const;
	array get_copyright_info() const;
	dictionary get_donor_info() const;
	int64_t get_frames_drawn();
	real_t get_frames_per_second() const;
	int64_t get_idle_frames() const;
	int64_t get_iterations_per_second() const;
	dictionary get_license_info() const;
	string get_license_text() const;
	main_loop *get_main_loop() const;
	int64_t get_physics_frames() const;
	real_t get_physics_interpolation_fraction() const;
	real_t get_physics_jitter_fix() const;
	object *get_singleton(const string name) const;
	int64_t get_target_fps() const;
	real_t get_time_scale();
	dictionary get_version_info() const;
	bool has_singleton(const string name) const;
	bool is_editor_hint() const;
	bool is_in_physics_frame() const;
	bool is_printing_error_messages() const;
	void set_editor_hint(const bool enabled);
	void set_iterations_per_second(const int64_t iterations_per_second);
	void set_physics_jitter_fix(const real_t physics_jitter_fix);
	void set_print_error_messages(const bool enabled);
	void set_target_fps(const int64_t target_fps);
	void set_time_scale(const real_t time_scale);

};

}

#endif