#ifndef GODOT_CPP_SPLITCONTAINER_HPP
#define GODOT_CPP_SPLITCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "split_container.hpp"

#include "container.hpp"
namespace gd {

class input_event;

class split_container : public container {
	struct ___method_bindings {
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb_clamp_split_offset;
		godot_method_bind *mb_get_dragger_visibility;
		godot_method_bind *mb_get_split_offset;
		godot_method_bind *mb_is_collapsed;
		godot_method_bind *mb_set_collapsed;
		godot_method_bind *mb_set_dragger_visibility;
		godot_method_bind *mb_set_split_offset;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SplitContainer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SplitContainer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DraggerVisibility {
		DRAGGER_VISIBLE = 0,
		DRAGGER_HIDDEN = 1,
		DRAGGER_HIDDEN_COLLAPSED = 2,
	};

	// constants

	// methods
	void _gui_input(const ref<input_event> arg0);
	void clamp_split_offset();
	split_container::DraggerVisibility get_dragger_visibility() const;
	int64_t get_split_offset() const;
	bool is_collapsed() const;
	void set_collapsed(const bool collapsed);
	void set_dragger_visibility(const int64_t mode);
	void set_split_offset(const int64_t offset);

};

}

#endif