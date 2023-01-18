#include "nine_patch_rect.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


nine_patch_rect::___method_bindings nine_patch_rect::___mb = {};

void *nine_patch_rect::_detail_class_tag = nullptr;

void nine_patch_rect::___init_method_bindings() {
	___mb.mb_get_h_axis_stretch_mode = gd::api->godot_method_bind_get_method("NinePatchRect", "get_h_axis_stretch_mode");
	___mb.mb_get_patch_margin = gd::api->godot_method_bind_get_method("NinePatchRect", "get_patch_margin");
	___mb.mb_get_region_rect = gd::api->godot_method_bind_get_method("NinePatchRect", "get_region_rect");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("NinePatchRect", "get_texture");
	___mb.mb_get_v_axis_stretch_mode = gd::api->godot_method_bind_get_method("NinePatchRect", "get_v_axis_stretch_mode");
	___mb.mb_is_draw_center_enabled = gd::api->godot_method_bind_get_method("NinePatchRect", "is_draw_center_enabled");
	___mb.mb_set_draw_center = gd::api->godot_method_bind_get_method("NinePatchRect", "set_draw_center");
	___mb.mb_set_h_axis_stretch_mode = gd::api->godot_method_bind_get_method("NinePatchRect", "set_h_axis_stretch_mode");
	___mb.mb_set_patch_margin = gd::api->godot_method_bind_get_method("NinePatchRect", "set_patch_margin");
	___mb.mb_set_region_rect = gd::api->godot_method_bind_get_method("NinePatchRect", "set_region_rect");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("NinePatchRect", "set_texture");
	___mb.mb_set_v_axis_stretch_mode = gd::api->godot_method_bind_get_method("NinePatchRect", "set_v_axis_stretch_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NinePatchRect");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

nine_patch_rect *nine_patch_rect::_new()
{
	return (nine_patch_rect *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NinePatchRect")());
}
nine_patch_rect::AxisStretchMode nine_patch_rect::get_h_axis_stretch_mode() const {
	return (nine_patch_rect::AxisStretchMode) ___godot_icall_int(___mb.mb_get_h_axis_stretch_mode, (const object *) this);
}

int64_t nine_patch_rect::get_patch_margin(const int64_t margin) const {
	return ___godot_icall_int_int(___mb.mb_get_patch_margin, (const object *) this, margin);
}

rect2 nine_patch_rect::get_region_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_region_rect, (const object *) this);
}

ref<texture> nine_patch_rect::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

nine_patch_rect::AxisStretchMode nine_patch_rect::get_v_axis_stretch_mode() const {
	return (nine_patch_rect::AxisStretchMode) ___godot_icall_int(___mb.mb_get_v_axis_stretch_mode, (const object *) this);
}

bool nine_patch_rect::is_draw_center_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_draw_center_enabled, (const object *) this);
}

void nine_patch_rect::set_draw_center(const bool draw_center) {
	___godot_icall_void_bool(___mb.mb_set_draw_center, (const object *) this, draw_center);
}

void nine_patch_rect::set_h_axis_stretch_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_h_axis_stretch_mode, (const object *) this, mode);
}

void nine_patch_rect::set_patch_margin(const int64_t margin, const int64_t value) {
	___godot_icall_void_int_int(___mb.mb_set_patch_margin, (const object *) this, margin, value);
}

void nine_patch_rect::set_region_rect(const rect2 rect) {
	___godot_icall_void_Rect2(___mb.mb_set_region_rect, (const object *) this, rect);
}

void nine_patch_rect::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void nine_patch_rect::set_v_axis_stretch_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_v_axis_stretch_mode, (const object *) this, mode);
}

}