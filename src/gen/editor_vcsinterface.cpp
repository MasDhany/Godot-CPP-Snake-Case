#include "editor_vcsinterface.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


editor_vcsinterface::___method_bindings editor_vcsinterface::___mb = {};

void *editor_vcsinterface::_detail_class_tag = nullptr;

void editor_vcsinterface::___init_method_bindings() {
	___mb.mb__checkout_branch = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_checkout_branch");
	___mb.mb__commit = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_commit");
	___mb.mb__create_branch = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_create_branch");
	___mb.mb__create_remote = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_create_remote");
	___mb.mb__discard_file = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_discard_file");
	___mb.mb__fetch = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_fetch");
	___mb.mb__get_branch_list = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_branch_list");
	___mb.mb__get_current_branch_name = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_current_branch_name");
	___mb.mb__get_diff = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_diff");
	___mb.mb__get_line_diff = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_line_diff");
	___mb.mb__get_modified_files_data = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_modified_files_data");
	___mb.mb__get_previous_commits = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_previous_commits");
	___mb.mb__get_remotes = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_remotes");
	___mb.mb__get_vcs_name = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_get_vcs_name");
	___mb.mb__initialize = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_initialize");
	___mb.mb__pull = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_pull");
	___mb.mb__push = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_push");
	___mb.mb__remove_branch = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_remove_branch");
	___mb.mb__remove_remote = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_remove_remote");
	___mb.mb__set_credentials = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_set_credentials");
	___mb.mb__shut_down = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_shut_down");
	___mb.mb__stage_file = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_stage_file");
	___mb.mb__unstage_file = gd::api->godot_method_bind_get_method("EditorVCSInterface", "_unstage_file");
	___mb.mb_add_diff_hunks_into_diff_file = gd::api->godot_method_bind_get_method("EditorVCSInterface", "add_diff_hunks_into_diff_file");
	___mb.mb_add_line_diffs_into_diff_hunk = gd::api->godot_method_bind_get_method("EditorVCSInterface", "add_line_diffs_into_diff_hunk");
	___mb.mb_create_commit = gd::api->godot_method_bind_get_method("EditorVCSInterface", "create_commit");
	___mb.mb_create_diff_file = gd::api->godot_method_bind_get_method("EditorVCSInterface", "create_diff_file");
	___mb.mb_create_diff_hunk = gd::api->godot_method_bind_get_method("EditorVCSInterface", "create_diff_hunk");
	___mb.mb_create_diff_line = gd::api->godot_method_bind_get_method("EditorVCSInterface", "create_diff_line");
	___mb.mb_create_status_file = gd::api->godot_method_bind_get_method("EditorVCSInterface", "create_status_file");
	___mb.mb_popup_error = gd::api->godot_method_bind_get_method("EditorVCSInterface", "popup_error");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorVCSInterface");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool editor_vcsinterface::_checkout_branch(const string branch_name) {
	return ___godot_icall_bool_String(___mb.mb__checkout_branch, (const object *) this, branch_name);
}

void editor_vcsinterface::_commit(const string msg) {
	___godot_icall_void_String(___mb.mb__commit, (const object *) this, msg);
}

void editor_vcsinterface::_create_branch(const string branch_name) {
	___godot_icall_void_String(___mb.mb__create_branch, (const object *) this, branch_name);
}

void editor_vcsinterface::_create_remote(const string remote_name, const string remote_url) {
	___godot_icall_void_String_String(___mb.mb__create_remote, (const object *) this, remote_name, remote_url);
}

void editor_vcsinterface::_discard_file(const string file_path) {
	___godot_icall_void_String(___mb.mb__discard_file, (const object *) this, file_path);
}

void editor_vcsinterface::_fetch(const string remote) {
	___godot_icall_void_String(___mb.mb__fetch, (const object *) this, remote);
}

array editor_vcsinterface::_get_branch_list() {
	return ___godot_icall_Array(___mb.mb__get_branch_list, (const object *) this);
}

string editor_vcsinterface::_get_current_branch_name() {
	return ___godot_icall_String(___mb.mb__get_current_branch_name, (const object *) this);
}

array editor_vcsinterface::_get_diff(const string identifier, const int64_t area_) {
	return ___godot_icall_Array_String_int(___mb.mb__get_diff, (const object *) this, identifier, area_);
}

array editor_vcsinterface::_get_line_diff(const string file_path, const string text) {
	return ___godot_icall_Array_String_String(___mb.mb__get_line_diff, (const object *) this, file_path, text);
}

