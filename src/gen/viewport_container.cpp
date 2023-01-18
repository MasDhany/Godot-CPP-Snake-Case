#include "viewport_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


viewport_container::___method_bindings viewport_container::___mb = {};

void *viewport_container::_detail_class_tag = nullptr;

void viewport_container::___init_method_bindings() {
	___mb.mb__input = gd::api->godot_method_bind_get_method("ViewportContainer", "_input");
	___mb.mb__unhandled_input = gd::api->godot_method_bind_get_method("ViewportContainer", "_unhandled_input");
	___mb.mb_get_stretch_shrink = gd::api->godot_method_bind_get_method("ViewportContainer", "get_stretch_shrink");
	___mb.mb_is_stretch_enabled = gd::api->godot_method_bind_get_method("ViewportContainer", "is_stretch_enabled");
	___mb.mb_set_stretch = gd::api->godot_method_bind_get_method("ViewportContainer", "set_stretch");
	___mb.mb_set_stretch_shrink = gd::api->godot_method_bind_get_method("ViewportContainer", "set_stretch_shrink");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ViewportContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

viewport_container *viewport_container::_new()
{
	return (viewport_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ViewportContainer")());
}
void viewport_container::_input(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb__input, (const object *) this, event.ptr());
}

void viewport_container::_unhandled_input(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb__unhandled_input, (const object *) this, event.ptr());
}

int64_t viewport_container::get_stretch_shrink() const {
	return ___godot_icall_int(___mb.mb_get_stretch_shrink, (const object *) this);
}

bool viewport_container::is_stretch_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_stretch_enabled, (const object *) this);
}

void viewport_container::set_stretch(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_stretch, (const object *) this, enable);
}

void viewport_container::set_stretch_shrink(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_stretch_shrink, (const object *) this, amount);
}

}