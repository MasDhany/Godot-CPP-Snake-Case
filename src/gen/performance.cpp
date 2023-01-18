#include "performance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


performance *performance::_singleton = NULL;


performance::performance() {
	_owner = gd::api->godot_global_get_singleton((char *) "Performance");
}


performance::___method_bindings performance::___mb = {};

void *performance::_detail_class_tag = nullptr;

void performance::___init_method_bindings() {
	___mb.mb_get_monitor = gd::api->godot_method_bind_get_method("Performance", "get_monitor");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Performance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

real_t performance::get_monitor(const int64_t monitor) const {
	return ___godot_icall_float_int(___mb.mb_get_monitor, (const object *) this, monitor);
}

}