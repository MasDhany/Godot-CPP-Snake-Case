#include "style_box.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "canvas_item.hpp"


namespace gd {


style_box::___method_bindings style_box::___mb = {};

void *style_box::_detail_class_tag = nullptr;

void style_box::___init_method_bindings() {
	___mb.mb_draw = gd::api->godot_method_bind_get_method("StyleBox", "draw");
	___mb.mb_get_center_size = gd::api->godot_method_bind_get_method("StyleBox", "get_center_size");
	___mb.mb_get_current_item_drawn = gd::api->godot_method_bind_get_method("StyleBox", "get_current_item_drawn");
	___mb.mb_get_default_margin = gd::api->godot_method_bind_get_method("StyleBox", "get_default_margin");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("StyleBox", "get_margin");
	___mb.mb_get_minimum_size = gd::api->godot_method_bind_get_method("StyleBox", "get_minimum_size");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("StyleBox", "get_offset");
	___mb.mb_set_default_margin = gd::api->godot_method_bind_get_method("StyleBox", "set_default_margin");
	___mb.mb_test_mask = gd::api->godot_method_bind_get_method("StyleBox", "test_mask");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StyleBox");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void style_box::draw(const rid canvas_item_, const rect2 rect) const {
	___godot_icall_void_RID_Rect2(___mb.mb_draw, (const object *) this, canvas_item_, rect);
}

vector2 style_box::get_center_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_center_size, (const object *) this);
}

canvas_item *style_box::get_current_item_drawn() const {
	return (canvas_item *) ___godot_icall_Object(___mb.mb_get_current_item_drawn, (const object *) this);
}

real_t style_box::get_default_margin(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_default_margin, (const object *) this, margin);
}

real_t style_box::get_margin(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_margin, (const object *) this, margin);
}

vector2 style_box::get_minimum_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_minimum_size, (const object *) this);
}

vector2 style_box::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

void style_box::set_default_margin(const int64_t margin, const real_t offset) {
	___godot_icall_void_int_float(___mb.mb_set_default_margin, (const object *) this, margin, offset);
}

bool style_box::test_mask(const vector2 point, const rect2 rect) const {
	return ___godot_icall_bool_Vector2_Rect2(___mb.mb_test_mask, (const object *) this, point, rect);
}

}