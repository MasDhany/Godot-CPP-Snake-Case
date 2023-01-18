#include "gltfstate.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation_player.hpp"
#include "node.hpp"


namespace gd {


gltfstate::___method_bindings gltfstate::___mb = {};

void *gltfstate::_detail_class_tag = nullptr;

void gltfstate::___init_method_bindings() {
	___mb.mb_get_accessors = gd::api->godot_method_bind_get_method("GLTFState", "get_accessors");
	___mb.mb_get_animation_player = gd::api->godot_method_bind_get_method("GLTFState", "get_animation_player");
	___mb.mb_get_animation_players_count = gd::api->godot_method_bind_get_method("GLTFState", "get_animation_players_count");
	___mb.mb_get_animations = gd::api->godot_method_bind_get_method("GLTFState", "get_animations");
	___mb.mb_get_buffer_views = gd::api->godot_method_bind_get_method("GLTFState", "get_buffer_views");
	___mb.mb_get_buffers = gd::api->godot_method_bind_get_method("GLTFState", "get_buffers");
	___mb.mb_get_cameras = gd::api->godot_method_bind_get_method("GLTFState", "get_cameras");
	___mb.mb_get_glb_data = gd::api->godot_method_bind_get_method("GLTFState", "get_glb_data");
	___mb.mb_get_images = gd::api->godot_method_bind_get_method("GLTFState", "get_images");
	___mb.mb_get_json = gd::api->godot_method_bind_get_method("GLTFState", "get_json");
	___mb.mb_get_lights = gd::api->godot_method_bind_get_method("GLTFState", "get_lights");
	___mb.mb_get_major_version = gd::api->godot_method_bind_get_method("GLTFState", "get_major_version");
	___mb.mb_get_materials = gd::api->godot_method_bind_get_method("GLTFState", "get_materials");
	___mb.mb_get_meshes = gd::api->godot_method_bind_get_method("GLTFState", "get_meshes");
	___mb.mb_get_minor_version = gd::api->godot_method_bind_get_method("GLTFState", "get_minor_version");
	___mb.mb_get_nodes = gd::api->godot_method_bind_get_method("GLTFState", "get_nodes");
	___mb.mb_get_root_nodes = gd::api->godot_method_bind_get_method("GLTFState", "get_root_nodes");
	___mb.mb_get_scene_name = gd::api->godot_method_bind_get_method("GLTFState", "get_scene_name");
	___mb.mb_get_scene_node = gd::api->godot_method_bind_get_method("GLTFState", "get_scene_node");
	___mb.mb_get_skeleton_to_node = gd::api->godot_method_bind_get_method("GLTFState", "get_skeleton_to_node");
	___mb.mb_get_skeletons = gd::api->godot_method_bind_get_method("GLTFState", "get_skeletons");
	___mb.mb_get_skins = gd::api->godot_method_bind_get_method("GLTFState", "get_skins");
	___mb.mb_get_textures = gd::api->godot_method_bind_get_method("GLTFState", "get_textures");
	___mb.mb_get_unique_animation_names = gd::api->godot_method_bind_get_method("GLTFState", "get_unique_animation_names");
	___mb.mb_get_unique_names = gd::api->godot_method_bind_get_method("GLTFState", "get_unique_names");
	___mb.mb_get_use_named_skin_binds = gd::api->godot_method_bind_get_method("GLTFState", "get_use_named_skin_binds");
	___mb.mb_set_accessors = gd::api->godot_method_bind_get_method("GLTFState", "set_accessors");
	___mb.mb_set_animations = gd::api->godot_method_bind_get_method("GLTFState", "set_animations");
	___mb.mb_set_buffer_views = gd::api->godot_method_bind_get_method("GLTFState", "set_buffer_views");
	___mb.mb_set_buffers = gd::api->godot_method_bind_get_method("GLTFState", "set_buffers");
	___mb.mb_set_cameras = gd::api->godot_method_bind_get_method("GLTFState", "set_cameras");
	___mb.mb_set_glb_data = gd::api->godot_method_bind_get_method("GLTFState", "set_glb_data");
	___mb.mb_set_images = gd::api->godot_method_bind_get_method("GLTFState", "set_images");
	___mb.mb_set_json = gd::api->godot_method_bind_get_method("GLTFState", "set_json");
	___mb.mb_set_lights = gd::api->godot_method_bind_get_method("GLTFState", "set_lights");
	___mb.mb_set_major_version = gd::api->godot_method_bind_get_method("GLTFState", "set_major_version");
	___mb.mb_set_materials = gd::api->godot_method_bind_get_method("GLTFState", "set_materials");
	___mb.mb_set_meshes = gd::api->godot_method_bind_get_method("GLTFState", "set_meshes");
	___mb.mb_set_minor_version = gd::api->godot_method_bind_get_method("GLTFState", "set_minor_version");
	___mb.mb_set_nodes = gd::api->godot_method_bind_get_method("GLTFState", "set_nodes");
	___mb.mb_set_root_nodes = gd::api->godot_method_bind_get_method("GLTFState", "set_root_nodes");
	___mb.mb_set_scene_name = gd::api->godot_method_bind_get_method("GLTFState", "set_scene_name");
	___mb.mb_set_skeleton_to_node = gd::api->godot_method_bind_get_method("GLTFState", "set_skeleton_to_node");
	___mb.mb_set_skeletons = gd::api->godot_method_bind_get_method("GLTFState", "set_skeletons");
	___mb.mb_set_skins = gd::api->godot_method_bind_get_method("GLTFState", "set_skins");
	___mb.mb_set_textures = gd::api->godot_method_bind_get_method("GLTFState", "set_textures");
	___mb.mb_set_unique_animation_names = gd::api->godot_method_bind_get_method("GLTFState", "set_unique_animation_names");
	___mb.mb_set_unique_names = gd::api->godot_method_bind_get_method("GLTFState", "set_unique_names");
	___mb.mb_set_use_named_skin_binds = gd::api->godot_method_bind_get_method("GLTFState", "set_use_named_skin_binds");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFState");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfstate *gltfstate::_new()
{
	return (gltfstate *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFState")());
}
array gltfstate::get_accessors() {
	return ___godot_icall_Array(___mb.mb_get_accessors, (const object *) this);
}

animation_player *gltfstate::get_animation_player(const int64_t idx) {
	return (animation_player *) ___godot_icall_Object_int(___mb.mb_get_animation_player, (const object *) this, idx);
}

int64_t gltfstate::get_animation_players_count(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb_get_animation_players_count, (const object *) this, idx);
}

array gltfstate::get_animations() {
	return ___godot_icall_Array(___mb.mb_get_animations, (const object *) this);
}

array gltfstate::get_buffer_views() {
	return ___godot_icall_Array(___mb.mb_get_buffer_views, (const object *) this);
}

array gltfstate::get_buffers() {
	return ___godot_icall_Array(___mb.mb_get_buffers, (const object *) this);
}

array gltfstate::get_cameras() {
	return ___godot_icall_Array(___mb.mb_get_cameras, (const object *) this);
}

pool_byte_array gltfstate::get_glb_data() {
	return ___godot_icall_PoolByteArray(___mb.mb_get_glb_data, (const object *) this);
}

array gltfstate::get_images() {
	return ___godot_icall_Array(___mb.mb_get_images, (const object *) this);
}

dictionary gltfstate::get_json() {
	return ___godot_icall_Dictionary(___mb.mb_get_json, (const object *) this);
}

array gltfstate::get_lights() {
	return ___godot_icall_Array(___mb.mb_get_lights, (const object *) this);
}

int64_t gltfstate::get_major_version() {
	return ___godot_icall_int(___mb.mb_get_major_version, (const object *) this);
}

array gltfstate::get_materials() {
	return ___godot_icall_Array(___mb.mb_get_materials, (const object *) this);
}

array gltfstate::get_meshes() {
	return ___godot_icall_Array(___mb.mb_get_meshes, (const object *) this);
}

int64_t gltfstate::get_minor_version() {
	return ___godot_icall_int(___mb.mb_get_minor_version, (const object *) this);
}

array gltfstate::get_nodes() {
	return ___godot_icall_Array(___mb.mb_get_nodes, (const object *) this);
}

array gltfstate::get_root_nodes() {
	return ___godot_icall_Array(___mb.mb_get_root_nodes, (const object *) this);
}

string gltfstate::get_scene_name() {
	return ___godot_icall_String(___mb.mb_get_scene_name, (const object *) this);
}

node *gltfstate::get_scene_node(const int64_t idx) {
	return (node *) ___godot_icall_Object_int(___mb.mb_get_scene_node, (const object *) this, idx);
}

dictionary gltfstate::get_skeleton_to_node() {
	return ___godot_icall_Dictionary(___mb.mb_get_skeleton_to_node, (const object *) this);
}

array gltfstate::get_skeletons() {
	return ___godot_icall_Array(___mb.mb_get_skeletons, (const object *) this);
}

array gltfstate::get_skins() {
	return ___godot_icall_Array(___mb.mb_get_skins, (const object *) this);
}

array gltfstate::get_textures() {
	return ___godot_icall_Array(___mb.mb_get_textures, (const object *) this);
}

array gltfstate::get_unique_animation_names() {
	return ___godot_icall_Array(___mb.mb_get_unique_animation_names, (const object *) this);
}

array gltfstate::get_unique_names() {
	return ___godot_icall_Array(___mb.mb_get_unique_names, (const object *) this);
}

bool gltfstate::get_use_named_skin_binds() {
	return ___godot_icall_bool(___mb.mb_get_use_named_skin_binds, (const object *) this);
}

void gltfstate::set_accessors(const array accessors) {
	___godot_icall_void_Array(___mb.mb_set_accessors, (const object *) this, accessors);
}

void gltfstate::set_animations(const array animations) {
	___godot_icall_void_Array(___mb.mb_set_animations, (const object *) this, animations);
}

void gltfstate::set_buffer_views(const array buffer_views) {
	___godot_icall_void_Array(___mb.mb_set_buffer_views, (const object *) this, buffer_views);
}

void gltfstate::set_buffers(const array buffers) {
	___godot_icall_void_Array(___mb.mb_set_buffers, (const object *) this, buffers);
}

void gltfstate::set_cameras(const array cameras) {
	___godot_icall_void_Array(___mb.mb_set_cameras, (const object *) this, cameras);
}

void gltfstate::set_glb_data(const pool_byte_array glb_data) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_glb_data, (const object *) this, glb_data);
}

