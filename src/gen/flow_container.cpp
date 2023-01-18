#include "flow_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


flow_container::___method_bindings flow_container::___mb = {};

void *flow_container::_detail_class_tag = nullptr;

void flow_container::___init_method_bindings() {
	___mb.mb_get_line_count = gd::api->godot_method_bind_get_method("FlowContainer", "get_line_count");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "FlowContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

int64_t flow_container::get_line_count() const {
	return ___godot_icall_int(___mb.mb_get_line_count, (const object *) this);
}

}