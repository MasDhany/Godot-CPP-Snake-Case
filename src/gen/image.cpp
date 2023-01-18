#include "image.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


image::___method_bindings image::___mb = {};

void *image::_detail_class_tag = nullptr;

void image::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("Image", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("Image", "_set_data");
	___mb.mb_blend_rect = gd::api->godot_method_bind_get_method("Image", "blend_rect");
	___mb.mb_blend_rect_mask = gd::api->godot_method_bind_get_method("Image", "blend_rect_mask");
	___mb.mb_blit_rect = gd::api->godot_method_bind_get_method("Image", "blit_rect");
	___mb.mb_blit_rect_mask = gd::api->godot_method_bind_get_method("Image", "blit_rect_mask");
	___mb.mb_bumpmap_to_normalmap = gd::api->godot_method_bind_get_method("Image", "bumpmap_to_normalmap");
	___mb.mb_clear_mipmaps = gd::api->godot_method_bind_get_method("Image", "clear_mipmaps");
	___mb.mb_compress = gd::api->godot_method_bind_get_method("Image", "compress");
	___mb.mb_convert = gd::api->godot_method_bind_get_method("Image", "convert");
	___mb.mb_copy_from = gd::api->godot_method_bind_get_method("Image", "copy_from");
	___mb.mb_create = gd::api->godot_method_bind_get_method("Image", "create");
	___mb.mb_create_from_data = gd::api->godot_method_bind_get_method("Image", "create_from_data");
	___mb.mb_crop = gd::api->godot_method_bind_get_method("Image", "crop");
	___mb.mb_decompress = gd::api->godot_method_bind_get_method("Image", "decompress");
	___mb.mb_detect_alpha = gd::api->godot_method_bind_get_method("Image", "detect_alpha");
	___mb.mb_expand_x2_hq2x = gd::api->godot_method_bind_get_method("Image", "expand_x2_hq2x");
	___mb.mb_fill = gd::api->godot_method_bind_get_method("Image", "fill");
	___mb.mb_fill_rect = gd::api->godot_method_bind_get_method("Image", "fill_rect");
	___mb.mb_fix_alpha_edges = gd::api->godot_method_bind_get_method("Image", "fix_alpha_edges");
	___mb.mb_flip_x = gd::api->godot_method_bind_get_method("Image", "flip_x");
	___mb.mb_flip_y = gd::api->godot_method_bind_get_method("Image", "flip_y");
	___mb.mb_generate_mipmaps = gd::api->godot_method_bind_get_method("Image", "generate_mipmaps");
	___mb.mb_get_data = gd::api->godot_method_bind_get_method("Image", "get_data");
	___mb.mb_get_format = gd::api->godot_method_bind_get_method("Image", "get_format");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("Image", "get_height");
	___mb.mb_get_mipmap_offset = gd::api->godot_method_bind_get_method("Image", "get_mipmap_offset");
	___mb.mb_get_pixel = gd::api->godot_method_bind_get_method("Image", "get_pixel");
	___mb.mb_get_pixelv = gd::api->godot_method_bind_get_method("Image", "get_pixelv");
	___mb.mb_get_rect = gd::api->godot_method_bind_get_method("Image", "get_rect");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("Image", "get_size");
	___mb.mb_get_used_rect = gd::api->godot_method_bind_get_method("Image", "get_used_rect");
	___mb.mb_get_width = gd::api->godot_method_bind_get_method("Image", "get_width");
	___mb.mb_has_mipmaps = gd::api->godot_method_bind_get_method("Image", "has_mipmaps");
	___mb.mb_is_compressed = gd::api->godot_method_bind_get_method("Image", "is_compressed");
	___mb.mb_is_empty = gd::api->godot_method_bind_get_method("Image", "is_empty");
	___mb.mb_is_invisible = gd::api->godot_method_bind_get_method("Image", "is_invisible");
	___mb.mb_load = gd::api->godot_method_bind_get_method("Image", "load");
	___mb.mb_load_bmp_from_buffer = gd::api->godot_method_bind_get_method("Image", "load_bmp_from_buffer");
	___mb.mb_load_jpg_from_buffer = gd::api->godot_method_bind_get_method("Image", "load_jpg_from_buffer");
	___mb.mb_load_png_from_buffer = gd::api->godot_method_bind_get_method("Image", "load_png_from_buffer");
	___mb.mb_load_tga_from_buffer = gd::api->godot_method_bind_get_method("Image", "load_tga_from_buffer");
	___mb.mb_load_webp_from_buffer = gd::api->godot_method_bind_get_method("Image", "load_webp_from_buffer");
	___mb.mb_lock = gd::api->godot_method_bind_get_method("Image", "lock");
	___mb.mb_normalmap_to_xy = gd::api->godot_method_bind_get_method("Image", "normalmap_to_xy");
	___mb.mb_premultiply_alpha = gd::api->godot_method_bind_get_method("Image", "premultiply_alpha");
	___mb.mb_resize = gd::api->godot_method_bind_get_method("Image", "resize");
	___mb.mb_resize_to_po2 = gd::api->godot_method_bind_get_method("Image", "resize_to_po2");
	___mb.mb_rgbe_to_srgb = gd::api->godot_method_bind_get_method("Image", "rgbe_to_srgb");
	___mb.mb_save_exr = gd::api->godot_method_bind_get_method("Image", "save_exr");
	___mb.mb_save_png = gd::api->godot_method_bind_get_method("Image", "save_png");
	___mb.mb_save_png_to_buffer = gd::api->godot_method_bind_get_method("Image", "save_png_to_buffer");
	___mb.mb_set_pixel = gd::api->godot_method_bind_get_method("Image", "set_pixel");
	___mb.mb_set_pixelv = gd::api->godot_method_bind_get_method("Image", "set_pixelv");
	___mb.mb_shrink_x2 = gd::api->godot_method_bind_get_method("Image", "shrink_x2");
	___mb.mb_srgb_to_linear = gd::api->godot_method_bind_get_method("Image", "srgb_to_linear");
	___mb.mb_unlock = gd::api->godot_method_bind_get_method("Image", "unlock");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Image");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

image *image::_new()
{
	return (image *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Image")());
}
dictionary image::_get_data() const {
	return ___godot_icall_Dictionary(___mb.mb__get_data, (const object *) this);
}

void image::_set_data(const dictionary data) {
	___godot_icall_void_Dictionary(___mb.mb__set_data, (const object *) this, data);
}

void image::blend_rect(const ref<image> src, const rect2 src_rect, const vector2 dst) {
	___godot_icall_void_Object_Rect2_Vector2(___mb.mb_blend_rect, (const object *) this, src.ptr(), src_rect, dst);
}

void image::blend_rect_mask(const ref<image> src, const ref<image> mask, const rect2 src_rect, const vector2 dst) {
	___godot_icall_void_Object_Object_Rect2_Vector2(___mb.mb_blend_rect_mask, (const object *) this, src.ptr(), mask.ptr(), src_rect, dst);
}

void image::blit_rect(const ref<image> src, const rect2 src_rect, const vector2 dst) {
	___godot_icall_void_Object_Rect2_Vector2(___mb.mb_blit_rect, (const object *) this, src.ptr(), src_rect, dst);
}

void image::blit_rect_mask(const ref<image> src, const ref<image> mask, const rect2 src_rect, const vector2 dst) {
	___godot_icall_void_Object_Object_Rect2_Vector2(___mb.mb_blit_rect_mask, (const object *) this, src.ptr(), mask.ptr(), src_rect, dst);
}

void image::bumpmap_to_normalmap(const real_t bump_scale) {
	___godot_icall_void_float(___mb.mb_bumpmap_to_normalmap, (const object *) this, bump_scale);
}

void image::clear_mipmaps() {
	___godot_icall_void(___mb.mb_clear_mipmaps, (const object *) this);
}

error image::compress(const int64_t mode, const int64_t source, const real_t lossy_quality) {
	return (error) ___godot_icall_int_int_int_float(___mb.mb_compress, (const object *) this, mode, source, lossy_quality);
}

void image::convert(const int64_t format) {
	___godot_icall_void_int(___mb.mb_convert, (const object *) this, format);
}

void image::copy_from(const ref<image> src) {
	___godot_icall_void_Object(___mb.mb_copy_from, (const object *) this, src.ptr());
}

void image::create(const int64_t width, const int64_t height, const bool use_mipmaps, const int64_t format) {
	___godot_icall_void_int_int_bool_int(___mb.mb_create, (const object *) this, width, height, use_mipmaps, format);
}

void image::create_from_data(const int64_t width, const int64_t height, const bool use_mipmaps, const int64_t format, const pool_byte_array data) {
	___godot_icall_void_int_int_bool_int_PoolByteArray(___mb.mb_create_from_data, (const object *) this, width, height, use_mipmaps, format, data);
}

void image::crop(const int64_t width, const int64_t height) {
	___godot_icall_void_int_int(___mb.mb_crop, (const object *) this, width, height);
}

error image::decompress() {
	return (error) ___godot_icall_int(___mb.mb_decompress, (const object *) this);
}

image::AlphaMode image::detect_alpha() const {
	return (image::AlphaMode) ___godot_icall_int(___mb.mb_detect_alpha, (const object *) this);
}

void image::expand_x2_hq2x() {
	___godot_icall_void(___mb.mb_expand_x2_hq2x, (const object *) this);
}

void image::fill(const color color_) {
	___godot_icall_void_Color(___mb.mb_fill, (const object *) this, color_);
}

void image::fill_rect(const rect2 rect, const color color_) {
	___godot_icall_void_Rect2_Color(___mb.mb_fill_rect, (const object *) this, rect, color_);
}

void image::fix_alpha_edges() {
	___godot_icall_void(___mb.mb_fix_alpha_edges, (const object *) this);
}

void image::flip_x() {
	___godot_icall_void(___mb.mb_flip_x, (const object *) this);
}

void image::flip_y() {
	___godot_icall_void(___mb.mb_flip_y, (const object *) this);
}

error image::generate_mipmaps(const bool renormalize) {
	return (error) ___godot_icall_int_bool(___mb.mb_generate_mipmaps, (const object *) this, renormalize);
}

pool_byte_array image::get_data() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_data, (const object *) this);
}

