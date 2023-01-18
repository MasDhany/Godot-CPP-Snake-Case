#include "visual_server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"
#include "object.hpp"


namespace gd {


visual_server *visual_server::_singleton = NULL;


visual_server::visual_server() {
	_owner = gd::api->godot_global_get_singleton((char *) "VisualServer");
}


visual_server::___method_bindings visual_server::___mb = {};

void *visual_server::_detail_class_tag = nullptr;

void visual_server::___init_method_bindings() {
	___mb.mb_black_bars_set_images = gd::api->godot_method_bind_get_method("VisualServer", "black_bars_set_images");
	___mb.mb_black_bars_set_margins = gd::api->godot_method_bind_get_method("VisualServer", "black_bars_set_margins");
	___mb.mb_camera_create = gd::api->godot_method_bind_get_method("VisualServer", "camera_create");
	___mb.mb_camera_set_cull_mask = gd::api->godot_method_bind_get_method("VisualServer", "camera_set_cull_mask");
	___mb.mb_camera_set_environment = gd::api->godot_method_bind_get_method("VisualServer", "camera_set_environment");
	___mb.mb_camera_set_frustum = gd::api->godot_method_bind_get_method("VisualServer", "camera_set_frustum");
	___mb.mb_camera_set_orthogonal = gd::api->godot_method_bind_get_method("VisualServer", "camera_set_orthogonal");
	___mb.mb_camera_set_perspective = gd::api->godot_method_bind_get_method("VisualServer", "camera_set_perspective");
	___mb.mb_camera_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "camera_set_transform");
	___mb.mb_camera_set_use_vertical_aspect = gd::api->godot_method_bind_get_method("VisualServer", "camera_set_use_vertical_aspect");
	___mb.mb_canvas_create = gd::api->godot_method_bind_get_method("VisualServer", "canvas_create");
	___mb.mb_canvas_item_add_circle = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_circle");
	___mb.mb_canvas_item_add_clip_ignore = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_clip_ignore");
	___mb.mb_canvas_item_add_line = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_line");
	___mb.mb_canvas_item_add_mesh = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_mesh");
	___mb.mb_canvas_item_add_multimesh = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_multimesh");
	___mb.mb_canvas_item_add_nine_patch = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_nine_patch");
	___mb.mb_canvas_item_add_particles = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_particles");
	___mb.mb_canvas_item_add_polygon = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_polygon");
	___mb.mb_canvas_item_add_polyline = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_polyline");
	___mb.mb_canvas_item_add_primitive = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_primitive");
	___mb.mb_canvas_item_add_rect = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_rect");
	___mb.mb_canvas_item_add_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_set_transform");
	___mb.mb_canvas_item_add_texture_rect = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_texture_rect");
	___mb.mb_canvas_item_add_texture_rect_region = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_texture_rect_region");
	___mb.mb_canvas_item_add_triangle_array = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_add_triangle_array");
	___mb.mb_canvas_item_clear = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_clear");
	___mb.mb_canvas_item_create = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_create");
	___mb.mb_canvas_item_set_clip = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_clip");
	___mb.mb_canvas_item_set_copy_to_backbuffer = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_copy_to_backbuffer");
	___mb.mb_canvas_item_set_custom_rect = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_custom_rect");
	___mb.mb_canvas_item_set_distance_field_mode = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_distance_field_mode");
	___mb.mb_canvas_item_set_draw_behind_parent = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_draw_behind_parent");
	___mb.mb_canvas_item_set_draw_index = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_draw_index");
	___mb.mb_canvas_item_set_light_mask = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_light_mask");
	___mb.mb_canvas_item_set_material = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_material");
	___mb.mb_canvas_item_set_modulate = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_modulate");
	___mb.mb_canvas_item_set_parent = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_parent");
	___mb.mb_canvas_item_set_self_modulate = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_self_modulate");
	___mb.mb_canvas_item_set_sort_children_by_y = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_sort_children_by_y");
	___mb.mb_canvas_item_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_transform");
	___mb.mb_canvas_item_set_use_parent_material = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_use_parent_material");
	___mb.mb_canvas_item_set_visible = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_visible");
	___mb.mb_canvas_item_set_z_as_relative_to_parent = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_z_as_relative_to_parent");
	___mb.mb_canvas_item_set_z_index = gd::api->godot_method_bind_get_method("VisualServer", "canvas_item_set_z_index");
	___mb.mb_canvas_light_attach_to_canvas = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_attach_to_canvas");
	___mb.mb_canvas_light_create = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_create");
	___mb.mb_canvas_light_occluder_attach_to_canvas = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_occluder_attach_to_canvas");
	___mb.mb_canvas_light_occluder_create = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_occluder_create");
	___mb.mb_canvas_light_occluder_set_enabled = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_occluder_set_enabled");
	___mb.mb_canvas_light_occluder_set_light_mask = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_occluder_set_light_mask");
	___mb.mb_canvas_light_occluder_set_polygon = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_occluder_set_polygon");
	___mb.mb_canvas_light_occluder_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_occluder_set_transform");
	___mb.mb_canvas_light_set_color = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_color");
	___mb.mb_canvas_light_set_enabled = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_enabled");
	___mb.mb_canvas_light_set_energy = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_energy");
	___mb.mb_canvas_light_set_height = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_height");
	___mb.mb_canvas_light_set_item_cull_mask = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_item_cull_mask");
	___mb.mb_canvas_light_set_item_shadow_cull_mask = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_item_shadow_cull_mask");
	___mb.mb_canvas_light_set_layer_range = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_layer_range");
	___mb.mb_canvas_light_set_mode = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_mode");
	___mb.mb_canvas_light_set_scale = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_scale");
	___mb.mb_canvas_light_set_shadow_buffer_size = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_shadow_buffer_size");
	___mb.mb_canvas_light_set_shadow_color = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_shadow_color");
	___mb.mb_canvas_light_set_shadow_enabled = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_shadow_enabled");
	___mb.mb_canvas_light_set_shadow_filter = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_shadow_filter");
	___mb.mb_canvas_light_set_shadow_gradient_length = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_shadow_gradient_length");
	___mb.mb_canvas_light_set_shadow_smooth = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_shadow_smooth");
	___mb.mb_canvas_light_set_texture = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_texture");
	___mb.mb_canvas_light_set_texture_offset = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_texture_offset");
	___mb.mb_canvas_light_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_transform");
	___mb.mb_canvas_light_set_z_range = gd::api->godot_method_bind_get_method("VisualServer", "canvas_light_set_z_range");
	___mb.mb_canvas_occluder_polygon_create = gd::api->godot_method_bind_get_method("VisualServer", "canvas_occluder_polygon_create");
	___mb.mb_canvas_occluder_polygon_set_cull_mode = gd::api->godot_method_bind_get_method("VisualServer", "canvas_occluder_polygon_set_cull_mode");
	___mb.mb_canvas_occluder_polygon_set_shape = gd::api->godot_method_bind_get_method("VisualServer", "canvas_occluder_polygon_set_shape");
	___mb.mb_canvas_occluder_polygon_set_shape_as_lines = gd::api->godot_method_bind_get_method("VisualServer", "canvas_occluder_polygon_set_shape_as_lines");
	___mb.mb_canvas_set_item_mirroring = gd::api->godot_method_bind_get_method("VisualServer", "canvas_set_item_mirroring");
	___mb.mb_canvas_set_modulate = gd::api->godot_method_bind_get_method("VisualServer", "canvas_set_modulate");
	___mb.mb_directional_light_create = gd::api->godot_method_bind_get_method("VisualServer", "directional_light_create");
	___mb.mb_draw = gd::api->godot_method_bind_get_method("VisualServer", "draw");
	___mb.mb_environment_create = gd::api->godot_method_bind_get_method("VisualServer", "environment_create");
	___mb.mb_environment_set_adjustment = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_adjustment");
	___mb.mb_environment_set_ambient_light = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_ambient_light");
	___mb.mb_environment_set_background = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_background");
	___mb.mb_environment_set_bg_color = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_bg_color");
	___mb.mb_environment_set_bg_energy = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_bg_energy");
	___mb.mb_environment_set_canvas_max_layer = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_canvas_max_layer");
	___mb.mb_environment_set_dof_blur_far = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_dof_blur_far");
	___mb.mb_environment_set_dof_blur_near = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_dof_blur_near");
	___mb.mb_environment_set_fog = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_fog");
	___mb.mb_environment_set_fog_depth = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_fog_depth");
	___mb.mb_environment_set_fog_height = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_fog_height");
	___mb.mb_environment_set_glow = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_glow");
	___mb.mb_environment_set_sky = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_sky");
	___mb.mb_environment_set_sky_custom_fov = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_sky_custom_fov");
	___mb.mb_environment_set_sky_orientation = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_sky_orientation");
	___mb.mb_environment_set_ssao = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_ssao");
	___mb.mb_environment_set_ssr = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_ssr");
	___mb.mb_environment_set_tonemap = gd::api->godot_method_bind_get_method("VisualServer", "environment_set_tonemap");
	___mb.mb_finish = gd::api->godot_method_bind_get_method("VisualServer", "finish");
	___mb.mb_force_draw = gd::api->godot_method_bind_get_method("VisualServer", "force_draw");
	___mb.mb_force_sync = gd::api->godot_method_bind_get_method("VisualServer", "force_sync");
	___mb.mb_free_rid = gd::api->godot_method_bind_get_method("VisualServer", "free_rid");
	___mb.mb_get_render_info = gd::api->godot_method_bind_get_method("VisualServer", "get_render_info");
	___mb.mb_get_test_cube = gd::api->godot_method_bind_get_method("VisualServer", "get_test_cube");
	___mb.mb_get_test_texture = gd::api->godot_method_bind_get_method("VisualServer", "get_test_texture");
	___mb.mb_get_video_adapter_name = gd::api->godot_method_bind_get_method("VisualServer", "get_video_adapter_name");
	___mb.mb_get_video_adapter_vendor = gd::api->godot_method_bind_get_method("VisualServer", "get_video_adapter_vendor");
	___mb.mb_get_white_texture = gd::api->godot_method_bind_get_method("VisualServer", "get_white_texture");
	___mb.mb_gi_probe_create = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_create");
	___mb.mb_gi_probe_get_bias = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_bias");
	___mb.mb_gi_probe_get_bounds = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_bounds");
	___mb.mb_gi_probe_get_cell_size = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_cell_size");
	___mb.mb_gi_probe_get_dynamic_data = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_dynamic_data");
	___mb.mb_gi_probe_get_dynamic_range = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_dynamic_range");
	___mb.mb_gi_probe_get_energy = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_energy");
	___mb.mb_gi_probe_get_normal_bias = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_normal_bias");
	___mb.mb_gi_probe_get_propagation = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_propagation");
	___mb.mb_gi_probe_get_to_cell_xform = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_get_to_cell_xform");
	___mb.mb_gi_probe_is_compressed = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_is_compressed");
	___mb.mb_gi_probe_is_interior = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_is_interior");
	___mb.mb_gi_probe_set_bias = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_bias");
	___mb.mb_gi_probe_set_bounds = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_bounds");
	___mb.mb_gi_probe_set_cell_size = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_cell_size");
	___mb.mb_gi_probe_set_compress = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_compress");
	___mb.mb_gi_probe_set_dynamic_data = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_dynamic_data");
	___mb.mb_gi_probe_set_dynamic_range = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_dynamic_range");
	___mb.mb_gi_probe_set_energy = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_energy");
	___mb.mb_gi_probe_set_interior = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_interior");
	___mb.mb_gi_probe_set_normal_bias = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_normal_bias");
	___mb.mb_gi_probe_set_propagation = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_propagation");
	___mb.mb_gi_probe_set_to_cell_xform = gd::api->godot_method_bind_get_method("VisualServer", "gi_probe_set_to_cell_xform");
	___mb.mb_has_changed = gd::api->godot_method_bind_get_method("VisualServer", "has_changed");
	___mb.mb_has_feature = gd::api->godot_method_bind_get_method("VisualServer", "has_feature");
	___mb.mb_has_os_feature = gd::api->godot_method_bind_get_method("VisualServer", "has_os_feature");
	___mb.mb_immediate_begin = gd::api->godot_method_bind_get_method("VisualServer", "immediate_begin");
	___mb.mb_immediate_clear = gd::api->godot_method_bind_get_method("VisualServer", "immediate_clear");
	___mb.mb_immediate_color = gd::api->godot_method_bind_get_method("VisualServer", "immediate_color");
	___mb.mb_immediate_create = gd::api->godot_method_bind_get_method("VisualServer", "immediate_create");
	___mb.mb_immediate_end = gd::api->godot_method_bind_get_method("VisualServer", "immediate_end");
	___mb.mb_immediate_get_material = gd::api->godot_method_bind_get_method("VisualServer", "immediate_get_material");
	___mb.mb_immediate_normal = gd::api->godot_method_bind_get_method("VisualServer", "immediate_normal");
	___mb.mb_immediate_set_material = gd::api->godot_method_bind_get_method("VisualServer", "immediate_set_material");
	___mb.mb_immediate_tangent = gd::api->godot_method_bind_get_method("VisualServer", "immediate_tangent");
	___mb.mb_immediate_uv = gd::api->godot_method_bind_get_method("VisualServer", "immediate_uv");
	___mb.mb_immediate_uv2 = gd::api->godot_method_bind_get_method("VisualServer", "immediate_uv2");
	___mb.mb_immediate_vertex = gd::api->godot_method_bind_get_method("VisualServer", "immediate_vertex");
	___mb.mb_immediate_vertex_2d = gd::api->godot_method_bind_get_method("VisualServer", "immediate_vertex_2d");
	___mb.mb_init = gd::api->godot_method_bind_get_method("VisualServer", "init");
	___mb.mb_instance_attach_object_instance_id = gd::api->godot_method_bind_get_method("VisualServer", "instance_attach_object_instance_id");
	___mb.mb_instance_attach_skeleton = gd::api->godot_method_bind_get_method("VisualServer", "instance_attach_skeleton");
	___mb.mb_instance_create = gd::api->godot_method_bind_get_method("VisualServer", "instance_create");
	___mb.mb_instance_create2 = gd::api->godot_method_bind_get_method("VisualServer", "instance_create2");
	___mb.mb_instance_geometry_set_as_instance_lod = gd::api->godot_method_bind_get_method("VisualServer", "instance_geometry_set_as_instance_lod");
	___mb.mb_instance_geometry_set_cast_shadows_setting = gd::api->godot_method_bind_get_method("VisualServer", "instance_geometry_set_cast_shadows_setting");
	___mb.mb_instance_geometry_set_draw_range = gd::api->godot_method_bind_get_method("VisualServer", "instance_geometry_set_draw_range");
	___mb.mb_instance_geometry_set_flag = gd::api->godot_method_bind_get_method("VisualServer", "instance_geometry_set_flag");
	___mb.mb_instance_geometry_set_material_overlay = gd::api->godot_method_bind_get_method("VisualServer", "instance_geometry_set_material_overlay");
	___mb.mb_instance_geometry_set_material_override = gd::api->godot_method_bind_get_method("VisualServer", "instance_geometry_set_material_override");
	___mb.mb_instance_set_base = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_base");
	___mb.mb_instance_set_blend_shape_weight = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_blend_shape_weight");
	___mb.mb_instance_set_custom_aabb = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_custom_aabb");
	___mb.mb_instance_set_exterior = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_exterior");
	___mb.mb_instance_set_extra_visibility_margin = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_extra_visibility_margin");
	___mb.mb_instance_set_layer_mask = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_layer_mask");
	___mb.mb_instance_set_scenario = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_scenario");
	___mb.mb_instance_set_surface_material = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_surface_material");
	___mb.mb_instance_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_transform");
	___mb.mb_instance_set_use_lightmap = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_use_lightmap");
	___mb.mb_instance_set_visible = gd::api->godot_method_bind_get_method("VisualServer", "instance_set_visible");
	___mb.mb_instances_cull_aabb = gd::api->godot_method_bind_get_method("VisualServer", "instances_cull_aabb");
	___mb.mb_instances_cull_convex = gd::api->godot_method_bind_get_method("VisualServer", "instances_cull_convex");
	___mb.mb_instances_cull_ray = gd::api->godot_method_bind_get_method("VisualServer", "instances_cull_ray");
	___mb.mb_is_render_loop_enabled = gd::api->godot_method_bind_get_method("VisualServer", "is_render_loop_enabled");
	___mb.mb_light_directional_set_blend_splits = gd::api->godot_method_bind_get_method("VisualServer", "light_directional_set_blend_splits");
	___mb.mb_light_directional_set_shadow_depth_range_mode = gd::api->godot_method_bind_get_method("VisualServer", "light_directional_set_shadow_depth_range_mode");
	___mb.mb_light_directional_set_shadow_mode = gd::api->godot_method_bind_get_method("VisualServer", "light_directional_set_shadow_mode");
	___mb.mb_light_omni_set_shadow_detail = gd::api->godot_method_bind_get_method("VisualServer", "light_omni_set_shadow_detail");
	___mb.mb_light_omni_set_shadow_mode = gd::api->godot_method_bind_get_method("VisualServer", "light_omni_set_shadow_mode");
	___mb.mb_light_set_bake_mode = gd::api->godot_method_bind_get_method("VisualServer", "light_set_bake_mode");
	___mb.mb_light_set_color = gd::api->godot_method_bind_get_method("VisualServer", "light_set_color");
	___mb.mb_light_set_cull_mask = gd::api->godot_method_bind_get_method("VisualServer", "light_set_cull_mask");
	___mb.mb_light_set_negative = gd::api->godot_method_bind_get_method("VisualServer", "light_set_negative");
	___mb.mb_light_set_param = gd::api->godot_method_bind_get_method("VisualServer", "light_set_param");
	___mb.mb_light_set_projector = gd::api->godot_method_bind_get_method("VisualServer", "light_set_projector");
	___mb.mb_light_set_reverse_cull_face_mode = gd::api->godot_method_bind_get_method("VisualServer", "light_set_reverse_cull_face_mode");
	___mb.mb_light_set_shadow = gd::api->godot_method_bind_get_method("VisualServer", "light_set_shadow");
	___mb.mb_light_set_shadow_color = gd::api->godot_method_bind_get_method("VisualServer", "light_set_shadow_color");
	___mb.mb_light_set_use_gi = gd::api->godot_method_bind_get_method("VisualServer", "light_set_use_gi");
	___mb.mb_lightmap_capture_create = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_create");
	___mb.mb_lightmap_capture_get_bounds = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_get_bounds");
	___mb.mb_lightmap_capture_get_energy = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_get_energy");
	___mb.mb_lightmap_capture_get_octree = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_get_octree");
	___mb.mb_lightmap_capture_get_octree_cell_subdiv = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_get_octree_cell_subdiv");
	___mb.mb_lightmap_capture_get_octree_cell_transform = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_get_octree_cell_transform");
	___mb.mb_lightmap_capture_is_interior = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_is_interior");
	___mb.mb_lightmap_capture_set_bounds = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_set_bounds");
	___mb.mb_lightmap_capture_set_energy = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_set_energy");
	___mb.mb_lightmap_capture_set_interior = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_set_interior");
	___mb.mb_lightmap_capture_set_octree = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_set_octree");
	___mb.mb_lightmap_capture_set_octree_cell_subdiv = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_set_octree_cell_subdiv");
	___mb.mb_lightmap_capture_set_octree_cell_transform = gd::api->godot_method_bind_get_method("VisualServer", "lightmap_capture_set_octree_cell_transform");
	___mb.mb_make_sphere_mesh = gd::api->godot_method_bind_get_method("VisualServer", "make_sphere_mesh");
	___mb.mb_material_create = gd::api->godot_method_bind_get_method("VisualServer", "material_create");
	___mb.mb_material_get_param = gd::api->godot_method_bind_get_method("VisualServer", "material_get_param");
	___mb.mb_material_get_param_default = gd::api->godot_method_bind_get_method("VisualServer", "material_get_param_default");
	___mb.mb_material_get_shader = gd::api->godot_method_bind_get_method("VisualServer", "material_get_shader");
	___mb.mb_material_set_line_width = gd::api->godot_method_bind_get_method("VisualServer", "material_set_line_width");
	___mb.mb_material_set_next_pass = gd::api->godot_method_bind_get_method("VisualServer", "material_set_next_pass");
	___mb.mb_material_set_param = gd::api->godot_method_bind_get_method("VisualServer", "material_set_param");
	___mb.mb_material_set_render_priority = gd::api->godot_method_bind_get_method("VisualServer", "material_set_render_priority");
	___mb.mb_material_set_shader = gd::api->godot_method_bind_get_method("VisualServer", "material_set_shader");
	___mb.mb_mesh_add_surface_from_arrays = gd::api->godot_method_bind_get_method("VisualServer", "mesh_add_surface_from_arrays");
	___mb.mb_mesh_clear = gd::api->godot_method_bind_get_method("VisualServer", "mesh_clear");
	___mb.mb_mesh_create = gd::api->godot_method_bind_get_method("VisualServer", "mesh_create");
	___mb.mb_mesh_get_blend_shape_count = gd::api->godot_method_bind_get_method("VisualServer", "mesh_get_blend_shape_count");
	___mb.mb_mesh_get_blend_shape_mode = gd::api->godot_method_bind_get_method("VisualServer", "mesh_get_blend_shape_mode");
	___mb.mb_mesh_get_custom_aabb = gd::api->godot_method_bind_get_method("VisualServer", "mesh_get_custom_aabb");
	___mb.mb_mesh_get_surface_count = gd::api->godot_method_bind_get_method("VisualServer", "mesh_get_surface_count");
	___mb.mb_mesh_remove_surface = gd::api->godot_method_bind_get_method("VisualServer", "mesh_remove_surface");
	___mb.mb_mesh_set_blend_shape_count = gd::api->godot_method_bind_get_method("VisualServer", "mesh_set_blend_shape_count");
	___mb.mb_mesh_set_blend_shape_mode = gd::api->godot_method_bind_get_method("VisualServer", "mesh_set_blend_shape_mode");
	___mb.mb_mesh_set_custom_aabb = gd::api->godot_method_bind_get_method("VisualServer", "mesh_set_custom_aabb");
	___mb.mb_mesh_surface_get_aabb = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_aabb");
	___mb.mb_mesh_surface_get_array = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_array");
	___mb.mb_mesh_surface_get_array_index_len = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_array_index_len");
	___mb.mb_mesh_surface_get_array_len = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_array_len");
	___mb.mb_mesh_surface_get_arrays = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_arrays");
	___mb.mb_mesh_surface_get_blend_shape_arrays = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_blend_shape_arrays");
	___mb.mb_mesh_surface_get_format = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_format");
	___mb.mb_mesh_surface_get_format_offset = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_format_offset");
	___mb.mb_mesh_surface_get_format_stride = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_format_stride");
	___mb.mb_mesh_surface_get_index_array = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_index_array");
	___mb.mb_mesh_surface_get_material = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_material");
	___mb.mb_mesh_surface_get_primitive_type = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_primitive_type");
	___mb.mb_mesh_surface_get_skeleton_aabb = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_get_skeleton_aabb");
	___mb.mb_mesh_surface_set_material = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_set_material");
	___mb.mb_mesh_surface_update_region = gd::api->godot_method_bind_get_method("VisualServer", "mesh_surface_update_region");
	___mb.mb_multimesh_allocate = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_allocate");
	___mb.mb_multimesh_create = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_create");
	___mb.mb_multimesh_get_aabb = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_get_aabb");
	___mb.mb_multimesh_get_instance_count = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_get_instance_count");
	___mb.mb_multimesh_get_mesh = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_get_mesh");
	___mb.mb_multimesh_get_visible_instances = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_get_visible_instances");
	___mb.mb_multimesh_instance_get_color = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_get_color");
	___mb.mb_multimesh_instance_get_custom_data = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_get_custom_data");
	___mb.mb_multimesh_instance_get_transform = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_get_transform");
	___mb.mb_multimesh_instance_get_transform_2d = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_get_transform_2d");
	___mb.mb_multimesh_instance_set_color = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_set_color");
	___mb.mb_multimesh_instance_set_custom_data = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_set_custom_data");
	___mb.mb_multimesh_instance_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_set_transform");
	___mb.mb_multimesh_instance_set_transform_2d = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_instance_set_transform_2d");
	___mb.mb_multimesh_set_as_bulk_array = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_set_as_bulk_array");
	___mb.mb_multimesh_set_mesh = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_set_mesh");
	___mb.mb_multimesh_set_visible_instances = gd::api->godot_method_bind_get_method("VisualServer", "multimesh_set_visible_instances");
	___mb.mb_omni_light_create = gd::api->godot_method_bind_get_method("VisualServer", "omni_light_create");
	___mb.mb_particles_create = gd::api->godot_method_bind_get_method("VisualServer", "particles_create");
	___mb.mb_particles_get_current_aabb = gd::api->godot_method_bind_get_method("VisualServer", "particles_get_current_aabb");
	___mb.mb_particles_get_emitting = gd::api->godot_method_bind_get_method("VisualServer", "particles_get_emitting");
	___mb.mb_particles_is_inactive = gd::api->godot_method_bind_get_method("VisualServer", "particles_is_inactive");
	___mb.mb_particles_request_process = gd::api->godot_method_bind_get_method("VisualServer", "particles_request_process");
	___mb.mb_particles_restart = gd::api->godot_method_bind_get_method("VisualServer", "particles_restart");
	___mb.mb_particles_set_amount = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_amount");
	___mb.mb_particles_set_custom_aabb = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_custom_aabb");
	___mb.mb_particles_set_draw_order = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_draw_order");
	___mb.mb_particles_set_draw_pass_mesh = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_draw_pass_mesh");
	___mb.mb_particles_set_draw_passes = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_draw_passes");
	___mb.mb_particles_set_emission_transform = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_emission_transform");
	___mb.mb_particles_set_emitting = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_emitting");
	___mb.mb_particles_set_explosiveness_ratio = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_explosiveness_ratio");
	___mb.mb_particles_set_fixed_fps = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_fixed_fps");
	___mb.mb_particles_set_fractional_delta = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_fractional_delta");
	___mb.mb_particles_set_lifetime = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_lifetime");
	___mb.mb_particles_set_one_shot = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_one_shot");
	___mb.mb_particles_set_pre_process_time = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_pre_process_time");
	___mb.mb_particles_set_process_material = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_process_material");
	___mb.mb_particles_set_randomness_ratio = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_randomness_ratio");
	___mb.mb_particles_set_speed_scale = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_speed_scale");
	___mb.mb_particles_set_use_local_coordinates = gd::api->godot_method_bind_get_method("VisualServer", "particles_set_use_local_coordinates");
	___mb.mb_reflection_probe_create = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_create");
	___mb.mb_reflection_probe_set_as_interior = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_as_interior");
	___mb.mb_reflection_probe_set_cull_mask = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_cull_mask");
	___mb.mb_reflection_probe_set_enable_box_projection = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_enable_box_projection");
	___mb.mb_reflection_probe_set_enable_shadows = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_enable_shadows");
	___mb.mb_reflection_probe_set_extents = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_extents");
	___mb.mb_reflection_probe_set_intensity = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_intensity");
	___mb.mb_reflection_probe_set_interior_ambient = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_interior_ambient");
	___mb.mb_reflection_probe_set_interior_ambient_energy = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_interior_ambient_energy");
	___mb.mb_reflection_probe_set_interior_ambient_probe_contribution = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_interior_ambient_probe_contribution");
	___mb.mb_reflection_probe_set_max_distance = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_max_distance");
	___mb.mb_reflection_probe_set_origin_offset = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_origin_offset");
	___mb.mb_reflection_probe_set_update_mode = gd::api->godot_method_bind_get_method("VisualServer", "reflection_probe_set_update_mode");
	___mb.mb_request_frame_drawn_callback = gd::api->godot_method_bind_get_method("VisualServer", "request_frame_drawn_callback");
	___mb.mb_scenario_create = gd::api->godot_method_bind_get_method("VisualServer", "scenario_create");
	___mb.mb_scenario_set_debug = gd::api->godot_method_bind_get_method("VisualServer", "scenario_set_debug");
	___mb.mb_scenario_set_environment = gd::api->godot_method_bind_get_method("VisualServer", "scenario_set_environment");
	___mb.mb_scenario_set_fallback_environment = gd::api->godot_method_bind_get_method("VisualServer", "scenario_set_fallback_environment");
	___mb.mb_scenario_set_reflection_atlas_size = gd::api->godot_method_bind_get_method("VisualServer", "scenario_set_reflection_atlas_size");
	___mb.mb_set_boot_image = gd::api->godot_method_bind_get_method("VisualServer", "set_boot_image");
	___mb.mb_set_debug_generate_wireframes = gd::api->godot_method_bind_get_method("VisualServer", "set_debug_generate_wireframes");
	___mb.mb_set_default_clear_color = gd::api->godot_method_bind_get_method("VisualServer", "set_default_clear_color");
	___mb.mb_set_render_loop_enabled = gd::api->godot_method_bind_get_method("VisualServer", "set_render_loop_enabled");
	___mb.mb_set_shader_async_hidden_forbidden = gd::api->godot_method_bind_get_method("VisualServer", "set_shader_async_hidden_forbidden");
	___mb.mb_set_shader_time_scale = gd::api->godot_method_bind_get_method("VisualServer", "set_shader_time_scale");
	___mb.mb_set_use_occlusion_culling = gd::api->godot_method_bind_get_method("VisualServer", "set_use_occlusion_culling");
	___mb.mb_shader_create = gd::api->godot_method_bind_get_method("VisualServer", "shader_create");
	___mb.mb_shader_get_code = gd::api->godot_method_bind_get_method("VisualServer", "shader_get_code");
	___mb.mb_shader_get_default_texture_param = gd::api->godot_method_bind_get_method("VisualServer", "shader_get_default_texture_param");
	___mb.mb_shader_get_param_list = gd::api->godot_method_bind_get_method("VisualServer", "shader_get_param_list");
	___mb.mb_shader_set_code = gd::api->godot_method_bind_get_method("VisualServer", "shader_set_code");
	___mb.mb_shader_set_default_texture_param = gd::api->godot_method_bind_get_method("VisualServer", "shader_set_default_texture_param");
	___mb.mb_skeleton_allocate = gd::api->godot_method_bind_get_method("VisualServer", "skeleton_allocate");
	___mb.mb_skeleton_bone_get_transform = gd::api->godot_method_bind_get_method("VisualServer", "skeleton_bone_get_transform");
	___mb.mb_skeleton_bone_get_transform_2d = gd::api->godot_method_bind_get_method("VisualServer", "skeleton_bone_get_transform_2d");
	___mb.mb_skeleton_bone_set_transform = gd::api->godot_method_bind_get_method("VisualServer", "skeleton_bone_set_transform");
	___mb.mb_skeleton_bone_set_transform_2d = gd::api->godot_method_bind_get_method("VisualServer", "skeleton_bone_set_transform_2d");
	___mb.mb_skeleton_create = gd::api->godot_method_bind_get_method("VisualServer", "skeleton_create");
	___mb.mb_skeleton_get_bone_count = gd::api->godot_method_bind_get_method("VisualServer", "skeleton_get_bone_count");
	___mb.mb_sky_create = gd::api->godot_method_bind_get_method("VisualServer", "sky_create");
	___mb.mb_sky_set_texture = gd::api->godot_method_bind_get_method("VisualServer", "sky_set_texture");
	___mb.mb_spot_light_create = gd::api->godot_method_bind_get_method("VisualServer", "spot_light_create");
	___mb.mb_sync = gd::api->godot_method_bind_get_method("VisualServer", "sync");
	___mb.mb_texture_allocate = gd::api->godot_method_bind_get_method("VisualServer", "texture_allocate");
	___mb.mb_texture_bind = gd::api->godot_method_bind_get_method("VisualServer", "texture_bind");
	___mb.mb_texture_create = gd::api->godot_method_bind_get_method("VisualServer", "texture_create");
	___mb.mb_texture_create_from_image = gd::api->godot_method_bind_get_method("VisualServer", "texture_create_from_image");
	___mb.mb_texture_debug_usage = gd::api->godot_method_bind_get_method("VisualServer", "texture_debug_usage");
	___mb.mb_texture_get_data = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_data");
	___mb.mb_texture_get_depth = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_depth");
	___mb.mb_texture_get_flags = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_flags");
	___mb.mb_texture_get_format = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_format");
	___mb.mb_texture_get_height = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_height");
	___mb.mb_texture_get_path = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_path");
	___mb.mb_texture_get_texid = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_texid");
	___mb.mb_texture_get_type = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_type");
	___mb.mb_texture_get_width = gd::api->godot_method_bind_get_method("VisualServer", "texture_get_width");
	___mb.mb_texture_set_data = gd::api->godot_method_bind_get_method("VisualServer", "texture_set_data");
	___mb.mb_texture_set_data_partial = gd::api->godot_method_bind_get_method("VisualServer", "texture_set_data_partial");
	___mb.mb_texture_set_flags = gd::api->godot_method_bind_get_method("VisualServer", "texture_set_flags");
	___mb.mb_texture_set_path = gd::api->godot_method_bind_get_method("VisualServer", "texture_set_path");
	___mb.mb_texture_set_proxy = gd::api->godot_method_bind_get_method("VisualServer", "texture_set_proxy");
	___mb.mb_texture_set_shrink_all_x2_on_set_data = gd::api->godot_method_bind_get_method("VisualServer", "texture_set_shrink_all_x2_on_set_data");
	___mb.mb_texture_set_size_override = gd::api->godot_method_bind_get_method("VisualServer", "texture_set_size_override");
	___mb.mb_textures_keep_original = gd::api->godot_method_bind_get_method("VisualServer", "textures_keep_original");
	___mb.mb_viewport_attach_camera = gd::api->godot_method_bind_get_method("VisualServer", "viewport_attach_camera");
	___mb.mb_viewport_attach_canvas = gd::api->godot_method_bind_get_method("VisualServer", "viewport_attach_canvas");
	___mb.mb_viewport_attach_to_screen = gd::api->godot_method_bind_get_method("VisualServer", "viewport_attach_to_screen");
	___mb.mb_viewport_create = gd::api->godot_method_bind_get_method("VisualServer", "viewport_create");
	___mb.mb_viewport_detach = gd::api->godot_method_bind_get_method("VisualServer", "viewport_detach");
	___mb.mb_viewport_get_render_info = gd::api->godot_method_bind_get_method("VisualServer", "viewport_get_render_info");
	___mb.mb_viewport_get_texture = gd::api->godot_method_bind_get_method("VisualServer", "viewport_get_texture");
	___mb.mb_viewport_remove_canvas = gd::api->godot_method_bind_get_method("VisualServer", "viewport_remove_canvas");
	___mb.mb_viewport_set_active = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_active");
	___mb.mb_viewport_set_canvas_stacking = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_canvas_stacking");
	___mb.mb_viewport_set_canvas_transform = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_canvas_transform");
	___mb.mb_viewport_set_clear_mode = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_clear_mode");
	___mb.mb_viewport_set_debug_draw = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_debug_draw");
	___mb.mb_viewport_set_disable_3d = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_disable_3d");
	___mb.mb_viewport_set_disable_environment = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_disable_environment");
	___mb.mb_viewport_set_global_canvas_transform = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_global_canvas_transform");
	___mb.mb_viewport_set_hdr = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_hdr");
	___mb.mb_viewport_set_hide_canvas = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_hide_canvas");
	___mb.mb_viewport_set_hide_scenario = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_hide_scenario");
	___mb.mb_viewport_set_msaa = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_msaa");
	___mb.mb_viewport_set_parent_viewport = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_parent_viewport");
	___mb.mb_viewport_set_render_direct_to_screen = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_render_direct_to_screen");
	___mb.mb_viewport_set_scenario = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_scenario");
	___mb.mb_viewport_set_shadow_atlas_quadrant_subdivision = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_shadow_atlas_quadrant_subdivision");
	___mb.mb_viewport_set_shadow_atlas_size = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_shadow_atlas_size");
	___mb.mb_viewport_set_sharpen_intensity = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_sharpen_intensity");
	___mb.mb_viewport_set_size = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_size");
	___mb.mb_viewport_set_transparent_background = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_transparent_background");
	___mb.mb_viewport_set_update_mode = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_update_mode");
	___mb.mb_viewport_set_usage = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_usage");
	___mb.mb_viewport_set_use_32_bpc_depth = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_use_32_bpc_depth");
	___mb.mb_viewport_set_use_arvr = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_use_arvr");
	___mb.mb_viewport_set_use_debanding = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_use_debanding");
	___mb.mb_viewport_set_use_fxaa = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_use_fxaa");
	___mb.mb_viewport_set_vflip = gd::api->godot_method_bind_get_method("VisualServer", "viewport_set_vflip");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void visual_server::black_bars_set_images(const rid left, const rid top, const rid right, const rid bottom) {
	___godot_icall_void_RID_RID_RID_RID(___mb.mb_black_bars_set_images, (const object *) this, left, top, right, bottom);
}

void visual_server::black_bars_set_margins(const int64_t left, const int64_t top, const int64_t right, const int64_t bottom) {
	___godot_icall_void_int_int_int_int(___mb.mb_black_bars_set_margins, (const object *) this, left, top, right, bottom);
}

rid visual_server::camera_create() {
	return ___godot_icall_RID(___mb.mb_camera_create, (const object *) this);
}

void visual_server::camera_set_cull_mask(const rid camera_, const int64_t layers) {
	___godot_icall_void_RID_int(___mb.mb_camera_set_cull_mask, (const object *) this, camera_, layers);
}

void visual_server::camera_set_environment(const rid camera_, const rid env) {
	___godot_icall_void_RID_RID(___mb.mb_camera_set_environment, (const object *) this, camera_, env);
}

void visual_server::camera_set_frustum(const rid camera_, const real_t size, const vector2 offset, const real_t z_near, const real_t z_far) {
	___godot_icall_void_RID_float_Vector2_float_float(___mb.mb_camera_set_frustum, (const object *) this, camera_, size, offset, z_near, z_far);
}

void visual_server::camera_set_orthogonal(const rid camera_, const real_t size, const real_t z_near, const real_t z_far) {
	___godot_icall_void_RID_float_float_float(___mb.mb_camera_set_orthogonal, (const object *) this, camera_, size, z_near, z_far);
}

void visual_server::camera_set_perspective(const rid camera_, const real_t fovy_degrees, const real_t z_near, const real_t z_far) {
	___godot_icall_void_RID_float_float_float(___mb.mb_camera_set_perspective, (const object *) this, camera_, fovy_degrees, z_near, z_far);
}

void visual_server::camera_set_transform(const rid camera_, const transform transform_) {
	___godot_icall_void_RID_Transform(___mb.mb_camera_set_transform, (const object *) this, camera_, transform_);
}

void visual_server::camera_set_use_vertical_aspect(const rid camera_, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_camera_set_use_vertical_aspect, (const object *) this, camera_, enable);
}

