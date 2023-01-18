#include "tree_item.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "texture.hpp"
#include "tree_item.hpp"


namespace gd {


tree_item::___method_bindings tree_item::___mb = {};

void *tree_item::_detail_class_tag = nullptr;

void tree_item::___init_method_bindings() {
	___mb.mb_add_button = gd::api->godot_method_bind_get_method("TreeItem", "add_button");
	___mb.mb_call_recursive = gd::api->godot_method_bind_get_method("TreeItem", "call_recursive");
	___mb.mb_clear_custom_bg_color = gd::api->godot_method_bind_get_method("TreeItem", "clear_custom_bg_color");
	___mb.mb_clear_custom_color = gd::api->godot_method_bind_get_method("TreeItem", "clear_custom_color");
	___mb.mb_deselect = gd::api->godot_method_bind_get_method("TreeItem", "deselect");
	___mb.mb_erase_button = gd::api->godot_method_bind_get_method("TreeItem", "erase_button");
	___mb.mb_get_button = gd::api->godot_method_bind_get_method("TreeItem", "get_button");
	___mb.mb_get_button_by_id = gd::api->godot_method_bind_get_method("TreeItem", "get_button_by_id");
	___mb.mb_get_button_count = gd::api->godot_method_bind_get_method("TreeItem", "get_button_count");
	___mb.mb_get_button_id = gd::api->godot_method_bind_get_method("TreeItem", "get_button_id");
	___mb.mb_get_button_tooltip = gd::api->godot_method_bind_get_method("TreeItem", "get_button_tooltip");
	___mb.mb_get_cell_mode = gd::api->godot_method_bind_get_method("TreeItem", "get_cell_mode");
	___mb.mb_get_children = gd::api->godot_method_bind_get_method("TreeItem", "get_children");
	___mb.mb_get_custom_bg_color = gd::api->godot_method_bind_get_method("TreeItem", "get_custom_bg_color");
	___mb.mb_get_custom_color = gd::api->godot_method_bind_get_method("TreeItem", "get_custom_color");
	___mb.mb_get_custom_minimum_height = gd::api->godot_method_bind_get_method("TreeItem", "get_custom_minimum_height");
	___mb.mb_get_expand_right = gd::api->godot_method_bind_get_method("TreeItem", "get_expand_right");
	___mb.mb_get_icon = gd::api->godot_method_bind_get_method("TreeItem", "get_icon");
	___mb.mb_get_icon_max_width = gd::api->godot_method_bind_get_method("TreeItem", "get_icon_max_width");
	___mb.mb_get_icon_modulate = gd::api->godot_method_bind_get_method("TreeItem", "get_icon_modulate");
	___mb.mb_get_icon_region = gd::api->godot_method_bind_get_method("TreeItem", "get_icon_region");
	___mb.mb_get_metadata = gd::api->godot_method_bind_get_method("TreeItem", "get_metadata");
	___mb.mb_get_next = gd::api->godot_method_bind_get_method("TreeItem", "get_next");
	___mb.mb_get_next_visible = gd::api->godot_method_bind_get_method("TreeItem", "get_next_visible");
	___mb.mb_get_parent = gd::api->godot_method_bind_get_method("TreeItem", "get_parent");
	___mb.mb_get_prev = gd::api->godot_method_bind_get_method("TreeItem", "get_prev");
	___mb.mb_get_prev_visible = gd::api->godot_method_bind_get_method("TreeItem", "get_prev_visible");
	___mb.mb_get_range = gd::api->godot_method_bind_get_method("TreeItem", "get_range");
	___mb.mb_get_range_config = gd::api->godot_method_bind_get_method("TreeItem", "get_range_config");
	___mb.mb_get_suffix = gd::api->godot_method_bind_get_method("TreeItem", "get_suffix");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("TreeItem", "get_text");
	___mb.mb_get_text_align = gd::api->godot_method_bind_get_method("TreeItem", "get_text_align");
	___mb.mb_get_tooltip = gd::api->godot_method_bind_get_method("TreeItem", "get_tooltip");
	___mb.mb_is_button_disabled = gd::api->godot_method_bind_get_method("TreeItem", "is_button_disabled");
	___mb.mb_is_checked = gd::api->godot_method_bind_get_method("TreeItem", "is_checked");
	___mb.mb_is_collapsed = gd::api->godot_method_bind_get_method("TreeItem", "is_collapsed");
	___mb.mb_is_custom_set_as_button = gd::api->godot_method_bind_get_method("TreeItem", "is_custom_set_as_button");
	___mb.mb_is_editable = gd::api->godot_method_bind_get_method("TreeItem", "is_editable");
	___mb.mb_is_folding_disabled = gd::api->godot_method_bind_get_method("TreeItem", "is_folding_disabled");
	___mb.mb_is_selectable = gd::api->godot_method_bind_get_method("TreeItem", "is_selectable");
	___mb.mb_is_selected = gd::api->godot_method_bind_get_method("TreeItem", "is_selected");
	___mb.mb_move_to_bottom = gd::api->godot_method_bind_get_method("TreeItem", "move_to_bottom");
	___mb.mb_move_to_top = gd::api->godot_method_bind_get_method("TreeItem", "move_to_top");
	___mb.mb_remove_child = gd::api->godot_method_bind_get_method("TreeItem", "remove_child");
	___mb.mb_select = gd::api->godot_method_bind_get_method("TreeItem", "select");
	___mb.mb_set_button = gd::api->godot_method_bind_get_method("TreeItem", "set_button");
	___mb.mb_set_button_disabled = gd::api->godot_method_bind_get_method("TreeItem", "set_button_disabled");
	___mb.mb_set_cell_mode = gd::api->godot_method_bind_get_method("TreeItem", "set_cell_mode");
	___mb.mb_set_checked = gd::api->godot_method_bind_get_method("TreeItem", "set_checked");
	___mb.mb_set_collapsed = gd::api->godot_method_bind_get_method("TreeItem", "set_collapsed");
	___mb.mb_set_custom_as_button = gd::api->godot_method_bind_get_method("TreeItem", "set_custom_as_button");
	___mb.mb_set_custom_bg_color = gd::api->godot_method_bind_get_method("TreeItem", "set_custom_bg_color");
	___mb.mb_set_custom_color = gd::api->godot_method_bind_get_method("TreeItem", "set_custom_color");
	___mb.mb_set_custom_draw = gd::api->godot_method_bind_get_method("TreeItem", "set_custom_draw");
	___mb.mb_set_custom_minimum_height = gd::api->godot_method_bind_get_method("TreeItem", "set_custom_minimum_height");
	___mb.mb_set_disable_folding = gd::api->godot_method_bind_get_method("TreeItem", "set_disable_folding");
	___mb.mb_set_editable = gd::api->godot_method_bind_get_method("TreeItem", "set_editable");
	___mb.mb_set_expand_right = gd::api->godot_method_bind_get_method("TreeItem", "set_expand_right");
	___mb.mb_set_icon = gd::api->godot_method_bind_get_method("TreeItem", "set_icon");
	___mb.mb_set_icon_max_width = gd::api->godot_method_bind_get_method("TreeItem", "set_icon_max_width");
	___mb.mb_set_icon_modulate = gd::api->godot_method_bind_get_method("TreeItem", "set_icon_modulate");
	___mb.mb_set_icon_region = gd::api->godot_method_bind_get_method("TreeItem", "set_icon_region");
	___mb.mb_set_metadata = gd::api->godot_method_bind_get_method("TreeItem", "set_metadata");
	___mb.mb_set_range = gd::api->godot_method_bind_get_method("TreeItem", "set_range");
	___mb.mb_set_range_config = gd::api->godot_method_bind_get_method("TreeItem", "set_range_config");
	___mb.mb_set_selectable = gd::api->godot_method_bind_get_method("TreeItem", "set_selectable");
	___mb.mb_set_suffix = gd::api->godot_method_bind_get_method("TreeItem", "set_suffix");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("TreeItem", "set_text");
	___mb.mb_set_text_align = gd::api->godot_method_bind_get_method("TreeItem", "set_text_align");
	___mb.mb_set_tooltip = gd::api->godot_method_bind_get_method("TreeItem", "set_tooltip");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TreeItem");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void tree_item::add_button(const int64_t column, const ref<texture> button_, const int64_t id, const bool disabled, const string tooltip) {
	___godot_icall_void_int_Object_int_bool_String(___mb.mb_add_button, (const object *) this, column, button_.ptr(), id, disabled, tooltip);
}

variant tree_item::call_recursive(const string method, const array& __var_args) {
	variant __given_args[1];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_call_recursive, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

	return __result;
}

void tree_item::clear_custom_bg_color(const int64_t column) {
	___godot_icall_void_int(___mb.mb_clear_custom_bg_color, (const object *) this, column);
}

void tree_item::clear_custom_color(const int64_t column) {
	___godot_icall_void_int(___mb.mb_clear_custom_color, (const object *) this, column);
}

void tree_item::deselect(const int64_t column) {
	___godot_icall_void_int(___mb.mb_deselect, (const object *) this, column);
}

void tree_item::erase_button(const int64_t column, const int64_t button_idx) {
	___godot_icall_void_int_int(___mb.mb_erase_button, (const object *) this, column, button_idx);
}

ref<texture> tree_item::get_button(const int64_t column, const int64_t button_idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int_int(___mb.mb_get_button, (const object *) this, column, button_idx));
}

