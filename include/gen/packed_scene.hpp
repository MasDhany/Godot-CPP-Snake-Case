#ifndef GODOT_CPP_PACKEDSCENE_HPP
#define GODOT_CPP_PACKEDSCENE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class node;
class scene_state;

class packed_scene : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_bundled_scene;
		godot_method_bind *mb__set_bundled_scene;
		godot_method_bind *mb_can_instance;
		godot_method_bind *mb_get_state;
		godot_method_bind *mb_instance;
		godot_method_bind *mb_pack;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PackedScene"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PackedScene"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum GenEditState {
		GEN_EDIT_STATE_DISABLED = 0,
		GEN_EDIT_STATE_INSTANCE = 1,
		GEN_EDIT_STATE_MAIN = 2,
		GEN_EDIT_STATE_MAIN_INHERITED = 3,
	};

	// constants


	static packed_scene *_new();

	// methods
	dictionary _get_bundled_scene() const;
	void _set_bundled_scene(const dictionary arg0);
	bool can_instance() const;
	ref<scene_state> get_state();
	node *instance(const int64_t edit_state = 0) const;
	error pack(const node *path_);

};

}

#endif