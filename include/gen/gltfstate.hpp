#ifndef GODOT_CPP_GLTFSTATE_HPP
#define GODOT_CPP_GLTFSTATE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class animation_player;
class node;

class gltfstate : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_accessors;
		godot_method_bind *mb_get_animation_player;
		godot_method_bind *mb_get_animation_players_count;
		godot_method_bind *mb_get_animations;
		godot_method_bind *mb_get_buffer_views;
		godot_method_bind *mb_get_buffers;
		godot_method_bind *mb_get_cameras;
		godot_method_bind *mb_get_glb_data;
		godot_method_bind *mb_get_images;
		godot_method_bind *mb_get_json;
		godot_method_bind *mb_get_lights;
		godot_method_bind *mb_get_major_version;
		godot_method_bind *mb_get_materials;
		godot_method_bind *mb_get_meshes;
		godot_method_bind *mb_get_minor_version;
		godot_method_bind *mb_get_nodes;
		godot_method_bind *mb_get_root_nodes;
		godot_method_bind *mb_get_scene_name;
		godot_method_bind *mb_get_scene_node;
		godot_method_bind *mb_get_skeleton_to_node;
		godot_method_bind *mb_get_skeletons;
		godot_method_bind *mb_get_skins;
		godot_method_bind *mb_get_textures;
		godot_method_bind *mb_get_unique_animation_names;
		godot_method_bind *mb_get_unique_names;
		godot_method_bind *mb_get_use_named_skin_binds;
		godot_method_bind *mb_set_accessors;
		godot_method_bind *mb_set_animations;
		godot_method_bind *mb_set_buffer_views;
		godot_method_bind *mb_set_buffers;
		godot_method_bind *mb_set_cameras;
		godot_method_bind *mb_set_glb_data;
		godot_method_bind *mb_set_images;
		godot_method_bind *mb_set_json;
		godot_method_bind *mb_set_lights;
		godot_method_bind *mb_set_major_version;
		godot_method_bind *mb_set_materials;
		godot_method_bind *mb_set_meshes;
		godot_method_bind *mb_set_minor_version;
		godot_method_bind *mb_set_nodes;
		godot_method_bind *mb_set_root_nodes;
		godot_method_bind *mb_set_scene_name;
		godot_method_bind *mb_set_skeleton_to_node;
		godot_method_bind *mb_set_skeletons;
		godot_method_bind *mb_set_skins;
		godot_method_bind *mb_set_textures;
		godot_method_bind *mb_set_unique_animation_names;
		godot_method_bind *mb_set_unique_names;
		godot_method_bind *mb_set_use_named_skin_binds;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFState"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFState"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static gltfstate *_new();

	// methods
	array get_accessors();
	animation_player *get_animation_player(const int64_t idx);
	int64_t get_animation_players_count(const int64_t idx);
	array get_animations();
	array get_buffer_views();
	array get_buffers();
	array get_cameras();
	pool_byte_array get_glb_data();
	array get_images();
	dictionary get_json();
	array get_lights();
	int64_t get_major_version();
	array get_materials();
	array get_meshes();
	int64_t get_minor_version();
	array get_nodes();
	array get_root_nodes();
	string get_scene_name();
	node *get_scene_node(const int64_t idx);
	dictionary get_skeleton_to_node();
	array get_skeletons();
	array get_skins();
	array get_textures();
	array get_unique_animation_names();
	array get_unique_names();
	bool get_use_named_skin_binds();
	void set_accessors(const array accessors);
	void set_animations(const array animations);
	void set_buffer_views(const array buffer_views);
	void set_buffers(const array buffers);
	void set_cameras(const array cameras);
	void set_glb_data(const pool_byte_array glb_data);
	void set_images(const array images);
	void set_json(const dictionary json_);
	void set_lights(const array lights);
	void set_major_version(const int64_t major_version);
	void set_materials(const array materials);
	void set_meshes(const array meshes);
	void set_minor_version(const int64_t minor_version);
	void set_nodes(const array nodes);
	void set_root_nodes(const array root_nodes);
	void set_scene_name(const string scene_name);
	void set_skeleton_to_node(const dictionary skeleton_to_node);
	void set_skeletons(const array skeletons);
	void set_skins(const array skins);
	void set_textures(const array textures);
	void set_unique_animation_names(const array unique_animation_names);
	void set_unique_names(const array unique_names);
	void set_use_named_skin_binds(const bool use_named_skin_binds);

};

}

#endif