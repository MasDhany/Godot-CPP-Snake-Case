#include "os.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


os *os::_singleton = NULL;


os::os() {
	_owner = gd::api->godot_global_get_singleton((char *) "OS");
}


os::___method_bindings os::___mb = {};

void *os::_detail_class_tag = nullptr;

void os::___init_method_bindings() {
	___mb.mb_alert = gd::api->godot_method_bind_get_method("_OS", "alert");
	___mb.mb_can_draw = gd::api->godot_method_bind_get_method("_OS", "can_draw");
	___mb.mb_can_use_threads = gd::api->godot_method_bind_get_method("_OS", "can_use_threads");
	___mb.mb_center_window = gd::api->godot_method_bind_get_method("_OS", "center_window");
	___mb.mb_close_midi_inputs = gd::api->godot_method_bind_get_method("_OS", "close_midi_inputs");
	___mb.mb_crash = gd::api->godot_method_bind_get_method("_OS", "crash");
	___mb.mb_delay_msec = gd::api->godot_method_bind_get_method("_OS", "delay_msec");
	___mb.mb_delay_usec = gd::api->godot_method_bind_get_method("_OS", "delay_usec");
	___mb.mb_dump_memory_to_file = gd::api->godot_method_bind_get_method("_OS", "dump_memory_to_file");
	___mb.mb_dump_resources_to_file = gd::api->godot_method_bind_get_method("_OS", "dump_resources_to_file");
	___mb.mb_execute = gd::api->godot_method_bind_get_method("_OS", "execute");
	___mb.mb_find_scancode_from_string = gd::api->godot_method_bind_get_method("_OS", "find_scancode_from_string");
	___mb.mb_get_audio_driver_count = gd::api->godot_method_bind_get_method("_OS", "get_audio_driver_count");
	___mb.mb_get_audio_driver_name = gd::api->godot_method_bind_get_method("_OS", "get_audio_driver_name");
	___mb.mb_get_borderless_window = gd::api->godot_method_bind_get_method("_OS", "get_borderless_window");
	___mb.mb_get_cache_dir = gd::api->godot_method_bind_get_method("_OS", "get_cache_dir");
	___mb.mb_get_clipboard = gd::api->godot_method_bind_get_method("_OS", "get_clipboard");
	___mb.mb_get_cmdline_args = gd::api->godot_method_bind_get_method("_OS", "get_cmdline_args");
	___mb.mb_get_config_dir = gd::api->godot_method_bind_get_method("_OS", "get_config_dir");
	___mb.mb_get_connected_midi_inputs = gd::api->godot_method_bind_get_method("_OS", "get_connected_midi_inputs");
	___mb.mb_get_current_screen = gd::api->godot_method_bind_get_method("_OS", "get_current_screen");
	___mb.mb_get_current_tablet_driver = gd::api->godot_method_bind_get_method("_OS", "get_current_tablet_driver");
	___mb.mb_get_current_video_driver = gd::api->godot_method_bind_get_method("_OS", "get_current_video_driver");
	___mb.mb_get_data_dir = gd::api->godot_method_bind_get_method("_OS", "get_data_dir");
	___mb.mb_get_date = gd::api->godot_method_bind_get_method("_OS", "get_date");
	___mb.mb_get_datetime = gd::api->godot_method_bind_get_method("_OS", "get_datetime");
	___mb.mb_get_datetime_from_unix_time = gd::api->godot_method_bind_get_method("_OS", "get_datetime_from_unix_time");
	___mb.mb_get_display_cutouts = gd::api->godot_method_bind_get_method("_OS", "get_display_cutouts");
	___mb.mb_get_dynamic_memory_usage = gd::api->godot_method_bind_get_method("_OS", "get_dynamic_memory_usage");
	___mb.mb_get_environment = gd::api->godot_method_bind_get_method("_OS", "get_environment");
	___mb.mb_get_executable_path = gd::api->godot_method_bind_get_method("_OS", "get_executable_path");
	___mb.mb_get_exit_code = gd::api->godot_method_bind_get_method("_OS", "get_exit_code");
	___mb.mb_get_granted_permissions = gd::api->godot_method_bind_get_method("_OS", "get_granted_permissions");
	___mb.mb_get_ime_selection = gd::api->godot_method_bind_get_method("_OS", "get_ime_selection");
	___mb.mb_get_ime_text = gd::api->godot_method_bind_get_method("_OS", "get_ime_text");
	___mb.mb_get_latin_keyboard_variant = gd::api->godot_method_bind_get_method("_OS", "get_latin_keyboard_variant");
	___mb.mb_get_locale = gd::api->godot_method_bind_get_method("_OS", "get_locale");
	___mb.mb_get_locale_language = gd::api->godot_method_bind_get_method("_OS", "get_locale_language");
	___mb.mb_get_low_processor_usage_mode_sleep_usec = gd::api->godot_method_bind_get_method("_OS", "get_low_processor_usage_mode_sleep_usec");
	___mb.mb_get_main_thread_id = gd::api->godot_method_bind_get_method("_OS", "get_main_thread_id");
	___mb.mb_get_max_window_size = gd::api->godot_method_bind_get_method("_OS", "get_max_window_size");
	___mb.mb_get_min_window_size = gd::api->godot_method_bind_get_method("_OS", "get_min_window_size");
	___mb.mb_get_model_name = gd::api->godot_method_bind_get_method("_OS", "get_model_name");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("_OS", "get_name");
	___mb.mb_get_native_handle = gd::api->godot_method_bind_get_method("_OS", "get_native_handle");
	___mb.mb_get_power_percent_left = gd::api->godot_method_bind_get_method("_OS", "get_power_percent_left");
	___mb.mb_get_power_seconds_left = gd::api->godot_method_bind_get_method("_OS", "get_power_seconds_left");
	___mb.mb_get_power_state = gd::api->godot_method_bind_get_method("_OS", "get_power_state");
	___mb.mb_get_process_id = gd::api->godot_method_bind_get_method("_OS", "get_process_id");
	___mb.mb_get_processor_count = gd::api->godot_method_bind_get_method("_OS", "get_processor_count");
	___mb.mb_get_processor_name = gd::api->godot_method_bind_get_method("_OS", "get_processor_name");
	___mb.mb_get_real_window_size = gd::api->godot_method_bind_get_method("_OS", "get_real_window_size");
	___mb.mb_get_scancode_string = gd::api->godot_method_bind_get_method("_OS", "get_scancode_string");
	___mb.mb_get_screen_count = gd::api->godot_method_bind_get_method("_OS", "get_screen_count");
	___mb.mb_get_screen_dpi = gd::api->godot_method_bind_get_method("_OS", "get_screen_dpi");
	___mb.mb_get_screen_max_scale = gd::api->godot_method_bind_get_method("_OS", "get_screen_max_scale");
	___mb.mb_get_screen_orientation = gd::api->godot_method_bind_get_method("_OS", "get_screen_orientation");
	___mb.mb_get_screen_position = gd::api->godot_method_bind_get_method("_OS", "get_screen_position");
	___mb.mb_get_screen_refresh_rate = gd::api->godot_method_bind_get_method("_OS", "get_screen_refresh_rate");
	___mb.mb_get_screen_scale = gd::api->godot_method_bind_get_method("_OS", "get_screen_scale");
	___mb.mb_get_screen_size = gd::api->godot_method_bind_get_method("_OS", "get_screen_size");
	___mb.mb_get_splash_tick_msec = gd::api->godot_method_bind_get_method("_OS", "get_splash_tick_msec");
	___mb.mb_get_static_memory_peak_usage = gd::api->godot_method_bind_get_method("_OS", "get_static_memory_peak_usage");
	___mb.mb_get_static_memory_usage = gd::api->godot_method_bind_get_method("_OS", "get_static_memory_usage");
	___mb.mb_get_system_dir = gd::api->godot_method_bind_get_method("_OS", "get_system_dir");
	___mb.mb_get_system_time_msecs = gd::api->godot_method_bind_get_method("_OS", "get_system_time_msecs");
	___mb.mb_get_system_time_secs = gd::api->godot_method_bind_get_method("_OS", "get_system_time_secs");
	___mb.mb_get_tablet_driver_count = gd::api->godot_method_bind_get_method("_OS", "get_tablet_driver_count");
	___mb.mb_get_tablet_driver_name = gd::api->godot_method_bind_get_method("_OS", "get_tablet_driver_name");
	___mb.mb_get_thread_caller_id = gd::api->godot_method_bind_get_method("_OS", "get_thread_caller_id");
	___mb.mb_get_ticks_msec = gd::api->godot_method_bind_get_method("_OS", "get_ticks_msec");
	___mb.mb_get_ticks_usec = gd::api->godot_method_bind_get_method("_OS", "get_ticks_usec");
	___mb.mb_get_time = gd::api->godot_method_bind_get_method("_OS", "get_time");
	___mb.mb_get_time_zone_info = gd::api->godot_method_bind_get_method("_OS", "get_time_zone_info");
	___mb.mb_get_unique_id = gd::api->godot_method_bind_get_method("_OS", "get_unique_id");
	___mb.mb_get_unix_time = gd::api->godot_method_bind_get_method("_OS", "get_unix_time");
	___mb.mb_get_unix_time_from_datetime = gd::api->godot_method_bind_get_method("_OS", "get_unix_time_from_datetime");
	___mb.mb_get_user_data_dir = gd::api->godot_method_bind_get_method("_OS", "get_user_data_dir");
	___mb.mb_get_video_driver_count = gd::api->godot_method_bind_get_method("_OS", "get_video_driver_count");
	___mb.mb_get_video_driver_name = gd::api->godot_method_bind_get_method("_OS", "get_video_driver_name");
	___mb.mb_get_virtual_keyboard_height = gd::api->godot_method_bind_get_method("_OS", "get_virtual_keyboard_height");
	___mb.mb_get_window_per_pixel_transparency_enabled = gd::api->godot_method_bind_get_method("_OS", "get_window_per_pixel_transparency_enabled");
	___mb.mb_get_window_position = gd::api->godot_method_bind_get_method("_OS", "get_window_position");
	___mb.mb_get_window_safe_area = gd::api->godot_method_bind_get_method("_OS", "get_window_safe_area");
	___mb.mb_get_window_size = gd::api->godot_method_bind_get_method("_OS", "get_window_size");
	___mb.mb_global_menu_add_item = gd::api->godot_method_bind_get_method("_OS", "global_menu_add_item");
	___mb.mb_global_menu_add_separator = gd::api->godot_method_bind_get_method("_OS", "global_menu_add_separator");
	___mb.mb_global_menu_clear = gd::api->godot_method_bind_get_method("_OS", "global_menu_clear");
	___mb.mb_global_menu_remove_item = gd::api->godot_method_bind_get_method("_OS", "global_menu_remove_item");
	___mb.mb_has_clipboard = gd::api->godot_method_bind_get_method("_OS", "has_clipboard");
	___mb.mb_has_environment = gd::api->godot_method_bind_get_method("_OS", "has_environment");
	___mb.mb_has_feature = gd::api->godot_method_bind_get_method("_OS", "has_feature");
	___mb.mb_has_touchscreen_ui_hint = gd::api->godot_method_bind_get_method("_OS", "has_touchscreen_ui_hint");
	___mb.mb_has_virtual_keyboard = gd::api->godot_method_bind_get_method("_OS", "has_virtual_keyboard");
	___mb.mb_hide_virtual_keyboard = gd::api->godot_method_bind_get_method("_OS", "hide_virtual_keyboard");
	___mb.mb_is_debug_build = gd::api->godot_method_bind_get_method("_OS", "is_debug_build");
	___mb.mb_is_delta_smoothing_enabled = gd::api->godot_method_bind_get_method("_OS", "is_delta_smoothing_enabled");
	___mb.mb_is_in_low_processor_usage_mode = gd::api->godot_method_bind_get_method("_OS", "is_in_low_processor_usage_mode");
	___mb.mb_is_keep_screen_on = gd::api->godot_method_bind_get_method("_OS", "is_keep_screen_on");
	___mb.mb_is_ok_left_and_cancel_right = gd::api->godot_method_bind_get_method("_OS", "is_ok_left_and_cancel_right");
	___mb.mb_is_process_running = gd::api->godot_method_bind_get_method("_OS", "is_process_running");
	___mb.mb_is_scancode_unicode = gd::api->godot_method_bind_get_method("_OS", "is_scancode_unicode");
	___mb.mb_is_stdout_verbose = gd::api->godot_method_bind_get_method("_OS", "is_stdout_verbose");
	___mb.mb_is_userfs_persistent = gd::api->godot_method_bind_get_method("_OS", "is_userfs_persistent");
	___mb.mb_is_vsync_enabled = gd::api->godot_method_bind_get_method("_OS", "is_vsync_enabled");
	___mb.mb_is_vsync_via_compositor_enabled = gd::api->godot_method_bind_get_method("_OS", "is_vsync_via_compositor_enabled");
	___mb.mb_is_window_always_on_top = gd::api->godot_method_bind_get_method("_OS", "is_window_always_on_top");
	___mb.mb_is_window_focused = gd::api->godot_method_bind_get_method("_OS", "is_window_focused");
	___mb.mb_is_window_fullscreen = gd::api->godot_method_bind_get_method("_OS", "is_window_fullscreen");
	___mb.mb_is_window_maximized = gd::api->godot_method_bind_get_method("_OS", "is_window_maximized");
	___mb.mb_is_window_minimized = gd::api->godot_method_bind_get_method("_OS", "is_window_minimized");
	___mb.mb_is_window_resizable = gd::api->godot_method_bind_get_method("_OS", "is_window_resizable");
	___mb.mb_keyboard_get_current_layout = gd::api->godot_method_bind_get_method("_OS", "keyboard_get_current_layout");
	___mb.mb_keyboard_get_layout_count = gd::api->godot_method_bind_get_method("_OS", "keyboard_get_layout_count");
	___mb.mb_keyboard_get_layout_language = gd::api->godot_method_bind_get_method("_OS", "keyboard_get_layout_language");
	___mb.mb_keyboard_get_layout_name = gd::api->godot_method_bind_get_method("_OS", "keyboard_get_layout_name");
	___mb.mb_keyboard_get_scancode_from_physical = gd::api->godot_method_bind_get_method("_OS", "keyboard_get_scancode_from_physical");
	___mb.mb_keyboard_set_current_layout = gd::api->godot_method_bind_get_method("_OS", "keyboard_set_current_layout");
	___mb.mb_kill = gd::api->godot_method_bind_get_method("_OS", "kill");
	___mb.mb_move_to_trash = gd::api->godot_method_bind_get_method("_OS", "move_to_trash");
	___mb.mb_move_window_to_foreground = gd::api->godot_method_bind_get_method("_OS", "move_window_to_foreground");
	___mb.mb_native_video_is_playing = gd::api->godot_method_bind_get_method("_OS", "native_video_is_playing");
	___mb.mb_native_video_pause = gd::api->godot_method_bind_get_method("_OS", "native_video_pause");
	___mb.mb_native_video_play = gd::api->godot_method_bind_get_method("_OS", "native_video_play");
	___mb.mb_native_video_stop = gd::api->godot_method_bind_get_method("_OS", "native_video_stop");
	___mb.mb_native_video_unpause = gd::api->godot_method_bind_get_method("_OS", "native_video_unpause");
	___mb.mb_open_midi_inputs = gd::api->godot_method_bind_get_method("_OS", "open_midi_inputs");
	___mb.mb_print_all_resources = gd::api->godot_method_bind_get_method("_OS", "print_all_resources");
	___mb.mb_print_all_textures_by_size = gd::api->godot_method_bind_get_method("_OS", "print_all_textures_by_size");
	___mb.mb_print_resources_by_type = gd::api->godot_method_bind_get_method("_OS", "print_resources_by_type");
	___mb.mb_print_resources_in_use = gd::api->godot_method_bind_get_method("_OS", "print_resources_in_use");
	___mb.mb_request_attention = gd::api->godot_method_bind_get_method("_OS", "request_attention");
	___mb.mb_request_permission = gd::api->godot_method_bind_get_method("_OS", "request_permission");
	___mb.mb_request_permissions = gd::api->godot_method_bind_get_method("_OS", "request_permissions");
	___mb.mb_set_borderless_window = gd::api->godot_method_bind_get_method("_OS", "set_borderless_window");
	___mb.mb_set_clipboard = gd::api->godot_method_bind_get_method("_OS", "set_clipboard");
	___mb.mb_set_current_screen = gd::api->godot_method_bind_get_method("_OS", "set_current_screen");
	___mb.mb_set_current_tablet_driver = gd::api->godot_method_bind_get_method("_OS", "set_current_tablet_driver");
	___mb.mb_set_delta_smoothing = gd::api->godot_method_bind_get_method("_OS", "set_delta_smoothing");
	___mb.mb_set_environment = gd::api->godot_method_bind_get_method("_OS", "set_environment");
	___mb.mb_set_exit_code = gd::api->godot_method_bind_get_method("_OS", "set_exit_code");
	___mb.mb_set_icon = gd::api->godot_method_bind_get_method("_OS", "set_icon");
	___mb.mb_set_ime_active = gd::api->godot_method_bind_get_method("_OS", "set_ime_active");
	___mb.mb_set_ime_position = gd::api->godot_method_bind_get_method("_OS", "set_ime_position");
	___mb.mb_set_keep_screen_on = gd::api->godot_method_bind_get_method("_OS", "set_keep_screen_on");
	___mb.mb_set_low_processor_usage_mode = gd::api->godot_method_bind_get_method("_OS", "set_low_processor_usage_mode");
	___mb.mb_set_low_processor_usage_mode_sleep_usec = gd::api->godot_method_bind_get_method("_OS", "set_low_processor_usage_mode_sleep_usec");
	___mb.mb_set_max_window_size = gd::api->godot_method_bind_get_method("_OS", "set_max_window_size");
	___mb.mb_set_min_window_size = gd::api->godot_method_bind_get_method("_OS", "set_min_window_size");
	___mb.mb_set_native_icon = gd::api->godot_method_bind_get_method("_OS", "set_native_icon");
	___mb.mb_set_screen_orientation = gd::api->godot_method_bind_get_method("_OS", "set_screen_orientation");
	___mb.mb_set_thread_name = gd::api->godot_method_bind_get_method("_OS", "set_thread_name");
	___mb.mb_set_use_file_access_save_and_swap = gd::api->godot_method_bind_get_method("_OS", "set_use_file_access_save_and_swap");
	___mb.mb_set_use_vsync = gd::api->godot_method_bind_get_method("_OS", "set_use_vsync");
	___mb.mb_set_vsync_via_compositor = gd::api->godot_method_bind_get_method("_OS", "set_vsync_via_compositor");
	___mb.mb_set_window_always_on_top = gd::api->godot_method_bind_get_method("_OS", "set_window_always_on_top");
	___mb.mb_set_window_fullscreen = gd::api->godot_method_bind_get_method("_OS", "set_window_fullscreen");
	___mb.mb_set_window_maximized = gd::api->godot_method_bind_get_method("_OS", "set_window_maximized");
	___mb.mb_set_window_minimized = gd::api->godot_method_bind_get_method("_OS", "set_window_minimized");
	___mb.mb_set_window_mouse_passthrough = gd::api->godot_method_bind_get_method("_OS", "set_window_mouse_passthrough");
	___mb.mb_set_window_per_pixel_transparency_enabled = gd::api->godot_method_bind_get_method("_OS", "set_window_per_pixel_transparency_enabled");
	___mb.mb_set_window_position = gd::api->godot_method_bind_get_method("_OS", "set_window_position");
	___mb.mb_set_window_resizable = gd::api->godot_method_bind_get_method("_OS", "set_window_resizable");
	___mb.mb_set_window_size = gd::api->godot_method_bind_get_method("_OS", "set_window_size");
	___mb.mb_set_window_title = gd::api->godot_method_bind_get_method("_OS", "set_window_title");
	___mb.mb_shell_open = gd::api->godot_method_bind_get_method("_OS", "shell_open");
	___mb.mb_show_virtual_keyboard = gd::api->godot_method_bind_get_method("_OS", "show_virtual_keyboard");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_OS");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void os::alert(const string text, const string title) {
	___godot_icall_void_String_String(___mb.mb_alert, (const object *) this, text, title);
}

