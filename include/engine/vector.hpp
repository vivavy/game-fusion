#pragma once
#include <cmath>

namespace GF {
    template <typename T>
    class vec3 {
        public:

        T x, y, z;

        vec3();
        vec3(T all);
        vec3(T x, T y, T z);

        vec3<T> operator+(vec3<T> other);

        vec3<T> operator-(vec3<T> other);

        vec3<T> operator*(vec3<T> other);

        vec3<T> operator/(vec3<T> other);

        vec3<T> operator%(vec3<T> other);

        vec3<T> operator+();

        vec3<T> operator+=(vec3<T> other);

        vec3<T> operator-=(vec3<T> other);

        vec3<T> operator*=(vec3<T> other);

        vec3<T> operator/=(vec3<T> other);

        vec3<T> operator%=(vec3<T> other);

        vec3<T> operator-();

        T dot(vec3<T> other);

        unsigned long long len();

        explicit operator bool() const;
    };

    template <typename T>
    class vec2 {
        public:

        T x, y;

        vec2();
        vec2(T all);
        vec2(T x, T y);

        vec2<T> operator+(vec2<T> other);

        vec2<T> operator-(vec2<T> other);

        vec2<T> operator*(vec2<T> other);

        vec2<T> operator/(vec2<T> other);

        vec2<T> operator%(vec2<T> other);

        vec2<T> operator+();

        vec2<T> operator+=(vec2<T> other);

        vec2<T> operator-=(vec2<T> other);

        vec2<T> operator*=(vec2<T> other);

        vec2<T> operator/=(vec2<T> other);

        vec2<T> operator%=(vec2<T> other);

        vec2<T> operator-();

        T dot(vec2<T> other);

        unsigned long long len();

        explicit operator bool() const;
    };
};
