#include "tag_db.hpp"
#include <typeinfo>


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
void ___register_types()
{
	gd::_TagDB::register_global_type("GlobalConstants", typeid(global_constants).hash_code(), 0);
	gd::_TagDB::register_global_type("AESContext", typeid(aescontext).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ARVRAnchor", typeid(arvranchor).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("ARVRCamera", typeid(arvrcamera).hash_code(), typeid(camera).hash_code());
	gd::_TagDB::register_global_type("ARVRController", typeid(arvrcontroller).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("ARVRInterface", typeid(arvrinterface).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ARVRInterfaceGDNative", typeid(arvrinterface_gdnative).hash_code(), typeid(arvrinterface).hash_code());
	gd::_TagDB::register_global_type("ARVROrigin", typeid(arvrorigin).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("ARVRPositionalTracker", typeid(arvrpositional_tracker).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ARVRServer", typeid(arvrserver).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("AStar", typeid(astar).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("AStar2D", typeid(astar2d).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("AcceptDialog", typeid(accept_dialog).hash_code(), typeid(window_dialog).hash_code());
	gd::_TagDB::register_global_type("AnimatedSprite", typeid(animated_sprite).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("AnimatedSprite3D", typeid(animated_sprite3d).hash_code(), typeid(sprite_base3d).hash_code());
	gd::_TagDB::register_global_type("AnimatedTexture", typeid(animated_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("Animation", typeid(animation).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("AnimationNode", typeid(animation_node).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeAdd2", typeid(animation_node_add2).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeAdd3", typeid(animation_node_add3).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeAnimation", typeid(animation_node_animation).hash_code(), typeid(animation_root_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeBlend2", typeid(animation_node_blend2).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeBlend3", typeid(animation_node_blend3).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeBlendSpace1D", typeid(animation_node_blend_space1d).hash_code(), typeid(animation_root_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeBlendSpace2D", typeid(animation_node_blend_space2d).hash_code(), typeid(animation_root_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeBlendTree", typeid(animation_node_blend_tree).hash_code(), typeid(animation_root_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeOneShot", typeid(animation_node_one_shot).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeOutput", typeid(animation_node_output).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeStateMachine", typeid(animation_node_state_machine).hash_code(), typeid(animation_root_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeStateMachinePlayback", typeid(animation_node_state_machine_playback).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeStateMachineTransition", typeid(animation_node_state_machine_transition).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeTimeScale", typeid(animation_node_time_scale).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeTimeSeek", typeid(animation_node_time_seek).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationNodeTransition", typeid(animation_node_transition).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationPlayer", typeid(animation_player).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("AnimationRootNode", typeid(animation_root_node).hash_code(), typeid(animation_node).hash_code());
	gd::_TagDB::register_global_type("AnimationTrackEditPlugin", typeid(animation_track_edit_plugin).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("AnimationTree", typeid(animation_tree).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("AnimationTreePlayer", typeid(animation_tree_player).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("Area", typeid(area).hash_code(), typeid(collision_object).hash_code());
	gd::_TagDB::register_global_type("Area2D", typeid(area2d).hash_code(), typeid(collision_object2d).hash_code());
	gd::_TagDB::register_global_type("ArrayMesh", typeid(array_mesh).hash_code(), typeid(mesh).hash_code());
	gd::_TagDB::register_global_type("AspectRatioContainer", typeid(aspect_ratio_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("AtlasTexture", typeid(atlas_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("AudioBusLayout", typeid(audio_bus_layout).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("AudioEffect", typeid(audio_effect).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("AudioEffectAmplify", typeid(audio_effect_amplify).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectBandLimitFilter", typeid(audio_effect_band_limit_filter).hash_code(), typeid(audio_effect_filter).hash_code());
	gd::_TagDB::register_global_type("AudioEffectBandPassFilter", typeid(audio_effect_band_pass_filter).hash_code(), typeid(audio_effect_filter).hash_code());
	gd::_TagDB::register_global_type("AudioEffectCapture", typeid(audio_effect_capture).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectChorus", typeid(audio_effect_chorus).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectCompressor", typeid(audio_effect_compressor).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectDelay", typeid(audio_effect_delay).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectDistortion", typeid(audio_effect_distortion).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectEQ", typeid(audio_effect_eq).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectEQ10", typeid(audio_effect_eq10).hash_code(), typeid(audio_effect_eq).hash_code());
	gd::_TagDB::register_global_type("AudioEffectEQ21", typeid(audio_effect_eq21).hash_code(), typeid(audio_effect_eq).hash_code());
	gd::_TagDB::register_global_type("AudioEffectEQ6", typeid(audio_effect_eq6).hash_code(), typeid(audio_effect_eq).hash_code());
	gd::_TagDB::register_global_type("AudioEffectFilter", typeid(audio_effect_filter).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectHighPassFilter", typeid(audio_effect_high_pass_filter).hash_code(), typeid(audio_effect_filter).hash_code());
	gd::_TagDB::register_global_type("AudioEffectHighShelfFilter", typeid(audio_effect_high_shelf_filter).hash_code(), typeid(audio_effect_filter).hash_code());
	gd::_TagDB::register_global_type("AudioEffectInstance", typeid(audio_effect_instance).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("AudioEffectLimiter", typeid(audio_effect_limiter).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectLowPassFilter", typeid(audio_effect_low_pass_filter).hash_code(), typeid(audio_effect_filter).hash_code());
	gd::_TagDB::register_global_type("AudioEffectLowShelfFilter", typeid(audio_effect_low_shelf_filter).hash_code(), typeid(audio_effect_filter).hash_code());
	gd::_TagDB::register_global_type("AudioEffectNotchFilter", typeid(audio_effect_notch_filter).hash_code(), typeid(audio_effect_filter).hash_code());
	gd::_TagDB::register_global_type("AudioEffectPanner", typeid(audio_effect_panner).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectPhaser", typeid(audio_effect_phaser).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectPitchShift", typeid(audio_effect_pitch_shift).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectRecord", typeid(audio_effect_record).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectReverb", typeid(audio_effect_reverb).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectSpectrumAnalyzer", typeid(audio_effect_spectrum_analyzer).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioEffectSpectrumAnalyzerInstance", typeid(audio_effect_spectrum_analyzer_instance).hash_code(), typeid(audio_effect_instance).hash_code());
	gd::_TagDB::register_global_type("AudioEffectStereoEnhance", typeid(audio_effect_stereo_enhance).hash_code(), typeid(audio_effect).hash_code());
	gd::_TagDB::register_global_type("AudioServer", typeid(audio_server).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("AudioStream", typeid(audio_stream).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("AudioStreamGenerator", typeid(audio_stream_generator).hash_code(), typeid(audio_stream).hash_code());
	gd::_TagDB::register_global_type("AudioStreamGeneratorPlayback", typeid(audio_stream_generator_playback).hash_code(), typeid(audio_stream_playback_resampled).hash_code());
	gd::_TagDB::register_global_type("AudioStreamMP3", typeid(audio_stream_mp3).hash_code(), typeid(audio_stream).hash_code());
	gd::_TagDB::register_global_type("AudioStreamMicrophone", typeid(audio_stream_microphone).hash_code(), typeid(audio_stream).hash_code());
	gd::_TagDB::register_global_type("AudioStreamOGGVorbis", typeid(audio_stream_oggvorbis).hash_code(), typeid(audio_stream).hash_code());
	gd::_TagDB::register_global_type("AudioStreamPlayback", typeid(audio_stream_playback).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("AudioStreamPlaybackResampled", typeid(audio_stream_playback_resampled).hash_code(), typeid(audio_stream_playback).hash_code());
	gd::_TagDB::register_global_type("AudioStreamPlayer", typeid(audio_stream_player).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("AudioStreamPlayer2D", typeid(audio_stream_player2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("AudioStreamPlayer3D", typeid(audio_stream_player3d).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("AudioStreamRandomPitch", typeid(audio_stream_random_pitch).hash_code(), typeid(audio_stream).hash_code());
	gd::_TagDB::register_global_type("AudioStreamSample", typeid(audio_stream_sample).hash_code(), typeid(audio_stream).hash_code());
	gd::_TagDB::register_global_type("BackBufferCopy", typeid(back_buffer_copy).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("BakedLightmap", typeid(baked_lightmap).hash_code(), typeid(visual_instance).hash_code());
	gd::_TagDB::register_global_type("BakedLightmapData", typeid(baked_lightmap_data).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("BaseButton", typeid(base_button).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("BitMap", typeid(bit_map).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("BitmapFont", typeid(bitmap_font).hash_code(), typeid(font).hash_code());
	gd::_TagDB::register_global_type("Bone2D", typeid(bone2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("BoneAttachment", typeid(bone_attachment).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("BoxContainer", typeid(box_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("BoxShape", typeid(box_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("BulletPhysicsServer", typeid(bullet_physics_server).hash_code(), typeid(physics_server).hash_code());
	gd::_TagDB::register_global_type("Button", typeid(button).hash_code(), typeid(base_button).hash_code());
	gd::_TagDB::register_global_type("ButtonGroup", typeid(button_group).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("CPUParticles", typeid(cpuparticles).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("CPUParticles2D", typeid(cpuparticles2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("CSGBox", typeid(csgbox).hash_code(), typeid(csgprimitive).hash_code());
	gd::_TagDB::register_global_type("CSGCombiner", typeid(csgcombiner).hash_code(), typeid(csgshape).hash_code());
	gd::_TagDB::register_global_type("CSGCylinder", typeid(csgcylinder).hash_code(), typeid(csgprimitive).hash_code());
	gd::_TagDB::register_global_type("CSGMesh", typeid(csgmesh).hash_code(), typeid(csgprimitive).hash_code());
	gd::_TagDB::register_global_type("CSGPolygon", typeid(csgpolygon).hash_code(), typeid(csgprimitive).hash_code());
	gd::_TagDB::register_global_type("CSGPrimitive", typeid(csgprimitive).hash_code(), typeid(csgshape).hash_code());
	gd::_TagDB::register_global_type("CSGShape", typeid(csgshape).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("CSGSphere", typeid(csgsphere).hash_code(), typeid(csgprimitive).hash_code());
	gd::_TagDB::register_global_type("CSGTorus", typeid(csgtorus).hash_code(), typeid(csgprimitive).hash_code());
	gd::_TagDB::register_global_type("CallbackTweener", typeid(callback_tweener).hash_code(), typeid(tweener).hash_code());
	gd::_TagDB::register_global_type("Camera", typeid(camera).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Camera2D", typeid(camera2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("CameraFeed", typeid(camera_feed).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("CameraServer", typeid(camera_server).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("CameraTexture", typeid(camera_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("CanvasItem", typeid(canvas_item).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("CanvasItemMaterial", typeid(canvas_item_material).hash_code(), typeid(material).hash_code());
	gd::_TagDB::register_global_type("CanvasLayer", typeid(canvas_layer).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("CanvasModulate", typeid(canvas_modulate).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("CapsuleMesh", typeid(capsule_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("CapsuleShape", typeid(capsule_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("CapsuleShape2D", typeid(capsule_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("CenterContainer", typeid(center_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("CharFXTransform", typeid(char_fxtransform).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("CheckBox", typeid(check_box).hash_code(), typeid(button).hash_code());
	gd::_TagDB::register_global_type("CheckButton", typeid(check_button).hash_code(), typeid(button).hash_code());
	gd::_TagDB::register_global_type("CircleShape2D", typeid(circle_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("ClippedCamera", typeid(clipped_camera).hash_code(), typeid(camera).hash_code());
	gd::_TagDB::register_global_type("CollisionObject", typeid(collision_object).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("CollisionObject2D", typeid(collision_object2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("CollisionPolygon", typeid(collision_polygon).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("CollisionPolygon2D", typeid(collision_polygon2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("CollisionShape", typeid(collision_shape).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("CollisionShape2D", typeid(collision_shape2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("ColorPicker", typeid(color_picker).hash_code(), typeid(box_container).hash_code());
	gd::_TagDB::register_global_type("ColorPickerButton", typeid(color_picker_button).hash_code(), typeid(button).hash_code());
	gd::_TagDB::register_global_type("ColorRect", typeid(color_rect).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("ConcavePolygonShape", typeid(concave_polygon_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("ConcavePolygonShape2D", typeid(concave_polygon_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("ConeTwistJoint", typeid(cone_twist_joint).hash_code(), typeid(joint).hash_code());
	gd::_TagDB::register_global_type("ConfigFile", typeid(config_file).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ConfirmationDialog", typeid(confirmation_dialog).hash_code(), typeid(accept_dialog).hash_code());
	gd::_TagDB::register_global_type("Container", typeid(container).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("Control", typeid(control).hash_code(), typeid(canvas_item).hash_code());
	gd::_TagDB::register_global_type("ConvexPolygonShape", typeid(convex_polygon_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("ConvexPolygonShape2D", typeid(convex_polygon_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("Crypto", typeid(crypto).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("CryptoKey", typeid(crypto_key).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("CubeMap", typeid(cube_map).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("CubeMesh", typeid(cube_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("CullInstance", typeid(cull_instance).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Curve", typeid(curve).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Curve2D", typeid(curve2d).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Curve3D", typeid(curve3d).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("CurveTexture", typeid(curve_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("CylinderMesh", typeid(cylinder_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("CylinderShape", typeid(cylinder_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("DTLSServer", typeid(dtlsserver).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("DampedSpringJoint2D", typeid(damped_spring_joint2d).hash_code(), typeid(joint2d).hash_code());
	gd::_TagDB::register_global_type("DirectionalLight", typeid(directional_light).hash_code(), typeid(light).hash_code());
	gd::_TagDB::register_global_type("DynamicFont", typeid(dynamic_font).hash_code(), typeid(font).hash_code());
	gd::_TagDB::register_global_type("DynamicFontData", typeid(dynamic_font_data).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("EditorExportPlugin", typeid(editor_export_plugin).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorFeatureProfile", typeid(editor_feature_profile).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorFileDialog", typeid(editor_file_dialog).hash_code(), typeid(confirmation_dialog).hash_code());
	gd::_TagDB::register_global_type("EditorFileSystem", typeid(editor_file_system).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("EditorFileSystemDirectory", typeid(editor_file_system_directory).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("EditorImportPlugin", typeid(editor_import_plugin).hash_code(), typeid(resource_importer).hash_code());
	gd::_TagDB::register_global_type("EditorInspector", typeid(editor_inspector).hash_code(), typeid(scroll_container).hash_code());
	gd::_TagDB::register_global_type("EditorInspectorPlugin", typeid(editor_inspector_plugin).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorInterface", typeid(editor_interface).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("EditorPlugin", typeid(editor_plugin).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("EditorProperty", typeid(editor_property).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("EditorResourceConversionPlugin", typeid(editor_resource_conversion_plugin).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorResourcePicker", typeid(editor_resource_picker).hash_code(), typeid(hbox_container).hash_code());
	gd::_TagDB::register_global_type("EditorResourcePreview", typeid(editor_resource_preview).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("EditorResourcePreviewGenerator", typeid(editor_resource_preview_generator).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorSceneImporter", typeid(editor_scene_importer).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorSceneImporterFBX", typeid(editor_scene_importer_fbx).hash_code(), typeid(editor_scene_importer).hash_code());
	gd::_TagDB::register_global_type("EditorSceneImporterGLTF", typeid(editor_scene_importer_gltf).hash_code(), typeid(editor_scene_importer).hash_code());
	gd::_TagDB::register_global_type("EditorScenePostImport", typeid(editor_scene_post_import).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorScript", typeid(editor_script).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("EditorScriptPicker", typeid(editor_script_picker).hash_code(), typeid(editor_resource_picker).hash_code());
	gd::_TagDB::register_global_type("EditorSelection", typeid(editor_selection).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("EditorSettings", typeid(editor_settings).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("EditorSpatialGizmo", typeid(editor_spatial_gizmo).hash_code(), typeid(spatial_gizmo).hash_code());
	gd::_TagDB::register_global_type("EditorSpatialGizmoPlugin", typeid(editor_spatial_gizmo_plugin).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("EditorSpinSlider", typeid(editor_spin_slider).hash_code(), typeid(range).hash_code());
	gd::_TagDB::register_global_type("EditorVCSInterface", typeid(editor_vcsinterface).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("EncodedObjectAsID", typeid(encoded_object_as_id).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Environment", typeid(environment).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Expression", typeid(expression).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ExternalTexture", typeid(external_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("FileDialog", typeid(file_dialog).hash_code(), typeid(confirmation_dialog).hash_code());
	gd::_TagDB::register_global_type("FileSystemDock", typeid(file_system_dock).hash_code(), typeid(vbox_container).hash_code());
	gd::_TagDB::register_global_type("FlowContainer", typeid(flow_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("Font", typeid(font).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("FuncRef", typeid(func_ref).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("GDNative", typeid(gdnative).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("GDNativeLibrary", typeid(gdnative_library).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GDScript", typeid(gdscript).hash_code(), typeid(script).hash_code());
	gd::_TagDB::register_global_type("GDScriptFunctionState", typeid(gdscript_function_state).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("GIProbe", typeid(giprobe).hash_code(), typeid(visual_instance).hash_code());
	gd::_TagDB::register_global_type("GIProbeData", typeid(giprobe_data).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFAccessor", typeid(gltfaccessor).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFAnimation", typeid(gltfanimation).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFBufferView", typeid(gltfbuffer_view).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFCamera", typeid(gltfcamera).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFDocument", typeid(gltfdocument).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFLight", typeid(gltflight).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFMesh", typeid(gltfmesh).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFNode", typeid(gltfnode).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFSkeleton", typeid(gltfskeleton).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFSkin", typeid(gltfskin).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFSpecGloss", typeid(gltfspec_gloss).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFState", typeid(gltfstate).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GLTFTexture", typeid(gltftexture).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Generic6DOFJoint", typeid(generic6_dofjoint).hash_code(), typeid(joint).hash_code());
	gd::_TagDB::register_global_type("GeometryInstance", typeid(geometry_instance).hash_code(), typeid(visual_instance).hash_code());
	gd::_TagDB::register_global_type("Gradient", typeid(gradient).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("GradientTexture", typeid(gradient_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("GradientTexture2D", typeid(gradient_texture2d).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("GraphEdit", typeid(graph_edit).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("GraphNode", typeid(graph_node).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("GridContainer", typeid(grid_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("GridMap", typeid(grid_map).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("GrooveJoint2D", typeid(groove_joint2d).hash_code(), typeid(joint2d).hash_code());
	gd::_TagDB::register_global_type("HBoxContainer", typeid(hbox_container).hash_code(), typeid(box_container).hash_code());
	gd::_TagDB::register_global_type("HFlowContainer", typeid(hflow_container).hash_code(), typeid(flow_container).hash_code());
	gd::_TagDB::register_global_type("HMACContext", typeid(hmaccontext).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("HScrollBar", typeid(hscroll_bar).hash_code(), typeid(scroll_bar).hash_code());
	gd::_TagDB::register_global_type("HSeparator", typeid(hseparator).hash_code(), typeid(separator).hash_code());
	gd::_TagDB::register_global_type("HSlider", typeid(hslider).hash_code(), typeid(slider).hash_code());
	gd::_TagDB::register_global_type("HSplitContainer", typeid(hsplit_container).hash_code(), typeid(split_container).hash_code());
	gd::_TagDB::register_global_type("HTTPClient", typeid(httpclient).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("HTTPRequest", typeid(httprequest).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("HashingContext", typeid(hashing_context).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("HeightMapShape", typeid(height_map_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("HingeJoint", typeid(hinge_joint).hash_code(), typeid(joint).hash_code());
	gd::_TagDB::register_global_type("IP", typeid(ip).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("IP_Unix", typeid(ip_Unix).hash_code(), typeid(ip).hash_code());
	gd::_TagDB::register_global_type("Image", typeid(image).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("ImageTexture", typeid(image_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("ImmediateGeometry", typeid(immediate_geometry).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("Input", typeid(input).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("InputDefault", typeid(input_default).hash_code(), typeid(input).hash_code());
	gd::_TagDB::register_global_type("InputEvent", typeid(input_event).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("InputEventAction", typeid(input_event_action).hash_code(), typeid(input_event).hash_code());
	gd::_TagDB::register_global_type("InputEventGesture", typeid(input_event_gesture).hash_code(), typeid(input_event_with_modifiers).hash_code());
	gd::_TagDB::register_global_type("InputEventJoypadButton", typeid(input_event_joypad_button).hash_code(), typeid(input_event).hash_code());
	gd::_TagDB::register_global_type("InputEventJoypadMotion", typeid(input_event_joypad_motion).hash_code(), typeid(input_event).hash_code());
	gd::_TagDB::register_global_type("InputEventKey", typeid(input_event_key).hash_code(), typeid(input_event_with_modifiers).hash_code());
	gd::_TagDB::register_global_type("InputEventMIDI", typeid(input_event_midi).hash_code(), typeid(input_event).hash_code());
	gd::_TagDB::register_global_type("InputEventMagnifyGesture", typeid(input_event_magnify_gesture).hash_code(), typeid(input_event_gesture).hash_code());
	gd::_TagDB::register_global_type("InputEventMouse", typeid(input_event_mouse).hash_code(), typeid(input_event_with_modifiers).hash_code());
	gd::_TagDB::register_global_type("InputEventMouseButton", typeid(input_event_mouse_button).hash_code(), typeid(input_event_mouse).hash_code());
	gd::_TagDB::register_global_type("InputEventMouseMotion", typeid(input_event_mouse_motion).hash_code(), typeid(input_event_mouse).hash_code());
	gd::_TagDB::register_global_type("InputEventPanGesture", typeid(input_event_pan_gesture).hash_code(), typeid(input_event_gesture).hash_code());
	gd::_TagDB::register_global_type("InputEventScreenDrag", typeid(input_event_screen_drag).hash_code(), typeid(input_event).hash_code());
	gd::_TagDB::register_global_type("InputEventScreenTouch", typeid(input_event_screen_touch).hash_code(), typeid(input_event).hash_code());
	gd::_TagDB::register_global_type("InputEventWithModifiers", typeid(input_event_with_modifiers).hash_code(), typeid(input_event).hash_code());
	gd::_TagDB::register_global_type("InputMap", typeid(input_map).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("InstancePlaceholder", typeid(instance_placeholder).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("InterpolatedCamera", typeid(interpolated_camera).hash_code(), typeid(camera).hash_code());
	gd::_TagDB::register_global_type("IntervalTweener", typeid(interval_tweener).hash_code(), typeid(tweener).hash_code());
	gd::_TagDB::register_global_type("ItemList", typeid(item_list).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("JNISingleton", typeid(jnisingleton).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("JSONParseResult", typeid(jsonparse_result).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("JSONRPC", typeid(jsonrpc).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("JavaClass", typeid(java_class).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("JavaClassWrapper", typeid(java_class_wrapper).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("JavaScript", typeid(java_script).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("JavaScriptObject", typeid(java_script_object).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Joint", typeid(joint).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Joint2D", typeid(joint2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("KinematicBody", typeid(kinematic_body).hash_code(), typeid(physics_body).hash_code());
	gd::_TagDB::register_global_type("KinematicBody2D", typeid(kinematic_body2d).hash_code(), typeid(physics_body2d).hash_code());
	gd::_TagDB::register_global_type("KinematicCollision", typeid(kinematic_collision).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("KinematicCollision2D", typeid(kinematic_collision2d).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Label", typeid(label).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("Label3D", typeid(label3d).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("LargeTexture", typeid(large_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("Light", typeid(light).hash_code(), typeid(visual_instance).hash_code());
	gd::_TagDB::register_global_type("Light2D", typeid(light2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("LightOccluder2D", typeid(light_occluder2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Line2D", typeid(line2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("LineEdit", typeid(line_edit).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("LineShape2D", typeid(line_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("LinkButton", typeid(link_button).hash_code(), typeid(base_button).hash_code());
	gd::_TagDB::register_global_type("Listener", typeid(listener).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Listener2D", typeid(listener2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("MainLoop", typeid(main_loop).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("MarginContainer", typeid(margin_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("Material", typeid(material).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("MenuButton", typeid(menu_button).hash_code(), typeid(button).hash_code());
	gd::_TagDB::register_global_type("Mesh", typeid(mesh).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("MeshDataTool", typeid(mesh_data_tool).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("MeshInstance", typeid(mesh_instance).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("MeshInstance2D", typeid(mesh_instance2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("MeshLibrary", typeid(mesh_library).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("MeshTexture", typeid(mesh_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("MethodTweener", typeid(method_tweener).hash_code(), typeid(tweener).hash_code());
	gd::_TagDB::register_global_type("MobileVRInterface", typeid(mobile_vrinterface).hash_code(), typeid(arvrinterface).hash_code());
	gd::_TagDB::register_global_type("MultiMesh", typeid(multi_mesh).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("MultiMeshInstance", typeid(multi_mesh_instance).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("MultiMeshInstance2D", typeid(multi_mesh_instance2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("MultiplayerAPI", typeid(multiplayer_api).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("MultiplayerPeerGDNative", typeid(multiplayer_peer_gdnative).hash_code(), typeid(networked_multiplayer_peer).hash_code());
	gd::_TagDB::register_global_type("NativeScript", typeid(native_script).hash_code(), typeid(script).hash_code());
	gd::_TagDB::register_global_type("Navigation", typeid(navigation).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Navigation2D", typeid(navigation2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Navigation2DServer", typeid(navigation2_dserver).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("NavigationAgent", typeid(navigation_agent).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("NavigationAgent2D", typeid(navigation_agent2d).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("NavigationMesh", typeid(navigation_mesh).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("NavigationMeshGenerator", typeid(navigation_mesh_generator).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("NavigationMeshInstance", typeid(navigation_mesh_instance).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("NavigationObstacle", typeid(navigation_obstacle).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("NavigationObstacle2D", typeid(navigation_obstacle2d).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("NavigationPolygon", typeid(navigation_polygon).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("NavigationPolygonInstance", typeid(navigation_polygon_instance).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("NavigationServer", typeid(navigation_server).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("NetworkedMultiplayerCustom", typeid(networked_multiplayer_custom).hash_code(), typeid(networked_multiplayer_peer).hash_code());
	gd::_TagDB::register_global_type("NetworkedMultiplayerENet", typeid(networked_multiplayer_enet).hash_code(), typeid(networked_multiplayer_peer).hash_code());
	gd::_TagDB::register_global_type("NetworkedMultiplayerPeer", typeid(networked_multiplayer_peer).hash_code(), typeid(packet_peer).hash_code());
	gd::_TagDB::register_global_type("NinePatchRect", typeid(nine_patch_rect).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("Node", typeid(node).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("Node2D", typeid(node2d).hash_code(), typeid(canvas_item).hash_code());
	gd::_TagDB::register_global_type("NoiseTexture", typeid(noise_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("Object", typeid(object).hash_code(), 0);
	gd::_TagDB::register_global_type("Occluder", typeid(occluder).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("OccluderPolygon2D", typeid(occluder_polygon2d).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("OccluderShape", typeid(occluder_shape).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("OccluderShapePolygon", typeid(occluder_shape_polygon).hash_code(), typeid(occluder_shape).hash_code());
	gd::_TagDB::register_global_type("OccluderShapeSphere", typeid(occluder_shape_sphere).hash_code(), typeid(occluder_shape).hash_code());
	gd::_TagDB::register_global_type("OmniLight", typeid(omni_light).hash_code(), typeid(light).hash_code());
	gd::_TagDB::register_global_type("OpenSimplexNoise", typeid(open_simplex_noise).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("OptionButton", typeid(option_button).hash_code(), typeid(button).hash_code());
	gd::_TagDB::register_global_type("PCKPacker", typeid(pckpacker).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("PHashTranslation", typeid(phash_translation).hash_code(), typeid(translation).hash_code());
	gd::_TagDB::register_global_type("PackedDataContainer", typeid(packed_data_container).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("PackedDataContainerRef", typeid(packed_data_container_ref).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("PackedScene", typeid(packed_scene).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("PackedSceneGLTF", typeid(packed_scene_gltf).hash_code(), typeid(packed_scene).hash_code());
	gd::_TagDB::register_global_type("PacketPeer", typeid(packet_peer).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("PacketPeerDTLS", typeid(packet_peer_dtls).hash_code(), typeid(packet_peer).hash_code());
	gd::_TagDB::register_global_type("PacketPeerGDNative", typeid(packet_peer_gdnative).hash_code(), typeid(packet_peer).hash_code());
	gd::_TagDB::register_global_type("PacketPeerStream", typeid(packet_peer_stream).hash_code(), typeid(packet_peer).hash_code());
	gd::_TagDB::register_global_type("PacketPeerUDP", typeid(packet_peer_udp).hash_code(), typeid(packet_peer).hash_code());
	gd::_TagDB::register_global_type("Panel", typeid(panel).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("PanelContainer", typeid(panel_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("PanoramaSky", typeid(panorama_sky).hash_code(), typeid(sky).hash_code());
	gd::_TagDB::register_global_type("ParallaxBackground", typeid(parallax_background).hash_code(), typeid(canvas_layer).hash_code());
	gd::_TagDB::register_global_type("ParallaxLayer", typeid(parallax_layer).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Particles", typeid(particles).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("Particles2D", typeid(particles2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("ParticlesMaterial", typeid(particles_material).hash_code(), typeid(material).hash_code());
	gd::_TagDB::register_global_type("Path", typeid(path).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Path2D", typeid(path2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("PathFollow", typeid(path_follow).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("PathFollow2D", typeid(path_follow2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Performance", typeid(performance).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("PhysicalBone", typeid(physical_bone).hash_code(), typeid(physics_body).hash_code());
	gd::_TagDB::register_global_type("Physics2DDirectBodyState", typeid(physics2_ddirect_body_state).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("Physics2DDirectSpaceState", typeid(physics2_ddirect_space_state).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("Physics2DServer", typeid(physics2_dserver).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("Physics2DServerSW", typeid(physics2_dserver_sw).hash_code(), typeid(physics2_dserver).hash_code());
	gd::_TagDB::register_global_type("Physics2DShapeQueryParameters", typeid(physics2_dshape_query_parameters).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Physics2DTestMotionResult", typeid(physics2_dtest_motion_result).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("PhysicsBody", typeid(physics_body).hash_code(), typeid(collision_object).hash_code());
	gd::_TagDB::register_global_type("PhysicsBody2D", typeid(physics_body2d).hash_code(), typeid(collision_object2d).hash_code());
	gd::_TagDB::register_global_type("PhysicsDirectBodyState", typeid(physics_direct_body_state).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("PhysicsDirectSpaceState", typeid(physics_direct_space_state).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("PhysicsMaterial", typeid(physics_material).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("PhysicsServer", typeid(physics_server).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("PhysicsShapeQueryParameters", typeid(physics_shape_query_parameters).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("PhysicsTestMotionResult", typeid(physics_test_motion_result).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("PinJoint", typeid(pin_joint).hash_code(), typeid(joint).hash_code());
	gd::_TagDB::register_global_type("PinJoint2D", typeid(pin_joint2d).hash_code(), typeid(joint2d).hash_code());
	gd::_TagDB::register_global_type("PlaneMesh", typeid(plane_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("PlaneShape", typeid(plane_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("PluginScript", typeid(plugin_script).hash_code(), typeid(script).hash_code());
	gd::_TagDB::register_global_type("PointMesh", typeid(point_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("Polygon2D", typeid(polygon2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("PolygonPathFinder", typeid(polygon_path_finder).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Popup", typeid(popup).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("PopupDialog", typeid(popup_dialog).hash_code(), typeid(popup).hash_code());
	gd::_TagDB::register_global_type("PopupMenu", typeid(popup_menu).hash_code(), typeid(popup).hash_code());
	gd::_TagDB::register_global_type("PopupPanel", typeid(popup_panel).hash_code(), typeid(popup).hash_code());
	gd::_TagDB::register_global_type("Portal", typeid(portal).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Position2D", typeid(position2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Position3D", typeid(position3d).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("PrimitiveMesh", typeid(primitive_mesh).hash_code(), typeid(mesh).hash_code());
	gd::_TagDB::register_global_type("PrismMesh", typeid(prism_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("ProceduralSky", typeid(procedural_sky).hash_code(), typeid(sky).hash_code());
	gd::_TagDB::register_global_type("ProgressBar", typeid(progress_bar).hash_code(), typeid(range).hash_code());
	gd::_TagDB::register_global_type("ProjectSettings", typeid(project_settings).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("PropertyTweener", typeid(property_tweener).hash_code(), typeid(tweener).hash_code());
	gd::_TagDB::register_global_type("ProximityGroup", typeid(proximity_group).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("ProxyTexture", typeid(proxy_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("QuadMesh", typeid(quad_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("RandomNumberGenerator", typeid(random_number_generator).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Range", typeid(range).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("RayCast", typeid(ray_cast).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("RayCast2D", typeid(ray_cast2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("RayShape", typeid(ray_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("RayShape2D", typeid(ray_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("RectangleShape2D", typeid(rectangle_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("Reference", typeid(reference).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("ReferenceRect", typeid(reference_rect).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("ReflectionProbe", typeid(reflection_probe).hash_code(), typeid(visual_instance).hash_code());
	gd::_TagDB::register_global_type("RegEx", typeid(reg_ex).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("RegExMatch", typeid(reg_ex_match).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("RemoteTransform", typeid(remote_transform).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("RemoteTransform2D", typeid(remote_transform2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Resource", typeid(resource).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ResourceFormatLoader", typeid(resource_format_loader).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ResourceFormatSaver", typeid(resource_format_saver).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ResourceImporter", typeid(resource_importer).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ResourceInteractiveLoader", typeid(resource_interactive_loader).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("ResourcePreloader", typeid(resource_preloader).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("RichTextEffect", typeid(rich_text_effect).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("RichTextLabel", typeid(rich_text_label).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("RigidBody", typeid(rigid_body).hash_code(), typeid(physics_body).hash_code());
	gd::_TagDB::register_global_type("RigidBody2D", typeid(rigid_body2d).hash_code(), typeid(physics_body2d).hash_code());
	gd::_TagDB::register_global_type("Room", typeid(room).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("RoomGroup", typeid(room_group).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("RoomManager", typeid(room_manager).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("RootMotionView", typeid(root_motion_view).hash_code(), typeid(visual_instance).hash_code());
	gd::_TagDB::register_global_type("SceneState", typeid(scene_state).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("SceneTree", typeid(scene_tree).hash_code(), typeid(main_loop).hash_code());
	gd::_TagDB::register_global_type("SceneTreeTimer", typeid(scene_tree_timer).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("SceneTreeTween", typeid(scene_tree_tween).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Script", typeid(script).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("ScriptCreateDialog", typeid(script_create_dialog).hash_code(), typeid(confirmation_dialog).hash_code());
	gd::_TagDB::register_global_type("ScriptEditor", typeid(script_editor).hash_code(), typeid(panel_container).hash_code());
	gd::_TagDB::register_global_type("ScrollBar", typeid(scroll_bar).hash_code(), typeid(range).hash_code());
	gd::_TagDB::register_global_type("ScrollContainer", typeid(scroll_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("SegmentShape2D", typeid(segment_shape2d).hash_code(), typeid(shape2d).hash_code());
	gd::_TagDB::register_global_type("Separator", typeid(separator).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("Shader", typeid(shader).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("ShaderMaterial", typeid(shader_material).hash_code(), typeid(material).hash_code());
	gd::_TagDB::register_global_type("Shape", typeid(shape).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Shape2D", typeid(shape2d).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("ShortCut", typeid(short_cut).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Skeleton", typeid(skeleton).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Skeleton2D", typeid(skeleton2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("SkeletonIK", typeid(skeleton_ik).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("Skin", typeid(skin).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("SkinReference", typeid(skin_reference).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Sky", typeid(sky).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Slider", typeid(slider).hash_code(), typeid(range).hash_code());
	gd::_TagDB::register_global_type("SliderJoint", typeid(slider_joint).hash_code(), typeid(joint).hash_code());
	gd::_TagDB::register_global_type("SoftBody", typeid(soft_body).hash_code(), typeid(mesh_instance).hash_code());
	gd::_TagDB::register_global_type("Spatial", typeid(spatial).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("SpatialGizmo", typeid(spatial_gizmo).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("SpatialMaterial", typeid(spatial_material).hash_code(), typeid(material).hash_code());
	gd::_TagDB::register_global_type("SpatialVelocityTracker", typeid(spatial_velocity_tracker).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("SphereMesh", typeid(sphere_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("SphereShape", typeid(sphere_shape).hash_code(), typeid(shape).hash_code());
	gd::_TagDB::register_global_type("SpinBox", typeid(spin_box).hash_code(), typeid(range).hash_code());
	gd::_TagDB::register_global_type("SplitContainer", typeid(split_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("SpotLight", typeid(spot_light).hash_code(), typeid(light).hash_code());
	gd::_TagDB::register_global_type("SpringArm", typeid(spring_arm).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("Sprite", typeid(sprite).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Sprite3D", typeid(sprite3d).hash_code(), typeid(sprite_base3d).hash_code());
	gd::_TagDB::register_global_type("SpriteBase3D", typeid(sprite_base3d).hash_code(), typeid(geometry_instance).hash_code());
	gd::_TagDB::register_global_type("SpriteFrames", typeid(sprite_frames).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("StaticBody", typeid(static_body).hash_code(), typeid(physics_body).hash_code());
	gd::_TagDB::register_global_type("StaticBody2D", typeid(static_body2d).hash_code(), typeid(physics_body2d).hash_code());
	gd::_TagDB::register_global_type("StreamPeer", typeid(stream_peer).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("StreamPeerBuffer", typeid(stream_peer_buffer).hash_code(), typeid(stream_peer).hash_code());
	gd::_TagDB::register_global_type("StreamPeerGDNative", typeid(stream_peer_gdnative).hash_code(), typeid(stream_peer).hash_code());
	gd::_TagDB::register_global_type("StreamPeerSSL", typeid(stream_peer_ssl).hash_code(), typeid(stream_peer).hash_code());
	gd::_TagDB::register_global_type("StreamPeerTCP", typeid(stream_peer_tcp).hash_code(), typeid(stream_peer).hash_code());
	gd::_TagDB::register_global_type("StreamTexture", typeid(stream_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("StyleBox", typeid(style_box).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("StyleBoxEmpty", typeid(style_box_empty).hash_code(), typeid(style_box).hash_code());
	gd::_TagDB::register_global_type("StyleBoxFlat", typeid(style_box_flat).hash_code(), typeid(style_box).hash_code());
	gd::_TagDB::register_global_type("StyleBoxLine", typeid(style_box_line).hash_code(), typeid(style_box).hash_code());
	gd::_TagDB::register_global_type("StyleBoxTexture", typeid(style_box_texture).hash_code(), typeid(style_box).hash_code());
	gd::_TagDB::register_global_type("SurfaceTool", typeid(surface_tool).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("TCP_Server", typeid(tcp_Server).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("TabContainer", typeid(tab_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("Tabs", typeid(tabs).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("TextEdit", typeid(text_edit).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("TextFile", typeid(text_file).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("TextMesh", typeid(text_mesh).hash_code(), typeid(primitive_mesh).hash_code());
	gd::_TagDB::register_global_type("Texture", typeid(texture).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Texture3D", typeid(texture3d).hash_code(), typeid(texture_layered).hash_code());
	gd::_TagDB::register_global_type("TextureArray", typeid(texture_array).hash_code(), typeid(texture_layered).hash_code());
	gd::_TagDB::register_global_type("TextureButton", typeid(texture_button).hash_code(), typeid(base_button).hash_code());
	gd::_TagDB::register_global_type("TextureLayered", typeid(texture_layered).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("TextureProgress", typeid(texture_progress).hash_code(), typeid(range).hash_code());
	gd::_TagDB::register_global_type("TextureRect", typeid(texture_rect).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("Theme", typeid(theme).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("TileMap", typeid(tile_map).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("TileSet", typeid(tile_set).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("Time", typeid(time).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("Timer", typeid(timer).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("ToolButton", typeid(tool_button).hash_code(), typeid(button).hash_code());
	gd::_TagDB::register_global_type("TouchScreenButton", typeid(touch_screen_button).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("Translation", typeid(translation).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("TranslationServer", typeid(translation_server).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("Tree", typeid(tree).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("TreeItem", typeid(tree_item).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("TriangleMesh", typeid(triangle_mesh).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("Tween", typeid(tween).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("Tweener", typeid(tweener).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("UDPServer", typeid(udpserver).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("UPNP", typeid(upnp).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("UPNPDevice", typeid(upnpdevice).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("UndoRedo", typeid(undo_redo).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("VBoxContainer", typeid(vbox_container).hash_code(), typeid(box_container).hash_code());
	gd::_TagDB::register_global_type("VFlowContainer", typeid(vflow_container).hash_code(), typeid(flow_container).hash_code());
	gd::_TagDB::register_global_type("VScrollBar", typeid(vscroll_bar).hash_code(), typeid(scroll_bar).hash_code());
	gd::_TagDB::register_global_type("VSeparator", typeid(vseparator).hash_code(), typeid(separator).hash_code());
	gd::_TagDB::register_global_type("VSlider", typeid(vslider).hash_code(), typeid(slider).hash_code());
	gd::_TagDB::register_global_type("VSplitContainer", typeid(vsplit_container).hash_code(), typeid(split_container).hash_code());
	gd::_TagDB::register_global_type("VehicleBody", typeid(vehicle_body).hash_code(), typeid(rigid_body).hash_code());
	gd::_TagDB::register_global_type("VehicleWheel", typeid(vehicle_wheel).hash_code(), typeid(spatial).hash_code());
	gd::_TagDB::register_global_type("VideoPlayer", typeid(video_player).hash_code(), typeid(control).hash_code());
	gd::_TagDB::register_global_type("VideoStream", typeid(video_stream).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("VideoStreamGDNative", typeid(video_stream_gdnative).hash_code(), typeid(video_stream).hash_code());
	gd::_TagDB::register_global_type("VideoStreamTheora", typeid(video_stream_theora).hash_code(), typeid(video_stream).hash_code());
	gd::_TagDB::register_global_type("VideoStreamWebm", typeid(video_stream_webm).hash_code(), typeid(video_stream).hash_code());
	gd::_TagDB::register_global_type("Viewport", typeid(viewport).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("ViewportContainer", typeid(viewport_container).hash_code(), typeid(container).hash_code());
	gd::_TagDB::register_global_type("ViewportTexture", typeid(viewport_texture).hash_code(), typeid(texture).hash_code());
	gd::_TagDB::register_global_type("VisibilityEnabler", typeid(visibility_enabler).hash_code(), typeid(visibility_notifier).hash_code());
	gd::_TagDB::register_global_type("VisibilityEnabler2D", typeid(visibility_enabler2d).hash_code(), typeid(visibility_notifier2d).hash_code());
	gd::_TagDB::register_global_type("VisibilityNotifier", typeid(visibility_notifier).hash_code(), typeid(cull_instance).hash_code());
	gd::_TagDB::register_global_type("VisibilityNotifier2D", typeid(visibility_notifier2d).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("VisualInstance", typeid(visual_instance).hash_code(), typeid(cull_instance).hash_code());
	gd::_TagDB::register_global_type("VisualScript", typeid(visual_script).hash_code(), typeid(script).hash_code());
	gd::_TagDB::register_global_type("VisualScriptBasicTypeConstant", typeid(visual_script_basic_type_constant).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptBuiltinFunc", typeid(visual_script_builtin_func).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptClassConstant", typeid(visual_script_class_constant).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptComment", typeid(visual_script_comment).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptComposeArray", typeid(visual_script_compose_array).hash_code(), typeid(visual_script_lists).hash_code());
	gd::_TagDB::register_global_type("VisualScriptCondition", typeid(visual_script_condition).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptConstant", typeid(visual_script_constant).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptConstructor", typeid(visual_script_constructor).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptCustomNode", typeid(visual_script_custom_node).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptDeconstruct", typeid(visual_script_deconstruct).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptEmitSignal", typeid(visual_script_emit_signal).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptEngineSingleton", typeid(visual_script_engine_singleton).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptExpression", typeid(visual_script_expression).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptFunction", typeid(visual_script_function).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptFunctionCall", typeid(visual_script_function_call).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptFunctionState", typeid(visual_script_function_state).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("VisualScriptGlobalConstant", typeid(visual_script_global_constant).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptIndexGet", typeid(visual_script_index_get).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptIndexSet", typeid(visual_script_index_set).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptInputAction", typeid(visual_script_input_action).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptIterator", typeid(visual_script_iterator).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptLists", typeid(visual_script_lists).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptLocalVar", typeid(visual_script_local_var).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptLocalVarSet", typeid(visual_script_local_var_set).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptMathConstant", typeid(visual_script_math_constant).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptNode", typeid(visual_script_node).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("VisualScriptOperator", typeid(visual_script_operator).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptPreload", typeid(visual_script_preload).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptPropertyGet", typeid(visual_script_property_get).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptPropertySet", typeid(visual_script_property_set).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptResourcePath", typeid(visual_script_resource_path).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptReturn", typeid(visual_script_return).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptSceneNode", typeid(visual_script_scene_node).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptSceneTree", typeid(visual_script_scene_tree).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptSelect", typeid(visual_script_select).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptSelf", typeid(visual_script_self).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptSequence", typeid(visual_script_sequence).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptSubCall", typeid(visual_script_sub_call).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptSwitch", typeid(visual_script_switch).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptTypeCast", typeid(visual_script_type_cast).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptVariableGet", typeid(visual_script_variable_get).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptVariableSet", typeid(visual_script_variable_set).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptWhile", typeid(visual_script_while).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptYield", typeid(visual_script_yield).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualScriptYieldSignal", typeid(visual_script_yield_signal).hash_code(), typeid(visual_script_node).hash_code());
	gd::_TagDB::register_global_type("VisualServer", typeid(visual_server).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("VisualShader", typeid(visual_shader).hash_code(), typeid(shader).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNode", typeid(visual_shader_node).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeBooleanConstant", typeid(visual_shader_node_boolean_constant).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeBooleanUniform", typeid(visual_shader_node_boolean_uniform).hash_code(), typeid(visual_shader_node_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeColorConstant", typeid(visual_shader_node_color_constant).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeColorFunc", typeid(visual_shader_node_color_func).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeColorOp", typeid(visual_shader_node_color_op).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeColorUniform", typeid(visual_shader_node_color_uniform).hash_code(), typeid(visual_shader_node_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeCompare", typeid(visual_shader_node_compare).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeCubeMap", typeid(visual_shader_node_cube_map).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeCubeMapUniform", typeid(visual_shader_node_cube_map_uniform).hash_code(), typeid(visual_shader_node_texture_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeCustom", typeid(visual_shader_node_custom).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeDeterminant", typeid(visual_shader_node_determinant).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeDotProduct", typeid(visual_shader_node_dot_product).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeExpression", typeid(visual_shader_node_expression).hash_code(), typeid(visual_shader_node_group_base).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeFaceForward", typeid(visual_shader_node_face_forward).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeFresnel", typeid(visual_shader_node_fresnel).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeGlobalExpression", typeid(visual_shader_node_global_expression).hash_code(), typeid(visual_shader_node_expression).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeGroupBase", typeid(visual_shader_node_group_base).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeIf", typeid(visual_shader_node_if).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeInput", typeid(visual_shader_node_input).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeIs", typeid(visual_shader_node_is).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeOuterProduct", typeid(visual_shader_node_outer_product).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeOutput", typeid(visual_shader_node_output).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarClamp", typeid(visual_shader_node_scalar_clamp).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarConstant", typeid(visual_shader_node_scalar_constant).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarDerivativeFunc", typeid(visual_shader_node_scalar_derivative_func).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarFunc", typeid(visual_shader_node_scalar_func).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarInterp", typeid(visual_shader_node_scalar_interp).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarOp", typeid(visual_shader_node_scalar_op).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarSmoothStep", typeid(visual_shader_node_scalar_smooth_step).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarSwitch", typeid(visual_shader_node_scalar_switch).hash_code(), typeid(visual_shader_node_switch).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeScalarUniform", typeid(visual_shader_node_scalar_uniform).hash_code(), typeid(visual_shader_node_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeSwitch", typeid(visual_shader_node_switch).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTexture", typeid(visual_shader_node_texture).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTextureUniform", typeid(visual_shader_node_texture_uniform).hash_code(), typeid(visual_shader_node_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTextureUniformTriplanar", typeid(visual_shader_node_texture_uniform_triplanar).hash_code(), typeid(visual_shader_node_texture_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTransformCompose", typeid(visual_shader_node_transform_compose).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTransformConstant", typeid(visual_shader_node_transform_constant).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTransformDecompose", typeid(visual_shader_node_transform_decompose).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTransformFunc", typeid(visual_shader_node_transform_func).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTransformMult", typeid(visual_shader_node_transform_mult).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTransformUniform", typeid(visual_shader_node_transform_uniform).hash_code(), typeid(visual_shader_node_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeTransformVecMult", typeid(visual_shader_node_transform_vec_mult).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeUniform", typeid(visual_shader_node_uniform).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeUniformRef", typeid(visual_shader_node_uniform_ref).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVec3Constant", typeid(visual_shader_node_vec3_constant).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVec3Uniform", typeid(visual_shader_node_vec3_uniform).hash_code(), typeid(visual_shader_node_uniform).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorClamp", typeid(visual_shader_node_vector_clamp).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorCompose", typeid(visual_shader_node_vector_compose).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorDecompose", typeid(visual_shader_node_vector_decompose).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorDerivativeFunc", typeid(visual_shader_node_vector_derivative_func).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorDistance", typeid(visual_shader_node_vector_distance).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorFunc", typeid(visual_shader_node_vector_func).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorInterp", typeid(visual_shader_node_vector_interp).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorLen", typeid(visual_shader_node_vector_len).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorOp", typeid(visual_shader_node_vector_op).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorRefract", typeid(visual_shader_node_vector_refract).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorScalarMix", typeid(visual_shader_node_vector_scalar_mix).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorScalarSmoothStep", typeid(visual_shader_node_vector_scalar_smooth_step).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorScalarStep", typeid(visual_shader_node_vector_scalar_step).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("VisualShaderNodeVectorSmoothStep", typeid(visual_shader_node_vector_smooth_step).hash_code(), typeid(visual_shader_node).hash_code());
	gd::_TagDB::register_global_type("WeakRef", typeid(weak_ref).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("WebRTCDataChannel", typeid(web_rtcdata_channel).hash_code(), typeid(packet_peer).hash_code());
	gd::_TagDB::register_global_type("WebRTCDataChannelGDNative", typeid(web_rtcdata_channel_gdnative).hash_code(), typeid(web_rtcdata_channel).hash_code());
	gd::_TagDB::register_global_type("WebRTCMultiplayer", typeid(web_rtcmultiplayer).hash_code(), typeid(networked_multiplayer_peer).hash_code());
	gd::_TagDB::register_global_type("WebRTCPeerConnection", typeid(web_rtcpeer_connection).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("WebRTCPeerConnectionGDNative", typeid(web_rtcpeer_connection_gdnative).hash_code(), typeid(web_rtcpeer_connection).hash_code());
	gd::_TagDB::register_global_type("WebSocketClient", typeid(web_socket_client).hash_code(), typeid(web_socket_multiplayer_peer).hash_code());
	gd::_TagDB::register_global_type("WebSocketMultiplayerPeer", typeid(web_socket_multiplayer_peer).hash_code(), typeid(networked_multiplayer_peer).hash_code());
	gd::_TagDB::register_global_type("WebSocketPeer", typeid(web_socket_peer).hash_code(), typeid(packet_peer).hash_code());
	gd::_TagDB::register_global_type("WebSocketServer", typeid(web_socket_server).hash_code(), typeid(web_socket_multiplayer_peer).hash_code());
	gd::_TagDB::register_global_type("WebXRInterface", typeid(web_xrinterface).hash_code(), typeid(arvrinterface).hash_code());
	gd::_TagDB::register_global_type("WindowDialog", typeid(window_dialog).hash_code(), typeid(popup).hash_code());
	gd::_TagDB::register_global_type("World", typeid(world).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("World2D", typeid(world2d).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("WorldEnvironment", typeid(world_environment).hash_code(), typeid(node).hash_code());
	gd::_TagDB::register_global_type("X509Certificate", typeid(x509_certificate).hash_code(), typeid(resource).hash_code());
	gd::_TagDB::register_global_type("XMLParser", typeid(xmlparser).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("YSort", typeid(ysort).hash_code(), typeid(node2d).hash_code());
	gd::_TagDB::register_global_type("_ClassDB", typeid(class_db).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_Directory", typeid(directory).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("_Engine", typeid(engine).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_File", typeid(file).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("_Geometry", typeid(geometry).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_JSON", typeid(json).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_Marshalls", typeid(marshalls).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_Mutex", typeid(mutex).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("_OS", typeid(os).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_ResourceLoader", typeid(resource_loader).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_ResourceSaver", typeid(resource_saver).hash_code(), typeid(object).hash_code());
	gd::_TagDB::register_global_type("_Semaphore", typeid(semaphore).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("_Thread", typeid(thread).hash_code(), typeid(reference).hash_code());
	gd::_TagDB::register_global_type("_VisualScriptEditor", typeid(visual_script_editor).hash_code(), typeid(object).hash_code());
}

}