bool os::can_draw() const {
	return ___godot_icall_bool(___mb.mb_can_draw, (const object *) this);
}

bool os::can_use_threads() const {
	return ___godot_icall_bool(___mb.mb_can_use_threads, (const object *) this);
}

void os::center_window() {
	___godot_icall_void(___mb.mb_center_window, (const object *) this);
}

void os::close_midi_inputs() {
	___godot_icall_void(___mb.mb_close_midi_inputs, (const object *) this);
}

void os::crash(const string message) {
	___godot_icall_void_String(___mb.mb_crash, (const object *) this, message);
}

void os::delay_msec(const int64_t msec) const {
	___godot_icall_void_int(___mb.mb_delay_msec, (const object *) this, msec);
}

void os::delay_usec(const int64_t usec) const {
	___godot_icall_void_int(___mb.mb_delay_usec, (const object *) this, usec);
}

void os::dump_memory_to_file(const string file_) {
	___godot_icall_void_String(___mb.mb_dump_memory_to_file, (const object *) this, file_);
}

void os::dump_resources_to_file(const string file_) {
	___godot_icall_void_String(___mb.mb_dump_resources_to_file, (const object *) this, file_);
}

int64_t os::execute(const string path_, const pool_string_array arguments, const bool blocking, const array output, const bool read_stderr, const bool open_console) {
	return ___godot_icall_int_String_PoolStringArray_bool_Array_bool_bool(___mb.mb_execute, (const object *) this, path_, arguments, blocking, output, read_stderr, open_console);
}

