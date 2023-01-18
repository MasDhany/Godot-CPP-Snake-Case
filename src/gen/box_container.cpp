#include "box_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


box_container::___method_bindings box_container::___mb = {};

void *box_container::_detail_class_tag = nullptr;

void box_container::___init_method_bindings() {
	___mb.mb_add_spacer = gd::api->godot_method_bind_get_method("BoxContainer", "add_spacer");
	___mb.mb_get_alignment = gd::api->godot_method_bind_get_method("BoxContainer", "get_alignment");
	___mb.mb_set_alignment = gd::api->godot_method_bind_get_method("BoxContainer", "set_alignment");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BoxContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void box_container::add_spacer(const bool begin) {
	___godot_icall_void_bool(___mb.mb_add_spacer, (const object *) this, begin);
}

box_container::AlignMode box_container::get_alignment() const {
	return (box_container::AlignMode) ___godot_icall_int(___mb.mb_get_alignment, (const object *) this);
}

void box_container::set_alignment(const int64_t alignment) {
	___godot_icall_void_int(___mb.mb_set_alignment, (const object *) this, alignment);
}

}