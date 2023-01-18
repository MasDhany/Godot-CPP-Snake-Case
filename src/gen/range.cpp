#include "range.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


range::___method_bindings range::___mb = {};

void *range::_detail_class_tag = nullptr;

void range::___init_method_bindings() {
	___mb.mb_get_as_ratio = gd::api->godot_method_bind_get_method("Range", "get_as_ratio");
	___mb.mb_get_max = gd::api->godot_method_bind_get_method("Range", "get_max");
	___mb.mb_get_min = gd::api->godot_method_bind_get_method("Range", "get_min");
	___mb.mb_get_page = gd::api->godot_method_bind_get_method("Range", "get_page");
	___mb.mb_get_step = gd::api->godot_method_bind_get_method("Range", "get_step");
	___mb.mb_get_value = gd::api->godot_method_bind_get_method("Range", "get_value");
	___mb.mb_is_greater_allowed = gd::api->godot_method_bind_get_method("Range", "is_greater_allowed");
	___mb.mb_is_lesser_allowed = gd::api->godot_method_bind_get_method("Range", "is_lesser_allowed");
	___mb.mb_is_ratio_exp = gd::api->godot_method_bind_get_method("Range", "is_ratio_exp");
	___mb.mb_is_using_rounded_values = gd::api->godot_method_bind_get_method("Range", "is_using_rounded_values");
	___mb.mb_set_allow_greater = gd::api->godot_method_bind_get_method("Range", "set_allow_greater");
	___mb.mb_set_allow_lesser = gd::api->godot_method_bind_get_method("Range", "set_allow_lesser");
	___mb.mb_set_as_ratio = gd::api->godot_method_bind_get_method("Range", "set_as_ratio");
	___mb.mb_set_exp_ratio = gd::api->godot_method_bind_get_method("Range", "set_exp_ratio");
	___mb.mb_set_max = gd::api->godot_method_bind_get_method("Range", "set_max");
	___mb.mb_set_min = gd::api->godot_method_bind_get_method("Range", "set_min");
	___mb.mb_set_page = gd::api->godot_method_bind_get_method("Range", "set_page");
	___mb.mb_set_step = gd::api->godot_method_bind_get_method("Range", "set_step");
	___mb.mb_set_use_rounded_values = gd::api->godot_method_bind_get_method("Range", "set_use_rounded_values");
	___mb.mb_set_value = gd::api->godot_method_bind_get_method("Range", "set_value");
	___mb.mb_share = gd::api->godot_method_bind_get_method("Range", "share");
	___mb.mb_unshare = gd::api->godot_method_bind_get_method("Range", "unshare");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Range");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

real_t range::get_as_ratio() const {
	return ___godot_icall_float(___mb.mb_get_as_ratio, (const object *) this);
}

real_t range::get_max() const {
	return ___godot_icall_float(___mb.mb_get_max, (const object *) this);
}

real_t range::get_min() const {
	return ___godot_icall_float(___mb.mb_get_min, (const object *) this);
}

real_t range::get_page() const {
	return ___godot_icall_float(___mb.mb_get_page, (const object *) this);
}

real_t range::get_step() const {
	return ___godot_icall_float(___mb.mb_get_step, (const object *) this);
}

real_t range::get_value() const {
	return ___godot_icall_float(___mb.mb_get_value, (const object *) this);
}

bool range::is_greater_allowed() const {
	return ___godot_icall_bool(___mb.mb_is_greater_allowed, (const object *) this);
}

bool range::is_lesser_allowed() const {
	return ___godot_icall_bool(___mb.mb_is_lesser_allowed, (const object *) this);
}

bool range::is_ratio_exp() const {
	return ___godot_icall_bool(___mb.mb_is_ratio_exp, (const object *) this);
}

bool range::is_using_rounded_values() const {
	return ___godot_icall_bool(___mb.mb_is_using_rounded_values, (const object *) this);
}

void range::set_allow_greater(const bool allow) {
	___godot_icall_void_bool(___mb.mb_set_allow_greater, (const object *) this, allow);
}

void range::set_allow_lesser(const bool allow) {
	___godot_icall_void_bool(___mb.mb_set_allow_lesser, (const object *) this, allow);
}

void range::set_as_ratio(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_as_ratio, (const object *) this, value);
}

void range::set_exp_ratio(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_exp_ratio, (const object *) this, enabled);
}

void range::set_max(const real_t maximum) {
	___godot_icall_void_float(___mb.mb_set_max, (const object *) this, maximum);
}

void range::set_min(const real_t minimum) {
	___godot_icall_void_float(___mb.mb_set_min, (const object *) this, minimum);
}

void range::set_page(const real_t pagesize) {
	___godot_icall_void_float(___mb.mb_set_page, (const object *) this, pagesize);
}

void range::set_step(const real_t step) {
	___godot_icall_void_float(___mb.mb_set_step, (const object *) this, step);
}

void range::set_use_rounded_values(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_use_rounded_values, (const object *) this, enabled);
}

void range::set_value(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_value, (const object *) this, value);
}

void range::share(const node *with) {
	___godot_icall_void_Object(___mb.mb_share, (const object *) this, with);
}

void range::unshare() {
	___godot_icall_void(___mb.mb_unshare, (const object *) this);
}

}