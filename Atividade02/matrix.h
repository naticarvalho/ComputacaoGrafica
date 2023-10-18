// matrix.h
#pragma once

class Mat2 {
public:
    float m[2][2];

    Mat2();
    Mat2 operator+(const Mat2& mat);
    Mat2 operator-(const Mat2& mat);
    Mat2 operator*(const Mat2& mat);
};

class Mat3 {
public:
    float m[3][3];

    Mat3();
    Mat3 operator+(const Mat3& mat);
    Mat3 operator-(const Mat3& mat);
    Mat3 operator*(const Mat3& mat);
};

class Mat4 {
public:
    float m[4][4];

    Mat4();
    Mat4 operator+(const Mat4& mat);
    Mat4 operator-(const Mat4& mat);
    Mat4 operator*(const Mat4& mat);
};