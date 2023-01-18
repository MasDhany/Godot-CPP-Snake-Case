#ifndef GODOT_CPP_RICHTEXTEFFECT_HPP
#define GODOT_CPP_RICHTEXTEFFECT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class char_fxtransform;

class rich_text_effect : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__process_custom_fx;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "RichTextEffect"; }
	static inline const char *___get_godot_class_name() { return (const char *) "RichTextEffect"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static rich_text_effect *_new();

	// methods
	bool _process_custom_fx(const ref<char_fxtransform> char_fx);

};

}

#endif