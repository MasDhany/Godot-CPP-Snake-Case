#include "back_buffer_copy.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


back_buffer_copy::___method_bindings back_buffer_copy::___mb = {};

void *back_buffer_copy::_detail_class_tag = nullptr;

void back_buffer_copy::___init_method_bindings() {
	___mb.mb_get_copy_mode = gd::api->godot_method_bind_get_method("BackBufferCopy", "get_copy_mode");
	___mb.mb_get_rect = gd::api->godot_method_bind_get_method("BackBufferCopy", "get_rect");
	___mb.mb_set_copy_mode = gd::api->godot_method_bind_get_method("BackBufferCopy", "set_copy_mode");
	___mb.mb_set_rect = gd::api->godot_method_bind_get_method("BackBufferCopy", "set_rect");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BackBufferCopy");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

back_buffer_copy *back_buffer_copy::_new()
{
	return (back_buffer_copy *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"BackBufferCopy")());
}
back_buffer_copy::CopyMode back_buffer_copy::get_copy_mode() const {
	return (back_buffer_copy::CopyMode) ___godot_icall_int(___mb.mb_get_copy_mode, (const object *) this);
}

rect2 back_buffer_copy::get_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_rect, (const object *) this);
}

void back_buffer_copy::set_copy_mode(const int64_t copy_mode) {
	___godot_icall_void_int(___mb.mb_set_copy_mode, (const object *) this, copy_mode);
}

void back_buffer_copy::set_rect(const rect2 rect) {
	___godot_icall_void_Rect2(___mb.mb_set_rect, (const object *) this, rect);
}

}