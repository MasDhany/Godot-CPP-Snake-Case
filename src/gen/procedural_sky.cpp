#include "procedural_sky.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


procedural_sky::___method_bindings procedural_sky::___mb = {};

void *procedural_sky::_detail_class_tag = nullptr;

void procedural_sky::___init_method_bindings() {
	___mb.mb__thread_done = gd::api->godot_method_bind_get_method("ProceduralSky", "_thread_done");
	___mb.mb__update_sky = gd::api->godot_method_bind_get_method("ProceduralSky", "_update_sky");
	___mb.mb_get_ground_bottom_color = gd::api->godot_method_bind_get_method("ProceduralSky", "get_ground_bottom_color");
	___mb.mb_get_ground_curve = gd::api->godot_method_bind_get_method("ProceduralSky", "get_ground_curve");
	___mb.mb_get_ground_energy = gd::api->godot_method_bind_get_method("ProceduralSky", "get_ground_energy");
	___mb.mb_get_ground_horizon_color = gd::api->godot_method_bind_get_method("ProceduralSky", "get_ground_horizon_color");
	___mb.mb_get_sky_curve = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sky_curve");
	___mb.mb_get_sky_energy = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sky_energy");
	___mb.mb_get_sky_horizon_color = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sky_horizon_color");
	___mb.mb_get_sky_top_color = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sky_top_color");
	___mb.mb_get_sun_angle_max = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sun_angle_max");
	___mb.mb_get_sun_angle_min = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sun_angle_min");
	___mb.mb_get_sun_color = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sun_color");
	___mb.mb_get_sun_curve = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sun_curve");
	___mb.mb_get_sun_energy = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sun_energy");
	___mb.mb_get_sun_latitude = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sun_latitude");
	___mb.mb_get_sun_longitude = gd::api->godot_method_bind_get_method("ProceduralSky", "get_sun_longitude");
	___mb.mb_get_texture_size = gd::api->godot_method_bind_get_method("ProceduralSky", "get_texture_size");
	___mb.mb_set_ground_bottom_color = gd::api->godot_method_bind_get_method("ProceduralSky", "set_ground_bottom_color");
	___mb.mb_set_ground_curve = gd::api->godot_method_bind_get_method("ProceduralSky", "set_ground_curve");
	___mb.mb_set_ground_energy = gd::api->godot_method_bind_get_method("ProceduralSky", "set_ground_energy");
	___mb.mb_set_ground_horizon_color = gd::api->godot_method_bind_get_method("ProceduralSky", "set_ground_horizon_color");
	___mb.mb_set_sky_curve = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sky_curve");
	___mb.mb_set_sky_energy = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sky_energy");
	___mb.mb_set_sky_horizon_color = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sky_horizon_color");
	___mb.mb_set_sky_top_color = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sky_top_color");
	___mb.mb_set_sun_angle_max = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sun_angle_max");
	___mb.mb_set_sun_angle_min = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sun_angle_min");
	___mb.mb_set_sun_color = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sun_color");
	___mb.mb_set_sun_curve = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sun_curve");
	___mb.mb_set_sun_energy = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sun_energy");
	___mb.mb_set_sun_latitude = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sun_latitude");
	___mb.mb_set_sun_longitude = gd::api->godot_method_bind_get_method("ProceduralSky", "set_sun_longitude");
	___mb.mb_set_texture_size = gd::api->godot_method_bind_get_method("ProceduralSky", "set_texture_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ProceduralSky");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

procedural_sky *procedural_sky::_new()
{
	return (procedural_sky *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ProceduralSky")());
}
void procedural_sky::_thread_done(const ref<image> image_) {
	___godot_icall_void_Object(___mb.mb__thread_done, (const object *) this, image_.ptr());
}

void procedural_sky::_update_sky() {
	___godot_icall_void(___mb.mb__update_sky, (const object *) this);
}

color procedural_sky::get_ground_bottom_color() const {
	return ___godot_icall_Color(___mb.mb_get_ground_bottom_color, (const object *) this);
}

real_t procedural_sky::get_ground_curve() const {
	return ___godot_icall_float(___mb.mb_get_ground_curve, (const object *) this);
}

real_t procedural_sky::get_ground_energy() const {
	return ___godot_icall_float(___mb.mb_get_ground_energy, (const object *) this);
}

color procedural_sky::get_ground_horizon_color() const {
	return ___godot_icall_Color(___mb.mb_get_ground_horizon_color, (const object *) this);
}

real_t procedural_sky::get_sky_curve() const {
	return ___godot_icall_float(___mb.mb_get_sky_curve, (const object *) this);
}

real_t procedural_sky::get_sky_energy() const {
	return ___godot_icall_float(___mb.mb_get_sky_energy, (const object *) this);
}

color procedural_sky::get_sky_horizon_color() const {
	return ___godot_icall_Color(___mb.mb_get_sky_horizon_color, (const object *) this);
}

color procedural_sky::get_sky_top_color() const {
	return ___godot_icall_Color(___mb.mb_get_sky_top_color, (const object *) this);
}

real_t procedural_sky::get_sun_angle_max() const {
	return ___godot_icall_float(___mb.mb_get_sun_angle_max, (const object *) this);
}

real_t procedural_sky::get_sun_angle_min() const {
	return ___godot_icall_float(___mb.mb_get_sun_angle_min, (const object *) this);
}

color procedural_sky::get_sun_color() const {
	return ___godot_icall_Color(___mb.mb_get_sun_color, (const object *) this);
}

real_t procedural_sky::get_sun_curve() const {
	return ___godot_icall_float(___mb.mb_get_sun_curve, (const object *) this);
}

real_t procedural_sky::get_sun_energy() const {
	return ___godot_icall_float(___mb.mb_get_sun_energy, (const object *) this);
}

real_t procedural_sky::get_sun_latitude() const {
	return ___godot_icall_float(___mb.mb_get_sun_latitude, (const object *) this);
}

real_t procedural_sky::get_sun_longitude() const {
	return ___godot_icall_float(___mb.mb_get_sun_longitude, (const object *) this);
}

procedural_sky::TextureSize procedural_sky::get_texture_size() const {
	return (procedural_sky::TextureSize) ___godot_icall_int(___mb.mb_get_texture_size, (const object *) this);
}

void procedural_sky::set_ground_bottom_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_ground_bottom_color, (const object *) this, color_);
}