rid visual_server::canvas_create() {
	return ___godot_icall_RID(___mb.mb_canvas_create, (const object *) this);
}

void visual_server::canvas_item_add_circle(const rid item, const vector2 pos, const real_t radius, const color color_) {
	___godot_icall_void_RID_Vector2_float_Color(___mb.mb_canvas_item_add_circle, (const object *) this, item, pos, radius, color_);
}

void visual_server::canvas_item_add_clip_ignore(const rid item, const bool ignore) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_add_clip_ignore, (const object *) this, item, ignore);
}

void visual_server::canvas_item_add_line(const rid item, const vector2 from, const vector2 to, const color color_, const real_t width, const bool antialiased) {
	___godot_icall_void_RID_Vector2_Vector2_Color_float_bool(___mb.mb_canvas_item_add_line, (const object *) this, item, from, to, color_, width, antialiased);
}

void visual_server::canvas_item_add_mesh(const rid item, const rid mesh_, const transform2d transform_, const color modulate, const rid texture_, const rid normal_map) {
	___godot_icall_void_RID_RID_Transform2D_Color_RID_RID(___mb.mb_canvas_item_add_mesh, (const object *) this, item, mesh_, transform_, modulate, texture_, normal_map);
}

void visual_server::canvas_item_add_multimesh(const rid item, const rid mesh_, const rid texture_, const rid normal_map) {
	___godot_icall_void_RID_RID_RID_RID(___mb.mb_canvas_item_add_multimesh, (const object *) this, item, mesh_, texture_, normal_map);
}