int64_t os::find_scancode_from_string(const string string_) const {
	return ___godot_icall_int_String(___mb.mb_find_scancode_from_string, (const object *) this, string_);
}

int64_t os::get_audio_driver_count() const {
	return ___godot_icall_int(___mb.mb_get_audio_driver_count, (const object *) this);
}

string os::get_audio_driver_name(const int64_t driver) const {
	return ___godot_icall_String_int(___mb.mb_get_audio_driver_name, (const object *) this, driver);
}

bool os::get_borderless_window() const {
	return ___godot_icall_bool(___mb.mb_get_borderless_window, (const object *) this);
}

string os::get_cache_dir() const {
	return ___godot_icall_String(___mb.mb_get_cache_dir, (const object *) this);
}

string os::get_clipboard() const {
	return ___godot_icall_String(___mb.mb_get_clipboard, (const object *) this);
}

pool_string_array os::get_cmdline_args() {
	return ___godot_icall_PoolStringArray(___mb.mb_get_cmdline_args, (const object *) this);
}

string os::get_config_dir() const {
	return ___godot_icall_String(___mb.mb_get_config_dir, (const object *) this);
}

pool_string_array os::get_connected_midi_inputs() {
	return ___godot_icall_PoolStringArray(___mb.mb_get_connected_midi_inputs, (const object *) this);
}