void gltfstate::set_images(const array images) {
	___godot_icall_void_Array(___mb.mb_set_images, (const object *) this, images);
}

void gltfstate::set_json(const dictionary json_) {
	___godot_icall_void_Dictionary(___mb.mb_set_json, (const object *) this, json_);
}

void gltfstate::set_lights(const array lights) {
	___godot_icall_void_Array(___mb.mb_set_lights, (const object *) this, lights);
}

void gltfstate::set_major_version(const int64_t major_version) {
	___godot_icall_void_int(___mb.mb_set_major_version, (const object *) this, major_version);
}

void gltfstate::set_materials(const array materials) {
	___godot_icall_void_Array(___mb.mb_set_materials, (const object *) this, materials);
}

void gltfstate::set_meshes(const array meshes) {
	___godot_icall_void_Array(___mb.mb_set_meshes, (const object *) this, meshes);
}

void gltfstate::set_minor_version(const int64_t minor_version) {
	___godot_icall_void_int(___mb.mb_set_minor_version, (const object *) this, minor_version);
}

void gltfstate::set_nodes(const array nodes) {
	___godot_icall_void_Array(___mb.mb_set_nodes, (const object *) this, nodes);
}

void gltfstate::set_root_nodes(const array root_nodes) {
	___godot_icall_void_Array(___mb.mb_set_root_nodes, (const object *) this, root_nodes);
}

