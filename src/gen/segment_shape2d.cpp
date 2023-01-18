#include "segment_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


segment_shape2d::___method_bindings segment_shape2d::___mb = {};

void *segment_shape2d::_detail_class_tag = nullptr;

void segment_shape2d::___init_method_bindings() {
	___mb.mb_get_a = gd::api->godot_method_bind_get_method("SegmentShape2D", "get_a");
	___mb.mb_get_b = gd::api->godot_method_bind_get_method("SegmentShape2D", "get_b");
	___mb.mb_set_a = gd::api->godot_method_bind_get_method("SegmentShape2D", "set_a");
	___mb.mb_set_b = gd::api->godot_method_bind_get_method("SegmentShape2D", "set_b");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SegmentShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

segment_shape2d *segment_shape2d::_new()
{
	return (segment_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SegmentShape2D")());
}
vector2 segment_shape2d::get_a() const {
	return ___godot_icall_Vector2(___mb.mb_get_a, (const object *) this);
}

vector2 segment_shape2d::get_b() const {
	return ___godot_icall_Vector2(___mb.mb_get_b, (const object *) this);
}

void segment_shape2d::set_a(const vector2 a) {
	___godot_icall_void_Vector2(___mb.mb_set_a, (const object *) this, a);
}

void segment_shape2d::set_b(const vector2 b) {
	___godot_icall_void_Vector2(___mb.mb_set_b, (const object *) this, b);
}

}