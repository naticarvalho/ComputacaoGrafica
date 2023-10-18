// vector.h
#pragma once

class Vec2 {
public:
    float x, y;

    Vec2(float x = 0.0f, float y = 0.0f);
    Vec2 operator+(const Vec2& v);
    Vec2 operator-(const Vec2& v);
    float dot(const Vec2& v);
};

class Vec3 {
public:
    float x, y, z;

    Vec3(float x = 0.0f, float y = 0.0f, float z = 0.0f);
    Vec3 operator+(const Vec3& v);
    Vec3 operator-(const Vec3& v);
    float dot(const Vec3& v);
};

class Vec4 {
public:
    float x, y, z, w;

    Vec4(float x = 0.0f, float y = 0.0f, float z = 0.0f, float w = 0.0f);
    Vec4 operator+(const Vec4& v);
    Vec4 operator-(const Vec4& v);
    float dot(const Vec4& v);
};