int64_t tree_item::get_button_by_id(const int64_t column, const int64_t id) const {
	return ___godot_icall_int_int_int(___mb.mb_get_button_by_id, (const object *) this, column, id);
}

int64_t tree_item::get_button_count(const int64_t column) const {
	return ___godot_icall_int_int(___mb.mb_get_button_count, (const object *) this, column);
}

int64_t tree_item::get_button_id(const int64_t column, const int64_t button_idx) const {
	return ___godot_icall_int_int_int(___mb.mb_get_button_id, (const object *) this, column, button_idx);
}

string tree_item::get_button_tooltip(const int64_t column, const int64_t button_idx) const {
	return ___godot_icall_String_int_int(___mb.mb_get_button_tooltip, (const object *) this, column, button_idx);
}

tree_item::TreeCellMode tree_item::get_cell_mode(const int64_t column) const {
	return (tree_item::TreeCellMode) ___godot_icall_int_int(___mb.mb_get_cell_mode, (const object *) this, column);
}

tree_item *tree_item::get_children() {
	return (tree_item *) ___godot_icall_Object(___mb.mb_get_children, (const object *) this);
}

color tree_item::get_custom_bg_color(const int64_t column) const {
	return ___godot_icall_Color_int(___mb.mb_get_custom_bg_color, (const object *) this, column);
}

