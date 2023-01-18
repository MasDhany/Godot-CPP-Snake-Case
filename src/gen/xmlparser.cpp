#include "xmlparser.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


xmlparser::___method_bindings xmlparser::___mb = {};

void *xmlparser::_detail_class_tag = nullptr;

void xmlparser::___init_method_bindings() {
	___mb.mb_get_attribute_count = gd::api->godot_method_bind_get_method("XMLParser", "get_attribute_count");
	___mb.mb_get_attribute_name = gd::api->godot_method_bind_get_method("XMLParser", "get_attribute_name");
	___mb.mb_get_attribute_value = gd::api->godot_method_bind_get_method("XMLParser", "get_attribute_value");
	___mb.mb_get_current_line = gd::api->godot_method_bind_get_method("XMLParser", "get_current_line");
	___mb.mb_get_named_attribute_value = gd::api->godot_method_bind_get_method("XMLParser", "get_named_attribute_value");
	___mb.mb_get_named_attribute_value_safe = gd::api->godot_method_bind_get_method("XMLParser", "get_named_attribute_value_safe");
	___mb.mb_get_node_data = gd::api->godot_method_bind_get_method("XMLParser", "get_node_data");
	___mb.mb_get_node_name = gd::api->godot_method_bind_get_method("XMLParser", "get_node_name");
	___mb.mb_get_node_offset = gd::api->godot_method_bind_get_method("XMLParser", "get_node_offset");
	___mb.mb_get_node_type = gd::api->godot_method_bind_get_method("XMLParser", "get_node_type");
	___mb.mb_has_attribute = gd::api->godot_method_bind_get_method("XMLParser", "has_attribute");
	___mb.mb_is_empty = gd::api->godot_method_bind_get_method("XMLParser", "is_empty");
	___mb.mb_open = gd::api->godot_method_bind_get_method("XMLParser", "open");
	___mb.mb_open_buffer = gd::api->godot_method_bind_get_method("XMLParser", "open_buffer");
	___mb.mb_read = gd::api->godot_method_bind_get_method("XMLParser", "read");
	___mb.mb_seek = gd::api->godot_method_bind_get_method("XMLParser", "seek");
	___mb.mb_skip_section = gd::api->godot_method_bind_get_method("XMLParser", "skip_section");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "XMLParser");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

xmlparser *xmlparser::_new()
{
	return (xmlparser *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"XMLParser")());
}
int64_t xmlparser::get_attribute_count() const {
	return ___godot_icall_int(___mb.mb_get_attribute_count, (const object *) this);
}

string xmlparser::get_attribute_name(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_attribute_name, (const object *) this, idx);
}

string xmlparser::get_attribute_value(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_attribute_value, (const object *) this, idx);
}

int64_t xmlparser::get_current_line() const {
	return ___godot_icall_int(___mb.mb_get_current_line, (const object *) this);
}

string xmlparser::get_named_attribute_value(const string name) const {
	return ___godot_icall_String_String(___mb.mb_get_named_attribute_value, (const object *) this, name);
}

string xmlparser::get_named_attribute_value_safe(const string name) const {
	return ___godot_icall_String_String(___mb.mb_get_named_attribute_value_safe, (const object *) this, name);
}

string xmlparser::get_node_data() const {
	return ___godot_icall_String(___mb.mb_get_node_data, (const object *) this);
}

string xmlparser::get_node_name() const {
	return ___godot_icall_String(___mb.mb_get_node_name, (const object *) this);
}

int64_t xmlparser::get_node_offset() const {
	return ___godot_icall_int(___mb.mb_get_node_offset, (const object *) this);
}

xmlparser::NodeType xmlparser::get_node_type() {
	return (xmlparser::NodeType) ___godot_icall_int(___mb.mb_get_node_type, (const object *) this);
}

bool xmlparser::has_attribute(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_attribute, (const object *) this, name);
}

bool xmlparser::is_empty() const {
	return ___godot_icall_bool(___mb.mb_is_empty, (const object *) this);
}

error xmlparser::open(const string file_) {
	return (error) ___godot_icall_int_String(___mb.mb_open, (const object *) this, file_);
}

error xmlparser::open_buffer(const pool_byte_array buffer) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_open_buffer, (const object *) this, buffer);
}

error xmlparser::read_() {
	return (error) ___godot_icall_int(___mb.mb_read, (const object *) this);
}

error xmlparser::seek(const int64_t position) {
	return (error) ___godot_icall_int_int(___mb.mb_seek, (const object *) this, position);
}

void xmlparser::skip_section() {
	___godot_icall_void(___mb.mb_skip_section, (const object *) this);
}

}