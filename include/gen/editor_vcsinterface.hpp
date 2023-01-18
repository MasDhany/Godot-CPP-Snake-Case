#ifndef GODOT_CPP_EDITORVCSINTERFACE_HPP
#define GODOT_CPP_EDITORVCSINTERFACE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {


class editor_vcsinterface : public object {
	struct ___method_bindings {
		godot_method_bind *mb__checkout_branch;
		godot_method_bind *mb__commit;
		godot_method_bind *mb__create_branch;
		godot_method_bind *mb__create_remote;
		godot_method_bind *mb__discard_file;
		godot_method_bind *mb__fetch;
		godot_method_bind *mb__get_branch_list;
		godot_method_bind *mb__get_current_branch_name;
		godot_method_bind *mb__get_diff;
		godot_method_bind *mb__get_line_diff;
		godot_method_bind *mb__get_modified_files_data;
		godot_method_bind *mb__get_previous_commits;
		godot_method_bind *mb__get_remotes;
		godot_method_bind *mb__get_vcs_name;
		godot_method_bind *mb__initialize;
		godot_method_bind *mb__pull;
		godot_method_bind *mb__push;
		godot_method_bind *mb__remove_branch;
		godot_method_bind *mb__remove_remote;
		godot_method_bind *mb__set_credentials;
		godot_method_bind *mb__shut_down;
		godot_method_bind *mb__stage_file;
		godot_method_bind *mb__unstage_file;
		godot_method_bind *mb_add_diff_hunks_into_diff_file;
		godot_method_bind *mb_add_line_diffs_into_diff_hunk;
		godot_method_bind *mb_create_commit;
		godot_method_bind *mb_create_diff_file;
		godot_method_bind *mb_create_diff_hunk;
		godot_method_bind *mb_create_diff_line;
		godot_method_bind *mb_create_status_file;
		godot_method_bind *mb_popup_error;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorVCSInterface"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorVCSInterface"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ChangeType {
		CHANGE_TYPE_NEW = 0,
		CHANGE_TYPE_MODIFIED = 1,
		CHANGE_TYPE_RENAMED = 2,
		CHANGE_TYPE_DELETED = 3,
		CHANGE_TYPE_TYPECHANGE = 4,
		CHANGE_TYPE_UNMERGED = 5,
	};
	enum TreeArea {
		TREE_AREA_COMMIT = 0,
		TREE_AREA_STAGED = 1,
		TREE_AREA_UNSTAGED = 2,
	};

	// constants

	// methods
	bool _checkout_branch(const string branch_name);
	void _commit(const string msg);
	void _create_branch(const string branch_name);
	void _create_remote(const string remote_name, const string remote_url);
	void _discard_file(const string file_path);
	void _fetch(const string remote);
	array _get_branch_list();
	string _get_current_branch_name();
	array _get_diff(const string identifier, const int64_t area_);
	array _get_line_diff(const string file_path, const string text);
	array _get_modified_files_data();
	array _get_previous_commits(const int64_t max_commits);
	array _get_remotes();
	string _get_vcs_name();
	bool _initialize(const string project_path);
	void _pull(const string remote);
	void _push(const string remote, const bool force);
	void _remove_branch(const string branch_name);
	void _remove_remote(const string remote_name);
	void _set_credentials(const string username, const string password, const string ssh_public_key_path, const string ssh_private_key_path, const string ssh_passphrase);
	bool _shut_down();
	void _stage_file(const string file_path);
	void _unstage_file(const string file_path);
	dictionary add_diff_hunks_into_diff_file(const dictionary diff_file, const array diff_hunks);
	dictionary add_line_diffs_into_diff_hunk(const dictionary diff_hunk, const array line_diffs);
	dictionary create_commit(const string msg, const string author, const string id, const int64_t unix_timestamp, const int64_t offset_minutes);
	dictionary create_diff_file(const string new_file, const string old_file);
	dictionary create_diff_hunk(const int64_t old_start, const int64_t new_start, const int64_t old_lines, const int64_t new_lines);
	dictionary create_diff_line(const int64_t new_line_no, const int64_t old_line_no, const string content, const string status);
	dictionary create_status_file(const string file_path, const int64_t change_type, const int64_t area_);
	void popup_error(const string msg);

};

}

#endif