void visual_server::canvas_item_add_nine_patch(const rid item, const rect2 rect, const rect2 source, const rid texture_, const vector2 topleft, const vector2 bottomright, const int64_t x_axis_mode, const int64_t y_axis_mode, const bool draw_center, const color modulate, const rid normal_map) {
	___godot_icall_void_RID_Rect2_Rect2_RID_Vector2_Vector2_int_int_bool_Color_RID(___mb.mb_canvas_item_add_nine_patch, (const object *) this, item, rect, source, texture_, topleft, bottomright, x_axis_mode, y_axis_mode, draw_center, modulate, normal_map);
}

void visual_server::canvas_item_add_particles(const rid item, const rid particles_, const rid texture_, const rid normal_map) {
	___godot_icall_void_RID_RID_RID_RID(___mb.mb_canvas_item_add_particles, (const object *) this, item, particles_, texture_, normal_map);
}

void visual_server::canvas_item_add_polygon(const rid item, const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs, const rid texture_, const rid normal_map, const bool antialiased) {
	___godot_icall_void_RID_PoolVector2Array_PoolColorArray_PoolVector2Array_RID_RID_bool(___mb.mb_canvas_item_add_polygon, (const object *) this, item, points, colors, uvs, texture_, normal_map, antialiased);
}

void visual_server::canvas_item_add_polyline(const rid item, const pool_vector2_array points, const pool_color_array colors, const real_t width, const bool antialiased) {
	___godot_icall_void_RID_PoolVector2Array_PoolColorArray_float_bool(___mb.mb_canvas_item_add_polyline, (const object *) this, item, points, colors, width, antialiased);
}

void visual_server::canvas_item_add_primitive(const rid item, const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs, const rid texture_, const real_t width, const rid normal_map) {
	___godot_icall_void_RID_PoolVector2Array_PoolColorArray_PoolVector2Array_RID_float_RID(___mb.mb_canvas_item_add_primitive, (const object *) this, item, points, colors, uvs, texture_, width, normal_map);
}

void visual_server::canvas_item_add_rect(const rid item, const rect2 rect, const color color_) {
	___godot_icall_void_RID_Rect2_Color(___mb.mb_canvas_item_add_rect, (const object *) this, item, rect, color_);
}

void visual_server::canvas_item_add_set_transform(const rid item, const transform2d transform_) {
	___godot_icall_void_RID_Transform2D(___mb.mb_canvas_item_add_set_transform, (const object *) this, item, transform_);
}