void gltfstate::set_scene_name(const string scene_name) {
	___godot_icall_void_String(___mb.mb_set_scene_name, (const object *) this, scene_name);
}

void gltfstate::set_skeleton_to_node(const dictionary skeleton_to_node) {
	___godot_icall_void_Dictionary(___mb.mb_set_skeleton_to_node, (const object *) this, skeleton_to_node);
}

void gltfstate::set_skeletons(const array skeletons) {
	___godot_icall_void_Array(___mb.mb_set_skeletons, (const object *) this, skeletons);
}

void gltfstate::set_skins(const array skins) {
	___godot_icall_void_Array(___mb.mb_set_skins, (const object *) this, skins);
}

void gltfstate::set_textures(const array textures) {
	___godot_icall_void_Array(___mb.mb_set_textures, (const object *) this, textures);
}

void gltfstate::set_unique_animation_names(const array unique_animation_names) {
	___godot_icall_void_Array(___mb.mb_set_unique_animation_names, (const object *) this, unique_animation_names);
}

void gltfstate::set_unique_names(const array unique_names) {
	___godot_icall_void_Array(___mb.mb_set_unique_names, (const object *) this, unique_names);
}

void gltfstate::set_use_named_skin_binds(const bool use_named_skin_binds) {
	___godot_icall_void_bool(___mb.mb_set_use_named_skin_binds, (const object *) this, use_named_skin_binds);
}

}