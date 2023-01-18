#include "directional_light.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


directional_light::___method_bindings directional_light::___mb = {};

void *directional_light::_detail_class_tag = nullptr;

void directional_light::___init_method_bindings() {
	___mb.mb_get_shadow_depth_range = gd::api->godot_method_bind_get_method("DirectionalLight", "get_shadow_depth_range");
	___mb.mb_get_shadow_mode = gd::api->godot_method_bind_get_method("DirectionalLight", "get_shadow_mode");
	___mb.mb_is_blend_splits_enabled = gd::api->godot_method_bind_get_method("DirectionalLight", "is_blend_splits_enabled");
	___mb.mb_set_blend_splits = gd::api->godot_method_bind_get_method("DirectionalLight", "set_blend_splits");
	___mb.mb_set_shadow_depth_range = gd::api->godot_method_bind_get_method("DirectionalLight", "set_shadow_depth_range");
	___mb.mb_set_shadow_mode = gd::api->godot_method_bind_get_method("DirectionalLight", "set_shadow_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "DirectionalLight");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

directional_light *directional_light::_new()
{
	return (directional_light *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"DirectionalLight")());
}
directional_light::ShadowDepthRange directional_light::get_shadow_depth_range() const {
	return (directional_light::ShadowDepthRange) ___godot_icall_int(___mb.mb_get_shadow_depth_range, (const object *) this);
}

directional_light::ShadowMode directional_light::get_shadow_mode() const {
	return (directional_light::ShadowMode) ___godot_icall_int(___mb.mb_get_shadow_mode, (const object *) this);
}

bool directional_light::is_blend_splits_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_blend_splits_enabled, (const object *) this);
}

void directional_light::set_blend_splits(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_blend_splits, (const object *) this, enabled);
}

void directional_light::set_shadow_depth_range(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_shadow_depth_range, (const object *) this, mode);
}

void directional_light::set_shadow_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_shadow_mode, (const object *) this, mode);
}

}