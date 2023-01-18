#include "shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "shape2d.hpp"


namespace gd {


shape2d::___method_bindings shape2d::___mb = {};

void *shape2d::_detail_class_tag = nullptr;

void shape2d::___init_method_bindings() {
	___mb.mb_collide = gd::api->godot_method_bind_get_method("Shape2D", "collide");
	___mb.mb_collide_and_get_contacts = gd::api->godot_method_bind_get_method("Shape2D", "collide_and_get_contacts");
	___mb.mb_collide_with_motion = gd::api->godot_method_bind_get_method("Shape2D", "collide_with_motion");
	___mb.mb_collide_with_motion_and_get_contacts = gd::api->godot_method_bind_get_method("Shape2D", "collide_with_motion_and_get_contacts");
	___mb.mb_draw = gd::api->godot_method_bind_get_method("Shape2D", "draw");
	___mb.mb_get_custom_solver_bias = gd::api->godot_method_bind_get_method("Shape2D", "get_custom_solver_bias");
	___mb.mb_set_custom_solver_bias = gd::api->godot_method_bind_get_method("Shape2D", "set_custom_solver_bias");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Shape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool shape2d::collide(const transform2d local_xform, const ref<shape2d> with_shape, const transform2d shape_xform) {
	return ___godot_icall_bool_Transform2D_Object_Transform2D(___mb.mb_collide, (const object *) this, local_xform, with_shape.ptr(), shape_xform);
}

array shape2d::collide_and_get_contacts(const transform2d local_xform, const ref<shape2d> with_shape, const transform2d shape_xform) {
	return ___godot_icall_Array_Transform2D_Object_Transform2D(___mb.mb_collide_and_get_contacts, (const object *) this, local_xform, with_shape.ptr(), shape_xform);
}

bool shape2d::collide_with_motion(const transform2d local_xform, const vector2 local_motion, const ref<shape2d> with_shape, const transform2d shape_xform, const vector2 shape_motion) {
	return ___godot_icall_bool_Transform2D_Vector2_Object_Transform2D_Vector2(___mb.mb_collide_with_motion, (const object *) this, local_xform, local_motion, with_shape.ptr(), shape_xform, shape_motion);
}

array shape2d::collide_with_motion_and_get_contacts(const transform2d local_xform, const vector2 local_motion, const ref<shape2d> with_shape, const transform2d shape_xform, const vector2 shape_motion) {
	return ___godot_icall_Array_Transform2D_Vector2_Object_Transform2D_Vector2(___mb.mb_collide_with_motion_and_get_contacts, (const object *) this, local_xform, local_motion, with_shape.ptr(), shape_xform, shape_motion);
}

void shape2d::draw(const rid canvas_item_, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_draw, (const object *) this, canvas_item_, color_);
}

real_t shape2d::get_custom_solver_bias() const {
	return ___godot_icall_float(___mb.mb_get_custom_solver_bias, (const object *) this);
}

void shape2d::set_custom_solver_bias(const real_t bias) {
	___godot_icall_void_float(___mb.mb_set_custom_solver_bias, (const object *) this, bias);
}

}