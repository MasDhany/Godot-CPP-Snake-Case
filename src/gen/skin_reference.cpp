#include "skin_reference.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "skin.hpp"


namespace gd {


skin_reference::___method_bindings skin_reference::___mb = {};

void *skin_reference::_detail_class_tag = nullptr;

void skin_reference::___init_method_bindings() {
	___mb.mb__skin_changed = gd::api->godot_method_bind_get_method("SkinReference", "_skin_changed");
	___mb.mb_get_skeleton = gd::api->godot_method_bind_get_method("SkinReference", "get_skeleton");
	___mb.mb_get_skin = gd::api->godot_method_bind_get_method("SkinReference", "get_skin");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SkinReference");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void skin_reference::_skin_changed() {
	___godot_icall_void(___mb.mb__skin_changed, (const object *) this);
}

rid skin_reference::get_skeleton() const {
	return ___godot_icall_RID(___mb.mb_get_skeleton, (const object *) this);
}

ref<skin> skin_reference::get_skin() const {
	return ref<skin>::__internal_constructor(___godot_icall_Object(___mb.mb_get_skin, (const object *) this));
}

}