int64_t os::get_current_screen() const {
	return ___godot_icall_int(___mb.mb_get_current_screen, (const object *) this);
}

string os::get_current_tablet_driver() const {
	return ___godot_icall_String(___mb.mb_get_current_tablet_driver, (const object *) this);
}

os::VideoDriver os::get_current_video_driver() const {
	return (os::VideoDriver) ___godot_icall_int(___mb.mb_get_current_video_driver, (const object *) this);
}

string os::get_data_dir() const {
	return ___godot_icall_String(___mb.mb_get_data_dir, (const object *) this);
}

dictionary os::get_date(const bool utc) const {
	return ___godot_icall_Dictionary_bool(___mb.mb_get_date, (const object *) this, utc);
}

dictionary os::get_datetime(const bool utc) const {
	return ___godot_icall_Dictionary_bool(___mb.mb_get_datetime, (const object *) this, utc);
}

dictionary os::get_datetime_from_unix_time(const int64_t unix_time_val) const {
	return ___godot_icall_Dictionary_int(___mb.mb_get_datetime_from_unix_time, (const object *) this, unix_time_val);
}

array os::get_display_cutouts() const {
	return ___godot_icall_Array(___mb.mb_get_display_cutouts, (const object *) this);
}

int64_t os::get_dynamic_memory_usage() const {
	return ___godot_icall_int(___mb.mb_get_dynamic_memory_usage, (const object *) this);
}