image::Format image::get_format() const {
	return (image::Format) ___godot_icall_int(___mb.mb_get_format, (const object *) this);
}

int64_t image::get_height() const {
	return ___godot_icall_int(___mb.mb_get_height, (const object *) this);
}

int64_t image::get_mipmap_offset(const int64_t mipmap) const {
	return ___godot_icall_int_int(___mb.mb_get_mipmap_offset, (const object *) this, mipmap);
}

color image::get_pixel(const int64_t x, const int64_t y) const {
	return ___godot_icall_Color_int_int(___mb.mb_get_pixel, (const object *) this, x, y);
}

color image::get_pixelv(const vector2 src) const {
	return ___godot_icall_Color_Vector2(___mb.mb_get_pixelv, (const object *) this, src);
}

ref<image> image::get_rect(const rect2 rect) const {
	return ref<image>::__internal_constructor(___godot_icall_Object_Rect2(___mb.mb_get_rect, (const object *) this, rect));
}

vector2 image::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

rect2 image::get_used_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_used_rect, (const object *) this);
}

int64_t image::get_width() const {
	return ___godot_icall_int(___mb.mb_get_width, (const object *) this);
}

bool image::has_mipmaps() const {
	return ___godot_icall_bool(___mb.mb_has_mipmaps, (const object *) this);
}