void visual_server::canvas_item_add_texture_rect(const rid item, const rect2 rect, const rid texture_, const bool tile, const color modulate, const bool transpose, const rid normal_map) {
	___godot_icall_void_RID_Rect2_RID_bool_Color_bool_RID(___mb.mb_canvas_item_add_texture_rect, (const object *) this, item, rect, texture_, tile, modulate, transpose, normal_map);
}

void visual_server::canvas_item_add_texture_rect_region(const rid item, const rect2 rect, const rid texture_, const rect2 src_rect, const color modulate, const bool transpose, const rid normal_map, const bool clip_uv) {
	___godot_icall_void_RID_Rect2_RID_Rect2_Color_bool_RID_bool(___mb.mb_canvas_item_add_texture_rect_region, (const object *) this, item, rect, texture_, src_rect, modulate, transpose, normal_map, clip_uv);
}

void visual_server::canvas_item_add_triangle_array(const rid item, const pool_int_array indices, const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs, const pool_int_array bones, const pool_real_array weights, const rid texture_, const int64_t count, const rid normal_map, const bool antialiased, const bool antialiasing_use_indices) {
	___godot_icall_void_RID_PoolIntArray_PoolVector2Array_PoolColorArray_PoolVector2Array_PoolIntArray_PoolRealArray_RID_int_RID_bool_bool(___mb.mb_canvas_item_add_triangle_array, (const object *) this, item, indices, points, colors, uvs, bones, weights, texture_, count, normal_map, antialiased, antialiasing_use_indices);
}

void visual_server::canvas_item_clear(const rid item) {
	___godot_icall_void_RID(___mb.mb_canvas_item_clear, (const object *) this, item);
}

rid visual_server::canvas_item_create() {
	return ___godot_icall_RID(___mb.mb_canvas_item_create, (const object *) this);
}

void visual_server::canvas_item_set_clip(const rid item, const bool clip) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_set_clip, (const object *) this, item, clip);
}

void visual_server::canvas_item_set_copy_to_backbuffer(const rid item, const bool enabled, const rect2 rect) {
	___godot_icall_void_RID_bool_Rect2(___mb.mb_canvas_item_set_copy_to_backbuffer, (const object *) this, item, enabled, rect);
}

void visual_server::canvas_item_set_custom_rect(const rid item, const bool use_custom_rect, const rect2 rect) {
	___godot_icall_void_RID_bool_Rect2(___mb.mb_canvas_item_set_custom_rect, (const object *) this, item, use_custom_rect, rect);
}

void visual_server::canvas_item_set_distance_field_mode(const rid item, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_set_distance_field_mode, (const object *) this, item, enabled);
}

void visual_server::canvas_item_set_draw_behind_parent(const rid item, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_set_draw_behind_parent, (const object *) this, item, enabled);
}

void visual_server::canvas_item_set_draw_index(const rid item, const int64_t index) {
	___godot_icall_void_RID_int(___mb.mb_canvas_item_set_draw_index, (const object *) this, item, index);
}

void visual_server::canvas_item_set_light_mask(const rid item, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_canvas_item_set_light_mask, (const object *) this, item, mask);
}

void visual_server::canvas_item_set_material(const rid item, const rid material_) {
	___godot_icall_void_RID_RID(___mb.mb_canvas_item_set_material, (const object *) this, item, material_);
}

void visual_server::canvas_item_set_modulate(const rid item, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_canvas_item_set_modulate, (const object *) this, item, color_);
}

void visual_server::canvas_item_set_parent(const rid item, const rid parent) {
	___godot_icall_void_RID_RID(___mb.mb_canvas_item_set_parent, (const object *) this, item, parent);
}

void visual_server::canvas_item_set_self_modulate(const rid item, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_canvas_item_set_self_modulate, (const object *) this, item, color_);
}

void visual_server::canvas_item_set_sort_children_by_y(const rid item, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_set_sort_children_by_y, (const object *) this, item, enabled);
}

void visual_server::canvas_item_set_transform(const rid item, const transform2d transform_) {
	___godot_icall_void_RID_Transform2D(___mb.mb_canvas_item_set_transform, (const object *) this, item, transform_);
}

void visual_server::canvas_item_set_use_parent_material(const rid item, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_set_use_parent_material, (const object *) this, item, enabled);
}

void visual_server::canvas_item_set_visible(const rid item, const bool visible) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_set_visible, (const object *) this, item, visible);
}

void visual_server::canvas_item_set_z_as_relative_to_parent(const rid item, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_item_set_z_as_relative_to_parent, (const object *) this, item, enabled);
}

void visual_server::canvas_item_set_z_index(const rid item, const int64_t z_index) {
	___godot_icall_void_RID_int(___mb.mb_canvas_item_set_z_index, (const object *) this, item, z_index);
}

void visual_server::canvas_light_attach_to_canvas(const rid light_, const rid canvas) {
	___godot_icall_void_RID_RID(___mb.mb_canvas_light_attach_to_canvas, (const object *) this, light_, canvas);
}

rid visual_server::canvas_light_create() {
	return ___godot_icall_RID(___mb.mb_canvas_light_create, (const object *) this);
}

void visual_server::canvas_light_occluder_attach_to_canvas(const rid occluder_, const rid canvas) {
	___godot_icall_void_RID_RID(___mb.mb_canvas_light_occluder_attach_to_canvas, (const object *) this, occluder_, canvas);
}

rid visual_server::canvas_light_occluder_create() {
	return ___godot_icall_RID(___mb.mb_canvas_light_occluder_create, (const object *) this);
}

void visual_server::canvas_light_occluder_set_enabled(const rid occluder_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_light_occluder_set_enabled, (const object *) this, occluder_, enabled);
}

void visual_server::canvas_light_occluder_set_light_mask(const rid occluder_, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_canvas_light_occluder_set_light_mask, (const object *) this, occluder_, mask);
}

void visual_server::canvas_light_occluder_set_polygon(const rid occluder_, const rid polygon) {
	___godot_icall_void_RID_RID(___mb.mb_canvas_light_occluder_set_polygon, (const object *) this, occluder_, polygon);
}

void visual_server::canvas_light_occluder_set_transform(const rid occluder_, const transform2d transform_) {
	___godot_icall_void_RID_Transform2D(___mb.mb_canvas_light_occluder_set_transform, (const object *) this, occluder_, transform_);
}

void visual_server::canvas_light_set_color(const rid light_, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_canvas_light_set_color, (const object *) this, light_, color_);
}

void visual_server::canvas_light_set_enabled(const rid light_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_light_set_enabled, (const object *) this, light_, enabled);
}

void visual_server::canvas_light_set_energy(const rid light_, const real_t energy) {
	___godot_icall_void_RID_float(___mb.mb_canvas_light_set_energy, (const object *) this, light_, energy);
}

void visual_server::canvas_light_set_height(const rid light_, const real_t height) {
	___godot_icall_void_RID_float(___mb.mb_canvas_light_set_height, (const object *) this, light_, height);
}

void visual_server::canvas_light_set_item_cull_mask(const rid light_, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_canvas_light_set_item_cull_mask, (const object *) this, light_, mask);
}

void visual_server::canvas_light_set_item_shadow_cull_mask(const rid light_, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_canvas_light_set_item_shadow_cull_mask, (const object *) this, light_, mask);
}

void visual_server::canvas_light_set_layer_range(const rid light_, const int64_t min_layer, const int64_t max_layer) {
	___godot_icall_void_RID_int_int(___mb.mb_canvas_light_set_layer_range, (const object *) this, light_, min_layer, max_layer);
}

void visual_server::canvas_light_set_mode(const rid light_, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_canvas_light_set_mode, (const object *) this, light_, mode);
}

void visual_server::canvas_light_set_scale(const rid light_, const real_t scale) {
	___godot_icall_void_RID_float(___mb.mb_canvas_light_set_scale, (const object *) this, light_, scale);
}

void visual_server::canvas_light_set_shadow_buffer_size(const rid light_, const int64_t size) {
	___godot_icall_void_RID_int(___mb.mb_canvas_light_set_shadow_buffer_size, (const object *) this, light_, size);
}

void visual_server::canvas_light_set_shadow_color(const rid light_, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_canvas_light_set_shadow_color, (const object *) this, light_, color_);
}

void visual_server::canvas_light_set_shadow_enabled(const rid light_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_canvas_light_set_shadow_enabled, (const object *) this, light_, enabled);
}

void visual_server::canvas_light_set_shadow_filter(const rid light_, const int64_t filter) {
	___godot_icall_void_RID_int(___mb.mb_canvas_light_set_shadow_filter, (const object *) this, light_, filter);
}

void visual_server::canvas_light_set_shadow_gradient_length(const rid light_, const real_t length) {
	___godot_icall_void_RID_float(___mb.mb_canvas_light_set_shadow_gradient_length, (const object *) this, light_, length);
}

void visual_server::canvas_light_set_shadow_smooth(const rid light_, const real_t smooth) {
	___godot_icall_void_RID_float(___mb.mb_canvas_light_set_shadow_smooth, (const object *) this, light_, smooth);
}

void visual_server::canvas_light_set_texture(const rid light_, const rid texture_) {
	___godot_icall_void_RID_RID(___mb.mb_canvas_light_set_texture, (const object *) this, light_, texture_);
}

void visual_server::canvas_light_set_texture_offset(const rid light_, const vector2 offset) {
	___godot_icall_void_RID_Vector2(___mb.mb_canvas_light_set_texture_offset, (const object *) this, light_, offset);
}

void visual_server::canvas_light_set_transform(const rid light_, const transform2d transform_) {
	___godot_icall_void_RID_Transform2D(___mb.mb_canvas_light_set_transform, (const object *) this, light_, transform_);
}

void visual_server::canvas_light_set_z_range(const rid light_, const int64_t min_z, const int64_t max_z) {
	___godot_icall_void_RID_int_int(___mb.mb_canvas_light_set_z_range, (const object *) this, light_, min_z, max_z);
}

rid visual_server::canvas_occluder_polygon_create() {
	return ___godot_icall_RID(___mb.mb_canvas_occluder_polygon_create, (const object *) this);
}

void visual_server::canvas_occluder_polygon_set_cull_mode(const rid occluder_polygon, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_canvas_occluder_polygon_set_cull_mode, (const object *) this, occluder_polygon, mode);
}

void visual_server::canvas_occluder_polygon_set_shape(const rid occluder_polygon, const pool_vector2_array shape_, const bool closed) {
	___godot_icall_void_RID_PoolVector2Array_bool(___mb.mb_canvas_occluder_polygon_set_shape, (const object *) this, occluder_polygon, shape_, closed);
}

void visual_server::canvas_occluder_polygon_set_shape_as_lines(const rid occluder_polygon, const pool_vector2_array shape_) {
	___godot_icall_void_RID_PoolVector2Array(___mb.mb_canvas_occluder_polygon_set_shape_as_lines, (const object *) this, occluder_polygon, shape_);
}

void visual_server::canvas_set_item_mirroring(const rid canvas, const rid item, const vector2 mirroring) {
	___godot_icall_void_RID_RID_Vector2(___mb.mb_canvas_set_item_mirroring, (const object *) this, canvas, item, mirroring);
}

void visual_server::canvas_set_modulate(const rid canvas, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_canvas_set_modulate, (const object *) this, canvas, color_);
}

rid visual_server::directional_light_create() {
	return ___godot_icall_RID(___mb.mb_directional_light_create, (const object *) this);
}

void visual_server::draw(const bool swap_buffers, const real_t frame_step) {
	___godot_icall_void_bool_float(___mb.mb_draw, (const object *) this, swap_buffers, frame_step);
}

rid visual_server::environment_create() {
	return ___godot_icall_RID(___mb.mb_environment_create, (const object *) this);
}

void visual_server::environment_set_adjustment(const rid env, const bool enable, const real_t brightness, const real_t contrast, const real_t saturation, const rid ramp) {
	___godot_icall_void_RID_bool_float_float_float_RID(___mb.mb_environment_set_adjustment, (const object *) this, env, enable, brightness, contrast, saturation, ramp);
}

void visual_server::environment_set_ambient_light(const rid env, const color color_, const real_t energy, const real_t sky_contibution) {
	___godot_icall_void_RID_Color_float_float(___mb.mb_environment_set_ambient_light, (const object *) this, env, color_, energy, sky_contibution);
}

void visual_server::environment_set_background(const rid env, const int64_t bg) {
	___godot_icall_void_RID_int(___mb.mb_environment_set_background, (const object *) this, env, bg);
}

void visual_server::environment_set_bg_color(const rid env, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_environment_set_bg_color, (const object *) this, env, color_);
}

void visual_server::environment_set_bg_energy(const rid env, const real_t energy) {
	___godot_icall_void_RID_float(___mb.mb_environment_set_bg_energy, (const object *) this, env, energy);
}

void visual_server::environment_set_canvas_max_layer(const rid env, const int64_t max_layer) {
	___godot_icall_void_RID_int(___mb.mb_environment_set_canvas_max_layer, (const object *) this, env, max_layer);
}

void visual_server::environment_set_dof_blur_far(const rid env, const bool enable, const real_t distance, const real_t transition, const real_t far_amount, const int64_t quality) {
	___godot_icall_void_RID_bool_float_float_float_int(___mb.mb_environment_set_dof_blur_far, (const object *) this, env, enable, distance, transition, far_amount, quality);
}

void visual_server::environment_set_dof_blur_near(const rid env, const bool enable, const real_t distance, const real_t transition, const real_t far_amount, const int64_t quality) {
	___godot_icall_void_RID_bool_float_float_float_int(___mb.mb_environment_set_dof_blur_near, (const object *) this, env, enable, distance, transition, far_amount, quality);
}

void visual_server::environment_set_fog(const rid env, const bool enable, const color color_, const color sun_color, const real_t sun_amount) {
	___godot_icall_void_RID_bool_Color_Color_float(___mb.mb_environment_set_fog, (const object *) this, env, enable, color_, sun_color, sun_amount);
}

void visual_server::environment_set_fog_depth(const rid env, const bool enable, const real_t depth_begin, const real_t depth_end, const real_t depth_curve, const bool transmit, const real_t transmit_curve) {
	___godot_icall_void_RID_bool_float_float_float_bool_float(___mb.mb_environment_set_fog_depth, (const object *) this, env, enable, depth_begin, depth_end, depth_curve, transmit, transmit_curve);
}

