#include "canvas_item_material.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


canvas_item_material::___method_bindings canvas_item_material::___mb = {};

void *canvas_item_material::_detail_class_tag = nullptr;

void canvas_item_material::___init_method_bindings() {
	___mb.mb_get_blend_mode = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "get_blend_mode");
	___mb.mb_get_light_mode = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "get_light_mode");
	___mb.mb_get_particles_anim_h_frames = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_anim_h_frames");
	___mb.mb_get_particles_anim_loop = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_anim_loop");
	___mb.mb_get_particles_anim_v_frames = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_anim_v_frames");
	___mb.mb_get_particles_animation = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_animation");
	___mb.mb_set_blend_mode = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "set_blend_mode");
	___mb.mb_set_light_mode = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "set_light_mode");
	___mb.mb_set_particles_anim_h_frames = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_anim_h_frames");
	___mb.mb_set_particles_anim_loop = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_anim_loop");
	___mb.mb_set_particles_anim_v_frames = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_anim_v_frames");
	___mb.mb_set_particles_animation = gd::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_animation");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CanvasItemMaterial");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

canvas_item_material *canvas_item_material::_new()
{
	return (canvas_item_material *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CanvasItemMaterial")());
}
canvas_item_material::BlendMode canvas_item_material::get_blend_mode() const {
	return (canvas_item_material::BlendMode) ___godot_icall_int(___mb.mb_get_blend_mode, (const object *) this);
}

canvas_item_material::LightMode canvas_item_material::get_light_mode() const {
	return (canvas_item_material::LightMode) ___godot_icall_int(___mb.mb_get_light_mode, (const object *) this);
}

int64_t canvas_item_material::get_particles_anim_h_frames() const {
	return ___godot_icall_int(___mb.mb_get_particles_anim_h_frames, (const object *) this);
}

bool canvas_item_material::get_particles_anim_loop() const {
	return ___godot_icall_bool(___mb.mb_get_particles_anim_loop, (const object *) this);
}

int64_t canvas_item_material::get_particles_anim_v_frames() const {
	return ___godot_icall_int(___mb.mb_get_particles_anim_v_frames, (const object *) this);
}

bool canvas_item_material::get_particles_animation() const {
	return ___godot_icall_bool(___mb.mb_get_particles_animation, (const object *) this);
}

void canvas_item_material::set_blend_mode(const int64_t blend_mode) {
	___godot_icall_void_int(___mb.mb_set_blend_mode, (const object *) this, blend_mode);
}

void canvas_item_material::set_light_mode(const int64_t light_mode) {
	___godot_icall_void_int(___mb.mb_set_light_mode, (const object *) this, light_mode);
}

void canvas_item_material::set_particles_anim_h_frames(const int64_t frames) {
	___godot_icall_void_int(___mb.mb_set_particles_anim_h_frames, (const object *) this, frames);
}

void canvas_item_material::set_particles_anim_loop(const bool loop) {
	___godot_icall_void_bool(___mb.mb_set_particles_anim_loop, (const object *) this, loop);
}

void canvas_item_material::set_particles_anim_v_frames(const int64_t frames) {
	___godot_icall_void_int(___mb.mb_set_particles_anim_v_frames, (const object *) this, frames);
}

void canvas_item_material::set_particles_animation(const bool particles_anim) {
	___godot_icall_void_bool(___mb.mb_set_particles_animation, (const object *) this, particles_anim);
}

}