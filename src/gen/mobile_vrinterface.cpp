#include "mobile_vrinterface.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


mobile_vrinterface::___method_bindings mobile_vrinterface::___mb = {};

void *mobile_vrinterface::_detail_class_tag = nullptr;

void mobile_vrinterface::___init_method_bindings() {
	___mb.mb_get_display_to_lens = gd::api->godot_method_bind_get_method("MobileVRInterface", "get_display_to_lens");
	___mb.mb_get_display_width = gd::api->godot_method_bind_get_method("MobileVRInterface", "get_display_width");
	___mb.mb_get_eye_height = gd::api->godot_method_bind_get_method("MobileVRInterface", "get_eye_height");
	___mb.mb_get_iod = gd::api->godot_method_bind_get_method("MobileVRInterface", "get_iod");
	___mb.mb_get_k1 = gd::api->godot_method_bind_get_method("MobileVRInterface", "get_k1");
	___mb.mb_get_k2 = gd::api->godot_method_bind_get_method("MobileVRInterface", "get_k2");
	___mb.mb_get_oversample = gd::api->godot_method_bind_get_method("MobileVRInterface", "get_oversample");
	___mb.mb_set_display_to_lens = gd::api->godot_method_bind_get_method("MobileVRInterface", "set_display_to_lens");
	___mb.mb_set_display_width = gd::api->godot_method_bind_get_method("MobileVRInterface", "set_display_width");
	___mb.mb_set_eye_height = gd::api->godot_method_bind_get_method("MobileVRInterface", "set_eye_height");
	___mb.mb_set_iod = gd::api->godot_method_bind_get_method("MobileVRInterface", "set_iod");
	___mb.mb_set_k1 = gd::api->godot_method_bind_get_method("MobileVRInterface", "set_k1");
	___mb.mb_set_k2 = gd::api->godot_method_bind_get_method("MobileVRInterface", "set_k2");
	___mb.mb_set_oversample = gd::api->godot_method_bind_get_method("MobileVRInterface", "set_oversample");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MobileVRInterface");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

mobile_vrinterface *mobile_vrinterface::_new()
{
	return (mobile_vrinterface *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MobileVRInterface")());
}
real_t mobile_vrinterface::get_display_to_lens() const {
	return ___godot_icall_float(___mb.mb_get_display_to_lens, (const object *) this);
}

real_t mobile_vrinterface::get_display_width() const {
	return ___godot_icall_float(___mb.mb_get_display_width, (const object *) this);
}

real_t mobile_vrinterface::get_eye_height() const {
	return ___godot_icall_float(___mb.mb_get_eye_height, (const object *) this);
}

real_t mobile_vrinterface::get_iod() const {
	return ___godot_icall_float(___mb.mb_get_iod, (const object *) this);
}

real_t mobile_vrinterface::get_k1() const {
	return ___godot_icall_float(___mb.mb_get_k1, (const object *) this);
}

real_t mobile_vrinterface::get_k2() const {
	return ___godot_icall_float(___mb.mb_get_k2, (const object *) this);
}

real_t mobile_vrinterface::get_oversample() const {
	return ___godot_icall_float(___mb.mb_get_oversample, (const object *) this);
}

void mobile_vrinterface::set_display_to_lens(const real_t display_to_lens) {
	___godot_icall_void_float(___mb.mb_set_display_to_lens, (const object *) this, display_to_lens);
}

void mobile_vrinterface::set_display_width(const real_t display_width) {
	___godot_icall_void_float(___mb.mb_set_display_width, (const object *) this, display_width);
}

void mobile_vrinterface::set_eye_height(const real_t eye_height) {
	___godot_icall_void_float(___mb.mb_set_eye_height, (const object *) this, eye_height);
}

void mobile_vrinterface::set_iod(const real_t iod) {
	___godot_icall_void_float(___mb.mb_set_iod, (const object *) this, iod);
}

void mobile_vrinterface::set_k1(const real_t k) {
	___godot_icall_void_float(___mb.mb_set_k1, (const object *) this, k);
}

void mobile_vrinterface::set_k2(const real_t k) {
	___godot_icall_void_float(___mb.mb_set_k2, (const object *) this, k);
}

void mobile_vrinterface::set_oversample(const real_t oversample) {
	___godot_icall_void_float(___mb.mb_set_oversample, (const object *) this, oversample);
}

}