void visual_server::environment_set_fog_height(const rid env, const bool enable, const real_t min_height, const real_t max_height, const real_t height_curve) {
	___godot_icall_void_RID_bool_float_float_float(___mb.mb_environment_set_fog_height, (const object *) this, env, enable, min_height, max_height, height_curve);
}

void visual_server::environment_set_glow(const rid env, const bool enable, const int64_t level_flags, const real_t intensity, const real_t strength, const real_t bloom_threshold, const int64_t blend_mode, const real_t hdr_bleed_threshold, const real_t hdr_bleed_scale, const real_t hdr_luminance_cap, const bool bicubic_upscale, const bool high_quality) {
	___godot_icall_void_RID_bool_int_float_float_float_int_float_float_float_bool_bool(___mb.mb_environment_set_glow, (const object *) this, env, enable, level_flags, intensity, strength, bloom_threshold, blend_mode, hdr_bleed_threshold, hdr_bleed_scale, hdr_luminance_cap, bicubic_upscale, high_quality);
}

void visual_server::environment_set_sky(const rid env, const rid sky_) {
	___godot_icall_void_RID_RID(___mb.mb_environment_set_sky, (const object *) this, env, sky_);
}

void visual_server::environment_set_sky_custom_fov(const rid env, const real_t scale) {
	___godot_icall_void_RID_float(___mb.mb_environment_set_sky_custom_fov, (const object *) this, env, scale);
}

void visual_server::environment_set_sky_orientation(const rid env, const basis orientation) {
	___godot_icall_void_RID_Basis(___mb.mb_environment_set_sky_orientation, (const object *) this, env, orientation);
}

void visual_server::environment_set_ssao(const rid env, const bool enable, const real_t radius, const real_t intensity, const real_t radius2, const real_t intensity2, const real_t bias, const real_t light_affect, const real_t ao_channel_affect, const color color_, const int64_t quality, const int64_t blur, const real_t bilateral_sharpness) {
	___godot_icall_void_RID_bool_float_float_float_float_float_float_float_Color_int_int_float(___mb.mb_environment_set_ssao, (const object *) this, env, enable, radius, intensity, radius2, intensity2, bias, light_affect, ao_channel_affect, color_, quality, blur, bilateral_sharpness);
}

void visual_server::environment_set_ssr(const rid env, const bool enable, const int64_t max_steps, const real_t fade_in, const real_t fade_out, const real_t depth_tolerance, const bool roughness) {
	___godot_icall_void_RID_bool_int_float_float_float_bool(___mb.mb_environment_set_ssr, (const object *) this, env, enable, max_steps, fade_in, fade_out, depth_tolerance, roughness);
}

void visual_server::environment_set_tonemap(const rid env, const int64_t tone_mapper, const real_t exposure, const real_t white, const bool auto_exposure, const real_t min_luminance, const real_t max_luminance, const real_t auto_exp_speed, const real_t auto_exp_grey) {
	___godot_icall_void_RID_int_float_float_bool_float_float_float_float(___mb.mb_environment_set_tonemap, (const object *) this, env, tone_mapper, exposure, white, auto_exposure, min_luminance, max_luminance, auto_exp_speed, auto_exp_grey);
}

void visual_server::finish() {
	___godot_icall_void(___mb.mb_finish, (const object *) this);
}

void visual_server::force_draw(const bool swap_buffers, const real_t frame_step) {
	___godot_icall_void_bool_float(___mb.mb_force_draw, (const object *) this, swap_buffers, frame_step);
}

void visual_server::force_sync() {
	___godot_icall_void(___mb.mb_force_sync, (const object *) this);
}

void visual_server::free_rid(const rid rid_) {
	___godot_icall_void_RID(___mb.mb_free_rid, (const object *) this, rid_);
}

int64_t visual_server::get_render_info(const int64_t info) {
	return ___godot_icall_int_int(___mb.mb_get_render_info, (const object *) this, info);
}

rid visual_server::get_test_cube() {
	return ___godot_icall_RID(___mb.mb_get_test_cube, (const object *) this);
}

rid visual_server::get_test_texture() {
	return ___godot_icall_RID(___mb.mb_get_test_texture, (const object *) this);
}

string visual_server::get_video_adapter_name() const {
	return ___godot_icall_String(___mb.mb_get_video_adapter_name, (const object *) this);
}

string visual_server::get_video_adapter_vendor() const {
	return ___godot_icall_String(___mb.mb_get_video_adapter_vendor, (const object *) this);
}

rid visual_server::get_white_texture() {
	return ___godot_icall_RID(___mb.mb_get_white_texture, (const object *) this);
}

rid visual_server::gi_probe_create() {
	return ___godot_icall_RID(___mb.mb_gi_probe_create, (const object *) this);
}

real_t visual_server::gi_probe_get_bias(const rid probe) const {
	return ___godot_icall_float_RID(___mb.mb_gi_probe_get_bias, (const object *) this, probe);
}

aabb visual_server::gi_probe_get_bounds(const rid probe) const {
	return ___godot_icall_AABB_RID(___mb.mb_gi_probe_get_bounds, (const object *) this, probe);
}

real_t visual_server::gi_probe_get_cell_size(const rid probe) const {
	return ___godot_icall_float_RID(___mb.mb_gi_probe_get_cell_size, (const object *) this, probe);
}

pool_int_array visual_server::gi_probe_get_dynamic_data(const rid probe) const {
	return ___godot_icall_PoolIntArray_RID(___mb.mb_gi_probe_get_dynamic_data, (const object *) this, probe);
}

int64_t visual_server::gi_probe_get_dynamic_range(const rid probe) const {
	return ___godot_icall_int_RID(___mb.mb_gi_probe_get_dynamic_range, (const object *) this, probe);
}

real_t visual_server::gi_probe_get_energy(const rid probe) const {
	return ___godot_icall_float_RID(___mb.mb_gi_probe_get_energy, (const object *) this, probe);
}

real_t visual_server::gi_probe_get_normal_bias(const rid probe) const {
	return ___godot_icall_float_RID(___mb.mb_gi_probe_get_normal_bias, (const object *) this, probe);
}

real_t visual_server::gi_probe_get_propagation(const rid probe) const {
	return ___godot_icall_float_RID(___mb.mb_gi_probe_get_propagation, (const object *) this, probe);
}

transform visual_server::gi_probe_get_to_cell_xform(const rid probe) const {
	return ___godot_icall_Transform_RID(___mb.mb_gi_probe_get_to_cell_xform, (const object *) this, probe);
}

bool visual_server::gi_probe_is_compressed(const rid probe) const {
	return ___godot_icall_bool_RID(___mb.mb_gi_probe_is_compressed, (const object *) this, probe);
}

bool visual_server::gi_probe_is_interior(const rid probe) const {
	return ___godot_icall_bool_RID(___mb.mb_gi_probe_is_interior, (const object *) this, probe);
}

void visual_server::gi_probe_set_bias(const rid probe, const real_t bias) {
	___godot_icall_void_RID_float(___mb.mb_gi_probe_set_bias, (const object *) this, probe, bias);
}

void visual_server::gi_probe_set_bounds(const rid probe, const aabb bounds) {
	___godot_icall_void_RID_AABB(___mb.mb_gi_probe_set_bounds, (const object *) this, probe, bounds);
}

void visual_server::gi_probe_set_cell_size(const rid probe, const real_t range_) {
	___godot_icall_void_RID_float(___mb.mb_gi_probe_set_cell_size, (const object *) this, probe, range_);
}

void visual_server::gi_probe_set_compress(const rid probe, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_gi_probe_set_compress, (const object *) this, probe, enable);
}

void visual_server::gi_probe_set_dynamic_data(const rid probe, const pool_int_array data) {
	___godot_icall_void_RID_PoolIntArray(___mb.mb_gi_probe_set_dynamic_data, (const object *) this, probe, data);
}

void visual_server::gi_probe_set_dynamic_range(const rid probe, const int64_t range_) {
	___godot_icall_void_RID_int(___mb.mb_gi_probe_set_dynamic_range, (const object *) this, probe, range_);
}

void visual_server::gi_probe_set_energy(const rid probe, const real_t energy) {
	___godot_icall_void_RID_float(___mb.mb_gi_probe_set_energy, (const object *) this, probe, energy);
}

void visual_server::gi_probe_set_interior(const rid probe, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_gi_probe_set_interior, (const object *) this, probe, enable);
}

void visual_server::gi_probe_set_normal_bias(const rid probe, const real_t bias) {
	___godot_icall_void_RID_float(___mb.mb_gi_probe_set_normal_bias, (const object *) this, probe, bias);
}

void visual_server::gi_probe_set_propagation(const rid probe, const real_t propagation) {
	___godot_icall_void_RID_float(___mb.mb_gi_probe_set_propagation, (const object *) this, probe, propagation);
}

void visual_server::gi_probe_set_to_cell_xform(const rid probe, const transform xform) {
	___godot_icall_void_RID_Transform(___mb.mb_gi_probe_set_to_cell_xform, (const object *) this, probe, xform);
}

bool visual_server::has_changed(const int64_t queried_priority) const {
	return ___godot_icall_bool_int(___mb.mb_has_changed, (const object *) this, queried_priority);
}

bool visual_server::has_feature(const int64_t feature) const {
	return ___godot_icall_bool_int(___mb.mb_has_feature, (const object *) this, feature);
}

bool visual_server::has_os_feature(const string feature) const {
	return ___godot_icall_bool_String(___mb.mb_has_os_feature, (const object *) this, feature);
}

void visual_server::immediate_begin(const rid immediate, const int64_t primitive, const rid texture_) {
	___godot_icall_void_RID_int_RID(___mb.mb_immediate_begin, (const object *) this, immediate, primitive, texture_);
}

void visual_server::immediate_clear(const rid immediate) {
	___godot_icall_void_RID(___mb.mb_immediate_clear, (const object *) this, immediate);
}

void visual_server::immediate_color(const rid immediate, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_immediate_color, (const object *) this, immediate, color_);
}

rid visual_server::immediate_create() {
	return ___godot_icall_RID(___mb.mb_immediate_create, (const object *) this);
}

void visual_server::immediate_end(const rid immediate) {
	___godot_icall_void_RID(___mb.mb_immediate_end, (const object *) this, immediate);
}

rid visual_server::immediate_get_material(const rid immediate) const {
	return ___godot_icall_RID_RID(___mb.mb_immediate_get_material, (const object *) this, immediate);
}

void visual_server::immediate_normal(const rid immediate, const vector3 normal) {
	___godot_icall_void_RID_Vector3(___mb.mb_immediate_normal, (const object *) this, immediate, normal);
}

void visual_server::immediate_set_material(const rid immediate, const rid material_) {
	___godot_icall_void_RID_RID(___mb.mb_immediate_set_material, (const object *) this, immediate, material_);
}

void visual_server::immediate_tangent(const rid immediate, const plane tangent) {
	___godot_icall_void_RID_Plane(___mb.mb_immediate_tangent, (const object *) this, immediate, tangent);
}

void visual_server::immediate_uv(const rid immediate, const vector2 tex_uv) {
	___godot_icall_void_RID_Vector2(___mb.mb_immediate_uv, (const object *) this, immediate, tex_uv);
}

void visual_server::immediate_uv2(const rid immediate, const vector2 tex_uv) {
	___godot_icall_void_RID_Vector2(___mb.mb_immediate_uv2, (const object *) this, immediate, tex_uv);
}

void visual_server::immediate_vertex(const rid immediate, const vector3 vertex) {
	___godot_icall_void_RID_Vector3(___mb.mb_immediate_vertex, (const object *) this, immediate, vertex);
}

void visual_server::immediate_vertex_2d(const rid immediate, const vector2 vertex) {
	___godot_icall_void_RID_Vector2(___mb.mb_immediate_vertex_2d, (const object *) this, immediate, vertex);
}

void visual_server::init() {
	___godot_icall_void(___mb.mb_init, (const object *) this);
}

void visual_server::instance_attach_object_instance_id(const rid instance, const int64_t id) {
	___godot_icall_void_RID_int(___mb.mb_instance_attach_object_instance_id, (const object *) this, instance, id);
}

void visual_server::instance_attach_skeleton(const rid instance, const rid skeleton_) {
	___godot_icall_void_RID_RID(___mb.mb_instance_attach_skeleton, (const object *) this, instance, skeleton_);
}

rid visual_server::instance_create() {
	return ___godot_icall_RID(___mb.mb_instance_create, (const object *) this);
}

rid visual_server::instance_create2(const rid base, const rid scenario) {
	return ___godot_icall_RID_RID_RID(___mb.mb_instance_create2, (const object *) this, base, scenario);
}

void visual_server::instance_geometry_set_as_instance_lod(const rid instance, const rid as_lod_of_instance) {
	___godot_icall_void_RID_RID(___mb.mb_instance_geometry_set_as_instance_lod, (const object *) this, instance, as_lod_of_instance);
}

void visual_server::instance_geometry_set_cast_shadows_setting(const rid instance, const int64_t shadow_casting_setting) {
	___godot_icall_void_RID_int(___mb.mb_instance_geometry_set_cast_shadows_setting, (const object *) this, instance, shadow_casting_setting);
}

void visual_server::instance_geometry_set_draw_range(const rid instance, const real_t min, const real_t max, const real_t min_margin, const real_t max_margin) {
	___godot_icall_void_RID_float_float_float_float(___mb.mb_instance_geometry_set_draw_range, (const object *) this, instance, min, max, min_margin, max_margin);
}

void visual_server::instance_geometry_set_flag(const rid instance, const int64_t flag, const bool enabled) {
	___godot_icall_void_RID_int_bool(___mb.mb_instance_geometry_set_flag, (const object *) this, instance, flag, enabled);
}

void visual_server::instance_geometry_set_material_overlay(const rid instance, const rid material_) {
	___godot_icall_void_RID_RID(___mb.mb_instance_geometry_set_material_overlay, (const object *) this, instance, material_);
}

void visual_server::instance_geometry_set_material_override(const rid instance, const rid material_) {
	___godot_icall_void_RID_RID(___mb.mb_instance_geometry_set_material_override, (const object *) this, instance, material_);
}

void visual_server::instance_set_base(const rid instance, const rid base) {
	___godot_icall_void_RID_RID(___mb.mb_instance_set_base, (const object *) this, instance, base);
}

void visual_server::instance_set_blend_shape_weight(const rid instance, const int64_t shape_, const real_t weight) {
	___godot_icall_void_RID_int_float(___mb.mb_instance_set_blend_shape_weight, (const object *) this, instance, shape_, weight);
}