string os::get_environment(const string variable) const {
	return ___godot_icall_String_String(___mb.mb_get_environment, (const object *) this, variable);
}

string os::get_executable_path() const {
	return ___godot_icall_String(___mb.mb_get_executable_path, (const object *) this);
}

int64_t os::get_exit_code() const {
	return ___godot_icall_int(___mb.mb_get_exit_code, (const object *) this);
}

pool_string_array os::get_granted_permissions() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_granted_permissions, (const object *) this);
}

vector2 os::get_ime_selection() const {
	return ___godot_icall_Vector2(___mb.mb_get_ime_selection, (const object *) this);
}

string os::get_ime_text() const {
	return ___godot_icall_String(___mb.mb_get_ime_text, (const object *) this);
}

string os::get_latin_keyboard_variant() const {
	return ___godot_icall_String(___mb.mb_get_latin_keyboard_variant, (const object *) this);
}

string os::get_locale() const {
	return ___godot_icall_String(___mb.mb_get_locale, (const object *) this);
}

string os::get_locale_language() const {
	return ___godot_icall_String(___mb.mb_get_locale_language, (const object *) this);
}

int64_t os::get_low_processor_usage_mode_sleep_usec() const {
	return ___godot_icall_int(___mb.mb_get_low_processor_usage_mode_sleep_usec, (const object *) this);
}

int64_t os::get_main_thread_id() const {
	return ___godot_icall_int(___mb.mb_get_main_thread_id, (const object *) this);
}

vector2 os::get_max_window_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_max_window_size, (const object *) this);
}

vector2 os::get_min_window_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_min_window_size, (const object *) this);
}

string os::get_model_name() const {
	return ___godot_icall_String(___mb.mb_get_model_name, (const object *) this);
}

string os::get_name() const {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

int64_t os::get_native_handle(const int64_t handle_type) {
	return ___godot_icall_int_int(___mb.mb_get_native_handle, (const object *) this, handle_type);
}

int64_t os::get_power_percent_left() {
	return ___godot_icall_int(___mb.mb_get_power_percent_left, (const object *) this);
}

int64_t os::get_power_seconds_left() {
	return ___godot_icall_int(___mb.mb_get_power_seconds_left, (const object *) this);
}

os::PowerState os::get_power_state() {
	return (os::PowerState) ___godot_icall_int(___mb.mb_get_power_state, (const object *) this);
}

int64_t os::get_process_id() const {
	return ___godot_icall_int(___mb.mb_get_process_id, (const object *) this);
}

int64_t os::get_processor_count() const {
	return ___godot_icall_int(___mb.mb_get_processor_count, (const object *) this);
}

string os::get_processor_name() const {
	return ___godot_icall_String(___mb.mb_get_processor_name, (const object *) this);
}

vector2 os::get_real_window_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_real_window_size, (const object *) this);
}

