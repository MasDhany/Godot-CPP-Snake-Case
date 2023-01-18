#include "theme.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "font.hpp"
#include "style_box.hpp"
#include "texture.hpp"
#include "theme.hpp"


namespace gd {


theme::___method_bindings theme::___mb = {};

void *theme::_detail_class_tag = nullptr;

void theme::___init_method_bindings() {
	___mb.mb__emit_theme_changed = gd::api->godot_method_bind_get_method("Theme", "_emit_theme_changed");
	___mb.mb_add_type = gd::api->godot_method_bind_get_method("Theme", "add_type");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("Theme", "clear");
	___mb.mb_clear_color = gd::api->godot_method_bind_get_method("Theme", "clear_color");
	___mb.mb_clear_constant = gd::api->godot_method_bind_get_method("Theme", "clear_constant");
	___mb.mb_clear_font = gd::api->godot_method_bind_get_method("Theme", "clear_font");
	___mb.mb_clear_icon = gd::api->godot_method_bind_get_method("Theme", "clear_icon");
	___mb.mb_clear_stylebox = gd::api->godot_method_bind_get_method("Theme", "clear_stylebox");
	___mb.mb_clear_theme_item = gd::api->godot_method_bind_get_method("Theme", "clear_theme_item");
	___mb.mb_clear_type_variation = gd::api->godot_method_bind_get_method("Theme", "clear_type_variation");
	___mb.mb_copy_default_theme = gd::api->godot_method_bind_get_method("Theme", "copy_default_theme");
	___mb.mb_copy_theme = gd::api->godot_method_bind_get_method("Theme", "copy_theme");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("Theme", "get_color");
	___mb.mb_get_color_list = gd::api->godot_method_bind_get_method("Theme", "get_color_list");
	___mb.mb_get_color_types = gd::api->godot_method_bind_get_method("Theme", "get_color_types");
	___mb.mb_get_constant = gd::api->godot_method_bind_get_method("Theme", "get_constant");
	___mb.mb_get_constant_list = gd::api->godot_method_bind_get_method("Theme", "get_constant_list");
	___mb.mb_get_constant_types = gd::api->godot_method_bind_get_method("Theme", "get_constant_types");
	___mb.mb_get_default_font = gd::api->godot_method_bind_get_method("Theme", "get_default_font");
	___mb.mb_get_font = gd::api->godot_method_bind_get_method("Theme", "get_font");
	___mb.mb_get_font_list = gd::api->godot_method_bind_get_method("Theme", "get_font_list");
	___mb.mb_get_font_types = gd::api->godot_method_bind_get_method("Theme", "get_font_types");
	___mb.mb_get_icon = gd::api->godot_method_bind_get_method("Theme", "get_icon");
	___mb.mb_get_icon_list = gd::api->godot_method_bind_get_method("Theme", "get_icon_list");
	___mb.mb_get_icon_types = gd::api->godot_method_bind_get_method("Theme", "get_icon_types");
	___mb.mb_get_stylebox = gd::api->godot_method_bind_get_method("Theme", "get_stylebox");
	___mb.mb_get_stylebox_list = gd::api->godot_method_bind_get_method("Theme", "get_stylebox_list");
	___mb.mb_get_stylebox_types = gd::api->godot_method_bind_get_method("Theme", "get_stylebox_types");
	___mb.mb_get_theme_item = gd::api->godot_method_bind_get_method("Theme", "get_theme_item");
	___mb.mb_get_theme_item_list = gd::api->godot_method_bind_get_method("Theme", "get_theme_item_list");
	___mb.mb_get_theme_item_types = gd::api->godot_method_bind_get_method("Theme", "get_theme_item_types");
	___mb.mb_get_type_list = gd::api->godot_method_bind_get_method("Theme", "get_type_list");
	___mb.mb_get_type_variation_base = gd::api->godot_method_bind_get_method("Theme", "get_type_variation_base");
	___mb.mb_get_type_variation_list = gd::api->godot_method_bind_get_method("Theme", "get_type_variation_list");
	___mb.mb_has_color = gd::api->godot_method_bind_get_method("Theme", "has_color");
	___mb.mb_has_constant = gd::api->godot_method_bind_get_method("Theme", "has_constant");
	___mb.mb_has_default_font = gd::api->godot_method_bind_get_method("Theme", "has_default_font");
	___mb.mb_has_font = gd::api->godot_method_bind_get_method("Theme", "has_font");
	___mb.mb_has_icon = gd::api->godot_method_bind_get_method("Theme", "has_icon");
	___mb.mb_has_stylebox = gd::api->godot_method_bind_get_method("Theme", "has_stylebox");
	___mb.mb_has_theme_item = gd::api->godot_method_bind_get_method("Theme", "has_theme_item");
	___mb.mb_is_type_variation = gd::api->godot_method_bind_get_method("Theme", "is_type_variation");
	___mb.mb_merge_with = gd::api->godot_method_bind_get_method("Theme", "merge_with");
	___mb.mb_remove_type = gd::api->godot_method_bind_get_method("Theme", "remove_type");
	___mb.mb_rename_color = gd::api->godot_method_bind_get_method("Theme", "rename_color");
	___mb.mb_rename_constant = gd::api->godot_method_bind_get_method("Theme", "rename_constant");
	___mb.mb_rename_font = gd::api->godot_method_bind_get_method("Theme", "rename_font");
	___mb.mb_rename_icon = gd::api->godot_method_bind_get_method("Theme", "rename_icon");
	___mb.mb_rename_stylebox = gd::api->godot_method_bind_get_method("Theme", "rename_stylebox");
	___mb.mb_rename_theme_item = gd::api->godot_method_bind_get_method("Theme", "rename_theme_item");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("Theme", "set_color");
	___mb.mb_set_constant = gd::api->godot_method_bind_get_method("Theme", "set_constant");
	___mb.mb_set_default_font = gd::api->godot_method_bind_get_method("Theme", "set_default_font");
	___mb.mb_set_font = gd::api->godot_method_bind_get_method("Theme", "set_font");
	___mb.mb_set_icon = gd::api->godot_method_bind_get_method("Theme", "set_icon");
	___mb.mb_set_stylebox = gd::api->godot_method_bind_get_method("Theme", "set_stylebox");
	___mb.mb_set_theme_item = gd::api->godot_method_bind_get_method("Theme", "set_theme_item");
	___mb.mb_set_type_variation = gd::api->godot_method_bind_get_method("Theme", "set_type_variation");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Theme");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

theme *theme::_new()
{
	return (theme *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Theme")());
}
void theme::_emit_theme_changed(const bool notify_list_changed) {
	___godot_icall_void_bool(___mb.mb__emit_theme_changed, (const object *) this, notify_list_changed);
}

void theme::add_type(const string theme_type) {
	___godot_icall_void_String(___mb.mb_add_type, (const object *) this, theme_type);
}

void theme::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void theme::clear_color(const string name, const string theme_type) {
	___godot_icall_void_String_String(___mb.mb_clear_color, (const object *) this, name, theme_type);
}

void theme::clear_constant(const string name, const string theme_type) {
	___godot_icall_void_String_String(___mb.mb_clear_constant, (const object *) this, name, theme_type);
}

void theme::clear_font(const string name, const string theme_type) {
	___godot_icall_void_String_String(___mb.mb_clear_font, (const object *) this, name, theme_type);
}

void theme::clear_icon(const string name, const string theme_type) {
	___godot_icall_void_String_String(___mb.mb_clear_icon, (const object *) this, name, theme_type);
}

void theme::clear_stylebox(const string name, const string theme_type) {
	___godot_icall_void_String_String(___mb.mb_clear_stylebox, (const object *) this, name, theme_type);
}

void theme::clear_theme_item(const int64_t data_type, const string name, const string theme_type) {
	___godot_icall_void_int_String_String(___mb.mb_clear_theme_item, (const object *) this, data_type, name, theme_type);
}

void theme::clear_type_variation(const string theme_type) {
	___godot_icall_void_String(___mb.mb_clear_type_variation, (const object *) this, theme_type);
}

void theme::copy_default_theme() {
	___godot_icall_void(___mb.mb_copy_default_theme, (const object *) this);
}

void theme::copy_theme(const ref<theme> other) {
	___godot_icall_void_Object(___mb.mb_copy_theme, (const object *) this, other.ptr());
}

color theme::get_color(const string name, const string theme_type) const {
	return ___godot_icall_Color_String_String(___mb.mb_get_color, (const object *) this, name, theme_type);
}

pool_string_array theme::get_color_list(const string theme_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_color_list, (const object *) this, theme_type);
}

pool_string_array theme::get_color_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_color_types, (const object *) this);
}

