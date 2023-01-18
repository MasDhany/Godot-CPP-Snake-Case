#include "sprite3d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


sprite3d::___method_bindings sprite3d::___mb = {};

void *sprite3d::_detail_class_tag = nullptr;

void sprite3d::___init_method_bindings() {
	___mb.mb_get_frame = gd::api->godot_method_bind_get_method("Sprite3D", "get_frame");
	___mb.mb_get_frame_coords = gd::api->godot_method_bind_get_method("Sprite3D", "get_frame_coords");
	___mb.mb_get_hframes = gd::api->godot_method_bind_get_method("Sprite3D", "get_hframes");
	___mb.mb_get_region_rect = gd::api->godot_method_bind_get_method("Sprite3D", "get_region_rect");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("Sprite3D", "get_texture");
	___mb.mb_get_vframes = gd::api->godot_method_bind_get_method("Sprite3D", "get_vframes");
	___mb.mb_is_region = gd::api->godot_method_bind_get_method("Sprite3D", "is_region");
	___mb.mb_set_frame = gd::api->godot_method_bind_get_method("Sprite3D", "set_frame");
	___mb.mb_set_frame_coords = gd::api->godot_method_bind_get_method("Sprite3D", "set_frame_coords");
	___mb.mb_set_hframes = gd::api->godot_method_bind_get_method("Sprite3D", "set_hframes");
	___mb.mb_set_region = gd::api->godot_method_bind_get_method("Sprite3D", "set_region");
	___mb.mb_set_region_rect = gd::api->godot_method_bind_get_method("Sprite3D", "set_region_rect");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("Sprite3D", "set_texture");
	___mb.mb_set_vframes = gd::api->godot_method_bind_get_method("Sprite3D", "set_vframes");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Sprite3D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

sprite3d *sprite3d::_new()
{
	return (sprite3d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Sprite3D")());
}
int64_t sprite3d::get_frame() const {
	return ___godot_icall_int(___mb.mb_get_frame, (const object *) this);
}

vector2 sprite3d::get_frame_coords() const {
	return ___godot_icall_Vector2(___mb.mb_get_frame_coords, (const object *) this);
}

int64_t sprite3d::get_hframes() const {
	return ___godot_icall_int(___mb.mb_get_hframes, (const object *) this);
}

rect2 sprite3d::get_region_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_region_rect, (const object *) this);
}

ref<texture> sprite3d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

int64_t sprite3d::get_vframes() const {
	return ___godot_icall_int(___mb.mb_get_vframes, (const object *) this);
}

bool sprite3d::is_region() const {
	return ___godot_icall_bool(___mb.mb_is_region, (const object *) this);
}

void sprite3d::set_frame(const int64_t frame) {
	___godot_icall_void_int(___mb.mb_set_frame, (const object *) this, frame);
}

void sprite3d::set_frame_coords(const vector2 coords) {
	___godot_icall_void_Vector2(___mb.mb_set_frame_coords, (const object *) this, coords);
}

void sprite3d::set_hframes(const int64_t hframes) {
	___godot_icall_void_int(___mb.mb_set_hframes, (const object *) this, hframes);
}

void sprite3d::set_region(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_region, (const object *) this, enabled);
}

void sprite3d::set_region_rect(const rect2 rect) {
	___godot_icall_void_Rect2(___mb.mb_set_region_rect, (const object *) this, rect);
}

void sprite3d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void sprite3d::set_vframes(const int64_t vframes) {
	___godot_icall_void_int(___mb.mb_set_vframes, (const object *) this, vframes);
}

}