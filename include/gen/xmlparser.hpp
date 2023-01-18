#ifndef GODOT_CPP_XMLPARSER_HPP
#define GODOT_CPP_XMLPARSER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "xmlparser.hpp"

#include "reference.hpp"
namespace gd {


class xmlparser : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_attribute_count;
		godot_method_bind *mb_get_attribute_name;
		godot_method_bind *mb_get_attribute_value;
		godot_method_bind *mb_get_current_line;
		godot_method_bind *mb_get_named_attribute_value;
		godot_method_bind *mb_get_named_attribute_value_safe;
		godot_method_bind *mb_get_node_data;
		godot_method_bind *mb_get_node_name;
		godot_method_bind *mb_get_node_offset;
		godot_method_bind *mb_get_node_type;
		godot_method_bind *mb_has_attribute;
		godot_method_bind *mb_is_empty;
		godot_method_bind *mb_open;
		godot_method_bind *mb_open_buffer;
		godot_method_bind *mb_read;
		godot_method_bind *mb_seek;
		godot_method_bind *mb_skip_section;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "XMLParser"; }
	static inline const char *___get_godot_class_name() { return (const char *) "XMLParser"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum NodeType {
		NODE_NONE = 0,
		NODE_ELEMENT = 1,
		NODE_ELEMENT_END = 2,
		NODE_TEXT = 3,
		NODE_COMMENT = 4,
		NODE_CDATA = 5,
		NODE_UNKNOWN = 6,
	};

	// constants


	static xmlparser *_new();

	// methods
	int64_t get_attribute_count() const;
	string get_attribute_name(const int64_t idx) const;
	string get_attribute_value(const int64_t idx) const;
	int64_t get_current_line() const;
	string get_named_attribute_value(const string name) const;
	string get_named_attribute_value_safe(const string name) const;
	string get_node_data() const;
	string get_node_name() const;
	int64_t get_node_offset() const;
	xmlparser::NodeType get_node_type();
	bool has_attribute(const string name) const;
	bool is_empty() const;
	error open(const string file_);
	error open_buffer(const pool_byte_array buffer);
	error read_();
	error seek(const int64_t position);
	void skip_section();

};

}

#endif