void procedural_sky::set_ground_curve(const real_t curve_) {
	___godot_icall_void_float(___mb.mb_set_ground_curve, (const object *) this, curve_);
}

void procedural_sky::set_ground_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_ground_energy, (const object *) this, energy);
}

void procedural_sky::set_ground_horizon_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_ground_horizon_color, (const object *) this, color_);
}

void procedural_sky::set_sky_curve(const real_t curve_) {
	___godot_icall_void_float(___mb.mb_set_sky_curve, (const object *) this, curve_);
}

void procedural_sky::set_sky_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_sky_energy, (const object *) this, energy);
}

void procedural_sky::set_sky_horizon_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_sky_horizon_color, (const object *) this, color_);
}

void procedural_sky::set_sky_top_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_sky_top_color, (const object *) this, color_);
}

void procedural_sky::set_sun_angle_max(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_sun_angle_max, (const object *) this, degrees);
}

void procedural_sky::set_sun_angle_min(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_sun_angle_min, (const object *) this, degrees);
}

void procedural_sky::set_sun_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_sun_color, (const object *) this, color_);
}

void procedural_sky::set_sun_curve(const real_t curve_) {
	___godot_icall_void_float(___mb.mb_set_sun_curve, (const object *) this, curve_);
}

void procedural_sky::set_sun_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_sun_energy, (const object *) this, energy);
}

void procedural_sky::set_sun_latitude(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_sun_latitude, (const object *) this, degrees);
}

void procedural_sky::set_sun_longitude(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_sun_longitude, (const object *) this, degrees);
}

void procedural_sky::set_texture_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_texture_size, (const object *) this, size);
}

}