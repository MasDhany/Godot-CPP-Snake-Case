#include "timer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


timer::___method_bindings timer::___mb = {};

void *timer::_detail_class_tag = nullptr;

void timer::___init_method_bindings() {
	___mb.mb_get_time_left = gd::api->godot_method_bind_get_method("Timer", "get_time_left");
	___mb.mb_get_timer_process_mode = gd::api->godot_method_bind_get_method("Timer", "get_timer_process_mode");
	___mb.mb_get_wait_time = gd::api->godot_method_bind_get_method("Timer", "get_wait_time");
	___mb.mb_has_autostart = gd::api->godot_method_bind_get_method("Timer", "has_autostart");
	___mb.mb_is_one_shot = gd::api->godot_method_bind_get_method("Timer", "is_one_shot");
	___mb.mb_is_paused = gd::api->godot_method_bind_get_method("Timer", "is_paused");
	___mb.mb_is_stopped = gd::api->godot_method_bind_get_method("Timer", "is_stopped");
	___mb.mb_set_autostart = gd::api->godot_method_bind_get_method("Timer", "set_autostart");
	___mb.mb_set_one_shot = gd::api->godot_method_bind_get_method("Timer", "set_one_shot");
	___mb.mb_set_paused = gd::api->godot_method_bind_get_method("Timer", "set_paused");
	___mb.mb_set_timer_process_mode = gd::api->godot_method_bind_get_method("Timer", "set_timer_process_mode");
	___mb.mb_set_wait_time = gd::api->godot_method_bind_get_method("Timer", "set_wait_time");
	___mb.mb_start = gd::api->godot_method_bind_get_method("Timer", "start");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("Timer", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Timer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

timer *timer::_new()
{
	return (timer *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Timer")());
}
real_t timer::get_time_left() const {
	return ___godot_icall_float(___mb.mb_get_time_left, (const object *) this);
}

timer::TimerProcessMode timer::get_timer_process_mode() const {
	return (timer::TimerProcessMode) ___godot_icall_int(___mb.mb_get_timer_process_mode, (const object *) this);
}

real_t timer::get_wait_time() const {
	return ___godot_icall_float(___mb.mb_get_wait_time, (const object *) this);
}

bool timer::has_autostart() const {
	return ___godot_icall_bool(___mb.mb_has_autostart, (const object *) this);
}

bool timer::is_one_shot() const {
	return ___godot_icall_bool(___mb.mb_is_one_shot, (const object *) this);
}

bool timer::is_paused() const {
	return ___godot_icall_bool(___mb.mb_is_paused, (const object *) this);
}

bool timer::is_stopped() const {
	return ___godot_icall_bool(___mb.mb_is_stopped, (const object *) this);
}

void timer::set_autostart(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_autostart, (const object *) this, enable);
}

void timer::set_one_shot(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_one_shot, (const object *) this, enable);
}

void timer::set_paused(const bool paused) {
	___godot_icall_void_bool(___mb.mb_set_paused, (const object *) this, paused);
}

void timer::set_timer_process_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_timer_process_mode, (const object *) this, mode);
}

void timer::set_wait_time(const real_t time_sec) {
	___godot_icall_void_float(___mb.mb_set_wait_time, (const object *) this, time_sec);
}

void timer::start(const real_t time_sec) {
	___godot_icall_void_float(___mb.mb_start, (const object *) this, time_sec);
}

void timer::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}