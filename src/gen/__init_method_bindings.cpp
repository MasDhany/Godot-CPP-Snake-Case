#include <global_constants.hpp>
#include <aescontext.hpp>
#include <arvranchor.hpp>
#include <arvrcamera.hpp>
#include <arvrcontroller.hpp>
#include <arvrinterface.hpp>
#include <arvrinterface_gdnative.hpp>
#include <arvrorigin.hpp>
#include <arvrpositional_tracker.hpp>
#include <arvrserver.hpp>
#include <astar.hpp>
#include <astar2d.hpp>
#include <accept_dialog.hpp>
#include <animated_sprite.hpp>
#include <animated_sprite3d.hpp>
#include <animated_texture.hpp>
#include <animation.hpp>
#include <animation_node.hpp>
#include <animation_node_add2.hpp>
#include <animation_node_add3.hpp>
#include <animation_node_animation.hpp>
#include <animation_node_blend2.hpp>
#include <animation_node_blend3.hpp>
#include <animation_node_blend_space1d.hpp>
#include <animation_node_blend_space2d.hpp>
#include <animation_node_blend_tree.hpp>
#include <animation_node_one_shot.hpp>
#include <animation_node_output.hpp>
#include <animation_node_state_machine.hpp>
#include <animation_node_state_machine_playback.hpp>
#include <animation_node_state_machine_transition.hpp>
#include <animation_node_time_scale.hpp>
#include <animation_node_time_seek.hpp>
#include <animation_node_transition.hpp>
#include <animation_player.hpp>
#include <animation_root_node.hpp>
#include <animation_track_edit_plugin.hpp>
#include <animation_tree.hpp>
#include <animation_tree_player.hpp>
#include <area.hpp>
#include <area2d.hpp>
#include <array_mesh.hpp>
#include <aspect_ratio_container.hpp>
#include <atlas_texture.hpp>
#include <audio_bus_layout.hpp>
#include <audio_effect.hpp>
#include <audio_effect_amplify.hpp>
#include <audio_effect_band_limit_filter.hpp>
#include <audio_effect_band_pass_filter.hpp>
#include <audio_effect_capture.hpp>
#include <audio_effect_chorus.hpp>
#include <audio_effect_compressor.hpp>
#include <audio_effect_delay.hpp>
#include <audio_effect_distortion.hpp>
#include <audio_effect_eq.hpp>
#include <audio_effect_eq10.hpp>
#include <audio_effect_eq21.hpp>
#include <audio_effect_eq6.hpp>
#include <audio_effect_filter.hpp>
#include <audio_effect_high_pass_filter.hpp>
#include <audio_effect_high_shelf_filter.hpp>
#include <audio_effect_instance.hpp>
#include <audio_effect_limiter.hpp>
#include <audio_effect_low_pass_filter.hpp>
#include <audio_effect_low_shelf_filter.hpp>
#include <audio_effect_notch_filter.hpp>
#include <audio_effect_panner.hpp>
#include <audio_effect_phaser.hpp>
#include <audio_effect_pitch_shift.hpp>
#include <audio_effect_record.hpp>
#include <audio_effect_reverb.hpp>
#include <audio_effect_spectrum_analyzer.hpp>
#include <audio_effect_spectrum_analyzer_instance.hpp>
#include <audio_effect_stereo_enhance.hpp>
#include <audio_server.hpp>
#include <audio_stream.hpp>
#include <audio_stream_generator.hpp>
#include <audio_stream_generator_playback.hpp>
#include <audio_stream_mp3.hpp>
#include <audio_stream_microphone.hpp>
#include <audio_stream_oggvorbis.hpp>
#include <audio_stream_playback.hpp>
#include <audio_stream_playback_resampled.hpp>
#include <audio_stream_player.hpp>
#include <audio_stream_player2d.hpp>
#include <audio_stream_player3d.hpp>
#include <audio_stream_random_pitch.hpp>
#include <audio_stream_sample.hpp>
#include <back_buffer_copy.hpp>
#include <baked_lightmap.hpp>
#include <baked_lightmap_data.hpp>
#include <base_button.hpp>
#include <bit_map.hpp>
#include <bitmap_font.hpp>
#include <bone2d.hpp>
#include <bone_attachment.hpp>
#include <box_container.hpp>
#include <box_shape.hpp>
#include <bullet_physics_server.hpp>
#include <button.hpp>
#include <button_group.hpp>
#include <cpuparticles.hpp>
#include <cpuparticles2d.hpp>
#include <csgbox.hpp>
#include <csgcombiner.hpp>
#include <csgcylinder.hpp>
#include <csgmesh.hpp>
#include <csgpolygon.hpp>
#include <csgprimitive.hpp>
#include <csgshape.hpp>
#include <csgsphere.hpp>
#include <csgtorus.hpp>
#include <callback_tweener.hpp>
#include <camera.hpp>
#include <camera2d.hpp>
#include <camera_feed.hpp>
#include <camera_server.hpp>
#include <camera_texture.hpp>
#include <canvas_item.hpp>
#include <canvas_item_material.hpp>
#include <canvas_layer.hpp>
#include <canvas_modulate.hpp>
#include <capsule_mesh.hpp>
#include <capsule_shape.hpp>
#include <capsule_shape2d.hpp>
#include <center_container.hpp>
#include <char_fxtransform.hpp>
#include <check_box.hpp>
#include <check_button.hpp>
#include <circle_shape2d.hpp>
#include <clipped_camera.hpp>
#include <collision_object.hpp>
#include <collision_object2d.hpp>
#include <collision_polygon.hpp>
#include <collision_polygon2d.hpp>
#include <collision_shape.hpp>
#include <collision_shape2d.hpp>
#include <color_picker.hpp>
#include <color_picker_button.hpp>
#include <color_rect.hpp>
#include <concave_polygon_shape.hpp>
#include <concave_polygon_shape2d.hpp>
#include <cone_twist_joint.hpp>
#include <config_file.hpp>
#include <confirmation_dialog.hpp>
#include <container.hpp>
#include <control.hpp>
#include <convex_polygon_shape.hpp>
#include <convex_polygon_shape2d.hpp>
#include <crypto.hpp>
#include <crypto_key.hpp>
#include <cube_map.hpp>
#include <cube_mesh.hpp>
#include <cull_instance.hpp>
#include <curve.hpp>
#include <curve2d.hpp>
#include <curve3d.hpp>
#include <curve_texture.hpp>
#include <cylinder_mesh.hpp>
#include <cylinder_shape.hpp>
#include <dtlsserver.hpp>
#include <damped_spring_joint2d.hpp>
#include <directional_light.hpp>
#include <dynamic_font.hpp>
#include <dynamic_font_data.hpp>
#include <editor_export_plugin.hpp>
#include <editor_feature_profile.hpp>
#include <editor_file_dialog.hpp>
#include <editor_file_system.hpp>
#include <editor_file_system_directory.hpp>
#include <editor_import_plugin.hpp>
#include <editor_inspector.hpp>
#include <editor_inspector_plugin.hpp>
#include <editor_interface.hpp>
#include <editor_plugin.hpp>
#include <editor_property.hpp>
#include <editor_resource_conversion_plugin.hpp>
#include <editor_resource_picker.hpp>
#include <editor_resource_preview.hpp>
#include <editor_resource_preview_generator.hpp>
#include <editor_scene_importer.hpp>
#include <editor_scene_importer_fbx.hpp>
#include <editor_scene_importer_gltf.hpp>
#include <editor_scene_post_import.hpp>
#include <editor_script.hpp>
#include <editor_script_picker.hpp>
#include <editor_selection.hpp>
#include <editor_settings.hpp>
#include <editor_spatial_gizmo.hpp>
#include <editor_spatial_gizmo_plugin.hpp>
#include <editor_spin_slider.hpp>
#include <editor_vcsinterface.hpp>
#include <encoded_object_as_id.hpp>
#include <environment.hpp>
#include <expression.hpp>
#include <external_texture.hpp>
#include <file_dialog.hpp>
#include <file_system_dock.hpp>
#include <flow_container.hpp>
#include <font.hpp>
#include <func_ref.hpp>
#include <gdnative.hpp>
#include <gdnative_library.hpp>
#include <gdscript.hpp>
#include <gdscript_function_state.hpp>
#include <giprobe.hpp>
#include <giprobe_data.hpp>
#include <gltfaccessor.hpp>
#include <gltfanimation.hpp>
#include <gltfbuffer_view.hpp>
#include <gltfcamera.hpp>
#include <gltfdocument.hpp>
#include <gltflight.hpp>
#include <gltfmesh.hpp>
#include <gltfnode.hpp>
#include <gltfskeleton.hpp>
#include <gltfskin.hpp>
#include <gltfspec_gloss.hpp>
#include <gltfstate.hpp>
#include <gltftexture.hpp>
#include <generic6_dofjoint.hpp>
#include <geometry_instance.hpp>
#include <gradient.hpp>
#include <gradient_texture.hpp>
#include <gradient_texture2d.hpp>
#include <graph_edit.hpp>
#include <graph_node.hpp>
#include <grid_container.hpp>
#include <grid_map.hpp>
#include <groove_joint2d.hpp>
#include <hbox_container.hpp>
#include <hflow_container.hpp>
#include <hmaccontext.hpp>
#include <hscroll_bar.hpp>
#include <hseparator.hpp>
#include <hslider.hpp>
#include <hsplit_container.hpp>
#include <httpclient.hpp>
#include <httprequest.hpp>
#include <hashing_context.hpp>
#include <height_map_shape.hpp>
#include <hinge_joint.hpp>
#include <ip.hpp>
#include <ip_Unix.hpp>
#include <image.hpp>
#include <image_texture.hpp>
#include <immediate_geometry.hpp>
#include <input.hpp>
#include <input_default.hpp>
#include <input_event.hpp>
#include <input_event_action.hpp>
#include <input_event_gesture.hpp>
#include <input_event_joypad_button.hpp>
#include <input_event_joypad_motion.hpp>
#include <input_event_key.hpp>
#include <input_event_midi.hpp>
#include <input_event_magnify_gesture.hpp>
#include <input_event_mouse.hpp>
#include <input_event_mouse_button.hpp>
#include <input_event_mouse_motion.hpp>
#include <input_event_pan_gesture.hpp>
#include <input_event_screen_drag.hpp>
#include <input_event_screen_touch.hpp>
#include <input_event_with_modifiers.hpp>
#include <input_map.hpp>
#include <instance_placeholder.hpp>
#include <interpolated_camera.hpp>
#include <interval_tweener.hpp>
#include <item_list.hpp>
#include <jnisingleton.hpp>
#include <jsonparse_result.hpp>
#include <jsonrpc.hpp>
#include <java_class.hpp>
#include <java_class_wrapper.hpp>
#include <java_script.hpp>
#include <java_script_object.hpp>
#include <joint.hpp>
#include <joint2d.hpp>
#include <kinematic_body.hpp>
#include <kinematic_body2d.hpp>
#include <kinematic_collision.hpp>
#include <kinematic_collision2d.hpp>
#include <label.hpp>
#include <label3d.hpp>
#include <large_texture.hpp>
#include <light.hpp>
#include <light2d.hpp>
#include <light_occluder2d.hpp>
#include <line2d.hpp>
#include <line_edit.hpp>
#include <line_shape2d.hpp>
#include <link_button.hpp>
#include <listener.hpp>
#include <listener2d.hpp>
#include <main_loop.hpp>
#include <margin_container.hpp>
#include <material.hpp>
#include <menu_button.hpp>
#include <mesh.hpp>
#include <mesh_data_tool.hpp>
#include <mesh_instance.hpp>
#include <mesh_instance2d.hpp>
#include <mesh_library.hpp>
#include <mesh_texture.hpp>
#include <method_tweener.hpp>
#include <mobile_vrinterface.hpp>
#include <multi_mesh.hpp>
#include <multi_mesh_instance.hpp>
#include <multi_mesh_instance2d.hpp>
#include <multiplayer_api.hpp>
#include <multiplayer_peer_gdnative.hpp>
#include <native_script.hpp>
#include <navigation.hpp>
#include <navigation2d.hpp>
#include <navigation2_dserver.hpp>
#include <navigation_agent.hpp>
#include <navigation_agent2d.hpp>
#include <navigation_mesh.hpp>
#include <navigation_mesh_generator.hpp>
#include <navigation_mesh_instance.hpp>
#include <navigation_obstacle.hpp>
#include <navigation_obstacle2d.hpp>
#include <navigation_polygon.hpp>
#include <navigation_polygon_instance.hpp>
#include <navigation_server.hpp>
#include <networked_multiplayer_custom.hpp>
#include <networked_multiplayer_enet.hpp>
#include <networked_multiplayer_peer.hpp>
#include <nine_patch_rect.hpp>
#include <node.hpp>
#include <node2d.hpp>
#include <noise_texture.hpp>
#include <object.hpp>
#include <occluder.hpp>
#include <occluder_polygon2d.hpp>
#include <occluder_shape.hpp>
#include <occluder_shape_polygon.hpp>
#include <occluder_shape_sphere.hpp>
#include <omni_light.hpp>
#include <open_simplex_noise.hpp>
#include <option_button.hpp>
#include <pckpacker.hpp>
#include <phash_translation.hpp>
#include <packed_data_container.hpp>
#include <packed_data_container_ref.hpp>
#include <packed_scene.hpp>
#include <packed_scene_gltf.hpp>
#include <packet_peer.hpp>
#include <packet_peer_dtls.hpp>
#include <packet_peer_gdnative.hpp>
#include <packet_peer_stream.hpp>
#include <packet_peer_udp.hpp>
#include <panel.hpp>
#include <panel_container.hpp>
#include <panorama_sky.hpp>
#include <parallax_background.hpp>
#include <parallax_layer.hpp>
#include <particles.hpp>
#include <particles2d.hpp>
#include <particles_material.hpp>
#include <path.hpp>
#include <path2d.hpp>
#include <path_follow.hpp>
#include <path_follow2d.hpp>
#include <performance.hpp>
#include <physical_bone.hpp>
#include <physics2_ddirect_body_state.hpp>
#include <physics2_ddirect_space_state.hpp>
#include <physics2_dserver.hpp>
#include <physics2_dserver_sw.hpp>
#include <physics2_dshape_query_parameters.hpp>
#include <physics2_dtest_motion_result.hpp>
#include <physics_body.hpp>
#include <physics_body2d.hpp>
#include <physics_direct_body_state.hpp>
#include <physics_direct_space_state.hpp>
#include <physics_material.hpp>
#include <physics_server.hpp>
#include <physics_shape_query_parameters.hpp>
#include <physics_test_motion_result.hpp>
#include <pin_joint.hpp>
#include <pin_joint2d.hpp>
#include <plane_mesh.hpp>
#include <plane_shape.hpp>
#include <plugin_script.hpp>
#include <point_mesh.hpp>
#include <polygon2d.hpp>
#include <polygon_path_finder.hpp>
#include <popup.hpp>
#include <popup_dialog.hpp>
#include <popup_menu.hpp>
#include <popup_panel.hpp>
#include <portal.hpp>
#include <position2d.hpp>
#include <position3d.hpp>
#include <primitive_mesh.hpp>
#include <prism_mesh.hpp>
#include <procedural_sky.hpp>
#include <progress_bar.hpp>
#include <project_settings.hpp>
#include <property_tweener.hpp>
#include <proximity_group.hpp>
#include <proxy_texture.hpp>
#include <quad_mesh.hpp>
#include <random_number_generator.hpp>
#include <range.hpp>
#include <ray_cast.hpp>
#include <ray_cast2d.hpp>
#include <ray_shape.hpp>
#include <ray_shape2d.hpp>
#include <rectangle_shape2d.hpp>
#include <reference.hpp>
#include <reference_rect.hpp>
#include <reflection_probe.hpp>
#include <reg_ex.hpp>
#include <reg_ex_match.hpp>
#include <remote_transform.hpp>
#include <remote_transform2d.hpp>
#include <resource.hpp>
#include <resource_format_loader.hpp>
#include <resource_format_saver.hpp>
#include <resource_importer.hpp>
#include <resource_interactive_loader.hpp>
#include <resource_preloader.hpp>
#include <rich_text_effect.hpp>
#include <rich_text_label.hpp>
#include <rigid_body.hpp>
#include <rigid_body2d.hpp>
#include <room.hpp>
#include <room_group.hpp>
#include <room_manager.hpp>
#include <root_motion_view.hpp>
#include <scene_state.hpp>
#include <scene_tree.hpp>
#include <scene_tree_timer.hpp>
#include <scene_tree_tween.hpp>
#include <script.hpp>
#include <script_create_dialog.hpp>
#include <script_editor.hpp>
#include <scroll_bar.hpp>
#include <scroll_container.hpp>
#include <segment_shape2d.hpp>
#include <separator.hpp>
#include <shader.hpp>
#include <shader_material.hpp>
#include <shape.hpp>
#include <shape2d.hpp>
#include <short_cut.hpp>
#include <skeleton.hpp>
#include <skeleton2d.hpp>
#include <skeleton_ik.hpp>
#include <skin.hpp>
#include <skin_reference.hpp>
#include <sky.hpp>
#include <slider.hpp>
#include <slider_joint.hpp>
#include <soft_body.hpp>
#include <spatial.hpp>
#include <spatial_gizmo.hpp>
#include <spatial_material.hpp>
#include <spatial_velocity_tracker.hpp>
#include <sphere_mesh.hpp>
#include <sphere_shape.hpp>
#include <spin_box.hpp>
#include <split_container.hpp>
#include <spot_light.hpp>
#include <spring_arm.hpp>
#include <sprite.hpp>
#include <sprite3d.hpp>
#include <sprite_base3d.hpp>
#include <sprite_frames.hpp>
#include <static_body.hpp>
#include <static_body2d.hpp>
#include <stream_peer.hpp>
#include <stream_peer_buffer.hpp>
#include <stream_peer_gdnative.hpp>
#include <stream_peer_ssl.hpp>
#include <stream_peer_tcp.hpp>
#include <stream_texture.hpp>
#include <style_box.hpp>
#include <style_box_empty.hpp>
#include <style_box_flat.hpp>
#include <style_box_line.hpp>
#include <style_box_texture.hpp>
#include <surface_tool.hpp>
#include <tcp_Server.hpp>
#include <tab_container.hpp>
#include <tabs.hpp>
#include <text_edit.hpp>
#include <text_file.hpp>
#include <text_mesh.hpp>
#include <texture.hpp>
#include <texture3d.hpp>
#include <texture_array.hpp>
#include <texture_button.hpp>
#include <texture_layered.hpp>
#include <texture_progress.hpp>
#include <texture_rect.hpp>
#include <theme.hpp>
#include <tile_map.hpp>
#include <tile_set.hpp>
#include <time.hpp>
#include <timer.hpp>
#include <tool_button.hpp>
#include <touch_screen_button.hpp>
#include <translation.hpp>
#include <translation_server.hpp>
#include <tree.hpp>
#include <tree_item.hpp>
#include <triangle_mesh.hpp>
#include <tween.hpp>
#include <tweener.hpp>
#include <udpserver.hpp>
#include <upnp.hpp>
#include <upnpdevice.hpp>
#include <undo_redo.hpp>
#include <vbox_container.hpp>
#include <vflow_container.hpp>
#include <vscroll_bar.hpp>
#include <vseparator.hpp>
#include <vslider.hpp>
#include <vsplit_container.hpp>
#include <vehicle_body.hpp>
#include <vehicle_wheel.hpp>
#include <video_player.hpp>
#include <video_stream.hpp>
#include <video_stream_gdnative.hpp>
#include <video_stream_theora.hpp>
#include <video_stream_webm.hpp>
#include <viewport.hpp>
#include <viewport_container.hpp>
#include <viewport_texture.hpp>
#include <visibility_enabler.hpp>
#include <visibility_enabler2d.hpp>
#include <visibility_notifier.hpp>
#include <visibility_notifier2d.hpp>
#include <visual_instance.hpp>
#include <visual_script.hpp>
#include <visual_script_basic_type_constant.hpp>
#include <visual_script_builtin_func.hpp>
#include <visual_script_class_constant.hpp>
#include <visual_script_comment.hpp>
#include <visual_script_compose_array.hpp>
#include <visual_script_condition.hpp>
#include <visual_script_constant.hpp>
#include <visual_script_constructor.hpp>
#include <visual_script_custom_node.hpp>
#include <visual_script_deconstruct.hpp>
#include <visual_script_emit_signal.hpp>
#include <visual_script_engine_singleton.hpp>
#include <visual_script_expression.hpp>
#include <visual_script_function.hpp>
#include <visual_script_function_call.hpp>
#include <visual_script_function_state.hpp>
#include <visual_script_global_constant.hpp>
#include <visual_script_index_get.hpp>
#include <visual_script_index_set.hpp>
#include <visual_script_input_action.hpp>
#include <visual_script_iterator.hpp>
#include <visual_script_lists.hpp>
#include <visual_script_local_var.hpp>
#include <visual_script_local_var_set.hpp>
#include <visual_script_math_constant.hpp>
#include <visual_script_node.hpp>
#include <visual_script_operator.hpp>
#include <visual_script_preload.hpp>
#include <visual_script_property_get.hpp>
#include <visual_script_property_set.hpp>
#include <visual_script_resource_path.hpp>
#include <visual_script_return.hpp>
#include <visual_script_scene_node.hpp>
#include <visual_script_scene_tree.hpp>
#include <visual_script_select.hpp>
#include <visual_script_self.hpp>
#include <visual_script_sequence.hpp>
#include <visual_script_sub_call.hpp>
#include <visual_script_switch.hpp>
#include <visual_script_type_cast.hpp>
#include <visual_script_variable_get.hpp>
#include <visual_script_variable_set.hpp>
#include <visual_script_while.hpp>
#include <visual_script_yield.hpp>
#include <visual_script_yield_signal.hpp>
#include <visual_server.hpp>
#include <visual_shader.hpp>
#include <visual_shader_node.hpp>
#include <visual_shader_node_boolean_constant.hpp>
#include <visual_shader_node_boolean_uniform.hpp>
#include <visual_shader_node_color_constant.hpp>
#include <visual_shader_node_color_func.hpp>
#include <visual_shader_node_color_op.hpp>
#include <visual_shader_node_color_uniform.hpp>
#include <visual_shader_node_compare.hpp>
#include <visual_shader_node_cube_map.hpp>
#include <visual_shader_node_cube_map_uniform.hpp>
#include <visual_shader_node_custom.hpp>
#include <visual_shader_node_determinant.hpp>
#include <visual_shader_node_dot_product.hpp>
#include <visual_shader_node_expression.hpp>
#include <visual_shader_node_face_forward.hpp>
#include <visual_shader_node_fresnel.hpp>
#include <visual_shader_node_global_expression.hpp>
#include <visual_shader_node_group_base.hpp>
#include <visual_shader_node_if.hpp>
#include <visual_shader_node_input.hpp>
#include <visual_shader_node_is.hpp>
#include <visual_shader_node_outer_product.hpp>
#include <visual_shader_node_output.hpp>
#include <visual_shader_node_scalar_clamp.hpp>
#include <visual_shader_node_scalar_constant.hpp>
#include <visual_shader_node_scalar_derivative_func.hpp>
#include <visual_shader_node_scalar_func.hpp>
#include <visual_shader_node_scalar_interp.hpp>
#include <visual_shader_node_scalar_op.hpp>
#include <visual_shader_node_scalar_smooth_step.hpp>
#include <visual_shader_node_scalar_switch.hpp>
#include <visual_shader_node_scalar_uniform.hpp>
#include <visual_shader_node_switch.hpp>
#include <visual_shader_node_texture.hpp>
#include <visual_shader_node_texture_uniform.hpp>
#include <visual_shader_node_texture_uniform_triplanar.hpp>
#include <visual_shader_node_transform_compose.hpp>
#include <visual_shader_node_transform_constant.hpp>
#include <visual_shader_node_transform_decompose.hpp>
#include <visual_shader_node_transform_func.hpp>
#include <visual_shader_node_transform_mult.hpp>
#include <visual_shader_node_transform_uniform.hpp>
#include <visual_shader_node_transform_vec_mult.hpp>
#include <visual_shader_node_uniform.hpp>
#include <visual_shader_node_uniform_ref.hpp>
#include <visual_shader_node_vec3_constant.hpp>
#include <visual_shader_node_vec3_uniform.hpp>
#include <visual_shader_node_vector_clamp.hpp>
#include <visual_shader_node_vector_compose.hpp>
#include <visual_shader_node_vector_decompose.hpp>
#include <visual_shader_node_vector_derivative_func.hpp>
#include <visual_shader_node_vector_distance.hpp>
#include <visual_shader_node_vector_func.hpp>
#include <visual_shader_node_vector_interp.hpp>
#include <visual_shader_node_vector_len.hpp>
#include <visual_shader_node_vector_op.hpp>
#include <visual_shader_node_vector_refract.hpp>
#include <visual_shader_node_vector_scalar_mix.hpp>
#include <visual_shader_node_vector_scalar_smooth_step.hpp>
#include <visual_shader_node_vector_scalar_step.hpp>
#include <visual_shader_node_vector_smooth_step.hpp>
#include <weak_ref.hpp>
#include <web_rtcdata_channel.hpp>
#include <web_rtcdata_channel_gdnative.hpp>
#include <web_rtcmultiplayer.hpp>
#include <web_rtcpeer_connection.hpp>
#include <web_rtcpeer_connection_gdnative.hpp>
#include <web_socket_client.hpp>
#include <web_socket_multiplayer_peer.hpp>
#include <web_socket_peer.hpp>
#include <web_socket_server.hpp>
#include <web_xrinterface.hpp>
#include <window_dialog.hpp>
#include <world.hpp>
#include <world2d.hpp>
#include <world_environment.hpp>
#include <x509_certificate.hpp>
#include <xmlparser.hpp>
#include <ysort.hpp>
#include <class_db.hpp>
#include <directory.hpp>
#include <engine.hpp>
#include <file.hpp>
#include <geometry.hpp>
#include <json.hpp>
#include <marshalls.hpp>
#include <mutex.hpp>
#include <os.hpp>
#include <resource_loader.hpp>
#include <resource_saver.hpp>
#include <semaphore.hpp>
#include <thread.hpp>
#include <visual_script_editor.hpp>


