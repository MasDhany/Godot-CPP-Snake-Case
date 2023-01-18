#ifndef GODOT_CPP_SPRITE3D_HPP
#define GODOT_CPP_SPRITE3D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "sprite_base3d.hpp"
namespace gd {

class texture;

class sprite3d : public sprite_base3d {
	struct ___method_bindings {
		godot_method_bind *mb_get_frame;
		godot_method_bind *mb_get_frame_coords;
		godot_method_bind *mb_get_hframes;
		godot_method_bind *mb_get_region_rect;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_vframes;
		godot_method_bind *mb_is_region;
		godot_method_bind *mb_set_frame;
		godot_method_bind *mb_set_frame_coords;
		godot_method_bind *mb_set_hframes;
		godot_method_bind *mb_set_region;
		godot_method_bind *mb_set_region_rect;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_vframes;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Sprite3D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Sprite3D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static sprite3d *_new();

	// methods
	int64_t get_frame() const;
	vector2 get_frame_coords() const;
	int64_t get_hframes() const;
	rect2 get_region_rect() const;
	ref<texture> get_texture() const;
	int64_t get_vframes() const;
	bool is_region() const;
	void set_frame(const int64_t frame);
	void set_frame_coords(const vector2 coords);
	void set_hframes(const int64_t hframes);
	void set_region(const bool enabled);
	void set_region_rect(const rect2 rect);
	void set_texture(const ref<texture> texture_);
	void set_vframes(const int64_t vframes);

};

}

#endif