#ifndef GODOT_CPP_VISUALSERVER_HPP
#define GODOT_CPP_VISUALSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "image.hpp"
#include "visual_server.hpp"

#include "object.hpp"
namespace gd {

class image;
class object;

class visual_server : public object {
	static visual_server *_singleton;

	visual_server();

	struct ___method_bindings {
		godot_method_bind *mb_black_bars_set_images;
		godot_method_bind *mb_black_bars_set_margins;
		godot_method_bind *mb_camera_create;
		godot_method_bind *mb_camera_set_cull_mask;
		godot_method_bind *mb_camera_set_environment;
		godot_method_bind *mb_camera_set_frustum;
		godot_method_bind *mb_camera_set_orthogonal;
		godot_method_bind *mb_camera_set_perspective;
		godot_method_bind *mb_camera_set_transform;
		godot_method_bind *mb_camera_set_use_vertical_aspect;
		godot_method_bind *mb_canvas_create;
		godot_method_bind *mb_canvas_item_add_circle;
		godot_method_bind *mb_canvas_item_add_clip_ignore;
		godot_method_bind *mb_canvas_item_add_line;
		godot_method_bind *mb_canvas_item_add_mesh;
		godot_method_bind *mb_canvas_item_add_multimesh;
		godot_method_bind *mb_canvas_item_add_nine_patch;
		godot_method_bind *mb_canvas_item_add_particles;
		godot_method_bind *mb_canvas_item_add_polygon;
		godot_method_bind *mb_canvas_item_add_polyline;
		godot_method_bind *mb_canvas_item_add_primitive;
		godot_method_bind *mb_canvas_item_add_rect;
		godot_method_bind *mb_canvas_item_add_set_transform;
		godot_method_bind *mb_canvas_item_add_texture_rect;
		godot_method_bind *mb_canvas_item_add_texture_rect_region;
		godot_method_bind *mb_canvas_item_add_triangle_array;
		godot_method_bind *mb_canvas_item_clear;
		godot_method_bind *mb_canvas_item_create;
		godot_method_bind *mb_canvas_item_set_clip;
		godot_method_bind *mb_canvas_item_set_copy_to_backbuffer;
		godot_method_bind *mb_canvas_item_set_custom_rect;
		godot_method_bind *mb_canvas_item_set_distance_field_mode;
		godot_method_bind *mb_canvas_item_set_draw_behind_parent;
		godot_method_bind *mb_canvas_item_set_draw_index;
		godot_method_bind *mb_canvas_item_set_light_mask;
		godot_method_bind *mb_canvas_item_set_material;
		godot_method_bind *mb_canvas_item_set_modulate;
		godot_method_bind *mb_canvas_item_set_parent;
		godot_method_bind *mb_canvas_item_set_self_modulate;
		godot_method_bind *mb_canvas_item_set_sort_children_by_y;
		godot_method_bind *mb_canvas_item_set_transform;
		godot_method_bind *mb_canvas_item_set_use_parent_material;
		godot_method_bind *mb_canvas_item_set_visible;
		godot_method_bind *mb_canvas_item_set_z_as_relative_to_parent;
		godot_method_bind *mb_canvas_item_set_z_index;
		godot_method_bind *mb_canvas_light_attach_to_canvas;
		godot_method_bind *mb_canvas_light_create;
		godot_method_bind *mb_canvas_light_occluder_attach_to_canvas;
		godot_method_bind *mb_canvas_light_occluder_create;
		godot_method_bind *mb_canvas_light_occluder_set_enabled;
		godot_method_bind *mb_canvas_light_occluder_set_light_mask;
		godot_method_bind *mb_canvas_light_occluder_set_polygon;
		godot_method_bind *mb_canvas_light_occluder_set_transform;
		godot_method_bind *mb_canvas_light_set_color;
		godot_method_bind *mb_canvas_light_set_enabled;
		godot_method_bind *mb_canvas_light_set_energy;
		godot_method_bind *mb_canvas_light_set_height;
		godot_method_bind *mb_canvas_light_set_item_cull_mask;
		godot_method_bind *mb_canvas_light_set_item_shadow_cull_mask;
		godot_method_bind *mb_canvas_light_set_layer_range;
		godot_method_bind *mb_canvas_light_set_mode;
		godot_method_bind *mb_canvas_light_set_scale;
		godot_method_bind *mb_canvas_light_set_shadow_buffer_size;
		godot_method_bind *mb_canvas_light_set_shadow_color;
		godot_method_bind *mb_canvas_light_set_shadow_enabled;
		godot_method_bind *mb_canvas_light_set_shadow_filter;
		godot_method_bind *mb_canvas_light_set_shadow_gradient_length;
		godot_method_bind *mb_canvas_light_set_shadow_smooth;
		godot_method_bind *mb_canvas_light_set_texture;
		godot_method_bind *mb_canvas_light_set_texture_offset;
		godot_method_bind *mb_canvas_light_set_transform;
		godot_method_bind *mb_canvas_light_set_z_range;
		godot_method_bind *mb_canvas_occluder_polygon_create;
		godot_method_bind *mb_canvas_occluder_polygon_set_cull_mode;
		godot_method_bind *mb_canvas_occluder_polygon_set_shape;
		godot_method_bind *mb_canvas_occluder_polygon_set_shape_as_lines;
		godot_method_bind *mb_canvas_set_item_mirroring;
		godot_method_bind *mb_canvas_set_modulate;
		godot_method_bind *mb_directional_light_create;
		godot_method_bind *mb_draw;
		godot_method_bind *mb_environment_create;
		godot_method_bind *mb_environment_set_adjustment;
		godot_method_bind *mb_environment_set_ambient_light;
		godot_method_bind *mb_environment_set_background;
		godot_method_bind *mb_environment_set_bg_color;
		godot_method_bind *mb_environment_set_bg_energy;
		godot_method_bind *mb_environment_set_canvas_max_layer;
		godot_method_bind *mb_environment_set_dof_blur_far;
		godot_method_bind *mb_environment_set_dof_blur_near;
		godot_method_bind *mb_environment_set_fog;
		godot_method_bind *mb_environment_set_fog_depth;
		godot_method_bind *mb_environment_set_fog_height;
		godot_method_bind *mb_environment_set_glow;
		godot_method_bind *mb_environment_set_sky;
		godot_method_bind *mb_environment_set_sky_custom_fov;
		godot_method_bind *mb_environment_set_sky_orientation;
		godot_method_bind *mb_environment_set_ssao;
		godot_method_bind *mb_environment_set_ssr;
		godot_method_bind *mb_environment_set_tonemap;
		godot_method_bind *mb_finish;
		godot_method_bind *mb_force_draw;
		godot_method_bind *mb_force_sync;
		godot_method_bind *mb_free_rid;
		godot_method_bind *mb_get_render_info;
		godot_method_bind *mb_get_test_cube;
		godot_method_bind *mb_get_test_texture;
		godot_method_bind *mb_get_video_adapter_name;
		godot_method_bind *mb_get_video_adapter_vendor;
		godot_method_bind *mb_get_white_texture;
		godot_method_bind *mb_gi_probe_create;
		godot_method_bind *mb_gi_probe_get_bias;
		godot_method_bind *mb_gi_probe_get_bounds;
		godot_method_bind *mb_gi_probe_get_cell_size;
		godot_method_bind *mb_gi_probe_get_dynamic_data;
		godot_method_bind *mb_gi_probe_get_dynamic_range;
		godot_method_bind *mb_gi_probe_get_energy;
		godot_method_bind *mb_gi_probe_get_normal_bias;
		godot_method_bind *mb_gi_probe_get_propagation;
		godot_method_bind *mb_gi_probe_get_to_cell_xform;
		godot_method_bind *mb_gi_probe_is_compressed;
		godot_method_bind *mb_gi_probe_is_interior;
		godot_method_bind *mb_gi_probe_set_bias;
		godot_method_bind *mb_gi_probe_set_bounds;
		godot_method_bind *mb_gi_probe_set_cell_size;
		godot_method_bind *mb_gi_probe_set_compress;
		godot_method_bind *mb_gi_probe_set_dynamic_data;
		godot_method_bind *mb_gi_probe_set_dynamic_range;
		godot_method_bind *mb_gi_probe_set_energy;
		godot_method_bind *mb_gi_probe_set_interior;
		godot_method_bind *mb_gi_probe_set_normal_bias;
		godot_method_bind *mb_gi_probe_set_propagation;
		godot_method_bind *mb_gi_probe_set_to_cell_xform;
		godot_method_bind *mb_has_changed;
		godot_method_bind *mb_has_feature;
		godot_method_bind *mb_has_os_feature;
		godot_method_bind *mb_immediate_begin;
		godot_method_bind *mb_immediate_clear;
		godot_method_bind *mb_immediate_color;
		godot_method_bind *mb_immediate_create;
		godot_method_bind *mb_immediate_end;
		godot_method_bind *mb_immediate_get_material;
		godot_method_bind *mb_immediate_normal;
		godot_method_bind *mb_immediate_set_material;
		godot_method_bind *mb_immediate_tangent;
		godot_method_bind *mb_immediate_uv;
		godot_method_bind *mb_immediate_uv2;
		godot_method_bind *mb_immediate_vertex;
		godot_method_bind *mb_immediate_vertex_2d;
		godot_method_bind *mb_init;
		godot_method_bind *mb_instance_attach_object_instance_id;
		godot_method_bind *mb_instance_attach_skeleton;
		godot_method_bind *mb_instance_create;
		godot_method_bind *mb_instance_create2;
		godot_method_bind *mb_instance_geometry_set_as_instance_lod;
		godot_method_bind *mb_instance_geometry_set_cast_shadows_setting;
		godot_method_bind *mb_instance_geometry_set_draw_range;
		godot_method_bind *mb_instance_geometry_set_flag;
		godot_method_bind *mb_instance_geometry_set_material_overlay;
		godot_method_bind *mb_instance_geometry_set_material_override;
		godot_method_bind *mb_instance_set_base;
		godot_method_bind *mb_instance_set_blend_shape_weight;
		godot_method_bind *mb_instance_set_custom_aabb;
		godot_method_bind *mb_instance_set_exterior;
		godot_method_bind *mb_instance_set_extra_visibility_margin;
		godot_method_bind *mb_instance_set_layer_mask;
		godot_method_bind *mb_instance_set_scenario;
		godot_method_bind *mb_instance_set_surface_material;
		godot_method_bind *mb_instance_set_transform;
		godot_method_bind *mb_instance_set_use_lightmap;
		godot_method_bind *mb_instance_set_visible;
		godot_method_bind *mb_instances_cull_aabb;
		godot_method_bind *mb_instances_cull_convex;
		godot_method_bind *mb_instances_cull_ray;
		godot_method_bind *mb_is_render_loop_enabled;
		godot_method_bind *mb_light_directional_set_blend_splits;
		godot_method_bind *mb_light_directional_set_shadow_depth_range_mode;
		godot_method_bind *mb_light_directional_set_shadow_mode;
		godot_method_bind *mb_light_omni_set_shadow_detail;
		godot_method_bind *mb_light_omni_set_shadow_mode;
		godot_method_bind *mb_light_set_bake_mode;
		godot_method_bind *mb_light_set_color;
		godot_method_bind *mb_light_set_cull_mask;
		godot_method_bind *mb_light_set_negative;
		godot_method_bind *mb_light_set_param;
		godot_method_bind *mb_light_set_projector;
		godot_method_bind *mb_light_set_reverse_cull_face_mode;
		godot_method_bind *mb_light_set_shadow;
		godot_method_bind *mb_light_set_shadow_color;
		godot_method_bind *mb_light_set_use_gi;
		godot_method_bind *mb_lightmap_capture_create;
		godot_method_bind *mb_lightmap_capture_get_bounds;
		godot_method_bind *mb_lightmap_capture_get_energy;
		godot_method_bind *mb_lightmap_capture_get_octree;
		godot_method_bind *mb_lightmap_capture_get_octree_cell_subdiv;
		godot_method_bind *mb_lightmap_capture_get_octree_cell_transform;
		godot_method_bind *mb_lightmap_capture_is_interior;
		godot_method_bind *mb_lightmap_capture_set_bounds;
		godot_method_bind *mb_lightmap_capture_set_energy;
		godot_method_bind *mb_lightmap_capture_set_interior;
		godot_method_bind *mb_lightmap_capture_set_octree;
		godot_method_bind *mb_lightmap_capture_set_octree_cell_subdiv;
		godot_method_bind *mb_lightmap_capture_set_octree_cell_transform;
		godot_method_bind *mb_make_sphere_mesh;
		godot_method_bind *mb_material_create;
		godot_method_bind *mb_material_get_param;
		godot_method_bind *mb_material_get_param_default;
		godot_method_bind *mb_material_get_shader;
		godot_method_bind *mb_material_set_line_width;
		godot_method_bind *mb_material_set_next_pass;
		godot_method_bind *mb_material_set_param;
		godot_method_bind *mb_material_set_render_priority;
		godot_method_bind *mb_material_set_shader;
		godot_method_bind *mb_mesh_add_surface_from_arrays;
		godot_method_bind *mb_mesh_clear;
		godot_method_bind *mb_mesh_create;
		godot_method_bind *mb_mesh_get_blend_shape_count;
		godot_method_bind *mb_mesh_get_blend_shape_mode;
		godot_method_bind *mb_mesh_get_custom_aabb;
		godot_method_bind *mb_mesh_get_surface_count;
		godot_method_bind *mb_mesh_remove_surface;
		godot_method_bind *mb_mesh_set_blend_shape_count;
		godot_method_bind *mb_mesh_set_blend_shape_mode;
		godot_method_bind *mb_mesh_set_custom_aabb;
		godot_method_bind *mb_mesh_surface_get_aabb;
		godot_method_bind *mb_mesh_surface_get_array;
		godot_method_bind *mb_mesh_surface_get_array_index_len;
		godot_method_bind *mb_mesh_surface_get_array_len;
		godot_method_bind *mb_mesh_surface_get_arrays;
		godot_method_bind *mb_mesh_surface_get_blend_shape_arrays;
		godot_method_bind *mb_mesh_surface_get_format;
		godot_method_bind *mb_mesh_surface_get_format_offset;
		godot_method_bind *mb_mesh_surface_get_format_stride;
		godot_method_bind *mb_mesh_surface_get_index_array;
		godot_method_bind *mb_mesh_surface_get_material;
		godot_method_bind *mb_mesh_surface_get_primitive_type;
		godot_method_bind *mb_mesh_surface_get_skeleton_aabb;
		godot_method_bind *mb_mesh_surface_set_material;
		godot_method_bind *mb_mesh_surface_update_region;
		godot_method_bind *mb_multimesh_allocate;
		godot_method_bind *mb_multimesh_create;
		godot_method_bind *mb_multimesh_get_aabb;
		godot_method_bind *mb_multimesh_get_instance_count;
		godot_method_bind *mb_multimesh_get_mesh;
		godot_method_bind *mb_multimesh_get_visible_instances;
		godot_method_bind *mb_multimesh_instance_get_color;
		godot_method_bind *mb_multimesh_instance_get_custom_data;
		godot_method_bind *mb_multimesh_instance_get_transform;
		godot_method_bind *mb_multimesh_instance_get_transform_2d;
		godot_method_bind *mb_multimesh_instance_set_color;
		godot_method_bind *mb_multimesh_instance_set_custom_data;
		godot_method_bind *mb_multimesh_instance_set_transform;
		godot_method_bind *mb_multimesh_instance_set_transform_2d;
		godot_method_bind *mb_multimesh_set_as_bulk_array;
		godot_method_bind *mb_multimesh_set_mesh;
		godot_method_bind *mb_multimesh_set_visible_instances;
		godot_method_bind *mb_omni_light_create;
		godot_method_bind *mb_particles_create;
		godot_method_bind *mb_particles_get_current_aabb;
		godot_method_bind *mb_particles_get_emitting;
		godot_method_bind *mb_particles_is_inactive;
		godot_method_bind *mb_particles_request_process;
		godot_method_bind *mb_particles_restart;
		godot_method_bind *mb_particles_set_amount;
		godot_method_bind *mb_particles_set_custom_aabb;
		godot_method_bind *mb_particles_set_draw_order;
		godot_method_bind *mb_particles_set_draw_pass_mesh;
		godot_method_bind *mb_particles_set_draw_passes;
		godot_method_bind *mb_particles_set_emission_transform;
		godot_method_bind *mb_particles_set_emitting;
		godot_method_bind *mb_particles_set_explosiveness_ratio;
		godot_method_bind *mb_particles_set_fixed_fps;
		godot_method_bind *mb_particles_set_fractional_delta;
		godot_method_bind *mb_particles_set_lifetime;
		godot_method_bind *mb_particles_set_one_shot;
		godot_method_bind *mb_particles_set_pre_process_time;
		godot_method_bind *mb_particles_set_process_material;
		godot_method_bind *mb_particles_set_randomness_ratio;
		godot_method_bind *mb_particles_set_speed_scale;
		godot_method_bind *mb_particles_set_use_local_coordinates;
		godot_method_bind *mb_reflection_probe_create;
		godot_method_bind *mb_reflection_probe_set_as_interior;
		godot_method_bind *mb_reflection_probe_set_cull_mask;
		godot_method_bind *mb_reflection_probe_set_enable_box_projection;
		godot_method_bind *mb_reflection_probe_set_enable_shadows;
		godot_method_bind *mb_reflection_probe_set_extents;
		godot_method_bind *mb_reflection_probe_set_intensity;
		godot_method_bind *mb_reflection_probe_set_interior_ambient;
		godot_method_bind *mb_reflection_probe_set_interior_ambient_energy;
		godot_method_bind *mb_reflection_probe_set_interior_ambient_probe_contribution;
		godot_method_bind *mb_reflection_probe_set_max_distance;
		godot_method_bind *mb_reflection_probe_set_origin_offset;
		godot_method_bind *mb_reflection_probe_set_update_mode;
		godot_method_bind *mb_request_frame_drawn_callback;
		godot_method_bind *mb_scenario_create;
		godot_method_bind *mb_scenario_set_debug;
		godot_method_bind *mb_scenario_set_environment;
		godot_method_bind *mb_scenario_set_fallback_environment;
		godot_method_bind *mb_scenario_set_reflection_atlas_size;
		godot_method_bind *mb_set_boot_image;
		godot_method_bind *mb_set_debug_generate_wireframes;
		godot_method_bind *mb_set_default_clear_color;
		godot_method_bind *mb_set_render_loop_enabled;
		godot_method_bind *mb_set_shader_async_hidden_forbidden;
		godot_method_bind *mb_set_shader_time_scale;
		godot_method_bind *mb_set_use_occlusion_culling;
		godot_method_bind *mb_shader_create;
		godot_method_bind *mb_shader_get_code;
		godot_method_bind *mb_shader_get_default_texture_param;
		godot_method_bind *mb_shader_get_param_list;
		godot_method_bind *mb_shader_set_code;
		godot_method_bind *mb_shader_set_default_texture_param;
		godot_method_bind *mb_skeleton_allocate;
		godot_method_bind *mb_skeleton_bone_get_transform;
		godot_method_bind *mb_skeleton_bone_get_transform_2d;
		godot_method_bind *mb_skeleton_bone_set_transform;
		godot_method_bind *mb_skeleton_bone_set_transform_2d;
		godot_method_bind *mb_skeleton_create;
		godot_method_bind *mb_skeleton_get_bone_count;
		godot_method_bind *mb_sky_create;
		godot_method_bind *mb_sky_set_texture;
		godot_method_bind *mb_spot_light_create;
		godot_method_bind *mb_sync;
		godot_method_bind *mb_texture_allocate;
		godot_method_bind *mb_texture_bind;
		godot_method_bind *mb_texture_create;
		godot_method_bind *mb_texture_create_from_image;
		godot_method_bind *mb_texture_debug_usage;
		godot_method_bind *mb_texture_get_data;
		godot_method_bind *mb_texture_get_depth;
		godot_method_bind *mb_texture_get_flags;
		godot_method_bind *mb_texture_get_format;
		godot_method_bind *mb_texture_get_height;
		godot_method_bind *mb_texture_get_path;
		godot_method_bind *mb_texture_get_texid;
		godot_method_bind *mb_texture_get_type;
		godot_method_bind *mb_texture_get_width;
		godot_method_bind *mb_texture_set_data;
		godot_method_bind *mb_texture_set_data_partial;
		godot_method_bind *mb_texture_set_flags;
		godot_method_bind *mb_texture_set_path;
		godot_method_bind *mb_texture_set_proxy;
		godot_method_bind *mb_texture_set_shrink_all_x2_on_set_data;
		godot_method_bind *mb_texture_set_size_override;
		godot_method_bind *mb_textures_keep_original;
		godot_method_bind *mb_viewport_attach_camera;
		godot_method_bind *mb_viewport_attach_canvas;
		godot_method_bind *mb_viewport_attach_to_screen;
		godot_method_bind *mb_viewport_create;
		godot_method_bind *mb_viewport_detach;
		godot_method_bind *mb_viewport_get_render_info;
		godot_method_bind *mb_viewport_get_texture;
		godot_method_bind *mb_viewport_remove_canvas;
		godot_method_bind *mb_viewport_set_active;
		godot_method_bind *mb_viewport_set_canvas_stacking;
		godot_method_bind *mb_viewport_set_canvas_transform;
		godot_method_bind *mb_viewport_set_clear_mode;
		godot_method_bind *mb_viewport_set_debug_draw;
		godot_method_bind *mb_viewport_set_disable_3d;
		godot_method_bind *mb_viewport_set_disable_environment;
		godot_method_bind *mb_viewport_set_global_canvas_transform;
		godot_method_bind *mb_viewport_set_hdr;
		godot_method_bind *mb_viewport_set_hide_canvas;
		godot_method_bind *mb_viewport_set_hide_scenario;
		godot_method_bind *mb_viewport_set_msaa;
		godot_method_bind *mb_viewport_set_parent_viewport;
		godot_method_bind *mb_viewport_set_render_direct_to_screen;
		godot_method_bind *mb_viewport_set_scenario;
		godot_method_bind *mb_viewport_set_shadow_atlas_quadrant_subdivision;
		godot_method_bind *mb_viewport_set_shadow_atlas_size;
		godot_method_bind *mb_viewport_set_sharpen_intensity;
		godot_method_bind *mb_viewport_set_size;
		godot_method_bind *mb_viewport_set_transparent_background;
		godot_method_bind *mb_viewport_set_update_mode;
		godot_method_bind *mb_viewport_set_usage;
		godot_method_bind *mb_viewport_set_use_32_bpc_depth;
		godot_method_bind *mb_viewport_set_use_arvr;
		godot_method_bind *mb_viewport_set_use_debanding;
		godot_method_bind *mb_viewport_set_use_fxaa;
		godot_method_bind *mb_viewport_set_vflip;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline visual_server *get_singleton()
	{
		if (!visual_server::_singleton) {
			visual_server::_singleton = new visual_server;
		}
		return visual_server::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "VisualServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ReflectionProbeUpdateMode {
		REFLECTION_PROBE_UPDATE_ONCE = 0,
		REFLECTION_PROBE_UPDATE_ALWAYS = 1,
	};
	enum LightDirectionalShadowDepthRangeMode {
		LIGHT_DIRECTIONAL_SHADOW_DEPTH_RANGE_STABLE = 0,
		LIGHT_DIRECTIONAL_SHADOW_DEPTH_RANGE_OPTIMIZED = 1,
	};
	enum BlendShapeMode {
		BLEND_SHAPE_MODE_NORMALIZED = 0,
		BLEND_SHAPE_MODE_RELATIVE = 1,
	};
	enum PrimitiveType {
		PRIMITIVE_POINTS = 0,
		PRIMITIVE_LINES = 1,
		PRIMITIVE_LINE_STRIP = 2,
		PRIMITIVE_LINE_LOOP = 3,
		PRIMITIVE_TRIANGLES = 4,
		PRIMITIVE_TRIANGLE_STRIP = 5,
		PRIMITIVE_TRIANGLE_FAN = 6,
		PRIMITIVE_MAX = 7,
	};
	enum TextureType {
		TEXTURE_TYPE_2D = 0,
		TEXTURE_TYPE_CUBEMAP = 2,
		TEXTURE_TYPE_2D_ARRAY = 3,
		TEXTURE_TYPE_3D = 4,
	};
	enum ChangedPriority {
		CHANGED_PRIORITY_ANY = 0,
		CHANGED_PRIORITY_LOW = 1,
		CHANGED_PRIORITY_HIGH = 2,
	};
	enum EnvironmentSSAOQuality {
		ENV_SSAO_QUALITY_LOW = 0,
		ENV_SSAO_QUALITY_MEDIUM = 1,
		ENV_SSAO_QUALITY_HIGH = 2,
	};
	enum EnvironmentDOFBlurQuality {
		ENV_DOF_BLUR_QUALITY_LOW = 0,
		ENV_DOF_BLUR_QUALITY_MEDIUM = 1,
		ENV_DOF_BLUR_QUALITY_HIGH = 2,
	};
	enum RenderInfo {
		INFO_OBJECTS_IN_FRAME = 0,
		INFO_VERTICES_IN_FRAME = 1,
		INFO_MATERIAL_CHANGES_IN_FRAME = 2,
		INFO_SHADER_CHANGES_IN_FRAME = 3,
		INFO_SHADER_COMPILES_IN_FRAME = 4,
		INFO_SURFACE_CHANGES_IN_FRAME = 5,
		INFO_DRAW_CALLS_IN_FRAME = 6,
		INFO_2D_ITEMS_IN_FRAME = 7,
		INFO_2D_DRAW_CALLS_IN_FRAME = 8,
		INFO_USAGE_VIDEO_MEM_TOTAL = 9,
		INFO_VIDEO_MEM_USED = 10,
		INFO_TEXTURE_MEM_USED = 11,
		INFO_VERTEX_MEM_USED = 12,
	};
	enum NinePatchAxisMode {
		NINE_PATCH_STRETCH = 0,
		NINE_PATCH_TILE = 1,
		NINE_PATCH_TILE_FIT = 2,
	};
	enum ViewportRenderInfo {
		VIEWPORT_RENDER_INFO_OBJECTS_IN_FRAME = 0,
		VIEWPORT_RENDER_INFO_VERTICES_IN_FRAME = 1,
		VIEWPORT_RENDER_INFO_MATERIAL_CHANGES_IN_FRAME = 2,
		VIEWPORT_RENDER_INFO_SHADER_CHANGES_IN_FRAME = 3,
		VIEWPORT_RENDER_INFO_SURFACE_CHANGES_IN_FRAME = 4,
		VIEWPORT_RENDER_INFO_DRAW_CALLS_IN_FRAME = 5,
		VIEWPORT_RENDER_INFO_2D_ITEMS_IN_FRAME = 6,
		VIEWPORT_RENDER_INFO_2D_DRAW_CALLS_IN_FRAME = 7,
		VIEWPORT_RENDER_INFO_MAX = 8,
	};
	enum ViewportClearMode {
		VIEWPORT_CLEAR_ALWAYS = 0,
		VIEWPORT_CLEAR_NEVER = 1,
		VIEWPORT_CLEAR_ONLY_NEXT_FRAME = 2,
	};
	enum LightOmniShadowDetail {
		LIGHT_OMNI_SHADOW_DETAIL_VERTICAL = 0,
		LIGHT_OMNI_SHADOW_DETAIL_HORIZONTAL = 1,
	};
	enum ShaderMode {
		SHADER_SPATIAL = 0,
		SHADER_CANVAS_ITEM = 1,
		SHADER_PARTICLES = 2,
		SHADER_MAX = 3,
	};
	enum MultimeshTransformFormat {
		MULTIMESH_TRANSFORM_2D = 0,
		MULTIMESH_TRANSFORM_3D = 1,
	};
	enum ShadowCastingSetting {
		SHADOW_CASTING_SETTING_OFF = 0,
		SHADOW_CASTING_SETTING_ON = 1,
		SHADOW_CASTING_SETTING_DOUBLE_SIDED = 2,
		SHADOW_CASTING_SETTING_SHADOWS_ONLY = 3,
	};
	enum ViewportDebugDraw {
		VIEWPORT_DEBUG_DRAW_DISABLED = 0,
		VIEWPORT_DEBUG_DRAW_UNSHADED = 1,
		VIEWPORT_DEBUG_DRAW_OVERDRAW = 2,
		VIEWPORT_DEBUG_DRAW_WIREFRAME = 3,
	};
	enum ViewportUsage {
		VIEWPORT_USAGE_2D = 0,
		VIEWPORT_USAGE_2D_NO_SAMPLING = 1,
		VIEWPORT_USAGE_3D = 2,
		VIEWPORT_USAGE_3D_NO_EFFECTS = 3,
	};
	enum EnvironmentBG {
		ENV_BG_CLEAR_COLOR = 0,
		ENV_BG_COLOR = 1,
		ENV_BG_SKY = 2,
		ENV_BG_COLOR_SKY = 3,
		ENV_BG_CANVAS = 4,
		ENV_BG_KEEP = 5,
		ENV_BG_MAX = 7,
	};
	enum MultimeshCustomDataFormat {
		MULTIMESH_CUSTOM_DATA_NONE = 0,
		MULTIMESH_CUSTOM_DATA_8BIT = 1,
		MULTIMESH_CUSTOM_DATA_FLOAT = 2,
	};
	enum LightOmniShadowMode {
		LIGHT_OMNI_SHADOW_DUAL_PARABOLOID = 0,
		LIGHT_OMNI_SHADOW_CUBE = 1,
	};
	enum TextureFlags {
		TEXTURE_FLAG_MIPMAPS = 1,
		TEXTURE_FLAG_REPEAT = 2,
		TEXTURE_FLAG_FILTER = 4,
		TEXTURE_FLAGS_DEFAULT = 7,
		TEXTURE_FLAG_ANISOTROPIC_FILTER = 8,
		TEXTURE_FLAG_CONVERT_TO_LINEAR = 16,
		TEXTURE_FLAG_MIRRORED_REPEAT = 32,
		TEXTURE_FLAG_USED_FOR_STREAMING = 2048,
	};
	enum Features {
		FEATURE_SHADERS = 0,
		FEATURE_MULTITHREADED = 1,
	};
	enum InstanceType {
		INSTANCE_NONE = 0,
		INSTANCE_MESH = 1,
		INSTANCE_MULTIMESH = 2,
		INSTANCE_IMMEDIATE = 3,
		INSTANCE_PARTICLES = 4,
		INSTANCE_LIGHT = 5,
		INSTANCE_REFLECTION_PROBE = 6,
		INSTANCE_GI_PROBE = 7,
		INSTANCE_LIGHTMAP_CAPTURE = 8,
		INSTANCE_MAX = 9,
		INSTANCE_GEOMETRY_MASK = 30,
	};
	enum EnvironmentSSAOBlur {
		ENV_SSAO_BLUR_DISABLED = 0,
		ENV_SSAO_BLUR_1x1 = 1,
		ENV_SSAO_BLUR_2x2 = 2,
		ENV_SSAO_BLUR_3x3 = 3,
	};
	enum EnvironmentToneMapper {
		ENV_TONE_MAPPER_LINEAR = 0,
		ENV_TONE_MAPPER_REINHARD = 1,
		ENV_TONE_MAPPER_FILMIC = 2,
		ENV_TONE_MAPPER_ACES = 3,
		ENV_TONE_MAPPER_ACES_FITTED = 4,
	};
	enum EnvironmentGlowBlendMode {
		GLOW_BLEND_MODE_ADDITIVE = 0,
		GLOW_BLEND_MODE_SCREEN = 1,
		GLOW_BLEND_MODE_SOFTLIGHT = 2,
		GLOW_BLEND_MODE_REPLACE = 3,
	};
	enum MultimeshColorFormat {
		MULTIMESH_COLOR_NONE = 0,
		MULTIMESH_COLOR_8BIT = 1,
		MULTIMESH_COLOR_FLOAT = 2,
	};
	enum CanvasLightShadowFilter {
		CANVAS_LIGHT_FILTER_NONE = 0,
		CANVAS_LIGHT_FILTER_PCF3 = 1,
		CANVAS_LIGHT_FILTER_PCF5 = 2,
		CANVAS_LIGHT_FILTER_PCF7 = 3,
		CANVAS_LIGHT_FILTER_PCF9 = 4,
		CANVAS_LIGHT_FILTER_PCF13 = 5,
	};
	enum ScenarioDebugMode {
		SCENARIO_DEBUG_DISABLED = 0,
		SCENARIO_DEBUG_WIREFRAME = 1,
		SCENARIO_DEBUG_OVERDRAW = 2,
		SCENARIO_DEBUG_SHADELESS = 3,
	};
	enum ViewportUpdateMode {
		VIEWPORT_UPDATE_DISABLED = 0,
		VIEWPORT_UPDATE_ONCE = 1,
		VIEWPORT_UPDATE_WHEN_VISIBLE = 2,
		VIEWPORT_UPDATE_ALWAYS = 3,
	};
	enum LightBakeMode {
		LIGHT_BAKE_DISABLED = 0,
		LIGHT_BAKE_INDIRECT = 1,
		LIGHT_BAKE_ALL = 2,
	};
	enum ArrayFormat {
		ARRAY_FORMAT_VERTEX = 1,
		ARRAY_FORMAT_NORMAL = 2,
		ARRAY_FORMAT_TANGENT = 4,
		ARRAY_FORMAT_COLOR = 8,
		ARRAY_FORMAT_TEX_UV = 16,
		ARRAY_FORMAT_TEX_UV2 = 32,
		ARRAY_FORMAT_BONES = 64,
		ARRAY_FORMAT_WEIGHTS = 128,
		ARRAY_FORMAT_INDEX = 256,
		ARRAY_COMPRESS_VERTEX = 512,
		ARRAY_COMPRESS_NORMAL = 1024,
		ARRAY_COMPRESS_TANGENT = 2048,
		ARRAY_COMPRESS_COLOR = 4096,
		ARRAY_COMPRESS_TEX_UV = 8192,
		ARRAY_COMPRESS_TEX_UV2 = 16384,
		ARRAY_COMPRESS_BONES = 32768,
		ARRAY_COMPRESS_WEIGHTS = 65536,
		ARRAY_COMPRESS_INDEX = 131072,
		ARRAY_FLAG_USE_2D_VERTICES = 262144,
		ARRAY_FLAG_USE_16_BIT_BONES = 524288,
		ARRAY_FLAG_USE_OCTAHEDRAL_COMPRESSION = 2097152,
		ARRAY_COMPRESS_DEFAULT = 2194432,
	};
	enum ParticlesDrawOrder {
		PARTICLES_DRAW_ORDER_INDEX = 0,
		PARTICLES_DRAW_ORDER_LIFETIME = 1,
		PARTICLES_DRAW_ORDER_VIEW_DEPTH = 2,
	};
	enum CanvasLightMode {
		CANVAS_LIGHT_MODE_ADD = 0,
		CANVAS_LIGHT_MODE_SUB = 1,
		CANVAS_LIGHT_MODE_MIX = 2,
		CANVAS_LIGHT_MODE_MASK = 3,
	};
	enum LightDirectionalShadowMode {
		LIGHT_DIRECTIONAL_SHADOW_ORTHOGONAL = 0,
		LIGHT_DIRECTIONAL_SHADOW_PARALLEL_2_SPLITS = 1,
		LIGHT_DIRECTIONAL_SHADOW_PARALLEL_4_SPLITS = 2,
	};
	enum LightParam {
		LIGHT_PARAM_ENERGY = 0,
		LIGHT_PARAM_INDIRECT_ENERGY = 1,
		LIGHT_PARAM_SIZE = 2,
		LIGHT_PARAM_SPECULAR = 3,
		LIGHT_PARAM_RANGE = 4,
		LIGHT_PARAM_ATTENUATION = 5,
		LIGHT_PARAM_SPOT_ANGLE = 6,
		LIGHT_PARAM_SPOT_ATTENUATION = 7,
		LIGHT_PARAM_CONTACT_SHADOW_SIZE = 8,
		LIGHT_PARAM_SHADOW_MAX_DISTANCE = 9,
		LIGHT_PARAM_SHADOW_SPLIT_1_OFFSET = 10,
		LIGHT_PARAM_SHADOW_SPLIT_2_OFFSET = 11,
		LIGHT_PARAM_SHADOW_SPLIT_3_OFFSET = 12,
		LIGHT_PARAM_SHADOW_NORMAL_BIAS = 13,
		LIGHT_PARAM_SHADOW_BIAS = 14,
		LIGHT_PARAM_SHADOW_BIAS_SPLIT_SCALE = 15,
		LIGHT_PARAM_MAX = 16,
	};
	enum ArrayType {
		ARRAY_VERTEX = 0,
		ARRAY_NORMAL = 1,
		ARRAY_TANGENT = 2,
		ARRAY_COLOR = 3,
		ARRAY_TEX_UV = 4,
		ARRAY_TEX_UV2 = 5,
		ARRAY_BONES = 6,
		ARRAY_WEIGHTS = 7,
		ARRAY_INDEX = 8,
		ARRAY_MAX = 9,
	};
	enum CanvasOccluderPolygonCullMode {
		CANVAS_OCCLUDER_POLYGON_CULL_DISABLED = 0,
		CANVAS_OCCLUDER_POLYGON_CULL_CLOCKWISE = 1,
		CANVAS_OCCLUDER_POLYGON_CULL_COUNTER_CLOCKWISE = 2,
	};
	enum InstanceFlags {
		INSTANCE_FLAG_USE_BAKED_LIGHT = 0,
		INSTANCE_FLAG_DRAW_NEXT_FRAME_IF_VISIBLE = 1,
		INSTANCE_FLAG_MAX = 2,
	};
	enum ViewportMSAA {
		VIEWPORT_MSAA_DISABLED = 0,
		VIEWPORT_MSAA_2X = 1,
		VIEWPORT_MSAA_4X = 2,
		VIEWPORT_MSAA_8X = 3,
		VIEWPORT_MSAA_16X = 4,
		VIEWPORT_MSAA_EXT_2X = 5,
		VIEWPORT_MSAA_EXT_4X = 6,
	};
	enum LightType {
		LIGHT_DIRECTIONAL = 0,
		LIGHT_OMNI = 1,
		LIGHT_SPOT = 2,
	};
	enum CubeMapSide {
		CUBEMAP_LEFT = 0,
		CUBEMAP_RIGHT = 1,
		CUBEMAP_BOTTOM = 2,
		CUBEMAP_TOP = 3,
		CUBEMAP_FRONT = 4,
		CUBEMAP_BACK = 5,
	};

