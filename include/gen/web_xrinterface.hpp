#ifndef GODOT_CPP_WEBXRINTERFACE_HPP
#define GODOT_CPP_WEBXRINTERFACE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "web_xrinterface.hpp"

#include "arvrinterface.hpp"
namespace gd {

class arvrpositional_tracker;

class web_xrinterface : public arvrinterface {
	struct ___method_bindings {
		godot_method_bind *mb_get_bounds_geometry;
		godot_method_bind *mb_get_controller;
		godot_method_bind *mb_get_controller_target_ray_mode;
		godot_method_bind *mb_get_optional_features;
		godot_method_bind *mb_get_reference_space_type;
		godot_method_bind *mb_get_requested_reference_space_types;
		godot_method_bind *mb_get_required_features;
		godot_method_bind *mb_get_session_mode;
		godot_method_bind *mb_get_visibility_state;
		godot_method_bind *mb_get_xr_standard_mapping;
		godot_method_bind *mb_is_session_supported;
		godot_method_bind *mb_set_optional_features;
		godot_method_bind *mb_set_requested_reference_space_types;
		godot_method_bind *mb_set_required_features;
		godot_method_bind *mb_set_session_mode;
		godot_method_bind *mb_set_xr_standard_mapping;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebXRInterface"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebXRInterface"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TargetRayMode {
		TARGET_RAY_MODE_UNKNOWN = 0,
		TARGET_RAY_MODE_GAZE = 1,
		TARGET_RAY_MODE_TRACKED_POINTER = 2,
		TARGET_RAY_MODE_SCREEN = 3,
	};

	// constants

	// methods
	pool_vector3_array get_bounds_geometry() const;
	ref<arvrpositional_tracker> get_controller(const int64_t controller_id) const;
	web_xrinterface::TargetRayMode get_controller_target_ray_mode(const int64_t controller_id) const;
	string get_optional_features() const;
	string get_reference_space_type() const;
	string get_requested_reference_space_types() const;
	string get_required_features() const;
	string get_session_mode() const;
	string get_visibility_state() const;
	bool get_xr_standard_mapping() const;
	void is_session_supported(const string session_mode);
	void set_optional_features(const string optional_features);
	void set_requested_reference_space_types(const string requested_reference_space_types);
	void set_required_features(const string required_features);
	void set_session_mode(const string session_mode);
	void set_xr_standard_mapping(const bool arg0);

};

}

#endif