namespace gd {
void ___init_method_bindings()
{
	global_constants::___init_method_bindings();
	aescontext::___init_method_bindings();
	arvranchor::___init_method_bindings();
	arvrcamera::___init_method_bindings();
	arvrcontroller::___init_method_bindings();
	arvrinterface::___init_method_bindings();
	arvrinterface_gdnative::___init_method_bindings();
	arvrorigin::___init_method_bindings();
	arvrpositional_tracker::___init_method_bindings();
	arvrserver::___init_method_bindings();
	astar::___init_method_bindings();
	astar2d::___init_method_bindings();
	accept_dialog::___init_method_bindings();
	animated_sprite::___init_method_bindings();
	animated_sprite3d::___init_method_bindings();
	animated_texture::___init_method_bindings();
	animation::___init_method_bindings();
	animation_node::___init_method_bindings();
	animation_node_add2::___init_method_bindings();
	animation_node_add3::___init_method_bindings();
	animation_node_animation::___init_method_bindings();
	animation_node_blend2::___init_method_bindings();
	animation_node_blend3::___init_method_bindings();
	animation_node_blend_space1d::___init_method_bindings();
	animation_node_blend_space2d::___init_method_bindings();
	animation_node_blend_tree::___init_method_bindings();
	animation_node_one_shot::___init_method_bindings();
	animation_node_output::___init_method_bindings();
	animation_node_state_machine::___init_method_bindings();
	animation_node_state_machine_playback::___init_method_bindings();
	animation_node_state_machine_transition::___init_method_bindings();
	animation_node_time_scale::___init_method_bindings();
	animation_node_time_seek::___init_method_bindings();
	animation_node_transition::___init_method_bindings();
	animation_player::___init_method_bindings();
	animation_root_node::___init_method_bindings();
	animation_track_edit_plugin::___init_method_bindings();
	animation_tree::___init_method_bindings();
	animation_tree_player::___init_method_bindings();
	area::___init_method_bindings();
	area2d::___init_method_bindings();
	array_mesh::___init_method_bindings();
	aspect_ratio_container::___init_method_bindings();
	atlas_texture::___init_method_bindings();
	audio_bus_layout::___init_method_bindings();
	audio_effect::___init_method_bindings();
	audio_effect_amplify::___init_method_bindings();
	audio_effect_band_limit_filter::___init_method_bindings();
	audio_effect_band_pass_filter::___init_method_bindings();
	audio_effect_capture::___init_method_bindings();
	audio_effect_chorus::___init_method_bindings();
	audio_effect_compressor::___init_method_bindings();
	audio_effect_delay::___init_method_bindings();
	audio_effect_distortion::___init_method_bindings();
	audio_effect_eq::___init_method_bindings();
	audio_effect_eq10::___init_method_bindings();
	audio_effect_eq21::___init_method_bindings();
	audio_effect_eq6::___init_method_bindings();
	audio_effect_filter::___init_method_bindings();
	audio_effect_high_pass_filter::___init_method_bindings();
	audio_effect_high_shelf_filter::___init_method_bindings();
	audio_effect_instance::___init_method_bindings();
	audio_effect_limiter::___init_method_bindings();
	audio_effect_low_pass_filter::___init_method_bindings();
	audio_effect_low_shelf_filter::___init_method_bindings();
	audio_effect_notch_filter::___init_method_bindings();
	audio_effect_panner::___init_method_bindings();
	audio_effect_phaser::___init_method_bindings();
	audio_effect_pitch_shift::___init_method_bindings();
	audio_effect_record::___init_method_bindings();
	audio_effect_reverb::___init_method_bindings();
	audio_effect_spectrum_analyzer::___init_method_bindings();
	audio_effect_spectrum_analyzer_instance::___init_method_bindings();
	audio_effect_stereo_enhance::___init_method_bindings();
	audio_server::___init_method_bindings();
	audio_stream::___init_method_bindings();
	audio_stream_generator::___init_method_bindings();
	audio_stream_generator_playback::___init_method_bindings();
	audio_stream_mp3::___init_method_bindings();
	audio_stream_microphone::___init_method_bindings();
	audio_stream_oggvorbis::___init_method_bindings();
	audio_stream_playback::___init_method_bindings();
	audio_stream_playback_resampled::___init_method_bindings();
	audio_stream_player::___init_method_bindings();
	audio_stream_player2d::___init_method_bindings();
	audio_stream_player3d::___init_method_bindings();
	audio_stream_random_pitch::___init_method_bindings();
	audio_stream_sample::___init_method_bindings();
	back_buffer_copy::___init_method_bindings();
	baked_lightmap::___init_method_bindings();
	baked_lightmap_data::___init_method_bindings();
	base_button::___init_method_bindings();
	bit_map::___init_method_bindings();
	bitmap_font::___init_method_bindings();
	bone2d::___init_method_bindings();
	bone_attachment::___init_method_bindings();
	box_container::___init_method_bindings();
	box_shape::___init_method_bindings();
	bullet_physics_server::___init_method_bindings();
	button::___init_method_bindings();
	button_group::___init_method_bindings();
	cpuparticles::___init_method_bindings();
	cpuparticles2d::___init_method_bindings();
	csgbox::___init_method_bindings();
	csgcombiner::___init_method_bindings();
	csgcylinder::___init_method_bindings();
	csgmesh::___init_method_bindings();
	csgpolygon::___init_method_bindings();
	csgprimitive::___init_method_bindings();
	csgshape::___init_method_bindings();
	csgsphere::___init_method_bindings();
	csgtorus::___init_method_bindings();
	callback_tweener::___init_method_bindings();
	camera::___init_method_bindings();
	camera2d::___init_method_bindings();
	camera_feed::___init_method_bindings();
	camera_server::___init_method_bindings();
	camera_texture::___init_method_bindings();
	canvas_item::___init_method_bindings();
	canvas_item_material::___init_method_bindings();
	canvas_layer::___init_method_bindings();
	canvas_modulate::___init_method_bindings();
	capsule_mesh::___init_method_bindings();
	capsule_shape::___init_method_bindings();
	capsule_shape2d::___init_method_bindings();
	center_container::___init_method_bindings();
	char_fxtransform::___init_method_bindings();
	check_box::___init_method_bindings();
	check_button::___init_method_bindings();
	circle_shape2d::___init_method_bindings();
	clipped_camera::___init_method_bindings();
	collision_object::___init_method_bindings();
	collision_object2d::___init_method_bindings();
	collision_polygon::___init_method_bindings();
	collision_polygon2d::___init_method_bindings();
	collision_shape::___init_method_bindings();
	collision_shape2d::___init_method_bindings();
	color_picker::___init_method_bindings();
	color_picker_button::___init_method_bindings();
	color_rect::___init_method_bindings();
	concave_polygon_shape::___init_method_bindings();
	concave_polygon_shape2d::___init_method_bindings();
	cone_twist_joint::___init_method_bindings();
	config_file::___init_method_bindings();
	confirmation_dialog::___init_method_bindings();
	container::___init_method_bindings();
	control::___init_method_bindings();
	convex_polygon_shape::___init_method_bindings();
	convex_polygon_shape2d::___init_method_bindings();
	crypto::___init_method_bindings();
	crypto_key::___init_method_bindings();
	cube_map::___init_method_bindings();
	cube_mesh::___init_method_bindings();
	cull_instance::___init_method_bindings();
	curve::___init_method_bindings();
	curve2d::___init_method_bindings();
	curve3d::___init_method_bindings();
	curve_texture::___init_method_bindings();
	cylinder_mesh::___init_method_bindings();
	cylinder_shape::___init_method_bindings();
	dtlsserver::___init_method_bindings();
	damped_spring_joint2d::___init_method_bindings();
	directional_light::___init_method_bindings();
	dynamic_font::___init_method_bindings();
	dynamic_font_data::___init_method_bindings();
	editor_export_plugin::___init_method_bindings();
	editor_feature_profile::___init_method_bindings();
	editor_file_dialog::___init_method_bindings();
	editor_file_system::___init_method_bindings();
	editor_file_system_directory::___init_method_bindings();
	editor_import_plugin::___init_method_bindings();
	editor_inspector::___init_method_bindings();
	editor_inspector_plugin::___init_method_bindings();
	editor_interface::___init_method_bindings();
	editor_plugin::___init_method_bindings();
	editor_property::___init_method_bindings();
	editor_resource_conversion_plugin::___init_method_bindings();
	editor_resource_picker::___init_method_bindings();
	editor_resource_preview::___init_method_bindings();
	editor_resource_preview_generator::___init_method_bindings();
	editor_scene_importer::___init_method_bindings();
	editor_scene_importer_fbx::___init_method_bindings();
	editor_scene_importer_gltf::___init_method_bindings();
	editor_scene_post_import::___init_method_bindings();
	editor_script::___init_method_bindings();
	editor_script_picker::___init_method_bindings();
	editor_selection::___init_method_bindings();
	editor_settings::___init_method_bindings();
	editor_spatial_gizmo::___init_method_bindings();
	editor_spatial_gizmo_plugin::___init_method_bindings();
	editor_spin_slider::___init_method_bindings();
	editor_vcsinterface::___init_method_bindings();
	encoded_object_as_id::___init_method_bindings();
	environment::___init_method_bindings();
	expression::___init_method_bindings();
	external_texture::___init_method_bindings();
	file_dialog::___init_method_bindings();
	file_system_dock::___init_method_bindings();
	flow_container::___init_method_bindings();
	font::___init_method_bindings();
	func_ref::___init_method_bindings();
	gdnative::___init_method_bindings();
	gdnative_library::___init_method_bindings();
	gdscript::___init_method_bindings();
	gdscript_function_state::___init_method_bindings();
	giprobe::___init_method_bindings();
	giprobe_data::___init_method_bindings();
	gltfaccessor::___init_method_bindings();
	gltfanimation::___init_method_bindings();
	gltfbuffer_view::___init_method_bindings();
	gltfcamera::___init_method_bindings();
	gltfdocument::___init_method_bindings();
	gltflight::___init_method_bindings();
	gltfmesh::___init_method_bindings();
	gltfnode::___init_method_bindings();
	gltfskeleton::___init_method_bindings();
	gltfskin::___init_method_bindings();
	gltfspec_gloss::___init_method_bindings();
	gltfstate::___init_method_bindings();
	gltftexture::___init_method_bindings();
	generic6_dofjoint::___init_method_bindings();
	geometry_instance::___init_method_bindings();
	gradient::___init_method_bindings();
	gradient_texture::___init_method_bindings();
	gradient_texture2d::___init_method_bindings();
	graph_edit::___init_method_bindings();
	graph_node::___init_method_bindings();
	grid_container::___init_method_bindings();
	grid_map::___init_method_bindings();
	groove_joint2d::___init_method_bindings();
	hbox_container::___init_method_bindings();
	hflow_container::___init_method_bindings();
	hmaccontext::___init_method_bindings();
	hscroll_bar::___init_method_bindings();
	hseparator::___init_method_bindings();
	hslider::___init_method_bindings();
	hsplit_container::___init_method_bindings();
	httpclient::___init_method_bindings();
	httprequest::___init_method_bindings();
	hashing_context::___init_method_bindings();
	height_map_shape::___init_method_bindings();
	hinge_joint::___init_method_bindings();
	ip::___init_method_bindings();
	ip_Unix::___init_method_bindings();
	image::___init_method_bindings();
	image_texture::___init_method_bindings();
	immediate_geometry::___init_method_bindings();
	input::___init_method_bindings();
	input_default::___init_method_bindings();
	input_event::___init_method_bindings();
	input_event_action::___init_method_bindings();
	input_event_gesture::___init_method_bindings();
	input_event_joypad_button::___init_method_bindings();
	input_event_joypad_motion::___init_method_bindings();
	input_event_key::___init_method_bindings();
	input_event_midi::___init_method_bindings();
	input_event_magnify_gesture::___init_method_bindings();
	input_event_mouse::___init_method_bindings();
	input_event_mouse_button::___init_method_bindings();
	input_event_mouse_motion::___init_method_bindings();
	input_event_pan_gesture::___init_method_bindings();
	input_event_screen_drag::___init_method_bindings();
	input_event_screen_touch::___init_method_bindings();
	input_event_with_modifiers::___init_method_bindings();
	input_map::___init_method_bindings();
	instance_placeholder::___init_method_bindings();
	interpolated_camera::___init_method_bindings();
	interval_tweener::___init_method_bindings();
	item_list::___init_method_bindings();
	jnisingleton::___init_method_bindings();
	jsonparse_result::___init_method_bindings();
	jsonrpc::___init_method_bindings();
	java_class::___init_method_bindings();
	java_class_wrapper::___init_method_bindings();
	java_script::___init_method_bindings();
	java_script_object::___init_method_bindings();
	joint::___init_method_bindings();
	joint2d::___init_method_bindings();
	kinematic_body::___init_method_bindings();
	kinematic_body2d::___init_method_bindings();
	kinematic_collision::___init_method_bindings();
	kinematic_collision2d::___init_method_bindings();
	label::___init_method_bindings();
	label3d::___init_method_bindings();
	large_texture::___init_method_bindings();
	light::___init_method_bindings();
	light2d::___init_method_bindings();
	light_occluder2d::___init_method_bindings();
	line2d::___init_method_bindings();
	line_edit::___init_method_bindings();
	line_shape2d::___init_method_bindings();
	link_button::___init_method_bindings();
	listener::___init_method_bindings();
	listener2d::___init_method_bindings();
	main_loop::___init_method_bindings();
	margin_container::___init_method_bindings();
	material::___init_method_bindings();
	menu_button::___init_method_bindings();
	mesh::___init_method_bindings();
	mesh_data_tool::___init_method_bindings();
	mesh_instance::___init_method_bindings();
	mesh_instance2d::___init_method_bindings();
	mesh_library::___init_method_bindings();
	mesh_texture::___init_method_bindings();
	method_tweener::___init_method_bindings();
	mobile_vrinterface::___init_method_bindings();
	multi_mesh::___init_method_bindings();
	multi_mesh_instance::___init_method_bindings();
	multi_mesh_instance2d::___init_method_bindings();
	multiplayer_api::___init_method_bindings();
	multiplayer_peer_gdnative::___init_method_bindings();
	native_script::___init_method_bindings();
	navigation::___init_method_bindings();
	navigation2d::___init_method_bindings();
	navigation2_dserver::___init_method_bindings();
	navigation_agent::___init_method_bindings();
	navigation_agent2d::___init_method_bindings();
	navigation_mesh::___init_method_bindings();
	navigation_mesh_generator::___init_method_bindings();
	navigation_mesh_instance::___init_method_bindings();
	navigation_obstacle::___init_method_bindings();
	navigation_obstacle2d::___init_method_bindings();
	navigation_polygon::___init_method_bindings();
	navigation_polygon_instance::___init_method_bindings();
	navigation_server::___init_method_bindings();
	networked_multiplayer_custom::___init_method_bindings();
	networked_multiplayer_enet::___init_method_bindings();
	networked_multiplayer_peer::___init_method_bindings();
	nine_patch_rect::___init_method_bindings();
	node::___init_method_bindings();
	node2d::___init_method_bindings();
	noise_texture::___init_method_bindings();
	object::___init_method_bindings();
	occluder::___init_method_bindings();
	occluder_polygon2d::___init_method_bindings();
	occluder_shape::___init_method_bindings();
	occluder_shape_polygon::___init_method_bindings();
	occluder_shape_sphere::___init_method_bindings();
	omni_light::___init_method_bindings();
	open_simplex_noise::___init_method_bindings();
	option_button::___init_method_bindings();
	pckpacker::___init_method_bindings();
	phash_translation::___init_method_bindings();
	packed_data_container::___init_method_bindings();
	packed_data_container_ref::___init_method_bindings();
	packed_scene::___init_method_bindings();
	packed_scene_gltf::___init_method_bindings();
	packet_peer::___init_method_bindings();
	packet_peer_dtls::___init_method_bindings();
	packet_peer_gdnative::___init_method_bindings();
	packet_peer_stream::___init_method_bindings();
	packet_peer_udp::___init_method_bindings();
	panel::___init_method_bindings();
	panel_container::___init_method_bindings();
	panorama_sky::___init_method_bindings();
	parallax_background::___init_method_bindings();
	parallax_layer::___init_method_bindings();
	particles::___init_method_bindings();
	particles2d::___init_method_bindings();
	particles_material::___init_method_bindings();
	path::___init_method_bindings();
	path2d::___init_method_bindings();
	path_follow::___init_method_bindings();
	path_follow2d::___init_method_bindings();
	performance::___init_method_bindings();
	physical_bone::___init_method_bindings();
	physics2_ddirect_body_state::___init_method_bindings();
	physics2_ddirect_space_state::___init_method_bindings();
	physics2_dserver::___init_method_bindings();
	physics2_dserver_sw::___init_method_bindings();
	physics2_dshape_query_parameters::___init_method_bindings();
	physics2_dtest_motion_result::___init_method_bindings();
	physics_body::___init_method_bindings();
	physics_body2d::___init_method_bindings();
	physics_direct_body_state::___init_method_bindings();
	physics_direct_space_state::___init_method_bindings();
	physics_material::___init_method_bindings();
	physics_server::___init_method_bindings();
	physics_shape_query_parameters::___init_method_bindings();
	physics_test_motion_result::___init_method_bindings();
	pin_joint::___init_method_bindings();
	pin_joint2d::___init_method_bindings();
	plane_mesh::___init_method_bindings();
	plane_shape::___init_method_bindings();
	plugin_script::___init_method_bindings();
	point_mesh::___init_method_bindings();
	polygon2d::___init_method_bindings();
	polygon_path_finder::___init_method_bindings();
	popup::___init_method_bindings();
	popup_dialog::___init_method_bindings();
	popup_menu::___init_method_bindings();
	popup_panel::___init_method_bindings();
	portal::___init_method_bindings();
	position2d::___init_method_bindings();
	position3d::___init_method_bindings();
	primitive_mesh::___init_method_bindings();
	prism_mesh::___init_method_bindings();
	procedural_sky::___init_method_bindings();
	progress_bar::___init_method_bindings();
	project_settings::___init_method_bindings();
	property_tweener::___init_method_bindings();
	proximity_group::___init_method_bindings();
	proxy_texture::___init_method_bindings();
	quad_mesh::___init_method_bindings();
	random_number_generator::___init_method_bindings();
	range::___init_method_bindings();
	ray_cast::___init_method_bindings();
	ray_cast2d::___init_method_bindings();
	ray_shape::___init_method_bindings();
	ray_shape2d::___init_method_bindings();
	rectangle_shape2d::___init_method_bindings();
	reference::___init_method_bindings();
	reference_rect::___init_method_bindings();
	reflection_probe::___init_method_bindings();
	reg_ex::___init_method_bindings();
	reg_ex_match::___init_method_bindings();
	remote_transform::___init_method_bindings();
	remote_transform2d::___init_method_bindings();
	resource::___init_method_bindings();
	resource_format_loader::___init_method_bindings();
	resource_format_saver::___init_method_bindings();
	resource_importer::___init_method_bindings();
	resource_interactive_loader::___init_method_bindings();
	resource_preloader::___init_method_bindings();
	rich_text_effect::___init_method_bindings();
	rich_text_label::___init_method_bindings();
	rigid_body::___init_method_bindings();
	rigid_body2d::___init_method_bindings();
	room::___init_method_bindings();
	room_group::___init_method_bindings();
	room_manager::___init_method_bindings();
	root_motion_view::___init_method_bindings();
	scene_state::___init_method_bindings();
	scene_tree::___init_method_bindings();
	scene_tree_timer::___init_method_bindings();
	scene_tree_tween::___init_method_bindings();
	script::___init_method_bindings();
	script_create_dialog::___init_method_bindings();
	script_editor::___init_method_bindings();
	scroll_bar::___init_method_bindings();
	scroll_container::___init_method_bindings();
	segment_shape2d::___init_method_bindings();
	separator::___init_method_bindings();
	shader::___init_method_bindings();
	shader_material::___init_method_bindings();
	shape::___init_method_bindings();
	shape2d::___init_method_bindings();
	short_cut::___init_method_bindings();
	skeleton::___init_method_bindings();
	skeleton2d::___init_method_bindings();
	skeleton_ik::___init_method_bindings();
	skin::___init_method_bindings();
	skin_reference::___init_method_bindings();
	sky::___init_method_bindings();
	slider::___init_method_bindings();
	slider_joint::___init_method_bindings();
	soft_body::___init_method_bindings();
	spatial::___init_method_bindings();
	spatial_gizmo::___init_method_bindings();
	spatial_material::___init_method_bindings();
	spatial_velocity_tracker::___init_method_bindings();
	sphere_mesh::___init_method_bindings();
	sphere_shape::___init_method_bindings();
	spin_box::___init_method_bindings();
	split_container::___init_method_bindings();
	spot_light::___init_method_bindings();
	spring_arm::___init_method_bindings();
	sprite::___init_method_bindings();
	sprite3d::___init_method_bindings();
	sprite_base3d::___init_method_bindings();
	sprite_frames::___init_method_bindings();
	static_body::___init_method_bindings();
	static_body2d::___init_method_bindings();
	stream_peer::___init_method_bindings();
	stream_peer_buffer::___init_method_bindings();
	stream_peer_gdnative::___init_method_bindings();
	stream_peer_ssl::___init_method_bindings();
	stream_peer_tcp::___init_method_bindings();
	stream_texture::___init_method_bindings();
	style_box::___init_method_bindings();
	style_box_empty::___init_method_bindings();
	style_box_flat::___init_method_bindings();
	style_box_line::___init_method_bindings();
	style_box_texture::___init_method_bindings();
	surface_tool::___init_method_bindings();
	tcp_Server::___init_method_bindings();
	tab_container::___init_method_bindings();
	tabs::___init_method_bindings();
	text_edit::___init_method_bindings();
	text_file::___init_method_bindings();
	text_mesh::___init_method_bindings();
	texture::___init_method_bindings();
	texture3d::___init_method_bindings();
	texture_array::___init_method_bindings();
	texture_button::___init_method_bindings();
	texture_layered::___init_method_bindings();
	texture_progress::___init_method_bindings();
	texture_rect::___init_method_bindings();
	theme::___init_method_bindings();
	tile_map::___init_method_bindings();
	tile_set::___init_method_bindings();
	time::___init_method_bindings();
	timer::___init_method_bindings();
	tool_button::___init_method_bindings();
	touch_screen_button::___init_method_bindings();
	translation::___init_method_bindings();
	translation_server::___init_method_bindings();
	tree::___init_method_bindings();
	tree_item::___init_method_bindings();
	triangle_mesh::___init_method_bindings();
	tween::___init_method_bindings();
	tweener::___init_method_bindings();
	udpserver::___init_method_bindings();
	upnp::___init_method_bindings();
	upnpdevice::___init_method_bindings();
	undo_redo::___init_method_bindings();
	vbox_container::___init_method_bindings();
	vflow_container::___init_method_bindings();
	vscroll_bar::___init_method_bindings();
	vseparator::___init_method_bindings();
	vslider::___init_method_bindings();
	vsplit_container::___init_method_bindings();
	vehicle_body::___init_method_bindings();
	vehicle_wheel::___init_method_bindings();
	video_player::___init_method_bindings();
	video_stream::___init_method_bindings();
	video_stream_gdnative::___init_method_bindings();
	video_stream_theora::___init_method_bindings();
	video_stream_webm::___init_method_bindings();
	viewport::___init_method_bindings();
	viewport_container::___init_method_bindings();
	viewport_texture::___init_method_bindings();
	visibility_enabler::___init_method_bindings();
	visibility_enabler2d::___init_method_bindings();
	visibility_notifier::___init_method_bindings();
	visibility_notifier2d::___init_method_bindings();
	visual_instance::___init_method_bindings();
	visual_script::___init_method_bindings();
	visual_script_basic_type_constant::___init_method_bindings();
	visual_script_builtin_func::___init_method_bindings();
	visual_script_class_constant::___init_method_bindings();
	visual_script_comment::___init_method_bindings();
	visual_script_compose_array::___init_method_bindings();
	visual_script_condition::___init_method_bindings();
	visual_script_constant::___init_method_bindings();
	visual_script_constructor::___init_method_bindings();
	visual_script_custom_node::___init_method_bindings();
	visual_script_deconstruct::___init_method_bindings();
	visual_script_emit_signal::___init_method_bindings();
	visual_script_engine_singleton::___init_method_bindings();
	visual_script_expression::___init_method_bindings();
	visual_script_function::___init_method_bindings();
	visual_script_function_call::___init_method_bindings();
	visual_script_function_state::___init_method_bindings();
	visual_script_global_constant::___init_method_bindings();
	visual_script_index_get::___init_method_bindings();
	visual_script_index_set::___init_method_bindings();
	visual_script_input_action::___init_method_bindings();
	visual_script_iterator::___init_method_bindings();
	visual_script_lists::___init_method_bindings();
	visual_script_local_var::___init_method_bindings();
	visual_script_local_var_set::___init_method_bindings();
	visual_script_math_constant::___init_method_bindings();
	visual_script_node::___init_method_bindings();
	visual_script_operator::___init_method_bindings();
	visual_script_preload::___init_method_bindings();
	visual_script_property_get::___init_method_bindings();
	visual_script_property_set::___init_method_bindings();
	visual_script_resource_path::___init_method_bindings();
	visual_script_return::___init_method_bindings();
	visual_script_scene_node::___init_method_bindings();
	visual_script_scene_tree::___init_method_bindings();
	visual_script_select::___init_method_bindings();
	visual_script_self::___init_method_bindings();
	visual_script_sequence::___init_method_bindings();
	visual_script_sub_call::___init_method_bindings();
	visual_script_switch::___init_method_bindings();
	visual_script_type_cast::___init_method_bindings();
	visual_script_variable_get::___init_method_bindings();
	visual_script_variable_set::___init_method_bindings();
	visual_script_while::___init_method_bindings();
	visual_script_yield::___init_method_bindings();
	visual_script_yield_signal::___init_method_bindings();
	visual_server::___init_method_bindings();
	visual_shader::___init_method_bindings();
	visual_shader_node::___init_method_bindings();
	visual_shader_node_boolean_constant::___init_method_bindings();
	visual_shader_node_boolean_uniform::___init_method_bindings();
	visual_shader_node_color_constant::___init_method_bindings();
	visual_shader_node_color_func::___init_method_bindings();
	visual_shader_node_color_op::___init_method_bindings();
	visual_shader_node_color_uniform::___init_method_bindings();
	visual_shader_node_compare::___init_method_bindings();
	visual_shader_node_cube_map::___init_method_bindings();
	visual_shader_node_cube_map_uniform::___init_method_bindings();
	visual_shader_node_custom::___init_method_bindings();
	visual_shader_node_determinant::___init_method_bindings();
	visual_shader_node_dot_product::___init_method_bindings();
	visual_shader_node_expression::___init_method_bindings();
	visual_shader_node_face_forward::___init_method_bindings();
	visual_shader_node_fresnel::___init_method_bindings();
	visual_shader_node_global_expression::___init_method_bindings();
	visual_shader_node_group_base::___init_method_bindings();
	visual_shader_node_if::___init_method_bindings();
	visual_shader_node_input::___init_method_bindings();
	visual_shader_node_is::___init_method_bindings();
	visual_shader_node_outer_product::___init_method_bindings();
	visual_shader_node_output::___init_method_bindings();
	visual_shader_node_scalar_clamp::___init_method_bindings();
	visual_shader_node_scalar_constant::___init_method_bindings();
	visual_shader_node_scalar_derivative_func::___init_method_bindings();
	visual_shader_node_scalar_func::___init_method_bindings();
	visual_shader_node_scalar_interp::___init_method_bindings();
	visual_shader_node_scalar_op::___init_method_bindings();
	visual_shader_node_scalar_smooth_step::___init_method_bindings();
	visual_shader_node_scalar_switch::___init_method_bindings();
	visual_shader_node_scalar_uniform::___init_method_bindings();
	visual_shader_node_switch::___init_method_bindings();
	visual_shader_node_texture::___init_method_bindings();
	visual_shader_node_texture_uniform::___init_method_bindings();
	visual_shader_node_texture_uniform_triplanar::___init_method_bindings();
	visual_shader_node_transform_compose::___init_method_bindings();
	visual_shader_node_transform_constant::___init_method_bindings();
	visual_shader_node_transform_decompose::___init_method_bindings();
	visual_shader_node_transform_func::___init_method_bindings();
	visual_shader_node_transform_mult::___init_method_bindings();
	visual_shader_node_transform_uniform::___init_method_bindings();
	visual_shader_node_transform_vec_mult::___init_method_bindings();
	visual_shader_node_uniform::___init_method_bindings();
	visual_shader_node_uniform_ref::___init_method_bindings();
	visual_shader_node_vec3_constant::___init_method_bindings();
	visual_shader_node_vec3_uniform::___init_method_bindings();
	visual_shader_node_vector_clamp::___init_method_bindings();
	visual_shader_node_vector_compose::___init_method_bindings();
	visual_shader_node_vector_decompose::___init_method_bindings();
	visual_shader_node_vector_derivative_func::___init_method_bindings();
	visual_shader_node_vector_distance::___init_method_bindings();
	visual_shader_node_vector_func::___init_method_bindings();
	visual_shader_node_vector_interp::___init_method_bindings();
	visual_shader_node_vector_len::___init_method_bindings();
	visual_shader_node_vector_op::___init_method_bindings();
	visual_shader_node_vector_refract::___init_method_bindings();
	visual_shader_node_vector_scalar_mix::___init_method_bindings();
	visual_shader_node_vector_scalar_smooth_step::___init_method_bindings();
	visual_shader_node_vector_scalar_step::___init_method_bindings();
	visual_shader_node_vector_smooth_step::___init_method_bindings();
	weak_ref::___init_method_bindings();
	web_rtcdata_channel::___init_method_bindings();
	web_rtcdata_channel_gdnative::___init_method_bindings();
	web_rtcmultiplayer::___init_method_bindings();
	web_rtcpeer_connection::___init_method_bindings();
	web_rtcpeer_connection_gdnative::___init_method_bindings();
	web_socket_client::___init_method_bindings();
	web_socket_multiplayer_peer::___init_method_bindings();
	web_socket_peer::___init_method_bindings();
	web_socket_server::___init_method_bindings();
	web_xrinterface::___init_method_bindings();
	window_dialog::___init_method_bindings();
	world::___init_method_bindings();
	world2d::___init_method_bindings();
	world_environment::___init_method_bindings();
	x509_certificate::___init_method_bindings();
	xmlparser::___init_method_bindings();
	ysort::___init_method_bindings();
	class_db::___init_method_bindings();
	directory::___init_method_bindings();
	engine::___init_method_bindings();
	file::___init_method_bindings();
	geometry::___init_method_bindings();
	json::___init_method_bindings();
	marshalls::___init_method_bindings();
	mutex::___init_method_bindings();
	os::___init_method_bindings();
	resource_loader::___init_method_bindings();
	resource_saver::___init_method_bindings();
	semaphore::___init_method_bindings();
	thread::___init_method_bindings();
	visual_script_editor::___init_method_bindings();
}

}