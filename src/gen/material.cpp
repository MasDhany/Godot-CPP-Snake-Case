#include "material.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


material::___method_bindings material::___mb = {};

void *material::_detail_class_tag = nullptr;

void material::___init_method_bindings() {
	___mb.mb_get_next_pass = gd::api->godot_method_bind_get_method("Material", "get_next_pass");
	___mb.mb_get_render_priority = gd::api->godot_method_bind_get_method("Material", "get_render_priority");
	___mb.mb_set_next_pass = gd::api->godot_method_bind_get_method("Material", "set_next_pass");
	___mb.mb_set_render_priority = gd::api->godot_method_bind_get_method("Material", "set_render_priority");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Material");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<material> material::get_next_pass() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_next_pass, (const object *) this));
}

int64_t material::get_render_priority() const {
	return ___godot_icall_int(___mb.mb_get_render_priority, (const object *) this);
}

void material::set_next_pass(const ref<material> next_pass) {
	___godot_icall_void_Object(___mb.mb_set_next_pass, (const object *) this, next_pass.ptr());
}

void material::set_render_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_render_priority, (const object *) this, priority);
}

}