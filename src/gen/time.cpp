#include "time.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


time *time::_singleton = NULL;


time::time() {
	_owner = gd::api->godot_global_get_singleton((char *) "Time");
}


time::___method_bindings time::___mb = {};

void *time::_detail_class_tag = nullptr;

void time::___init_method_bindings() {
	___mb.mb_get_date_dict_from_system = gd::api->godot_method_bind_get_method("Time", "get_date_dict_from_system");
	___mb.mb_get_date_dict_from_unix_time = gd::api->godot_method_bind_get_method("Time", "get_date_dict_from_unix_time");
	___mb.mb_get_date_string_from_system = gd::api->godot_method_bind_get_method("Time", "get_date_string_from_system");
	___mb.mb_get_date_string_from_unix_time = gd::api->godot_method_bind_get_method("Time", "get_date_string_from_unix_time");
	___mb.mb_get_datetime_dict_from_datetime_string = gd::api->godot_method_bind_get_method("Time", "get_datetime_dict_from_datetime_string");
	___mb.mb_get_datetime_dict_from_system = gd::api->godot_method_bind_get_method("Time", "get_datetime_dict_from_system");
	___mb.mb_get_datetime_dict_from_unix_time = gd::api->godot_method_bind_get_method("Time", "get_datetime_dict_from_unix_time");
	___mb.mb_get_datetime_string_from_datetime_dict = gd::api->godot_method_bind_get_method("Time", "get_datetime_string_from_datetime_dict");
	___mb.mb_get_datetime_string_from_system = gd::api->godot_method_bind_get_method("Time", "get_datetime_string_from_system");
	___mb.mb_get_datetime_string_from_unix_time = gd::api->godot_method_bind_get_method("Time", "get_datetime_string_from_unix_time");
	___mb.mb_get_offset_string_from_offset_minutes = gd::api->godot_method_bind_get_method("Time", "get_offset_string_from_offset_minutes");
	___mb.mb_get_ticks_msec = gd::api->godot_method_bind_get_method("Time", "get_ticks_msec");
	___mb.mb_get_ticks_usec = gd::api->godot_method_bind_get_method("Time", "get_ticks_usec");
	___mb.mb_get_time_dict_from_system = gd::api->godot_method_bind_get_method("Time", "get_time_dict_from_system");
	___mb.mb_get_time_dict_from_unix_time = gd::api->godot_method_bind_get_method("Time", "get_time_dict_from_unix_time");
	___mb.mb_get_time_string_from_system = gd::api->godot_method_bind_get_method("Time", "get_time_string_from_system");
	___mb.mb_get_time_string_from_unix_time = gd::api->godot_method_bind_get_method("Time", "get_time_string_from_unix_time");
	___mb.mb_get_time_zone_from_system = gd::api->godot_method_bind_get_method("Time", "get_time_zone_from_system");
	___mb.mb_get_unix_time_from_datetime_dict = gd::api->godot_method_bind_get_method("Time", "get_unix_time_from_datetime_dict");
	___mb.mb_get_unix_time_from_datetime_string = gd::api->godot_method_bind_get_method("Time", "get_unix_time_from_datetime_string");
	___mb.mb_get_unix_time_from_system = gd::api->godot_method_bind_get_method("Time", "get_unix_time_from_system");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Time");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

dictionary time::get_date_dict_from_system(const bool utc) const {
	return ___godot_icall_Dictionary_bool(___mb.mb_get_date_dict_from_system, (const object *) this, utc);
}

dictionary time::get_date_dict_from_unix_time(const int64_t unix_time_val) const {
	return ___godot_icall_Dictionary_int(___mb.mb_get_date_dict_from_unix_time, (const object *) this, unix_time_val);
}

string time::get_date_string_from_system(const bool utc) const {
	return ___godot_icall_String_bool(___mb.mb_get_date_string_from_system, (const object *) this, utc);
}

string time::get_date_string_from_unix_time(const int64_t unix_time_val) const {
	return ___godot_icall_String_int(___mb.mb_get_date_string_from_unix_time, (const object *) this, unix_time_val);
}

dictionary time::get_datetime_dict_from_datetime_string(const string datetime, const bool weekday) const {
	return ___godot_icall_Dictionary_String_bool(___mb.mb_get_datetime_dict_from_datetime_string, (const object *) this, datetime, weekday);
}

dictionary time::get_datetime_dict_from_system(const bool utc) const {
	return ___godot_icall_Dictionary_bool(___mb.mb_get_datetime_dict_from_system, (const object *) this, utc);
}

dictionary time::get_datetime_dict_from_unix_time(const int64_t unix_time_val) const {
	return ___godot_icall_Dictionary_int(___mb.mb_get_datetime_dict_from_unix_time, (const object *) this, unix_time_val);
}

string time::get_datetime_string_from_datetime_dict(const dictionary datetime, const bool use_space) const {
	return ___godot_icall_String_Dictionary_bool(___mb.mb_get_datetime_string_from_datetime_dict, (const object *) this, datetime, use_space);
}

string time::get_datetime_string_from_system(const bool utc, const bool use_space) const {
	return ___godot_icall_String_bool_bool(___mb.mb_get_datetime_string_from_system, (const object *) this, utc, use_space);
}

string time::get_datetime_string_from_unix_time(const int64_t unix_time_val, const bool use_space) const {
	return ___godot_icall_String_int_bool(___mb.mb_get_datetime_string_from_unix_time, (const object *) this, unix_time_val, use_space);
}

string time::get_offset_string_from_offset_minutes(const int64_t offset_minutes) const {
	return ___godot_icall_String_int(___mb.mb_get_offset_string_from_offset_minutes, (const object *) this, offset_minutes);
}

int64_t time::get_ticks_msec() const {
	return ___godot_icall_int(___mb.mb_get_ticks_msec, (const object *) this);
}

int64_t time::get_ticks_usec() const {
	return ___godot_icall_int(___mb.mb_get_ticks_usec, (const object *) this);
}

dictionary time::get_time_dict_from_system(const bool utc) const {
	return ___godot_icall_Dictionary_bool(___mb.mb_get_time_dict_from_system, (const object *) this, utc);
}

dictionary time::get_time_dict_from_unix_time(const int64_t unix_time_val) const {
	return ___godot_icall_Dictionary_int(___mb.mb_get_time_dict_from_unix_time, (const object *) this, unix_time_val);
}

string time::get_time_string_from_system(const bool utc) const {
	return ___godot_icall_String_bool(___mb.mb_get_time_string_from_system, (const object *) this, utc);
}

string time::get_time_string_from_unix_time(const int64_t unix_time_val) const {
	return ___godot_icall_String_int(___mb.mb_get_time_string_from_unix_time, (const object *) this, unix_time_val);
}

dictionary time::get_time_zone_from_system() const {
	return ___godot_icall_Dictionary(___mb.mb_get_time_zone_from_system, (const object *) this);
}

int64_t time::get_unix_time_from_datetime_dict(const dictionary datetime) const {
	return ___godot_icall_int_Dictionary(___mb.mb_get_unix_time_from_datetime_dict, (const object *) this, datetime);
}

int64_t time::get_unix_time_from_datetime_string(const string datetime) const {
	return ___godot_icall_int_String(___mb.mb_get_unix_time_from_datetime_string, (const object *) this, datetime);
}

real_t time::get_unix_time_from_system() const {
	return ___godot_icall_float(___mb.mb_get_unix_time_from_system, (const object *) this);
}

}