	// constants
	const static int ARRAY_WEIGHTS_SIZE = 4;
	const static int CANVAS_ITEM_Z_MAX = 4096;
	const static int CANVAS_ITEM_Z_MIN = -4096;
	const static int MATERIAL_RENDER_PRIORITY_MAX = 127;
	const static int MATERIAL_RENDER_PRIORITY_MIN = -128;
	const static int MAX_CURSORS = 8;
	const static int MAX_GLOW_LEVELS = 7;
	const static int NO_INDEX_ARRAY = -1;

	// methods
	void black_bars_set_images(const rid left, const rid top, const rid right, const rid bottom);
	void black_bars_set_margins(const int64_t left, const int64_t top, const int64_t right, const int64_t bottom);
	rid camera_create();
	void camera_set_cull_mask(const rid camera_, const int64_t layers);
	void camera_set_environment(const rid camera_, const rid env);
	void camera_set_frustum(const rid camera_, const real_t size, const vector2 offset, const real_t z_near, const real_t z_far);
	void camera_set_orthogonal(const rid camera_, const real_t size, const real_t z_near, const real_t z_far);
	void camera_set_perspective(const rid camera_, const real_t fovy_degrees, const real_t z_near, const real_t z_far);
	void camera_set_transform(const rid camera_, const transform transform_);
	void camera_set_use_vertical_aspect(const rid camera_, const bool enable);
	rid canvas_create();
	void canvas_item_add_circle(const rid item, const vector2 pos, const real_t radius, const color color_);
	void canvas_item_add_clip_ignore(const rid item, const bool ignore);
	void canvas_item_add_line(const rid item, const vector2 from, const vector2 to, const color color_, const real_t width = 1, const bool antialiased = false);
	void canvas_item_add_mesh(const rid item, const rid mesh_, const transform2d transform_ = transform2d(), const color modulate = color(1,1,1,1), const rid texture_ = rid(), const rid normal_map = rid());
	void canvas_item_add_multimesh(const rid item, const rid mesh_, const rid texture_, const rid normal_map = rid());
	void canvas_item_add_nine_patch(const rid item, const rect2 rect, const rect2 source, const rid texture_, const vector2 topleft, const vector2 bottomright, const int64_t x_axis_mode = 0, const int64_t y_axis_mode = 0, const bool draw_center = true, const color modulate = color(1,1,1,1), const rid normal_map = rid());
	void canvas_item_add_particles(const rid item, const rid particles_, const rid texture_, const rid normal_map);
	void canvas_item_add_polygon(const rid item, const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs = pool_vector2_array(), const rid texture_ = rid(), const rid normal_map = rid(), const bool antialiased = false);
	void canvas_item_add_polyline(const rid item, const pool_vector2_array points, const pool_color_array colors, const real_t width = 1, const bool antialiased = false);
	void canvas_item_add_primitive(const rid item, const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs, const rid texture_, const real_t width = 1, const rid normal_map = rid());
	void canvas_item_add_rect(const rid item, const rect2 rect, const color color_);
	void canvas_item_add_set_transform(const rid item, const transform2d transform_);
	void canvas_item_add_texture_rect(const rid item, const rect2 rect, const rid texture_, const bool tile = false, const color modulate = color(1,1,1,1), const bool transpose = false, const rid normal_map = rid());
	void canvas_item_add_texture_rect_region(const rid item, const rect2 rect, const rid texture_, const rect2 src_rect, const color modulate = color(1,1,1,1), const bool transpose = false, const rid normal_map = rid(), const bool clip_uv = true);
	void canvas_item_add_triangle_array(const rid item, const pool_int_array indices, const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs = pool_vector2_array(), const pool_int_array bones = pool_int_array(), const pool_real_array weights = pool_real_array(), const rid texture_ = rid(), const int64_t count = -1, const rid normal_map = rid(), const bool antialiased = false, const bool antialiasing_use_indices = false);
	void canvas_item_clear(const rid item);
	rid canvas_item_create();
	void canvas_item_set_clip(const rid item, const bool clip);
	void canvas_item_set_copy_to_backbuffer(const rid item, const bool enabled, const rect2 rect);
	void canvas_item_set_custom_rect(const rid item, const bool use_custom_rect, const rect2 rect = rect2(0, 0, 0, 0));
	void canvas_item_set_distance_field_mode(const rid item, const bool enabled);
	void canvas_item_set_draw_behind_parent(const rid item, const bool enabled);
	void canvas_item_set_draw_index(const rid item, const int64_t index);
	void canvas_item_set_light_mask(const rid item, const int64_t mask);
	void canvas_item_set_material(const rid item, const rid material_);
	void canvas_item_set_modulate(const rid item, const color color_);
	void canvas_item_set_parent(const rid item, const rid parent);
	void canvas_item_set_self_modulate(const rid item, const color color_);
	void canvas_item_set_sort_children_by_y(const rid item, const bool enabled);
	void canvas_item_set_transform(const rid item, const transform2d transform_);
	void canvas_item_set_use_parent_material(const rid item, const bool enabled);
	void canvas_item_set_visible(const rid item, const bool visible);
	void canvas_item_set_z_as_relative_to_parent(const rid item, const bool enabled);
	void canvas_item_set_z_index(const rid item, const int64_t z_index);
	void canvas_light_attach_to_canvas(const rid light_, const rid canvas);
	rid canvas_light_create();
	void canvas_light_occluder_attach_to_canvas(const rid occluder_, const rid canvas);
	rid canvas_light_occluder_create();
	void canvas_light_occluder_set_enabled(const rid occluder_, const bool enabled);
	void canvas_light_occluder_set_light_mask(const rid occluder_, const int64_t mask);
	void canvas_light_occluder_set_polygon(const rid occluder_, const rid polygon);
	void canvas_light_occluder_set_transform(const rid occluder_, const transform2d transform_);
	void canvas_light_set_color(const rid light_, const color color_);
	void canvas_light_set_enabled(const rid light_, const bool enabled);
	void canvas_light_set_energy(const rid light_, const real_t energy);
	void canvas_light_set_height(const rid light_, const real_t height);
	void canvas_light_set_item_cull_mask(const rid light_, const int64_t mask);
	void canvas_light_set_item_shadow_cull_mask(const rid light_, const int64_t mask);
	void canvas_light_set_layer_range(const rid light_, const int64_t min_layer, const int64_t max_layer);
	void canvas_light_set_mode(const rid light_, const int64_t mode);
	void canvas_light_set_scale(const rid light_, const real_t scale);
	void canvas_light_set_shadow_buffer_size(const rid light_, const int64_t size);
	void canvas_light_set_shadow_color(const rid light_, const color color_);
	void canvas_light_set_shadow_enabled(const rid light_, const bool enabled);
	void canvas_light_set_shadow_filter(const rid light_, const int64_t filter);
	void canvas_light_set_shadow_gradient_length(const rid light_, const real_t length);
	void canvas_light_set_shadow_smooth(const rid light_, const real_t smooth);
	void canvas_light_set_texture(const rid light_, const rid texture_);
	void canvas_light_set_texture_offset(const rid light_, const vector2 offset);
	void canvas_light_set_transform(const rid light_, const transform2d transform_);
	void canvas_light_set_z_range(const rid light_, const int64_t min_z, const int64_t max_z);
	rid canvas_occluder_polygon_create();
	void canvas_occluder_polygon_set_cull_mode(const rid occluder_polygon, const int64_t mode);
	void canvas_occluder_polygon_set_shape(const rid occluder_polygon, const pool_vector2_array shape_, const bool closed);
	void canvas_occluder_polygon_set_shape_as_lines(const rid occluder_polygon, const pool_vector2_array shape_);
	void canvas_set_item_mirroring(const rid canvas, const rid item, const vector2 mirroring);
	void canvas_set_modulate(const rid canvas, const color color_);
	rid directional_light_create();
	void draw(const bool swap_buffers = true, const real_t frame_step = 0);
	rid environment_create();
	void environment_set_adjustment(const rid env, const bool enable, const real_t brightness, const real_t contrast, const real_t saturation, const rid ramp);
	void environment_set_ambient_light(const rid env, const color color_, const real_t energy = 1, const real_t sky_contibution = 0);
	void environment_set_background(const rid env, const int64_t bg);
	void environment_set_bg_color(const rid env, const color color_);
	void environment_set_bg_energy(const rid env, const real_t energy);
	void environment_set_canvas_max_layer(const rid env, const int64_t max_layer);
	void environment_set_dof_blur_far(const rid env, const bool enable, const real_t distance, const real_t transition, const real_t far_amount, const int64_t quality);
	void environment_set_dof_blur_near(const rid env, const bool enable, const real_t distance, const real_t transition, const real_t far_amount, const int64_t quality);
	void environment_set_fog(const rid env, const bool enable, const color color_, const color sun_color, const real_t sun_amount);
	void environment_set_fog_depth(const rid env, const bool enable, const real_t depth_begin, const real_t depth_end, const real_t depth_curve, const bool transmit, const real_t transmit_curve);
	void environment_set_fog_height(const rid env, const bool enable, const real_t min_height, const real_t max_height, const real_t height_curve);
	void environment_set_glow(const rid env, const bool enable, const int64_t level_flags, const real_t intensity, const real_t strength, const real_t bloom_threshold, const int64_t blend_mode, const real_t hdr_bleed_threshold, const real_t hdr_bleed_scale, const real_t hdr_luminance_cap, const bool bicubic_upscale, const bool high_quality);
	void environment_set_sky(const rid env, const rid sky_);
	void environment_set_sky_custom_fov(const rid env, const real_t scale);
	void environment_set_sky_orientation(const rid env, const basis orientation);
	void environment_set_ssao(const rid env, const bool enable, const real_t radius, const real_t intensity, const real_t radius2, const real_t intensity2, const real_t bias, const real_t light_affect, const real_t ao_channel_affect, const color color_, const int64_t quality, const int64_t blur, const real_t bilateral_sharpness);
	void environment_set_ssr(const rid env, const bool enable, const int64_t max_steps, const real_t fade_in, const real_t fade_out, const real_t depth_tolerance, const bool roughness);
	void environment_set_tonemap(const rid env, const int64_t tone_mapper, const real_t exposure, const real_t white, const bool auto_exposure, const real_t min_luminance, const real_t max_luminance, const real_t auto_exp_speed, const real_t auto_exp_grey);
	void finish();
	void force_draw(const bool swap_buffers = true, const real_t frame_step = 0);
	void force_sync();
	void free_rid(const rid rid_);
	int64_t get_render_info(const int64_t info);
	rid get_test_cube();
	rid get_test_texture();
	string get_video_adapter_name() const;
	string get_video_adapter_vendor() const;
	rid get_white_texture();
	rid gi_probe_create();
	real_t gi_probe_get_bias(const rid probe) const;
	aabb gi_probe_get_bounds(const rid probe) const;
	real_t gi_probe_get_cell_size(const rid probe) const;
	pool_int_array gi_probe_get_dynamic_data(const rid probe) const;
	int64_t gi_probe_get_dynamic_range(const rid probe) const;
	real_t gi_probe_get_energy(const rid probe) const;
	real_t gi_probe_get_normal_bias(const rid probe) const;
	real_t gi_probe_get_propagation(const rid probe) const;
	transform gi_probe_get_to_cell_xform(const rid probe) const;
	bool gi_probe_is_compressed(const rid probe) const;
	bool gi_probe_is_interior(const rid probe) const;
	void gi_probe_set_bias(const rid probe, const real_t bias);
	void gi_probe_set_bounds(const rid probe, const aabb bounds);
	void gi_probe_set_cell_size(const rid probe, const real_t range_);
	void gi_probe_set_compress(const rid probe, const bool enable);
	void gi_probe_set_dynamic_data(const rid probe, const pool_int_array data);
	void gi_probe_set_dynamic_range(const rid probe, const int64_t range_);
	void gi_probe_set_energy(const rid probe, const real_t energy);
	void gi_probe_set_interior(const rid probe, const bool enable);
	void gi_probe_set_normal_bias(const rid probe, const real_t bias);
	void gi_probe_set_propagation(const rid probe, const real_t propagation);
	void gi_probe_set_to_cell_xform(const rid probe, const transform xform);
	bool has_changed(const int64_t queried_priority = 0) const;
	bool has_feature(const int64_t feature) const;
	bool has_os_feature(const string feature) const;
	void immediate_begin(const rid immediate, const int64_t primitive, const rid texture_ = rid());
	void immediate_clear(const rid immediate);
	void immediate_color(const rid immediate, const color color_);
	rid immediate_create();
	void immediate_end(const rid immediate);
	rid immediate_get_material(const rid immediate) const;
	void immediate_normal(const rid immediate, const vector3 normal);
	void immediate_set_material(const rid immediate, const rid material_);
	void immediate_tangent(const rid immediate, const plane tangent);
	void immediate_uv(const rid immediate, const vector2 tex_uv);
	void immediate_uv2(const rid immediate, const vector2 tex_uv);
	void immediate_vertex(const rid immediate, const vector3 vertex);
	void immediate_vertex_2d(const rid immediate, const vector2 vertex);
	void init();
	void instance_attach_object_instance_id(const rid instance, const int64_t id);
	void instance_attach_skeleton(const rid instance, const rid skeleton_);
	rid instance_create();
	rid instance_create2(const rid base, const rid scenario);
	void instance_geometry_set_as_instance_lod(const rid instance, const rid as_lod_of_instance);
	void instance_geometry_set_cast_shadows_setting(const rid instance, const int64_t shadow_casting_setting);
	void instance_geometry_set_draw_range(const rid instance, const real_t min, const real_t max, const real_t min_margin, const real_t max_margin);
	void instance_geometry_set_flag(const rid instance, const int64_t flag, const bool enabled);
	void instance_geometry_set_material_overlay(const rid instance, const rid material_);
	void instance_geometry_set_material_override(const rid instance, const rid material_);
	void instance_set_base(const rid instance, const rid base);
	void instance_set_blend_shape_weight(const rid instance, const int64_t shape_, const real_t weight);
	void instance_set_custom_aabb(const rid instance, const aabb aabb_);
	void instance_set_exterior(const rid instance, const bool enabled);
	void instance_set_extra_visibility_margin(const rid instance, const real_t margin);
	void instance_set_layer_mask(const rid instance, const int64_t mask);
	void instance_set_scenario(const rid instance, const rid scenario);
	void instance_set_surface_material(const rid instance, const int64_t surface, const rid material_);
	void instance_set_transform(const rid instance, const transform transform_);
	void instance_set_use_lightmap(const rid instance, const rid lightmap_instance, const rid lightmap, const int64_t lightmap_slice = -1, const rect2 lightmap_uv_rect = rect2(0, 0, 1, 1));
	void instance_set_visible(const rid instance, const bool visible);
	array instances_cull_aabb(const aabb aabb_, const rid scenario = rid()) const;
	array instances_cull_convex(const array convex, const rid scenario = rid()) const;
	array instances_cull_ray(const vector3 from, const vector3 to, const rid scenario = rid()) const;
	bool is_render_loop_enabled() const;
	void light_directional_set_blend_splits(const rid light_, const bool enable);
	void light_directional_set_shadow_depth_range_mode(const rid light_, const int64_t range_mode);
	void light_directional_set_shadow_mode(const rid light_, const int64_t mode);
	void light_omni_set_shadow_detail(const rid light_, const int64_t detail);
	void light_omni_set_shadow_mode(const rid light_, const int64_t mode);
	void light_set_bake_mode(const rid light_, const int64_t bake_mode);
	void light_set_color(const rid light_, const color color_);
	void light_set_cull_mask(const rid light_, const int64_t mask);
	void light_set_negative(const rid light_, const bool enable);
	void light_set_param(const rid light_, const int64_t param, const real_t value);
	void light_set_projector(const rid light_, const rid texture_);
	void light_set_reverse_cull_face_mode(const rid light_, const bool enabled);
	void light_set_shadow(const rid light_, const bool enabled);
	void light_set_shadow_color(const rid light_, const color color_);
	void light_set_use_gi(const rid light_, const bool enabled);
	rid lightmap_capture_create();
	aabb lightmap_capture_get_bounds(const rid capture) const;
	real_t lightmap_capture_get_energy(const rid capture) const;
	pool_byte_array lightmap_capture_get_octree(const rid capture) const;
	int64_t lightmap_capture_get_octree_cell_subdiv(const rid capture) const;
	transform lightmap_capture_get_octree_cell_transform(const rid capture) const;
	bool lightmap_capture_is_interior(const rid capture) const;
	void lightmap_capture_set_bounds(const rid capture, const aabb bounds);
	void lightmap_capture_set_energy(const rid capture, const real_t energy);
	void lightmap_capture_set_interior(const rid capture, const bool interior);
	void lightmap_capture_set_octree(const rid capture, const pool_byte_array octree);
	void lightmap_capture_set_octree_cell_subdiv(const rid capture, const int64_t subdiv);
	void lightmap_capture_set_octree_cell_transform(const rid capture, const transform xform);
	rid make_sphere_mesh(const int64_t latitudes, const int64_t longitudes, const real_t radius);
	rid material_create();
	variant material_get_param(const rid material_, const string parameter) const;
	variant material_get_param_default(const rid material_, const string parameter) const;
	rid material_get_shader(const rid shader_material_) const;
	void material_set_line_width(const rid material_, const real_t width);
	void material_set_next_pass(const rid material_, const rid next_material);
	void material_set_param(const rid material_, const string parameter, const variant value);
	void material_set_render_priority(const rid material_, const int64_t priority);
	void material_set_shader(const rid shader_material_, const rid shader_);
	void mesh_add_surface_from_arrays(const rid mesh_, const int64_t primitive, const array arrays, const array blend_shapes = array(), const int64_t compress_format = 2194432);
	void mesh_clear(const rid mesh_);
	rid mesh_create();
	int64_t mesh_get_blend_shape_count(const rid mesh_) const;
	visual_server::BlendShapeMode mesh_get_blend_shape_mode(const rid mesh_) const;
	aabb mesh_get_custom_aabb(const rid mesh_) const;
	int64_t mesh_get_surface_count(const rid mesh_) const;
	void mesh_remove_surface(const rid mesh_, const int64_t index);
	void mesh_set_blend_shape_count(const rid mesh_, const int64_t amount);
	void mesh_set_blend_shape_mode(const rid mesh_, const int64_t mode);
	void mesh_set_custom_aabb(const rid mesh_, const aabb aabb_);
	aabb mesh_surface_get_aabb(const rid mesh_, const int64_t surface) const;
	pool_byte_array mesh_surface_get_array(const rid mesh_, const int64_t surface) const;
	int64_t mesh_surface_get_array_index_len(const rid mesh_, const int64_t surface) const;
	int64_t mesh_surface_get_array_len(const rid mesh_, const int64_t surface) const;
	array mesh_surface_get_arrays(const rid mesh_, const int64_t surface) const;
	array mesh_surface_get_blend_shape_arrays(const rid mesh_, const int64_t surface) const;
	int64_t mesh_surface_get_format(const rid mesh_, const int64_t surface) const;
	int64_t mesh_surface_get_format_offset(const int64_t format, const int64_t vertex_len, const int64_t index_len, const int64_t array_index) const;
	int64_t mesh_surface_get_format_stride(const int64_t format, const int64_t vertex_len, const int64_t index_len, const int64_t array_index) const;
	pool_byte_array mesh_surface_get_index_array(const rid mesh_, const int64_t surface) const;
	rid mesh_surface_get_material(const rid mesh_, const int64_t surface) const;
	visual_server::PrimitiveType mesh_surface_get_primitive_type(const rid mesh_, const int64_t surface) const;
	array mesh_surface_get_skeleton_aabb(const rid mesh_, const int64_t surface) const;
	void mesh_surface_set_material(const rid mesh_, const int64_t surface, const rid material_);
	void mesh_surface_update_region(const rid mesh_, const int64_t surface, const int64_t offset, const pool_byte_array data);
	void multimesh_allocate(const rid multimesh, const int64_t instances, const int64_t transform_format, const int64_t color_format, const int64_t custom_data_format = 0);
	rid multimesh_create();
	aabb multimesh_get_aabb(const rid multimesh) const;
	int64_t multimesh_get_instance_count(const rid multimesh) const;
	rid multimesh_get_mesh(const rid multimesh) const;
	int64_t multimesh_get_visible_instances(const rid multimesh) const;
	color multimesh_instance_get_color(const rid multimesh, const int64_t index) const;
	color multimesh_instance_get_custom_data(const rid multimesh, const int64_t index) const;
	transform multimesh_instance_get_transform(const rid multimesh, const int64_t index) const;
	transform2d multimesh_instance_get_transform_2d(const rid multimesh, const int64_t index) const;
	void multimesh_instance_set_color(const rid multimesh, const int64_t index, const color color_);
	void multimesh_instance_set_custom_data(const rid multimesh, const int64_t index, const color custom_data);
	void multimesh_instance_set_transform(const rid multimesh, const int64_t index, const transform transform_);
	void multimesh_instance_set_transform_2d(const rid multimesh, const int64_t index, const transform2d transform_);
	void multimesh_set_as_bulk_array(const rid multimesh, const pool_real_array array_);
	void multimesh_set_mesh(const rid multimesh, const rid mesh_);
	void multimesh_set_visible_instances(const rid multimesh, const int64_t visible);
	rid omni_light_create();
	rid particles_create();
	aabb particles_get_current_aabb(const rid particles_);
	bool particles_get_emitting(const rid particles_);
	bool particles_is_inactive(const rid particles_);
	void particles_request_process(const rid particles_);
	void particles_restart(const rid particles_);
	void particles_set_amount(const rid particles_, const int64_t amount);
	void particles_set_custom_aabb(const rid particles_, const aabb aabb_);
	void particles_set_draw_order(const rid particles_, const int64_t order);
	void particles_set_draw_pass_mesh(const rid particles_, const int64_t pass, const rid mesh_);
	void particles_set_draw_passes(const rid particles_, const int64_t count);
	void particles_set_emission_transform(const rid particles_, const transform transform_);
	void particles_set_emitting(const rid particles_, const bool emitting);
	void particles_set_explosiveness_ratio(const rid particles_, const real_t ratio);
	void particles_set_fixed_fps(const rid particles_, const int64_t fps);
	void particles_set_fractional_delta(const rid particles_, const bool enable);
	void particles_set_lifetime(const rid particles_, const real_t lifetime);
	void particles_set_one_shot(const rid particles_, const bool one_shot);
	void particles_set_pre_process_time(const rid particles_, const real_t time_);
	void particles_set_process_material(const rid particles_, const rid material_);
	void particles_set_randomness_ratio(const rid particles_, const real_t ratio);
	void particles_set_speed_scale(const rid particles_, const real_t scale);
	void particles_set_use_local_coordinates(const rid particles_, const bool enable);
	rid reflection_probe_create();
	void reflection_probe_set_as_interior(const rid probe, const bool enable);
	void reflection_probe_set_cull_mask(const rid probe, const int64_t layers);
	void reflection_probe_set_enable_box_projection(const rid probe, const bool enable);
	void reflection_probe_set_enable_shadows(const rid probe, const bool enable);
	void reflection_probe_set_extents(const rid probe, const vector3 extents);
	void reflection_probe_set_intensity(const rid probe, const real_t intensity);
	void reflection_probe_set_interior_ambient(const rid probe, const color color_);
	void reflection_probe_set_interior_ambient_energy(const rid probe, const real_t energy);
	void reflection_probe_set_interior_ambient_probe_contribution(const rid probe, const real_t contrib);
	void reflection_probe_set_max_distance(const rid probe, const real_t distance);
	void reflection_probe_set_origin_offset(const rid probe, const vector3 offset);
	void reflection_probe_set_update_mode(const rid probe, const int64_t mode);
	void request_frame_drawn_callback(const object *where, const string method, const variant userdata);
	rid scenario_create();
	void scenario_set_debug(const rid scenario, const int64_t debug_mode);
	void scenario_set_environment(const rid scenario, const rid environment_);
	void scenario_set_fallback_environment(const rid scenario, const rid environment_);
	void scenario_set_reflection_atlas_size(const rid scenario, const int64_t size, const int64_t subdiv);
	void set_boot_image(const ref<image> image_, const color color_, const bool scale, const bool use_filter = true);
	void set_debug_generate_wireframes(const bool generate);
	void set_default_clear_color(const color color_);
	void set_render_loop_enabled(const bool enabled);
	void set_shader_async_hidden_forbidden(const bool forbidden);
	void set_shader_time_scale(const real_t scale);
	void set_use_occlusion_culling(const bool enable);
	rid shader_create();
	string shader_get_code(const rid shader_) const;
	rid shader_get_default_texture_param(const rid shader_, const string name) const;
	array shader_get_param_list(const rid shader_) const;
	void shader_set_code(const rid shader_, const string code);
	void shader_set_default_texture_param(const rid shader_, const string name, const rid texture_);
	void skeleton_allocate(const rid skeleton_, const int64_t bones, const bool is_2d_skeleton = false);
	transform skeleton_bone_get_transform(const rid skeleton_, const int64_t bone) const;
	transform2d skeleton_bone_get_transform_2d(const rid skeleton_, const int64_t bone) const;
	void skeleton_bone_set_transform(const rid skeleton_, const int64_t bone, const transform transform_);
	void skeleton_bone_set_transform_2d(const rid skeleton_, const int64_t bone, const transform2d transform_);
	rid skeleton_create();
	int64_t skeleton_get_bone_count(const rid skeleton_) const;
	rid sky_create();
	void sky_set_texture(const rid sky_, const rid cube_map_, const int64_t radiance_size);
	rid spot_light_create();
	void sync();
	void texture_allocate(const rid texture_, const int64_t width, const int64_t height, const int64_t depth_3d, const int64_t format, const int64_t type, const int64_t flags = 7);
	void texture_bind(const rid texture_, const int64_t number);
	rid texture_create();
	rid texture_create_from_image(const ref<image> image_, const int64_t flags = 7);
	array texture_debug_usage();
	ref<image> texture_get_data(const rid texture_, const int64_t cube_side = 0) const;
	int64_t texture_get_depth(const rid texture_) const;
	int64_t texture_get_flags(const rid texture_) const;
	image::Format texture_get_format(const rid texture_) const;
	int64_t texture_get_height(const rid texture_) const;
	string texture_get_path(const rid texture_) const;
	int64_t texture_get_texid(const rid texture_) const;
	visual_server::TextureType texture_get_type(const rid texture_) const;
	int64_t texture_get_width(const rid texture_) const;
	void texture_set_data(const rid texture_, const ref<image> image_, const int64_t layer = 0);
	void texture_set_data_partial(const rid texture_, const ref<image> image_, const int64_t src_x, const int64_t src_y, const int64_t src_w, const int64_t src_h, const int64_t dst_x, const int64_t dst_y, const int64_t dst_mip, const int64_t layer = 0);
	void texture_set_flags(const rid texture_, const int64_t flags);
	void texture_set_path(const rid texture_, const string path_);
	void texture_set_proxy(const rid proxy, const rid base);
	void texture_set_shrink_all_x2_on_set_data(const bool shrink);
	void texture_set_size_override(const rid texture_, const int64_t width, const int64_t height, const int64_t depth);
	void textures_keep_original(const bool enable);
	void viewport_attach_camera(const rid viewport_, const rid camera_);
	void viewport_attach_canvas(const rid viewport_, const rid canvas);
	void viewport_attach_to_screen(const rid viewport_, const rect2 rect = rect2(0, 0, 0, 0), const int64_t screen = 0);
	rid viewport_create();
	void viewport_detach(const rid viewport_);
	int64_t viewport_get_render_info(const rid viewport_, const int64_t info);
	rid viewport_get_texture(const rid viewport_) const;
	void viewport_remove_canvas(const rid viewport_, const rid canvas);
	void viewport_set_active(const rid viewport_, const bool active);
	void viewport_set_canvas_stacking(const rid viewport_, const rid canvas, const int64_t layer, const int64_t sublayer);
	void viewport_set_canvas_transform(const rid viewport_, const rid canvas, const transform2d offset);
	void viewport_set_clear_mode(const rid viewport_, const int64_t clear_mode);
	void viewport_set_debug_draw(const rid viewport_, const int64_t draw);
	void viewport_set_disable_3d(const rid viewport_, const bool disabled);
	void viewport_set_disable_environment(const rid viewport_, const bool disabled);
	void viewport_set_global_canvas_transform(const rid viewport_, const transform2d transform_);
	void viewport_set_hdr(const rid viewport_, const bool enabled);
	void viewport_set_hide_canvas(const rid viewport_, const bool hidden);
	void viewport_set_hide_scenario(const rid viewport_, const bool hidden);
	void viewport_set_msaa(const rid viewport_, const int64_t msaa);
	void viewport_set_parent_viewport(const rid viewport_, const rid parent_viewport);
	void viewport_set_render_direct_to_screen(const rid viewport_, const bool enabled);
	void viewport_set_scenario(const rid viewport_, const rid scenario);
	void viewport_set_shadow_atlas_quadrant_subdivision(const rid viewport_, const int64_t quadrant, const int64_t subdivision);
	void viewport_set_shadow_atlas_size(const rid viewport_, const int64_t size);
	void viewport_set_sharpen_intensity(const rid viewport_, const real_t intensity);
	void viewport_set_size(const rid viewport_, const int64_t width, const int64_t height);
	void viewport_set_transparent_background(const rid viewport_, const bool enabled);
	void viewport_set_update_mode(const rid viewport_, const int64_t update_mode);
	void viewport_set_usage(const rid viewport_, const int64_t usage);
	void viewport_set_use_32_bpc_depth(const rid viewport_, const bool enabled);
	void viewport_set_use_arvr(const rid viewport_, const bool use_arvr);
	void viewport_set_use_debanding(const rid viewport_, const bool debanding);
	void viewport_set_use_fxaa(const rid viewport_, const bool fxaa);
	void viewport_set_vflip(const rid viewport_, const bool enabled);

};

}

#endif