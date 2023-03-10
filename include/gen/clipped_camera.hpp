#ifndef GODOT_CPP_CLIPPEDCAMERA_HPP
#define GODOT_CPP_CLIPPEDCAMERA_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "clipped_camera.hpp"

#include "camera.hpp"
namespace gd {

class object;

class clipped_camera : public camera {
	struct ___method_bindings {
		godot_method_bind *mb_add_exception;
		godot_method_bind *mb_add_exception_rid;
		godot_method_bind *mb_clear_exceptions;
		godot_method_bind *mb_get_clip_offset;
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_collision_mask_bit;
		godot_method_bind *mb_get_margin;
		godot_method_bind *mb_get_process_mode;
		godot_method_bind *mb_is_clip_to_areas_enabled;
		godot_method_bind *mb_is_clip_to_bodies_enabled;
		godot_method_bind *mb_remove_exception;
		godot_method_bind *mb_remove_exception_rid;
		godot_method_bind *mb_set_clip_to_areas;
		godot_method_bind *mb_set_clip_to_bodies;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_collision_mask_bit;
		godot_method_bind *mb_set_margin;
		godot_method_bind *mb_set_process_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ClippedCamera"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ClippedCamera"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ProcessMode {
		CLIP_PROCESS_PHYSICS = 0,
		CLIP_PROCESS_IDLE = 1,
	};

	// constants


	static clipped_camera *_new();

	// methods
	void add_exception(const object *node_);
	void add_exception_rid(const rid rid_);
	void clear_exceptions();
	real_t get_clip_offset() const;
	int64_t get_collision_mask() const;
	bool get_collision_mask_bit(const int64_t bit) const;
	real_t get_margin() const;
	clipped_camera::ProcessMode get_process_mode() const;
	bool is_clip_to_areas_enabled() const;
	bool is_clip_to_bodies_enabled() const;
	void remove_exception(const object *node_);
	void remove_exception_rid(const rid rid_);
	void set_clip_to_areas(const bool enable);
	void set_clip_to_bodies(const bool enable);
	void set_collision_mask(const int64_t mask);
	void set_collision_mask_bit(const int64_t bit, const bool value);
	void set_margin(const real_t margin);
	void set_process_mode(const int64_t process_mode);

};

}

#endif