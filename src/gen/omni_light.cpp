#include "omni_light.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


omni_light::___method_bindings omni_light::___mb = {};

void *omni_light::_detail_class_tag = nullptr;

void omni_light::___init_method_bindings() {
	___mb.mb_get_shadow_detail = gd::api->godot_method_bind_get_method("OmniLight", "get_shadow_detail");
	___mb.mb_get_shadow_mode = gd::api->godot_method_bind_get_method("OmniLight", "get_shadow_mode");
	___mb.mb_set_shadow_detail = gd::api->godot_method_bind_get_method("OmniLight", "set_shadow_detail");
	___mb.mb_set_shadow_mode = gd::api->godot_method_bind_get_method("OmniLight", "set_shadow_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "OmniLight");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

omni_light *omni_light::_new()
{
	return (omni_light *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"OmniLight")());
}
omni_light::ShadowDetail omni_light::get_shadow_detail() const {
	return (omni_light::ShadowDetail) ___godot_icall_int(___mb.mb_get_shadow_detail, (const object *) this);
}

omni_light::ShadowMode omni_light::get_shadow_mode() const {
	return (omni_light::ShadowMode) ___godot_icall_int(___mb.mb_get_shadow_mode, (const object *) this);
}

void omni_light::set_shadow_detail(const int64_t detail) {
	___godot_icall_void_int(___mb.mb_set_shadow_detail, (const object *) this, detail);
}

void omni_light::set_shadow_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_shadow_mode, (const object *) this, mode);
}

}