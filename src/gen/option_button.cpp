#include "option_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "popup_menu.hpp"
#include "texture.hpp"


namespace gd {


option_button::___method_bindings option_button::___mb = {};

void *option_button::_detail_class_tag = nullptr;

void option_button::___init_method_bindings() {
	___mb.mb__focused = gd::api->godot_method_bind_get_method("OptionButton", "_focused");
	___mb.mb__get_items = gd::api->godot_method_bind_get_method("OptionButton", "_get_items");
	___mb.mb__select_int = gd::api->godot_method_bind_get_method("OptionButton", "_select_int");
	___mb.mb__selected = gd::api->godot_method_bind_get_method("OptionButton", "_selected");
	___mb.mb__set_items = gd::api->godot_method_bind_get_method("OptionButton", "_set_items");
	___mb.mb_add_icon_item = gd::api->godot_method_bind_get_method("OptionButton", "add_icon_item");
	___mb.mb_add_item = gd::api->godot_method_bind_get_method("OptionButton", "add_item");
	___mb.mb_add_separator = gd::api->godot_method_bind_get_method("OptionButton", "add_separator");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("OptionButton", "clear");
	___mb.mb_get_item_count = gd::api->godot_method_bind_get_method("OptionButton", "get_item_count");
	___mb.mb_get_item_icon = gd::api->godot_method_bind_get_method("OptionButton", "get_item_icon");
	___mb.mb_get_item_id = gd::api->godot_method_bind_get_method("OptionButton", "get_item_id");
	___mb.mb_get_item_index = gd::api->godot_method_bind_get_method("OptionButton", "get_item_index");
	___mb.mb_get_item_metadata = gd::api->godot_method_bind_get_method("OptionButton", "get_item_metadata");
	___mb.mb_get_item_text = gd::api->godot_method_bind_get_method("OptionButton", "get_item_text");
	___mb.mb_get_item_tooltip = gd::api->godot_method_bind_get_method("OptionButton", "get_item_tooltip");
	___mb.mb_get_popup = gd::api->godot_method_bind_get_method("OptionButton", "get_popup");
	___mb.mb_get_selected = gd::api->godot_method_bind_get_method("OptionButton", "get_selected");
	___mb.mb_get_selected_id = gd::api->godot_method_bind_get_method("OptionButton", "get_selected_id");
	___mb.mb_get_selected_metadata = gd::api->godot_method_bind_get_method("OptionButton", "get_selected_metadata");
	___mb.mb_is_item_disabled = gd::api->godot_method_bind_get_method("OptionButton", "is_item_disabled");
	___mb.mb_remove_item = gd::api->godot_method_bind_get_method("OptionButton", "remove_item");
	___mb.mb_select = gd::api->godot_method_bind_get_method("OptionButton", "select");
	___mb.mb_set_item_disabled = gd::api->godot_method_bind_get_method("OptionButton", "set_item_disabled");
	___mb.mb_set_item_icon = gd::api->godot_method_bind_get_method("OptionButton", "set_item_icon");
	___mb.mb_set_item_id = gd::api->godot_method_bind_get_method("OptionButton", "set_item_id");
	___mb.mb_set_item_metadata = gd::api->godot_method_bind_get_method("OptionButton", "set_item_metadata");
	___mb.mb_set_item_text = gd::api->godot_method_bind_get_method("OptionButton", "set_item_text");
	___mb.mb_set_item_tooltip = gd::api->godot_method_bind_get_method("OptionButton", "set_item_tooltip");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "OptionButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

option_button *option_button::_new()
{
	return (option_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"OptionButton")());
}
void option_button::_focused(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__focused, (const object *) this, arg0);
}

array option_button::_get_items() const {
	return ___godot_icall_Array(___mb.mb__get_items, (const object *) this);
}

void option_button::_select_int(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__select_int, (const object *) this, arg0);
}

void option_button::_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__selected, (const object *) this, arg0);
}

void option_button::_set_items(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_items, (const object *) this, arg0);
}

void option_button::add_icon_item(const ref<texture> texture_, const string label_, const int64_t id) {
	___godot_icall_void_Object_String_int(___mb.mb_add_icon_item, (const object *) this, texture_.ptr(), label_, id);
}

void option_button::add_item(const string label_, const int64_t id) {
	___godot_icall_void_String_int(___mb.mb_add_item, (const object *) this, label_, id);
}

void option_button::add_separator() {
	___godot_icall_void(___mb.mb_add_separator, (const object *) this);
}

void option_button::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

int64_t option_button::get_item_count() const {
	return ___godot_icall_int(___mb.mb_get_item_count, (const object *) this);
}

ref<texture> option_button::get_item_icon(const int64_t idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_item_icon, (const object *) this, idx));
}

int64_t option_button::get_item_id(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_item_id, (const object *) this, idx);
}

int64_t option_button::get_item_index(const int64_t id) const {
	return ___godot_icall_int_int(___mb.mb_get_item_index, (const object *) this, id);
}

variant option_button::get_item_metadata(const int64_t idx) const {
	return ___godot_icall_Variant_int(___mb.mb_get_item_metadata, (const object *) this, idx);
}

string option_button::get_item_text(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_item_text, (const object *) this, idx);
}

string option_button::get_item_tooltip(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_item_tooltip, (const object *) this, idx);
}

popup_menu *option_button::get_popup() const {
	return (popup_menu *) ___godot_icall_Object(___mb.mb_get_popup, (const object *) this);
}

int64_t option_button::get_selected() const {
	return ___godot_icall_int(___mb.mb_get_selected, (const object *) this);
}

int64_t option_button::get_selected_id() const {
	return ___godot_icall_int(___mb.mb_get_selected_id, (const object *) this);
}

variant option_button::get_selected_metadata() const {
	return ___godot_icall_Variant(___mb.mb_get_selected_metadata, (const object *) this);
}

bool option_button::is_item_disabled(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_disabled, (const object *) this, idx);
}

void option_button::remove_item(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_item, (const object *) this, idx);
}

void option_button::select(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_select, (const object *) this, idx);
}

void option_button::set_item_disabled(const int64_t idx, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_set_item_disabled, (const object *) this, idx, disabled);
}

void option_button::set_item_icon(const int64_t idx, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_set_item_icon, (const object *) this, idx, texture_.ptr());
}

void option_button::set_item_id(const int64_t idx, const int64_t id) {
	___godot_icall_void_int_int(___mb.mb_set_item_id, (const object *) this, idx, id);
}

void option_button::set_item_metadata(const int64_t idx, const variant metadata) {
	___godot_icall_void_int_Variant(___mb.mb_set_item_metadata, (const object *) this, idx, metadata);
}

void option_button::set_item_text(const int64_t idx, const string text) {
	___godot_icall_void_int_String(___mb.mb_set_item_text, (const object *) this, idx, text);
}

void option_button::set_item_tooltip(const int64_t idx, const string tooltip) {
	___godot_icall_void_int_String(___mb.mb_set_item_tooltip, (const object *) this, idx, tooltip);
}

}