void visual_server::instance_set_custom_aabb(const rid instance, const aabb aabb_) {
	___godot_icall_void_RID_AABB(___mb.mb_instance_set_custom_aabb, (const object *) this, instance, aabb_);
}

void visual_server::instance_set_exterior(const rid instance, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_instance_set_exterior, (const object *) this, instance, enabled);
}

void visual_server::instance_set_extra_visibility_margin(const rid instance, const real_t margin) {
	___godot_icall_void_RID_float(___mb.mb_instance_set_extra_visibility_margin, (const object *) this, instance, margin);
}

void visual_server::instance_set_layer_mask(const rid instance, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_instance_set_layer_mask, (const object *) this, instance, mask);
}

void visual_server::instance_set_scenario(const rid instance, const rid scenario) {
	___godot_icall_void_RID_RID(___mb.mb_instance_set_scenario, (const object *) this, instance, scenario);
}

void visual_server::instance_set_surface_material(const rid instance, const int64_t surface, const rid material_) {
	___godot_icall_void_RID_int_RID(___mb.mb_instance_set_surface_material, (const object *) this, instance, surface, material_);
}

void visual_server::instance_set_transform(const rid instance, const transform transform_) {
	___godot_icall_void_RID_Transform(___mb.mb_instance_set_transform, (const object *) this, instance, transform_);
}

void visual_server::instance_set_use_lightmap(const rid instance, const rid lightmap_instance, const rid lightmap, const int64_t lightmap_slice, const rect2 lightmap_uv_rect) {
	___godot_icall_void_RID_RID_RID_int_Rect2(___mb.mb_instance_set_use_lightmap, (const object *) this, instance, lightmap_instance, lightmap, lightmap_slice, lightmap_uv_rect);
}

void visual_server::instance_set_visible(const rid instance, const bool visible) {
	___godot_icall_void_RID_bool(___mb.mb_instance_set_visible, (const object *) this, instance, visible);
}

array visual_server::instances_cull_aabb(const aabb aabb_, const rid scenario) const {
	return ___godot_icall_Array_AABB_RID(___mb.mb_instances_cull_aabb, (const object *) this, aabb_, scenario);
}

array visual_server::instances_cull_convex(const array convex, const rid scenario) const {
	return ___godot_icall_Array_Array_RID(___mb.mb_instances_cull_convex, (const object *) this, convex, scenario);
}

array visual_server::instances_cull_ray(const vector3 from, const vector3 to, const rid scenario) const {
	return ___godot_icall_Array_Vector3_Vector3_RID(___mb.mb_instances_cull_ray, (const object *) this, from, to, scenario);
}

bool visual_server::is_render_loop_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_render_loop_enabled, (const object *) this);
}

void visual_server::light_directional_set_blend_splits(const rid light_, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_light_directional_set_blend_splits, (const object *) this, light_, enable);
}

void visual_server::light_directional_set_shadow_depth_range_mode(const rid light_, const int64_t range_mode) {
	___godot_icall_void_RID_int(___mb.mb_light_directional_set_shadow_depth_range_mode, (const object *) this, light_, range_mode);
}

void visual_server::light_directional_set_shadow_mode(const rid light_, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_light_directional_set_shadow_mode, (const object *) this, light_, mode);
}

void visual_server::light_omni_set_shadow_detail(const rid light_, const int64_t detail) {
	___godot_icall_void_RID_int(___mb.mb_light_omni_set_shadow_detail, (const object *) this, light_, detail);
}

void visual_server::light_omni_set_shadow_mode(const rid light_, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_light_omni_set_shadow_mode, (const object *) this, light_, mode);
}

void visual_server::light_set_bake_mode(const rid light_, const int64_t bake_mode) {
	___godot_icall_void_RID_int(___mb.mb_light_set_bake_mode, (const object *) this, light_, bake_mode);
}

void visual_server::light_set_color(const rid light_, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_light_set_color, (const object *) this, light_, color_);
}

void visual_server::light_set_cull_mask(const rid light_, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_light_set_cull_mask, (const object *) this, light_, mask);
}

void visual_server::light_set_negative(const rid light_, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_light_set_negative, (const object *) this, light_, enable);
}

void visual_server::light_set_param(const rid light_, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_light_set_param, (const object *) this, light_, param, value);
}

void visual_server::light_set_projector(const rid light_, const rid texture_) {
	___godot_icall_void_RID_RID(___mb.mb_light_set_projector, (const object *) this, light_, texture_);
}

void visual_server::light_set_reverse_cull_face_mode(const rid light_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_light_set_reverse_cull_face_mode, (const object *) this, light_, enabled);
}

void visual_server::light_set_shadow(const rid light_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_light_set_shadow, (const object *) this, light_, enabled);
}

void visual_server::light_set_shadow_color(const rid light_, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_light_set_shadow_color, (const object *) this, light_, color_);
}

void visual_server::light_set_use_gi(const rid light_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_light_set_use_gi, (const object *) this, light_, enabled);
}

rid visual_server::lightmap_capture_create() {
	return ___godot_icall_RID(___mb.mb_lightmap_capture_create, (const object *) this);
}

aabb visual_server::lightmap_capture_get_bounds(const rid capture) const {
	return ___godot_icall_AABB_RID(___mb.mb_lightmap_capture_get_bounds, (const object *) this, capture);
}

real_t visual_server::lightmap_capture_get_energy(const rid capture) const {
	return ___godot_icall_float_RID(___mb.mb_lightmap_capture_get_energy, (const object *) this, capture);
}

pool_byte_array visual_server::lightmap_capture_get_octree(const rid capture) const {
	return ___godot_icall_PoolByteArray_RID(___mb.mb_lightmap_capture_get_octree, (const object *) this, capture);
}

int64_t visual_server::lightmap_capture_get_octree_cell_subdiv(const rid capture) const {
	return ___godot_icall_int_RID(___mb.mb_lightmap_capture_get_octree_cell_subdiv, (const object *) this, capture);
}

transform visual_server::lightmap_capture_get_octree_cell_transform(const rid capture) const {
	return ___godot_icall_Transform_RID(___mb.mb_lightmap_capture_get_octree_cell_transform, (const object *) this, capture);
}

bool visual_server::lightmap_capture_is_interior(const rid capture) const {
	return ___godot_icall_bool_RID(___mb.mb_lightmap_capture_is_interior, (const object *) this, capture);
}

void visual_server::lightmap_capture_set_bounds(const rid capture, const aabb bounds) {
	___godot_icall_void_RID_AABB(___mb.mb_lightmap_capture_set_bounds, (const object *) this, capture, bounds);
}

void visual_server::lightmap_capture_set_energy(const rid capture, const real_t energy) {
	___godot_icall_void_RID_float(___mb.mb_lightmap_capture_set_energy, (const object *) this, capture, energy);
}

void visual_server::lightmap_capture_set_interior(const rid capture, const bool interior) {
	___godot_icall_void_RID_bool(___mb.mb_lightmap_capture_set_interior, (const object *) this, capture, interior);
}

void visual_server::lightmap_capture_set_octree(const rid capture, const pool_byte_array octree) {
	___godot_icall_void_RID_PoolByteArray(___mb.mb_lightmap_capture_set_octree, (const object *) this, capture, octree);
}

void visual_server::lightmap_capture_set_octree_cell_subdiv(const rid capture, const int64_t subdiv) {
	___godot_icall_void_RID_int(___mb.mb_lightmap_capture_set_octree_cell_subdiv, (const object *) this, capture, subdiv);
}

void visual_server::lightmap_capture_set_octree_cell_transform(const rid capture, const transform xform) {
	___godot_icall_void_RID_Transform(___mb.mb_lightmap_capture_set_octree_cell_transform, (const object *) this, capture, xform);
}

rid visual_server::make_sphere_mesh(const int64_t latitudes, const int64_t longitudes, const real_t radius) {
	return ___godot_icall_RID_int_int_float(___mb.mb_make_sphere_mesh, (const object *) this, latitudes, longitudes, radius);
}

rid visual_server::material_create() {
	return ___godot_icall_RID(___mb.mb_material_create, (const object *) this);
}

variant visual_server::material_get_param(const rid material_, const string parameter) const {
	return ___godot_icall_Variant_RID_String(___mb.mb_material_get_param, (const object *) this, material_, parameter);
}

variant visual_server::material_get_param_default(const rid material_, const string parameter) const {
	return ___godot_icall_Variant_RID_String(___mb.mb_material_get_param_default, (const object *) this, material_, parameter);
}

rid visual_server::material_get_shader(const rid shader_material_) const {
	return ___godot_icall_RID_RID(___mb.mb_material_get_shader, (const object *) this, shader_material_);
}

void visual_server::material_set_line_width(const rid material_, const real_t width) {
	___godot_icall_void_RID_float(___mb.mb_material_set_line_width, (const object *) this, material_, width);
}

void visual_server::material_set_next_pass(const rid material_, const rid next_material) {
	___godot_icall_void_RID_RID(___mb.mb_material_set_next_pass, (const object *) this, material_, next_material);
}

void visual_server::material_set_param(const rid material_, const string parameter, const variant value) {
	___godot_icall_void_RID_String_Variant(___mb.mb_material_set_param, (const object *) this, material_, parameter, value);
}

void visual_server::material_set_render_priority(const rid material_, const int64_t priority) {
	___godot_icall_void_RID_int(___mb.mb_material_set_render_priority, (const object *) this, material_, priority);
}

void visual_server::material_set_shader(const rid shader_material_, const rid shader_) {
	___godot_icall_void_RID_RID(___mb.mb_material_set_shader, (const object *) this, shader_material_, shader_);
}

void visual_server::mesh_add_surface_from_arrays(const rid mesh_, const int64_t primitive, const array arrays, const array blend_shapes, const int64_t compress_format) {
	___godot_icall_void_RID_int_Array_Array_int(___mb.mb_mesh_add_surface_from_arrays, (const object *) this, mesh_, primitive, arrays, blend_shapes, compress_format);
}

void visual_server::mesh_clear(const rid mesh_) {
	___godot_icall_void_RID(___mb.mb_mesh_clear, (const object *) this, mesh_);
}

rid visual_server::mesh_create() {
	return ___godot_icall_RID(___mb.mb_mesh_create, (const object *) this);
}

int64_t visual_server::mesh_get_blend_shape_count(const rid mesh_) const {
	return ___godot_icall_int_RID(___mb.mb_mesh_get_blend_shape_count, (const object *) this, mesh_);
}

visual_server::BlendShapeMode visual_server::mesh_get_blend_shape_mode(const rid mesh_) const {
	return (visual_server::BlendShapeMode) ___godot_icall_int_RID(___mb.mb_mesh_get_blend_shape_mode, (const object *) this, mesh_);
}

aabb visual_server::mesh_get_custom_aabb(const rid mesh_) const {
	return ___godot_icall_AABB_RID(___mb.mb_mesh_get_custom_aabb, (const object *) this, mesh_);
}

int64_t visual_server::mesh_get_surface_count(const rid mesh_) const {
	return ___godot_icall_int_RID(___mb.mb_mesh_get_surface_count, (const object *) this, mesh_);
}

void visual_server::mesh_remove_surface(const rid mesh_, const int64_t index) {
	___godot_icall_void_RID_int(___mb.mb_mesh_remove_surface, (const object *) this, mesh_, index);
}

void visual_server::mesh_set_blend_shape_count(const rid mesh_, const int64_t amount) {
	___godot_icall_void_RID_int(___mb.mb_mesh_set_blend_shape_count, (const object *) this, mesh_, amount);
}

void visual_server::mesh_set_blend_shape_mode(const rid mesh_, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_mesh_set_blend_shape_mode, (const object *) this, mesh_, mode);
}

void visual_server::mesh_set_custom_aabb(const rid mesh_, const aabb aabb_) {
	___godot_icall_void_RID_AABB(___mb.mb_mesh_set_custom_aabb, (const object *) this, mesh_, aabb_);
}

aabb visual_server::mesh_surface_get_aabb(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_AABB_RID_int(___mb.mb_mesh_surface_get_aabb, (const object *) this, mesh_, surface);
}

pool_byte_array visual_server::mesh_surface_get_array(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_PoolByteArray_RID_int(___mb.mb_mesh_surface_get_array, (const object *) this, mesh_, surface);
}

int64_t visual_server::mesh_surface_get_array_index_len(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_int_RID_int(___mb.mb_mesh_surface_get_array_index_len, (const object *) this, mesh_, surface);
}

int64_t visual_server::mesh_surface_get_array_len(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_int_RID_int(___mb.mb_mesh_surface_get_array_len, (const object *) this, mesh_, surface);
}

array visual_server::mesh_surface_get_arrays(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_Array_RID_int(___mb.mb_mesh_surface_get_arrays, (const object *) this, mesh_, surface);
}

array visual_server::mesh_surface_get_blend_shape_arrays(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_Array_RID_int(___mb.mb_mesh_surface_get_blend_shape_arrays, (const object *) this, mesh_, surface);
}

int64_t visual_server::mesh_surface_get_format(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_int_RID_int(___mb.mb_mesh_surface_get_format, (const object *) this, mesh_, surface);
}

int64_t visual_server::mesh_surface_get_format_offset(const int64_t format, const int64_t vertex_len, const int64_t index_len, const int64_t array_index) const {
	return ___godot_icall_int_int_int_int_int(___mb.mb_mesh_surface_get_format_offset, (const object *) this, format, vertex_len, index_len, array_index);
}

int64_t visual_server::mesh_surface_get_format_stride(const int64_t format, const int64_t vertex_len, const int64_t index_len, const int64_t array_index) const {
	return ___godot_icall_int_int_int_int_int(___mb.mb_mesh_surface_get_format_stride, (const object *) this, format, vertex_len, index_len, array_index);
}

pool_byte_array visual_server::mesh_surface_get_index_array(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_PoolByteArray_RID_int(___mb.mb_mesh_surface_get_index_array, (const object *) this, mesh_, surface);
}

rid visual_server::mesh_surface_get_material(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_RID_RID_int(___mb.mb_mesh_surface_get_material, (const object *) this, mesh_, surface);
}

visual_server::PrimitiveType visual_server::mesh_surface_get_primitive_type(const rid mesh_, const int64_t surface) const {
	return (visual_server::PrimitiveType) ___godot_icall_int_RID_int(___mb.mb_mesh_surface_get_primitive_type, (const object *) this, mesh_, surface);
}

