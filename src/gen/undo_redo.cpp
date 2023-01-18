#include "undo_redo.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


undo_redo::___method_bindings undo_redo::___mb = {};

void *undo_redo::_detail_class_tag = nullptr;

void undo_redo::___init_method_bindings() {
	___mb.mb_add_do_method = gd::api->godot_method_bind_get_method("UndoRedo", "add_do_method");
	___mb.mb_add_do_property = gd::api->godot_method_bind_get_method("UndoRedo", "add_do_property");
	___mb.mb_add_do_reference = gd::api->godot_method_bind_get_method("UndoRedo", "add_do_reference");
	___mb.mb_add_undo_method = gd::api->godot_method_bind_get_method("UndoRedo", "add_undo_method");
	___mb.mb_add_undo_property = gd::api->godot_method_bind_get_method("UndoRedo", "add_undo_property");
	___mb.mb_add_undo_reference = gd::api->godot_method_bind_get_method("UndoRedo", "add_undo_reference");
	___mb.mb_clear_history = gd::api->godot_method_bind_get_method("UndoRedo", "clear_history");
	___mb.mb_commit_action = gd::api->godot_method_bind_get_method("UndoRedo", "commit_action");
	___mb.mb_create_action = gd::api->godot_method_bind_get_method("UndoRedo", "create_action");
	___mb.mb_get_current_action_name = gd::api->godot_method_bind_get_method("UndoRedo", "get_current_action_name");
	___mb.mb_get_version = gd::api->godot_method_bind_get_method("UndoRedo", "get_version");
	___mb.mb_has_redo = gd::api->godot_method_bind_get_method("UndoRedo", "has_redo");
	___mb.mb_has_undo = gd::api->godot_method_bind_get_method("UndoRedo", "has_undo");
	___mb.mb_is_commiting_action = gd::api->godot_method_bind_get_method("UndoRedo", "is_commiting_action");
	___mb.mb_redo = gd::api->godot_method_bind_get_method("UndoRedo", "redo");
	___mb.mb_undo = gd::api->godot_method_bind_get_method("UndoRedo", "undo");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "UndoRedo");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

undo_redo *undo_redo::_new()
{
	return (undo_redo *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"UndoRedo")());
}
void undo_redo::add_do_method(const object *object_, const string method, const array& __var_args) {
	variant __given_args[2];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[1]);

	__given_args[0] = object_;
	__given_args[1] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 2));

	__args[0] = (godot_variant *) &__given_args[0];
	__args[1] = (godot_variant *) &__given_args[1];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 2] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_add_do_method, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 2), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_destroy((godot_variant *) &__given_args[1]);

}

void undo_redo::add_do_property(const object *object_, const string property, const variant value) {
	___godot_icall_void_Object_String_Variant(___mb.mb_add_do_property, (const object *) this, object_, property, value);
}

void undo_redo::add_do_reference(const object *object_) {
	___godot_icall_void_Object(___mb.mb_add_do_reference, (const object *) this, object_);
}

void undo_redo::add_undo_method(const object *object_, const string method, const array& __var_args) {
	variant __given_args[2];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[1]);

	__given_args[0] = object_;
	__given_args[1] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 2));

	__args[0] = (godot_variant *) &__given_args[0];
	__args[1] = (godot_variant *) &__given_args[1];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 2] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_add_undo_method, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 2), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);
	gd::api->godot_variant_destroy((godot_variant *) &__given_args[1]);

}

void undo_redo::add_undo_property(const object *object_, const string property, const variant value) {
	___godot_icall_void_Object_String_Variant(___mb.mb_add_undo_property, (const object *) this, object_, property, value);
}

void undo_redo::add_undo_reference(const object *object_) {
	___godot_icall_void_Object(___mb.mb_add_undo_reference, (const object *) this, object_);
}

void undo_redo::clear_history(const bool increase_version) {
	___godot_icall_void_bool(___mb.mb_clear_history, (const object *) this, increase_version);
}

void undo_redo::commit_action() {
	___godot_icall_void(___mb.mb_commit_action, (const object *) this);
}

void undo_redo::create_action(const string name, const int64_t merge_mode) {
	___godot_icall_void_String_int(___mb.mb_create_action, (const object *) this, name, merge_mode);
}

string undo_redo::get_current_action_name() const {
	return ___godot_icall_String(___mb.mb_get_current_action_name, (const object *) this);
}

int64_t undo_redo::get_version() const {
	return ___godot_icall_int(___mb.mb_get_version, (const object *) this);
}

bool undo_redo::has_redo() const {
	return ___godot_icall_bool(___mb.mb_has_redo, (const object *) this);
}

bool undo_redo::has_undo() const {
	return ___godot_icall_bool(___mb.mb_has_undo, (const object *) this);
}

bool undo_redo::is_commiting_action() const {
	return ___godot_icall_bool(___mb.mb_is_commiting_action, (const object *) this);
}

bool undo_redo::redo() {
	return ___godot_icall_bool(___mb.mb_redo, (const object *) this);
}

bool undo_redo::undo() {
	return ___godot_icall_bool(___mb.mb_undo, (const object *) this);
}

}