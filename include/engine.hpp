#pragma once
#include <stdint.h>
#include <engine/vector.hpp>

#define list std::vector

typedef     uint8_t u8   ;
typedef    uint16_t u16  ;
typedef    uint32_t u32  ;
typedef    uint64_t u64  ;
typedef __uint128_t u128 ;

typedef     int8_t  i8   ;
typedef    int16_t  i16  ;
typedef    int32_t  i32  ;
typedef    int64_t  i64  ;
typedef __int128_t  i128 ;

namespace GF {
    /*namespace Base {};
    class Window {};
    class Mouse {};
    class Keyboard {};
    class Physics {};
    class Renderer {}; */

    typedef vec2<float> hvec2;
    typedef vec2<double> fvec2;
    typedef vec2<u8> ubvec2;
    typedef vec2<i8> bvec2;
    typedef vec2<u16> usvec2;
    typedef vec2<i16> svec2;
    typedef vec2<u32> ulvec2;
    typedef vec2<i32> lvec2;
    typedef vec2<u64> uvec2;
    typedef vec2<i64> ivec2;

    typedef vec3<float> hvec3;
    typedef vec3<double> fvec3;
    typedef vec3<u8> ubvec3;
    typedef vec3<i8> bvec3;
    typedef vec3<u16> usvec3;
    typedef vec3<i16> svec3;
    typedef vec3<u32> ulvec3;
    typedef vec3<i32> lvec3;
    typedef vec3<u64> uvec3;
    typedef vec3<i64> ivec3;
};

#include <engine/window.hpp>

