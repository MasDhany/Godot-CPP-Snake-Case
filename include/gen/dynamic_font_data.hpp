#ifndef GODOT_CPP_DYNAMICFONTDATA_HPP
#define GODOT_CPP_DYNAMICFONTDATA_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "dynamic_font_data.hpp"

#include "resource.hpp"
namespace gd {


class dynamic_font_data : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_font_path;
		godot_method_bind *mb_get_hinting;
		godot_method_bind *mb_get_override_oversampling;
		godot_method_bind *mb_is_antialiased;
		godot_method_bind *mb_set_antialiased;
		godot_method_bind *mb_set_font_path;
		godot_method_bind *mb_set_hinting;
		godot_method_bind *mb_set_override_oversampling;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "DynamicFontData"; }
	static inline const char *___get_godot_class_name() { return (const char *) "DynamicFontData"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Hinting {
		HINTING_NONE = 0,
		HINTING_LIGHT = 1,
		HINTING_NORMAL = 2,
	};

	// constants


	static dynamic_font_data *_new();

	// methods
	string get_font_path() const;
	dynamic_font_data::Hinting get_hinting() const;
	real_t get_override_oversampling() const;
	bool is_antialiased() const;
	void set_antialiased(const bool antialiased);
	void set_font_path(const string path_);
	void set_hinting(const int64_t mode);
	void set_override_oversampling(const real_t oversampling);

};

}

#endif