bool image::is_compressed() const {
	return ___godot_icall_bool(___mb.mb_is_compressed, (const object *) this);
}

bool image::is_empty() const {
	return ___godot_icall_bool(___mb.mb_is_empty, (const object *) this);
}

bool image::is_invisible() const {
	return ___godot_icall_bool(___mb.mb_is_invisible, (const object *) this);
}

error image::load(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_load, (const object *) this, path_);
}

error image::load_bmp_from_buffer(const pool_byte_array buffer) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_load_bmp_from_buffer, (const object *) this, buffer);
}

error image::load_jpg_from_buffer(const pool_byte_array buffer) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_load_jpg_from_buffer, (const object *) this, buffer);
}

error image::load_png_from_buffer(const pool_byte_array buffer) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_load_png_from_buffer, (const object *) this, buffer);
}

error image::load_tga_from_buffer(const pool_byte_array buffer) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_load_tga_from_buffer, (const object *) this, buffer);
}

error image::load_webp_from_buffer(const pool_byte_array buffer) {
	return (error) ___godot_icall_int_PoolByteArray(___mb.mb_load_webp_from_buffer, (const object *) this, buffer);
}

void image::lock() {
	___godot_icall_void(___mb.mb_lock, (const object *) this);
}

void image::normalmap_to_xy() {
	___godot_icall_void(___mb.mb_normalmap_to_xy, (const object *) this);
}

void image::premultiply_alpha() {
	___godot_icall_void(___mb.mb_premultiply_alpha, (const object *) this);
}

void image::resize(const int64_t width, const int64_t height, const int64_t interpolation) {
	___godot_icall_void_int_int_int(___mb.mb_resize, (const object *) this, width, height, interpolation);
}

void image::resize_to_po2(const bool square, const int64_t interpolation) {
	___godot_icall_void_bool_int(___mb.mb_resize_to_po2, (const object *) this, square, interpolation);
}

ref<image> image::rgbe_to_srgb() {
	return ref<image>::__internal_constructor(___godot_icall_Object(___mb.mb_rgbe_to_srgb, (const object *) this));
}

error image::save_exr(const string path_, const bool grayscale) const {
	return (error) ___godot_icall_int_String_bool(___mb.mb_save_exr, (const object *) this, path_, grayscale);
}

error image::save_png(const string path_) const {
	return (error) ___godot_icall_int_String(___mb.mb_save_png, (const object *) this, path_);
}

pool_byte_array image::save_png_to_buffer() const {
	return ___godot_icall_PoolByteArray(___mb.mb_save_png_to_buffer, (const object *) this);
}

void image::set_pixel(const int64_t x, const int64_t y, const color color_) {
	___godot_icall_void_int_int_Color(___mb.mb_set_pixel, (const object *) this, x, y, color_);
}

void image::set_pixelv(const vector2 dst, const color color_) {
	___godot_icall_void_Vector2_Color(___mb.mb_set_pixelv, (const object *) this, dst, color_);
}

void image::shrink_x2() {
	___godot_icall_void(___mb.mb_shrink_x2, (const object *) this);
}

void image::srgb_to_linear() {
	___godot_icall_void(___mb.mb_srgb_to_linear, (const object *) this);
}

void image::unlock() {
	___godot_icall_void(___mb.mb_unlock, (const object *) this);
}

}