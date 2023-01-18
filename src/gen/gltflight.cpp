#include "gltflight.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gltflight::___method_bindings gltflight::___mb = {};

void *gltflight::_detail_class_tag = nullptr;

void gltflight::___init_method_bindings() {
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("GLTFLight", "get_color");
	___mb.mb_get_inner_cone_angle = gd::api->godot_method_bind_get_method("GLTFLight", "get_inner_cone_angle");
	___mb.mb_get_intensity = gd::api->godot_method_bind_get_method("GLTFLight", "get_intensity");
	___mb.mb_get_outer_cone_angle = gd::api->godot_method_bind_get_method("GLTFLight", "get_outer_cone_angle");
	___mb.mb_get_range = gd::api->godot_method_bind_get_method("GLTFLight", "get_range");
	___mb.mb_get_type = gd::api->godot_method_bind_get_method("GLTFLight", "get_type");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("GLTFLight", "set_color");
	___mb.mb_set_inner_cone_angle = gd::api->godot_method_bind_get_method("GLTFLight", "set_inner_cone_angle");
	___mb.mb_set_intensity = gd::api->godot_method_bind_get_method("GLTFLight", "set_intensity");
	___mb.mb_set_outer_cone_angle = gd::api->godot_method_bind_get_method("GLTFLight", "set_outer_cone_angle");
	___mb.mb_set_range = gd::api->godot_method_bind_get_method("GLTFLight", "set_range");
	___mb.mb_set_type = gd::api->godot_method_bind_get_method("GLTFLight", "set_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFLight");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltflight *gltflight::_new()
{
	return (gltflight *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFLight")());
}
color gltflight::get_color() {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

real_t gltflight::get_inner_cone_angle() {
	return ___godot_icall_float(___mb.mb_get_inner_cone_angle, (const object *) this);
}

real_t gltflight::get_intensity() {
	return ___godot_icall_float(___mb.mb_get_intensity, (const object *) this);
}

real_t gltflight::get_outer_cone_angle() {
	return ___godot_icall_float(___mb.mb_get_outer_cone_angle, (const object *) this);
}

real_t gltflight::get_range() {
	return ___godot_icall_float(___mb.mb_get_range, (const object *) this);
}

string gltflight::get_type() {
	return ___godot_icall_String(___mb.mb_get_type, (const object *) this);
}

void gltflight::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void gltflight::set_inner_cone_angle(const real_t inner_cone_angle) {
	___godot_icall_void_float(___mb.mb_set_inner_cone_angle, (const object *) this, inner_cone_angle);
}

void gltflight::set_intensity(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_intensity, (const object *) this, intensity);
}

void gltflight::set_outer_cone_angle(const real_t outer_cone_angle) {
	___godot_icall_void_float(___mb.mb_set_outer_cone_angle, (const object *) this, outer_cone_angle);
}

void gltflight::set_range(const real_t range_) {
	___godot_icall_void_float(___mb.mb_set_range, (const object *) this, range_);
}

void gltflight::set_type(const string type) {
	___godot_icall_void_String(___mb.mb_set_type, (const object *) this, type);
}

}