array visual_server::mesh_surface_get_skeleton_aabb(const rid mesh_, const int64_t surface) const {
	return ___godot_icall_Array_RID_int(___mb.mb_mesh_surface_get_skeleton_aabb, (const object *) this, mesh_, surface);
}

void visual_server::mesh_surface_set_material(const rid mesh_, const int64_t surface, const rid material_) {
	___godot_icall_void_RID_int_RID(___mb.mb_mesh_surface_set_material, (const object *) this, mesh_, surface, material_);
}

void visual_server::mesh_surface_update_region(const rid mesh_, const int64_t surface, const int64_t offset, const pool_byte_array data) {
	___godot_icall_void_RID_int_int_PoolByteArray(___mb.mb_mesh_surface_update_region, (const object *) this, mesh_, surface, offset, data);
}

void visual_server::multimesh_allocate(const rid multimesh, const int64_t instances, const int64_t transform_format, const int64_t color_format, const int64_t custom_data_format) {
	___godot_icall_void_RID_int_int_int_int(___mb.mb_multimesh_allocate, (const object *) this, multimesh, instances, transform_format, color_format, custom_data_format);
}

rid visual_server::multimesh_create() {
	return ___godot_icall_RID(___mb.mb_multimesh_create, (const object *) this);
}

aabb visual_server::multimesh_get_aabb(const rid multimesh) const {
	return ___godot_icall_AABB_RID(___mb.mb_multimesh_get_aabb, (const object *) this, multimesh);
}

int64_t visual_server::multimesh_get_instance_count(const rid multimesh) const {
	return ___godot_icall_int_RID(___mb.mb_multimesh_get_instance_count, (const object *) this, multimesh);
}

rid visual_server::multimesh_get_mesh(const rid multimesh) const {
	return ___godot_icall_RID_RID(___mb.mb_multimesh_get_mesh, (const object *) this, multimesh);
}

int64_t visual_server::multimesh_get_visible_instances(const rid multimesh) const {
	return ___godot_icall_int_RID(___mb.mb_multimesh_get_visible_instances, (const object *) this, multimesh);
}

color visual_server::multimesh_instance_get_color(const rid multimesh, const int64_t index) const {
	return ___godot_icall_Color_RID_int(___mb.mb_multimesh_instance_get_color, (const object *) this, multimesh, index);
}

color visual_server::multimesh_instance_get_custom_data(const rid multimesh, const int64_t index) const {
	return ___godot_icall_Color_RID_int(___mb.mb_multimesh_instance_get_custom_data, (const object *) this, multimesh, index);
}

transform visual_server::multimesh_instance_get_transform(const rid multimesh, const int64_t index) const {
	return ___godot_icall_Transform_RID_int(___mb.mb_multimesh_instance_get_transform, (const object *) this, multimesh, index);
}

transform2d visual_server::multimesh_instance_get_transform_2d(const rid multimesh, const int64_t index) const {
	return ___godot_icall_Transform2D_RID_int(___mb.mb_multimesh_instance_get_transform_2d, (const object *) this, multimesh, index);
}

void visual_server::multimesh_instance_set_color(const rid multimesh, const int64_t index, const color color_) {
	___godot_icall_void_RID_int_Color(___mb.mb_multimesh_instance_set_color, (const object *) this, multimesh, index, color_);
}

void visual_server::multimesh_instance_set_custom_data(const rid multimesh, const int64_t index, const color custom_data) {
	___godot_icall_void_RID_int_Color(___mb.mb_multimesh_instance_set_custom_data, (const object *) this, multimesh, index, custom_data);
}

void visual_server::multimesh_instance_set_transform(const rid multimesh, const int64_t index, const transform transform_) {
	___godot_icall_void_RID_int_Transform(___mb.mb_multimesh_instance_set_transform, (const object *) this, multimesh, index, transform_);
}

void visual_server::multimesh_instance_set_transform_2d(const rid multimesh, const int64_t index, const transform2d transform_) {
	___godot_icall_void_RID_int_Transform2D(___mb.mb_multimesh_instance_set_transform_2d, (const object *) this, multimesh, index, transform_);
}

void visual_server::multimesh_set_as_bulk_array(const rid multimesh, const pool_real_array array_) {
	___godot_icall_void_RID_PoolRealArray(___mb.mb_multimesh_set_as_bulk_array, (const object *) this, multimesh, array_);
}

void visual_server::multimesh_set_mesh(const rid multimesh, const rid mesh_) {
	___godot_icall_void_RID_RID(___mb.mb_multimesh_set_mesh, (const object *) this, multimesh, mesh_);
}

void visual_server::multimesh_set_visible_instances(const rid multimesh, const int64_t visible) {
	___godot_icall_void_RID_int(___mb.mb_multimesh_set_visible_instances, (const object *) this, multimesh, visible);
}

rid visual_server::omni_light_create() {
	return ___godot_icall_RID(___mb.mb_omni_light_create, (const object *) this);
}

rid visual_server::particles_create() {
	return ___godot_icall_RID(___mb.mb_particles_create, (const object *) this);
}

aabb visual_server::particles_get_current_aabb(const rid particles_) {
	return ___godot_icall_AABB_RID(___mb.mb_particles_get_current_aabb, (const object *) this, particles_);
}

bool visual_server::particles_get_emitting(const rid particles_) {
	return ___godot_icall_bool_RID(___mb.mb_particles_get_emitting, (const object *) this, particles_);
}

bool visual_server::particles_is_inactive(const rid particles_) {
	return ___godot_icall_bool_RID(___mb.mb_particles_is_inactive, (const object *) this, particles_);
}

void visual_server::particles_request_process(const rid particles_) {
	___godot_icall_void_RID(___mb.mb_particles_request_process, (const object *) this, particles_);
}

void visual_server::particles_restart(const rid particles_) {
	___godot_icall_void_RID(___mb.mb_particles_restart, (const object *) this, particles_);
}

void visual_server::particles_set_amount(const rid particles_, const int64_t amount) {
	___godot_icall_void_RID_int(___mb.mb_particles_set_amount, (const object *) this, particles_, amount);
}

void visual_server::particles_set_custom_aabb(const rid particles_, const aabb aabb_) {
	___godot_icall_void_RID_AABB(___mb.mb_particles_set_custom_aabb, (const object *) this, particles_, aabb_);
}

void visual_server::particles_set_draw_order(const rid particles_, const int64_t order) {
	___godot_icall_void_RID_int(___mb.mb_particles_set_draw_order, (const object *) this, particles_, order);
}

void visual_server::particles_set_draw_pass_mesh(const rid particles_, const int64_t pass, const rid mesh_) {
	___godot_icall_void_RID_int_RID(___mb.mb_particles_set_draw_pass_mesh, (const object *) this, particles_, pass, mesh_);
}

void visual_server::particles_set_draw_passes(const rid particles_, const int64_t count) {
	___godot_icall_void_RID_int(___mb.mb_particles_set_draw_passes, (const object *) this, particles_, count);
}

void visual_server::particles_set_emission_transform(const rid particles_, const transform transform_) {
	___godot_icall_void_RID_Transform(___mb.mb_particles_set_emission_transform, (const object *) this, particles_, transform_);
}

void visual_server::particles_set_emitting(const rid particles_, const bool emitting) {
	___godot_icall_void_RID_bool(___mb.mb_particles_set_emitting, (const object *) this, particles_, emitting);
}

void visual_server::particles_set_explosiveness_ratio(const rid particles_, const real_t ratio) {
	___godot_icall_void_RID_float(___mb.mb_particles_set_explosiveness_ratio, (const object *) this, particles_, ratio);
}

void visual_server::particles_set_fixed_fps(const rid particles_, const int64_t fps) {
	___godot_icall_void_RID_int(___mb.mb_particles_set_fixed_fps, (const object *) this, particles_, fps);
}

void visual_server::particles_set_fractional_delta(const rid particles_, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_particles_set_fractional_delta, (const object *) this, particles_, enable);
}

void visual_server::particles_set_lifetime(const rid particles_, const real_t lifetime) {
	___godot_icall_void_RID_float(___mb.mb_particles_set_lifetime, (const object *) this, particles_, lifetime);
}

void visual_server::particles_set_one_shot(const rid particles_, const bool one_shot) {
	___godot_icall_void_RID_bool(___mb.mb_particles_set_one_shot, (const object *) this, particles_, one_shot);
}

void visual_server::particles_set_pre_process_time(const rid particles_, const real_t time_) {
	___godot_icall_void_RID_float(___mb.mb_particles_set_pre_process_time, (const object *) this, particles_, time_);
}

void visual_server::particles_set_process_material(const rid particles_, const rid material_) {
	___godot_icall_void_RID_RID(___mb.mb_particles_set_process_material, (const object *) this, particles_, material_);
}

void visual_server::particles_set_randomness_ratio(const rid particles_, const real_t ratio) {
	___godot_icall_void_RID_float(___mb.mb_particles_set_randomness_ratio, (const object *) this, particles_, ratio);
}

void visual_server::particles_set_speed_scale(const rid particles_, const real_t scale) {
	___godot_icall_void_RID_float(___mb.mb_particles_set_speed_scale, (const object *) this, particles_, scale);
}

void visual_server::particles_set_use_local_coordinates(const rid particles_, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_particles_set_use_local_coordinates, (const object *) this, particles_, enable);
}

rid visual_server::reflection_probe_create() {
	return ___godot_icall_RID(___mb.mb_reflection_probe_create, (const object *) this);
}

void visual_server::reflection_probe_set_as_interior(const rid probe, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_reflection_probe_set_as_interior, (const object *) this, probe, enable);
}

void visual_server::reflection_probe_set_cull_mask(const rid probe, const int64_t layers) {
	___godot_icall_void_RID_int(___mb.mb_reflection_probe_set_cull_mask, (const object *) this, probe, layers);
}

void visual_server::reflection_probe_set_enable_box_projection(const rid probe, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_reflection_probe_set_enable_box_projection, (const object *) this, probe, enable);
}

void visual_server::reflection_probe_set_enable_shadows(const rid probe, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_reflection_probe_set_enable_shadows, (const object *) this, probe, enable);
}

void visual_server::reflection_probe_set_extents(const rid probe, const vector3 extents) {
	___godot_icall_void_RID_Vector3(___mb.mb_reflection_probe_set_extents, (const object *) this, probe, extents);
}

void visual_server::reflection_probe_set_intensity(const rid probe, const real_t intensity) {
	___godot_icall_void_RID_float(___mb.mb_reflection_probe_set_intensity, (const object *) this, probe, intensity);
}

void visual_server::reflection_probe_set_interior_ambient(const rid probe, const color color_) {
	___godot_icall_void_RID_Color(___mb.mb_reflection_probe_set_interior_ambient, (const object *) this, probe, color_);
}

void visual_server::reflection_probe_set_interior_ambient_energy(const rid probe, const real_t energy) {
	___godot_icall_void_RID_float(___mb.mb_reflection_probe_set_interior_ambient_energy, (const object *) this, probe, energy);
}

void visual_server::reflection_probe_set_interior_ambient_probe_contribution(const rid probe, const real_t contrib) {
	___godot_icall_void_RID_float(___mb.mb_reflection_probe_set_interior_ambient_probe_contribution, (const object *) this, probe, contrib);
}

void visual_server::reflection_probe_set_max_distance(const rid probe, const real_t distance) {
	___godot_icall_void_RID_float(___mb.mb_reflection_probe_set_max_distance, (const object *) this, probe, distance);
}

void visual_server::reflection_probe_set_origin_offset(const rid probe, const vector3 offset) {
	___godot_icall_void_RID_Vector3(___mb.mb_reflection_probe_set_origin_offset, (const object *) this, probe, offset);
}

void visual_server::reflection_probe_set_update_mode(const rid probe, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_reflection_probe_set_update_mode, (const object *) this, probe, mode);
}

void visual_server::request_frame_drawn_callback(const object *where, const string method, const variant userdata) {
	___godot_icall_void_Object_String_Variant(___mb.mb_request_frame_drawn_callback, (const object *) this, where, method, userdata);
}

rid visual_server::scenario_create() {
	return ___godot_icall_RID(___mb.mb_scenario_create, (const object *) this);
}

void visual_server::scenario_set_debug(const rid scenario, const int64_t debug_mode) {
	___godot_icall_void_RID_int(___mb.mb_scenario_set_debug, (const object *) this, scenario, debug_mode);
}

void visual_server::scenario_set_environment(const rid scenario, const rid environment_) {
	___godot_icall_void_RID_RID(___mb.mb_scenario_set_environment, (const object *) this, scenario, environment_);
}

void visual_server::scenario_set_fallback_environment(const rid scenario, const rid environment_) {
	___godot_icall_void_RID_RID(___mb.mb_scenario_set_fallback_environment, (const object *) this, scenario, environment_);
}

void visual_server::scenario_set_reflection_atlas_size(const rid scenario, const int64_t size, const int64_t subdiv) {
	___godot_icall_void_RID_int_int(___mb.mb_scenario_set_reflection_atlas_size, (const object *) this, scenario, size, subdiv);
}

void visual_server::set_boot_image(const ref<image> image_, const color color_, const bool scale, const bool use_filter) {
	___godot_icall_void_Object_Color_bool_bool(___mb.mb_set_boot_image, (const object *) this, image_.ptr(), color_, scale, use_filter);
}

void visual_server::set_debug_generate_wireframes(const bool generate) {
	___godot_icall_void_bool(___mb.mb_set_debug_generate_wireframes, (const object *) this, generate);
}

void visual_server::set_default_clear_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_default_clear_color, (const object *) this, color_);
}

void visual_server::set_render_loop_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_render_loop_enabled, (const object *) this, enabled);
}

void visual_server::set_shader_async_hidden_forbidden(const bool forbidden) {
	___godot_icall_void_bool(___mb.mb_set_shader_async_hidden_forbidden, (const object *) this, forbidden);
}

void visual_server::set_shader_time_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_shader_time_scale, (const object *) this, scale);
}

void visual_server::set_use_occlusion_culling(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_occlusion_culling, (const object *) this, enable);
}

rid visual_server::shader_create() {
	return ___godot_icall_RID(___mb.mb_shader_create, (const object *) this);
}

string visual_server::shader_get_code(const rid shader_) const {
	return ___godot_icall_String_RID(___mb.mb_shader_get_code, (const object *) this, shader_);
}

