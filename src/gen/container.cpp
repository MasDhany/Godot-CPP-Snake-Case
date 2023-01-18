#include "container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"


namespace gd {


container::___method_bindings container::___mb = {};

void *container::_detail_class_tag = nullptr;

void container::___init_method_bindings() {
	___mb.mb__child_minsize_changed = gd::api->godot_method_bind_get_method("Container", "_child_minsize_changed");
	___mb.mb__sort_children = gd::api->godot_method_bind_get_method("Container", "_sort_children");
	___mb.mb_fit_child_in_rect = gd::api->godot_method_bind_get_method("Container", "fit_child_in_rect");
	___mb.mb_queue_sort = gd::api->godot_method_bind_get_method("Container", "queue_sort");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Container");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

container *container::_new()
{
	return (container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Container")());
}
void container::_child_minsize_changed() {
	___godot_icall_void(___mb.mb__child_minsize_changed, (const object *) this);
}

void container::_sort_children() {
	___godot_icall_void(___mb.mb__sort_children, (const object *) this);
}

void container::fit_child_in_rect(const control *child, const rect2 rect) {
	___godot_icall_void_Object_Rect2(___mb.mb_fit_child_in_rect, (const object *) this, child, rect);
}

void container::queue_sort() {
	___godot_icall_void(___mb.mb_queue_sort, (const object *) this);
}

}