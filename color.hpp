/*
  This is a simple color class that simply provides a 'container' for data
  that can be used to assume its a color.

  It provides no r,g,b,a mentality, it has 4 channels, its up to the
  implimenting programmer to decide what the channels are.
*/

#ifndef COLOR_INCLUDED_7C3DBCF8_82CC_4FFC_BE00_779FCC633E11
#define COLOR_INCLUDED_7C3DBCF8_82CC_4FFC_BE00_779FCC633E11


#include <stdint.h>
#include <array>


namespace util {


// ** INTERFACE ** //

using color = uint32_t;


inline color        color_init(const uint32_t hex_components = 0xC1C2C3C4);
inline color        color_init(const uint8_t c1, const uint8_t c2, const uint8_t c3, const uint8_t c4);
inline color        color_init(const float c1, const float c2, const float c3, const float c4);
inline color        color_init(const std::array<float, 4> &channels);
inline color        color_init(const std::array<uint8_t, 4> &channels);
inline color        color_init(const float channels[], const uint32_t size);
inline color        color_init(const uint8_t channels[] const uint32_t size);

inline uint8_t      color_get_channel_1i(const color get_color_channel);
inline uint8_t      color_get_channel_2i(const color get_color_channel);
inline uint8_t      color_get_channel_3i(const color get_color_channel);
inline uint8_t      color_get_channel_4i(const color get_color_channel);

inline float        color_get_channel_1f(const color get_color_channel);
inline float        color_get_channel_2f(const color get_color_channel);
inline float        color_get_channel_3f(const color get_color_channel);
inline float        color_get_channel_4f(const color get_color_channel);


enum class swizzle {
  first_to_third,     // eg: RGBA -> BGRA
  first_to_last,      // eg: RGBA -> ARGB
  second_to_last,     // eg: ARGB -> ABGR
};

inline color        color_swizzle(const color swizzle_color, const swizzle swizzle_format);


// ** IMPL ** //


} // namespace



#endif // include guard