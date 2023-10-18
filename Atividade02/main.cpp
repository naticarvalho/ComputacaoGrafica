// main.cpp
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "vector.h"
#include "matrix.h"

TEST_CASE("Test Vec2") {
    Vec2 v1(1, 2), v2(3, 4);

    SUBCASE("Addition") {
        Vec2 v3 = v1 + v2;
        CHECK(v3.x == 4);
        CHECK(v3.y == 6);
    }

    SUBCASE("Subtraction") {
        Vec2 v3 = v1 - v2;
        CHECK(v3.x == -2);
        CHECK(v3.y == -2);
    }

    SUBCASE("Dot product") {
        float dot = v1.dot(v2);
        CHECK(dot == 11);
    }
}

TEST_CASE("Test Vec3") {
    Vec3 v1(1, 2, 3), v2(4, 5, 6);

    SUBCASE("Addition") {
        Vec3 v3 = v1 + v2;
        CHECK(v3.x == 5);
        CHECK(v3.y == 7);
        CHECK(v3.z == 9);
    }

    SUBCASE("Subtraction") {
        Vec3 v3 = v1 - v2;
        CHECK(v3.x == -3);
        CHECK(v3.y == -3);
        CHECK(v3.z == -3);
    }

    SUBCASE("Dot product") {
        float dot = v1.dot(v2);
        CHECK(dot == 32);
    }
}

TEST_CASE("Test Vec4") {
    Vec4 v1(1, 2, 3, 4), v2(5, 6, 7, 8);

    SUBCASE("Addition") {
        Vec4 v3 = v1 + v2;
        CHECK(v3.x == 6);
        CHECK(v3.y == 8);
        CHECK(v3.z == 10);
        CHECK(v3.w == 12);
    }

    SUBCASE("Subtraction") {
        Vec4 v3 = v1 - v2;
        CHECK(v3.x == -4);
        CHECK(v3.y == -4);
        CHECK(v3.z == -4);
        CHECK(v3.w == -4);
    }

    SUBCASE("Dot product") {
        float dot = v1.dot(v2);
        CHECK(dot == 70);
    }
}

TEST_CASE("Test Mat2") {
    Mat2 m1, m2;
    m1.m[0][0] = 1; m1.m[0][1] = 2;
    m1.m[1][0] = 3; m1.m[1][1] = 4;
    m2.m[0][0] = 5; m2.m[0][1] = 6;
    m2.m[1][0] = 7; m2.m[1][1] = 8;

    SUBCASE("Addition") {
        Mat2 m3 = m1 + m2;
        CHECK(m3.m[0][0] == 6);
        CHECK(m3.m[0][1] == 8);
        CHECK(m3.m[1][0] == 10);
        CHECK(m3.m[1][1] == 12);
    }

    SUBCASE("Subtraction") {
        Mat2 m3 = m1 - m2;
        CHECK(m3.m[0][0] == -4);
        CHECK(m3.m[0][1] == -4);
        CHECK(m3.m[1][0] == -4);
        CHECK(m3.m[1][1] == -4);
    }

    SUBCASE("Multiplication") {
        Mat2 m3 = m1 * m2;
        CHECK(m3.m[0][0] == 19);
        CHECK(m3.m[0][1] == 22);
        CHECK(m3.m[1][0] == 43);
        CHECK(m3.m[1][1] == 50);
    }
}

TEST_CASE("Test Mat3") {
    Mat3 m1, m2;
    m1.m[0][0] = 1; m1.m[0][1] = 2; m1.m[0][2] = 3;
    m1.m[1][0] = 4; m1.m[1][1] = 5; m1.m[1][2] = 6;
    m1.m[2][0] = 7; m1.m[2][1] = 8; m1.m[2][2] = 9;
    m2.m[0][0] = 10; m2.m[0][1] = 11; m2.m[0][2] = 12;
    m2.m[1][0] = 13; m2.m[1][1] = 14; m2.m[1][2] = 15;
    m2.m[2][0] = 16; m2.m[2][1] = 17; m2.m[2][2] = 18;

    SUBCASE("Addition") {
        Mat3 m3 = m1 + m2;
        CHECK(m3.m[0][0] == 11);
        CHECK(m3.m[0][1] == 13);
        CHECK(m3.m[0][2] == 15);
        CHECK(m3.m[1][0] == 17);
        CHECK(m3.m[1][1] == 19);
        CHECK(m3.m[1][2] == 21);
        CHECK(m3.m[2][0] == 23);
        CHECK(m3.m[2][1] == 25);
        CHECK(m3.m[2][2] == 27);
    }

    SUBCASE("Subtraction") {
        Mat3 m3 = m1 - m2;
        CHECK(m3.m[0][0] == -9);
        CHECK(m3.m[0][1] == -9);
        CHECK(m3.m[0][2] == -9);
        CHECK(m3.m[1][0] == -9);
        CHECK(m3.m[1][1] == -9);
        CHECK(m3.m[1][2] == -9);
        CHECK(m3.m[2][0] == -9);
        CHECK(m3.m[2][1] == -9);
        CHECK(m3.m[2][2] == -9);
    }

    SUBCASE("Multiplication") {
        Mat3 m3 = m1 * m2;
        CHECK(m3.m[0][0] == 84);
        CHECK(m3.m[0][1] == 90);
        CHECK(m3.m[0][2] == 96);
        CHECK(m3.m[1][0] == 201);
        CHECK(m3.m[1][1] == 216);
        CHECK(m3.m[1][2] == 231);
        CHECK(m3.m[2][0] == 318);
        CHECK(m3.m[2][1] == 342);
        CHECK(m3.m[2][2] == 366);
    }
}

TEST_CASE("Test Mat4") {
    Mat4 m1, m2;
    // Inicialize m1 e m2
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            m1.m[i][j] = (i+1)*(j+1);
            m2.m[i][j] = (i+2)*(j+2);
        }
    }
  
    SUBCASE("Addition") {
        Mat4 m3 = m1 + m2;
        for (int i = 0; i < 4; ++i) 
            for (int j = 0; j < 4; ++j)
                CHECK(m3.m[i][j] == m1.m[i][j] + m2.m[i][j]);
    }

    SUBCASE("Subtraction") {
        Mat4 m3 = m1 - m2;
        for (int i = 0; i < 4; ++i) 
            for (int j = 0; j < 4; ++j)
                CHECK(m3.m[i][j] == m1.m[i][j] - m2.m[i][j]);
    }

    SUBCASE("Multiplication") {
        Mat4 m3 = m1 * m2;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                float sum = 0;
                for (int k = 0; k < 4; ++k)
                    sum += m1.m[i][k] * m2.m[k][j];
                CHECK(m3.m[i][j] == sum);
            }
        }
    }
}