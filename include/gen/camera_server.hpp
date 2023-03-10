#ifndef GODOT_CPP_CAMERASERVER_HPP
#define GODOT_CPP_CAMERASERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class camera_feed;

class camera_server : public object {
	static camera_server *_singleton;

	camera_server();

	struct ___method_bindings {
		godot_method_bind *mb_add_feed;
		godot_method_bind *mb_feeds;
		godot_method_bind *mb_get_feed;
		godot_method_bind *mb_get_feed_count;
		godot_method_bind *mb_remove_feed;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline camera_server *get_singleton()
	{
		if (!camera_server::_singleton) {
			camera_server::_singleton = new camera_server;
		}
		return camera_server::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "CameraServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CameraServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum FeedImage {
		FEED_RGBA_IMAGE = 0,
		FEED_YCBCR_IMAGE = 0,
		FEED_Y_IMAGE = 0,
		FEED_CBCR_IMAGE = 1,
	};

	// constants

	// methods
	void add_feed(const ref<camera_feed> feed);
	array feeds();
	ref<camera_feed> get_feed(const int64_t index);
	int64_t get_feed_count();
	void remove_feed(const ref<camera_feed> feed);

};

}

#endif