int64_t theme::get_constant(const string name, const string theme_type) const {
	return ___godot_icall_int_String_String(___mb.mb_get_constant, (const object *) this, name, theme_type);
}

pool_string_array theme::get_constant_list(const string theme_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_constant_list, (const object *) this, theme_type);
}

pool_string_array theme::get_constant_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_constant_types, (const object *) this);
}

ref<font> theme::get_default_font() const {
	return ref<font>::__internal_constructor(___godot_icall_Object(___mb.mb_get_default_font, (const object *) this));
}

ref<font> theme::get_font(const string name, const string theme_type) const {
	return ref<font>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_font, (const object *) this, name, theme_type));
}

pool_string_array theme::get_font_list(const string theme_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_font_list, (const object *) this, theme_type);
}

pool_string_array theme::get_font_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_font_types, (const object *) this);
}

ref<texture> theme::get_icon(const string name, const string theme_type) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_icon, (const object *) this, name, theme_type));
}

pool_string_array theme::get_icon_list(const string theme_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_icon_list, (const object *) this, theme_type);
}

pool_string_array theme::get_icon_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_icon_types, (const object *) this);
}

ref<style_box> theme::get_stylebox(const string name, const string theme_type) const {
	return ref<style_box>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_stylebox, (const object *) this, name, theme_type));
}

