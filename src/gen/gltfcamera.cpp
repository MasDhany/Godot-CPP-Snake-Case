#include "gltfcamera.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gltfcamera::___method_bindings gltfcamera::___mb = {};

void *gltfcamera::_detail_class_tag = nullptr;

void gltfcamera::___init_method_bindings() {
	___mb.mb_get_fov_size = gd::api->godot_method_bind_get_method("GLTFCamera", "get_fov_size");
	___mb.mb_get_perspective = gd::api->godot_method_bind_get_method("GLTFCamera", "get_perspective");
	___mb.mb_get_zfar = gd::api->godot_method_bind_get_method("GLTFCamera", "get_zfar");
	___mb.mb_get_znear = gd::api->godot_method_bind_get_method("GLTFCamera", "get_znear");
	___mb.mb_set_fov_size = gd::api->godot_method_bind_get_method("GLTFCamera", "set_fov_size");
	___mb.mb_set_perspective = gd::api->godot_method_bind_get_method("GLTFCamera", "set_perspective");
	___mb.mb_set_zfar = gd::api->godot_method_bind_get_method("GLTFCamera", "set_zfar");
	___mb.mb_set_znear = gd::api->godot_method_bind_get_method("GLTFCamera", "set_znear");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFCamera");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfcamera *gltfcamera::_new()
{
	return (gltfcamera *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFCamera")());
}
real_t gltfcamera::get_fov_size() const {
	return ___godot_icall_float(___mb.mb_get_fov_size, (const object *) this);
}

bool gltfcamera::get_perspective() const {
	return ___godot_icall_bool(___mb.mb_get_perspective, (const object *) this);
}

real_t gltfcamera::get_zfar() const {
	return ___godot_icall_float(___mb.mb_get_zfar, (const object *) this);
}

real_t gltfcamera::get_znear() const {
	return ___godot_icall_float(___mb.mb_get_znear, (const object *) this);
}

void gltfcamera::set_fov_size(const real_t fov_size) {
	___godot_icall_void_float(___mb.mb_set_fov_size, (const object *) this, fov_size);
}

void gltfcamera::set_perspective(const bool perspective) {
	___godot_icall_void_bool(___mb.mb_set_perspective, (const object *) this, perspective);
}

void gltfcamera::set_zfar(const real_t zfar) {
	___godot_icall_void_float(___mb.mb_set_zfar, (const object *) this, zfar);
}

void gltfcamera::set_znear(const real_t znear) {
	___godot_icall_void_float(___mb.mb_set_znear, (const object *) this, znear);
}

}