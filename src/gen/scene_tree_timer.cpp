#include "scene_tree_timer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


scene_tree_timer::___method_bindings scene_tree_timer::___mb = {};

void *scene_tree_timer::_detail_class_tag = nullptr;

void scene_tree_timer::___init_method_bindings() {
	___mb.mb_get_time_left = gd::api->godot_method_bind_get_method("SceneTreeTimer", "get_time_left");
	___mb.mb_set_time_left = gd::api->godot_method_bind_get_method("SceneTreeTimer", "set_time_left");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SceneTreeTimer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

real_t scene_tree_timer::get_time_left() const {
	return ___godot_icall_float(___mb.mb_get_time_left, (const object *) this);
}

void scene_tree_timer::set_time_left(const real_t time_) {
	___godot_icall_void_float(___mb.mb_set_time_left, (const object *) this, time_);
}

}