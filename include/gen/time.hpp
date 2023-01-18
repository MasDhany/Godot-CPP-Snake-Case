#ifndef GODOT_CPP_TIME_HPP
#define GODOT_CPP_TIME_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {


class time : public object {
	static time *_singleton;

	time();

	struct ___method_bindings {
		godot_method_bind *mb_get_date_dict_from_system;
		godot_method_bind *mb_get_date_dict_from_unix_time;
		godot_method_bind *mb_get_date_string_from_system;
		godot_method_bind *mb_get_date_string_from_unix_time;
		godot_method_bind *mb_get_datetime_dict_from_datetime_string;
		godot_method_bind *mb_get_datetime_dict_from_system;
		godot_method_bind *mb_get_datetime_dict_from_unix_time;
		godot_method_bind *mb_get_datetime_string_from_datetime_dict;
		godot_method_bind *mb_get_datetime_string_from_system;
		godot_method_bind *mb_get_datetime_string_from_unix_time;
		godot_method_bind *mb_get_offset_string_from_offset_minutes;
		godot_method_bind *mb_get_ticks_msec;
		godot_method_bind *mb_get_ticks_usec;
		godot_method_bind *mb_get_time_dict_from_system;
		godot_method_bind *mb_get_time_dict_from_unix_time;
		godot_method_bind *mb_get_time_string_from_system;
		godot_method_bind *mb_get_time_string_from_unix_time;
		godot_method_bind *mb_get_time_zone_from_system;
		godot_method_bind *mb_get_unix_time_from_datetime_dict;
		godot_method_bind *mb_get_unix_time_from_datetime_string;
		godot_method_bind *mb_get_unix_time_from_system;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline time *get_singleton()
	{
		if (!time::_singleton) {
			time::_singleton = new time;
		}
		return time::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "Time"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Time"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Month {
		MONTH_JANUARY = 1,
		MONTH_FEBRUARY = 2,
		MONTH_MARCH = 3,
		MONTH_APRIL = 4,
		MONTH_MAY = 5,
		MONTH_JUNE = 6,
		MONTH_JULY = 7,
		MONTH_AUGUST = 8,
		MONTH_SEPTEMBER = 9,
		MONTH_OCTOBER = 10,
		MONTH_NOVEMBER = 11,
		MONTH_DECEMBER = 12,
	};
	enum Weekday {
		WEEKDAY_SUNDAY = 0,
		WEEKDAY_MONDAY = 1,
		WEEKDAY_TUESDAY = 2,
		WEEKDAY_WEDNESDAY = 3,
		WEEKDAY_THURSDAY = 4,
		WEEKDAY_FRIDAY = 5,
		WEEKDAY_SATURDAY = 6,
	};

	// constants

	// methods
	dictionary get_date_dict_from_system(const bool utc = false) const;
	dictionary get_date_dict_from_unix_time(const int64_t unix_time_val) const;
	string get_date_string_from_system(const bool utc = false) const;
	string get_date_string_from_unix_time(const int64_t unix_time_val) const;
	dictionary get_datetime_dict_from_datetime_string(const string datetime, const bool weekday) const;
	dictionary get_datetime_dict_from_system(const bool utc = false) const;
	dictionary get_datetime_dict_from_unix_time(const int64_t unix_time_val) const;
	string get_datetime_string_from_datetime_dict(const dictionary datetime, const bool use_space) const;
	string get_datetime_string_from_system(const bool utc = false, const bool use_space = false) const;
	string get_datetime_string_from_unix_time(const int64_t unix_time_val, const bool use_space = false) const;
	string get_offset_string_from_offset_minutes(const int64_t offset_minutes) const;
	int64_t get_ticks_msec() const;
	int64_t get_ticks_usec() const;
	dictionary get_time_dict_from_system(const bool utc = false) const;
	dictionary get_time_dict_from_unix_time(const int64_t unix_time_val) const;
	string get_time_string_from_system(const bool utc = false) const;
	string get_time_string_from_unix_time(const int64_t unix_time_val) const;
	dictionary get_time_zone_from_system() const;
	int64_t get_unix_time_from_datetime_dict(const dictionary datetime) const;
	int64_t get_unix_time_from_datetime_string(const string datetime) const;
	real_t get_unix_time_from_system() const;

};

}

#endif