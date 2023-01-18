#include "shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "array_mesh.hpp"


namespace gd {


shape::___method_bindings shape::___mb = {};

void *shape::_detail_class_tag = nullptr;

void shape::___init_method_bindings() {
	___mb.mb_get_debug_mesh = gd::api->godot_method_bind_get_method("Shape", "get_debug_mesh");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("Shape", "get_margin");
	___mb.mb_set_margin = gd::api->godot_method_bind_get_method("Shape", "set_margin");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Shape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<array_mesh> shape::get_debug_mesh() {
	return ref<array_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_debug_mesh, (const object *) this));
}

real_t shape::get_margin() const {
	return ___godot_icall_float(___mb.mb_get_margin, (const object *) this);
}

void shape::set_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_margin, (const object *) this, margin);
}

}