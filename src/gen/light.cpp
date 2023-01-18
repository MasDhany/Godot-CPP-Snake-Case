#include "light.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


light::___method_bindings light::___mb = {};

void *light::_detail_class_tag = nullptr;

void light::___init_method_bindings() {
	___mb.mb_get_bake_mode = gd::api->godot_method_bind_get_method("Light", "get_bake_mode");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("Light", "get_color");
	___mb.mb_get_cull_mask = gd::api->godot_method_bind_get_method("Light", "get_cull_mask");
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("Light", "get_param");
	___mb.mb_get_shadow_color = gd::api->godot_method_bind_get_method("Light", "get_shadow_color");
	___mb.mb_get_shadow_reverse_cull_face = gd::api->godot_method_bind_get_method("Light", "get_shadow_reverse_cull_face");
	___mb.mb_has_shadow = gd::api->godot_method_bind_get_method("Light", "has_shadow");
	___mb.mb_is_editor_only = gd::api->godot_method_bind_get_method("Light", "is_editor_only");
	___mb.mb_is_negative = gd::api->godot_method_bind_get_method("Light", "is_negative");
	___mb.mb_set_bake_mode = gd::api->godot_method_bind_get_method("Light", "set_bake_mode");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("Light", "set_color");
	___mb.mb_set_cull_mask = gd::api->godot_method_bind_get_method("Light", "set_cull_mask");
	___mb.mb_set_editor_only = gd::api->godot_method_bind_get_method("Light", "set_editor_only");
	___mb.mb_set_negative = gd::api->godot_method_bind_get_method("Light", "set_negative");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("Light", "set_param");
	___mb.mb_set_shadow = gd::api->godot_method_bind_get_method("Light", "set_shadow");
	___mb.mb_set_shadow_color = gd::api->godot_method_bind_get_method("Light", "set_shadow_color");
	___mb.mb_set_shadow_reverse_cull_face = gd::api->godot_method_bind_get_method("Light", "set_shadow_reverse_cull_face");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Light");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

light::BakeMode light::get_bake_mode() const {
	return (light::BakeMode) ___godot_icall_int(___mb.mb_get_bake_mode, (const object *) this);
}

color light::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

int64_t light::get_cull_mask() const {
	return ___godot_icall_int(___mb.mb_get_cull_mask, (const object *) this);
}

real_t light::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

color light::get_shadow_color() const {
	return ___godot_icall_Color(___mb.mb_get_shadow_color, (const object *) this);
}

bool light::get_shadow_reverse_cull_face() const {
	return ___godot_icall_bool(___mb.mb_get_shadow_reverse_cull_face, (const object *) this);
}

bool light::has_shadow() const {
	return ___godot_icall_bool(___mb.mb_has_shadow, (const object *) this);
}

bool light::is_editor_only() const {
	return ___godot_icall_bool(___mb.mb_is_editor_only, (const object *) this);
}

bool light::is_negative() const {
	return ___godot_icall_bool(___mb.mb_is_negative, (const object *) this);
}

void light::set_bake_mode(const int64_t bake_mode) {
	___godot_icall_void_int(___mb.mb_set_bake_mode, (const object *) this, bake_mode);
}

void light::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void light::set_cull_mask(const int64_t cull_mask) {
	___godot_icall_void_int(___mb.mb_set_cull_mask, (const object *) this, cull_mask);
}

void light::set_editor_only(const bool editor_only) {
	___godot_icall_void_bool(___mb.mb_set_editor_only, (const object *) this, editor_only);
}

void light::set_negative(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_negative, (const object *) this, enabled);
}

void light::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

void light::set_shadow(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_shadow, (const object *) this, enabled);
}

void light::set_shadow_color(const color shadow_color) {
	___godot_icall_void_Color(___mb.mb_set_shadow_color, (const object *) this, shadow_color);
}

void light::set_shadow_reverse_cull_face(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_shadow_reverse_cull_face, (const object *) this, enable);
}

}