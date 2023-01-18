#include "editor_resource_picker.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "input_event.hpp"
#include "object.hpp"
#include "resource.hpp"
#include "texture.hpp"


namespace gd {


editor_resource_picker::___method_bindings editor_resource_picker::___mb = {};

void *editor_resource_picker::_detail_class_tag = nullptr;

void editor_resource_picker::___init_method_bindings() {
	___mb.mb__button_draw = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_button_draw");
	___mb.mb__button_input = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_button_input");
	___mb.mb__edit_menu_cbk = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_edit_menu_cbk");
	___mb.mb__file_quick_selected = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_file_quick_selected");
	___mb.mb__file_selected = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_file_selected");
	___mb.mb__resource_selected = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_resource_selected");
	___mb.mb__update_menu = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_update_menu");
	___mb.mb__update_resource_preview = gd::api->godot_method_bind_get_method("EditorResourcePicker", "_update_resource_preview");
	___mb.mb_can_drop_data_fw = gd::api->godot_method_bind_get_method("EditorResourcePicker", "can_drop_data_fw");
	___mb.mb_drop_data_fw = gd::api->godot_method_bind_get_method("EditorResourcePicker", "drop_data_fw");
	___mb.mb_get_allowed_types = gd::api->godot_method_bind_get_method("EditorResourcePicker", "get_allowed_types");
	___mb.mb_get_base_type = gd::api->godot_method_bind_get_method("EditorResourcePicker", "get_base_type");
	___mb.mb_get_drag_data_fw = gd::api->godot_method_bind_get_method("EditorResourcePicker", "get_drag_data_fw");
	___mb.mb_get_edited_resource = gd::api->godot_method_bind_get_method("EditorResourcePicker", "get_edited_resource");
	___mb.mb_handle_menu_selected = gd::api->godot_method_bind_get_method("EditorResourcePicker", "handle_menu_selected");
	___mb.mb_is_editable = gd::api->godot_method_bind_get_method("EditorResourcePicker", "is_editable");
	___mb.mb_is_toggle_mode = gd::api->godot_method_bind_get_method("EditorResourcePicker", "is_toggle_mode");
	___mb.mb_set_base_type = gd::api->godot_method_bind_get_method("EditorResourcePicker", "set_base_type");
	___mb.mb_set_create_options = gd::api->godot_method_bind_get_method("EditorResourcePicker", "set_create_options");
	___mb.mb_set_editable = gd::api->godot_method_bind_get_method("EditorResourcePicker", "set_editable");
	___mb.mb_set_edited_resource = gd::api->godot_method_bind_get_method("EditorResourcePicker", "set_edited_resource");
	___mb.mb_set_toggle_mode = gd::api->godot_method_bind_get_method("EditorResourcePicker", "set_toggle_mode");
	___mb.mb_set_toggle_pressed = gd::api->godot_method_bind_get_method("EditorResourcePicker", "set_toggle_pressed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorResourcePicker");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_resource_picker::_button_draw() {
	___godot_icall_void(___mb.mb__button_draw, (const object *) this);
}

void editor_resource_picker::_button_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__button_input, (const object *) this, arg0.ptr());
}

void editor_resource_picker::_edit_menu_cbk(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__edit_menu_cbk, (const object *) this, arg0);
}

void editor_resource_picker::_file_quick_selected() {
	___godot_icall_void(___mb.mb__file_quick_selected, (const object *) this);
}

void editor_resource_picker::_file_selected(const string arg0) {
	___godot_icall_void_String(___mb.mb__file_selected, (const object *) this, arg0);
}

void editor_resource_picker::_resource_selected() {
	___godot_icall_void(___mb.mb__resource_selected, (const object *) this);
}

void editor_resource_picker::_update_menu() {
	___godot_icall_void(___mb.mb__update_menu, (const object *) this);
}

void editor_resource_picker::_update_resource_preview(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const int64_t arg3) {
	___godot_icall_void_String_Object_Object_int(___mb.mb__update_resource_preview, (const object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

bool editor_resource_picker::can_drop_data_fw(const vector2 position, const variant data, const control *from) const {
	return ___godot_icall_bool_Vector2_Variant_Object(___mb.mb_can_drop_data_fw, (const object *) this, position, data, from);
}

void editor_resource_picker::drop_data_fw(const vector2 position, const variant data, const control *from) {
	___godot_icall_void_Vector2_Variant_Object(___mb.mb_drop_data_fw, (const object *) this, position, data, from);
}

pool_string_array editor_resource_picker::get_allowed_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_allowed_types, (const object *) this);
}

string editor_resource_picker::get_base_type() const {
	return ___godot_icall_String(___mb.mb_get_base_type, (const object *) this);
}

variant editor_resource_picker::get_drag_data_fw(const vector2 position, const control *from) {
	return ___godot_icall_Variant_Vector2_Object(___mb.mb_get_drag_data_fw, (const object *) this, position, from);
}

ref<resource> editor_resource_picker::get_edited_resource() {
	return ref<resource>::__internal_constructor(___godot_icall_Object(___mb.mb_get_edited_resource, (const object *) this));
}

bool editor_resource_picker::handle_menu_selected(const int64_t id) {
	return ___godot_icall_bool_int(___mb.mb_handle_menu_selected, (const object *) this, id);
}

bool editor_resource_picker::is_editable() const {
	return ___godot_icall_bool(___mb.mb_is_editable, (const object *) this);
}

bool editor_resource_picker::is_toggle_mode() const {
	return ___godot_icall_bool(___mb.mb_is_toggle_mode, (const object *) this);
}

void editor_resource_picker::set_base_type(const string base_type) {
	___godot_icall_void_String(___mb.mb_set_base_type, (const object *) this, base_type);
}

void editor_resource_picker::set_create_options(const object *menu_node) {
	___godot_icall_void_Object(___mb.mb_set_create_options, (const object *) this, menu_node);
}

void editor_resource_picker::set_editable(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_editable, (const object *) this, enable);
}

void editor_resource_picker::set_edited_resource(const ref<resource> resource_) {
	___godot_icall_void_Object(___mb.mb_set_edited_resource, (const object *) this, resource_.ptr());
}

void editor_resource_picker::set_toggle_mode(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_toggle_mode, (const object *) this, enable);
}

void editor_resource_picker::set_toggle_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_toggle_pressed, (const object *) this, pressed);
}

}