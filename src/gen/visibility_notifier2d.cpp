#include "visibility_notifier2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visibility_notifier2d::___method_bindings visibility_notifier2d::___mb = {};

void *visibility_notifier2d::_detail_class_tag = nullptr;

void visibility_notifier2d::___init_method_bindings() {
	___mb.mb_get_rect = gd::api->godot_method_bind_get_method("VisibilityNotifier2D", "get_rect");
	___mb.mb_is_on_screen = gd::api->godot_method_bind_get_method("VisibilityNotifier2D", "is_on_screen");
	___mb.mb_set_rect = gd::api->godot_method_bind_get_method("VisibilityNotifier2D", "set_rect");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisibilityNotifier2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visibility_notifier2d *visibility_notifier2d::_new()
{
	return (visibility_notifier2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisibilityNotifier2D")());
}
rect2 visibility_notifier2d::get_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_rect, (const object *) this);
}

bool visibility_notifier2d::is_on_screen() const {
	return ___godot_icall_bool(___mb.mb_is_on_screen, (const object *) this);
}

void visibility_notifier2d::set_rect(const rect2 rect) {
	___godot_icall_void_Rect2(___mb.mb_set_rect, (const object *) this, rect);
}

}