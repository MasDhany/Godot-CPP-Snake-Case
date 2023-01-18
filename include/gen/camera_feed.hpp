#ifndef GODOT_CPP_CAMERAFEED_HPP
#define GODOT_CPP_CAMERAFEED_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "camera_feed.hpp"

#include "reference.hpp"
namespace gd {

class image;

class camera_feed : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__allocate_texture;
		godot_method_bind *mb__set_RGB_img;
		godot_method_bind *mb__set_YCbCr_img;
		godot_method_bind *mb__set_YCbCr_imgs;
		godot_method_bind *mb__set_name;
		godot_method_bind *mb__set_position;
		godot_method_bind *mb_get_id;
		godot_method_bind *mb_get_name;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_get_transform;
		godot_method_bind *mb_is_active;
		godot_method_bind *mb_set_active;
		godot_method_bind *mb_set_transform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CameraFeed"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CameraFeed"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum FeedDataType {
		FEED_NOIMAGE = 0,
		FEED_RGB = 1,
		FEED_YCBCR = 2,
		FEED_YCBCR_SEP = 3,
	};
	enum FeedPosition {
		FEED_UNSPECIFIED = 0,
		FEED_FRONT = 1,
		FEED_BACK = 2,
	};

	// constants


	static camera_feed *_new();

	// methods
	void _allocate_texture(const int64_t width, const int64_t height, const int64_t format, const int64_t texture_type, const int64_t data_type);
	void _set_RGB_img(const ref<image> rgb_img);
	void _set_YCbCr_img(const ref<image> ycbcr_img);
	void _set_YCbCr_imgs(const ref<image> y_img, const ref<image> cbcr_img);
	void _set_name(const string name);
	void _set_position(const int64_t position);
	int64_t get_id() const;
	string get_name() const;
	camera_feed::FeedPosition get_position() const;
	transform2d get_transform() const;
	bool is_active() const;
	void set_active(const bool active);
	void set_transform(const transform2d transform_);

};

}

#endif