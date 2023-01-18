#include "scroll_bar.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


scroll_bar::___method_bindings scroll_bar::___mb = {};

void *scroll_bar::_detail_class_tag = nullptr;

void scroll_bar::___init_method_bindings() {
	___mb.mb__drag_node_exit = gd::api->godot_method_bind_get_method("ScrollBar", "_drag_node_exit");
	___mb.mb__drag_node_input = gd::api->godot_method_bind_get_method("ScrollBar", "_drag_node_input");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("ScrollBar", "_gui_input");
	___mb.mb_get_custom_step = gd::api->godot_method_bind_get_method("ScrollBar", "get_custom_step");
	___mb.mb_set_custom_step = gd::api->godot_method_bind_get_method("ScrollBar", "set_custom_step");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ScrollBar");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void scroll_bar::_drag_node_exit() {
	___godot_icall_void(___mb.mb__drag_node_exit, (const object *) this);
}

void scroll_bar::_drag_node_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__drag_node_input, (const object *) this, arg0.ptr());
}

void scroll_bar::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

real_t scroll_bar::get_custom_step() const {
	return ___godot_icall_float(___mb.mb_get_custom_step, (const object *) this);
}

void scroll_bar::set_custom_step(const real_t step) {
	___godot_icall_void_float(___mb.mb_set_custom_step, (const object *) this, step);
}

}