rid visual_server::shader_get_default_texture_param(const rid shader_, const string name) const {
	return ___godot_icall_RID_RID_String(___mb.mb_shader_get_default_texture_param, (const object *) this, shader_, name);
}

array visual_server::shader_get_param_list(const rid shader_) const {
	return ___godot_icall_Array_RID(___mb.mb_shader_get_param_list, (const object *) this, shader_);
}

void visual_server::shader_set_code(const rid shader_, const string code) {
	___godot_icall_void_RID_String(___mb.mb_shader_set_code, (const object *) this, shader_, code);
}

void visual_server::shader_set_default_texture_param(const rid shader_, const string name, const rid texture_) {
	___godot_icall_void_RID_String_RID(___mb.mb_shader_set_default_texture_param, (const object *) this, shader_, name, texture_);
}

void visual_server::skeleton_allocate(const rid skeleton_, const int64_t bones, const bool is_2d_skeleton) {
	___godot_icall_void_RID_int_bool(___mb.mb_skeleton_allocate, (const object *) this, skeleton_, bones, is_2d_skeleton);
}

transform visual_server::skeleton_bone_get_transform(const rid skeleton_, const int64_t bone) const {
	return ___godot_icall_Transform_RID_int(___mb.mb_skeleton_bone_get_transform, (const object *) this, skeleton_, bone);
}

transform2d visual_server::skeleton_bone_get_transform_2d(const rid skeleton_, const int64_t bone) const {
	return ___godot_icall_Transform2D_RID_int(___mb.mb_skeleton_bone_get_transform_2d, (const object *) this, skeleton_, bone);
}

void visual_server::skeleton_bone_set_transform(const rid skeleton_, const int64_t bone, const transform transform_) {
	___godot_icall_void_RID_int_Transform(___mb.mb_skeleton_bone_set_transform, (const object *) this, skeleton_, bone, transform_);
}

void visual_server::skeleton_bone_set_transform_2d(const rid skeleton_, const int64_t bone, const transform2d transform_) {
	___godot_icall_void_RID_int_Transform2D(___mb.mb_skeleton_bone_set_transform_2d, (const object *) this, skeleton_, bone, transform_);
}

rid visual_server::skeleton_create() {
	return ___godot_icall_RID(___mb.mb_skeleton_create, (const object *) this);
}

int64_t visual_server::skeleton_get_bone_count(const rid skeleton_) const {
	return ___godot_icall_int_RID(___mb.mb_skeleton_get_bone_count, (const object *) this, skeleton_);
}

rid visual_server::sky_create() {
	return ___godot_icall_RID(___mb.mb_sky_create, (const object *) this);
}

void visual_server::sky_set_texture(const rid sky_, const rid cube_map_, const int64_t radiance_size) {
	___godot_icall_void_RID_RID_int(___mb.mb_sky_set_texture, (const object *) this, sky_, cube_map_, radiance_size);
}

rid visual_server::spot_light_create() {
	return ___godot_icall_RID(___mb.mb_spot_light_create, (const object *) this);
}

void visual_server::sync() {
	___godot_icall_void(___mb.mb_sync, (const object *) this);
}

void visual_server::texture_allocate(const rid texture_, const int64_t width, const int64_t height, const int64_t depth_3d, const int64_t format, const int64_t type, const int64_t flags) {
	___godot_icall_void_RID_int_int_int_int_int_int(___mb.mb_texture_allocate, (const object *) this, texture_, width, height, depth_3d, format, type, flags);
}

void visual_server::texture_bind(const rid texture_, const int64_t number) {
	___godot_icall_void_RID_int(___mb.mb_texture_bind, (const object *) this, texture_, number);
}

rid visual_server::texture_create() {
	return ___godot_icall_RID(___mb.mb_texture_create, (const object *) this);
}

rid visual_server::texture_create_from_image(const ref<image> image_, const int64_t flags) {
	return ___godot_icall_RID_Object_int(___mb.mb_texture_create_from_image, (const object *) this, image_.ptr(), flags);
}

array visual_server::texture_debug_usage() {
	return ___godot_icall_Array(___mb.mb_texture_debug_usage, (const object *) this);
}

ref<image> visual_server::texture_get_data(const rid texture_, const int64_t cube_side) const {
	return ref<image>::__internal_constructor(___godot_icall_Object_RID_int(___mb.mb_texture_get_data, (const object *) this, texture_, cube_side));
}

int64_t visual_server::texture_get_depth(const rid texture_) const {
	return ___godot_icall_int_RID(___mb.mb_texture_get_depth, (const object *) this, texture_);
}

int64_t visual_server::texture_get_flags(const rid texture_) const {
	return ___godot_icall_int_RID(___mb.mb_texture_get_flags, (const object *) this, texture_);
}

image::Format visual_server::texture_get_format(const rid texture_) const {
	return (image::Format) ___godot_icall_int_RID(___mb.mb_texture_get_format, (const object *) this, texture_);
}

int64_t visual_server::texture_get_height(const rid texture_) const {
	return ___godot_icall_int_RID(___mb.mb_texture_get_height, (const object *) this, texture_);
}

string visual_server::texture_get_path(const rid texture_) const {
	return ___godot_icall_String_RID(___mb.mb_texture_get_path, (const object *) this, texture_);
}

int64_t visual_server::texture_get_texid(const rid texture_) const {
	return ___godot_icall_int_RID(___mb.mb_texture_get_texid, (const object *) this, texture_);
}

visual_server::TextureType visual_server::texture_get_type(const rid texture_) const {
	return (visual_server::TextureType) ___godot_icall_int_RID(___mb.mb_texture_get_type, (const object *) this, texture_);
}

int64_t visual_server::texture_get_width(const rid texture_) const {
	return ___godot_icall_int_RID(___mb.mb_texture_get_width, (const object *) this, texture_);
}

void visual_server::texture_set_data(const rid texture_, const ref<image> image_, const int64_t layer) {
	___godot_icall_void_RID_Object_int(___mb.mb_texture_set_data, (const object *) this, texture_, image_.ptr(), layer);
}

void visual_server::texture_set_data_partial(const rid texture_, const ref<image> image_, const int64_t src_x, const int64_t src_y, const int64_t src_w, const int64_t src_h, const int64_t dst_x, const int64_t dst_y, const int64_t dst_mip, const int64_t layer) {
	___godot_icall_void_RID_Object_int_int_int_int_int_int_int_int(___mb.mb_texture_set_data_partial, (const object *) this, texture_, image_.ptr(), src_x, src_y, src_w, src_h, dst_x, dst_y, dst_mip, layer);
}

void visual_server::texture_set_flags(const rid texture_, const int64_t flags) {
	___godot_icall_void_RID_int(___mb.mb_texture_set_flags, (const object *) this, texture_, flags);
}

void visual_server::texture_set_path(const rid texture_, const string path_) {
	___godot_icall_void_RID_String(___mb.mb_texture_set_path, (const object *) this, texture_, path_);
}

void visual_server::texture_set_proxy(const rid proxy, const rid base) {
	___godot_icall_void_RID_RID(___mb.mb_texture_set_proxy, (const object *) this, proxy, base);
}

void visual_server::texture_set_shrink_all_x2_on_set_data(const bool shrink) {
	___godot_icall_void_bool(___mb.mb_texture_set_shrink_all_x2_on_set_data, (const object *) this, shrink);
}

void visual_server::texture_set_size_override(const rid texture_, const int64_t width, const int64_t height, const int64_t depth) {
	___godot_icall_void_RID_int_int_int(___mb.mb_texture_set_size_override, (const object *) this, texture_, width, height, depth);
}

void visual_server::textures_keep_original(const bool enable) {
	___godot_icall_void_bool(___mb.mb_textures_keep_original, (const object *) this, enable);
}

void visual_server::viewport_attach_camera(const rid viewport_, const rid camera_) {
	___godot_icall_void_RID_RID(___mb.mb_viewport_attach_camera, (const object *) this, viewport_, camera_);
}

void visual_server::viewport_attach_canvas(const rid viewport_, const rid canvas) {
	___godot_icall_void_RID_RID(___mb.mb_viewport_attach_canvas, (const object *) this, viewport_, canvas);
}

void visual_server::viewport_attach_to_screen(const rid viewport_, const rect2 rect, const int64_t screen) {
	___godot_icall_void_RID_Rect2_int(___mb.mb_viewport_attach_to_screen, (const object *) this, viewport_, rect, screen);
}

rid visual_server::viewport_create() {
	return ___godot_icall_RID(___mb.mb_viewport_create, (const object *) this);
}

void visual_server::viewport_detach(const rid viewport_) {
	___godot_icall_void_RID(___mb.mb_viewport_detach, (const object *) this, viewport_);
}

int64_t visual_server::viewport_get_render_info(const rid viewport_, const int64_t info) {
	return ___godot_icall_int_RID_int(___mb.mb_viewport_get_render_info, (const object *) this, viewport_, info);
}

rid visual_server::viewport_get_texture(const rid viewport_) const {
	return ___godot_icall_RID_RID(___mb.mb_viewport_get_texture, (const object *) this, viewport_);
}

void visual_server::viewport_remove_canvas(const rid viewport_, const rid canvas) {
	___godot_icall_void_RID_RID(___mb.mb_viewport_remove_canvas, (const object *) this, viewport_, canvas);
}

void visual_server::viewport_set_active(const rid viewport_, const bool active) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_active, (const object *) this, viewport_, active);
}

void visual_server::viewport_set_canvas_stacking(const rid viewport_, const rid canvas, const int64_t layer, const int64_t sublayer) {
	___godot_icall_void_RID_RID_int_int(___mb.mb_viewport_set_canvas_stacking, (const object *) this, viewport_, canvas, layer, sublayer);
}

void visual_server::viewport_set_canvas_transform(const rid viewport_, const rid canvas, const transform2d offset) {
	___godot_icall_void_RID_RID_Transform2D(___mb.mb_viewport_set_canvas_transform, (const object *) this, viewport_, canvas, offset);
}

void visual_server::viewport_set_clear_mode(const rid viewport_, const int64_t clear_mode) {
	___godot_icall_void_RID_int(___mb.mb_viewport_set_clear_mode, (const object *) this, viewport_, clear_mode);
}

void visual_server::viewport_set_debug_draw(const rid viewport_, const int64_t draw) {
	___godot_icall_void_RID_int(___mb.mb_viewport_set_debug_draw, (const object *) this, viewport_, draw);
}

void visual_server::viewport_set_disable_3d(const rid viewport_, const bool disabled) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_disable_3d, (const object *) this, viewport_, disabled);
}

void visual_server::viewport_set_disable_environment(const rid viewport_, const bool disabled) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_disable_environment, (const object *) this, viewport_, disabled);
}

void visual_server::viewport_set_global_canvas_transform(const rid viewport_, const transform2d transform_) {
	___godot_icall_void_RID_Transform2D(___mb.mb_viewport_set_global_canvas_transform, (const object *) this, viewport_, transform_);
}

void visual_server::viewport_set_hdr(const rid viewport_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_hdr, (const object *) this, viewport_, enabled);
}

void visual_server::viewport_set_hide_canvas(const rid viewport_, const bool hidden) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_hide_canvas, (const object *) this, viewport_, hidden);
}

void visual_server::viewport_set_hide_scenario(const rid viewport_, const bool hidden) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_hide_scenario, (const object *) this, viewport_, hidden);
}

void visual_server::viewport_set_msaa(const rid viewport_, const int64_t msaa) {
	___godot_icall_void_RID_int(___mb.mb_viewport_set_msaa, (const object *) this, viewport_, msaa);
}

void visual_server::viewport_set_parent_viewport(const rid viewport_, const rid parent_viewport) {
	___godot_icall_void_RID_RID(___mb.mb_viewport_set_parent_viewport, (const object *) this, viewport_, parent_viewport);
}

void visual_server::viewport_set_render_direct_to_screen(const rid viewport_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_render_direct_to_screen, (const object *) this, viewport_, enabled);
}

void visual_server::viewport_set_scenario(const rid viewport_, const rid scenario) {
	___godot_icall_void_RID_RID(___mb.mb_viewport_set_scenario, (const object *) this, viewport_, scenario);
}

void visual_server::viewport_set_shadow_atlas_quadrant_subdivision(const rid viewport_, const int64_t quadrant, const int64_t subdivision) {
	___godot_icall_void_RID_int_int(___mb.mb_viewport_set_shadow_atlas_quadrant_subdivision, (const object *) this, viewport_, quadrant, subdivision);
}

void visual_server::viewport_set_shadow_atlas_size(const rid viewport_, const int64_t size) {
	___godot_icall_void_RID_int(___mb.mb_viewport_set_shadow_atlas_size, (const object *) this, viewport_, size);
}

void visual_server::viewport_set_sharpen_intensity(const rid viewport_, const real_t intensity) {
	___godot_icall_void_RID_float(___mb.mb_viewport_set_sharpen_intensity, (const object *) this, viewport_, intensity);
}

void visual_server::viewport_set_size(const rid viewport_, const int64_t width, const int64_t height) {
	___godot_icall_void_RID_int_int(___mb.mb_viewport_set_size, (const object *) this, viewport_, width, height);
}

void visual_server::viewport_set_transparent_background(const rid viewport_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_transparent_background, (const object *) this, viewport_, enabled);
}

void visual_server::viewport_set_update_mode(const rid viewport_, const int64_t update_mode) {
	___godot_icall_void_RID_int(___mb.mb_viewport_set_update_mode, (const object *) this, viewport_, update_mode);
}

void visual_server::viewport_set_usage(const rid viewport_, const int64_t usage) {
	___godot_icall_void_RID_int(___mb.mb_viewport_set_usage, (const object *) this, viewport_, usage);
}

void visual_server::viewport_set_use_32_bpc_depth(const rid viewport_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_use_32_bpc_depth, (const object *) this, viewport_, enabled);
}

void visual_server::viewport_set_use_arvr(const rid viewport_, const bool use_arvr) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_use_arvr, (const object *) this, viewport_, use_arvr);
}

void visual_server::viewport_set_use_debanding(const rid viewport_, const bool debanding) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_use_debanding, (const object *) this, viewport_, debanding);
}

void visual_server::viewport_set_use_fxaa(const rid viewport_, const bool fxaa) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_use_fxaa, (const object *) this, viewport_, fxaa);
}

void visual_server::viewport_set_vflip(const rid viewport_, const bool enabled) {
	___godot_icall_void_RID_bool(___mb.mb_viewport_set_vflip, (const object *) this, viewport_, enabled);
}

}