#include "progress_bar.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


progress_bar::___method_bindings progress_bar::___mb = {};

void *progress_bar::_detail_class_tag = nullptr;

void progress_bar::___init_method_bindings() {
	___mb.mb_is_percent_visible = gd::api->godot_method_bind_get_method("ProgressBar", "is_percent_visible");
	___mb.mb_set_percent_visible = gd::api->godot_method_bind_get_method("ProgressBar", "set_percent_visible");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ProgressBar");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

progress_bar *progress_bar::_new()
{
	return (progress_bar *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ProgressBar")());
}
bool progress_bar::is_percent_visible() const {
	return ___godot_icall_bool(___mb.mb_is_percent_visible, (const object *) this);
}

void progress_bar::set_percent_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_percent_visible, (const object *) this, visible);
}

}