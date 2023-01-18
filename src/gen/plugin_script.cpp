#include "plugin_script.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


plugin_script::___method_bindings plugin_script::___mb = {};

void *plugin_script::_detail_class_tag = nullptr;

void plugin_script::___init_method_bindings() {
	___mb.mb_new = gd::api->godot_method_bind_get_method("PluginScript", "new");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PluginScript");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

plugin_script *plugin_script::_new()
{
	return (plugin_script *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PluginScript")());
}
variant plugin_script::new_(const array& __var_args) {


	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 0));


	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 0] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_new, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 0), nullptr);


	return __result;
}

}