array editor_vcsinterface::_get_modified_files_data() {
	return ___godot_icall_Array(___mb.mb__get_modified_files_data, (const object *) this);
}

array editor_vcsinterface::_get_previous_commits(const int64_t max_commits) {
	return ___godot_icall_Array_int(___mb.mb__get_previous_commits, (const object *) this, max_commits);
}

array editor_vcsinterface::_get_remotes() {
	return ___godot_icall_Array(___mb.mb__get_remotes, (const object *) this);
}

string editor_vcsinterface::_get_vcs_name() {
	return ___godot_icall_String(___mb.mb__get_vcs_name, (const object *) this);
}

bool editor_vcsinterface::_initialize(const string project_path) {
	return ___godot_icall_bool_String(___mb.mb__initialize, (const object *) this, project_path);
}

void editor_vcsinterface::_pull(const string remote) {
	___godot_icall_void_String(___mb.mb__pull, (const object *) this, remote);
}

void editor_vcsinterface::_push(const string remote, const bool force) {
	___godot_icall_void_String_bool(___mb.mb__push, (const object *) this, remote, force);
}

void editor_vcsinterface::_remove_branch(const string branch_name) {
	___godot_icall_void_String(___mb.mb__remove_branch, (const object *) this, branch_name);
}

void editor_vcsinterface::_remove_remote(const string remote_name) {
	___godot_icall_void_String(___mb.mb__remove_remote, (const object *) this, remote_name);
}

void editor_vcsinterface::_set_credentials(const string username, const string password, const string ssh_public_key_path, const string ssh_private_key_path, const string ssh_passphrase) {
	___godot_icall_void_String_String_String_String_String(___mb.mb__set_credentials, (const object *) this, username, password, ssh_public_key_path, ssh_private_key_path, ssh_passphrase);
}

bool editor_vcsinterface::_shut_down() {
	return ___godot_icall_bool(___mb.mb__shut_down, (const object *) this);
}

void editor_vcsinterface::_stage_file(const string file_path) {
	___godot_icall_void_String(___mb.mb__stage_file, (const object *) this, file_path);
}

void editor_vcsinterface::_unstage_file(const string file_path) {
	___godot_icall_void_String(___mb.mb__unstage_file, (const object *) this, file_path);
}

dictionary editor_vcsinterface::add_diff_hunks_into_diff_file(const dictionary diff_file, const array diff_hunks) {
	return ___godot_icall_Dictionary_Dictionary_Array(___mb.mb_add_diff_hunks_into_diff_file, (const object *) this, diff_file, diff_hunks);
}

dictionary editor_vcsinterface::add_line_diffs_into_diff_hunk(const dictionary diff_hunk, const array line_diffs) {
	return ___godot_icall_Dictionary_Dictionary_Array(___mb.mb_add_line_diffs_into_diff_hunk, (const object *) this, diff_hunk, line_diffs);
}

dictionary editor_vcsinterface::create_commit(const string msg, const string author, const string id, const int64_t unix_timestamp, const int64_t offset_minutes) {
	return ___godot_icall_Dictionary_String_String_String_int_int(___mb.mb_create_commit, (const object *) this, msg, author, id, unix_timestamp, offset_minutes);
}

dictionary editor_vcsinterface::create_diff_file(const string new_file, const string old_file) {
	return ___godot_icall_Dictionary_String_String(___mb.mb_create_diff_file, (const object *) this, new_file, old_file);
}

dictionary editor_vcsinterface::create_diff_hunk(const int64_t old_start, const int64_t new_start, const int64_t old_lines, const int64_t new_lines) {
	return ___godot_icall_Dictionary_int_int_int_int(___mb.mb_create_diff_hunk, (const object *) this, old_start, new_start, old_lines, new_lines);
}

dictionary editor_vcsinterface::create_diff_line(const int64_t new_line_no, const int64_t old_line_no, const string content, const string status) {
	return ___godot_icall_Dictionary_int_int_String_String(___mb.mb_create_diff_line, (const object *) this, new_line_no, old_line_no, content, status);
}

dictionary editor_vcsinterface::create_status_file(const string file_path, const int64_t change_type, const int64_t area_) {
	return ___godot_icall_Dictionary_String_int_int(___mb.mb_create_status_file, (const object *) this, file_path, change_type, area_);
}

void editor_vcsinterface::popup_error(const string msg) {
	___godot_icall_void_String(___mb.mb_popup_error, (const object *) this, msg);
}

}