string os::get_scancode_string(const int64_t code) const {
	return ___godot_icall_String_int(___mb.mb_get_scancode_string, (const object *) this, code);
}

int64_t os::get_screen_count() const {
	return ___godot_icall_int(___mb.mb_get_screen_count, (const object *) this);
}

int64_t os::get_screen_dpi(const int64_t screen) const {
	return ___godot_icall_int_int(___mb.mb_get_screen_dpi, (const object *) this, screen);
}

real_t os::get_screen_max_scale() const {
	return ___godot_icall_float(___mb.mb_get_screen_max_scale, (const object *) this);
}

os::ScreenOrientation os::get_screen_orientation() const {
	return (os::ScreenOrientation) ___godot_icall_int(___mb.mb_get_screen_orientation, (const object *) this);
}

vector2 os::get_screen_position(const int64_t screen) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_screen_position, (const object *) this, screen);
}

real_t os::get_screen_refresh_rate(const int64_t screen) const {
	return ___godot_icall_float_int(___mb.mb_get_screen_refresh_rate, (const object *) this, screen);
}

real_t os::get_screen_scale(const int64_t screen) const {
	return ___godot_icall_float_int(___mb.mb_get_screen_scale, (const object *) this, screen);
}

vector2 os::get_screen_size(const int64_t screen) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_screen_size, (const object *) this, screen);
}

int64_t os::get_splash_tick_msec() const {
	return ___godot_icall_int(___mb.mb_get_splash_tick_msec, (const object *) this);
}

int64_t os::get_static_memory_peak_usage() const {
	return ___godot_icall_int(___mb.mb_get_static_memory_peak_usage, (const object *) this);
}

int64_t os::get_static_memory_usage() const {
	return ___godot_icall_int(___mb.mb_get_static_memory_usage, (const object *) this);
}

string os::get_system_dir(const int64_t dir, const bool shared_storage) const {
	return ___godot_icall_String_int_bool(___mb.mb_get_system_dir, (const object *) this, dir, shared_storage);
}

int64_t os::get_system_time_msecs() const {
	return ___godot_icall_int(___mb.mb_get_system_time_msecs, (const object *) this);
}

int64_t os::get_system_time_secs() const {
	return ___godot_icall_int(___mb.mb_get_system_time_secs, (const object *) this);
}

int64_t os::get_tablet_driver_count() const {
	return ___godot_icall_int(___mb.mb_get_tablet_driver_count, (const object *) this);
}

string os::get_tablet_driver_name(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_tablet_driver_name, (const object *) this, idx);
}

int64_t os::get_thread_caller_id() const {
	return ___godot_icall_int(___mb.mb_get_thread_caller_id, (const object *) this);
}

int64_t os::get_ticks_msec() const {
	return ___godot_icall_int(___mb.mb_get_ticks_msec, (const object *) this);
}

int64_t os::get_ticks_usec() const {
	return ___godot_icall_int(___mb.mb_get_ticks_usec, (const object *) this);
}

dictionary os::get_time(const bool utc) const {
	return ___godot_icall_Dictionary_bool(___mb.mb_get_time, (const object *) this, utc);
}

dictionary os::get_time_zone_info() const {
	return ___godot_icall_Dictionary(___mb.mb_get_time_zone_info, (const object *) this);
}

string os::get_unique_id() const {
	return ___godot_icall_String(___mb.mb_get_unique_id, (const object *) this);
}

int64_t os::get_unix_time() const {
	return ___godot_icall_int(___mb.mb_get_unix_time, (const object *) this);
}

int64_t os::get_unix_time_from_datetime(const dictionary datetime) const {
	return ___godot_icall_int_Dictionary(___mb.mb_get_unix_time_from_datetime, (const object *) this, datetime);
}

string os::get_user_data_dir() const {
	return ___godot_icall_String(___mb.mb_get_user_data_dir, (const object *) this);
}

int64_t os::get_video_driver_count() const {
	return ___godot_icall_int(___mb.mb_get_video_driver_count, (const object *) this);
}

string os::get_video_driver_name(const int64_t driver) const {
	return ___godot_icall_String_int(___mb.mb_get_video_driver_name, (const object *) this, driver);
}

int64_t os::get_virtual_keyboard_height() {
	return ___godot_icall_int(___mb.mb_get_virtual_keyboard_height, (const object *) this);
}

bool os::get_window_per_pixel_transparency_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_window_per_pixel_transparency_enabled, (const object *) this);
}

vector2 os::get_window_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_window_position, (const object *) this);
}

rect2 os::get_window_safe_area() const {
	return ___godot_icall_Rect2(___mb.mb_get_window_safe_area, (const object *) this);
}

vector2 os::get_window_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_window_size, (const object *) this);
}

void os::global_menu_add_item(const string menu, const string label_, const variant id, const variant meta) {
	___godot_icall_void_String_String_Variant_Variant(___mb.mb_global_menu_add_item, (const object *) this, menu, label_, id, meta);
}

