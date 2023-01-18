#include "slider.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


slider::___method_bindings slider::___mb = {};

void *slider::_detail_class_tag = nullptr;

void slider::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("Slider", "_gui_input");
	___mb.mb_get_ticks = gd::api->godot_method_bind_get_method("Slider", "get_ticks");
	___mb.mb_get_ticks_on_borders = gd::api->godot_method_bind_get_method("Slider", "get_ticks_on_borders");
	___mb.mb_is_editable = gd::api->godot_method_bind_get_method("Slider", "is_editable");
	___mb.mb_is_scrollable = gd::api->godot_method_bind_get_method("Slider", "is_scrollable");
	___mb.mb_set_editable = gd::api->godot_method_bind_get_method("Slider", "set_editable");
	___mb.mb_set_scrollable = gd::api->godot_method_bind_get_method("Slider", "set_scrollable");
	___mb.mb_set_ticks = gd::api->godot_method_bind_get_method("Slider", "set_ticks");
	___mb.mb_set_ticks_on_borders = gd::api->godot_method_bind_get_method("Slider", "set_ticks_on_borders");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Slider");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void slider::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

int64_t slider::get_ticks() const {
	return ___godot_icall_int(___mb.mb_get_ticks, (const object *) this);
}

bool slider::get_ticks_on_borders() const {
	return ___godot_icall_bool(___mb.mb_get_ticks_on_borders, (const object *) this);
}

bool slider::is_editable() const {
	return ___godot_icall_bool(___mb.mb_is_editable, (const object *) this);
}

bool slider::is_scrollable() const {
	return ___godot_icall_bool(___mb.mb_is_scrollable, (const object *) this);
}

void slider::set_editable(const bool editable) {
	___godot_icall_void_bool(___mb.mb_set_editable, (const object *) this, editable);
}

void slider::set_scrollable(const bool scrollable) {
	___godot_icall_void_bool(___mb.mb_set_scrollable, (const object *) this, scrollable);
}

void slider::set_ticks(const int64_t count) {
	___godot_icall_void_int(___mb.mb_set_ticks, (const object *) this, count);
}

void slider::set_ticks_on_borders(const bool ticks_on_border) {
	___godot_icall_void_bool(___mb.mb_set_ticks_on_borders, (const object *) this, ticks_on_border);
}

}