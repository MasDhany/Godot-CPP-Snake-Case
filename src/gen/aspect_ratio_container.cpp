#include "aspect_ratio_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


aspect_ratio_container::___method_bindings aspect_ratio_container::___mb = {};

void *aspect_ratio_container::_detail_class_tag = nullptr;

void aspect_ratio_container::___init_method_bindings() {
	___mb.mb_get_alignment_horizontal = gd::api->godot_method_bind_get_method("AspectRatioContainer", "get_alignment_horizontal");
	___mb.mb_get_alignment_vertical = gd::api->godot_method_bind_get_method("AspectRatioContainer", "get_alignment_vertical");
	___mb.mb_get_ratio = gd::api->godot_method_bind_get_method("AspectRatioContainer", "get_ratio");
	___mb.mb_get_stretch_mode = gd::api->godot_method_bind_get_method("AspectRatioContainer", "get_stretch_mode");
	___mb.mb_set_alignment_horizontal = gd::api->godot_method_bind_get_method("AspectRatioContainer", "set_alignment_horizontal");
	___mb.mb_set_alignment_vertical = gd::api->godot_method_bind_get_method("AspectRatioContainer", "set_alignment_vertical");
	___mb.mb_set_ratio = gd::api->godot_method_bind_get_method("AspectRatioContainer", "set_ratio");
	___mb.mb_set_stretch_mode = gd::api->godot_method_bind_get_method("AspectRatioContainer", "set_stretch_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AspectRatioContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

aspect_ratio_container *aspect_ratio_container::_new()
{
	return (aspect_ratio_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AspectRatioContainer")());
}
aspect_ratio_container::AlignMode aspect_ratio_container::get_alignment_horizontal() const {
	return (aspect_ratio_container::AlignMode) ___godot_icall_int(___mb.mb_get_alignment_horizontal, (const object *) this);
}

aspect_ratio_container::AlignMode aspect_ratio_container::get_alignment_vertical() const {
	return (aspect_ratio_container::AlignMode) ___godot_icall_int(___mb.mb_get_alignment_vertical, (const object *) this);
}

real_t aspect_ratio_container::get_ratio() const {
	return ___godot_icall_float(___mb.mb_get_ratio, (const object *) this);
}

aspect_ratio_container::StretchMode aspect_ratio_container::get_stretch_mode() const {
	return (aspect_ratio_container::StretchMode) ___godot_icall_int(___mb.mb_get_stretch_mode, (const object *) this);
}

void aspect_ratio_container::set_alignment_horizontal(const int64_t alignment_horizontal) {
	___godot_icall_void_int(___mb.mb_set_alignment_horizontal, (const object *) this, alignment_horizontal);
}

void aspect_ratio_container::set_alignment_vertical(const int64_t alignment_vertical) {
	___godot_icall_void_int(___mb.mb_set_alignment_vertical, (const object *) this, alignment_vertical);
}

void aspect_ratio_container::set_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_ratio, (const object *) this, ratio);
}

void aspect_ratio_container::set_stretch_mode(const int64_t stretch_mode) {
	___godot_icall_void_int(___mb.mb_set_stretch_mode, (const object *) this, stretch_mode);
}

}