void os::global_menu_add_separator(const string menu) {
	___godot_icall_void_String(___mb.mb_global_menu_add_separator, (const object *) this, menu);
}

void os::global_menu_clear(const string menu) {
	___godot_icall_void_String(___mb.mb_global_menu_clear, (const object *) this, menu);
}

void os::global_menu_remove_item(const string menu, const int64_t idx) {
	___godot_icall_void_String_int(___mb.mb_global_menu_remove_item, (const object *) this, menu, idx);
}

bool os::has_clipboard() const {
	return ___godot_icall_bool(___mb.mb_has_clipboard, (const object *) this);
}

bool os::has_environment(const string variable) const {
	return ___godot_icall_bool_String(___mb.mb_has_environment, (const object *) this, variable);
}

bool os::has_feature(const string tag_name) const {
	return ___godot_icall_bool_String(___mb.mb_has_feature, (const object *) this, tag_name);
}

bool os::has_touchscreen_ui_hint() const {
	return ___godot_icall_bool(___mb.mb_has_touchscreen_ui_hint, (const object *) this);
}

bool os::has_virtual_keyboard() const {
	return ___godot_icall_bool(___mb.mb_has_virtual_keyboard, (const object *) this);
}

void os::hide_virtual_keyboard() {
	___godot_icall_void(___mb.mb_hide_virtual_keyboard, (const object *) this);
}

bool os::is_debug_build() const {
	return ___godot_icall_bool(___mb.mb_is_debug_build, (const object *) this);
}

bool os::is_delta_smoothing_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_delta_smoothing_enabled, (const object *) this);
}

bool os::is_in_low_processor_usage_mode() const {
	return ___godot_icall_bool(___mb.mb_is_in_low_processor_usage_mode, (const object *) this);
}

bool os::is_keep_screen_on() const {
	return ___godot_icall_bool(___mb.mb_is_keep_screen_on, (const object *) this);
}

bool os::is_ok_left_and_cancel_right() const {
	return ___godot_icall_bool(___mb.mb_is_ok_left_and_cancel_right, (const object *) this);
}

bool os::is_process_running(const int64_t pid) const {
	return ___godot_icall_bool_int(___mb.mb_is_process_running, (const object *) this, pid);
}

bool os::is_scancode_unicode(const int64_t code) const {
	return ___godot_icall_bool_int(___mb.mb_is_scancode_unicode, (const object *) this, code);
}

bool os::is_stdout_verbose() const {
	return ___godot_icall_bool(___mb.mb_is_stdout_verbose, (const object *) this);
}

bool os::is_userfs_persistent() const {
	return ___godot_icall_bool(___mb.mb_is_userfs_persistent, (const object *) this);
}

bool os::is_vsync_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_vsync_enabled, (const object *) this);
}

bool os::is_vsync_via_compositor_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_vsync_via_compositor_enabled, (const object *) this);
}

bool os::is_window_always_on_top() const {
	return ___godot_icall_bool(___mb.mb_is_window_always_on_top, (const object *) this);
}

bool os::is_window_focused() const {
	return ___godot_icall_bool(___mb.mb_is_window_focused, (const object *) this);
}

bool os::is_window_fullscreen() const {
	return ___godot_icall_bool(___mb.mb_is_window_fullscreen, (const object *) this);
}

bool os::is_window_maximized() const {
	return ___godot_icall_bool(___mb.mb_is_window_maximized, (const object *) this);
}

bool os::is_window_minimized() const {
	return ___godot_icall_bool(___mb.mb_is_window_minimized, (const object *) this);
}

bool os::is_window_resizable() const {
	return ___godot_icall_bool(___mb.mb_is_window_resizable, (const object *) this);
}

int64_t os::keyboard_get_current_layout() const {
	return ___godot_icall_int(___mb.mb_keyboard_get_current_layout, (const object *) this);
}

int64_t os::keyboard_get_layout_count() const {
	return ___godot_icall_int(___mb.mb_keyboard_get_layout_count, (const object *) this);
}

string os::keyboard_get_layout_language(const int64_t index) const {
	return ___godot_icall_String_int(___mb.mb_keyboard_get_layout_language, (const object *) this, index);
}

string os::keyboard_get_layout_name(const int64_t index) const {
	return ___godot_icall_String_int(___mb.mb_keyboard_get_layout_name, (const object *) this, index);
}

int64_t os::keyboard_get_scancode_from_physical(const int64_t scancode) const {
	return ___godot_icall_int_int(___mb.mb_keyboard_get_scancode_from_physical, (const object *) this, scancode);
}

void os::keyboard_set_current_layout(const int64_t index) {
	___godot_icall_void_int(___mb.mb_keyboard_set_current_layout, (const object *) this, index);
}

error os::kill(const int64_t pid) {
	return (error) ___godot_icall_int_int(___mb.mb_kill, (const object *) this, pid);
}

error os::move_to_trash(const string path_) const {
	return (error) ___godot_icall_int_String(___mb.mb_move_to_trash, (const object *) this, path_);
}

void os::move_window_to_foreground() {
	___godot_icall_void(___mb.mb_move_window_to_foreground, (const object *) this);
}

bool os::native_video_is_playing() {
	return ___godot_icall_bool(___mb.mb_native_video_is_playing, (const object *) this);
}

void os::native_video_pause() {
	___godot_icall_void(___mb.mb_native_video_pause, (const object *) this);
}

