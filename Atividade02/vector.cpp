#include "vector.h"

// Implementações para Vec2
Vec2::Vec2(float x, float y) : x(x), y(y) {}

Vec2 Vec2::operator+(const Vec2& v) {
    return Vec2(x + v.x, y + v.y);
}

Vec2 Vec2::operator-(const Vec2& v) {
    return Vec2(x - v.x, y - v.y);
}

float Vec2::dot(const Vec2& v) {
    return x * v.x + y * v.y;
}

// Implementações para Vec3
Vec3::Vec3(float x, float y, float z) : x(x), y(y), z(z) {}

Vec3 Vec3::operator+(const Vec3& v) {
    return Vec3(x + v.x, y + v.y, z + v.z);
}

Vec3 Vec3::operator-(const Vec3& v) {
    return Vec3(x - v.x, y - v.y, z - v.z);
}

float Vec3::dot(const Vec3& v) {
    return x * v.x + y * v.y + z * v.z;
}

// Implementações para Vec4
Vec4::Vec4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

Vec4 Vec4::operator+(const Vec4& v) {
    return Vec4(x + v.x, y + v.y, z + v.z, w + v.w);
}

Vec4 Vec4::operator-(const Vec4& v) {
    return Vec4(x - v.x, y - v.y, z - v.z, w - v.w);
}

float Vec4::dot(const Vec4& v) {
    return x * v.x + y * v.y + z * v.z + w * v.w;
}