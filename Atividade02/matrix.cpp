#include "matrix.h"

// Implementações para Mat2
Mat2::Mat2() {
    m[0][0] = m[0][1] = m[1][0] = m[1][1] = 0.0f;
}

Mat2 Mat2::operator+(const Mat2& mat) {
    Mat2 result;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            result.m[i][j] = m[i][j] + mat.m[i][j];
    return result;
}

Mat2 Mat2::operator-(const Mat2& mat) {
    Mat2 result;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            result.m[i][j] = m[i][j] - mat.m[i][j];
    return result;
}

Mat2 Mat2::operator*(const Mat2& mat) {
    Mat2 result;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                result.m[i][j] += m[i][k] * mat.m[k][j];
    return result;
}

// Implementações para Mat3
Mat3::Mat3() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            m[i][j] = 0.0f;
}

Mat3 Mat3::operator+(const Mat3& mat) {
    Mat3 result;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            result.m[i][j] = m[i][j] + mat.m[i][j];
    return result;
}


Mat3 Mat3::operator-(const Mat3& mat) {
    Mat3 result;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            result.m[i][j] = m[i][j] - mat.m[i][j];
    return result;
}

Mat3 Mat3::operator*(const Mat3& mat) {
    Mat3 result;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3; ++k)
                result.m[i][j] += m[i][k] * mat.m[k][j];
    return result;
}

// Implementações para Mat4
Mat4::Mat4() {
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            m[i][j] = 0.0f;
}

Mat4 Mat4::operator+(const Mat4& mat) {
    Mat4 result;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            result.m[i][j] = m[i][j] + mat.m[i][j];
    return result;
}

Mat4 Mat4::operator-(const Mat4& mat) {
    Mat4 result;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            result.m[i][j] = m[i][j] - mat.m[i][j];
    return result;
}

Mat4 Mat4::operator*(const Mat4& mat) {
    Mat4 result;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            for (int k = 0; k < 4; ++k)
                result.m[i][j] += m[i][k] * mat.m[k][j];
    return result;
}