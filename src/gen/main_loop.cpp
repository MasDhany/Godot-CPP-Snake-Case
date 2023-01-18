#include "main_loop.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


main_loop::___method_bindings main_loop::___mb = {};

void *main_loop::_detail_class_tag = nullptr;

void main_loop::___init_method_bindings() {
	___mb.mb__drop_files = gd::api->godot_method_bind_get_method("MainLoop", "_drop_files");
	___mb.mb__finalize = gd::api->godot_method_bind_get_method("MainLoop", "_finalize");
	___mb.mb__global_menu_action = gd::api->godot_method_bind_get_method("MainLoop", "_global_menu_action");
	___mb.mb__idle = gd::api->godot_method_bind_get_method("MainLoop", "_idle");
	___mb.mb__initialize = gd::api->godot_method_bind_get_method("MainLoop", "_initialize");
	___mb.mb__input_event = gd::api->godot_method_bind_get_method("MainLoop", "_input_event");
	___mb.mb__input_text = gd::api->godot_method_bind_get_method("MainLoop", "_input_text");
	___mb.mb__iteration = gd::api->godot_method_bind_get_method("MainLoop", "_iteration");
	___mb.mb_finish = gd::api->godot_method_bind_get_method("MainLoop", "finish");
	___mb.mb_idle = gd::api->godot_method_bind_get_method("MainLoop", "idle");
	___mb.mb_init = gd::api->godot_method_bind_get_method("MainLoop", "init");
	___mb.mb_input_event = gd::api->godot_method_bind_get_method("MainLoop", "input_event");
	___mb.mb_input_text = gd::api->godot_method_bind_get_method("MainLoop", "input_text");
	___mb.mb_iteration = gd::api->godot_method_bind_get_method("MainLoop", "iteration");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MainLoop");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

main_loop *main_loop::_new()
{
	return (main_loop *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MainLoop")());
}
void main_loop::_drop_files(const pool_string_array files, const int64_t from_screen) {
	___godot_icall_void_PoolStringArray_int(___mb.mb__drop_files, (const object *) this, files, from_screen);
}

void main_loop::_finalize() {
	___godot_icall_void(___mb.mb__finalize, (const object *) this);
}

void main_loop::_global_menu_action(const variant id, const variant meta) {
	___godot_icall_void_Variant_Variant(___mb.mb__global_menu_action, (const object *) this, id, meta);
}

bool main_loop::_idle(const real_t delta) {
	return ___godot_icall_bool_float(___mb.mb__idle, (const object *) this, delta);
}

void main_loop::_initialize() {
	___godot_icall_void(___mb.mb__initialize, (const object *) this);
}

void main_loop::_input_event(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb__input_event, (const object *) this, event.ptr());
}

void main_loop::_input_text(const string text) {
	___godot_icall_void_String(___mb.mb__input_text, (const object *) this, text);
}

bool main_loop::_iteration(const real_t delta) {
	return ___godot_icall_bool_float(___mb.mb__iteration, (const object *) this, delta);
}

void main_loop::finish() {
	___godot_icall_void(___mb.mb_finish, (const object *) this);
}

bool main_loop::idle(const real_t delta) {
	return ___godot_icall_bool_float(___mb.mb_idle, (const object *) this, delta);
}

void main_loop::init() {
	___godot_icall_void(___mb.mb_init, (const object *) this);
}

void main_loop::input_event_(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb_input_event, (const object *) this, event.ptr());
}

void main_loop::input_text(const string text) {
	___godot_icall_void_String(___mb.mb_input_text, (const object *) this, text);
}

bool main_loop::iteration(const real_t delta) {
	return ___godot_icall_bool_float(___mb.mb_iteration, (const object *) this, delta);
}

}