#include "engine.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "main_loop.hpp"
#include "object.hpp"


namespace gd {


engine *engine::_singleton = NULL;


engine::engine() {
	_owner = gd::api->godot_global_get_singleton((char *) "Engine");
}


engine::___method_bindings engine::___mb = {};

void *engine::_detail_class_tag = nullptr;

void engine::___init_method_bindings() {
	___mb.mb_get_author_info = gd::api->godot_method_bind_get_method("_Engine", "get_author_info");
	___mb.mb_get_copyright_info = gd::api->godot_method_bind_get_method("_Engine", "get_copyright_info");
	___mb.mb_get_donor_info = gd::api->godot_method_bind_get_method("_Engine", "get_donor_info");
	___mb.mb_get_frames_drawn = gd::api->godot_method_bind_get_method("_Engine", "get_frames_drawn");
	___mb.mb_get_frames_per_second = gd::api->godot_method_bind_get_method("_Engine", "get_frames_per_second");
	___mb.mb_get_idle_frames = gd::api->godot_method_bind_get_method("_Engine", "get_idle_frames");
	___mb.mb_get_iterations_per_second = gd::api->godot_method_bind_get_method("_Engine", "get_iterations_per_second");
	___mb.mb_get_license_info = gd::api->godot_method_bind_get_method("_Engine", "get_license_info");
	___mb.mb_get_license_text = gd::api->godot_method_bind_get_method("_Engine", "get_license_text");
	___mb.mb_get_main_loop = gd::api->godot_method_bind_get_method("_Engine", "get_main_loop");
	___mb.mb_get_physics_frames = gd::api->godot_method_bind_get_method("_Engine", "get_physics_frames");
	___mb.mb_get_physics_interpolation_fraction = gd::api->godot_method_bind_get_method("_Engine", "get_physics_interpolation_fraction");
	___mb.mb_get_physics_jitter_fix = gd::api->godot_method_bind_get_method("_Engine", "get_physics_jitter_fix");
	___mb.mb_get_singleton = gd::api->godot_method_bind_get_method("_Engine", "get_singleton");
	___mb.mb_get_target_fps = gd::api->godot_method_bind_get_method("_Engine", "get_target_fps");
	___mb.mb_get_time_scale = gd::api->godot_method_bind_get_method("_Engine", "get_time_scale");
	___mb.mb_get_version_info = gd::api->godot_method_bind_get_method("_Engine", "get_version_info");
	___mb.mb_has_singleton = gd::api->godot_method_bind_get_method("_Engine", "has_singleton");
	___mb.mb_is_editor_hint = gd::api->godot_method_bind_get_method("_Engine", "is_editor_hint");
	___mb.mb_is_in_physics_frame = gd::api->godot_method_bind_get_method("_Engine", "is_in_physics_frame");
	___mb.mb_is_printing_error_messages = gd::api->godot_method_bind_get_method("_Engine", "is_printing_error_messages");
	___mb.mb_set_editor_hint = gd::api->godot_method_bind_get_method("_Engine", "set_editor_hint");
	___mb.mb_set_iterations_per_second = gd::api->godot_method_bind_get_method("_Engine", "set_iterations_per_second");
	___mb.mb_set_physics_jitter_fix = gd::api->godot_method_bind_get_method("_Engine", "set_physics_jitter_fix");
	___mb.mb_set_print_error_messages = gd::api->godot_method_bind_get_method("_Engine", "set_print_error_messages");
	___mb.mb_set_target_fps = gd::api->godot_method_bind_get_method("_Engine", "set_target_fps");
	___mb.mb_set_time_scale = gd::api->godot_method_bind_get_method("_Engine", "set_time_scale");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_Engine");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

dictionary engine::get_author_info() const {
	return ___godot_icall_Dictionary(___mb.mb_get_author_info, (const object *) this);
}

array engine::get_copyright_info() const {
	return ___godot_icall_Array(___mb.mb_get_copyright_info, (const object *) this);
}

dictionary engine::get_donor_info() const {
	return ___godot_icall_Dictionary(___mb.mb_get_donor_info, (const object *) this);
}

int64_t engine::get_frames_drawn() {
	return ___godot_icall_int(___mb.mb_get_frames_drawn, (const object *) this);
}

real_t engine::get_frames_per_second() const {
	return ___godot_icall_float(___mb.mb_get_frames_per_second, (const object *) this);
}

int64_t engine::get_idle_frames() const {
	return ___godot_icall_int(___mb.mb_get_idle_frames, (const object *) this);
}

int64_t engine::get_iterations_per_second() const {
	return ___godot_icall_int(___mb.mb_get_iterations_per_second, (const object *) this);
}

dictionary engine::get_license_info() const {
	return ___godot_icall_Dictionary(___mb.mb_get_license_info, (const object *) this);
}

string engine::get_license_text() const {
	return ___godot_icall_String(___mb.mb_get_license_text, (const object *) this);
}

main_loop *engine::get_main_loop() const {
	return (main_loop *) ___godot_icall_Object(___mb.mb_get_main_loop, (const object *) this);
}

int64_t engine::get_physics_frames() const {
	return ___godot_icall_int(___mb.mb_get_physics_frames, (const object *) this);
}

real_t engine::get_physics_interpolation_fraction() const {
	return ___godot_icall_float(___mb.mb_get_physics_interpolation_fraction, (const object *) this);
}

real_t engine::get_physics_jitter_fix() const {
	return ___godot_icall_float(___mb.mb_get_physics_jitter_fix, (const object *) this);
}

object *engine::get_singleton(const string name) const {
	return (object *) ___godot_icall_Object_String(___mb.mb_get_singleton, (const object *) this, name);
}

int64_t engine::get_target_fps() const {
	return ___godot_icall_int(___mb.mb_get_target_fps, (const object *) this);
}

real_t engine::get_time_scale() {
	return ___godot_icall_float(___mb.mb_get_time_scale, (const object *) this);
}

dictionary engine::get_version_info() const {
	return ___godot_icall_Dictionary(___mb.mb_get_version_info, (const object *) this);
}

bool engine::has_singleton(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_singleton, (const object *) this, name);
}

bool engine::is_editor_hint() const {
	return ___godot_icall_bool(___mb.mb_is_editor_hint, (const object *) this);
}

bool engine::is_in_physics_frame() const {
	return ___godot_icall_bool(___mb.mb_is_in_physics_frame, (const object *) this);
}

bool engine::is_printing_error_messages() const {
	return ___godot_icall_bool(___mb.mb_is_printing_error_messages, (const object *) this);
}

void engine::set_editor_hint(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_editor_hint, (const object *) this, enabled);
}

void engine::set_iterations_per_second(const int64_t iterations_per_second) {
	___godot_icall_void_int(___mb.mb_set_iterations_per_second, (const object *) this, iterations_per_second);
}

void engine::set_physics_jitter_fix(const real_t physics_jitter_fix) {
	___godot_icall_void_float(___mb.mb_set_physics_jitter_fix, (const object *) this, physics_jitter_fix);
}

void engine::set_print_error_messages(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_print_error_messages, (const object *) this, enabled);
}

void engine::set_target_fps(const int64_t target_fps) {
	___godot_icall_void_int(___mb.mb_set_target_fps, (const object *) this, target_fps);
}

void engine::set_time_scale(const real_t time_scale) {
	___godot_icall_void_float(___mb.mb_set_time_scale, (const object *) this, time_scale);
}

}