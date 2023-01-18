#include "java_class_wrapper.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "java_class.hpp"


namespace gd {


java_class_wrapper *java_class_wrapper::_singleton = NULL;


java_class_wrapper::java_class_wrapper() {
	_owner = gd::api->godot_global_get_singleton((char *) "JavaClassWrapper");
}


java_class_wrapper::___method_bindings java_class_wrapper::___mb = {};

void *java_class_wrapper::_detail_class_tag = nullptr;

void java_class_wrapper::___init_method_bindings() {
	___mb.mb_wrap = gd::api->godot_method_bind_get_method("JavaClassWrapper", "wrap");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "JavaClassWrapper");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<java_class> java_class_wrapper::wrap(const string name) {
	return ref<java_class>::__internal_constructor(___godot_icall_Object_String(___mb.mb_wrap, (const object *) this, name));
}

}