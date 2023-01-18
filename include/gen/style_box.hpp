#ifndef GODOT_CPP_STYLEBOX_HPP
#define GODOT_CPP_STYLEBOX_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class canvas_item;

class style_box : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_draw;
		godot_method_bind *mb_get_center_size;
		godot_method_bind *mb_get_current_item_drawn;
		godot_method_bind *mb_get_default_margin;
		godot_method_bind *mb_get_margin;
		godot_method_bind *mb_get_minimum_size;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_set_default_margin;
		godot_method_bind *mb_test_mask;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StyleBox"; }
	static inline const char *___get_godot_class_name() { return (const char *) "StyleBox"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void draw(const rid canvas_item_, const rect2 rect) const;
	vector2 get_center_size() const;
	canvas_item *get_current_item_drawn() const;
	real_t get_default_margin(const int64_t margin) const;
	real_t get_margin(const int64_t margin) const;
	vector2 get_minimum_size() const;
	vector2 get_offset() const;
	void set_default_margin(const int64_t margin, const real_t offset);
	bool test_mask(const vector2 point, const rect2 rect) const;

};

}

#endif