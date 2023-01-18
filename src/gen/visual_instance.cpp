#include "visual_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_instance::___method_bindings visual_instance::___mb = {};

void *visual_instance::_detail_class_tag = nullptr;

void visual_instance::___init_method_bindings() {
	___mb.mb__get_visual_instance_rid = gd::api->godot_method_bind_get_method("VisualInstance", "_get_visual_instance_rid");
	___mb.mb_get_aabb = gd::api->godot_method_bind_get_method("VisualInstance", "get_aabb");
	___mb.mb_get_base = gd::api->godot_method_bind_get_method("VisualInstance", "get_base");
	___mb.mb_get_instance = gd::api->godot_method_bind_get_method("VisualInstance", "get_instance");
	___mb.mb_get_layer_mask = gd::api->godot_method_bind_get_method("VisualInstance", "get_layer_mask");
	___mb.mb_get_layer_mask_bit = gd::api->godot_method_bind_get_method("VisualInstance", "get_layer_mask_bit");
	___mb.mb_get_sorting_offset = gd::api->godot_method_bind_get_method("VisualInstance", "get_sorting_offset");
	___mb.mb_get_transformed_aabb = gd::api->godot_method_bind_get_method("VisualInstance", "get_transformed_aabb");
	___mb.mb_is_sorting_use_aabb_center = gd::api->godot_method_bind_get_method("VisualInstance", "is_sorting_use_aabb_center");
	___mb.mb_set_base = gd::api->godot_method_bind_get_method("VisualInstance", "set_base");
	___mb.mb_set_layer_mask = gd::api->godot_method_bind_get_method("VisualInstance", "set_layer_mask");
	___mb.mb_set_layer_mask_bit = gd::api->godot_method_bind_get_method("VisualInstance", "set_layer_mask_bit");
	___mb.mb_set_sorting_offset = gd::api->godot_method_bind_get_method("VisualInstance", "set_sorting_offset");
	___mb.mb_set_sorting_use_aabb_center = gd::api->godot_method_bind_get_method("VisualInstance", "set_sorting_use_aabb_center");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

rid visual_instance::_get_visual_instance_rid() const {
	return ___godot_icall_RID(___mb.mb__get_visual_instance_rid, (const object *) this);
}

aabb visual_instance::get_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_aabb, (const object *) this);
}

rid visual_instance::get_base() const {
	return ___godot_icall_RID(___mb.mb_get_base, (const object *) this);
}

rid visual_instance::get_instance() const {
	return ___godot_icall_RID(___mb.mb_get_instance, (const object *) this);
}

int64_t visual_instance::get_layer_mask() const {
	return ___godot_icall_int(___mb.mb_get_layer_mask, (const object *) this);
}

bool visual_instance::get_layer_mask_bit(const int64_t layer) const {
	return ___godot_icall_bool_int(___mb.mb_get_layer_mask_bit, (const object *) this, layer);
}

real_t visual_instance::get_sorting_offset() {
	return ___godot_icall_float(___mb.mb_get_sorting_offset, (const object *) this);
}

aabb visual_instance::get_transformed_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_transformed_aabb, (const object *) this);
}

bool visual_instance::is_sorting_use_aabb_center() {
	return ___godot_icall_bool(___mb.mb_is_sorting_use_aabb_center, (const object *) this);
}

void visual_instance::set_base(const rid base) {
	___godot_icall_void_RID(___mb.mb_set_base, (const object *) this, base);
}

void visual_instance::set_layer_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_layer_mask, (const object *) this, mask);
}

void visual_instance::set_layer_mask_bit(const int64_t layer, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_layer_mask_bit, (const object *) this, layer, enabled);
}

void visual_instance::set_sorting_offset(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_sorting_offset, (const object *) this, offset);
}

void visual_instance::set_sorting_use_aabb_center(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_sorting_use_aabb_center, (const object *) this, enabled);
}

}