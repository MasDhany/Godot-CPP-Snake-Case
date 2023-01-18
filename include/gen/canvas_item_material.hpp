#ifndef GODOT_CPP_CANVASITEMMATERIAL_HPP
#define GODOT_CPP_CANVASITEMMATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "canvas_item_material.hpp"

#include "material.hpp"
namespace gd {


class canvas_item_material : public material {
	struct ___method_bindings {
		godot_method_bind *mb_get_blend_mode;
		godot_method_bind *mb_get_light_mode;
		godot_method_bind *mb_get_particles_anim_h_frames;
		godot_method_bind *mb_get_particles_anim_loop;
		godot_method_bind *mb_get_particles_anim_v_frames;
		godot_method_bind *mb_get_particles_animation;
		godot_method_bind *mb_set_blend_mode;
		godot_method_bind *mb_set_light_mode;
		godot_method_bind *mb_set_particles_anim_h_frames;
		godot_method_bind *mb_set_particles_anim_loop;
		godot_method_bind *mb_set_particles_anim_v_frames;
		godot_method_bind *mb_set_particles_animation;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CanvasItemMaterial"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CanvasItemMaterial"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum LightMode {
		LIGHT_MODE_NORMAL = 0,
		LIGHT_MODE_UNSHADED = 1,
		LIGHT_MODE_LIGHT_ONLY = 2,
	};
	enum BlendMode {
		BLEND_MODE_MIX = 0,
		BLEND_MODE_ADD = 1,
		BLEND_MODE_SUB = 2,
		BLEND_MODE_MUL = 3,
		BLEND_MODE_PREMULT_ALPHA = 4,
	};

	// constants


	static canvas_item_material *_new();

	// methods
	canvas_item_material::BlendMode get_blend_mode() const;
	canvas_item_material::LightMode get_light_mode() const;
	int64_t get_particles_anim_h_frames() const;
	bool get_particles_anim_loop() const;
	int64_t get_particles_anim_v_frames() const;
	bool get_particles_animation() const;
	void set_blend_mode(const int64_t blend_mode);
	void set_light_mode(const int64_t light_mode);
	void set_particles_anim_h_frames(const int64_t frames);
	void set_particles_anim_loop(const bool loop);
	void set_particles_anim_v_frames(const int64_t frames);
	void set_particles_animation(const bool particles_anim);

};

}

#endif