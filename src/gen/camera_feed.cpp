#include "camera_feed.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


camera_feed::___method_bindings camera_feed::___mb = {};

void *camera_feed::_detail_class_tag = nullptr;

void camera_feed::___init_method_bindings() {
	___mb.mb__allocate_texture = gd::api->godot_method_bind_get_method("CameraFeed", "_allocate_texture");
	___mb.mb__set_RGB_img = gd::api->godot_method_bind_get_method("CameraFeed", "_set_RGB_img");
	___mb.mb__set_YCbCr_img = gd::api->godot_method_bind_get_method("CameraFeed", "_set_YCbCr_img");
	___mb.mb__set_YCbCr_imgs = gd::api->godot_method_bind_get_method("CameraFeed", "_set_YCbCr_imgs");
	___mb.mb__set_name = gd::api->godot_method_bind_get_method("CameraFeed", "_set_name");
	___mb.mb__set_position = gd::api->godot_method_bind_get_method("CameraFeed", "_set_position");
	___mb.mb_get_id = gd::api->godot_method_bind_get_method("CameraFeed", "get_id");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("CameraFeed", "get_name");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("CameraFeed", "get_position");
	___mb.mb_get_transform = gd::api->godot_method_bind_get_method("CameraFeed", "get_transform");
	___mb.mb_is_active = gd::api->godot_method_bind_get_method("CameraFeed", "is_active");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("CameraFeed", "set_active");
	___mb.mb_set_transform = gd::api->godot_method_bind_get_method("CameraFeed", "set_transform");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CameraFeed");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

camera_feed *camera_feed::_new()
{
	return (camera_feed *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CameraFeed")());
}
void camera_feed::_allocate_texture(const int64_t width, const int64_t height, const int64_t format, const int64_t texture_type, const int64_t data_type) {
	___godot_icall_void_int_int_int_int_int(___mb.mb__allocate_texture, (const object *) this, width, height, format, texture_type, data_type);
}

void camera_feed::_set_RGB_img(const ref<image> rgb_img) {
	___godot_icall_void_Object(___mb.mb__set_RGB_img, (const object *) this, rgb_img.ptr());
}

void camera_feed::_set_YCbCr_img(const ref<image> ycbcr_img) {
	___godot_icall_void_Object(___mb.mb__set_YCbCr_img, (const object *) this, ycbcr_img.ptr());
}

void camera_feed::_set_YCbCr_imgs(const ref<image> y_img, const ref<image> cbcr_img) {
	___godot_icall_void_Object_Object(___mb.mb__set_YCbCr_imgs, (const object *) this, y_img.ptr(), cbcr_img.ptr());
}

void camera_feed::_set_name(const string name) {
	___godot_icall_void_String(___mb.mb__set_name, (const object *) this, name);
}

void camera_feed::_set_position(const int64_t position) {
	___godot_icall_void_int(___mb.mb__set_position, (const object *) this, position);
}

int64_t camera_feed::get_id() const {
	return ___godot_icall_int(___mb.mb_get_id, (const object *) this);
}

string camera_feed::get_name() const {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

camera_feed::FeedPosition camera_feed::get_position() const {
	return (camera_feed::FeedPosition) ___godot_icall_int(___mb.mb_get_position, (const object *) this);
}

transform2d camera_feed::get_transform() const {
	return ___godot_icall_Transform2D(___mb.mb_get_transform, (const object *) this);
}

bool camera_feed::is_active() const {
	return ___godot_icall_bool(___mb.mb_is_active, (const object *) this);
}

void camera_feed::set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, active);
}

void camera_feed::set_transform(const transform2d transform_) {
	___godot_icall_void_Transform2D(___mb.mb_set_transform, (const object *) this, transform_);
}

}