color tree_item::get_custom_color(const int64_t column) const {
	return ___godot_icall_Color_int(___mb.mb_get_custom_color, (const object *) this, column);
}

int64_t tree_item::get_custom_minimum_height() const {
	return ___godot_icall_int(___mb.mb_get_custom_minimum_height, (const object *) this);
}

bool tree_item::get_expand_right(const int64_t column) const {
	return ___godot_icall_bool_int(___mb.mb_get_expand_right, (const object *) this, column);
}

ref<texture> tree_item::get_icon(const int64_t column) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_icon, (const object *) this, column));
}

int64_t tree_item::get_icon_max_width(const int64_t column) const {
	return ___godot_icall_int_int(___mb.mb_get_icon_max_width, (const object *) this, column);
}

color tree_item::get_icon_modulate(const int64_t column) const {
	return ___godot_icall_Color_int(___mb.mb_get_icon_modulate, (const object *) this, column);
}

rect2 tree_item::get_icon_region(const int64_t column) const {
	return ___godot_icall_Rect2_int(___mb.mb_get_icon_region, (const object *) this, column);
}

variant tree_item::get_metadata(const int64_t column) const {
	return ___godot_icall_Variant_int(___mb.mb_get_metadata, (const object *) this, column);
}

tree_item *tree_item::get_next() {
	return (tree_item *) ___godot_icall_Object(___mb.mb_get_next, (const object *) this);
}

