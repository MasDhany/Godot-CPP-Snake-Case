#include "sky.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


sky::___method_bindings sky::___mb = {};

void *sky::_detail_class_tag = nullptr;

void sky::___init_method_bindings() {
	___mb.mb_get_radiance_size = gd::api->godot_method_bind_get_method("Sky", "get_radiance_size");
	___mb.mb_set_radiance_size = gd::api->godot_method_bind_get_method("Sky", "set_radiance_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Sky");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

sky::RadianceSize sky::get_radiance_size() const {
	return (sky::RadianceSize) ___godot_icall_int(___mb.mb_get_radiance_size, (const object *) this);
}

void sky::set_radiance_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_radiance_size, (const object *) this, size);
}

}