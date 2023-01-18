#include "physics_shape_query_parameters.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


physics_shape_query_parameters::___method_bindings physics_shape_query_parameters::___mb = {};

void *physics_shape_query_parameters::_detail_class_tag = nullptr;

void physics_shape_query_parameters::___init_method_bindings() {
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "get_collision_mask");
	___mb.mb_get_exclude = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "get_exclude");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "get_margin");
	___mb.mb_get_shape_rid = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "get_shape_rid");
	___mb.mb_get_transform = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "get_transform");
	___mb.mb_is_collide_with_areas_enabled = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "is_collide_with_areas_enabled");
	___mb.mb_is_collide_with_bodies_enabled = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "is_collide_with_bodies_enabled");
	___mb.mb_set_collide_with_areas = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_collide_with_areas");
	___mb.mb_set_collide_with_bodies = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_collide_with_bodies");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_collision_mask");
	___mb.mb_set_exclude = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_exclude");
	___mb.mb_set_margin = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_margin");
	___mb.mb_set_shape = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_shape");
	___mb.mb_set_shape_rid = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_shape_rid");
	___mb.mb_set_transform = gd::api->godot_method_bind_get_method("PhysicsShapeQueryParameters", "set_transform");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicsShapeQueryParameters");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

physics_shape_query_parameters *physics_shape_query_parameters::_new()
{
	return (physics_shape_query_parameters *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PhysicsShapeQueryParameters")());
}
int64_t physics_shape_query_parameters::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

array physics_shape_query_parameters::get_exclude() const {
	return ___godot_icall_Array(___mb.mb_get_exclude, (const object *) this);
}

real_t physics_shape_query_parameters::get_margin() const {
	return ___godot_icall_float(___mb.mb_get_margin, (const object *) this);
}

rid physics_shape_query_parameters::get_shape_rid() const {
	return ___godot_icall_RID(___mb.mb_get_shape_rid, (const object *) this);
}

transform physics_shape_query_parameters::get_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_transform, (const object *) this);
}

bool physics_shape_query_parameters::is_collide_with_areas_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_collide_with_areas_enabled, (const object *) this);
}

bool physics_shape_query_parameters::is_collide_with_bodies_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_collide_with_bodies_enabled, (const object *) this);
}

void physics_shape_query_parameters::set_collide_with_areas(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_collide_with_areas, (const object *) this, enable);
}

void physics_shape_query_parameters::set_collide_with_bodies(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_collide_with_bodies, (const object *) this, enable);
}

void physics_shape_query_parameters::set_collision_mask(const int64_t collision_mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, collision_mask);
}

void physics_shape_query_parameters::set_exclude(const array exclude) {
	___godot_icall_void_Array(___mb.mb_set_exclude, (const object *) this, exclude);
}

void physics_shape_query_parameters::set_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_margin, (const object *) this, margin);
}

void physics_shape_query_parameters::set_shape(const ref<resource> shape_) {
	___godot_icall_void_Object(___mb.mb_set_shape, (const object *) this, shape_.ptr());
}

void physics_shape_query_parameters::set_shape_rid(const rid shape_) {
	___godot_icall_void_RID(___mb.mb_set_shape_rid, (const object *) this, shape_);
}

void physics_shape_query_parameters::set_transform(const transform transform_) {
	___godot_icall_void_Transform(___mb.mb_set_transform, (const object *) this, transform_);
}

}