tree_item *tree_item::get_next_visible(const bool wrap) {
	return (tree_item *) ___godot_icall_Object_bool(___mb.mb_get_next_visible, (const object *) this, wrap);
}

tree_item *tree_item::get_parent() {
	return (tree_item *) ___godot_icall_Object(___mb.mb_get_parent, (const object *) this);
}

tree_item *tree_item::get_prev() {
	return (tree_item *) ___godot_icall_Object(___mb.mb_get_prev, (const object *) this);
}

tree_item *tree_item::get_prev_visible(const bool wrap) {
	return (tree_item *) ___godot_icall_Object_bool(___mb.mb_get_prev_visible, (const object *) this, wrap);
}

real_t tree_item::get_range(const int64_t column) const {
	return ___godot_icall_float_int(___mb.mb_get_range, (const object *) this, column);
}

dictionary tree_item::get_range_config(const int64_t column) {
	return ___godot_icall_Dictionary_int(___mb.mb_get_range_config, (const object *) this, column);
}

string tree_item::get_suffix(const int64_t column) const {
	return ___godot_icall_String_int(___mb.mb_get_suffix, (const object *) this, column);
}

string tree_item::get_text(const int64_t column) const {
	return ___godot_icall_String_int(___mb.mb_get_text, (const object *) this, column);
}

tree_item::TextAlign tree_item::get_text_align(const int64_t column) const {
	return (tree_item::TextAlign) ___godot_icall_int_int(___mb.mb_get_text_align, (const object *) this, column);
}

string tree_item::get_tooltip(const int64_t column) const {
	return ___godot_icall_String_int(___mb.mb_get_tooltip, (const object *) this, column);
}

bool tree_item::is_button_disabled(const int64_t column, const int64_t button_idx) const {
	return ___godot_icall_bool_int_int(___mb.mb_is_button_disabled, (const object *) this, column, button_idx);
}

bool tree_item::is_checked(const int64_t column) const {
	return ___godot_icall_bool_int(___mb.mb_is_checked, (const object *) this, column);
}

bool tree_item::is_collapsed() {
	return ___godot_icall_bool(___mb.mb_is_collapsed, (const object *) this);
}

bool tree_item::is_custom_set_as_button(const int64_t column) const {
	return ___godot_icall_bool_int(___mb.mb_is_custom_set_as_button, (const object *) this, column);
}

bool tree_item::is_editable(const int64_t column) {
	return ___godot_icall_bool_int(___mb.mb_is_editable, (const object *) this, column);
}

bool tree_item::is_folding_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_folding_disabled, (const object *) this);
}

bool tree_item::is_selectable(const int64_t column) const {
	return ___godot_icall_bool_int(___mb.mb_is_selectable, (const object *) this, column);
}

bool tree_item::is_selected(const int64_t column) {
	return ___godot_icall_bool_int(___mb.mb_is_selected, (const object *) this, column);
}

void tree_item::move_to_bottom() {
	___godot_icall_void(___mb.mb_move_to_bottom, (const object *) this);
}

void tree_item::move_to_top() {
	___godot_icall_void(___mb.mb_move_to_top, (const object *) this);
}

void tree_item::remove_child(const object *child) {
	___godot_icall_void_Object(___mb.mb_remove_child, (const object *) this, child);
}

void tree_item::select(const int64_t column) {
	___godot_icall_void_int(___mb.mb_select, (const object *) this, column);
}

void tree_item::set_button(const int64_t column, const int64_t button_idx, const ref<texture> button_) {
	___godot_icall_void_int_int_Object(___mb.mb_set_button, (const object *) this, column, button_idx, button_.ptr());
}

