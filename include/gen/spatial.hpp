#ifndef GODOT_CPP_SPATIAL_HPP
#define GODOT_CPP_SPATIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class spatial;
class spatial_gizmo;
class world;

class spatial : public node {
	struct ___method_bindings {
		godot_method_bind *mb__update_gizmo;
		godot_method_bind *mb_force_update_transform;
		godot_method_bind *mb_get_gizmo;
		godot_method_bind *mb_get_global_rotation;
		godot_method_bind *mb_get_global_transform;
		godot_method_bind *mb_get_global_transform_interpolated;
		godot_method_bind *mb_get_global_translation;
		godot_method_bind *mb_get_parent_spatial;
		godot_method_bind *mb_get_rotation;
		godot_method_bind *mb_get_rotation_degrees;
		godot_method_bind *mb_get_scale;
		godot_method_bind *mb_get_transform;
		godot_method_bind *mb_get_translation;
		godot_method_bind *mb_get_world;
		godot_method_bind *mb_global_rotate;
		godot_method_bind *mb_global_scale;
		godot_method_bind *mb_global_translate;
		godot_method_bind *mb_hide;
		godot_method_bind *mb_is_local_transform_notification_enabled;
		godot_method_bind *mb_is_scale_disabled;
		godot_method_bind *mb_is_set_as_toplevel;
		godot_method_bind *mb_is_transform_notification_enabled;
		godot_method_bind *mb_is_visible;
		godot_method_bind *mb_is_visible_in_tree;
		godot_method_bind *mb_look_at;
		godot_method_bind *mb_look_at_from_position;
		godot_method_bind *mb_orthonormalize;
		godot_method_bind *mb_rotate;
		godot_method_bind *mb_rotate_object_local;
		godot_method_bind *mb_rotate_x;
		godot_method_bind *mb_rotate_y;
		godot_method_bind *mb_rotate_z;
		godot_method_bind *mb_scale_object_local;
		godot_method_bind *mb_set_as_toplevel;
		godot_method_bind *mb_set_disable_scale;
		godot_method_bind *mb_set_gizmo;
		godot_method_bind *mb_set_global_rotation;
		godot_method_bind *mb_set_global_transform;
		godot_method_bind *mb_set_global_translation;
		godot_method_bind *mb_set_identity;
		godot_method_bind *mb_set_ignore_transform_notification;
		godot_method_bind *mb_set_notify_local_transform;
		godot_method_bind *mb_set_notify_transform;
		godot_method_bind *mb_set_rotation;
		godot_method_bind *mb_set_rotation_degrees;
		godot_method_bind *mb_set_scale;
		godot_method_bind *mb_set_transform;
		godot_method_bind *mb_set_translation;
		godot_method_bind *mb_set_visible;
		godot_method_bind *mb_show;
		godot_method_bind *mb_to_global;
		godot_method_bind *mb_to_local;
		godot_method_bind *mb_translate;
		godot_method_bind *mb_translate_object_local;
		godot_method_bind *mb_update_gizmo;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Spatial"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Spatial"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int NOTIFICATION_ENTER_GAMEPLAY = 45;
	const static int NOTIFICATION_ENTER_WORLD = 41;
	const static int NOTIFICATION_EXIT_GAMEPLAY = 46;
	const static int NOTIFICATION_EXIT_WORLD = 42;
	const static int NOTIFICATION_TRANSFORM_CHANGED = 2000;
	const static int NOTIFICATION_VISIBILITY_CHANGED = 43;


	static spatial *_new();

	// methods
	void _update_gizmo();
	void force_update_transform();
	ref<spatial_gizmo> get_gizmo() const;
	vector3 get_global_rotation() const;
	transform get_global_transform() const;
	transform get_global_transform_interpolated();
	vector3 get_global_translation() const;
	spatial *get_parent_spatial() const;
	vector3 get_rotation() const;
	vector3 get_rotation_degrees() const;
	vector3 get_scale() const;
	transform get_transform() const;
	vector3 get_translation() const;
	ref<world> get_world() const;
	void global_rotate(const vector3 axis, const real_t angle);
	void global_scale(const vector3 scale);
	void global_translate(const vector3 offset);
	void hide();
	bool is_local_transform_notification_enabled() const;
	bool is_scale_disabled() const;
	bool is_set_as_toplevel() const;
	bool is_transform_notification_enabled() const;
	bool is_visible() const;
	bool is_visible_in_tree() const;
	void look_at(const vector3 target, const vector3 up);
	void look_at_from_position(const vector3 position, const vector3 target, const vector3 up);
	void orthonormalize();
	void rotate(const vector3 axis, const real_t angle);
	void rotate_object_local(const vector3 axis, const real_t angle);
	void rotate_x(const real_t angle);
	void rotate_y(const real_t angle);
	void rotate_z(const real_t angle);
	void scale_object_local(const vector3 scale);
	void set_as_toplevel(const bool enable);
	void set_disable_scale(const bool disable);
	void set_gizmo(const ref<spatial_gizmo> gizmo);
	void set_global_rotation(const vector3 radians);
	void set_global_transform(const transform global);
	void set_global_translation(const vector3 translation_);
	void set_identity();
	void set_ignore_transform_notification(const bool enabled);
	void set_notify_local_transform(const bool enable);
	void set_notify_transform(const bool enable);
	void set_rotation(const vector3 euler);
	void set_rotation_degrees(const vector3 euler_degrees);
	void set_scale(const vector3 scale);
	void set_transform(const transform local);
	void set_translation(const vector3 translation_);
	void set_visible(const bool visible);
	void show();
	vector3 to_global(const vector3 local_point) const;
	vector3 to_local(const vector3 global_point) const;
	void translate(const vector3 offset);
	void translate_object_local(const vector3 offset);
	void update_gizmo();

};

}

#endif