pool_string_array theme::get_stylebox_list(const string theme_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_stylebox_list, (const object *) this, theme_type);
}

pool_string_array theme::get_stylebox_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_stylebox_types, (const object *) this);
}

variant theme::get_theme_item(const int64_t data_type, const string name, const string theme_type) const {
	return ___godot_icall_Variant_int_String_String(___mb.mb_get_theme_item, (const object *) this, data_type, name, theme_type);
}

pool_string_array theme::get_theme_item_list(const int64_t data_type, const string theme_type) const {
	return ___godot_icall_PoolStringArray_int_String(___mb.mb_get_theme_item_list, (const object *) this, data_type, theme_type);
}

pool_string_array theme::get_theme_item_types(const int64_t data_type) const {
	return ___godot_icall_PoolStringArray_int(___mb.mb_get_theme_item_types, (const object *) this, data_type);
}

pool_string_array theme::get_type_list(const string theme_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_type_list, (const object *) this, theme_type);
}

string theme::get_type_variation_base(const string theme_type) const {
	return ___godot_icall_String_String(___mb.mb_get_type_variation_base, (const object *) this, theme_type);
}

pool_string_array theme::get_type_variation_list(const string base_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_type_variation_list, (const object *) this, base_type);
}

bool theme::has_color(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_color, (const object *) this, name, theme_type);
}

bool theme::has_constant(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_constant, (const object *) this, name, theme_type);
}

bool theme::has_default_font() const {
	return ___godot_icall_bool(___mb.mb_has_default_font, (const object *) this);
}

bool theme::has_font(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_font, (const object *) this, name, theme_type);
}

bool theme::has_icon(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_icon, (const object *) this, name, theme_type);
}

bool theme::has_stylebox(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_stylebox, (const object *) this, name, theme_type);
}

bool theme::has_theme_item(const int64_t data_type, const string name, const string theme_type) const {
	return ___godot_icall_bool_int_String_String(___mb.mb_has_theme_item, (const object *) this, data_type, name, theme_type);
}

bool theme::is_type_variation(const string theme_type, const string base_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_is_type_variation, (const object *) this, theme_type, base_type);
}

void theme::merge_with(const ref<theme> other) {
	___godot_icall_void_Object(___mb.mb_merge_with, (const object *) this, other.ptr());
}

void theme::remove_type(const string theme_type) {
	___godot_icall_void_String(___mb.mb_remove_type, (const object *) this, theme_type);
}

void theme::rename_color(const string old_name, const string name, const string theme_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_color, (const object *) this, old_name, name, theme_type);
}

void theme::rename_constant(const string old_name, const string name, const string theme_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_constant, (const object *) this, old_name, name, theme_type);
}

void theme::rename_font(const string old_name, const string name, const string theme_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_font, (const object *) this, old_name, name, theme_type);
}

void theme::rename_icon(const string old_name, const string name, const string theme_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_icon, (const object *) this, old_name, name, theme_type);
}

void theme::rename_stylebox(const string old_name, const string name, const string theme_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_stylebox, (const object *) this, old_name, name, theme_type);
}

void theme::rename_theme_item(const int64_t data_type, const string old_name, const string name, const string theme_type) {
	___godot_icall_void_int_String_String_String(___mb.mb_rename_theme_item, (const object *) this, data_type, old_name, name, theme_type);
}

void theme::set_color(const string name, const string theme_type, const color color_) {
	___godot_icall_void_String_String_Color(___mb.mb_set_color, (const object *) this, name, theme_type, color_);
}

void theme::set_constant(const string name, const string theme_type, const int64_t constant) {
	___godot_icall_void_String_String_int(___mb.mb_set_constant, (const object *) this, name, theme_type, constant);
}

void theme::set_default_font(const ref<font> font_) {
	___godot_icall_void_Object(___mb.mb_set_default_font, (const object *) this, font_.ptr());
}

void theme::set_font(const string name, const string theme_type, const ref<font> font_) {
	___godot_icall_void_String_String_Object(___mb.mb_set_font, (const object *) this, name, theme_type, font_.ptr());
}

void theme::set_icon(const string name, const string theme_type, const ref<texture> texture_) {
	___godot_icall_void_String_String_Object(___mb.mb_set_icon, (const object *) this, name, theme_type, texture_.ptr());
}

void theme::set_stylebox(const string name, const string theme_type, const ref<style_box> texture_) {
	___godot_icall_void_String_String_Object(___mb.mb_set_stylebox, (const object *) this, name, theme_type, texture_.ptr());
}

void theme::set_theme_item(const int64_t data_type, const string name, const string theme_type, const variant value) {
	___godot_icall_void_int_String_String_Variant(___mb.mb_set_theme_item, (const object *) this, data_type, name, theme_type, value);
}

void theme::set_type_variation(const string theme_type, const string base_type) {
	___godot_icall_void_String_String(___mb.mb_set_type_variation, (const object *) this, theme_type, base_type);
}

}