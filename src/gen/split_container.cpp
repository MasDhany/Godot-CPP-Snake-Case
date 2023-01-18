#include "split_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


split_container::___method_bindings split_container::___mb = {};

void *split_container::_detail_class_tag = nullptr;

void split_container::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("SplitContainer", "_gui_input");
	___mb.mb_clamp_split_offset = gd::api->godot_method_bind_get_method("SplitContainer", "clamp_split_offset");
	___mb.mb_get_dragger_visibility = gd::api->godot_method_bind_get_method("SplitContainer", "get_dragger_visibility");
	___mb.mb_get_split_offset = gd::api->godot_method_bind_get_method("SplitContainer", "get_split_offset");
	___mb.mb_is_collapsed = gd::api->godot_method_bind_get_method("SplitContainer", "is_collapsed");
	___mb.mb_set_collapsed = gd::api->godot_method_bind_get_method("SplitContainer", "set_collapsed");
	___mb.mb_set_dragger_visibility = gd::api->godot_method_bind_get_method("SplitContainer", "set_dragger_visibility");
	___mb.mb_set_split_offset = gd::api->godot_method_bind_get_method("SplitContainer", "set_split_offset");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SplitContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void split_container::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void split_container::clamp_split_offset() {
	___godot_icall_void(___mb.mb_clamp_split_offset, (const object *) this);
}

split_container::DraggerVisibility split_container::get_dragger_visibility() const {
	return (split_container::DraggerVisibility) ___godot_icall_int(___mb.mb_get_dragger_visibility, (const object *) this);
}

int64_t split_container::get_split_offset() const {
	return ___godot_icall_int(___mb.mb_get_split_offset, (const object *) this);
}

bool split_container::is_collapsed() const {
	return ___godot_icall_bool(___mb.mb_is_collapsed, (const object *) this);
}

void split_container::set_collapsed(const bool collapsed) {
	___godot_icall_void_bool(___mb.mb_set_collapsed, (const object *) this, collapsed);
}

void split_container::set_dragger_visibility(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_dragger_visibility, (const object *) this, mode);
}

void split_container::set_split_offset(const int64_t offset) {
	___godot_icall_void_int(___mb.mb_set_split_offset, (const object *) this, offset);
}

}