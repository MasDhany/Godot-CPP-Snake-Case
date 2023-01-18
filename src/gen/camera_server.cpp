#include "camera_server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "camera_feed.hpp"


namespace gd {


camera_server *camera_server::_singleton = NULL;


camera_server::camera_server() {
	_owner = gd::api->godot_global_get_singleton((char *) "CameraServer");
}


camera_server::___method_bindings camera_server::___mb = {};

void *camera_server::_detail_class_tag = nullptr;

void camera_server::___init_method_bindings() {
	___mb.mb_add_feed = gd::api->godot_method_bind_get_method("CameraServer", "add_feed");
	___mb.mb_feeds = gd::api->godot_method_bind_get_method("CameraServer", "feeds");
	___mb.mb_get_feed = gd::api->godot_method_bind_get_method("CameraServer", "get_feed");
	___mb.mb_get_feed_count = gd::api->godot_method_bind_get_method("CameraServer", "get_feed_count");
	___mb.mb_remove_feed = gd::api->godot_method_bind_get_method("CameraServer", "remove_feed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CameraServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void camera_server::add_feed(const ref<camera_feed> feed) {
	___godot_icall_void_Object(___mb.mb_add_feed, (const object *) this, feed.ptr());
}

array camera_server::feeds() {
	return ___godot_icall_Array(___mb.mb_feeds, (const object *) this);
}

ref<camera_feed> camera_server::get_feed(const int64_t index) {
	return ref<camera_feed>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_feed, (const object *) this, index));
}

int64_t camera_server::get_feed_count() {
	return ___godot_icall_int(___mb.mb_get_feed_count, (const object *) this);
}

void camera_server::remove_feed(const ref<camera_feed> feed) {
	___godot_icall_void_Object(___mb.mb_remove_feed, (const object *) this, feed.ptr());
}

}