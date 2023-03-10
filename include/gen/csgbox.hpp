#ifndef GODOT_CPP_CSGBOX_HPP
#define GODOT_CPP_CSGBOX_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "csgprimitive.hpp"
namespace gd {

class material;

class csgbox : public csgprimitive {
	struct ___method_bindings {
		godot_method_bind *mb_get_depth;
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_width;
		godot_method_bind *mb_set_depth;
		godot_method_bind *mb_set_height;
		godot_method_bind *mb_set_material;
		godot_method_bind *mb_set_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CSGBox"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CSGBox"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static csgbox *_new();

	// methods
	real_t get_depth() const;
	real_t get_height() const;
	ref<material> get_material() const;
	real_t get_width() const;
	void set_depth(const real_t depth);
	void set_height(const real_t height);
	void set_material(const ref<material> material_);
	void set_width(const real_t width);

};

}

#endif