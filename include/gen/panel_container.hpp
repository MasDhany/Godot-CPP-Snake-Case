#ifndef GODOT_CPP_PANELCONTAINER_HPP
#define GODOT_CPP_PANELCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "container.hpp"
namespace gd {


class panel_container : public container {
	struct ___method_bindings {
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PanelContainer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PanelContainer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static panel_container *_new();

	// methods

};

}

#endif