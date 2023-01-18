#include "visibility_enabler2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


visibility_enabler2d::___method_bindings visibility_enabler2d::___mb = {};

void *visibility_enabler2d::_detail_class_tag = nullptr;

void visibility_enabler2d::___init_method_bindings() {
	___mb.mb__node_removed = gd::api->godot_method_bind_get_method("VisibilityEnabler2D", "_node_removed");
	___mb.mb_is_enabler_enabled = gd::api->godot_method_bind_get_method("VisibilityEnabler2D", "is_enabler_enabled");
	___mb.mb_set_enabler = gd::api->godot_method_bind_get_method("VisibilityEnabler2D", "set_enabler");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisibilityEnabler2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visibility_enabler2d *visibility_enabler2d::_new()
{
	return (visibility_enabler2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisibilityEnabler2D")());
}
void visibility_enabler2d::_node_removed(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__node_removed, (const object *) this, arg0);
}

bool visibility_enabler2d::is_enabler_enabled(const int64_t enabler) const {
	return ___godot_icall_bool_int(___mb.mb_is_enabler_enabled, (const object *) this, enabler);
}

void visibility_enabler2d::set_enabler(const int64_t enabler, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_enabler, (const object *) this, enabler, enabled);
}

}