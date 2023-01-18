#include "camera_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


camera_texture::___method_bindings camera_texture::___mb = {};

void *camera_texture::_detail_class_tag = nullptr;

void camera_texture::___init_method_bindings() {
	___mb.mb_get_camera_active = gd::api->godot_method_bind_get_method("CameraTexture", "get_camera_active");
	___mb.mb_get_camera_feed_id = gd::api->godot_method_bind_get_method("CameraTexture", "get_camera_feed_id");
	___mb.mb_get_which_feed = gd::api->godot_method_bind_get_method("CameraTexture", "get_which_feed");
	___mb.mb_set_camera_active = gd::api->godot_method_bind_get_method("CameraTexture", "set_camera_active");
	___mb.mb_set_camera_feed_id = gd::api->godot_method_bind_get_method("CameraTexture", "set_camera_feed_id");
	___mb.mb_set_which_feed = gd::api->godot_method_bind_get_method("CameraTexture", "set_which_feed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CameraTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

camera_texture *camera_texture::_new()
{
	return (camera_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CameraTexture")());
}
bool camera_texture::get_camera_active() const {
	return ___godot_icall_bool(___mb.mb_get_camera_active, (const object *) this);
}

int64_t camera_texture::get_camera_feed_id() const {
	return ___godot_icall_int(___mb.mb_get_camera_feed_id, (const object *) this);
}

camera_server::FeedImage camera_texture::get_which_feed() const {
	return (camera_server::FeedImage) ___godot_icall_int(___mb.mb_get_which_feed, (const object *) this);
}

void camera_texture::set_camera_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_camera_active, (const object *) this, active);
}

void camera_texture::set_camera_feed_id(const int64_t feed_id) {
	___godot_icall_void_int(___mb.mb_set_camera_feed_id, (const object *) this, feed_id);
}

void camera_texture::set_which_feed(const int64_t which_feed) {
	___godot_icall_void_int(___mb.mb_set_which_feed, (const object *) this, which_feed);
}

}