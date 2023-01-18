#ifndef GODOT_CPP_INTERPOLATEDCAMERA_HPP
#define GODOT_CPP_INTERPOLATEDCAMERA_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "interpolated_camera.hpp"

#include "camera.hpp"
namespace gd {

class object;

class interpolated_camera : public camera {
	struct ___method_bindings {
		godot_method_bind *mb_get_process_mode;
		godot_method_bind *mb_get_speed;
		godot_method_bind *mb_get_target_path;
		godot_method_bind *mb_is_interpolation_enabled;
		godot_method_bind *mb_set_interpolation_enabled;
		godot_method_bind *mb_set_process_mode;
		godot_method_bind *mb_set_speed;
		godot_method_bind *mb_set_target;
		godot_method_bind *mb_set_target_path;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InterpolatedCamera"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InterpolatedCamera"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum InterpolatedCameraProcessMode {
		INTERPOLATED_CAMERA_PROCESS_PHYSICS = 0,
		INTERPOLATED_CAMERA_PROCESS_IDLE = 1,
	};

	// constants


	static interpolated_camera *_new();

	// methods
	interpolated_camera::InterpolatedCameraProcessMode get_process_mode() const;
	real_t get_speed() const;
	node_path get_target_path() const;
	bool is_interpolation_enabled() const;
	void set_interpolation_enabled(const bool target_path);
	void set_process_mode(const int64_t mode);
	void set_speed(const real_t speed);
	void set_target(const object *target);
	void set_target_path(const node_path target_path);

};

}

#endif