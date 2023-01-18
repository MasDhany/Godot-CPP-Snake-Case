#ifndef GODOT_CPP_CAMERATEXTURE_HPP
#define GODOT_CPP_CAMERATEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "camera_server.hpp"

#include "texture.hpp"
namespace gd {


class camera_texture : public texture {
	struct ___method_bindings {
		godot_method_bind *mb_get_camera_active;
		godot_method_bind *mb_get_camera_feed_id;
		godot_method_bind *mb_get_which_feed;
		godot_method_bind *mb_set_camera_active;
		godot_method_bind *mb_set_camera_feed_id;
		godot_method_bind *mb_set_which_feed;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CameraTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CameraTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static camera_texture *_new();

	// methods
	bool get_camera_active() const;
	int64_t get_camera_feed_id() const;
	camera_server::FeedImage get_which_feed() const;
	void set_camera_active(const bool active);
	void set_camera_feed_id(const int64_t feed_id);
	void set_which_feed(const int64_t which_feed);

};

}

#endif