error os::native_video_play(const string path_, const real_t volume, const string audio_track, const string subtitle_track) {
	return (error) ___godot_icall_int_String_float_String_String(___mb.mb_native_video_play, (const object *) this, path_, volume, audio_track, subtitle_track);
}

void os::native_video_stop() {
	___godot_icall_void(___mb.mb_native_video_stop, (const object *) this);
}

void os::native_video_unpause() {
	___godot_icall_void(___mb.mb_native_video_unpause, (const object *) this);
}

void os::open_midi_inputs() {
	___godot_icall_void(___mb.mb_open_midi_inputs, (const object *) this);
}

void os::print_all_resources(const string tofile) {
	___godot_icall_void_String(___mb.mb_print_all_resources, (const object *) this, tofile);
}

void os::print_all_textures_by_size() {
	___godot_icall_void(___mb.mb_print_all_textures_by_size, (const object *) this);
}

void os::print_resources_by_type(const pool_string_array types) {
	___godot_icall_void_PoolStringArray(___mb.mb_print_resources_by_type, (const object *) this, types);
}

void os::print_resources_in_use(const bool _short) {
	___godot_icall_void_bool(___mb.mb_print_resources_in_use, (const object *) this, _short);
}

void os::request_attention() {
	___godot_icall_void(___mb.mb_request_attention, (const object *) this);
}

bool os::request_permission(const string name) {
	return ___godot_icall_bool_String(___mb.mb_request_permission, (const object *) this, name);
}

bool os::request_permissions() {
	return ___godot_icall_bool(___mb.mb_request_permissions, (const object *) this);
}

void os::set_borderless_window(const bool borderless) {
	___godot_icall_void_bool(___mb.mb_set_borderless_window, (const object *) this, borderless);
}

void os::set_clipboard(const string clipboard) {
	___godot_icall_void_String(___mb.mb_set_clipboard, (const object *) this, clipboard);
}

void os::set_current_screen(const int64_t screen) {
	___godot_icall_void_int(___mb.mb_set_current_screen, (const object *) this, screen);
}

void os::set_current_tablet_driver(const string name) {
	___godot_icall_void_String(___mb.mb_set_current_tablet_driver, (const object *) this, name);
}

void os::set_delta_smoothing(const bool delta_smoothing_enabled) {
	___godot_icall_void_bool(___mb.mb_set_delta_smoothing, (const object *) this, delta_smoothing_enabled);
}

bool os::set_environment(const string variable, const string value) const {
	return ___godot_icall_bool_String_String(___mb.mb_set_environment, (const object *) this, variable, value);
}

void os::set_exit_code(const int64_t code) {
	___godot_icall_void_int(___mb.mb_set_exit_code, (const object *) this, code);
}

void os::set_icon(const ref<image> icon) {
	___godot_icall_void_Object(___mb.mb_set_icon, (const object *) this, icon.ptr());
}

void os::set_ime_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_ime_active, (const object *) this, active);
}

void os::set_ime_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_ime_position, (const object *) this, position);
}

void os::set_keep_screen_on(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_keep_screen_on, (const object *) this, enabled);
}

void os::set_low_processor_usage_mode(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_low_processor_usage_mode, (const object *) this, enable);
}

void os::set_low_processor_usage_mode_sleep_usec(const int64_t usec) {
	___godot_icall_void_int(___mb.mb_set_low_processor_usage_mode_sleep_usec, (const object *) this, usec);
}

void os::set_max_window_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_max_window_size, (const object *) this, size);
}

void os::set_min_window_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_min_window_size, (const object *) this, size);
}

void os::set_native_icon(const string filename) {
	___godot_icall_void_String(___mb.mb_set_native_icon, (const object *) this, filename);
}

void os::set_screen_orientation(const int64_t orientation) {
	___godot_icall_void_int(___mb.mb_set_screen_orientation, (const object *) this, orientation);
}

error os::set_thread_name(const string name) {
	return (error) ___godot_icall_int_String(___mb.mb_set_thread_name, (const object *) this, name);
}

void os::set_use_file_access_save_and_swap(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_use_file_access_save_and_swap, (const object *) this, enabled);
}

void os::set_use_vsync(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_vsync, (const object *) this, enable);
}

void os::set_vsync_via_compositor(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_vsync_via_compositor, (const object *) this, enable);
}

void os::set_window_always_on_top(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_window_always_on_top, (const object *) this, enabled);
}

void os::set_window_fullscreen(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_window_fullscreen, (const object *) this, enabled);
}

void os::set_window_maximized(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_window_maximized, (const object *) this, enabled);
}

void os::set_window_minimized(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_window_minimized, (const object *) this, enabled);
}

void os::set_window_mouse_passthrough(const pool_vector2_array region) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_window_mouse_passthrough, (const object *) this, region);
}

void os::set_window_per_pixel_transparency_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_window_per_pixel_transparency_enabled, (const object *) this, enabled);
}

void os::set_window_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_window_position, (const object *) this, position);
}

void os::set_window_resizable(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_window_resizable, (const object *) this, enabled);
}

void os::set_window_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_window_size, (const object *) this, size);
}

void os::set_window_title(const string title) {
	___godot_icall_void_String(___mb.mb_set_window_title, (const object *) this, title);
}

error os::shell_open(const string uri) {
	return (error) ___godot_icall_int_String(___mb.mb_shell_open, (const object *) this, uri);
}

void os::show_virtual_keyboard(const string existing_text, const bool multiline) {
	___godot_icall_void_String_bool(___mb.mb_show_virtual_keyboard, (const object *) this, existing_text, multiline);
}

}