void tree_item::set_button_disabled(const int64_t column, const int64_t button_idx, const bool disabled) {
	___godot_icall_void_int_int_bool(___mb.mb_set_button_disabled, (const object *) this, column, button_idx, disabled);
}

void tree_item::set_cell_mode(const int64_t column, const int64_t mode) {
	___godot_icall_void_int_int(___mb.mb_set_cell_mode, (const object *) this, column, mode);
}

void tree_item::set_checked(const int64_t column, const bool checked) {
	___godot_icall_void_int_bool(___mb.mb_set_checked, (const object *) this, column, checked);
}

void tree_item::set_collapsed(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_collapsed, (const object *) this, enable);
}

void tree_item::set_custom_as_button(const int64_t column, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_custom_as_button, (const object *) this, column, enable);
}

void tree_item::set_custom_bg_color(const int64_t column, const color color_, const bool just_outline) {
	___godot_icall_void_int_Color_bool(___mb.mb_set_custom_bg_color, (const object *) this, column, color_, just_outline);
}

void tree_item::set_custom_color(const int64_t column, const color color_) {
	___godot_icall_void_int_Color(___mb.mb_set_custom_color, (const object *) this, column, color_);
}

void tree_item::set_custom_draw(const int64_t column, const object *object_, const string callback) {
	___godot_icall_void_int_Object_String(___mb.mb_set_custom_draw, (const object *) this, column, object_, callback);
}

void tree_item::set_custom_minimum_height(const int64_t height) {
	___godot_icall_void_int(___mb.mb_set_custom_minimum_height, (const object *) this, height);
}

void tree_item::set_disable_folding(const bool disable) {
	___godot_icall_void_bool(___mb.mb_set_disable_folding, (const object *) this, disable);
}

void tree_item::set_editable(const int64_t column, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_editable, (const object *) this, column, enabled);
}

void tree_item::set_expand_right(const int64_t column, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_expand_right, (const object *) this, column, enable);
}

void tree_item::set_icon(const int64_t column, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_set_icon, (const object *) this, column, texture_.ptr());
}

void tree_item::set_icon_max_width(const int64_t column, const int64_t width) {
	___godot_icall_void_int_int(___mb.mb_set_icon_max_width, (const object *) this, column, width);
}

void tree_item::set_icon_modulate(const int64_t column, const color modulate) {
	___godot_icall_void_int_Color(___mb.mb_set_icon_modulate, (const object *) this, column, modulate);
}

void tree_item::set_icon_region(const int64_t column, const rect2 region) {
	___godot_icall_void_int_Rect2(___mb.mb_set_icon_region, (const object *) this, column, region);
}

void tree_item::set_metadata(const int64_t column, const variant meta) {
	___godot_icall_void_int_Variant(___mb.mb_set_metadata, (const object *) this, column, meta);
}

void tree_item::set_range(const int64_t column, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_range, (const object *) this, column, value);
}

void tree_item::set_range_config(const int64_t column, const real_t min, const real_t max, const real_t step, const bool expr) {
	___godot_icall_void_int_float_float_float_bool(___mb.mb_set_range_config, (const object *) this, column, min, max, step, expr);
}

void tree_item::set_selectable(const int64_t column, const bool selectable) {
	___godot_icall_void_int_bool(___mb.mb_set_selectable, (const object *) this, column, selectable);
}

void tree_item::set_suffix(const int64_t column, const string text) {
	___godot_icall_void_int_String(___mb.mb_set_suffix, (const object *) this, column, text);
}

void tree_item::set_text(const int64_t column, const string text) {
	___godot_icall_void_int_String(___mb.mb_set_text, (const object *) this, column, text);
}

void tree_item::set_text_align(const int64_t column, const int64_t text_align) {
	___godot_icall_void_int_int(___mb.mb_set_text_align, (const object *) this, column, text_align);
}

void tree_item::set_tooltip(const int64_t column, const string tooltip) {
	___godot_icall_void_int_String(___mb.mb_set_tooltip, (const object *) this, column, tooltip);
}

}