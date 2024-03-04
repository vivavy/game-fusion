#include <engine/vector.hpp>


template <typename T>
class GF::vec3 {
    public:

    T x, y, z;

    vec3(): x(0), y(0), z(0) {};
    vec3(T all): x(all), y(all), z(all) {};
    vec3(T x, T y, T z): x(x), y(y), z(z) {};

    vec3<T> operator+(vec3<T> other) {
        return vec3<T>(this->x + other.x, this->y + other.y, this->z + other.z);
    };

    vec3<T> operator-(vec3<T> other) {
        return vec3<T>(this->x - other.x, this->y - other.y, this->z - other.z);
    };

    vec3<T> operator*(vec3<T> other) {
        return vec3<T>(this->x * other.x, this->y * other.y, this->z * other.z);
    };

    vec3<T> operator/(vec3<T> other) {
        return vec3<T>(this->x / other.x, this->y / other.y, this->z / other.z);
    };

    vec3<T> operator%(vec3<T> other) {
        return vec3<T>(this->x % other.x, this->y % other.y, this->z % other.z);
    };

    vec3<T> operator+() {
        return vec3<T>(this->x, this->y, this->z);
    };

    vec3<T> operator+=(vec3<T> other) {
        return vec3<T>(this->x + other.x, this->y + other.y, this->z + other.z);
    };

    vec3<T> operator-=(vec3<T> other) {
        return vec3<T>(this->x - other.x, this->y - other.y, this->z - other.z);
    };

    vec3<T> operator*=(vec3<T> other) {
        return vec3<T>(this->x * other.x, this->y * other.y, this->z * other.z);
    };

    vec3<T> operator/=(vec3<T> other) {
        return vec3<T>(this->x / other.x, this->y / other.y, this->z / other.z);
    };

    vec3<T> operator%=(vec3<T> other) {
        return vec3<T>(this->x % other.x, this->y % other.y, this->z % other.z);
    };

    vec3<T> operator-() {
        return vec3<T>(-this->x, -this->y, -this->z);
    };

    T dot(vec3<T> other) {
        return this->x * other.x + this->y * other.y + this->z * other.z;
    };

    unsigned long long len() {
        return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    };

    explicit operator bool() const {
        return bool(abs(*this));
    };
};


template <typename T>
class vec2 {
    public:

    T x, y;

    vec2(): x(0), y(0) {};
    vec2(T all): x(all), y(all) {};
    vec2(T x, T y): x(x), y(y) {};

    vec2<T> operator+(vec2<T> other) {
        return vec2<T>(this->x + other.x, this->y + other.y);
    };

    vec2<T> operator-(vec2<T> other) {
        return vec2<T>(this->x - other.x, this->y - other.y);
    };

    vec2<T> operator*(vec2<T> other) {
        return vec2<T>(this->x * other.x, this->y * other.y);
    };

    vec2<T> operator/(vec2<T> other) {
        return vec2<T>(this->x / other.x, this->y / other.y);
    };

    vec2<T> operator%(vec2<T> other) {
        return vec2<T>(this->x % other.x, this->y % other.y);
    };

    vec2<T> operator+() {
        return vec2<T>(this->x, this->y);
    };

    vec2<T> operator-() {
        return vec2<T>(-this->x, -this->y);
    };

    vec2<T> operator+=(vec2<T> other) {
        return vec2<T>(this->x + other.x, this->y + other.y);
    };

    vec2<T> operator-=(vec2<T> other) {
        return vec2<T>(this->x - other.x, this->y - other.y);
    };

    vec2<T> operator*=(vec2<T> other) {
        return vec2<T>(this->x * other.x, this->y * other.y);
    };

    vec2<T> operator/=(vec2<T> other) {
        return vec2<T>(this->x / other.x, this->y / other.y);
    };

    vec2<T> operator%=(vec2<T> other) {
        return vec2<T>(this->x % other.x, this->y % other.y);
    };

    T dot(vec2<T> other) {
        return this->x * other.x + this->y * other.y;
    };

    unsigned long long len() {
        return sqrt(this->x * this->x + this->y * this->y);
    };

    explicit operator bool() const {
        return bool(abs(*this));
    };
};
